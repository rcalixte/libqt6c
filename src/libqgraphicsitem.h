#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSITEM_H
#define SRCQT6C_LIBQGRAPHICSITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqbrush.h"
#include "libqevent.h"
#include "libqcolor.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsscene.h"
#include "libqgraphicstransform.h"
#include "libqgraphicswidget.h"
#include "libqline.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpen.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqtextcursor.h"
#include "libqtextdocument.h"
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicsitem.html

/// q_graphicsitem_new constructs a new QGraphicsItem object.
///
///
QGraphicsItem* q_graphicsitem_new();

/// q_graphicsitem_new2 constructs a new QGraphicsItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsItem* q_graphicsitem_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsItem* self ```
QGraphicsScene* q_graphicsitem_scene(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_parent_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_top_level_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsItem* self ```
QGraphicsObject* q_graphicsitem_parent_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsItem* self ```
QGraphicsWidget* q_graphicsitem_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsItem* self ```
QGraphicsWidget* q_graphicsitem_top_level_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsItem* self ```
QGraphicsWidget* q_graphicsitem_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_panel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* parent ```
void q_graphicsitem_set_parent_item(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsitem_child_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_panel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsItem* self ```
QGraphicsObject* q_graphicsitem_to_graphics_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsItem* self ```
QGraphicsObject* q_graphicsitem_to_graphics_object2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsItem* self ```
QGraphicsItemGroup* q_graphicsitem_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsItem* self, QGraphicsItemGroup* group ```
void q_graphicsitem_set_group(void* self, void* group);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsItem* self ```
int64_t q_graphicsitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsitem_set_flag(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsItem* self, int flags ```
void q_graphicsitem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsItem* self ```
int64_t q_graphicsitem_cache_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsitem_set_cache_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsItem* self ```
int64_t q_graphicsitem_panel_modality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsitem_set_panel_modality(void* self, int64_t panelModality);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_blocked_by_modal_panel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsItem* self ```
const char* q_graphicsitem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsItem* self, const char* toolTip ```
void q_graphicsitem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsItem* self ```
QCursor* q_graphicsitem_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsItem* self, QCursor* cursor ```
void q_graphicsitem_set_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_has_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_unset_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsItem* self, QGraphicsItem* parent ```
bool q_graphicsitem_is_visible_to(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsItem* self, bool visible ```
void q_graphicsitem_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsItem* self, bool enabled ```
void q_graphicsitem_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsItem* self, bool selected ```
void q_graphicsitem_set_selected(void* self, bool selected);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_accept_drops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsItem* self, bool on ```
void q_graphicsitem_set_accept_drops(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_effective_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsItem* self, double opacity ```
void q_graphicsitem_set_opacity(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsItem* self ```
QGraphicsEffect* q_graphicsitem_graphics_effect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsItem* self, QGraphicsEffect* effect ```
void q_graphicsitem_set_graphics_effect(void* self, void* effect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsItem* self ```
int64_t q_graphicsitem_accepted_mouse_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsItem* self, int buttons ```
void q_graphicsitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_accept_hover_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsItem* self, bool enabled ```
void q_graphicsitem_set_accept_hover_events(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_accept_touch_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsItem* self, bool enabled ```
void q_graphicsitem_set_accept_touch_events(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_filters_child_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsItem* self, bool enabled ```
void q_graphicsitem_set_filters_child_events(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_handles_child_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsItem* self, bool enabled ```
void q_graphicsitem_set_handles_child_events(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsItem* self, bool active ```
void q_graphicsitem_set_active(void* self, bool active);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_has_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_set_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_clear_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_focus_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item ```
void q_graphicsitem_set_focus_proxy(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_focus_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsItem* self ```
QGraphicsItem* q_graphicsitem_focus_scope_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_grab_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_ungrab_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_grab_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_ungrab_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsItem* self ```
QPointF* q_graphicsitem_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsItem* self, double x ```
void q_graphicsitem_set_x(void* self, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsItem* self, double y ```
void q_graphicsitem_set_y(void* self, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsItem* self ```
QPointF* q_graphicsitem_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsItem* self, QPointF* pos ```
void q_graphicsitem_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsItem* self, double x, double y ```
void q_graphicsitem_set_pos2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsItem* self, double dx, double dy ```
void q_graphicsitem_move_by(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_ensure_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
void q_graphicsitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsItem* self ```
QTransform* q_graphicsitem_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsItem* self ```
QTransform* q_graphicsitem_scene_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsItem* self, QTransform* viewportTransform ```
QTransform* q_graphicsitem_device_transform(void* self, void* viewportTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsItem* self, QGraphicsItem* other ```
QTransform* q_graphicsitem_item_transform(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsItem* self, QTransform* matrix ```
void q_graphicsitem_set_transform(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_reset_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsItem* self, double angle ```
void q_graphicsitem_set_rotation(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsItem* self, double scale ```
void q_graphicsitem_set_scale(void* self, double scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsitem_transformations(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsItem* self, QGraphicsTransform* transformations[] ```
void q_graphicsitem_set_transformations(void* self, void* transformations[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsItem* self ```
QPointF* q_graphicsitem_transform_origin_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsItem* self, QPointF* origin ```
void q_graphicsitem_set_transform_origin_point(void* self, void* origin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsItem* self, double ax, double ay ```
void q_graphicsitem_set_transform_origin_point2(void* self, double ax, double ay);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// ``` QGraphicsItem* self, int phase ```
void q_graphicsitem_advance(void* self, int phase);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, int) ```
void q_graphicsitem_on_advance(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, int phase ```
void q_graphicsitem_qbase_advance(void* self, int phase);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_z_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsItem* self, double z ```
void q_graphicsitem_set_z_value(void* self, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsItem* self, QGraphicsItem* sibling ```
void q_graphicsitem_stack_before(void* self, void* sibling);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRect)
///
/// ``` QGraphicsItem* self ```
QRectF* q_graphicsitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QRectF* (*slot)() ```
void q_graphicsitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
QRectF* q_graphicsitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsItem* self ```
QRectF* q_graphicsitem_children_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsItem* self ```
QRectF* q_graphicsitem_scene_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// ``` QGraphicsItem* self ```
QPainterPath* q_graphicsitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QPainterPath* (*slot)() ```
void q_graphicsitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
QPainterPath* q_graphicsitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_clipped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsItem* self ```
QPainterPath* q_graphicsitem_clip_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// ``` QGraphicsItem* self, QPointF* point ```
bool q_graphicsitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QPointF*) ```
void q_graphicsitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QPointF* point ```
bool q_graphicsitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitem_collides_with_item(void* self, void* other, int64_t mode);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// ``` QGraphicsItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitem_collides_with_path(void* self, void* path, int64_t mode);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsitem_colliding_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_obscured(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
bool q_graphicsitem_is_obscured2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item ```
bool q_graphicsitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QGraphicsItem*) ```
void q_graphicsitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsItem* item ```
bool q_graphicsitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// ``` QGraphicsItem* self ```
QPainterPath* q_graphicsitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QPainterPath* (*slot)() ```
void q_graphicsitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
QPainterPath* q_graphicsitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsitem_bounding_region(void* self, void* itemToDeviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsItem* self ```
double q_graphicsitem_bounding_region_granularity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsItem* self, double granularity ```
void q_graphicsitem_set_bounding_region_granularity(void* self, double granularity);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#paint)
///
/// ``` QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItem* self, double x, double y, double width, double height ```
void q_graphicsitem_update2(void* self, double x, double y, double width, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsItem* self, double dx, double dy ```
void q_graphicsitem_scroll(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsitem_map_to_item(void* self, void* item, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItem* self, QPointF* point ```
QPointF* q_graphicsitem_map_to_parent(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItem* self, QPointF* point ```
QPointF* q_graphicsitem_map_to_scene(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_to_item(void* self, void* item, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_to_parent(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_to_scene(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_to_item4(void* self, void* item, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItem* self, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_to_parent_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItem* self, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_to_scene_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsitem_map_from_item(void* self, void* item, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItem* self, QPointF* point ```
QPointF* q_graphicsitem_map_from_parent(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItem* self, QPointF* point ```
QPointF* q_graphicsitem_map_from_scene(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_from_item(void* self, void* item, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_from_parent(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
QRectF* q_graphicsitem_map_rect_from_scene(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_from_item4(void* self, void* item, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItem* self, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_from_parent_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItem* self, QPainterPath* path ```
QPainterPath* q_graphicsitem_map_from_scene_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsitem_map_to_item5(void* self, void* item, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItem* self, double x, double y ```
QPointF* q_graphicsitem_map_to_parent2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItem* self, double x, double y ```
QPointF* q_graphicsitem_map_to_scene2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsitem_map_from_item5(void* self, void* item, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItem* self, double x, double y ```
QPointF* q_graphicsitem_map_from_parent2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItem* self, double x, double y ```
QPointF* q_graphicsitem_map_from_scene2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsItem* self, QGraphicsItem* child ```
bool q_graphicsitem_is_ancestor_of(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsitem_common_ancestor_item(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsItem* self ```
bool q_graphicsitem_is_under_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsItem* self, int key ```
QVariant* q_graphicsitem_data(void* self, int key);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsItem* self, int key, QVariant* value ```
void q_graphicsitem_set_data(void* self, int key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsItem* self ```
int64_t q_graphicsitem_input_method_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsItem* self, int hints ```
void q_graphicsitem_set_input_method_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#type)
///
/// ``` QGraphicsItem* self ```
int32_t q_graphicsitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, int32_t (*slot)() ```
void q_graphicsitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
int32_t q_graphicsitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsItem* self, QGraphicsItem* filterItem ```
void q_graphicsitem_install_scene_event_filter(void* self, void* filterItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsItem* self, QGraphicsItem* filterItem ```
void q_graphicsitem_remove_scene_event_filter(void* self, void* filterItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_update_micro_focus(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)() ```
void q_graphicsitem_on_update_micro_focus(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_qbase_update_micro_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// ``` QGraphicsItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsitem_scene_event_filter(void* self, void* watched, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QGraphicsItem*, QEvent*) ```
void q_graphicsitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// ``` QGraphicsItem* self, QEvent* event ```
bool q_graphicsitem_scene_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, QEvent*) ```
void q_graphicsitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QEvent* event ```
bool q_graphicsitem_qbase_scene_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsitem_context_menu_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsitem_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_drag_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_drag_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_drag_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_drop_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitem_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// ``` QGraphicsItem* self, QFocusEvent* event ```
void q_graphicsitem_focus_in_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QFocusEvent*) ```
void q_graphicsitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QFocusEvent* event ```
void q_graphicsitem_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// ``` QGraphicsItem* self, QFocusEvent* event ```
void q_graphicsitem_focus_out_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QFocusEvent*) ```
void q_graphicsitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QFocusEvent* event ```
void q_graphicsitem_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_hover_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_qbase_hover_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_hover_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_qbase_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_hover_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitem_qbase_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// ``` QGraphicsItem* self, QKeyEvent* event ```
void q_graphicsitem_key_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QKeyEvent*) ```
void q_graphicsitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QKeyEvent* event ```
void q_graphicsitem_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// ``` QGraphicsItem* self, QKeyEvent* event ```
void q_graphicsitem_key_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QKeyEvent*) ```
void q_graphicsitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QKeyEvent* event ```
void q_graphicsitem_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_mouse_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_mouse_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_mouse_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_mouse_double_click_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitem_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// ``` QGraphicsItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsitem_wheel_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicsitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsitem_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// ``` QGraphicsItem* self, QInputMethodEvent* event ```
void q_graphicsitem_input_method_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, QInputMethodEvent*) ```
void q_graphicsitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QInputMethodEvent* event ```
void q_graphicsitem_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// ``` QGraphicsItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsitem_input_method_query(void* self, int64_t query);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QVariant* (*slot)(QGraphicsItem*, enum Qt__InputMethodQuery) ```
void q_graphicsitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsitem_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsitem_item_change(void* self, int64_t change, void* value);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QVariant* (*slot)(QGraphicsItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsitem_qbase_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, bool (*slot)(QGraphicsItem*, enum QGraphicsItem__Extension) ```
void q_graphicsitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)(QGraphicsItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// ``` QGraphicsItem* self, QVariant* variant ```
QVariant* q_graphicsitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, QVariant* (*slot)(QGraphicsItem*, QVariant*) ```
void q_graphicsitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItem* self, QVariant* variant ```
QVariant* q_graphicsitem_qbase_extension(void* self, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_add_to_index(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)() ```
void q_graphicsitem_on_add_to_index(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_qbase_add_to_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_remove_from_index(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)() ```
void q_graphicsitem_on_remove_from_index(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_qbase_remove_from_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_prepare_geometry_change(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItem* self, void (*slot)() ```
void q_graphicsitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_qbase_prepare_geometry_change(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsitem_set_flag2(void* self, int64_t flag, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsItem* self, enum Qt__FocusReason focusReason ```
void q_graphicsitem_set_focus1(void* self, int64_t focusReason);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
void q_graphicsitem_ensure_visible1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, QRectF* rect, int xmargin ```
void q_graphicsitem_ensure_visible22(void* self, void* rect, int xmargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsitem_item_transform2(void* self, void* other, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsItem* self, QTransform* matrix, bool combine ```
void q_graphicsitem_set_transform2(void* self, void* matrix, bool combine);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsitem_colliding_items1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
bool q_graphicsitem_is_obscured1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItem* self, QRectF* rect ```
void q_graphicsitem_update1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsItem* self, double dx, double dy, QRectF* rect ```
void q_graphicsitem_scroll3(void* self, double dx, double dy, void* rect);

/// Delete this object from C++ memory.
///
/// ``` QGraphicsItem* self ```
void q_graphicsitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsobject.html

/// q_graphicsobject_new constructs a new QGraphicsObject object.
///
///
QGraphicsObject* q_graphicsobject_new();

/// q_graphicsobject_new2 constructs a new QGraphicsObject object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsObject* q_graphicsobject_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsObject* self ```
QMetaObject* q_graphicsobject_meta_object(void* self);

/// ``` QGraphicsObject* self, const char* param1 ```
void* q_graphicsobject_metacast(void* self, const char* param1);

/// ``` QGraphicsObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsobject_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsObject* self, int32_t (*slot)(QGraphicsObject*, enum QMetaObject__Call, int, void*) ```
void q_graphicsobject_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsobject_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsobject_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsObject* self, enum Qt__GestureType typeVal ```
void q_graphicsobject_grab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsObject* self, enum Qt__GestureType typeVal ```
void q_graphicsobject_ungrab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_update_micro_focus(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsObject* self, void (*slot)() ```
void q_graphicsobject_on_update_micro_focus(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_qbase_update_micro_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_parent_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_parent_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_opacity_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_opacity_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_visible_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_enabled_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_enabled_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_x_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_x_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_y_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_y_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_z_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_z_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_rotation_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_rotation_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_scale_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_children_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_children_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_width_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_height_changed(void* self);

/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsobject_on_height_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// ``` QGraphicsObject* self, QEvent* ev ```
bool q_graphicsobject_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QEvent*) ```
void q_graphicsobject_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsObject* self, QEvent* ev ```
bool q_graphicsobject_qbase_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsobject_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsobject_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsObject* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsobject_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsObject* self ```
const char* q_graphicsobject_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsObject* self, const char* name ```
void q_graphicsobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsObject* self, bool b ```
bool q_graphicsobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsObject* self ```
QThread* q_graphicsobject_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsObject* self, QThread* thread ```
void q_graphicsobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsObject* self, int interval ```
int32_t q_graphicsobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsObject* self, int id ```
void q_graphicsobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsObject* self ```
libqt_list /* of QObject* */ q_graphicsobject_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsObject* self, QObject* parent ```
void q_graphicsobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsObject* self, QObject* filterObj ```
void q_graphicsobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsObject* self, QObject* obj ```
void q_graphicsobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsobject_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsObject* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsobject_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsobject_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsobject_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsObject* self, const char* name, QVariant* value ```
bool q_graphicsobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsObject* self, const char* name ```
QVariant* q_graphicsobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsObject* self ```
const char** q_graphicsobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsObject* self ```
QBindingStorage* q_graphicsobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsObject* self ```
QBindingStorage* q_graphicsobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QGraphicsObject* self, void (*slot)(QObject*) ```
void q_graphicsobject_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsObject* self ```
QObject* q_graphicsobject_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsObject* self, const char* classname ```
bool q_graphicsobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsObject* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsobject_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsobject_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsObject* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsobject_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsObject* self, QObject* param1 ```
void q_graphicsobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QGraphicsObject* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsobject_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsObject* self ```
QGraphicsScene* q_graphicsobject_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsObject* self ```
QGraphicsObject* q_graphicsobject_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsObject* self ```
QGraphicsWidget* q_graphicsobject_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsObject* self ```
QGraphicsWidget* q_graphicsobject_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsObject* self ```
QGraphicsWidget* q_graphicsobject_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* parent ```
void q_graphicsobject_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsObject* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsobject_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsObject* self ```
QGraphicsObject* q_graphicsobject_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsObject* self ```
QGraphicsObject* q_graphicsobject_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsObject* self ```
QGraphicsItemGroup* q_graphicsobject_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsObject* self, QGraphicsItemGroup* group ```
void q_graphicsobject_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsObject* self ```
int64_t q_graphicsobject_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsobject_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsObject* self, int flags ```
void q_graphicsobject_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsObject* self ```
int64_t q_graphicsobject_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsobject_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsObject* self ```
int64_t q_graphicsobject_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsobject_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsObject* self ```
const char* q_graphicsobject_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsObject* self, const char* toolTip ```
void q_graphicsobject_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsObject* self ```
QCursor* q_graphicsobject_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsObject* self, QCursor* cursor ```
void q_graphicsobject_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsObject* self, QGraphicsItem* parent ```
bool q_graphicsobject_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsObject* self, bool visible ```
void q_graphicsobject_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsObject* self, bool enabled ```
void q_graphicsobject_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsObject* self, bool selected ```
void q_graphicsobject_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsObject* self, bool on ```
void q_graphicsobject_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsObject* self, double opacity ```
void q_graphicsobject_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsObject* self ```
QGraphicsEffect* q_graphicsobject_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsObject* self, QGraphicsEffect* effect ```
void q_graphicsobject_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsObject* self ```
int64_t q_graphicsobject_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsObject* self, int buttons ```
void q_graphicsobject_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsObject* self, bool enabled ```
void q_graphicsobject_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsObject* self, bool enabled ```
void q_graphicsobject_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsObject* self, bool enabled ```
void q_graphicsobject_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsObject* self, bool enabled ```
void q_graphicsobject_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsObject* self, bool active ```
void q_graphicsobject_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item ```
void q_graphicsobject_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsObject* self ```
QGraphicsItem* q_graphicsobject_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsObject* self ```
QPointF* q_graphicsobject_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsObject* self, double x ```
void q_graphicsobject_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsObject* self, double y ```
void q_graphicsobject_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsObject* self ```
QPointF* q_graphicsobject_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsObject* self, QPointF* pos ```
void q_graphicsobject_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsObject* self, double x, double y ```
void q_graphicsobject_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsObject* self, double dx, double dy ```
void q_graphicsobject_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
void q_graphicsobject_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsObject* self ```
QTransform* q_graphicsobject_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsObject* self ```
QTransform* q_graphicsobject_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsObject* self, QTransform* viewportTransform ```
QTransform* q_graphicsobject_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsObject* self, QGraphicsItem* other ```
QTransform* q_graphicsobject_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsObject* self, QTransform* matrix ```
void q_graphicsobject_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsObject* self, double angle ```
void q_graphicsobject_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsObject* self, double scale ```
void q_graphicsobject_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsObject* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsobject_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsObject* self, QGraphicsTransform* transformations[] ```
void q_graphicsobject_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsObject* self ```
QPointF* q_graphicsobject_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsObject* self, QPointF* origin ```
void q_graphicsobject_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsObject* self, double ax, double ay ```
void q_graphicsobject_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsObject* self, double z ```
void q_graphicsobject_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsObject* self, QGraphicsItem* sibling ```
void q_graphicsobject_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsObject* self ```
QRectF* q_graphicsobject_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsObject* self ```
QRectF* q_graphicsobject_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsObject* self ```
QPainterPath* q_graphicsobject_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsObject* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsobject_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
bool q_graphicsobject_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsObject* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsobject_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsObject* self ```
double q_graphicsobject_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsObject* self, double granularity ```
void q_graphicsobject_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsObject* self, double x, double y, double width, double height ```
void q_graphicsobject_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsObject* self, double dx, double dy ```
void q_graphicsobject_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsobject_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsObject* self, QPointF* point ```
QPointF* q_graphicsobject_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsObject* self, QPointF* point ```
QPointF* q_graphicsobject_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsObject* self, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsObject* self, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsobject_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsObject* self, QPointF* point ```
QPointF* q_graphicsobject_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsObject* self, QPointF* point ```
QPointF* q_graphicsobject_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
QRectF* q_graphicsobject_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsObject* self, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsObject* self, QPainterPath* path ```
QPainterPath* q_graphicsobject_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsobject_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsObject* self, double x, double y ```
QPointF* q_graphicsobject_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsObject* self, double x, double y ```
QPointF* q_graphicsobject_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsobject_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsObject* self, double x, double y ```
QPointF* q_graphicsobject_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsObject* self, double x, double y ```
QPointF* q_graphicsobject_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h ```
QRectF* q_graphicsobject_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsObject* self, QGraphicsItem* child ```
bool q_graphicsobject_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsObject* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsobject_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsObject* self ```
bool q_graphicsobject_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsObject* self, int key ```
QVariant* q_graphicsobject_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsObject* self, int key, QVariant* value ```
void q_graphicsobject_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsObject* self ```
int64_t q_graphicsobject_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsObject* self, int hints ```
void q_graphicsobject_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsObject* self, QGraphicsItem* filterItem ```
void q_graphicsobject_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsObject* self, QGraphicsItem* filterItem ```
void q_graphicsobject_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsobject_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsobject_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsObject* self, enum Qt__FocusReason focusReason ```
void q_graphicsobject_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
void q_graphicsobject_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, QRectF* rect, int xmargin ```
void q_graphicsobject_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsobject_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsobject_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsObject* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsobject_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsObject* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsobject_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsObject* self, QTransform* matrix, bool combine ```
void q_graphicsobject_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsObject* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsobject_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
bool q_graphicsobject_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsObject* self, QRectF* rect ```
void q_graphicsobject_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsObject* self, double dx, double dy, QRectF* rect ```
void q_graphicsobject_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QObject* watched, QEvent* event ```
bool q_graphicsobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QObject* watched, QEvent* event ```
bool q_graphicsobject_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QObject*, QEvent*) ```
void q_graphicsobject_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QTimerEvent* event ```
void q_graphicsobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QTimerEvent* event ```
void q_graphicsobject_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QTimerEvent*) ```
void q_graphicsobject_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QChildEvent* event ```
void q_graphicsobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QChildEvent* event ```
void q_graphicsobject_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QChildEvent*) ```
void q_graphicsobject_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QEvent* event ```
void q_graphicsobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QEvent* event ```
void q_graphicsobject_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QEvent*) ```
void q_graphicsobject_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
void q_graphicsobject_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
void q_graphicsobject_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QMetaMethod*) ```
void q_graphicsobject_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
void q_graphicsobject_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
void q_graphicsobject_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QMetaMethod*) ```
void q_graphicsobject_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, int phase ```
void q_graphicsobject_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, int phase ```
void q_graphicsobject_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, int) ```
void q_graphicsobject_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
QRectF* q_graphicsobject_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
QRectF* q_graphicsobject_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QRectF* (*slot)() ```
void q_graphicsobject_on_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
QPainterPath* q_graphicsobject_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
QPainterPath* q_graphicsobject_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QPainterPath* (*slot)() ```
void q_graphicsobject_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QPointF* point ```
bool q_graphicsobject_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QPointF* point ```
bool q_graphicsobject_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QPointF*) ```
void q_graphicsobject_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsobject_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsobject_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsobject_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsobject_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsobject_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsobject_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* item ```
bool q_graphicsobject_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* item ```
bool q_graphicsobject_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QGraphicsItem*) ```
void q_graphicsobject_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
QPainterPath* q_graphicsobject_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
QPainterPath* q_graphicsobject_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QPainterPath* (*slot)() ```
void q_graphicsobject_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsobject_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsobject_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsobject_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
int32_t q_graphicsobject_type(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
int32_t q_graphicsobject_qbase_type(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, int32_t (*slot)() ```
void q_graphicsobject_on_type(void* self, int32_t (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsobject_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsobject_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QGraphicsItem*, QEvent*) ```
void q_graphicsobject_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QEvent* event ```
bool q_graphicsobject_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QEvent* event ```
bool q_graphicsobject_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QEvent*) ```
void q_graphicsobject_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsobject_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsobject_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsobject_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsobject_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsobject_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsobject_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsobject_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsobject_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QFocusEvent* event ```
void q_graphicsobject_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QFocusEvent* event ```
void q_graphicsobject_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QFocusEvent*) ```
void q_graphicsobject_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QFocusEvent* event ```
void q_graphicsobject_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QFocusEvent* event ```
void q_graphicsobject_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QFocusEvent*) ```
void q_graphicsobject_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneHoverEvent*) ```
void q_graphicsobject_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneHoverEvent*) ```
void q_graphicsobject_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsobject_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneHoverEvent*) ```
void q_graphicsobject_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QKeyEvent* event ```
void q_graphicsobject_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QKeyEvent* event ```
void q_graphicsobject_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QKeyEvent*) ```
void q_graphicsobject_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QKeyEvent* event ```
void q_graphicsobject_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QKeyEvent* event ```
void q_graphicsobject_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QKeyEvent*) ```
void q_graphicsobject_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneMouseEvent*) ```
void q_graphicsobject_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneMouseEvent*) ```
void q_graphicsobject_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneMouseEvent*) ```
void q_graphicsobject_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsobject_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneMouseEvent*) ```
void q_graphicsobject_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsobject_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsobject_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QGraphicsSceneWheelEvent*) ```
void q_graphicsobject_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QInputMethodEvent* event ```
void q_graphicsobject_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QInputMethodEvent* event ```
void q_graphicsobject_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, QInputMethodEvent*) ```
void q_graphicsobject_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsobject_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsobject_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QVariant* (*slot)(QGraphicsObject*, enum Qt__InputMethodQuery) ```
void q_graphicsobject_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsobject_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsobject_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QVariant* (*slot)(QGraphicsObject*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsobject_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsobject_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsobject_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, enum QGraphicsItem__Extension) ```
void q_graphicsobject_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsobject_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsobject_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)(QGraphicsObject*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsobject_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QVariant* variant ```
QVariant* q_graphicsobject_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QVariant* variant ```
QVariant* q_graphicsobject_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QVariant* (*slot)(QGraphicsObject*, QVariant*) ```
void q_graphicsobject_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
QObject* q_graphicsobject_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
QObject* q_graphicsobject_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, QObject* (*slot)() ```
void q_graphicsobject_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
int32_t q_graphicsobject_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
int32_t q_graphicsobject_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, int32_t (*slot)() ```
void q_graphicsobject_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, const char* signal ```
int32_t q_graphicsobject_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, const char* signal ```
int32_t q_graphicsobject_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, int32_t (*slot)(QGraphicsObject*, const char*) ```
void q_graphicsobject_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
bool q_graphicsobject_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self, QMetaMethod* signal ```
bool q_graphicsobject_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, bool (*slot)(QGraphicsObject*, QMetaMethod*) ```
void q_graphicsobject_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)() ```
void q_graphicsobject_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)() ```
void q_graphicsobject_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsObject* self, void (*slot)() ```
void q_graphicsobject_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsObject* self ```
void q_graphicsobject_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html

/// q_abstractgraphicsshapeitem_new constructs a new QAbstractGraphicsShapeItem object.
///
///
QAbstractGraphicsShapeItem* q_abstractgraphicsshapeitem_new();

/// q_abstractgraphicsshapeitem_new2 constructs a new QAbstractGraphicsShapeItem object.
///
/// ``` QGraphicsItem* parent ```
QAbstractGraphicsShapeItem* q_abstractgraphicsshapeitem_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPen* q_abstractgraphicsshapeitem_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QAbstractGraphicsShapeItem* self, QPen* pen ```
void q_abstractgraphicsshapeitem_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QBrush* q_abstractgraphicsshapeitem_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QAbstractGraphicsShapeItem* self, QBrush* brush ```
void q_abstractgraphicsshapeitem_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#isObscuredBy)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item ```
bool q_abstractgraphicsshapeitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QGraphicsItem*) ```
void q_abstractgraphicsshapeitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item ```
bool q_abstractgraphicsshapeitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#opaqueArea)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPainterPath* q_abstractgraphicsshapeitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* (*slot)() ```
void q_abstractgraphicsshapeitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPainterPath* q_abstractgraphicsshapeitem_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsScene* q_abstractgraphicsshapeitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsObject* q_abstractgraphicsshapeitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsWidget* q_abstractgraphicsshapeitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsWidget* q_abstractgraphicsshapeitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsWidget* q_abstractgraphicsshapeitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* parent ```
void q_abstractgraphicsshapeitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QAbstractGraphicsShapeItem* self ```
libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsObject* q_abstractgraphicsshapeitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsObject* q_abstractgraphicsshapeitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItemGroup* q_abstractgraphicsshapeitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItemGroup* group ```
void q_abstractgraphicsshapeitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QAbstractGraphicsShapeItem* self ```
int64_t q_abstractgraphicsshapeitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_abstractgraphicsshapeitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QAbstractGraphicsShapeItem* self, int flags ```
void q_abstractgraphicsshapeitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QAbstractGraphicsShapeItem* self ```
int64_t q_abstractgraphicsshapeitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__CacheMode mode ```
void q_abstractgraphicsshapeitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QAbstractGraphicsShapeItem* self ```
int64_t q_abstractgraphicsshapeitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_abstractgraphicsshapeitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QAbstractGraphicsShapeItem* self ```
const char* q_abstractgraphicsshapeitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QAbstractGraphicsShapeItem* self, const char* toolTip ```
void q_abstractgraphicsshapeitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QCursor* q_abstractgraphicsshapeitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QAbstractGraphicsShapeItem* self, QCursor* cursor ```
void q_abstractgraphicsshapeitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* parent ```
bool q_abstractgraphicsshapeitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, bool visible ```
void q_abstractgraphicsshapeitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QAbstractGraphicsShapeItem* self, bool enabled ```
void q_abstractgraphicsshapeitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QAbstractGraphicsShapeItem* self, bool selected ```
void q_abstractgraphicsshapeitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QAbstractGraphicsShapeItem* self, bool on ```
void q_abstractgraphicsshapeitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QAbstractGraphicsShapeItem* self, double opacity ```
void q_abstractgraphicsshapeitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsEffect* q_abstractgraphicsshapeitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsEffect* effect ```
void q_abstractgraphicsshapeitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QAbstractGraphicsShapeItem* self ```
int64_t q_abstractgraphicsshapeitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QAbstractGraphicsShapeItem* self, int buttons ```
void q_abstractgraphicsshapeitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QAbstractGraphicsShapeItem* self, bool enabled ```
void q_abstractgraphicsshapeitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QAbstractGraphicsShapeItem* self, bool enabled ```
void q_abstractgraphicsshapeitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QAbstractGraphicsShapeItem* self, bool enabled ```
void q_abstractgraphicsshapeitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QAbstractGraphicsShapeItem* self, bool enabled ```
void q_abstractgraphicsshapeitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QAbstractGraphicsShapeItem* self, bool active ```
void q_abstractgraphicsshapeitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item ```
void q_abstractgraphicsshapeitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QGraphicsItem* q_abstractgraphicsshapeitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPointF* q_abstractgraphicsshapeitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QAbstractGraphicsShapeItem* self, double x ```
void q_abstractgraphicsshapeitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QAbstractGraphicsShapeItem* self, double y ```
void q_abstractgraphicsshapeitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPointF* q_abstractgraphicsshapeitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* pos ```
void q_abstractgraphicsshapeitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y ```
void q_abstractgraphicsshapeitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QAbstractGraphicsShapeItem* self, double dx, double dy ```
void q_abstractgraphicsshapeitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
void q_abstractgraphicsshapeitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QTransform* q_abstractgraphicsshapeitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QTransform* q_abstractgraphicsshapeitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QAbstractGraphicsShapeItem* self, QTransform* viewportTransform ```
QTransform* q_abstractgraphicsshapeitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* other ```
QTransform* q_abstractgraphicsshapeitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QAbstractGraphicsShapeItem* self, QTransform* matrix ```
void q_abstractgraphicsshapeitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QAbstractGraphicsShapeItem* self, double angle ```
void q_abstractgraphicsshapeitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QAbstractGraphicsShapeItem* self, double scale ```
void q_abstractgraphicsshapeitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QAbstractGraphicsShapeItem* self ```
libqt_list /* of QGraphicsTransform* */ q_abstractgraphicsshapeitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsTransform* transformations[] ```
void q_abstractgraphicsshapeitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPointF* q_abstractgraphicsshapeitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* origin ```
void q_abstractgraphicsshapeitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QAbstractGraphicsShapeItem* self, double ax, double ay ```
void q_abstractgraphicsshapeitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QAbstractGraphicsShapeItem* self, double z ```
void q_abstractgraphicsshapeitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* sibling ```
void q_abstractgraphicsshapeitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QRectF* q_abstractgraphicsshapeitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QRectF* q_abstractgraphicsshapeitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPainterPath* q_abstractgraphicsshapeitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QAbstractGraphicsShapeItem* self ```
libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
bool q_abstractgraphicsshapeitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QAbstractGraphicsShapeItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_abstractgraphicsshapeitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QAbstractGraphicsShapeItem* self ```
double q_abstractgraphicsshapeitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QAbstractGraphicsShapeItem* self, double granularity ```
void q_abstractgraphicsshapeitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double width, double height ```
void q_abstractgraphicsshapeitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QAbstractGraphicsShapeItem* self, double dx, double dy ```
void q_abstractgraphicsshapeitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
QPointF* q_abstractgraphicsshapeitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path ```
QPainterPath* q_abstractgraphicsshapeitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y ```
QPointF* q_abstractgraphicsshapeitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h ```
QRectF* q_abstractgraphicsshapeitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* child ```
bool q_abstractgraphicsshapeitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* other ```
QGraphicsItem* q_abstractgraphicsshapeitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QAbstractGraphicsShapeItem* self ```
bool q_abstractgraphicsshapeitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QAbstractGraphicsShapeItem* self, int key ```
QVariant* q_abstractgraphicsshapeitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QAbstractGraphicsShapeItem* self, int key, QVariant* value ```
void q_abstractgraphicsshapeitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QAbstractGraphicsShapeItem* self ```
int64_t q_abstractgraphicsshapeitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QAbstractGraphicsShapeItem* self, int hints ```
void q_abstractgraphicsshapeitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* filterItem ```
void q_abstractgraphicsshapeitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* filterItem ```
void q_abstractgraphicsshapeitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_abstractgraphicsshapeitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_abstractgraphicsshapeitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QAbstractGraphicsShapeItem* self, enum Qt__FocusReason focusReason ```
void q_abstractgraphicsshapeitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
void q_abstractgraphicsshapeitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect, int xmargin ```
void q_abstractgraphicsshapeitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_abstractgraphicsshapeitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h, int xmargin ```
void q_abstractgraphicsshapeitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QAbstractGraphicsShapeItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_abstractgraphicsshapeitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_abstractgraphicsshapeitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QAbstractGraphicsShapeItem* self, QTransform* matrix, bool combine ```
void q_abstractgraphicsshapeitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QAbstractGraphicsShapeItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
bool q_abstractgraphicsshapeitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* rect ```
void q_abstractgraphicsshapeitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QAbstractGraphicsShapeItem* self, double dx, double dy, QRectF* rect ```
void q_abstractgraphicsshapeitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, int phase ```
void q_abstractgraphicsshapeitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, int phase ```
void q_abstractgraphicsshapeitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, int) ```
void q_abstractgraphicsshapeitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
QRectF* q_abstractgraphicsshapeitem_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
QRectF* q_abstractgraphicsshapeitem_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QRectF* (*slot)() ```
void q_abstractgraphicsshapeitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPainterPath* q_abstractgraphicsshapeitem_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
QPainterPath* q_abstractgraphicsshapeitem_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* (*slot)() ```
void q_abstractgraphicsshapeitem_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
bool q_abstractgraphicsshapeitem_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPointF* point ```
bool q_abstractgraphicsshapeitem_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QPointF*) ```
void q_abstractgraphicsshapeitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_abstractgraphicsshapeitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_abstractgraphicsshapeitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_abstractgraphicsshapeitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_abstractgraphicsshapeitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_abstractgraphicsshapeitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_abstractgraphicsshapeitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_abstractgraphicsshapeitem_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_abstractgraphicsshapeitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_abstractgraphicsshapeitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
int32_t q_abstractgraphicsshapeitem_type(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
int32_t q_abstractgraphicsshapeitem_qbase_type(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, int32_t (*slot)() ```
void q_abstractgraphicsshapeitem_on_type(void* self, int32_t (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_abstractgraphicsshapeitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_abstractgraphicsshapeitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QGraphicsItem*, QEvent*) ```
void q_abstractgraphicsshapeitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QEvent* event ```
bool q_abstractgraphicsshapeitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QEvent* event ```
bool q_abstractgraphicsshapeitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, QEvent*) ```
void q_abstractgraphicsshapeitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_abstractgraphicsshapeitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_abstractgraphicsshapeitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneContextMenuEvent*) ```
void q_abstractgraphicsshapeitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*) ```
void q_abstractgraphicsshapeitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*) ```
void q_abstractgraphicsshapeitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*) ```
void q_abstractgraphicsshapeitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event ```
void q_abstractgraphicsshapeitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneDragDropEvent*) ```
void q_abstractgraphicsshapeitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QFocusEvent* event ```
void q_abstractgraphicsshapeitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QFocusEvent* event ```
void q_abstractgraphicsshapeitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QFocusEvent*) ```
void q_abstractgraphicsshapeitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QFocusEvent* event ```
void q_abstractgraphicsshapeitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QFocusEvent* event ```
void q_abstractgraphicsshapeitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QFocusEvent*) ```
void q_abstractgraphicsshapeitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*) ```
void q_abstractgraphicsshapeitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*) ```
void q_abstractgraphicsshapeitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event ```
void q_abstractgraphicsshapeitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneHoverEvent*) ```
void q_abstractgraphicsshapeitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QKeyEvent* event ```
void q_abstractgraphicsshapeitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QKeyEvent* event ```
void q_abstractgraphicsshapeitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QKeyEvent*) ```
void q_abstractgraphicsshapeitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QKeyEvent* event ```
void q_abstractgraphicsshapeitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QKeyEvent* event ```
void q_abstractgraphicsshapeitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QKeyEvent*) ```
void q_abstractgraphicsshapeitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*) ```
void q_abstractgraphicsshapeitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*) ```
void q_abstractgraphicsshapeitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*) ```
void q_abstractgraphicsshapeitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event ```
void q_abstractgraphicsshapeitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneMouseEvent*) ```
void q_abstractgraphicsshapeitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event ```
void q_abstractgraphicsshapeitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event ```
void q_abstractgraphicsshapeitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QGraphicsSceneWheelEvent*) ```
void q_abstractgraphicsshapeitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QInputMethodEvent* event ```
void q_abstractgraphicsshapeitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QInputMethodEvent* event ```
void q_abstractgraphicsshapeitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, QInputMethodEvent*) ```
void q_abstractgraphicsshapeitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractgraphicsshapeitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractgraphicsshapeitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QVariant* (*slot)(QAbstractGraphicsShapeItem*, enum Qt__InputMethodQuery) ```
void q_abstractgraphicsshapeitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_abstractgraphicsshapeitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_abstractgraphicsshapeitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QVariant* (*slot)(QAbstractGraphicsShapeItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_abstractgraphicsshapeitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__Extension extension ```
bool q_abstractgraphicsshapeitem_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__Extension extension ```
bool q_abstractgraphicsshapeitem_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, bool (*slot)(QAbstractGraphicsShapeItem*, enum QGraphicsItem__Extension) ```
void q_abstractgraphicsshapeitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_abstractgraphicsshapeitem_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_abstractgraphicsshapeitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)(QAbstractGraphicsShapeItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_abstractgraphicsshapeitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QVariant* variant ```
QVariant* q_abstractgraphicsshapeitem_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QVariant* variant ```
QVariant* q_abstractgraphicsshapeitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, QVariant* (*slot)(QAbstractGraphicsShapeItem*, QVariant*) ```
void q_abstractgraphicsshapeitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)() ```
void q_abstractgraphicsshapeitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)() ```
void q_abstractgraphicsshapeitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)() ```
void q_abstractgraphicsshapeitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractGraphicsShapeItem* self, void (*slot)() ```
void q_abstractgraphicsshapeitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QAbstractGraphicsShapeItem* self ```
void q_abstractgraphicsshapeitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicspathitem.html

/// q_graphicspathitem_new constructs a new QGraphicsPathItem object.
///
///
QGraphicsPathItem* q_graphicspathitem_new();

/// q_graphicspathitem_new2 constructs a new QGraphicsPathItem object.
///
/// ``` QPainterPath* path ```
QGraphicsPathItem* q_graphicspathitem_new2(void* path);

/// q_graphicspathitem_new3 constructs a new QGraphicsPathItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsPathItem* q_graphicspathitem_new3(void* parent);

/// q_graphicspathitem_new4 constructs a new QGraphicsPathItem object.
///
/// ``` QPainterPath* path, QGraphicsItem* parent ```
QGraphicsPathItem* q_graphicspathitem_new4(void* path, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#path)
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#setPath)
///
/// ``` QGraphicsPathItem* self, QPainterPath* path ```
void q_graphicspathitem_set_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#boundingRect)
///
/// ``` QGraphicsPathItem* self ```
QRectF* q_graphicspathitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, QRectF* (*slot)() ```
void q_graphicspathitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self ```
QRectF* q_graphicspathitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#shape)
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, QPainterPath* (*slot)() ```
void q_graphicspathitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#contains)
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
bool q_graphicspathitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QPointF*) ```
void q_graphicspathitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
bool q_graphicspathitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#paint)
///
/// ``` QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspathitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicspathitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspathitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#isObscuredBy)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item ```
bool q_graphicspathitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QGraphicsItem*) ```
void q_graphicspathitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item ```
bool q_graphicspathitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#opaqueArea)
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, QPainterPath* (*slot)() ```
void q_graphicspathitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#type)
///
/// ``` QGraphicsPathItem* self ```
int32_t q_graphicspathitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, int32_t (*slot)() ```
void q_graphicspathitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self ```
int32_t q_graphicspathitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#supportsExtension)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspathitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, enum QGraphicsItem__Extension) ```
void q_graphicspathitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspathitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#setExtension)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspathitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicspathitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspathitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspathitem.html#extension)
///
/// ``` QGraphicsPathItem* self, QVariant* variant ```
QVariant* q_graphicspathitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPathItem* self, QVariant* (*slot)(QGraphicsPathItem*, QVariant*) ```
void q_graphicspathitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPathItem* self, QVariant* variant ```
QVariant* q_graphicspathitem_qbase_extension(void* self, void* variant);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QGraphicsPathItem* self ```
QPen* q_graphicspathitem_pen(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QGraphicsPathItem* self, QPen* pen ```
void q_graphicspathitem_set_pen(void* self, void* pen);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QGraphicsPathItem* self ```
QBrush* q_graphicspathitem_brush(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QGraphicsPathItem* self, QBrush* brush ```
void q_graphicspathitem_set_brush(void* self, void* brush);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsScene* q_graphicspathitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsObject* q_graphicspathitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsWidget* q_graphicspathitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsWidget* q_graphicspathitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsWidget* q_graphicspathitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* parent ```
void q_graphicspathitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsPathItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspathitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsObject* q_graphicspathitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsObject* q_graphicspathitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItemGroup* q_graphicspathitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsPathItem* self, QGraphicsItemGroup* group ```
void q_graphicspathitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsPathItem* self ```
int64_t q_graphicspathitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicspathitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsPathItem* self, int flags ```
void q_graphicspathitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsPathItem* self ```
int64_t q_graphicspathitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicspathitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsPathItem* self ```
int64_t q_graphicspathitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicspathitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsPathItem* self ```
const char* q_graphicspathitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsPathItem* self, const char* toolTip ```
void q_graphicspathitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsPathItem* self ```
QCursor* q_graphicspathitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsPathItem* self, QCursor* cursor ```
void q_graphicspathitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* parent ```
bool q_graphicspathitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsPathItem* self, bool visible ```
void q_graphicspathitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsPathItem* self, bool enabled ```
void q_graphicspathitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsPathItem* self, bool selected ```
void q_graphicspathitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsPathItem* self, bool on ```
void q_graphicspathitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsPathItem* self, double opacity ```
void q_graphicspathitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsEffect* q_graphicspathitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsPathItem* self, QGraphicsEffect* effect ```
void q_graphicspathitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsPathItem* self ```
int64_t q_graphicspathitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsPathItem* self, int buttons ```
void q_graphicspathitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsPathItem* self, bool enabled ```
void q_graphicspathitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsPathItem* self, bool enabled ```
void q_graphicspathitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsPathItem* self, bool enabled ```
void q_graphicspathitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsPathItem* self, bool enabled ```
void q_graphicspathitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsPathItem* self, bool active ```
void q_graphicspathitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item ```
void q_graphicspathitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsPathItem* self ```
QGraphicsItem* q_graphicspathitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsPathItem* self ```
QPointF* q_graphicspathitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsPathItem* self, double x ```
void q_graphicspathitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsPathItem* self, double y ```
void q_graphicspathitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsPathItem* self ```
QPointF* q_graphicspathitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPathItem* self, QPointF* pos ```
void q_graphicspathitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPathItem* self, double x, double y ```
void q_graphicspathitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsPathItem* self, double dx, double dy ```
void q_graphicspathitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
void q_graphicspathitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsPathItem* self ```
QTransform* q_graphicspathitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsPathItem* self ```
QTransform* q_graphicspathitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsPathItem* self, QTransform* viewportTransform ```
QTransform* q_graphicspathitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* other ```
QTransform* q_graphicspathitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPathItem* self, QTransform* matrix ```
void q_graphicspathitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsPathItem* self, double angle ```
void q_graphicspathitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsPathItem* self, double scale ```
void q_graphicspathitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsPathItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicspathitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsPathItem* self, QGraphicsTransform* transformations[] ```
void q_graphicspathitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsPathItem* self ```
QPointF* q_graphicspathitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPathItem* self, QPointF* origin ```
void q_graphicspathitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPathItem* self, double ax, double ay ```
void q_graphicspathitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsPathItem* self, double z ```
void q_graphicspathitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* sibling ```
void q_graphicspathitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsPathItem* self ```
QRectF* q_graphicspathitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsPathItem* self ```
QRectF* q_graphicspathitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsPathItem* self ```
QPainterPath* q_graphicspathitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPathItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspathitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
bool q_graphicspathitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsPathItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicspathitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsPathItem* self ```
double q_graphicspathitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsPathItem* self, double granularity ```
void q_graphicspathitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPathItem* self, double x, double y, double width, double height ```
void q_graphicspathitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPathItem* self, double dx, double dy ```
void q_graphicspathitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspathitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
QPointF* q_graphicspathitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
QPointF* q_graphicspathitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPathItem* self, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPathItem* self, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspathitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
QPointF* q_graphicspathitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPathItem* self, QPointF* point ```
QPointF* q_graphicspathitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
QRectF* q_graphicspathitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPathItem* self, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPathItem* self, QPainterPath* path ```
QPainterPath* q_graphicspathitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspathitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPathItem* self, double x, double y ```
QPointF* q_graphicspathitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPathItem* self, double x, double y ```
QPointF* q_graphicspathitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspathitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPathItem* self, double x, double y ```
QPointF* q_graphicspathitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPathItem* self, double x, double y ```
QPointF* q_graphicspathitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspathitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* child ```
bool q_graphicspathitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicspathitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsPathItem* self ```
bool q_graphicspathitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsPathItem* self, int key ```
QVariant* q_graphicspathitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsPathItem* self, int key, QVariant* value ```
void q_graphicspathitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsPathItem* self ```
int64_t q_graphicspathitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsPathItem* self, int hints ```
void q_graphicspathitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* filterItem ```
void q_graphicspathitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* filterItem ```
void q_graphicspathitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicspathitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicspathitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPathItem* self, enum Qt__FocusReason focusReason ```
void q_graphicspathitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
void q_graphicspathitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, QRectF* rect, int xmargin ```
void q_graphicspathitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicspathitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicspathitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPathItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicspathitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicspathitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPathItem* self, QTransform* matrix, bool combine ```
void q_graphicspathitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPathItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicspathitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
bool q_graphicspathitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPathItem* self, QRectF* rect ```
void q_graphicspathitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPathItem* self, double dx, double dy, QRectF* rect ```
void q_graphicspathitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, int phase ```
void q_graphicspathitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, int phase ```
void q_graphicspathitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, int) ```
void q_graphicspathitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspathitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspathitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicspathitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspathitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspathitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicspathitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspathitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspathitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QGraphicsItem*, QEvent*) ```
void q_graphicspathitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QEvent* event ```
bool q_graphicspathitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QEvent* event ```
bool q_graphicspathitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, bool (*slot)(QGraphicsPathItem*, QEvent*) ```
void q_graphicspathitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspathitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspathitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicspathitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspathitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspathitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspathitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspathitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspathitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QFocusEvent* event ```
void q_graphicspathitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QFocusEvent* event ```
void q_graphicspathitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QFocusEvent*) ```
void q_graphicspathitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QFocusEvent* event ```
void q_graphicspathitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QFocusEvent* event ```
void q_graphicspathitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QFocusEvent*) ```
void q_graphicspathitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspathitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspathitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspathitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspathitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QKeyEvent* event ```
void q_graphicspathitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QKeyEvent* event ```
void q_graphicspathitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QKeyEvent*) ```
void q_graphicspathitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QKeyEvent* event ```
void q_graphicspathitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QKeyEvent* event ```
void q_graphicspathitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QKeyEvent*) ```
void q_graphicspathitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspathitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspathitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspathitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspathitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspathitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspathitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspathitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicspathitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, QInputMethodEvent* event ```
void q_graphicspathitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QInputMethodEvent* event ```
void q_graphicspathitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)(QGraphicsPathItem*, QInputMethodEvent*) ```
void q_graphicspathitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspathitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspathitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QVariant* (*slot)(QGraphicsPathItem*, enum Qt__InputMethodQuery) ```
void q_graphicspathitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspathitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspathitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, QVariant* (*slot)(QGraphicsPathItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicspathitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)() ```
void q_graphicspathitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)() ```
void q_graphicspathitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)() ```
void q_graphicspathitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPathItem* self, void (*slot)() ```
void q_graphicspathitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsPathItem* self ```
void q_graphicspathitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsrectitem.html

/// q_graphicsrectitem_new constructs a new QGraphicsRectItem object.
///
///
QGraphicsRectItem* q_graphicsrectitem_new();

/// q_graphicsrectitem_new2 constructs a new QGraphicsRectItem object.
///
/// ``` QRectF* rect ```
QGraphicsRectItem* q_graphicsrectitem_new2(void* rect);

/// q_graphicsrectitem_new3 constructs a new QGraphicsRectItem object.
///
/// ``` double x, double y, double w, double h ```
QGraphicsRectItem* q_graphicsrectitem_new3(double x, double y, double w, double h);

/// q_graphicsrectitem_new4 constructs a new QGraphicsRectItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsRectItem* q_graphicsrectitem_new4(void* parent);

/// q_graphicsrectitem_new5 constructs a new QGraphicsRectItem object.
///
/// ``` QRectF* rect, QGraphicsItem* parent ```
QGraphicsRectItem* q_graphicsrectitem_new5(void* rect, void* parent);

/// q_graphicsrectitem_new6 constructs a new QGraphicsRectItem object.
///
/// ``` double x, double y, double w, double h, QGraphicsItem* parent ```
QGraphicsRectItem* q_graphicsrectitem_new6(double x, double y, double w, double h, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#rect)
///
/// ``` QGraphicsRectItem* self ```
QRectF* q_graphicsrectitem_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#setRect)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
void q_graphicsrectitem_set_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#setRect)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
void q_graphicsrectitem_set_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#boundingRect)
///
/// ``` QGraphicsRectItem* self ```
QRectF* q_graphicsrectitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, QRectF* (*slot)() ```
void q_graphicsrectitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self ```
QRectF* q_graphicsrectitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#shape)
///
/// ``` QGraphicsRectItem* self ```
QPainterPath* q_graphicsrectitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, QPainterPath* (*slot)() ```
void q_graphicsrectitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self ```
QPainterPath* q_graphicsrectitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#contains)
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
bool q_graphicsrectitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QPointF*) ```
void q_graphicsrectitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
bool q_graphicsrectitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#paint)
///
/// ``` QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsrectitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsrectitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsrectitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#isObscuredBy)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item ```
bool q_graphicsrectitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QGraphicsItem*) ```
void q_graphicsrectitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item ```
bool q_graphicsrectitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#opaqueArea)
///
/// ``` QGraphicsRectItem* self ```
QPainterPath* q_graphicsrectitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, QPainterPath* (*slot)() ```
void q_graphicsrectitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self ```
QPainterPath* q_graphicsrectitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#type)
///
/// ``` QGraphicsRectItem* self ```
int32_t q_graphicsrectitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, int32_t (*slot)() ```
void q_graphicsrectitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self ```
int32_t q_graphicsrectitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#supportsExtension)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsrectitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, enum QGraphicsItem__Extension) ```
void q_graphicsrectitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsrectitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#setExtension)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsrectitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsrectitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsrectitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrectitem.html#extension)
///
/// ``` QGraphicsRectItem* self, QVariant* variant ```
QVariant* q_graphicsrectitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRectItem* self, QVariant* (*slot)(QGraphicsRectItem*, QVariant*) ```
void q_graphicsrectitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsRectItem* self, QVariant* variant ```
QVariant* q_graphicsrectitem_qbase_extension(void* self, void* variant);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QGraphicsRectItem* self ```
QPen* q_graphicsrectitem_pen(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QGraphicsRectItem* self, QPen* pen ```
void q_graphicsrectitem_set_pen(void* self, void* pen);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QGraphicsRectItem* self ```
QBrush* q_graphicsrectitem_brush(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QGraphicsRectItem* self, QBrush* brush ```
void q_graphicsrectitem_set_brush(void* self, void* brush);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsScene* q_graphicsrectitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsObject* q_graphicsrectitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsWidget* q_graphicsrectitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsWidget* q_graphicsrectitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsWidget* q_graphicsrectitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* parent ```
void q_graphicsrectitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsRectItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsObject* q_graphicsrectitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsObject* q_graphicsrectitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItemGroup* q_graphicsrectitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsRectItem* self, QGraphicsItemGroup* group ```
void q_graphicsrectitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsRectItem* self ```
int64_t q_graphicsrectitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsrectitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsRectItem* self, int flags ```
void q_graphicsrectitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsRectItem* self ```
int64_t q_graphicsrectitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsrectitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsRectItem* self ```
int64_t q_graphicsrectitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsrectitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsRectItem* self ```
const char* q_graphicsrectitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsRectItem* self, const char* toolTip ```
void q_graphicsrectitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsRectItem* self ```
QCursor* q_graphicsrectitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsRectItem* self, QCursor* cursor ```
void q_graphicsrectitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* parent ```
bool q_graphicsrectitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsRectItem* self, bool visible ```
void q_graphicsrectitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsRectItem* self, bool enabled ```
void q_graphicsrectitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsRectItem* self, bool selected ```
void q_graphicsrectitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsRectItem* self, bool on ```
void q_graphicsrectitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsRectItem* self, double opacity ```
void q_graphicsrectitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsEffect* q_graphicsrectitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsRectItem* self, QGraphicsEffect* effect ```
void q_graphicsrectitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsRectItem* self ```
int64_t q_graphicsrectitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsRectItem* self, int buttons ```
void q_graphicsrectitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsRectItem* self, bool enabled ```
void q_graphicsrectitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsRectItem* self, bool enabled ```
void q_graphicsrectitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsRectItem* self, bool enabled ```
void q_graphicsrectitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsRectItem* self, bool enabled ```
void q_graphicsrectitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsRectItem* self, bool active ```
void q_graphicsrectitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item ```
void q_graphicsrectitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsRectItem* self ```
QGraphicsItem* q_graphicsrectitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsRectItem* self ```
QPointF* q_graphicsrectitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsRectItem* self, double x ```
void q_graphicsrectitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsRectItem* self, double y ```
void q_graphicsrectitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsRectItem* self ```
QPointF* q_graphicsrectitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsRectItem* self, QPointF* pos ```
void q_graphicsrectitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsRectItem* self, double x, double y ```
void q_graphicsrectitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsRectItem* self, double dx, double dy ```
void q_graphicsrectitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
void q_graphicsrectitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsRectItem* self ```
QTransform* q_graphicsrectitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsRectItem* self ```
QTransform* q_graphicsrectitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsRectItem* self, QTransform* viewportTransform ```
QTransform* q_graphicsrectitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* other ```
QTransform* q_graphicsrectitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsRectItem* self, QTransform* matrix ```
void q_graphicsrectitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsRectItem* self, double angle ```
void q_graphicsrectitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsRectItem* self, double scale ```
void q_graphicsrectitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsRectItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsrectitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsRectItem* self, QGraphicsTransform* transformations[] ```
void q_graphicsrectitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsRectItem* self ```
QPointF* q_graphicsrectitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsRectItem* self, QPointF* origin ```
void q_graphicsrectitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsRectItem* self, double ax, double ay ```
void q_graphicsrectitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsRectItem* self, double z ```
void q_graphicsrectitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* sibling ```
void q_graphicsrectitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsRectItem* self ```
QRectF* q_graphicsrectitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsRectItem* self ```
QRectF* q_graphicsrectitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsRectItem* self ```
QPainterPath* q_graphicsrectitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsRectItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
bool q_graphicsrectitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsRectItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsrectitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsRectItem* self ```
double q_graphicsrectitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsRectItem* self, double granularity ```
void q_graphicsrectitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsRectItem* self, double x, double y, double width, double height ```
void q_graphicsrectitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsRectItem* self, double dx, double dy ```
void q_graphicsrectitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsrectitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
QPointF* q_graphicsrectitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
QPointF* q_graphicsrectitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsRectItem* self, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsRectItem* self, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsrectitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
QPointF* q_graphicsrectitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsRectItem* self, QPointF* point ```
QPointF* q_graphicsrectitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
QRectF* q_graphicsrectitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsRectItem* self, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsRectItem* self, QPainterPath* path ```
QPainterPath* q_graphicsrectitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsrectitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsRectItem* self, double x, double y ```
QPointF* q_graphicsrectitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsRectItem* self, double x, double y ```
QPointF* q_graphicsrectitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsrectitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsRectItem* self, double x, double y ```
QPointF* q_graphicsrectitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsRectItem* self, double x, double y ```
QPointF* q_graphicsrectitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsrectitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* child ```
bool q_graphicsrectitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsrectitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsRectItem* self ```
bool q_graphicsrectitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsRectItem* self, int key ```
QVariant* q_graphicsrectitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsRectItem* self, int key, QVariant* value ```
void q_graphicsrectitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsRectItem* self ```
int64_t q_graphicsrectitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsRectItem* self, int hints ```
void q_graphicsrectitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* filterItem ```
void q_graphicsrectitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* filterItem ```
void q_graphicsrectitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsrectitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsrectitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsRectItem* self, enum Qt__FocusReason focusReason ```
void q_graphicsrectitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
void q_graphicsrectitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, QRectF* rect, int xmargin ```
void q_graphicsrectitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsrectitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsrectitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsRectItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsrectitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsrectitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsRectItem* self, QTransform* matrix, bool combine ```
void q_graphicsrectitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsRectItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
bool q_graphicsrectitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsRectItem* self, QRectF* rect ```
void q_graphicsrectitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsRectItem* self, double dx, double dy, QRectF* rect ```
void q_graphicsrectitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, int phase ```
void q_graphicsrectitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, int phase ```
void q_graphicsrectitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, int) ```
void q_graphicsrectitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsrectitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsrectitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsrectitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsrectitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsrectitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsrectitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsrectitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsrectitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QGraphicsItem*, QEvent*) ```
void q_graphicsrectitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QEvent* event ```
bool q_graphicsrectitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QEvent* event ```
bool q_graphicsrectitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, bool (*slot)(QGraphicsRectItem*, QEvent*) ```
void q_graphicsrectitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsrectitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsrectitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsrectitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsrectitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsrectitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsrectitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsrectitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsrectitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QFocusEvent* event ```
void q_graphicsrectitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QFocusEvent* event ```
void q_graphicsrectitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QFocusEvent*) ```
void q_graphicsrectitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QFocusEvent* event ```
void q_graphicsrectitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QFocusEvent* event ```
void q_graphicsrectitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QFocusEvent*) ```
void q_graphicsrectitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsrectitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsrectitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsrectitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsrectitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QKeyEvent* event ```
void q_graphicsrectitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QKeyEvent* event ```
void q_graphicsrectitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QKeyEvent*) ```
void q_graphicsrectitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QKeyEvent* event ```
void q_graphicsrectitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QKeyEvent* event ```
void q_graphicsrectitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QKeyEvent*) ```
void q_graphicsrectitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsrectitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsrectitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsrectitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsrectitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsrectitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsrectitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsrectitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicsrectitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, QInputMethodEvent* event ```
void q_graphicsrectitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QInputMethodEvent* event ```
void q_graphicsrectitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)(QGraphicsRectItem*, QInputMethodEvent*) ```
void q_graphicsrectitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsrectitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsrectitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QVariant* (*slot)(QGraphicsRectItem*, enum Qt__InputMethodQuery) ```
void q_graphicsrectitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsrectitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsrectitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, QVariant* (*slot)(QGraphicsRectItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsrectitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)() ```
void q_graphicsrectitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)() ```
void q_graphicsrectitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)() ```
void q_graphicsrectitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRectItem* self, void (*slot)() ```
void q_graphicsrectitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsRectItem* self ```
void q_graphicsrectitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsellipseitem.html

/// q_graphicsellipseitem_new constructs a new QGraphicsEllipseItem object.
///
///
QGraphicsEllipseItem* q_graphicsellipseitem_new();

/// q_graphicsellipseitem_new2 constructs a new QGraphicsEllipseItem object.
///
/// ``` QRectF* rect ```
QGraphicsEllipseItem* q_graphicsellipseitem_new2(void* rect);

/// q_graphicsellipseitem_new3 constructs a new QGraphicsEllipseItem object.
///
/// ``` double x, double y, double w, double h ```
QGraphicsEllipseItem* q_graphicsellipseitem_new3(double x, double y, double w, double h);

/// q_graphicsellipseitem_new4 constructs a new QGraphicsEllipseItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsEllipseItem* q_graphicsellipseitem_new4(void* parent);

/// q_graphicsellipseitem_new5 constructs a new QGraphicsEllipseItem object.
///
/// ``` QRectF* rect, QGraphicsItem* parent ```
QGraphicsEllipseItem* q_graphicsellipseitem_new5(void* rect, void* parent);

/// q_graphicsellipseitem_new6 constructs a new QGraphicsEllipseItem object.
///
/// ``` double x, double y, double w, double h, QGraphicsItem* parent ```
QGraphicsEllipseItem* q_graphicsellipseitem_new6(double x, double y, double w, double h, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#rect)
///
/// ``` QGraphicsEllipseItem* self ```
QRectF* q_graphicsellipseitem_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#setRect)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
void q_graphicsellipseitem_set_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#setRect)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
void q_graphicsellipseitem_set_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#startAngle)
///
/// ``` QGraphicsEllipseItem* self ```
int32_t q_graphicsellipseitem_start_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#setStartAngle)
///
/// ``` QGraphicsEllipseItem* self, int angle ```
void q_graphicsellipseitem_set_start_angle(void* self, int angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#spanAngle)
///
/// ``` QGraphicsEllipseItem* self ```
int32_t q_graphicsellipseitem_span_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#setSpanAngle)
///
/// ``` QGraphicsEllipseItem* self, int angle ```
void q_graphicsellipseitem_set_span_angle(void* self, int angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#boundingRect)
///
/// ``` QGraphicsEllipseItem* self ```
QRectF* q_graphicsellipseitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, QRectF* (*slot)() ```
void q_graphicsellipseitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self ```
QRectF* q_graphicsellipseitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#shape)
///
/// ``` QGraphicsEllipseItem* self ```
QPainterPath* q_graphicsellipseitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* (*slot)() ```
void q_graphicsellipseitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self ```
QPainterPath* q_graphicsellipseitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#contains)
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
bool q_graphicsellipseitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QPointF*) ```
void q_graphicsellipseitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
bool q_graphicsellipseitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#paint)
///
/// ``` QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsellipseitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsellipseitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsellipseitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#isObscuredBy)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item ```
bool q_graphicsellipseitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QGraphicsItem*) ```
void q_graphicsellipseitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item ```
bool q_graphicsellipseitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#opaqueArea)
///
/// ``` QGraphicsEllipseItem* self ```
QPainterPath* q_graphicsellipseitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* (*slot)() ```
void q_graphicsellipseitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self ```
QPainterPath* q_graphicsellipseitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#type)
///
/// ``` QGraphicsEllipseItem* self ```
int32_t q_graphicsellipseitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, int32_t (*slot)() ```
void q_graphicsellipseitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self ```
int32_t q_graphicsellipseitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#supportsExtension)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsellipseitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, enum QGraphicsItem__Extension) ```
void q_graphicsellipseitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsellipseitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#setExtension)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsellipseitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsellipseitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsellipseitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsellipseitem.html#extension)
///
/// ``` QGraphicsEllipseItem* self, QVariant* variant ```
QVariant* q_graphicsellipseitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsEllipseItem* self, QVariant* (*slot)(QGraphicsEllipseItem*, QVariant*) ```
void q_graphicsellipseitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsEllipseItem* self, QVariant* variant ```
QVariant* q_graphicsellipseitem_qbase_extension(void* self, void* variant);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QGraphicsEllipseItem* self ```
QPen* q_graphicsellipseitem_pen(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QGraphicsEllipseItem* self, QPen* pen ```
void q_graphicsellipseitem_set_pen(void* self, void* pen);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QGraphicsEllipseItem* self ```
QBrush* q_graphicsellipseitem_brush(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QGraphicsEllipseItem* self, QBrush* brush ```
void q_graphicsellipseitem_set_brush(void* self, void* brush);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsScene* q_graphicsellipseitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsObject* q_graphicsellipseitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsWidget* q_graphicsellipseitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsWidget* q_graphicsellipseitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsWidget* q_graphicsellipseitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* parent ```
void q_graphicsellipseitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsEllipseItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsObject* q_graphicsellipseitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsObject* q_graphicsellipseitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItemGroup* q_graphicsellipseitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItemGroup* group ```
void q_graphicsellipseitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsEllipseItem* self ```
int64_t q_graphicsellipseitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsellipseitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsEllipseItem* self, int flags ```
void q_graphicsellipseitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsEllipseItem* self ```
int64_t q_graphicsellipseitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsellipseitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsEllipseItem* self ```
int64_t q_graphicsellipseitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsellipseitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsEllipseItem* self ```
const char* q_graphicsellipseitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsEllipseItem* self, const char* toolTip ```
void q_graphicsellipseitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsEllipseItem* self ```
QCursor* q_graphicsellipseitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsEllipseItem* self, QCursor* cursor ```
void q_graphicsellipseitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* parent ```
bool q_graphicsellipseitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsEllipseItem* self, bool visible ```
void q_graphicsellipseitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsEllipseItem* self, bool enabled ```
void q_graphicsellipseitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsEllipseItem* self, bool selected ```
void q_graphicsellipseitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsEllipseItem* self, bool on ```
void q_graphicsellipseitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsEllipseItem* self, double opacity ```
void q_graphicsellipseitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsEffect* q_graphicsellipseitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsEffect* effect ```
void q_graphicsellipseitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsEllipseItem* self ```
int64_t q_graphicsellipseitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsEllipseItem* self, int buttons ```
void q_graphicsellipseitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsEllipseItem* self, bool enabled ```
void q_graphicsellipseitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsEllipseItem* self, bool enabled ```
void q_graphicsellipseitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsEllipseItem* self, bool enabled ```
void q_graphicsellipseitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsEllipseItem* self, bool enabled ```
void q_graphicsellipseitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsEllipseItem* self, bool active ```
void q_graphicsellipseitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item ```
void q_graphicsellipseitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsEllipseItem* self ```
QGraphicsItem* q_graphicsellipseitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsEllipseItem* self ```
QPointF* q_graphicsellipseitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsEllipseItem* self, double x ```
void q_graphicsellipseitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsEllipseItem* self, double y ```
void q_graphicsellipseitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsEllipseItem* self ```
QPointF* q_graphicsellipseitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsEllipseItem* self, QPointF* pos ```
void q_graphicsellipseitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsEllipseItem* self, double x, double y ```
void q_graphicsellipseitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsEllipseItem* self, double dx, double dy ```
void q_graphicsellipseitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
void q_graphicsellipseitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsEllipseItem* self ```
QTransform* q_graphicsellipseitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsEllipseItem* self ```
QTransform* q_graphicsellipseitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsEllipseItem* self, QTransform* viewportTransform ```
QTransform* q_graphicsellipseitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* other ```
QTransform* q_graphicsellipseitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsEllipseItem* self, QTransform* matrix ```
void q_graphicsellipseitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsEllipseItem* self, double angle ```
void q_graphicsellipseitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsEllipseItem* self, double scale ```
void q_graphicsellipseitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsEllipseItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsellipseitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsTransform* transformations[] ```
void q_graphicsellipseitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsEllipseItem* self ```
QPointF* q_graphicsellipseitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsEllipseItem* self, QPointF* origin ```
void q_graphicsellipseitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsEllipseItem* self, double ax, double ay ```
void q_graphicsellipseitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsEllipseItem* self, double z ```
void q_graphicsellipseitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* sibling ```
void q_graphicsellipseitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsEllipseItem* self ```
QRectF* q_graphicsellipseitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsEllipseItem* self ```
QRectF* q_graphicsellipseitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsEllipseItem* self ```
QPainterPath* q_graphicsellipseitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsEllipseItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
bool q_graphicsellipseitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsEllipseItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsellipseitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsEllipseItem* self ```
double q_graphicsellipseitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsEllipseItem* self, double granularity ```
void q_graphicsellipseitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double width, double height ```
void q_graphicsellipseitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsEllipseItem* self, double dx, double dy ```
void q_graphicsellipseitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsellipseitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
QPointF* q_graphicsellipseitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
QPointF* q_graphicsellipseitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsellipseitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
QPointF* q_graphicsellipseitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsEllipseItem* self, QPointF* point ```
QPointF* q_graphicsellipseitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
QRectF* q_graphicsellipseitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path ```
QPainterPath* q_graphicsellipseitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsellipseitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsEllipseItem* self, double x, double y ```
QPointF* q_graphicsellipseitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsEllipseItem* self, double x, double y ```
QPointF* q_graphicsellipseitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsellipseitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsEllipseItem* self, double x, double y ```
QPointF* q_graphicsellipseitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsEllipseItem* self, double x, double y ```
QPointF* q_graphicsellipseitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsellipseitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* child ```
bool q_graphicsellipseitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsellipseitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsEllipseItem* self ```
bool q_graphicsellipseitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsEllipseItem* self, int key ```
QVariant* q_graphicsellipseitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsEllipseItem* self, int key, QVariant* value ```
void q_graphicsellipseitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsEllipseItem* self ```
int64_t q_graphicsellipseitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsEllipseItem* self, int hints ```
void q_graphicsellipseitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* filterItem ```
void q_graphicsellipseitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* filterItem ```
void q_graphicsellipseitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsellipseitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsellipseitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsEllipseItem* self, enum Qt__FocusReason focusReason ```
void q_graphicsellipseitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
void q_graphicsellipseitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect, int xmargin ```
void q_graphicsellipseitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsellipseitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsellipseitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsEllipseItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsellipseitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsellipseitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsEllipseItem* self, QTransform* matrix, bool combine ```
void q_graphicsellipseitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsEllipseItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
bool q_graphicsellipseitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsEllipseItem* self, QRectF* rect ```
void q_graphicsellipseitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsEllipseItem* self, double dx, double dy, QRectF* rect ```
void q_graphicsellipseitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, int phase ```
void q_graphicsellipseitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, int phase ```
void q_graphicsellipseitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, int) ```
void q_graphicsellipseitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsellipseitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsellipseitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsellipseitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsellipseitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsellipseitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsellipseitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsellipseitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsellipseitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QGraphicsItem*, QEvent*) ```
void q_graphicsellipseitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QEvent* event ```
bool q_graphicsellipseitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QEvent* event ```
bool q_graphicsellipseitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, bool (*slot)(QGraphicsEllipseItem*, QEvent*) ```
void q_graphicsellipseitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsellipseitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsellipseitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsellipseitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsellipseitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsellipseitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsellipseitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsellipseitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsellipseitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QFocusEvent* event ```
void q_graphicsellipseitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QFocusEvent* event ```
void q_graphicsellipseitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QFocusEvent*) ```
void q_graphicsellipseitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QFocusEvent* event ```
void q_graphicsellipseitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QFocusEvent* event ```
void q_graphicsellipseitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QFocusEvent*) ```
void q_graphicsellipseitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsellipseitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsellipseitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsellipseitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsellipseitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QKeyEvent* event ```
void q_graphicsellipseitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QKeyEvent* event ```
void q_graphicsellipseitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QKeyEvent*) ```
void q_graphicsellipseitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QKeyEvent* event ```
void q_graphicsellipseitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QKeyEvent* event ```
void q_graphicsellipseitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QKeyEvent*) ```
void q_graphicsellipseitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsellipseitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsellipseitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsellipseitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsellipseitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsellipseitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsellipseitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsellipseitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicsellipseitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QInputMethodEvent* event ```
void q_graphicsellipseitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QInputMethodEvent* event ```
void q_graphicsellipseitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)(QGraphicsEllipseItem*, QInputMethodEvent*) ```
void q_graphicsellipseitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsellipseitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsellipseitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QVariant* (*slot)(QGraphicsEllipseItem*, enum Qt__InputMethodQuery) ```
void q_graphicsellipseitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsellipseitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsellipseitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, QVariant* (*slot)(QGraphicsEllipseItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsellipseitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)() ```
void q_graphicsellipseitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)() ```
void q_graphicsellipseitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)() ```
void q_graphicsellipseitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEllipseItem* self, void (*slot)() ```
void q_graphicsellipseitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsEllipseItem* self ```
void q_graphicsellipseitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicspolygonitem.html

/// q_graphicspolygonitem_new constructs a new QGraphicsPolygonItem object.
///
///
QGraphicsPolygonItem* q_graphicspolygonitem_new();

/// q_graphicspolygonitem_new2 constructs a new QGraphicsPolygonItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsPolygonItem* q_graphicspolygonitem_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#fillRule)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_fill_rule(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#setFillRule)
///
/// ``` QGraphicsPolygonItem* self, enum Qt__FillRule rule ```
void q_graphicspolygonitem_set_fill_rule(void* self, int64_t rule);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#boundingRect)
///
/// ``` QGraphicsPolygonItem* self ```
QRectF* q_graphicspolygonitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, QRectF* (*slot)() ```
void q_graphicspolygonitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self ```
QRectF* q_graphicspolygonitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#shape)
///
/// ``` QGraphicsPolygonItem* self ```
QPainterPath* q_graphicspolygonitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* (*slot)() ```
void q_graphicspolygonitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self ```
QPainterPath* q_graphicspolygonitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#contains)
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
bool q_graphicspolygonitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QPointF*) ```
void q_graphicspolygonitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
bool q_graphicspolygonitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#paint)
///
/// ``` QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspolygonitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicspolygonitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspolygonitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#isObscuredBy)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item ```
bool q_graphicspolygonitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QGraphicsItem*) ```
void q_graphicspolygonitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item ```
bool q_graphicspolygonitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#opaqueArea)
///
/// ``` QGraphicsPolygonItem* self ```
QPainterPath* q_graphicspolygonitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* (*slot)() ```
void q_graphicspolygonitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self ```
QPainterPath* q_graphicspolygonitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#type)
///
/// ``` QGraphicsPolygonItem* self ```
int32_t q_graphicspolygonitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, int32_t (*slot)() ```
void q_graphicspolygonitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self ```
int32_t q_graphicspolygonitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#supportsExtension)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspolygonitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, enum QGraphicsItem__Extension) ```
void q_graphicspolygonitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspolygonitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#setExtension)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspolygonitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicspolygonitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspolygonitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspolygonitem.html#extension)
///
/// ``` QGraphicsPolygonItem* self, QVariant* variant ```
QVariant* q_graphicspolygonitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPolygonItem* self, QVariant* (*slot)(QGraphicsPolygonItem*, QVariant*) ```
void q_graphicspolygonitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPolygonItem* self, QVariant* variant ```
QVariant* q_graphicspolygonitem_qbase_extension(void* self, void* variant);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QGraphicsPolygonItem* self ```
QPen* q_graphicspolygonitem_pen(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QGraphicsPolygonItem* self, QPen* pen ```
void q_graphicspolygonitem_set_pen(void* self, void* pen);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QGraphicsPolygonItem* self ```
QBrush* q_graphicspolygonitem_brush(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QGraphicsPolygonItem* self, QBrush* brush ```
void q_graphicspolygonitem_set_brush(void* self, void* brush);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsScene* q_graphicspolygonitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsObject* q_graphicspolygonitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsWidget* q_graphicspolygonitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsWidget* q_graphicspolygonitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsWidget* q_graphicspolygonitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* parent ```
void q_graphicspolygonitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsPolygonItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsObject* q_graphicspolygonitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsObject* q_graphicspolygonitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItemGroup* q_graphicspolygonitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItemGroup* group ```
void q_graphicspolygonitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicspolygonitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsPolygonItem* self, int flags ```
void q_graphicspolygonitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicspolygonitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicspolygonitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsPolygonItem* self ```
const char* q_graphicspolygonitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsPolygonItem* self, const char* toolTip ```
void q_graphicspolygonitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsPolygonItem* self ```
QCursor* q_graphicspolygonitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsPolygonItem* self, QCursor* cursor ```
void q_graphicspolygonitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* parent ```
bool q_graphicspolygonitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsPolygonItem* self, bool visible ```
void q_graphicspolygonitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsPolygonItem* self, bool enabled ```
void q_graphicspolygonitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsPolygonItem* self, bool selected ```
void q_graphicspolygonitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsPolygonItem* self, bool on ```
void q_graphicspolygonitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsPolygonItem* self, double opacity ```
void q_graphicspolygonitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsEffect* q_graphicspolygonitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsEffect* effect ```
void q_graphicspolygonitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsPolygonItem* self, int buttons ```
void q_graphicspolygonitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsPolygonItem* self, bool enabled ```
void q_graphicspolygonitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsPolygonItem* self, bool enabled ```
void q_graphicspolygonitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsPolygonItem* self, bool enabled ```
void q_graphicspolygonitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsPolygonItem* self, bool enabled ```
void q_graphicspolygonitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsPolygonItem* self, bool active ```
void q_graphicspolygonitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item ```
void q_graphicspolygonitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsPolygonItem* self ```
QGraphicsItem* q_graphicspolygonitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsPolygonItem* self ```
QPointF* q_graphicspolygonitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsPolygonItem* self, double x ```
void q_graphicspolygonitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsPolygonItem* self, double y ```
void q_graphicspolygonitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsPolygonItem* self ```
QPointF* q_graphicspolygonitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPolygonItem* self, QPointF* pos ```
void q_graphicspolygonitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPolygonItem* self, double x, double y ```
void q_graphicspolygonitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsPolygonItem* self, double dx, double dy ```
void q_graphicspolygonitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
void q_graphicspolygonitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsPolygonItem* self ```
QTransform* q_graphicspolygonitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsPolygonItem* self ```
QTransform* q_graphicspolygonitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsPolygonItem* self, QTransform* viewportTransform ```
QTransform* q_graphicspolygonitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* other ```
QTransform* q_graphicspolygonitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPolygonItem* self, QTransform* matrix ```
void q_graphicspolygonitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsPolygonItem* self, double angle ```
void q_graphicspolygonitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsPolygonItem* self, double scale ```
void q_graphicspolygonitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsPolygonItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicspolygonitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsTransform* transformations[] ```
void q_graphicspolygonitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsPolygonItem* self ```
QPointF* q_graphicspolygonitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPolygonItem* self, QPointF* origin ```
void q_graphicspolygonitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPolygonItem* self, double ax, double ay ```
void q_graphicspolygonitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsPolygonItem* self, double z ```
void q_graphicspolygonitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* sibling ```
void q_graphicspolygonitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsPolygonItem* self ```
QRectF* q_graphicspolygonitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsPolygonItem* self ```
QRectF* q_graphicspolygonitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsPolygonItem* self ```
QPainterPath* q_graphicspolygonitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPolygonItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
bool q_graphicspolygonitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsPolygonItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicspolygonitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsPolygonItem* self ```
double q_graphicspolygonitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsPolygonItem* self, double granularity ```
void q_graphicspolygonitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double width, double height ```
void q_graphicspolygonitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPolygonItem* self, double dx, double dy ```
void q_graphicspolygonitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspolygonitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
QPointF* q_graphicspolygonitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
QPointF* q_graphicspolygonitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspolygonitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
QPointF* q_graphicspolygonitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPolygonItem* self, QPointF* point ```
QPointF* q_graphicspolygonitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
QRectF* q_graphicspolygonitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path ```
QPainterPath* q_graphicspolygonitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspolygonitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPolygonItem* self, double x, double y ```
QPointF* q_graphicspolygonitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPolygonItem* self, double x, double y ```
QPointF* q_graphicspolygonitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspolygonitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPolygonItem* self, double x, double y ```
QPointF* q_graphicspolygonitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPolygonItem* self, double x, double y ```
QPointF* q_graphicspolygonitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspolygonitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* child ```
bool q_graphicspolygonitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicspolygonitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsPolygonItem* self ```
bool q_graphicspolygonitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsPolygonItem* self, int key ```
QVariant* q_graphicspolygonitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsPolygonItem* self, int key, QVariant* value ```
void q_graphicspolygonitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsPolygonItem* self ```
int64_t q_graphicspolygonitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsPolygonItem* self, int hints ```
void q_graphicspolygonitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* filterItem ```
void q_graphicspolygonitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* filterItem ```
void q_graphicspolygonitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicspolygonitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicspolygonitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPolygonItem* self, enum Qt__FocusReason focusReason ```
void q_graphicspolygonitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
void q_graphicspolygonitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect, int xmargin ```
void q_graphicspolygonitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicspolygonitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicspolygonitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPolygonItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicspolygonitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicspolygonitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPolygonItem* self, QTransform* matrix, bool combine ```
void q_graphicspolygonitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPolygonItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
bool q_graphicspolygonitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPolygonItem* self, QRectF* rect ```
void q_graphicspolygonitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPolygonItem* self, double dx, double dy, QRectF* rect ```
void q_graphicspolygonitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, int phase ```
void q_graphicspolygonitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, int phase ```
void q_graphicspolygonitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, int) ```
void q_graphicspolygonitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspolygonitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspolygonitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicspolygonitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspolygonitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspolygonitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicspolygonitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspolygonitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspolygonitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QGraphicsItem*, QEvent*) ```
void q_graphicspolygonitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QEvent* event ```
bool q_graphicspolygonitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QEvent* event ```
bool q_graphicspolygonitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, bool (*slot)(QGraphicsPolygonItem*, QEvent*) ```
void q_graphicspolygonitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspolygonitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspolygonitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicspolygonitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspolygonitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspolygonitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspolygonitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspolygonitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspolygonitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QFocusEvent* event ```
void q_graphicspolygonitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QFocusEvent* event ```
void q_graphicspolygonitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QFocusEvent*) ```
void q_graphicspolygonitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QFocusEvent* event ```
void q_graphicspolygonitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QFocusEvent* event ```
void q_graphicspolygonitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QFocusEvent*) ```
void q_graphicspolygonitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspolygonitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspolygonitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspolygonitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspolygonitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QKeyEvent* event ```
void q_graphicspolygonitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QKeyEvent* event ```
void q_graphicspolygonitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QKeyEvent*) ```
void q_graphicspolygonitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QKeyEvent* event ```
void q_graphicspolygonitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QKeyEvent* event ```
void q_graphicspolygonitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QKeyEvent*) ```
void q_graphicspolygonitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspolygonitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspolygonitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspolygonitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspolygonitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspolygonitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspolygonitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspolygonitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicspolygonitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QInputMethodEvent* event ```
void q_graphicspolygonitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QInputMethodEvent* event ```
void q_graphicspolygonitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)(QGraphicsPolygonItem*, QInputMethodEvent*) ```
void q_graphicspolygonitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspolygonitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspolygonitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QVariant* (*slot)(QGraphicsPolygonItem*, enum Qt__InputMethodQuery) ```
void q_graphicspolygonitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspolygonitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspolygonitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, QVariant* (*slot)(QGraphicsPolygonItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicspolygonitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)() ```
void q_graphicspolygonitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)() ```
void q_graphicspolygonitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)() ```
void q_graphicspolygonitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPolygonItem* self, void (*slot)() ```
void q_graphicspolygonitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsPolygonItem* self ```
void q_graphicspolygonitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicslineitem.html

/// q_graphicslineitem_new constructs a new QGraphicsLineItem object.
///
///
QGraphicsLineItem* q_graphicslineitem_new();

/// q_graphicslineitem_new2 constructs a new QGraphicsLineItem object.
///
/// ``` QLineF* line ```
QGraphicsLineItem* q_graphicslineitem_new2(void* line);

/// q_graphicslineitem_new3 constructs a new QGraphicsLineItem object.
///
/// ``` double x1, double y1, double x2, double y2 ```
QGraphicsLineItem* q_graphicslineitem_new3(double x1, double y1, double x2, double y2);

/// q_graphicslineitem_new4 constructs a new QGraphicsLineItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsLineItem* q_graphicslineitem_new4(void* parent);

/// q_graphicslineitem_new5 constructs a new QGraphicsLineItem object.
///
/// ``` QLineF* line, QGraphicsItem* parent ```
QGraphicsLineItem* q_graphicslineitem_new5(void* line, void* parent);

/// q_graphicslineitem_new6 constructs a new QGraphicsLineItem object.
///
/// ``` double x1, double y1, double x2, double y2, QGraphicsItem* parent ```
QGraphicsLineItem* q_graphicslineitem_new6(double x1, double y1, double x2, double y2, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#pen)
///
/// ``` QGraphicsLineItem* self ```
QPen* q_graphicslineitem_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#setPen)
///
/// ``` QGraphicsLineItem* self, QPen* pen ```
void q_graphicslineitem_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#line)
///
/// ``` QGraphicsLineItem* self ```
QLineF* q_graphicslineitem_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#setLine)
///
/// ``` QGraphicsLineItem* self, QLineF* line ```
void q_graphicslineitem_set_line(void* self, void* line);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#setLine)
///
/// ``` QGraphicsLineItem* self, double x1, double y1, double x2, double y2 ```
void q_graphicslineitem_set_line2(void* self, double x1, double y1, double x2, double y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#boundingRect)
///
/// ``` QGraphicsLineItem* self ```
QRectF* q_graphicslineitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, QRectF* (*slot)() ```
void q_graphicslineitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self ```
QRectF* q_graphicslineitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#shape)
///
/// ``` QGraphicsLineItem* self ```
QPainterPath* q_graphicslineitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, QPainterPath* (*slot)() ```
void q_graphicslineitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self ```
QPainterPath* q_graphicslineitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#contains)
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
bool q_graphicslineitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QPointF*) ```
void q_graphicslineitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
bool q_graphicslineitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#paint)
///
/// ``` QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicslineitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicslineitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicslineitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#isObscuredBy)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item ```
bool q_graphicslineitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QGraphicsItem*) ```
void q_graphicslineitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item ```
bool q_graphicslineitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#opaqueArea)
///
/// ``` QGraphicsLineItem* self ```
QPainterPath* q_graphicslineitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, QPainterPath* (*slot)() ```
void q_graphicslineitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self ```
QPainterPath* q_graphicslineitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#type)
///
/// ``` QGraphicsLineItem* self ```
int32_t q_graphicslineitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, int32_t (*slot)() ```
void q_graphicslineitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self ```
int32_t q_graphicslineitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#supportsExtension)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicslineitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, enum QGraphicsItem__Extension) ```
void q_graphicslineitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicslineitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#setExtension)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicslineitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicslineitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicslineitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslineitem.html#extension)
///
/// ``` QGraphicsLineItem* self, QVariant* variant ```
QVariant* q_graphicslineitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLineItem* self, QVariant* (*slot)(QGraphicsLineItem*, QVariant*) ```
void q_graphicslineitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsLineItem* self, QVariant* variant ```
QVariant* q_graphicslineitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsScene* q_graphicslineitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsObject* q_graphicslineitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsWidget* q_graphicslineitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsWidget* q_graphicslineitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsWidget* q_graphicslineitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* parent ```
void q_graphicslineitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsLineItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicslineitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsObject* q_graphicslineitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsObject* q_graphicslineitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItemGroup* q_graphicslineitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsLineItem* self, QGraphicsItemGroup* group ```
void q_graphicslineitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsLineItem* self ```
int64_t q_graphicslineitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicslineitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsLineItem* self, int flags ```
void q_graphicslineitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsLineItem* self ```
int64_t q_graphicslineitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicslineitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsLineItem* self ```
int64_t q_graphicslineitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicslineitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsLineItem* self ```
const char* q_graphicslineitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsLineItem* self, const char* toolTip ```
void q_graphicslineitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsLineItem* self ```
QCursor* q_graphicslineitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsLineItem* self, QCursor* cursor ```
void q_graphicslineitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* parent ```
bool q_graphicslineitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsLineItem* self, bool visible ```
void q_graphicslineitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsLineItem* self, bool enabled ```
void q_graphicslineitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsLineItem* self, bool selected ```
void q_graphicslineitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsLineItem* self, bool on ```
void q_graphicslineitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsLineItem* self, double opacity ```
void q_graphicslineitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsEffect* q_graphicslineitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsLineItem* self, QGraphicsEffect* effect ```
void q_graphicslineitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsLineItem* self ```
int64_t q_graphicslineitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsLineItem* self, int buttons ```
void q_graphicslineitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsLineItem* self, bool enabled ```
void q_graphicslineitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsLineItem* self, bool enabled ```
void q_graphicslineitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsLineItem* self, bool enabled ```
void q_graphicslineitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsLineItem* self, bool enabled ```
void q_graphicslineitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsLineItem* self, bool active ```
void q_graphicslineitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item ```
void q_graphicslineitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsLineItem* self ```
QGraphicsItem* q_graphicslineitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsLineItem* self ```
QPointF* q_graphicslineitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsLineItem* self, double x ```
void q_graphicslineitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsLineItem* self, double y ```
void q_graphicslineitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsLineItem* self ```
QPointF* q_graphicslineitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsLineItem* self, QPointF* pos ```
void q_graphicslineitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsLineItem* self, double x, double y ```
void q_graphicslineitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsLineItem* self, double dx, double dy ```
void q_graphicslineitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
void q_graphicslineitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsLineItem* self ```
QTransform* q_graphicslineitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsLineItem* self ```
QTransform* q_graphicslineitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsLineItem* self, QTransform* viewportTransform ```
QTransform* q_graphicslineitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* other ```
QTransform* q_graphicslineitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsLineItem* self, QTransform* matrix ```
void q_graphicslineitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsLineItem* self, double angle ```
void q_graphicslineitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsLineItem* self, double scale ```
void q_graphicslineitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsLineItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicslineitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsLineItem* self, QGraphicsTransform* transformations[] ```
void q_graphicslineitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsLineItem* self ```
QPointF* q_graphicslineitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsLineItem* self, QPointF* origin ```
void q_graphicslineitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsLineItem* self, double ax, double ay ```
void q_graphicslineitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsLineItem* self, double z ```
void q_graphicslineitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* sibling ```
void q_graphicslineitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsLineItem* self ```
QRectF* q_graphicslineitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsLineItem* self ```
QRectF* q_graphicslineitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsLineItem* self ```
QPainterPath* q_graphicslineitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsLineItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicslineitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
bool q_graphicslineitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsLineItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicslineitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsLineItem* self ```
double q_graphicslineitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsLineItem* self, double granularity ```
void q_graphicslineitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsLineItem* self, double x, double y, double width, double height ```
void q_graphicslineitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsLineItem* self, double dx, double dy ```
void q_graphicslineitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicslineitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
QPointF* q_graphicslineitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
QPointF* q_graphicslineitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsLineItem* self, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsLineItem* self, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicslineitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
QPointF* q_graphicslineitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsLineItem* self, QPointF* point ```
QPointF* q_graphicslineitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
QRectF* q_graphicslineitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsLineItem* self, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsLineItem* self, QPainterPath* path ```
QPainterPath* q_graphicslineitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicslineitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsLineItem* self, double x, double y ```
QPointF* q_graphicslineitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsLineItem* self, double x, double y ```
QPointF* q_graphicslineitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicslineitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsLineItem* self, double x, double y ```
QPointF* q_graphicslineitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsLineItem* self, double x, double y ```
QPointF* q_graphicslineitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h ```
QRectF* q_graphicslineitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* child ```
bool q_graphicslineitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicslineitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsLineItem* self ```
bool q_graphicslineitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsLineItem* self, int key ```
QVariant* q_graphicslineitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsLineItem* self, int key, QVariant* value ```
void q_graphicslineitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsLineItem* self ```
int64_t q_graphicslineitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsLineItem* self, int hints ```
void q_graphicslineitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* filterItem ```
void q_graphicslineitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* filterItem ```
void q_graphicslineitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicslineitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicslineitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsLineItem* self, enum Qt__FocusReason focusReason ```
void q_graphicslineitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
void q_graphicslineitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, QRectF* rect, int xmargin ```
void q_graphicslineitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicslineitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicslineitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsLineItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicslineitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicslineitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsLineItem* self, QTransform* matrix, bool combine ```
void q_graphicslineitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsLineItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicslineitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
bool q_graphicslineitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsLineItem* self, QRectF* rect ```
void q_graphicslineitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsLineItem* self, double dx, double dy, QRectF* rect ```
void q_graphicslineitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, int phase ```
void q_graphicslineitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, int phase ```
void q_graphicslineitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, int) ```
void q_graphicslineitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicslineitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicslineitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicslineitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicslineitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicslineitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicslineitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicslineitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicslineitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QGraphicsItem*, QEvent*) ```
void q_graphicslineitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QEvent* event ```
bool q_graphicslineitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QEvent* event ```
bool q_graphicslineitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, bool (*slot)(QGraphicsLineItem*, QEvent*) ```
void q_graphicslineitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicslineitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicslineitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicslineitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicslineitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicslineitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicslineitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicslineitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicslineitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QFocusEvent* event ```
void q_graphicslineitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QFocusEvent* event ```
void q_graphicslineitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QFocusEvent*) ```
void q_graphicslineitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QFocusEvent* event ```
void q_graphicslineitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QFocusEvent* event ```
void q_graphicslineitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QFocusEvent*) ```
void q_graphicslineitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicslineitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicslineitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicslineitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicslineitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QKeyEvent* event ```
void q_graphicslineitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QKeyEvent* event ```
void q_graphicslineitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QKeyEvent*) ```
void q_graphicslineitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QKeyEvent* event ```
void q_graphicslineitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QKeyEvent* event ```
void q_graphicslineitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QKeyEvent*) ```
void q_graphicslineitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicslineitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicslineitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicslineitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicslineitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicslineitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicslineitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicslineitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicslineitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, QInputMethodEvent* event ```
void q_graphicslineitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QInputMethodEvent* event ```
void q_graphicslineitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)(QGraphicsLineItem*, QInputMethodEvent*) ```
void q_graphicslineitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicslineitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicslineitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QVariant* (*slot)(QGraphicsLineItem*, enum Qt__InputMethodQuery) ```
void q_graphicslineitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicslineitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicslineitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, QVariant* (*slot)(QGraphicsLineItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicslineitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)() ```
void q_graphicslineitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)() ```
void q_graphicslineitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)() ```
void q_graphicslineitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLineItem* self, void (*slot)() ```
void q_graphicslineitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsLineItem* self ```
void q_graphicslineitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicspixmapitem.html

/// q_graphicspixmapitem_new constructs a new QGraphicsPixmapItem object.
///
///
QGraphicsPixmapItem* q_graphicspixmapitem_new();

/// q_graphicspixmapitem_new2 constructs a new QGraphicsPixmapItem object.
///
/// ``` QPixmap* pixmap ```
QGraphicsPixmapItem* q_graphicspixmapitem_new2(void* pixmap);

/// q_graphicspixmapitem_new3 constructs a new QGraphicsPixmapItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsPixmapItem* q_graphicspixmapitem_new3(void* parent);

/// q_graphicspixmapitem_new4 constructs a new QGraphicsPixmapItem object.
///
/// ``` QPixmap* pixmap, QGraphicsItem* parent ```
QGraphicsPixmapItem* q_graphicspixmapitem_new4(void* pixmap, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#pixmap)
///
/// ``` QGraphicsPixmapItem* self ```
QPixmap* q_graphicspixmapitem_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setPixmap)
///
/// ``` QGraphicsPixmapItem* self, QPixmap* pixmap ```
void q_graphicspixmapitem_set_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#transformationMode)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_transformation_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setTransformationMode)
///
/// ``` QGraphicsPixmapItem* self, enum Qt__TransformationMode mode ```
void q_graphicspixmapitem_set_transformation_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#offset)
///
/// ``` QGraphicsPixmapItem* self ```
QPointF* q_graphicspixmapitem_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setOffset)
///
/// ``` QGraphicsPixmapItem* self, QPointF* offset ```
void q_graphicspixmapitem_set_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setOffset)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
void q_graphicspixmapitem_set_offset2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#boundingRect)
///
/// ``` QGraphicsPixmapItem* self ```
QRectF* q_graphicspixmapitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, QRectF* (*slot)() ```
void q_graphicspixmapitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self ```
QRectF* q_graphicspixmapitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#shape)
///
/// ``` QGraphicsPixmapItem* self ```
QPainterPath* q_graphicspixmapitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* (*slot)() ```
void q_graphicspixmapitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self ```
QPainterPath* q_graphicspixmapitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#contains)
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
bool q_graphicspixmapitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QPointF*) ```
void q_graphicspixmapitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
bool q_graphicspixmapitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#paint)
///
/// ``` QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspixmapitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicspixmapitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicspixmapitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#isObscuredBy)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item ```
bool q_graphicspixmapitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QGraphicsItem*) ```
void q_graphicspixmapitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item ```
bool q_graphicspixmapitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#opaqueArea)
///
/// ``` QGraphicsPixmapItem* self ```
QPainterPath* q_graphicspixmapitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* (*slot)() ```
void q_graphicspixmapitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self ```
QPainterPath* q_graphicspixmapitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#type)
///
/// ``` QGraphicsPixmapItem* self ```
int32_t q_graphicspixmapitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, int32_t (*slot)() ```
void q_graphicspixmapitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self ```
int32_t q_graphicspixmapitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#shapeMode)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_shape_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setShapeMode)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsPixmapItem__ShapeMode mode ```
void q_graphicspixmapitem_set_shape_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#supportsExtension)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspixmapitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, enum QGraphicsItem__Extension) ```
void q_graphicspixmapitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicspixmapitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#setExtension)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspixmapitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicspixmapitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicspixmapitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicspixmapitem.html#extension)
///
/// ``` QGraphicsPixmapItem* self, QVariant* variant ```
QVariant* q_graphicspixmapitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsPixmapItem* self, QVariant* (*slot)(QGraphicsPixmapItem*, QVariant*) ```
void q_graphicspixmapitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsPixmapItem* self, QVariant* variant ```
QVariant* q_graphicspixmapitem_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsScene* q_graphicspixmapitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsObject* q_graphicspixmapitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsWidget* q_graphicspixmapitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsWidget* q_graphicspixmapitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsWidget* q_graphicspixmapitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* parent ```
void q_graphicspixmapitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsPixmapItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsObject* q_graphicspixmapitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsObject* q_graphicspixmapitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItemGroup* q_graphicspixmapitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItemGroup* group ```
void q_graphicspixmapitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicspixmapitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsPixmapItem* self, int flags ```
void q_graphicspixmapitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicspixmapitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicspixmapitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsPixmapItem* self ```
const char* q_graphicspixmapitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsPixmapItem* self, const char* toolTip ```
void q_graphicspixmapitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsPixmapItem* self ```
QCursor* q_graphicspixmapitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsPixmapItem* self, QCursor* cursor ```
void q_graphicspixmapitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* parent ```
bool q_graphicspixmapitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsPixmapItem* self, bool visible ```
void q_graphicspixmapitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsPixmapItem* self, bool enabled ```
void q_graphicspixmapitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsPixmapItem* self, bool selected ```
void q_graphicspixmapitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsPixmapItem* self, bool on ```
void q_graphicspixmapitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsPixmapItem* self, double opacity ```
void q_graphicspixmapitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsEffect* q_graphicspixmapitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsEffect* effect ```
void q_graphicspixmapitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsPixmapItem* self, int buttons ```
void q_graphicspixmapitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsPixmapItem* self, bool enabled ```
void q_graphicspixmapitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsPixmapItem* self, bool enabled ```
void q_graphicspixmapitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsPixmapItem* self, bool enabled ```
void q_graphicspixmapitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsPixmapItem* self, bool enabled ```
void q_graphicspixmapitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsPixmapItem* self, bool active ```
void q_graphicspixmapitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item ```
void q_graphicspixmapitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsPixmapItem* self ```
QGraphicsItem* q_graphicspixmapitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsPixmapItem* self ```
QPointF* q_graphicspixmapitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsPixmapItem* self, double x ```
void q_graphicspixmapitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsPixmapItem* self, double y ```
void q_graphicspixmapitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsPixmapItem* self ```
QPointF* q_graphicspixmapitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPixmapItem* self, QPointF* pos ```
void q_graphicspixmapitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
void q_graphicspixmapitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsPixmapItem* self, double dx, double dy ```
void q_graphicspixmapitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
void q_graphicspixmapitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsPixmapItem* self ```
QTransform* q_graphicspixmapitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsPixmapItem* self ```
QTransform* q_graphicspixmapitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsPixmapItem* self, QTransform* viewportTransform ```
QTransform* q_graphicspixmapitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* other ```
QTransform* q_graphicspixmapitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPixmapItem* self, QTransform* matrix ```
void q_graphicspixmapitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsPixmapItem* self, double angle ```
void q_graphicspixmapitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsPixmapItem* self, double scale ```
void q_graphicspixmapitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsPixmapItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicspixmapitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsTransform* transformations[] ```
void q_graphicspixmapitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsPixmapItem* self ```
QPointF* q_graphicspixmapitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPixmapItem* self, QPointF* origin ```
void q_graphicspixmapitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsPixmapItem* self, double ax, double ay ```
void q_graphicspixmapitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsPixmapItem* self, double z ```
void q_graphicspixmapitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* sibling ```
void q_graphicspixmapitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsPixmapItem* self ```
QRectF* q_graphicspixmapitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsPixmapItem* self ```
QRectF* q_graphicspixmapitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsPixmapItem* self ```
QPainterPath* q_graphicspixmapitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPixmapItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
bool q_graphicspixmapitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsPixmapItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicspixmapitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsPixmapItem* self ```
double q_graphicspixmapitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsPixmapItem* self, double granularity ```
void q_graphicspixmapitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double width, double height ```
void q_graphicspixmapitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPixmapItem* self, double dx, double dy ```
void q_graphicspixmapitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspixmapitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
QPointF* q_graphicspixmapitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
QPointF* q_graphicspixmapitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicspixmapitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
QPointF* q_graphicspixmapitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPixmapItem* self, QPointF* point ```
QPointF* q_graphicspixmapitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
QRectF* q_graphicspixmapitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path ```
QPainterPath* q_graphicspixmapitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspixmapitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
QPointF* q_graphicspixmapitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
QPointF* q_graphicspixmapitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicspixmapitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
QPointF* q_graphicspixmapitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsPixmapItem* self, double x, double y ```
QPointF* q_graphicspixmapitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h ```
QRectF* q_graphicspixmapitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* child ```
bool q_graphicspixmapitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicspixmapitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsPixmapItem* self ```
bool q_graphicspixmapitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsPixmapItem* self, int key ```
QVariant* q_graphicspixmapitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsPixmapItem* self, int key, QVariant* value ```
void q_graphicspixmapitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsPixmapItem* self ```
int64_t q_graphicspixmapitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsPixmapItem* self, int hints ```
void q_graphicspixmapitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* filterItem ```
void q_graphicspixmapitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* filterItem ```
void q_graphicspixmapitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicspixmapitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicspixmapitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsPixmapItem* self, enum Qt__FocusReason focusReason ```
void q_graphicspixmapitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
void q_graphicspixmapitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect, int xmargin ```
void q_graphicspixmapitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicspixmapitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicspixmapitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsPixmapItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicspixmapitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicspixmapitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsPixmapItem* self, QTransform* matrix, bool combine ```
void q_graphicspixmapitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsPixmapItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
bool q_graphicspixmapitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsPixmapItem* self, QRectF* rect ```
void q_graphicspixmapitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsPixmapItem* self, double dx, double dy, QRectF* rect ```
void q_graphicspixmapitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, int phase ```
void q_graphicspixmapitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, int phase ```
void q_graphicspixmapitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, int) ```
void q_graphicspixmapitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspixmapitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicspixmapitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicspixmapitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspixmapitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicspixmapitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicspixmapitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspixmapitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicspixmapitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QGraphicsItem*, QEvent*) ```
void q_graphicspixmapitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QEvent* event ```
bool q_graphicspixmapitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QEvent* event ```
bool q_graphicspixmapitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, bool (*slot)(QGraphicsPixmapItem*, QEvent*) ```
void q_graphicspixmapitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspixmapitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicspixmapitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicspixmapitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspixmapitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspixmapitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspixmapitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicspixmapitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicspixmapitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QFocusEvent* event ```
void q_graphicspixmapitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QFocusEvent* event ```
void q_graphicspixmapitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QFocusEvent*) ```
void q_graphicspixmapitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QFocusEvent* event ```
void q_graphicspixmapitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QFocusEvent* event ```
void q_graphicspixmapitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QFocusEvent*) ```
void q_graphicspixmapitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspixmapitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspixmapitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicspixmapitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicspixmapitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QKeyEvent* event ```
void q_graphicspixmapitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QKeyEvent* event ```
void q_graphicspixmapitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QKeyEvent*) ```
void q_graphicspixmapitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QKeyEvent* event ```
void q_graphicspixmapitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QKeyEvent* event ```
void q_graphicspixmapitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QKeyEvent*) ```
void q_graphicspixmapitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspixmapitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspixmapitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspixmapitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicspixmapitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicspixmapitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspixmapitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicspixmapitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicspixmapitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QInputMethodEvent* event ```
void q_graphicspixmapitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QInputMethodEvent* event ```
void q_graphicspixmapitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)(QGraphicsPixmapItem*, QInputMethodEvent*) ```
void q_graphicspixmapitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspixmapitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicspixmapitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QVariant* (*slot)(QGraphicsPixmapItem*, enum Qt__InputMethodQuery) ```
void q_graphicspixmapitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspixmapitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicspixmapitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, QVariant* (*slot)(QGraphicsPixmapItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicspixmapitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)() ```
void q_graphicspixmapitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)() ```
void q_graphicspixmapitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)() ```
void q_graphicspixmapitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsPixmapItem* self, void (*slot)() ```
void q_graphicspixmapitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsPixmapItem* self ```
void q_graphicspixmapitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicstextitem.html

/// q_graphicstextitem_new constructs a new QGraphicsTextItem object.
///
///
QGraphicsTextItem* q_graphicstextitem_new();

/// q_graphicstextitem_new2 constructs a new QGraphicsTextItem object.
///
/// ``` const char* text ```
QGraphicsTextItem* q_graphicstextitem_new2(const char* text);

/// q_graphicstextitem_new3 constructs a new QGraphicsTextItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsTextItem* q_graphicstextitem_new3(void* parent);

/// q_graphicstextitem_new4 constructs a new QGraphicsTextItem object.
///
/// ``` const char* text, QGraphicsItem* parent ```
QGraphicsTextItem* q_graphicstextitem_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsTextItem* self ```
QMetaObject* q_graphicstextitem_meta_object(void* self);

/// ``` QGraphicsTextItem* self, const char* param1 ```
void* q_graphicstextitem_metacast(void* self, const char* param1);

/// ``` QGraphicsTextItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstextitem_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, int32_t (*slot)(QGraphicsTextItem*, enum QMetaObject__Call, int, void*) ```
void q_graphicstextitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstextitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicstextitem_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#toHtml)
///
/// ``` QGraphicsTextItem* self ```
const char* q_graphicstextitem_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setHtml)
///
/// ``` QGraphicsTextItem* self, const char* html ```
void q_graphicstextitem_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#toPlainText)
///
/// ``` QGraphicsTextItem* self ```
const char* q_graphicstextitem_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setPlainText)
///
/// ``` QGraphicsTextItem* self, const char* text ```
void q_graphicstextitem_set_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#font)
///
/// ``` QGraphicsTextItem* self ```
QFont* q_graphicstextitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setFont)
///
/// ``` QGraphicsTextItem* self, QFont* font ```
void q_graphicstextitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setDefaultTextColor)
///
/// ``` QGraphicsTextItem* self, QColor* c ```
void q_graphicstextitem_set_default_text_color(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#defaultTextColor)
///
/// ``` QGraphicsTextItem* self ```
QColor* q_graphicstextitem_default_text_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#boundingRect)
///
/// ``` QGraphicsTextItem* self ```
QRectF* q_graphicstextitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, QRectF* (*slot)() ```
void q_graphicstextitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self ```
QRectF* q_graphicstextitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#shape)
///
/// ``` QGraphicsTextItem* self ```
QPainterPath* q_graphicstextitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, QPainterPath* (*slot)() ```
void q_graphicstextitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self ```
QPainterPath* q_graphicstextitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#contains)
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
bool q_graphicstextitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QPointF*) ```
void q_graphicstextitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
bool q_graphicstextitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#paint)
///
/// ``` QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicstextitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicstextitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicstextitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#isObscuredBy)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item ```
bool q_graphicstextitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QGraphicsItem*) ```
void q_graphicstextitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item ```
bool q_graphicstextitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#opaqueArea)
///
/// ``` QGraphicsTextItem* self ```
QPainterPath* q_graphicstextitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, QPainterPath* (*slot)() ```
void q_graphicstextitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self ```
QPainterPath* q_graphicstextitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#type)
///
/// ``` QGraphicsTextItem* self ```
int32_t q_graphicstextitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, int32_t (*slot)() ```
void q_graphicstextitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self ```
int32_t q_graphicstextitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setTextWidth)
///
/// ``` QGraphicsTextItem* self, double width ```
void q_graphicstextitem_set_text_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#textWidth)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_text_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#adjustSize)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setDocument)
///
/// ``` QGraphicsTextItem* self, QTextDocument* document ```
void q_graphicstextitem_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#document)
///
/// ``` QGraphicsTextItem* self ```
QTextDocument* q_graphicstextitem_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setTextInteractionFlags)
///
/// ``` QGraphicsTextItem* self, int flags ```
void q_graphicstextitem_set_text_interaction_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#textInteractionFlags)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setTabChangesFocus)
///
/// ``` QGraphicsTextItem* self, bool b ```
void q_graphicstextitem_set_tab_changes_focus(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#tabChangesFocus)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_tab_changes_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setOpenExternalLinks)
///
/// ``` QGraphicsTextItem* self, bool open ```
void q_graphicstextitem_set_open_external_links(void* self, bool open);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#openExternalLinks)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_open_external_links(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setTextCursor)
///
/// ``` QGraphicsTextItem* self, QTextCursor* cursor ```
void q_graphicstextitem_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#textCursor)
///
/// ``` QGraphicsTextItem* self ```
QTextCursor* q_graphicstextitem_text_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#linkActivated)
///
/// ``` QGraphicsTextItem* self, const char* param1 ```
void q_graphicstextitem_link_activated(void* self, const char* param1);

/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, const char*) ```
void q_graphicstextitem_on_link_activated(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#linkHovered)
///
/// ``` QGraphicsTextItem* self, const char* param1 ```
void q_graphicstextitem_link_hovered(void* self, const char* param1);

/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, const char*) ```
void q_graphicstextitem_on_link_hovered(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#sceneEvent)
///
/// ``` QGraphicsTextItem* self, QEvent* event ```
bool q_graphicstextitem_scene_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QEvent*) ```
void q_graphicstextitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QEvent* event ```
bool q_graphicstextitem_qbase_scene_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#mousePressEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_mouse_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicstextitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#mouseMoveEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_mouse_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicstextitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#mouseReleaseEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_mouse_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicstextitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_mouse_double_click_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicstextitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicstextitem_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#contextMenuEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicstextitem_context_menu_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicstextitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicstextitem_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#keyPressEvent)
///
/// ``` QGraphicsTextItem* self, QKeyEvent* event ```
void q_graphicstextitem_key_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QKeyEvent*) ```
void q_graphicstextitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QKeyEvent* event ```
void q_graphicstextitem_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#keyReleaseEvent)
///
/// ``` QGraphicsTextItem* self, QKeyEvent* event ```
void q_graphicstextitem_key_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QKeyEvent*) ```
void q_graphicstextitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QKeyEvent* event ```
void q_graphicstextitem_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#focusInEvent)
///
/// ``` QGraphicsTextItem* self, QFocusEvent* event ```
void q_graphicstextitem_focus_in_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QFocusEvent*) ```
void q_graphicstextitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QFocusEvent* event ```
void q_graphicstextitem_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#focusOutEvent)
///
/// ``` QGraphicsTextItem* self, QFocusEvent* event ```
void q_graphicstextitem_focus_out_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QFocusEvent*) ```
void q_graphicstextitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QFocusEvent* event ```
void q_graphicstextitem_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#dragEnterEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_drag_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicstextitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#dragLeaveEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_drag_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicstextitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#dragMoveEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_drag_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicstextitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#dropEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_drop_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicstextitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicstextitem_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#inputMethodEvent)
///
/// ``` QGraphicsTextItem* self, QInputMethodEvent* event ```
void q_graphicstextitem_input_method_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QInputMethodEvent*) ```
void q_graphicstextitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QInputMethodEvent* event ```
void q_graphicstextitem_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#hoverEnterEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_hover_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicstextitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_qbase_hover_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#hoverMoveEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_hover_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicstextitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_qbase_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#hoverLeaveEvent)
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_hover_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicstextitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicstextitem_qbase_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#inputMethodQuery)
///
/// ``` QGraphicsTextItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicstextitem_input_method_query(void* self, int64_t query);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, QVariant* (*slot)(QGraphicsTextItem*, enum Qt__InputMethodQuery) ```
void q_graphicstextitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicstextitem_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#supportsExtension)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicstextitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, enum QGraphicsItem__Extension) ```
void q_graphicstextitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicstextitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#setExtension)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicstextitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicstextitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicstextitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstextitem.html#extension)
///
/// ``` QGraphicsTextItem* self, QVariant* variant ```
QVariant* q_graphicstextitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTextItem* self, QVariant* (*slot)(QGraphicsTextItem*, QVariant*) ```
void q_graphicstextitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsTextItem* self, QVariant* variant ```
QVariant* q_graphicstextitem_qbase_extension(void* self, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicstextitem_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicstextitem_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsTextItem* self, enum Qt__GestureType typeVal ```
void q_graphicstextitem_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsTextItem* self, enum Qt__GestureType typeVal ```
void q_graphicstextitem_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicstextitem_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsTextItem* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicstextitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsTextItem* self ```
const char* q_graphicstextitem_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsTextItem* self, const char* name ```
void q_graphicstextitem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsTextItem* self, bool b ```
bool q_graphicstextitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsTextItem* self ```
QThread* q_graphicstextitem_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsTextItem* self, QThread* thread ```
void q_graphicstextitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTextItem* self, int interval ```
int32_t q_graphicstextitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsTextItem* self, int id ```
void q_graphicstextitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsTextItem* self ```
libqt_list /* of QObject* */ q_graphicstextitem_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsTextItem* self, QObject* parent ```
void q_graphicstextitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsTextItem* self, QObject* filterObj ```
void q_graphicstextitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsTextItem* self, QObject* obj ```
void q_graphicstextitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicstextitem_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTextItem* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicstextitem_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicstextitem_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicstextitem_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsTextItem* self, const char* name, QVariant* value ```
bool q_graphicstextitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsTextItem* self, const char* name ```
QVariant* q_graphicstextitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsTextItem* self ```
const char** q_graphicstextitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsTextItem* self ```
QBindingStorage* q_graphicstextitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsTextItem* self ```
QBindingStorage* q_graphicstextitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QObject*) ```
void q_graphicstextitem_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsTextItem* self ```
QObject* q_graphicstextitem_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsTextItem* self, const char* classname ```
bool q_graphicstextitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTextItem* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicstextitem_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstextitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTextItem* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstextitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTextItem* self, QObject* param1 ```
void q_graphicstextitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QGraphicsTextItem* self, void (*slot)(QObject*, QObject*) ```
void q_graphicstextitem_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsScene* q_graphicstextitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsObject* q_graphicstextitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsWidget* q_graphicstextitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsWidget* q_graphicstextitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsWidget* q_graphicstextitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* parent ```
void q_graphicstextitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsTextItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicstextitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsObject* q_graphicstextitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsObject* q_graphicstextitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItemGroup* q_graphicstextitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsTextItem* self, QGraphicsItemGroup* group ```
void q_graphicstextitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicstextitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsTextItem* self, int flags ```
void q_graphicstextitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicstextitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicstextitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsTextItem* self ```
const char* q_graphicstextitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsTextItem* self, const char* toolTip ```
void q_graphicstextitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsTextItem* self ```
QCursor* q_graphicstextitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsTextItem* self, QCursor* cursor ```
void q_graphicstextitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* parent ```
bool q_graphicstextitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsTextItem* self, bool visible ```
void q_graphicstextitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsTextItem* self, bool enabled ```
void q_graphicstextitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsTextItem* self, bool selected ```
void q_graphicstextitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsTextItem* self, bool on ```
void q_graphicstextitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsTextItem* self, double opacity ```
void q_graphicstextitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsEffect* q_graphicstextitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsTextItem* self, QGraphicsEffect* effect ```
void q_graphicstextitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsTextItem* self, int buttons ```
void q_graphicstextitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsTextItem* self, bool enabled ```
void q_graphicstextitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsTextItem* self, bool enabled ```
void q_graphicstextitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsTextItem* self, bool enabled ```
void q_graphicstextitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsTextItem* self, bool enabled ```
void q_graphicstextitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsTextItem* self, bool active ```
void q_graphicstextitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item ```
void q_graphicstextitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsTextItem* self ```
QGraphicsItem* q_graphicstextitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsTextItem* self ```
QPointF* q_graphicstextitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsTextItem* self, double x ```
void q_graphicstextitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsTextItem* self, double y ```
void q_graphicstextitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsTextItem* self ```
QPointF* q_graphicstextitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsTextItem* self, QPointF* pos ```
void q_graphicstextitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsTextItem* self, double x, double y ```
void q_graphicstextitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsTextItem* self, double dx, double dy ```
void q_graphicstextitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
void q_graphicstextitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsTextItem* self ```
QTransform* q_graphicstextitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsTextItem* self ```
QTransform* q_graphicstextitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsTextItem* self, QTransform* viewportTransform ```
QTransform* q_graphicstextitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* other ```
QTransform* q_graphicstextitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsTextItem* self, QTransform* matrix ```
void q_graphicstextitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsTextItem* self, double angle ```
void q_graphicstextitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsTextItem* self, double scale ```
void q_graphicstextitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsTextItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicstextitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsTextItem* self, QGraphicsTransform* transformations[] ```
void q_graphicstextitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsTextItem* self ```
QPointF* q_graphicstextitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsTextItem* self, QPointF* origin ```
void q_graphicstextitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsTextItem* self, double ax, double ay ```
void q_graphicstextitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsTextItem* self, double z ```
void q_graphicstextitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* sibling ```
void q_graphicstextitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsTextItem* self ```
QRectF* q_graphicstextitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsTextItem* self ```
QRectF* q_graphicstextitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsTextItem* self ```
QPainterPath* q_graphicstextitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsTextItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicstextitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
bool q_graphicstextitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsTextItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicstextitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsTextItem* self ```
double q_graphicstextitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsTextItem* self, double granularity ```
void q_graphicstextitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsTextItem* self, double x, double y, double width, double height ```
void q_graphicstextitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsTextItem* self, double dx, double dy ```
void q_graphicstextitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicstextitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
QPointF* q_graphicstextitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
QPointF* q_graphicstextitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicstextitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
QPointF* q_graphicstextitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsTextItem* self, QPointF* point ```
QPointF* q_graphicstextitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
QRectF* q_graphicstextitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicstextitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicstextitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsTextItem* self, double x, double y ```
QPointF* q_graphicstextitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsTextItem* self, double x, double y ```
QPointF* q_graphicstextitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicstextitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsTextItem* self, double x, double y ```
QPointF* q_graphicstextitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsTextItem* self, double x, double y ```
QPointF* q_graphicstextitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicstextitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* child ```
bool q_graphicstextitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicstextitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsTextItem* self ```
bool q_graphicstextitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsTextItem* self, int key ```
QVariant* q_graphicstextitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsTextItem* self, int key, QVariant* value ```
void q_graphicstextitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsTextItem* self ```
int64_t q_graphicstextitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsTextItem* self, int hints ```
void q_graphicstextitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* filterItem ```
void q_graphicstextitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* filterItem ```
void q_graphicstextitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicstextitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicstextitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsTextItem* self, enum Qt__FocusReason focusReason ```
void q_graphicstextitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
void q_graphicstextitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, QRectF* rect, int xmargin ```
void q_graphicstextitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicstextitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicstextitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsTextItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicstextitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicstextitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsTextItem* self, QTransform* matrix, bool combine ```
void q_graphicstextitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsTextItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicstextitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
bool q_graphicstextitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsTextItem* self, QRectF* rect ```
void q_graphicstextitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsTextItem* self, double dx, double dy, QRectF* rect ```
void q_graphicstextitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QEvent* ev ```
bool q_graphicstextitem_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QEvent* ev ```
bool q_graphicstextitem_qbase_event(void* self, void* ev);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QEvent*) ```
void q_graphicstextitem_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QObject* watched, QEvent* event ```
bool q_graphicstextitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QObject* watched, QEvent* event ```
bool q_graphicstextitem_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QObject*, QEvent*) ```
void q_graphicstextitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QTimerEvent* event ```
void q_graphicstextitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QTimerEvent* event ```
void q_graphicstextitem_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QTimerEvent*) ```
void q_graphicstextitem_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QChildEvent* event ```
void q_graphicstextitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QChildEvent* event ```
void q_graphicstextitem_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QChildEvent*) ```
void q_graphicstextitem_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QEvent* event ```
void q_graphicstextitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QEvent* event ```
void q_graphicstextitem_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QEvent*) ```
void q_graphicstextitem_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
void q_graphicstextitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
void q_graphicstextitem_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QMetaMethod*) ```
void q_graphicstextitem_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
void q_graphicstextitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
void q_graphicstextitem_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QMetaMethod*) ```
void q_graphicstextitem_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, int phase ```
void q_graphicstextitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, int phase ```
void q_graphicstextitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, int) ```
void q_graphicstextitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicstextitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicstextitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicstextitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicstextitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicstextitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicstextitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicstextitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicstextitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QGraphicsItem*, QEvent*) ```
void q_graphicstextitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicstextitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicstextitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)(QGraphicsTextItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicstextitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicstextitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicstextitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QVariant* (*slot)(QGraphicsTextItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicstextitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)() ```
void q_graphicstextitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
QObject* q_graphicstextitem_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
QObject* q_graphicstextitem_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QObject* (*slot)() ```
void q_graphicstextitem_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
int32_t q_graphicstextitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
int32_t q_graphicstextitem_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, int32_t (*slot)() ```
void q_graphicstextitem_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, const char* signal ```
int32_t q_graphicstextitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, const char* signal ```
int32_t q_graphicstextitem_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, int32_t (*slot)(QGraphicsTextItem*, const char*) ```
void q_graphicstextitem_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
bool q_graphicstextitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, QMetaMethod* signal ```
bool q_graphicstextitem_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, bool (*slot)(QGraphicsTextItem*, QMetaMethod*) ```
void q_graphicstextitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)() ```
void q_graphicstextitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)() ```
void q_graphicstextitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTextItem* self, void (*slot)() ```
void q_graphicstextitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsTextItem* self ```
void q_graphicstextitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssimpletextitem.html

/// q_graphicssimpletextitem_new constructs a new QGraphicsSimpleTextItem object.
///
///
QGraphicsSimpleTextItem* q_graphicssimpletextitem_new();

/// q_graphicssimpletextitem_new2 constructs a new QGraphicsSimpleTextItem object.
///
/// ``` const char* text ```
QGraphicsSimpleTextItem* q_graphicssimpletextitem_new2(const char* text);

/// q_graphicssimpletextitem_new3 constructs a new QGraphicsSimpleTextItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsSimpleTextItem* q_graphicssimpletextitem_new3(void* parent);

/// q_graphicssimpletextitem_new4 constructs a new QGraphicsSimpleTextItem object.
///
/// ``` const char* text, QGraphicsItem* parent ```
QGraphicsSimpleTextItem* q_graphicssimpletextitem_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#setText)
///
/// ``` QGraphicsSimpleTextItem* self, const char* text ```
void q_graphicssimpletextitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#text)
///
/// ``` QGraphicsSimpleTextItem* self ```
const char* q_graphicssimpletextitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#setFont)
///
/// ``` QGraphicsSimpleTextItem* self, QFont* font ```
void q_graphicssimpletextitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#font)
///
/// ``` QGraphicsSimpleTextItem* self ```
QFont* q_graphicssimpletextitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#boundingRect)
///
/// ``` QGraphicsSimpleTextItem* self ```
QRectF* q_graphicssimpletextitem_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* (*slot)() ```
void q_graphicssimpletextitem_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self ```
QRectF* q_graphicssimpletextitem_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#shape)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPainterPath* q_graphicssimpletextitem_shape(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* (*slot)() ```
void q_graphicssimpletextitem_on_shape(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self ```
QPainterPath* q_graphicssimpletextitem_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#contains)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
bool q_graphicssimpletextitem_contains(void* self, void* point);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QPointF*) ```
void q_graphicssimpletextitem_on_contains(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
bool q_graphicssimpletextitem_qbase_contains(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#paint)
///
/// ``` QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssimpletextitem_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicssimpletextitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssimpletextitem_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#isObscuredBy)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item ```
bool q_graphicssimpletextitem_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QGraphicsItem*) ```
void q_graphicssimpletextitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item ```
bool q_graphicssimpletextitem_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#opaqueArea)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPainterPath* q_graphicssimpletextitem_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* (*slot)() ```
void q_graphicssimpletextitem_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self ```
QPainterPath* q_graphicssimpletextitem_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#type)
///
/// ``` QGraphicsSimpleTextItem* self ```
int32_t q_graphicssimpletextitem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, int32_t (*slot)() ```
void q_graphicssimpletextitem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self ```
int32_t q_graphicssimpletextitem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#supportsExtension)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssimpletextitem_supports_extension(void* self, int64_t extension);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, enum QGraphicsItem__Extension) ```
void q_graphicssimpletextitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssimpletextitem_qbase_supports_extension(void* self, int64_t extension);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#setExtension)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssimpletextitem_set_extension(void* self, int64_t extension, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicssimpletextitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssimpletextitem_qbase_set_extension(void* self, int64_t extension, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssimpletextitem.html#extension)
///
/// ``` QGraphicsSimpleTextItem* self, QVariant* variant ```
QVariant* q_graphicssimpletextitem_extension(void* self, void* variant);

/// Allows for overriding the related default method
///
/// ``` QGraphicsSimpleTextItem* self, QVariant* (*slot)(QGraphicsSimpleTextItem*, QVariant*) ```
void q_graphicssimpletextitem_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsSimpleTextItem* self, QVariant* variant ```
QVariant* q_graphicssimpletextitem_qbase_extension(void* self, void* variant);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#pen)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPen* q_graphicssimpletextitem_pen(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setPen)
///
/// ``` QGraphicsSimpleTextItem* self, QPen* pen ```
void q_graphicssimpletextitem_set_pen(void* self, void* pen);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#brush)
///
/// ``` QGraphicsSimpleTextItem* self ```
QBrush* q_graphicssimpletextitem_brush(void* self);

/// Inherited from QAbstractGraphicsShapeItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractgraphicsshapeitem.html#setBrush)
///
/// ``` QGraphicsSimpleTextItem* self, QBrush* brush ```
void q_graphicssimpletextitem_set_brush(void* self, void* brush);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsScene* q_graphicssimpletextitem_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsObject* q_graphicssimpletextitem_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsWidget* q_graphicssimpletextitem_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsWidget* q_graphicssimpletextitem_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsWidget* q_graphicssimpletextitem_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* parent ```
void q_graphicssimpletextitem_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsSimpleTextItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsObject* q_graphicssimpletextitem_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsObject* q_graphicssimpletextitem_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItemGroup* q_graphicssimpletextitem_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItemGroup* group ```
void q_graphicssimpletextitem_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsSimpleTextItem* self ```
int64_t q_graphicssimpletextitem_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicssimpletextitem_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsSimpleTextItem* self, int flags ```
void q_graphicssimpletextitem_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsSimpleTextItem* self ```
int64_t q_graphicssimpletextitem_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicssimpletextitem_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsSimpleTextItem* self ```
int64_t q_graphicssimpletextitem_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicssimpletextitem_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsSimpleTextItem* self ```
const char* q_graphicssimpletextitem_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsSimpleTextItem* self, const char* toolTip ```
void q_graphicssimpletextitem_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsSimpleTextItem* self ```
QCursor* q_graphicssimpletextitem_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsSimpleTextItem* self, QCursor* cursor ```
void q_graphicssimpletextitem_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* parent ```
bool q_graphicssimpletextitem_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsSimpleTextItem* self, bool visible ```
void q_graphicssimpletextitem_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsSimpleTextItem* self, bool enabled ```
void q_graphicssimpletextitem_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsSimpleTextItem* self, bool selected ```
void q_graphicssimpletextitem_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsSimpleTextItem* self, bool on ```
void q_graphicssimpletextitem_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsSimpleTextItem* self, double opacity ```
void q_graphicssimpletextitem_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsEffect* q_graphicssimpletextitem_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsEffect* effect ```
void q_graphicssimpletextitem_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsSimpleTextItem* self ```
int64_t q_graphicssimpletextitem_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsSimpleTextItem* self, int buttons ```
void q_graphicssimpletextitem_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsSimpleTextItem* self, bool enabled ```
void q_graphicssimpletextitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsSimpleTextItem* self, bool enabled ```
void q_graphicssimpletextitem_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsSimpleTextItem* self, bool enabled ```
void q_graphicssimpletextitem_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsSimpleTextItem* self, bool enabled ```
void q_graphicssimpletextitem_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsSimpleTextItem* self, bool active ```
void q_graphicssimpletextitem_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item ```
void q_graphicssimpletextitem_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsSimpleTextItem* self ```
QGraphicsItem* q_graphicssimpletextitem_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPointF* q_graphicssimpletextitem_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsSimpleTextItem* self, double x ```
void q_graphicssimpletextitem_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsSimpleTextItem* self, double y ```
void q_graphicssimpletextitem_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPointF* q_graphicssimpletextitem_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* pos ```
void q_graphicssimpletextitem_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y ```
void q_graphicssimpletextitem_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsSimpleTextItem* self, double dx, double dy ```
void q_graphicssimpletextitem_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
void q_graphicssimpletextitem_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsSimpleTextItem* self ```
QTransform* q_graphicssimpletextitem_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsSimpleTextItem* self ```
QTransform* q_graphicssimpletextitem_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsSimpleTextItem* self, QTransform* viewportTransform ```
QTransform* q_graphicssimpletextitem_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* other ```
QTransform* q_graphicssimpletextitem_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSimpleTextItem* self, QTransform* matrix ```
void q_graphicssimpletextitem_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsSimpleTextItem* self, double angle ```
void q_graphicssimpletextitem_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsSimpleTextItem* self, double scale ```
void q_graphicssimpletextitem_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsSimpleTextItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicssimpletextitem_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsTransform* transformations[] ```
void q_graphicssimpletextitem_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPointF* q_graphicssimpletextitem_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* origin ```
void q_graphicssimpletextitem_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSimpleTextItem* self, double ax, double ay ```
void q_graphicssimpletextitem_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsSimpleTextItem* self, double z ```
void q_graphicssimpletextitem_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* sibling ```
void q_graphicssimpletextitem_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsSimpleTextItem* self ```
QRectF* q_graphicssimpletextitem_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsSimpleTextItem* self ```
QRectF* q_graphicssimpletextitem_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsSimpleTextItem* self ```
QPainterPath* q_graphicssimpletextitem_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSimpleTextItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
bool q_graphicssimpletextitem_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsSimpleTextItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicssimpletextitem_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsSimpleTextItem* self ```
double q_graphicssimpletextitem_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsSimpleTextItem* self, double granularity ```
void q_graphicssimpletextitem_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double width, double height ```
void q_graphicssimpletextitem_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSimpleTextItem* self, double dx, double dy ```
void q_graphicssimpletextitem_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSimpleTextItem* self, QPointF* point ```
QPointF* q_graphicssimpletextitem_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
QRectF* q_graphicssimpletextitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path ```
QPainterPath* q_graphicssimpletextitem_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssimpletextitem_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y ```
QPointF* q_graphicssimpletextitem_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y ```
QPointF* q_graphicssimpletextitem_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssimpletextitem_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y ```
QPointF* q_graphicssimpletextitem_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y ```
QPointF* q_graphicssimpletextitem_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssimpletextitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* child ```
bool q_graphicssimpletextitem_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicssimpletextitem_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsSimpleTextItem* self ```
bool q_graphicssimpletextitem_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsSimpleTextItem* self, int key ```
QVariant* q_graphicssimpletextitem_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsSimpleTextItem* self, int key, QVariant* value ```
void q_graphicssimpletextitem_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsSimpleTextItem* self ```
int64_t q_graphicssimpletextitem_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsSimpleTextItem* self, int hints ```
void q_graphicssimpletextitem_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* filterItem ```
void q_graphicssimpletextitem_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* filterItem ```
void q_graphicssimpletextitem_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicssimpletextitem_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicssimpletextitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSimpleTextItem* self, enum Qt__FocusReason focusReason ```
void q_graphicssimpletextitem_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
void q_graphicssimpletextitem_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect, int xmargin ```
void q_graphicssimpletextitem_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicssimpletextitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicssimpletextitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSimpleTextItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicssimpletextitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicssimpletextitem_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSimpleTextItem* self, QTransform* matrix, bool combine ```
void q_graphicssimpletextitem_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSimpleTextItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
bool q_graphicssimpletextitem_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSimpleTextItem* self, QRectF* rect ```
void q_graphicssimpletextitem_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSimpleTextItem* self, double dx, double dy, QRectF* rect ```
void q_graphicssimpletextitem_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, int phase ```
void q_graphicssimpletextitem_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, int phase ```
void q_graphicssimpletextitem_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, int) ```
void q_graphicssimpletextitem_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssimpletextitem_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssimpletextitem_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicssimpletextitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssimpletextitem_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssimpletextitem_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicssimpletextitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssimpletextitem_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssimpletextitem_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QGraphicsItem*, QEvent*) ```
void q_graphicssimpletextitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QEvent* event ```
bool q_graphicssimpletextitem_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QEvent* event ```
bool q_graphicssimpletextitem_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, bool (*slot)(QGraphicsSimpleTextItem*, QEvent*) ```
void q_graphicssimpletextitem_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssimpletextitem_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssimpletextitem_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicssimpletextitem_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssimpletextitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssimpletextitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssimpletextitem_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssimpletextitem_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssimpletextitem_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QFocusEvent* event ```
void q_graphicssimpletextitem_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QFocusEvent* event ```
void q_graphicssimpletextitem_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QFocusEvent*) ```
void q_graphicssimpletextitem_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QFocusEvent* event ```
void q_graphicssimpletextitem_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QFocusEvent* event ```
void q_graphicssimpletextitem_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QFocusEvent*) ```
void q_graphicssimpletextitem_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssimpletextitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssimpletextitem_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssimpletextitem_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssimpletextitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QKeyEvent* event ```
void q_graphicssimpletextitem_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QKeyEvent* event ```
void q_graphicssimpletextitem_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QKeyEvent*) ```
void q_graphicssimpletextitem_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QKeyEvent* event ```
void q_graphicssimpletextitem_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QKeyEvent* event ```
void q_graphicssimpletextitem_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QKeyEvent*) ```
void q_graphicssimpletextitem_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssimpletextitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssimpletextitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssimpletextitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssimpletextitem_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssimpletextitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssimpletextitem_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssimpletextitem_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicssimpletextitem_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QInputMethodEvent* event ```
void q_graphicssimpletextitem_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QInputMethodEvent* event ```
void q_graphicssimpletextitem_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)(QGraphicsSimpleTextItem*, QInputMethodEvent*) ```
void q_graphicssimpletextitem_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssimpletextitem_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssimpletextitem_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QVariant* (*slot)(QGraphicsSimpleTextItem*, enum Qt__InputMethodQuery) ```
void q_graphicssimpletextitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssimpletextitem_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssimpletextitem_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, QVariant* (*slot)(QGraphicsSimpleTextItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicssimpletextitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)() ```
void q_graphicssimpletextitem_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)() ```
void q_graphicssimpletextitem_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)() ```
void q_graphicssimpletextitem_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSimpleTextItem* self, void (*slot)() ```
void q_graphicssimpletextitem_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsSimpleTextItem* self ```
void q_graphicssimpletextitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsitemgroup.html

/// q_graphicsitemgroup_new constructs a new QGraphicsItemGroup object.
///
///
QGraphicsItemGroup* q_graphicsitemgroup_new();

/// q_graphicsitemgroup_new2 constructs a new QGraphicsItemGroup object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsItemGroup* q_graphicsitemgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#addToGroup)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item ```
void q_graphicsitemgroup_add_to_group(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#removeFromGroup)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item ```
void q_graphicsitemgroup_remove_from_group(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#boundingRect)
///
/// ``` QGraphicsItemGroup* self ```
QRectF* q_graphicsitemgroup_bounding_rect(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemGroup* self, QRectF* (*slot)() ```
void q_graphicsitemgroup_on_bounding_rect(void* self, QRectF* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItemGroup* self ```
QRectF* q_graphicsitemgroup_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#paint)
///
/// ``` QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsitemgroup_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsitemgroup_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsitemgroup_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#isObscuredBy)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item ```
bool q_graphicsitemgroup_is_obscured_by(void* self, void* item);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QGraphicsItem*) ```
void q_graphicsitemgroup_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item ```
bool q_graphicsitemgroup_qbase_is_obscured_by(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#opaqueArea)
///
/// ``` QGraphicsItemGroup* self ```
QPainterPath* q_graphicsitemgroup_opaque_area(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemGroup* self, QPainterPath* (*slot)() ```
void q_graphicsitemgroup_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItemGroup* self ```
QPainterPath* q_graphicsitemgroup_qbase_opaque_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemgroup.html#type)
///
/// ``` QGraphicsItemGroup* self ```
int32_t q_graphicsitemgroup_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemGroup* self, int32_t (*slot)() ```
void q_graphicsitemgroup_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsItemGroup* self ```
int32_t q_graphicsitemgroup_qbase_type(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsScene* q_graphicsitemgroup_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsObject* q_graphicsitemgroup_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsWidget* q_graphicsitemgroup_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsWidget* q_graphicsitemgroup_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsWidget* q_graphicsitemgroup_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* parent ```
void q_graphicsitemgroup_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsItemGroup* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsObject* q_graphicsitemgroup_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsObject* q_graphicsitemgroup_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItemGroup* q_graphicsitemgroup_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItemGroup* group ```
void q_graphicsitemgroup_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsItemGroup* self ```
int64_t q_graphicsitemgroup_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsitemgroup_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsItemGroup* self, int flags ```
void q_graphicsitemgroup_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsItemGroup* self ```
int64_t q_graphicsitemgroup_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsitemgroup_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsItemGroup* self ```
int64_t q_graphicsitemgroup_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsitemgroup_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsItemGroup* self ```
const char* q_graphicsitemgroup_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsItemGroup* self, const char* toolTip ```
void q_graphicsitemgroup_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsItemGroup* self ```
QCursor* q_graphicsitemgroup_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsItemGroup* self, QCursor* cursor ```
void q_graphicsitemgroup_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* parent ```
bool q_graphicsitemgroup_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsItemGroup* self, bool visible ```
void q_graphicsitemgroup_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsItemGroup* self, bool enabled ```
void q_graphicsitemgroup_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsItemGroup* self, bool selected ```
void q_graphicsitemgroup_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsItemGroup* self, bool on ```
void q_graphicsitemgroup_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsItemGroup* self, double opacity ```
void q_graphicsitemgroup_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsEffect* q_graphicsitemgroup_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsItemGroup* self, QGraphicsEffect* effect ```
void q_graphicsitemgroup_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsItemGroup* self ```
int64_t q_graphicsitemgroup_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsItemGroup* self, int buttons ```
void q_graphicsitemgroup_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsItemGroup* self, bool enabled ```
void q_graphicsitemgroup_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsItemGroup* self, bool enabled ```
void q_graphicsitemgroup_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsItemGroup* self, bool enabled ```
void q_graphicsitemgroup_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsItemGroup* self, bool enabled ```
void q_graphicsitemgroup_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsItemGroup* self, bool active ```
void q_graphicsitemgroup_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item ```
void q_graphicsitemgroup_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsItemGroup* self ```
QGraphicsItem* q_graphicsitemgroup_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsItemGroup* self ```
QPointF* q_graphicsitemgroup_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsItemGroup* self, double x ```
void q_graphicsitemgroup_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsItemGroup* self, double y ```
void q_graphicsitemgroup_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsItemGroup* self ```
QPointF* q_graphicsitemgroup_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsItemGroup* self, QPointF* pos ```
void q_graphicsitemgroup_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsItemGroup* self, double x, double y ```
void q_graphicsitemgroup_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsItemGroup* self, double dx, double dy ```
void q_graphicsitemgroup_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
void q_graphicsitemgroup_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsItemGroup* self ```
QTransform* q_graphicsitemgroup_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsItemGroup* self ```
QTransform* q_graphicsitemgroup_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsItemGroup* self, QTransform* viewportTransform ```
QTransform* q_graphicsitemgroup_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* other ```
QTransform* q_graphicsitemgroup_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsItemGroup* self, QTransform* matrix ```
void q_graphicsitemgroup_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsItemGroup* self, double angle ```
void q_graphicsitemgroup_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsItemGroup* self, double scale ```
void q_graphicsitemgroup_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsItemGroup* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsitemgroup_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsItemGroup* self, QGraphicsTransform* transformations[] ```
void q_graphicsitemgroup_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsItemGroup* self ```
QPointF* q_graphicsitemgroup_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsItemGroup* self, QPointF* origin ```
void q_graphicsitemgroup_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsItemGroup* self, double ax, double ay ```
void q_graphicsitemgroup_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsItemGroup* self, double z ```
void q_graphicsitemgroup_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* sibling ```
void q_graphicsitemgroup_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsItemGroup* self ```
QRectF* q_graphicsitemgroup_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsItemGroup* self ```
QRectF* q_graphicsitemgroup_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsItemGroup* self ```
QPainterPath* q_graphicsitemgroup_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsItemGroup* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
bool q_graphicsitemgroup_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsItemGroup* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsitemgroup_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsItemGroup* self ```
double q_graphicsitemgroup_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsItemGroup* self, double granularity ```
void q_graphicsitemgroup_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double width, double height ```
void q_graphicsitemgroup_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsItemGroup* self, double dx, double dy ```
void q_graphicsitemgroup_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsitemgroup_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
QPointF* q_graphicsitemgroup_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
QPointF* q_graphicsitemgroup_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsitemgroup_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
QPointF* q_graphicsitemgroup_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
QPointF* q_graphicsitemgroup_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
QRectF* q_graphicsitemgroup_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path ```
QPainterPath* q_graphicsitemgroup_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsitemgroup_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsItemGroup* self, double x, double y ```
QPointF* q_graphicsitemgroup_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsItemGroup* self, double x, double y ```
QPointF* q_graphicsitemgroup_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsitemgroup_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsItemGroup* self, double x, double y ```
QPointF* q_graphicsitemgroup_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsItemGroup* self, double x, double y ```
QPointF* q_graphicsitemgroup_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h ```
QRectF* q_graphicsitemgroup_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* child ```
bool q_graphicsitemgroup_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsitemgroup_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsItemGroup* self ```
bool q_graphicsitemgroup_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsItemGroup* self, int key ```
QVariant* q_graphicsitemgroup_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsItemGroup* self, int key, QVariant* value ```
void q_graphicsitemgroup_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsItemGroup* self ```
int64_t q_graphicsitemgroup_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsItemGroup* self, int hints ```
void q_graphicsitemgroup_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* filterItem ```
void q_graphicsitemgroup_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* filterItem ```
void q_graphicsitemgroup_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsitemgroup_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsitemgroup_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsItemGroup* self, enum Qt__FocusReason focusReason ```
void q_graphicsitemgroup_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
void q_graphicsitemgroup_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect, int xmargin ```
void q_graphicsitemgroup_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsitemgroup_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsitemgroup_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsItemGroup* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsitemgroup_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsitemgroup_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsItemGroup* self, QTransform* matrix, bool combine ```
void q_graphicsitemgroup_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsItemGroup* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
bool q_graphicsitemgroup_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsItemGroup* self, QRectF* rect ```
void q_graphicsitemgroup_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsItemGroup* self, double dx, double dy, QRectF* rect ```
void q_graphicsitemgroup_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, int phase ```
void q_graphicsitemgroup_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, int phase ```
void q_graphicsitemgroup_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, int) ```
void q_graphicsitemgroup_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
QPainterPath* q_graphicsitemgroup_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
QPainterPath* q_graphicsitemgroup_qbase_shape(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QPainterPath* (*slot)() ```
void q_graphicsitemgroup_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
bool q_graphicsitemgroup_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QPointF* point ```
bool q_graphicsitemgroup_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QPointF*) ```
void q_graphicsitemgroup_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitemgroup_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitemgroup_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsitemgroup_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitemgroup_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsitemgroup_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsitemgroup_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsitemgroup_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsitemgroup_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QGraphicsItem*, QEvent*) ```
void q_graphicsitemgroup_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QEvent* event ```
bool q_graphicsitemgroup_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QEvent* event ```
bool q_graphicsitemgroup_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, QEvent*) ```
void q_graphicsitemgroup_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsitemgroup_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsitemgroup_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsitemgroup_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitemgroup_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitemgroup_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitemgroup_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsitemgroup_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsitemgroup_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QFocusEvent* event ```
void q_graphicsitemgroup_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QFocusEvent* event ```
void q_graphicsitemgroup_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QFocusEvent*) ```
void q_graphicsitemgroup_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QFocusEvent* event ```
void q_graphicsitemgroup_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QFocusEvent* event ```
void q_graphicsitemgroup_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QFocusEvent*) ```
void q_graphicsitemgroup_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitemgroup_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitemgroup_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsitemgroup_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneHoverEvent*) ```
void q_graphicsitemgroup_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QKeyEvent* event ```
void q_graphicsitemgroup_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QKeyEvent* event ```
void q_graphicsitemgroup_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QKeyEvent*) ```
void q_graphicsitemgroup_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QKeyEvent* event ```
void q_graphicsitemgroup_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QKeyEvent* event ```
void q_graphicsitemgroup_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QKeyEvent*) ```
void q_graphicsitemgroup_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitemgroup_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitemgroup_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitemgroup_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsitemgroup_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneMouseEvent*) ```
void q_graphicsitemgroup_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsitemgroup_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsitemgroup_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QGraphicsSceneWheelEvent*) ```
void q_graphicsitemgroup_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QInputMethodEvent* event ```
void q_graphicsitemgroup_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QInputMethodEvent* event ```
void q_graphicsitemgroup_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, QInputMethodEvent*) ```
void q_graphicsitemgroup_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsitemgroup_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsitemgroup_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QVariant* (*slot)(QGraphicsItemGroup*, enum Qt__InputMethodQuery) ```
void q_graphicsitemgroup_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsitemgroup_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsitemgroup_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QVariant* (*slot)(QGraphicsItemGroup*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsitemgroup_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsitemgroup_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsitemgroup_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, bool (*slot)(QGraphicsItemGroup*, enum QGraphicsItem__Extension) ```
void q_graphicsitemgroup_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsitemgroup_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsitemgroup_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)(QGraphicsItemGroup*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsitemgroup_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QVariant* variant ```
QVariant* q_graphicsitemgroup_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QVariant* variant ```
QVariant* q_graphicsitemgroup_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, QVariant* (*slot)(QGraphicsItemGroup*, QVariant*) ```
void q_graphicsitemgroup_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)() ```
void q_graphicsitemgroup_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)() ```
void q_graphicsitemgroup_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)() ```
void q_graphicsitemgroup_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemGroup* self, void (*slot)() ```
void q_graphicsitemgroup_on_prepare_geometry_change(void* self, void (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QGraphicsItemGroup* self ```
void q_graphicsitemgroup_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsitem.html#types

typedef enum {
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMISMOVABLE = 1,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMISSELECTABLE = 2,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMISFOCUSABLE = 4,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMCLIPSTOSHAPE = 8,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMCLIPSCHILDRENTOSHAPE = 16,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMIGNORESTRANSFORMATIONS = 32,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMIGNORESPARENTOPACITY = 64,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMDOESNTPROPAGATEOPACITYTOCHILDREN = 128,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMSTACKSBEHINDPARENT = 256,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMUSESEXTENDEDSTYLEOPTION = 512,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMHASNOCONTENTS = 1024,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMSENDSGEOMETRYCHANGES = 2048,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMACCEPTSINPUTMETHOD = 4096,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMNEGATIVEZSTACKSBEHINDPARENT = 8192,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMISPANEL = 16384,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMISFOCUSSCOPE = 32768,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMSENDSSCENEPOSITIONCHANGES = 65536,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMSTOPSCLICKFOCUSPROPAGATION = 131072,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMSTOPSFOCUSHANDLING = 262144,
    QGRAPHICSITEM_GRAPHICSITEMFLAG_ITEMCONTAINSCHILDRENINSHAPE = 524288
} QGraphicsItem__GraphicsItemFlag;

typedef enum {
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMPOSITIONCHANGE = 0,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMVISIBLECHANGE = 2,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMENABLEDCHANGE = 3,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSELECTEDCHANGE = 4,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMPARENTCHANGE = 5,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMCHILDADDEDCHANGE = 6,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMCHILDREMOVEDCHANGE = 7,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTRANSFORMCHANGE = 8,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMPOSITIONHASCHANGED = 9,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTRANSFORMHASCHANGED = 10,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSCENECHANGE = 11,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMVISIBLEHASCHANGED = 12,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMENABLEDHASCHANGED = 13,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSELECTEDHASCHANGED = 14,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMPARENTHASCHANGED = 15,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSCENEHASCHANGED = 16,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMCURSORCHANGE = 17,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMCURSORHASCHANGED = 18,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTOOLTIPCHANGE = 19,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTOOLTIPHASCHANGED = 20,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMFLAGSCHANGE = 21,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMFLAGSHAVECHANGED = 22,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMZVALUECHANGE = 23,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMZVALUEHASCHANGED = 24,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMOPACITYCHANGE = 25,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMOPACITYHASCHANGED = 26,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSCENEPOSITIONHASCHANGED = 27,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMROTATIONCHANGE = 28,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMROTATIONHASCHANGED = 29,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSCALECHANGE = 30,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMSCALEHASCHANGED = 31,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTRANSFORMORIGINPOINTCHANGE = 32,
    QGRAPHICSITEM_GRAPHICSITEMCHANGE_ITEMTRANSFORMORIGINPOINTHASCHANGED = 33
} QGraphicsItem__GraphicsItemChange;

typedef enum {
    QGRAPHICSITEM_CACHEMODE_NOCACHE = 0,
    QGRAPHICSITEM_CACHEMODE_ITEMCOORDINATECACHE = 1,
    QGRAPHICSITEM_CACHEMODE_DEVICECOORDINATECACHE = 2
} QGraphicsItem__CacheMode;

typedef enum {
    QGRAPHICSITEM_PANELMODALITY_NONMODAL = 0,
    QGRAPHICSITEM_PANELMODALITY_PANELMODAL = 1,
    QGRAPHICSITEM_PANELMODALITY_SCENEMODAL = 2
} QGraphicsItem__PanelModality;

typedef enum {
    QGRAPHICSITEM__TYPE = 1,
    QGRAPHICSITEM__USERTYPE = 65536
} QGraphicsItem__;

typedef enum {
    QGRAPHICSITEM_EXTENSION_USEREXTENSION = 2147483648
} QGraphicsItem__Extension;

typedef enum {
    QGRAPHICSPATHITEM__TYPE = 2
} QGraphicsPathItem__;

typedef enum {
    QGRAPHICSRECTITEM__TYPE = 3
} QGraphicsRectItem__;

typedef enum {
    QGRAPHICSELLIPSEITEM__TYPE = 4
} QGraphicsEllipseItem__;

typedef enum {
    QGRAPHICSPOLYGONITEM__TYPE = 5
} QGraphicsPolygonItem__;

typedef enum {
    QGRAPHICSLINEITEM__TYPE = 6
} QGraphicsLineItem__;

typedef enum {
    QGRAPHICSPIXMAPITEM_SHAPEMODE_MASKSHAPE = 0,
    QGRAPHICSPIXMAPITEM_SHAPEMODE_BOUNDINGRECTSHAPE = 1,
    QGRAPHICSPIXMAPITEM_SHAPEMODE_HEURISTICMASKSHAPE = 2
} QGraphicsPixmapItem__ShapeMode;

typedef enum {
    QGRAPHICSPIXMAPITEM__TYPE = 7
} QGraphicsPixmapItem__;

typedef enum {
    QGRAPHICSTEXTITEM__TYPE = 8
} QGraphicsTextItem__;

typedef enum {
    QGRAPHICSSIMPLETEXTITEM__TYPE = 9
} QGraphicsSimpleTextItem__;

typedef enum {
    QGRAPHICSITEMGROUP__TYPE = 10
} QGraphicsItemGroup__;

#endif
