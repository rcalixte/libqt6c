#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqcolor.hpp"
#include "libqcursor.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicssceneevent.hpp"
#include "libqgraphicstransform.hpp"
#include "libqgraphicswidget.hpp"
#include "libqline.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpen.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicsitem.h"

QGraphicsItem* q_graphicsitem_new() {
    return QGraphicsItem_new();
}

QGraphicsItem* q_graphicsitem_new2(void* parent) {
    return QGraphicsItem_new2((QGraphicsItem*)parent);
}

QGraphicsScene* q_graphicsitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

void q_graphicsitem_advance(void* self, int phase) {
    QGraphicsItem_Advance((QGraphicsItem*)self, phase);
}

void q_graphicsitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsItem_OnAdvance((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_advance(void* self, int phase) {
    QGraphicsItem_SuperAdvance((QGraphicsItem*)self, phase);
}

double q_graphicsitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsitem_bounding_rect(void* self) {
    return QGraphicsItem_BoundingRect((QGraphicsItem*)self);
}

void q_graphicsitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsItem_OnBoundingRect((QGraphicsItem*)self, (intptr_t)callback);
}

QRectF* q_graphicsitem_super_bounding_rect(void* self) {
    return QGraphicsItem_SuperBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

QPainterPath* q_graphicsitem_shape(void* self) {
    return QGraphicsItem_Shape((QGraphicsItem*)self);
}

void q_graphicsitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsItem_OnShape((QGraphicsItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsitem_super_shape(void* self) {
    return QGraphicsItem_SuperShape((QGraphicsItem*)self);
}

bool q_graphicsitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

bool q_graphicsitem_contains(void* self, void* point) {
    return QGraphicsItem_Contains((QGraphicsItem*)self, (QPointF*)point);
}

void q_graphicsitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItem_OnContains((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_contains(void* self, void* point) {
    return QGraphicsItem_SuperContains((QGraphicsItem*)self, (QPointF*)point);
}

bool q_graphicsitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItem_CollidesWithItem((QGraphicsItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsItem_OnCollidesWithItem((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItem_SuperCollidesWithItem((QGraphicsItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItem_CollidesWithPath((QGraphicsItem*)self, (QPainterPath*)path, mode);
}

void q_graphicsitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsItem_OnCollidesWithPath((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItem_SuperCollidesWithPath((QGraphicsItem*)self, (QPainterPath*)path, mode);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsitem_is_obscured_by(void* self, void* item) {
    return QGraphicsItem_IsObscuredBy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

void q_graphicsitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItem_OnIsObscuredBy((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsItem_SuperIsObscuredBy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicsitem_opaque_area(void* self) {
    return QGraphicsItem_OpaqueArea((QGraphicsItem*)self);
}

void q_graphicsitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsItem_OnOpaqueArea((QGraphicsItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsitem_super_opaque_area(void* self) {
    return QGraphicsItem_SuperOpaqueArea((QGraphicsItem*)self);
}

QRegion* q_graphicsitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsItem_Paint((QGraphicsItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsItem_OnPaint((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsItem_SuperPaint((QGraphicsItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

int32_t q_graphicsitem_type(void* self) {
    return QGraphicsItem_Type((QGraphicsItem*)self);
}

void q_graphicsitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsItem_OnType((QGraphicsItem*)self, (intptr_t)callback);
}

int32_t q_graphicsitem_super_type(void* self) {
    return QGraphicsItem_SuperType((QGraphicsItem*)self);
}

void q_graphicsitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsitem_update_micro_focus(void* self) {
    QGraphicsItem_UpdateMicroFocus((QGraphicsItem*)self);
}

void q_graphicsitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsItem_OnUpdateMicroFocus((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_update_micro_focus(void* self) {
    QGraphicsItem_SuperUpdateMicroFocus((QGraphicsItem*)self);
}

bool q_graphicsitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItem_SceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsItem_OnSceneEventFilter((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItem_SuperSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsitem_scene_event(void* self, void* event) {
    return QGraphicsItem_SceneEvent((QGraphicsItem*)self, (QEvent*)event);
}

void q_graphicsitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItem_OnSceneEvent((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_scene_event(void* self, void* event) {
    return QGraphicsItem_SuperSceneEvent((QGraphicsItem*)self, (QEvent*)event);
}

void q_graphicsitem_context_menu_event(void* self, void* event) {
    QGraphicsItem_ContextMenuEvent((QGraphicsItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnContextMenuEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_context_menu_event(void* self, void* event) {
    QGraphicsItem_SuperContextMenuEvent((QGraphicsItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsitem_drag_enter_event(void* self, void* event) {
    QGraphicsItem_DragEnterEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnDragEnterEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsItem_SuperDragEnterEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_drag_leave_event(void* self, void* event) {
    QGraphicsItem_DragLeaveEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnDragLeaveEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsItem_SuperDragLeaveEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_drag_move_event(void* self, void* event) {
    QGraphicsItem_DragMoveEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnDragMoveEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_drag_move_event(void* self, void* event) {
    QGraphicsItem_SuperDragMoveEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_drop_event(void* self, void* event) {
    QGraphicsItem_DropEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnDropEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_drop_event(void* self, void* event) {
    QGraphicsItem_SuperDropEvent((QGraphicsItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitem_focus_in_event(void* self, void* event) {
    QGraphicsItem_FocusInEvent((QGraphicsItem*)self, (QFocusEvent*)event);
}

void q_graphicsitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnFocusInEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_focus_in_event(void* self, void* event) {
    QGraphicsItem_SuperFocusInEvent((QGraphicsItem*)self, (QFocusEvent*)event);
}

void q_graphicsitem_focus_out_event(void* self, void* event) {
    QGraphicsItem_FocusOutEvent((QGraphicsItem*)self, (QFocusEvent*)event);
}

void q_graphicsitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnFocusOutEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_focus_out_event(void* self, void* event) {
    QGraphicsItem_SuperFocusOutEvent((QGraphicsItem*)self, (QFocusEvent*)event);
}

void q_graphicsitem_hover_enter_event(void* self, void* event) {
    QGraphicsItem_HoverEnterEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnHoverEnterEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsItem_SuperHoverEnterEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_hover_move_event(void* self, void* event) {
    QGraphicsItem_HoverMoveEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnHoverMoveEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_hover_move_event(void* self, void* event) {
    QGraphicsItem_SuperHoverMoveEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_hover_leave_event(void* self, void* event) {
    QGraphicsItem_HoverLeaveEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnHoverLeaveEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsItem_SuperHoverLeaveEvent((QGraphicsItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitem_key_press_event(void* self, void* event) {
    QGraphicsItem_KeyPressEvent((QGraphicsItem*)self, (QKeyEvent*)event);
}

void q_graphicsitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnKeyPressEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_key_press_event(void* self, void* event) {
    QGraphicsItem_SuperKeyPressEvent((QGraphicsItem*)self, (QKeyEvent*)event);
}

void q_graphicsitem_key_release_event(void* self, void* event) {
    QGraphicsItem_KeyReleaseEvent((QGraphicsItem*)self, (QKeyEvent*)event);
}

void q_graphicsitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnKeyReleaseEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_key_release_event(void* self, void* event) {
    QGraphicsItem_SuperKeyReleaseEvent((QGraphicsItem*)self, (QKeyEvent*)event);
}

void q_graphicsitem_mouse_press_event(void* self, void* event) {
    QGraphicsItem_MousePressEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnMousePressEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsItem_SuperMousePressEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_mouse_move_event(void* self, void* event) {
    QGraphicsItem_MouseMoveEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnMouseMoveEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsItem_SuperMouseMoveEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_mouse_release_event(void* self, void* event) {
    QGraphicsItem_MouseReleaseEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnMouseReleaseEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsItem_SuperMouseReleaseEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsItem_MouseDoubleClickEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnMouseDoubleClickEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsItem_SuperMouseDoubleClickEvent((QGraphicsItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitem_wheel_event(void* self, void* event) {
    QGraphicsItem_WheelEvent((QGraphicsItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnWheelEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_wheel_event(void* self, void* event) {
    QGraphicsItem_SuperWheelEvent((QGraphicsItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsitem_input_method_event(void* self, void* event) {
    QGraphicsItem_InputMethodEvent((QGraphicsItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItem_OnInputMethodEvent((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_input_method_event(void* self, void* event) {
    QGraphicsItem_SuperInputMethodEvent((QGraphicsItem*)self, (QInputMethodEvent*)event);
}

QVariant* q_graphicsitem_input_method_query(void* self, int32_t query) {
    return QGraphicsItem_InputMethodQuery((QGraphicsItem*)self, query);
}

void q_graphicsitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsItem_OnInputMethodQuery((QGraphicsItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsItem_SuperInputMethodQuery((QGraphicsItem*)self, query);
}

QVariant* q_graphicsitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsItem_ItemChange((QGraphicsItem*)self, change, (QVariant*)value);
}

void q_graphicsitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsItem_OnItemChange((QGraphicsItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsItem_SuperItemChange((QGraphicsItem*)self, change, (QVariant*)value);
}

bool q_graphicsitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsItem_SupportsExtension((QGraphicsItem*)self, extension);
}

void q_graphicsitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsItem_OnSupportsExtension((QGraphicsItem*)self, (intptr_t)callback);
}

bool q_graphicsitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsItem_SuperSupportsExtension((QGraphicsItem*)self, extension);
}

void q_graphicsitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsItem_SetExtension((QGraphicsItem*)self, extension, (QVariant*)variant);
}

void q_graphicsitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsItem_OnSetExtension((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsItem_SuperSetExtension((QGraphicsItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicsitem_extension(void* self, void* variant) {
    return QGraphicsItem_Extension((QGraphicsItem*)self, (QVariant*)variant);
}

void q_graphicsitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsItem_OnExtension((QGraphicsItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsitem_super_extension(void* self, void* variant) {
    return QGraphicsItem_SuperExtension((QGraphicsItem*)self, (QVariant*)variant);
}

void q_graphicsitem_add_to_index(void* self) {
    QGraphicsItem_AddToIndex((QGraphicsItem*)self);
}

void q_graphicsitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsItem_OnAddToIndex((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_add_to_index(void* self) {
    QGraphicsItem_SuperAddToIndex((QGraphicsItem*)self);
}

void q_graphicsitem_remove_from_index(void* self) {
    QGraphicsItem_RemoveFromIndex((QGraphicsItem*)self);
}

void q_graphicsitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsItem_OnRemoveFromIndex((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_remove_from_index(void* self) {
    QGraphicsItem_SuperRemoveFromIndex((QGraphicsItem*)self);
}

void q_graphicsitem_prepare_geometry_change(void* self) {
    QGraphicsItem_PrepareGeometryChange((QGraphicsItem*)self);
}

void q_graphicsitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsItem_OnPrepareGeometryChange((QGraphicsItem*)self, (intptr_t)callback);
}

void q_graphicsitem_super_prepare_geometry_change(void* self) {
    QGraphicsItem_SuperPrepareGeometryChange((QGraphicsItem*)self);
}

void q_graphicsitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicsitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicsitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicsitem_delete(void* self) {
    QGraphicsItem_Delete((QGraphicsItem*)(self));
}

QGraphicsObject* q_graphicsobject_new() {
    return QGraphicsObject_new();
}

QGraphicsObject* q_graphicsobject_new2(void* parent) {
    return QGraphicsObject_new2((QGraphicsItem*)parent);
}

const QMetaObject* q_graphicsobject_meta_object(void* self) {
    return QGraphicsObject_MetaObject((QGraphicsObject*)self);
}

void q_graphicsobject_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsObject_OnMetaObject((QGraphicsObject*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicsobject_super_meta_object(void* self) {
    return QGraphicsObject_SuperMetaObject((QGraphicsObject*)self);
}

void* q_graphicsobject_metacast(void* self, const char* param1) {
    return QGraphicsObject_Metacast((QGraphicsObject*)self, param1);
}

void q_graphicsobject_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsObject_OnMetacast((QGraphicsObject*)self, (intptr_t)callback);
}

void* q_graphicsobject_super_metacast(void* self, const char* param1) {
    return QGraphicsObject_SuperMetacast((QGraphicsObject*)self, param1);
}

int32_t q_graphicsobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsObject_Metacall((QGraphicsObject*)self, param1, param2, param3);
}

void q_graphicsobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsObject_OnMetacall((QGraphicsObject*)self, (intptr_t)callback);
}

int32_t q_graphicsobject_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsObject_SuperMetacall((QGraphicsObject*)self, param1, param2, param3);
}

const char* q_graphicsobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsobject_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsobject_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsobject_update_micro_focus(void* self) {
    QGraphicsObject_UpdateMicroFocus((QGraphicsObject*)self);
}

void q_graphicsobject_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsObject_OnUpdateMicroFocus((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_super_update_micro_focus(void* self) {
    QGraphicsObject_SuperUpdateMicroFocus((QGraphicsObject*)self);
}

void q_graphicsobject_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicsobject_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_event(void* self, void* ev) {
    return QGraphicsObject_Event((QGraphicsObject*)self, (QEvent*)ev);
}

void q_graphicsobject_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsObject_OnEvent((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_super_event(void* self, void* ev) {
    return QGraphicsObject_SuperEvent((QGraphicsObject*)self, (QEvent*)ev);
}

const char* q_graphicsobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsobject_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_graphicsobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsobject_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsobject_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicsobject_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsobject_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsobject_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicsobject_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsobject_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicsobject_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicsobject_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicsobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsobject_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicsobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicsobject_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicsobject_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicsobject_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicsobject_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicsobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_graphicsobject_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsobject_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsobject_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsobject_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsobject_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsobject_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsobject_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsobject_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsobject_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsobject_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsobject_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsobject_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsobject_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsobject_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsobject_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsobject_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsobject_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsobject_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsobject_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsobject_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsobject_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsobject_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsobject_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsobject_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsobject_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsobject_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsobject_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsobject_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsobject_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsobject_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsobject_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsobject_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsobject_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsobject_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsobject_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsobject_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsobject_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsobject_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsobject_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsobject_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsobject_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsobject_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsobject_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsobject_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsobject_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsobject_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsobject_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsobject_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsobject_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsobject_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsobject_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsobject_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsobject_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsobject_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsobject_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsobject_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsobject_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsobject_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsobject_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsobject_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsobject_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsobject_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsobject_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsobject_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsobject_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsobject_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsobject_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsobject_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsobject_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsobject_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsobject_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsobject_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsobject_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsobject_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsobject_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsobject_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsobject_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsobject_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsobject_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsobject_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsobject_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsobject_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsobject_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsobject_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsobject_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsobject_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsobject_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsobject_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsobject_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsobject_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsobject_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsobject_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsobject_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsobject_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsobject_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsobject_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsobject_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsobject_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsobject_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsobject_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsobject_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsobject_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsobject_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsobject_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsobject_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsobject_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsobject_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsobject_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsobject_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsobject_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsobject_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsobject_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsobject_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsobject_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsobject_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsobject_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsobject_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsobject_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsobject_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsobject_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsobject_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsobject_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsobject_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsobject_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsobject_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsobject_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsobject_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsobject_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsobject_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsobject_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsobject_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsobject_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsobject_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsobject_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsobject_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsobject_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsobject_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsobject_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsobject_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsobject_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsobject_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsobject_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsobject_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsobject_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsobject_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsobject_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsobject_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsobject_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsobject_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsobject_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsobject_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsobject_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsobject_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicsobject_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicsobject_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsobject_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsobject_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsobject_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsobject_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsobject_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsobject_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsobject_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsobject_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsobject_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsobject_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsobject_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

bool q_graphicsobject_event_filter(void* self, void* watched, void* event) {
    return QGraphicsObject_EventFilter((QGraphicsObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsobject_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsObject_SuperEventFilter((QGraphicsObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsObject_OnEventFilter((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_timer_event(void* self, void* event) {
    QGraphicsObject_TimerEvent((QGraphicsObject*)self, (QTimerEvent*)event);
}

void q_graphicsobject_super_timer_event(void* self, void* event) {
    QGraphicsObject_SuperTimerEvent((QGraphicsObject*)self, (QTimerEvent*)event);
}

void q_graphicsobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnTimerEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_child_event(void* self, void* event) {
    QGraphicsObject_ChildEvent((QGraphicsObject*)self, (QChildEvent*)event);
}

void q_graphicsobject_super_child_event(void* self, void* event) {
    QGraphicsObject_SuperChildEvent((QGraphicsObject*)self, (QChildEvent*)event);
}

void q_graphicsobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnChildEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_custom_event(void* self, void* event) {
    QGraphicsObject_CustomEvent((QGraphicsObject*)self, (QEvent*)event);
}

void q_graphicsobject_super_custom_event(void* self, void* event) {
    QGraphicsObject_SuperCustomEvent((QGraphicsObject*)self, (QEvent*)event);
}

void q_graphicsobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnCustomEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_connect_notify(void* self, void* signal) {
    QGraphicsObject_ConnectNotify((QGraphicsObject*)self, (QMetaMethod*)signal);
}

void q_graphicsobject_super_connect_notify(void* self, void* signal) {
    QGraphicsObject_SuperConnectNotify((QGraphicsObject*)self, (QMetaMethod*)signal);
}

void q_graphicsobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnConnectNotify((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_disconnect_notify(void* self, void* signal) {
    QGraphicsObject_DisconnectNotify((QGraphicsObject*)self, (QMetaMethod*)signal);
}

void q_graphicsobject_super_disconnect_notify(void* self, void* signal) {
    QGraphicsObject_SuperDisconnectNotify((QGraphicsObject*)self, (QMetaMethod*)signal);
}

void q_graphicsobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnDisconnectNotify((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_advance(void* self, int phase) {
    QGraphicsObject_Advance((QGraphicsObject*)self, phase);
}

void q_graphicsobject_super_advance(void* self, int phase) {
    QGraphicsObject_SuperAdvance((QGraphicsObject*)self, phase);
}

void q_graphicsobject_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsObject_OnAdvance((QGraphicsObject*)self, (intptr_t)callback);
}

QRectF* q_graphicsobject_bounding_rect(void* self) {
    return QGraphicsObject_BoundingRect((QGraphicsObject*)self);
}

QRectF* q_graphicsobject_super_bounding_rect(void* self) {
    return QGraphicsObject_SuperBoundingRect((QGraphicsObject*)self);
}

void q_graphicsobject_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsObject_OnBoundingRect((QGraphicsObject*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsobject_shape(void* self) {
    return QGraphicsObject_Shape((QGraphicsObject*)self);
}

QPainterPath* q_graphicsobject_super_shape(void* self) {
    return QGraphicsObject_SuperShape((QGraphicsObject*)self);
}

void q_graphicsobject_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsObject_OnShape((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_contains(void* self, void* point) {
    return QGraphicsObject_Contains((QGraphicsObject*)self, (QPointF*)point);
}

bool q_graphicsobject_super_contains(void* self, void* point) {
    return QGraphicsObject_SuperContains((QGraphicsObject*)self, (QPointF*)point);
}

void q_graphicsobject_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsObject_OnContains((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsObject_CollidesWithItem((QGraphicsObject*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsobject_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsObject_SuperCollidesWithItem((QGraphicsObject*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsobject_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsObject_OnCollidesWithItem((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsObject_CollidesWithPath((QGraphicsObject*)self, (QPainterPath*)path, mode);
}

bool q_graphicsobject_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsObject_SuperCollidesWithPath((QGraphicsObject*)self, (QPainterPath*)path, mode);
}

void q_graphicsobject_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsObject_OnCollidesWithPath((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_is_obscured_by(void* self, void* item) {
    return QGraphicsObject_IsObscuredBy((QGraphicsObject*)self, (QGraphicsItem*)item);
}

bool q_graphicsobject_super_is_obscured_by(void* self, void* item) {
    return QGraphicsObject_SuperIsObscuredBy((QGraphicsObject*)self, (QGraphicsItem*)item);
}

void q_graphicsobject_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsObject_OnIsObscuredBy((QGraphicsObject*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsobject_opaque_area(void* self) {
    return QGraphicsObject_OpaqueArea((QGraphicsObject*)self);
}

QPainterPath* q_graphicsobject_super_opaque_area(void* self) {
    return QGraphicsObject_SuperOpaqueArea((QGraphicsObject*)self);
}

void q_graphicsobject_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsObject_OnOpaqueArea((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsObject_Paint((QGraphicsObject*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsobject_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsObject_SuperPaint((QGraphicsObject*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsobject_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsObject_OnPaint((QGraphicsObject*)self, (intptr_t)callback);
}

int32_t q_graphicsobject_type(void* self) {
    return QGraphicsObject_Type((QGraphicsObject*)self);
}

int32_t q_graphicsobject_super_type(void* self) {
    return QGraphicsObject_SuperType((QGraphicsObject*)self);
}

void q_graphicsobject_on_type(void* self, int32_t (*callback)()) {
    QGraphicsObject_OnType((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsObject_SceneEventFilter((QGraphicsObject*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsobject_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsObject_SuperSceneEventFilter((QGraphicsObject*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsobject_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsObject_OnSceneEventFilter((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_scene_event(void* self, void* event) {
    return QGraphicsObject_SceneEvent((QGraphicsObject*)self, (QEvent*)event);
}

bool q_graphicsobject_super_scene_event(void* self, void* event) {
    return QGraphicsObject_SuperSceneEvent((QGraphicsObject*)self, (QEvent*)event);
}

void q_graphicsobject_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsObject_OnSceneEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_context_menu_event(void* self, void* event) {
    QGraphicsObject_ContextMenuEvent((QGraphicsObject*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsobject_super_context_menu_event(void* self, void* event) {
    QGraphicsObject_SuperContextMenuEvent((QGraphicsObject*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsobject_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnContextMenuEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_drag_enter_event(void* self, void* event) {
    QGraphicsObject_DragEnterEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_super_drag_enter_event(void* self, void* event) {
    QGraphicsObject_SuperDragEnterEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnDragEnterEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_drag_leave_event(void* self, void* event) {
    QGraphicsObject_DragLeaveEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_super_drag_leave_event(void* self, void* event) {
    QGraphicsObject_SuperDragLeaveEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnDragLeaveEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_drag_move_event(void* self, void* event) {
    QGraphicsObject_DragMoveEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_super_drag_move_event(void* self, void* event) {
    QGraphicsObject_SuperDragMoveEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnDragMoveEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_drop_event(void* self, void* event) {
    QGraphicsObject_DropEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_super_drop_event(void* self, void* event) {
    QGraphicsObject_SuperDropEvent((QGraphicsObject*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsobject_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnDropEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_focus_in_event(void* self, void* event) {
    QGraphicsObject_FocusInEvent((QGraphicsObject*)self, (QFocusEvent*)event);
}

void q_graphicsobject_super_focus_in_event(void* self, void* event) {
    QGraphicsObject_SuperFocusInEvent((QGraphicsObject*)self, (QFocusEvent*)event);
}

void q_graphicsobject_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnFocusInEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_focus_out_event(void* self, void* event) {
    QGraphicsObject_FocusOutEvent((QGraphicsObject*)self, (QFocusEvent*)event);
}

void q_graphicsobject_super_focus_out_event(void* self, void* event) {
    QGraphicsObject_SuperFocusOutEvent((QGraphicsObject*)self, (QFocusEvent*)event);
}

void q_graphicsobject_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnFocusOutEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_hover_enter_event(void* self, void* event) {
    QGraphicsObject_HoverEnterEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_super_hover_enter_event(void* self, void* event) {
    QGraphicsObject_SuperHoverEnterEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnHoverEnterEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_hover_move_event(void* self, void* event) {
    QGraphicsObject_HoverMoveEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_super_hover_move_event(void* self, void* event) {
    QGraphicsObject_SuperHoverMoveEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnHoverMoveEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_hover_leave_event(void* self, void* event) {
    QGraphicsObject_HoverLeaveEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_super_hover_leave_event(void* self, void* event) {
    QGraphicsObject_SuperHoverLeaveEvent((QGraphicsObject*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsobject_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnHoverLeaveEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_key_press_event(void* self, void* event) {
    QGraphicsObject_KeyPressEvent((QGraphicsObject*)self, (QKeyEvent*)event);
}

void q_graphicsobject_super_key_press_event(void* self, void* event) {
    QGraphicsObject_SuperKeyPressEvent((QGraphicsObject*)self, (QKeyEvent*)event);
}

void q_graphicsobject_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnKeyPressEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_key_release_event(void* self, void* event) {
    QGraphicsObject_KeyReleaseEvent((QGraphicsObject*)self, (QKeyEvent*)event);
}

void q_graphicsobject_super_key_release_event(void* self, void* event) {
    QGraphicsObject_SuperKeyReleaseEvent((QGraphicsObject*)self, (QKeyEvent*)event);
}

void q_graphicsobject_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnKeyReleaseEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_mouse_press_event(void* self, void* event) {
    QGraphicsObject_MousePressEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_super_mouse_press_event(void* self, void* event) {
    QGraphicsObject_SuperMousePressEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnMousePressEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_mouse_move_event(void* self, void* event) {
    QGraphicsObject_MouseMoveEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_super_mouse_move_event(void* self, void* event) {
    QGraphicsObject_SuperMouseMoveEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnMouseMoveEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_mouse_release_event(void* self, void* event) {
    QGraphicsObject_MouseReleaseEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_super_mouse_release_event(void* self, void* event) {
    QGraphicsObject_SuperMouseReleaseEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnMouseReleaseEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_mouse_double_click_event(void* self, void* event) {
    QGraphicsObject_MouseDoubleClickEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsObject_SuperMouseDoubleClickEvent((QGraphicsObject*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsobject_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnMouseDoubleClickEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_wheel_event(void* self, void* event) {
    QGraphicsObject_WheelEvent((QGraphicsObject*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsobject_super_wheel_event(void* self, void* event) {
    QGraphicsObject_SuperWheelEvent((QGraphicsObject*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsobject_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnWheelEvent((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_input_method_event(void* self, void* event) {
    QGraphicsObject_InputMethodEvent((QGraphicsObject*)self, (QInputMethodEvent*)event);
}

void q_graphicsobject_super_input_method_event(void* self, void* event) {
    QGraphicsObject_SuperInputMethodEvent((QGraphicsObject*)self, (QInputMethodEvent*)event);
}

void q_graphicsobject_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsObject_OnInputMethodEvent((QGraphicsObject*)self, (intptr_t)callback);
}

QVariant* q_graphicsobject_input_method_query(void* self, int32_t query) {
    return QGraphicsObject_InputMethodQuery((QGraphicsObject*)self, query);
}

QVariant* q_graphicsobject_super_input_method_query(void* self, int32_t query) {
    return QGraphicsObject_SuperInputMethodQuery((QGraphicsObject*)self, query);
}

void q_graphicsobject_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsObject_OnInputMethodQuery((QGraphicsObject*)self, (intptr_t)callback);
}

QVariant* q_graphicsobject_item_change(void* self, int32_t change, void* value) {
    return QGraphicsObject_ItemChange((QGraphicsObject*)self, change, (QVariant*)value);
}

QVariant* q_graphicsobject_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsObject_SuperItemChange((QGraphicsObject*)self, change, (QVariant*)value);
}

void q_graphicsobject_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsObject_OnItemChange((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_supports_extension(void* self, int32_t extension) {
    return QGraphicsObject_SupportsExtension((QGraphicsObject*)self, extension);
}

bool q_graphicsobject_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsObject_SuperSupportsExtension((QGraphicsObject*)self, extension);
}

void q_graphicsobject_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsObject_OnSupportsExtension((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsObject_SetExtension((QGraphicsObject*)self, extension, (QVariant*)variant);
}

void q_graphicsobject_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsObject_SuperSetExtension((QGraphicsObject*)self, extension, (QVariant*)variant);
}

void q_graphicsobject_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsObject_OnSetExtension((QGraphicsObject*)self, (intptr_t)callback);
}

QVariant* q_graphicsobject_extension(void* self, void* variant) {
    return QGraphicsObject_Extension((QGraphicsObject*)self, (QVariant*)variant);
}

QVariant* q_graphicsobject_super_extension(void* self, void* variant) {
    return QGraphicsObject_SuperExtension((QGraphicsObject*)self, (QVariant*)variant);
}

void q_graphicsobject_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsObject_OnExtension((QGraphicsObject*)self, (intptr_t)callback);
}

QObject* q_graphicsobject_sender(void* self) {
    return QGraphicsObject_Sender((QGraphicsObject*)self);
}

QObject* q_graphicsobject_super_sender(void* self) {
    return QGraphicsObject_SuperSender((QGraphicsObject*)self);
}

void q_graphicsobject_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsObject_OnSender((QGraphicsObject*)self, (intptr_t)callback);
}

int32_t q_graphicsobject_sender_signal_index(void* self) {
    return QGraphicsObject_SenderSignalIndex((QGraphicsObject*)self);
}

int32_t q_graphicsobject_super_sender_signal_index(void* self) {
    return QGraphicsObject_SuperSenderSignalIndex((QGraphicsObject*)self);
}

void q_graphicsobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsObject_OnSenderSignalIndex((QGraphicsObject*)self, (intptr_t)callback);
}

int32_t q_graphicsobject_receivers(void* self, const char* signal) {
    return QGraphicsObject_Receivers((QGraphicsObject*)self, signal);
}

int32_t q_graphicsobject_super_receivers(void* self, const char* signal) {
    return QGraphicsObject_SuperReceivers((QGraphicsObject*)self, signal);
}

void q_graphicsobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsObject_OnReceivers((QGraphicsObject*)self, (intptr_t)callback);
}

bool q_graphicsobject_is_signal_connected(void* self, void* signal) {
    return QGraphicsObject_IsSignalConnected((QGraphicsObject*)self, (QMetaMethod*)signal);
}

bool q_graphicsobject_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsObject_SuperIsSignalConnected((QGraphicsObject*)self, (QMetaMethod*)signal);
}

void q_graphicsobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsObject_OnIsSignalConnected((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_add_to_index(void* self) {
    QGraphicsObject_AddToIndex((QGraphicsObject*)self);
}

void q_graphicsobject_super_add_to_index(void* self) {
    QGraphicsObject_SuperAddToIndex((QGraphicsObject*)self);
}

void q_graphicsobject_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsObject_OnAddToIndex((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_remove_from_index(void* self) {
    QGraphicsObject_RemoveFromIndex((QGraphicsObject*)self);
}

void q_graphicsobject_super_remove_from_index(void* self) {
    QGraphicsObject_SuperRemoveFromIndex((QGraphicsObject*)self);
}

void q_graphicsobject_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsObject_OnRemoveFromIndex((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_prepare_geometry_change(void* self) {
    QGraphicsObject_PrepareGeometryChange((QGraphicsObject*)self);
}

void q_graphicsobject_super_prepare_geometry_change(void* self) {
    QGraphicsObject_SuperPrepareGeometryChange((QGraphicsObject*)self);
}

void q_graphicsobject_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsObject_OnPrepareGeometryChange((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsobject_delete(void* self) {
    QGraphicsObject_Delete((QGraphicsObject*)(self));
}

QAbstractGraphicsShapeItem* q_abstractgraphicsshapeitem_new() {
    return QAbstractGraphicsShapeItem_new();
}

QAbstractGraphicsShapeItem* q_abstractgraphicsshapeitem_new2(void* parent) {
    return QAbstractGraphicsShapeItem_new2((QGraphicsItem*)parent);
}

QPen* q_abstractgraphicsshapeitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_abstractgraphicsshapeitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

bool q_abstractgraphicsshapeitem_is_obscured_by(void* self, void* item) {
    return QAbstractGraphicsShapeItem_IsObscuredBy((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)item);
}

void q_abstractgraphicsshapeitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnIsObscuredBy((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_super_is_obscured_by(void* self, void* item) {
    return QAbstractGraphicsShapeItem_SuperIsObscuredBy((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_abstractgraphicsshapeitem_opaque_area(void* self) {
    return QAbstractGraphicsShapeItem_OpaqueArea((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QAbstractGraphicsShapeItem_OnOpaqueArea((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QPainterPath* q_abstractgraphicsshapeitem_super_opaque_area(void* self) {
    return QAbstractGraphicsShapeItem_SuperOpaqueArea((QAbstractGraphicsShapeItem*)self);
}

QGraphicsScene* q_abstractgraphicsshapeitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_abstractgraphicsshapeitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_abstractgraphicsshapeitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_abstractgraphicsshapeitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_abstractgraphicsshapeitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_abstractgraphicsshapeitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_abstractgraphicsshapeitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_abstractgraphicsshapeitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_abstractgraphicsshapeitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_abstractgraphicsshapeitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_abstractgraphicsshapeitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_abstractgraphicsshapeitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_abstractgraphicsshapeitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_abstractgraphicsshapeitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_abstractgraphicsshapeitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_abstractgraphicsshapeitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_abstractgraphicsshapeitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_abstractgraphicsshapeitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractgraphicsshapeitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_abstractgraphicsshapeitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_abstractgraphicsshapeitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_abstractgraphicsshapeitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_abstractgraphicsshapeitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_abstractgraphicsshapeitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_abstractgraphicsshapeitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_abstractgraphicsshapeitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_abstractgraphicsshapeitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_abstractgraphicsshapeitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_abstractgraphicsshapeitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_abstractgraphicsshapeitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_abstractgraphicsshapeitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_abstractgraphicsshapeitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_abstractgraphicsshapeitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_abstractgraphicsshapeitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_abstractgraphicsshapeitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_abstractgraphicsshapeitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_abstractgraphicsshapeitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_abstractgraphicsshapeitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_abstractgraphicsshapeitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_abstractgraphicsshapeitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_abstractgraphicsshapeitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_abstractgraphicsshapeitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_abstractgraphicsshapeitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_abstractgraphicsshapeitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_abstractgraphicsshapeitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_abstractgraphicsshapeitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_abstractgraphicsshapeitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_abstractgraphicsshapeitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_abstractgraphicsshapeitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_abstractgraphicsshapeitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_abstractgraphicsshapeitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_abstractgraphicsshapeitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_abstractgraphicsshapeitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_abstractgraphicsshapeitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_abstractgraphicsshapeitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_abstractgraphicsshapeitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_abstractgraphicsshapeitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_abstractgraphicsshapeitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_abstractgraphicsshapeitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_abstractgraphicsshapeitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_abstractgraphicsshapeitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_abstractgraphicsshapeitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_abstractgraphicsshapeitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_abstractgraphicsshapeitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_abstractgraphicsshapeitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_abstractgraphicsshapeitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_abstractgraphicsshapeitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_abstractgraphicsshapeitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_abstractgraphicsshapeitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_abstractgraphicsshapeitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_abstractgraphicsshapeitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_abstractgraphicsshapeitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_abstractgraphicsshapeitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_abstractgraphicsshapeitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_abstractgraphicsshapeitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_abstractgraphicsshapeitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_abstractgraphicsshapeitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_abstractgraphicsshapeitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_abstractgraphicsshapeitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_abstractgraphicsshapeitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_abstractgraphicsshapeitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_abstractgraphicsshapeitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_abstractgraphicsshapeitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_abstractgraphicsshapeitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_abstractgraphicsshapeitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_abstractgraphicsshapeitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_abstractgraphicsshapeitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_abstractgraphicsshapeitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_abstractgraphicsshapeitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_abstractgraphicsshapeitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_abstractgraphicsshapeitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_abstractgraphicsshapeitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_abstractgraphicsshapeitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_abstractgraphicsshapeitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_abstractgraphicsshapeitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_abstractgraphicsshapeitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_abstractgraphicsshapeitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_abstractgraphicsshapeitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_abstractgraphicsshapeitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_abstractgraphicsshapeitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_abstractgraphicsshapeitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_abstractgraphicsshapeitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_abstractgraphicsshapeitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_abstractgraphicsshapeitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_abstractgraphicsshapeitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_abstractgraphicsshapeitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_abstractgraphicsshapeitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_abstractgraphicsshapeitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_abstractgraphicsshapeitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_abstractgraphicsshapeitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_abstractgraphicsshapeitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_abstractgraphicsshapeitem_advance(void* self, int phase) {
    QAbstractGraphicsShapeItem_Advance((QAbstractGraphicsShapeItem*)self, phase);
}

void q_abstractgraphicsshapeitem_super_advance(void* self, int phase) {
    QAbstractGraphicsShapeItem_SuperAdvance((QAbstractGraphicsShapeItem*)self, phase);
}

void q_abstractgraphicsshapeitem_on_advance(void* self, void (*callback)(void*, int)) {
    QAbstractGraphicsShapeItem_OnAdvance((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QRectF* q_abstractgraphicsshapeitem_bounding_rect(void* self) {
    return QAbstractGraphicsShapeItem_BoundingRect((QAbstractGraphicsShapeItem*)self);
}

QRectF* q_abstractgraphicsshapeitem_super_bounding_rect(void* self) {
    return QAbstractGraphicsShapeItem_SuperBoundingRect((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QAbstractGraphicsShapeItem_OnBoundingRect((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QPainterPath* q_abstractgraphicsshapeitem_shape(void* self) {
    return QAbstractGraphicsShapeItem_Shape((QAbstractGraphicsShapeItem*)self);
}

QPainterPath* q_abstractgraphicsshapeitem_super_shape(void* self) {
    return QAbstractGraphicsShapeItem_SuperShape((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QAbstractGraphicsShapeItem_OnShape((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_contains(void* self, void* point) {
    return QAbstractGraphicsShapeItem_Contains((QAbstractGraphicsShapeItem*)self, (QPointF*)point);
}

bool q_abstractgraphicsshapeitem_super_contains(void* self, void* point) {
    return QAbstractGraphicsShapeItem_SuperContains((QAbstractGraphicsShapeItem*)self, (QPointF*)point);
}

void q_abstractgraphicsshapeitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnContains((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QAbstractGraphicsShapeItem_CollidesWithItem((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)other, mode);
}

bool q_abstractgraphicsshapeitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QAbstractGraphicsShapeItem_SuperCollidesWithItem((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)other, mode);
}

void q_abstractgraphicsshapeitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QAbstractGraphicsShapeItem_OnCollidesWithItem((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QAbstractGraphicsShapeItem_CollidesWithPath((QAbstractGraphicsShapeItem*)self, (QPainterPath*)path, mode);
}

bool q_abstractgraphicsshapeitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QAbstractGraphicsShapeItem_SuperCollidesWithPath((QAbstractGraphicsShapeItem*)self, (QPainterPath*)path, mode);
}

void q_abstractgraphicsshapeitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QAbstractGraphicsShapeItem_OnCollidesWithPath((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_paint(void* self, void* painter, void* option, void* widget) {
    QAbstractGraphicsShapeItem_Paint((QAbstractGraphicsShapeItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_abstractgraphicsshapeitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QAbstractGraphicsShapeItem_SuperPaint((QAbstractGraphicsShapeItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_abstractgraphicsshapeitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QAbstractGraphicsShapeItem_OnPaint((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

int32_t q_abstractgraphicsshapeitem_type(void* self) {
    return QAbstractGraphicsShapeItem_Type((QAbstractGraphicsShapeItem*)self);
}

int32_t q_abstractgraphicsshapeitem_super_type(void* self) {
    return QAbstractGraphicsShapeItem_SuperType((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_type(void* self, int32_t (*callback)()) {
    QAbstractGraphicsShapeItem_OnType((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_scene_event_filter(void* self, void* watched, void* event) {
    return QAbstractGraphicsShapeItem_SceneEventFilter((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_abstractgraphicsshapeitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QAbstractGraphicsShapeItem_SuperSceneEventFilter((QAbstractGraphicsShapeItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_abstractgraphicsshapeitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractGraphicsShapeItem_OnSceneEventFilter((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_scene_event(void* self, void* event) {
    return QAbstractGraphicsShapeItem_SceneEvent((QAbstractGraphicsShapeItem*)self, (QEvent*)event);
}

bool q_abstractgraphicsshapeitem_super_scene_event(void* self, void* event) {
    return QAbstractGraphicsShapeItem_SuperSceneEvent((QAbstractGraphicsShapeItem*)self, (QEvent*)event);
}

void q_abstractgraphicsshapeitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnSceneEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_context_menu_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_ContextMenuEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_abstractgraphicsshapeitem_super_context_menu_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperContextMenuEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_abstractgraphicsshapeitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnContextMenuEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_drag_enter_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_DragEnterEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_super_drag_enter_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperDragEnterEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnDragEnterEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_drag_leave_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_DragLeaveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_super_drag_leave_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperDragLeaveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnDragLeaveEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_drag_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_DragMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_super_drag_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperDragMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnDragMoveEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_drop_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_DropEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_super_drop_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperDropEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_abstractgraphicsshapeitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnDropEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_focus_in_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_FocusInEvent((QAbstractGraphicsShapeItem*)self, (QFocusEvent*)event);
}

void q_abstractgraphicsshapeitem_super_focus_in_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperFocusInEvent((QAbstractGraphicsShapeItem*)self, (QFocusEvent*)event);
}

void q_abstractgraphicsshapeitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnFocusInEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_focus_out_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_FocusOutEvent((QAbstractGraphicsShapeItem*)self, (QFocusEvent*)event);
}

void q_abstractgraphicsshapeitem_super_focus_out_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperFocusOutEvent((QAbstractGraphicsShapeItem*)self, (QFocusEvent*)event);
}

void q_abstractgraphicsshapeitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnFocusOutEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_hover_enter_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_HoverEnterEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_super_hover_enter_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperHoverEnterEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnHoverEnterEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_hover_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_HoverMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_super_hover_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperHoverMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnHoverMoveEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_hover_leave_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_HoverLeaveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_super_hover_leave_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperHoverLeaveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_abstractgraphicsshapeitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnHoverLeaveEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_key_press_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_KeyPressEvent((QAbstractGraphicsShapeItem*)self, (QKeyEvent*)event);
}

void q_abstractgraphicsshapeitem_super_key_press_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperKeyPressEvent((QAbstractGraphicsShapeItem*)self, (QKeyEvent*)event);
}

void q_abstractgraphicsshapeitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnKeyPressEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_key_release_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_KeyReleaseEvent((QAbstractGraphicsShapeItem*)self, (QKeyEvent*)event);
}

void q_abstractgraphicsshapeitem_super_key_release_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperKeyReleaseEvent((QAbstractGraphicsShapeItem*)self, (QKeyEvent*)event);
}

void q_abstractgraphicsshapeitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnKeyReleaseEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_mouse_press_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_MousePressEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_super_mouse_press_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperMousePressEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnMousePressEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_mouse_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_MouseMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_super_mouse_move_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperMouseMoveEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnMouseMoveEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_mouse_release_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_MouseReleaseEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_super_mouse_release_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperMouseReleaseEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnMouseReleaseEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_mouse_double_click_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_MouseDoubleClickEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_super_mouse_double_click_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperMouseDoubleClickEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_abstractgraphicsshapeitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnMouseDoubleClickEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_wheel_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_WheelEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_abstractgraphicsshapeitem_super_wheel_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperWheelEvent((QAbstractGraphicsShapeItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_abstractgraphicsshapeitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnWheelEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_input_method_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_InputMethodEvent((QAbstractGraphicsShapeItem*)self, (QInputMethodEvent*)event);
}

void q_abstractgraphicsshapeitem_super_input_method_event(void* self, void* event) {
    QAbstractGraphicsShapeItem_SuperInputMethodEvent((QAbstractGraphicsShapeItem*)self, (QInputMethodEvent*)event);
}

void q_abstractgraphicsshapeitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnInputMethodEvent((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QVariant* q_abstractgraphicsshapeitem_input_method_query(void* self, int32_t query) {
    return QAbstractGraphicsShapeItem_InputMethodQuery((QAbstractGraphicsShapeItem*)self, query);
}

QVariant* q_abstractgraphicsshapeitem_super_input_method_query(void* self, int32_t query) {
    return QAbstractGraphicsShapeItem_SuperInputMethodQuery((QAbstractGraphicsShapeItem*)self, query);
}

void q_abstractgraphicsshapeitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QAbstractGraphicsShapeItem_OnInputMethodQuery((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QVariant* q_abstractgraphicsshapeitem_item_change(void* self, int32_t change, void* value) {
    return QAbstractGraphicsShapeItem_ItemChange((QAbstractGraphicsShapeItem*)self, change, (QVariant*)value);
}

QVariant* q_abstractgraphicsshapeitem_super_item_change(void* self, int32_t change, void* value) {
    return QAbstractGraphicsShapeItem_SuperItemChange((QAbstractGraphicsShapeItem*)self, change, (QVariant*)value);
}

void q_abstractgraphicsshapeitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QAbstractGraphicsShapeItem_OnItemChange((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

bool q_abstractgraphicsshapeitem_supports_extension(void* self, int32_t extension) {
    return QAbstractGraphicsShapeItem_SupportsExtension((QAbstractGraphicsShapeItem*)self, extension);
}

bool q_abstractgraphicsshapeitem_super_supports_extension(void* self, int32_t extension) {
    return QAbstractGraphicsShapeItem_SuperSupportsExtension((QAbstractGraphicsShapeItem*)self, extension);
}

void q_abstractgraphicsshapeitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QAbstractGraphicsShapeItem_OnSupportsExtension((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_set_extension(void* self, int32_t extension, void* variant) {
    QAbstractGraphicsShapeItem_SetExtension((QAbstractGraphicsShapeItem*)self, extension, (QVariant*)variant);
}

void q_abstractgraphicsshapeitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QAbstractGraphicsShapeItem_SuperSetExtension((QAbstractGraphicsShapeItem*)self, extension, (QVariant*)variant);
}

void q_abstractgraphicsshapeitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QAbstractGraphicsShapeItem_OnSetExtension((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

QVariant* q_abstractgraphicsshapeitem_extension(void* self, void* variant) {
    return QAbstractGraphicsShapeItem_Extension((QAbstractGraphicsShapeItem*)self, (QVariant*)variant);
}

QVariant* q_abstractgraphicsshapeitem_super_extension(void* self, void* variant) {
    return QAbstractGraphicsShapeItem_SuperExtension((QAbstractGraphicsShapeItem*)self, (QVariant*)variant);
}

void q_abstractgraphicsshapeitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QAbstractGraphicsShapeItem_OnExtension((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_update_micro_focus(void* self) {
    QAbstractGraphicsShapeItem_UpdateMicroFocus((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_super_update_micro_focus(void* self) {
    QAbstractGraphicsShapeItem_SuperUpdateMicroFocus((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_update_micro_focus(void* self, void (*callback)()) {
    QAbstractGraphicsShapeItem_OnUpdateMicroFocus((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_add_to_index(void* self) {
    QAbstractGraphicsShapeItem_AddToIndex((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_super_add_to_index(void* self) {
    QAbstractGraphicsShapeItem_SuperAddToIndex((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_add_to_index(void* self, void (*callback)()) {
    QAbstractGraphicsShapeItem_OnAddToIndex((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_remove_from_index(void* self) {
    QAbstractGraphicsShapeItem_RemoveFromIndex((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_super_remove_from_index(void* self) {
    QAbstractGraphicsShapeItem_SuperRemoveFromIndex((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_remove_from_index(void* self, void (*callback)()) {
    QAbstractGraphicsShapeItem_OnRemoveFromIndex((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_prepare_geometry_change(void* self) {
    QAbstractGraphicsShapeItem_PrepareGeometryChange((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_super_prepare_geometry_change(void* self) {
    QAbstractGraphicsShapeItem_SuperPrepareGeometryChange((QAbstractGraphicsShapeItem*)self);
}

void q_abstractgraphicsshapeitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QAbstractGraphicsShapeItem_OnPrepareGeometryChange((QAbstractGraphicsShapeItem*)self, (intptr_t)callback);
}

void q_abstractgraphicsshapeitem_delete(void* self) {
    QAbstractGraphicsShapeItem_Delete((QAbstractGraphicsShapeItem*)(self));
}

QGraphicsPathItem* q_graphicspathitem_new() {
    return QGraphicsPathItem_new();
}

QGraphicsPathItem* q_graphicspathitem_new2(void* path) {
    return QGraphicsPathItem_new2((QPainterPath*)path);
}

QGraphicsPathItem* q_graphicspathitem_new3(void* parent) {
    return QGraphicsPathItem_new3((QGraphicsItem*)parent);
}

QGraphicsPathItem* q_graphicspathitem_new4(void* path, void* parent) {
    return QGraphicsPathItem_new4((QPainterPath*)path, (QGraphicsItem*)parent);
}

QPainterPath* q_graphicspathitem_path(void* self) {
    return QGraphicsPathItem_Path((QGraphicsPathItem*)self);
}

void q_graphicspathitem_set_path(void* self, void* path) {
    QGraphicsPathItem_SetPath((QGraphicsPathItem*)self, (QPainterPath*)path);
}

QRectF* q_graphicspathitem_bounding_rect(void* self) {
    return QGraphicsPathItem_BoundingRect((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsPathItem_OnBoundingRect((QGraphicsPathItem*)self, (intptr_t)callback);
}

QRectF* q_graphicspathitem_super_bounding_rect(void* self) {
    return QGraphicsPathItem_SuperBoundingRect((QGraphicsPathItem*)self);
}

QPainterPath* q_graphicspathitem_shape(void* self) {
    return QGraphicsPathItem_Shape((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsPathItem_OnShape((QGraphicsPathItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspathitem_super_shape(void* self) {
    return QGraphicsPathItem_SuperShape((QGraphicsPathItem*)self);
}

bool q_graphicspathitem_contains(void* self, void* point) {
    return QGraphicsPathItem_Contains((QGraphicsPathItem*)self, (QPointF*)point);
}

void q_graphicspathitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPathItem_OnContains((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_super_contains(void* self, void* point) {
    return QGraphicsPathItem_SuperContains((QGraphicsPathItem*)self, (QPointF*)point);
}

void q_graphicspathitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPathItem_Paint((QGraphicsPathItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicspathitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsPathItem_OnPaint((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPathItem_SuperPaint((QGraphicsPathItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicspathitem_is_obscured_by(void* self, void* item) {
    return QGraphicsPathItem_IsObscuredBy((QGraphicsPathItem*)self, (QGraphicsItem*)item);
}

void q_graphicspathitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPathItem_OnIsObscuredBy((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsPathItem_SuperIsObscuredBy((QGraphicsPathItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicspathitem_opaque_area(void* self) {
    return QGraphicsPathItem_OpaqueArea((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsPathItem_OnOpaqueArea((QGraphicsPathItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspathitem_super_opaque_area(void* self) {
    return QGraphicsPathItem_SuperOpaqueArea((QGraphicsPathItem*)self);
}

int32_t q_graphicspathitem_type(void* self) {
    return QGraphicsPathItem_Type((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsPathItem_OnType((QGraphicsPathItem*)self, (intptr_t)callback);
}

int32_t q_graphicspathitem_super_type(void* self) {
    return QGraphicsPathItem_SuperType((QGraphicsPathItem*)self);
}

bool q_graphicspathitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsPathItem_SupportsExtension((QGraphicsPathItem*)self, extension);
}

void q_graphicspathitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsPathItem_OnSupportsExtension((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsPathItem_SuperSupportsExtension((QGraphicsPathItem*)self, extension);
}

void q_graphicspathitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPathItem_SetExtension((QGraphicsPathItem*)self, extension, (QVariant*)variant);
}

void q_graphicspathitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsPathItem_OnSetExtension((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPathItem_SuperSetExtension((QGraphicsPathItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicspathitem_extension(void* self, void* variant) {
    return QGraphicsPathItem_Extension((QGraphicsPathItem*)self, (QVariant*)variant);
}

void q_graphicspathitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsPathItem_OnExtension((QGraphicsPathItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspathitem_super_extension(void* self, void* variant) {
    return QGraphicsPathItem_SuperExtension((QGraphicsPathItem*)self, (QVariant*)variant);
}

QPen* q_graphicspathitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_graphicspathitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_graphicspathitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_graphicspathitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

QGraphicsScene* q_graphicspathitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspathitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspathitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspathitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspathitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspathitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspathitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspathitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicspathitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicspathitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspathitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspathitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicspathitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicspathitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicspathitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicspathitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicspathitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicspathitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicspathitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicspathitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicspathitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicspathitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicspathitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicspathitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicspathitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicspathitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicspathitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicspathitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicspathitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicspathitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicspathitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicspathitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicspathitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicspathitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicspathitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicspathitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicspathitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicspathitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicspathitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicspathitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicspathitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicspathitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicspathitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicspathitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicspathitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicspathitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspathitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicspathitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspathitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicspathitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspathitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicspathitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspathitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicspathitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicspathitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicspathitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicspathitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspathitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicspathitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicspathitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspathitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicspathitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicspathitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicspathitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicspathitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicspathitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicspathitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicspathitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicspathitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicspathitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicspathitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicspathitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicspathitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicspathitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicspathitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicspathitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicspathitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicspathitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicspathitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicspathitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicspathitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicspathitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicspathitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicspathitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicspathitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicspathitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicspathitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicspathitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicspathitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicspathitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicspathitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicspathitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicspathitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicspathitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicspathitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicspathitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicspathitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicspathitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspathitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicspathitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicspathitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicspathitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicspathitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicspathitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicspathitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicspathitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicspathitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspathitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspathitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspathitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspathitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspathitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspathitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspathitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspathitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspathitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspathitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspathitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspathitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspathitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspathitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspathitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspathitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspathitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspathitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspathitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspathitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspathitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspathitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspathitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicspathitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspathitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspathitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspathitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspathitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspathitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicspathitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicspathitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicspathitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicspathitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicspathitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicspathitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicspathitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicspathitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspathitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspathitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicspathitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicspathitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicspathitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicspathitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspathitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicspathitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicspathitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicspathitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicspathitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicspathitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicspathitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicspathitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspathitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspathitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicspathitem_advance(void* self, int phase) {
    QGraphicsPathItem_Advance((QGraphicsPathItem*)self, phase);
}

void q_graphicspathitem_super_advance(void* self, int phase) {
    QGraphicsPathItem_SuperAdvance((QGraphicsPathItem*)self, phase);
}

void q_graphicspathitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsPathItem_OnAdvance((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPathItem_CollidesWithItem((QGraphicsPathItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicspathitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPathItem_SuperCollidesWithItem((QGraphicsPathItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicspathitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPathItem_OnCollidesWithItem((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPathItem_CollidesWithPath((QGraphicsPathItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicspathitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPathItem_SuperCollidesWithPath((QGraphicsPathItem*)self, (QPainterPath*)path, mode);
}

void q_graphicspathitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPathItem_OnCollidesWithPath((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPathItem_SceneEventFilter((QGraphicsPathItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicspathitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPathItem_SuperSceneEventFilter((QGraphicsPathItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicspathitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsPathItem_OnSceneEventFilter((QGraphicsPathItem*)self, (intptr_t)callback);
}

bool q_graphicspathitem_scene_event(void* self, void* event) {
    return QGraphicsPathItem_SceneEvent((QGraphicsPathItem*)self, (QEvent*)event);
}

bool q_graphicspathitem_super_scene_event(void* self, void* event) {
    return QGraphicsPathItem_SuperSceneEvent((QGraphicsPathItem*)self, (QEvent*)event);
}

void q_graphicspathitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPathItem_OnSceneEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_context_menu_event(void* self, void* event) {
    QGraphicsPathItem_ContextMenuEvent((QGraphicsPathItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspathitem_super_context_menu_event(void* self, void* event) {
    QGraphicsPathItem_SuperContextMenuEvent((QGraphicsPathItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspathitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnContextMenuEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_drag_enter_event(void* self, void* event) {
    QGraphicsPathItem_DragEnterEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsPathItem_SuperDragEnterEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnDragEnterEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_drag_leave_event(void* self, void* event) {
    QGraphicsPathItem_DragLeaveEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsPathItem_SuperDragLeaveEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnDragLeaveEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_drag_move_event(void* self, void* event) {
    QGraphicsPathItem_DragMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_super_drag_move_event(void* self, void* event) {
    QGraphicsPathItem_SuperDragMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnDragMoveEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_drop_event(void* self, void* event) {
    QGraphicsPathItem_DropEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_super_drop_event(void* self, void* event) {
    QGraphicsPathItem_SuperDropEvent((QGraphicsPathItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspathitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnDropEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_focus_in_event(void* self, void* event) {
    QGraphicsPathItem_FocusInEvent((QGraphicsPathItem*)self, (QFocusEvent*)event);
}

void q_graphicspathitem_super_focus_in_event(void* self, void* event) {
    QGraphicsPathItem_SuperFocusInEvent((QGraphicsPathItem*)self, (QFocusEvent*)event);
}

void q_graphicspathitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnFocusInEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_focus_out_event(void* self, void* event) {
    QGraphicsPathItem_FocusOutEvent((QGraphicsPathItem*)self, (QFocusEvent*)event);
}

void q_graphicspathitem_super_focus_out_event(void* self, void* event) {
    QGraphicsPathItem_SuperFocusOutEvent((QGraphicsPathItem*)self, (QFocusEvent*)event);
}

void q_graphicspathitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnFocusOutEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_hover_enter_event(void* self, void* event) {
    QGraphicsPathItem_HoverEnterEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsPathItem_SuperHoverEnterEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnHoverEnterEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_hover_move_event(void* self, void* event) {
    QGraphicsPathItem_HoverMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_super_hover_move_event(void* self, void* event) {
    QGraphicsPathItem_SuperHoverMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnHoverMoveEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_hover_leave_event(void* self, void* event) {
    QGraphicsPathItem_HoverLeaveEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsPathItem_SuperHoverLeaveEvent((QGraphicsPathItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspathitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnHoverLeaveEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_key_press_event(void* self, void* event) {
    QGraphicsPathItem_KeyPressEvent((QGraphicsPathItem*)self, (QKeyEvent*)event);
}

void q_graphicspathitem_super_key_press_event(void* self, void* event) {
    QGraphicsPathItem_SuperKeyPressEvent((QGraphicsPathItem*)self, (QKeyEvent*)event);
}

void q_graphicspathitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnKeyPressEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_key_release_event(void* self, void* event) {
    QGraphicsPathItem_KeyReleaseEvent((QGraphicsPathItem*)self, (QKeyEvent*)event);
}

void q_graphicspathitem_super_key_release_event(void* self, void* event) {
    QGraphicsPathItem_SuperKeyReleaseEvent((QGraphicsPathItem*)self, (QKeyEvent*)event);
}

void q_graphicspathitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnKeyReleaseEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_mouse_press_event(void* self, void* event) {
    QGraphicsPathItem_MousePressEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsPathItem_SuperMousePressEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnMousePressEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_mouse_move_event(void* self, void* event) {
    QGraphicsPathItem_MouseMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsPathItem_SuperMouseMoveEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnMouseMoveEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_mouse_release_event(void* self, void* event) {
    QGraphicsPathItem_MouseReleaseEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsPathItem_SuperMouseReleaseEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnMouseReleaseEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsPathItem_MouseDoubleClickEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsPathItem_SuperMouseDoubleClickEvent((QGraphicsPathItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspathitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnMouseDoubleClickEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_wheel_event(void* self, void* event) {
    QGraphicsPathItem_WheelEvent((QGraphicsPathItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspathitem_super_wheel_event(void* self, void* event) {
    QGraphicsPathItem_SuperWheelEvent((QGraphicsPathItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspathitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnWheelEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_input_method_event(void* self, void* event) {
    QGraphicsPathItem_InputMethodEvent((QGraphicsPathItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspathitem_super_input_method_event(void* self, void* event) {
    QGraphicsPathItem_SuperInputMethodEvent((QGraphicsPathItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspathitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPathItem_OnInputMethodEvent((QGraphicsPathItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspathitem_input_method_query(void* self, int32_t query) {
    return QGraphicsPathItem_InputMethodQuery((QGraphicsPathItem*)self, query);
}

QVariant* q_graphicspathitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsPathItem_SuperInputMethodQuery((QGraphicsPathItem*)self, query);
}

void q_graphicspathitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsPathItem_OnInputMethodQuery((QGraphicsPathItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspathitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPathItem_ItemChange((QGraphicsPathItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicspathitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPathItem_SuperItemChange((QGraphicsPathItem*)self, change, (QVariant*)value);
}

void q_graphicspathitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsPathItem_OnItemChange((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_update_micro_focus(void* self) {
    QGraphicsPathItem_UpdateMicroFocus((QGraphicsPathItem*)self);
}

void q_graphicspathitem_super_update_micro_focus(void* self) {
    QGraphicsPathItem_SuperUpdateMicroFocus((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsPathItem_OnUpdateMicroFocus((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_add_to_index(void* self) {
    QGraphicsPathItem_AddToIndex((QGraphicsPathItem*)self);
}

void q_graphicspathitem_super_add_to_index(void* self) {
    QGraphicsPathItem_SuperAddToIndex((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsPathItem_OnAddToIndex((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_remove_from_index(void* self) {
    QGraphicsPathItem_RemoveFromIndex((QGraphicsPathItem*)self);
}

void q_graphicspathitem_super_remove_from_index(void* self) {
    QGraphicsPathItem_SuperRemoveFromIndex((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsPathItem_OnRemoveFromIndex((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_prepare_geometry_change(void* self) {
    QGraphicsPathItem_PrepareGeometryChange((QGraphicsPathItem*)self);
}

void q_graphicspathitem_super_prepare_geometry_change(void* self) {
    QGraphicsPathItem_SuperPrepareGeometryChange((QGraphicsPathItem*)self);
}

void q_graphicspathitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsPathItem_OnPrepareGeometryChange((QGraphicsPathItem*)self, (intptr_t)callback);
}

void q_graphicspathitem_delete(void* self) {
    QGraphicsPathItem_Delete((QGraphicsPathItem*)(self));
}

QGraphicsRectItem* q_graphicsrectitem_new() {
    return QGraphicsRectItem_new();
}

QGraphicsRectItem* q_graphicsrectitem_new2(void* rect) {
    return QGraphicsRectItem_new2((QRectF*)rect);
}

QGraphicsRectItem* q_graphicsrectitem_new3(double x, double y, double w, double h) {
    return QGraphicsRectItem_new3(x, y, w, h);
}

QGraphicsRectItem* q_graphicsrectitem_new4(void* parent) {
    return QGraphicsRectItem_new4((QGraphicsItem*)parent);
}

QGraphicsRectItem* q_graphicsrectitem_new5(void* rect, void* parent) {
    return QGraphicsRectItem_new5((QRectF*)rect, (QGraphicsItem*)parent);
}

QGraphicsRectItem* q_graphicsrectitem_new6(double x, double y, double w, double h, void* parent) {
    return QGraphicsRectItem_new6(x, y, w, h, (QGraphicsItem*)parent);
}

QRectF* q_graphicsrectitem_rect(void* self) {
    return QGraphicsRectItem_Rect((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_set_rect(void* self, void* rect) {
    QGraphicsRectItem_SetRect((QGraphicsRectItem*)self, (QRectF*)rect);
}

void q_graphicsrectitem_set_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsRectItem_SetRect2((QGraphicsRectItem*)self, x, y, w, h);
}

QRectF* q_graphicsrectitem_bounding_rect(void* self) {
    return QGraphicsRectItem_BoundingRect((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsRectItem_OnBoundingRect((QGraphicsRectItem*)self, (intptr_t)callback);
}

QRectF* q_graphicsrectitem_super_bounding_rect(void* self) {
    return QGraphicsRectItem_SuperBoundingRect((QGraphicsRectItem*)self);
}

QPainterPath* q_graphicsrectitem_shape(void* self) {
    return QGraphicsRectItem_Shape((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsRectItem_OnShape((QGraphicsRectItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsrectitem_super_shape(void* self) {
    return QGraphicsRectItem_SuperShape((QGraphicsRectItem*)self);
}

bool q_graphicsrectitem_contains(void* self, void* point) {
    return QGraphicsRectItem_Contains((QGraphicsRectItem*)self, (QPointF*)point);
}

void q_graphicsrectitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsRectItem_OnContains((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_super_contains(void* self, void* point) {
    return QGraphicsRectItem_SuperContains((QGraphicsRectItem*)self, (QPointF*)point);
}

void q_graphicsrectitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsRectItem_Paint((QGraphicsRectItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsrectitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsRectItem_OnPaint((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsRectItem_SuperPaint((QGraphicsRectItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicsrectitem_is_obscured_by(void* self, void* item) {
    return QGraphicsRectItem_IsObscuredBy((QGraphicsRectItem*)self, (QGraphicsItem*)item);
}

void q_graphicsrectitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsRectItem_OnIsObscuredBy((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsRectItem_SuperIsObscuredBy((QGraphicsRectItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicsrectitem_opaque_area(void* self) {
    return QGraphicsRectItem_OpaqueArea((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsRectItem_OnOpaqueArea((QGraphicsRectItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsrectitem_super_opaque_area(void* self) {
    return QGraphicsRectItem_SuperOpaqueArea((QGraphicsRectItem*)self);
}

int32_t q_graphicsrectitem_type(void* self) {
    return QGraphicsRectItem_Type((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsRectItem_OnType((QGraphicsRectItem*)self, (intptr_t)callback);
}

int32_t q_graphicsrectitem_super_type(void* self) {
    return QGraphicsRectItem_SuperType((QGraphicsRectItem*)self);
}

bool q_graphicsrectitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsRectItem_SupportsExtension((QGraphicsRectItem*)self, extension);
}

void q_graphicsrectitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsRectItem_OnSupportsExtension((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsRectItem_SuperSupportsExtension((QGraphicsRectItem*)self, extension);
}

void q_graphicsrectitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsRectItem_SetExtension((QGraphicsRectItem*)self, extension, (QVariant*)variant);
}

void q_graphicsrectitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsRectItem_OnSetExtension((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsRectItem_SuperSetExtension((QGraphicsRectItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicsrectitem_extension(void* self, void* variant) {
    return QGraphicsRectItem_Extension((QGraphicsRectItem*)self, (QVariant*)variant);
}

void q_graphicsrectitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsRectItem_OnExtension((QGraphicsRectItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsrectitem_super_extension(void* self, void* variant) {
    return QGraphicsRectItem_SuperExtension((QGraphicsRectItem*)self, (QVariant*)variant);
}

QPen* q_graphicsrectitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_graphicsrectitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_graphicsrectitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_graphicsrectitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

QGraphicsScene* q_graphicsrectitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsrectitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsrectitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsrectitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsrectitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsrectitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsrectitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsrectitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsrectitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsrectitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsrectitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsrectitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsrectitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsrectitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsrectitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsrectitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsrectitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsrectitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsrectitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsrectitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsrectitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsrectitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsrectitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsrectitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsrectitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsrectitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsrectitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsrectitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsrectitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsrectitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsrectitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsrectitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsrectitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsrectitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsrectitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsrectitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsrectitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsrectitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsrectitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsrectitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsrectitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsrectitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsrectitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsrectitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsrectitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsrectitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsrectitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsrectitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsrectitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsrectitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsrectitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsrectitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsrectitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsrectitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsrectitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsrectitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsrectitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsrectitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsrectitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsrectitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsrectitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsrectitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsrectitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsrectitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsrectitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsrectitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsrectitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsrectitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsrectitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsrectitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsrectitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsrectitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsrectitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsrectitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsrectitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsrectitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsrectitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsrectitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsrectitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsrectitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsrectitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsrectitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsrectitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsrectitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsrectitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsrectitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsrectitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsrectitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsrectitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsrectitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsrectitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsrectitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsrectitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsrectitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsrectitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsrectitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsrectitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsrectitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsrectitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsrectitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsrectitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsrectitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsrectitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsrectitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsrectitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsrectitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsrectitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsrectitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsrectitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsrectitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsrectitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsrectitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsrectitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsrectitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsrectitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsrectitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsrectitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsrectitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicsrectitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicsrectitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsrectitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsrectitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsrectitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsrectitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsrectitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsrectitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsrectitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsrectitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsrectitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsrectitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsrectitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicsrectitem_advance(void* self, int phase) {
    QGraphicsRectItem_Advance((QGraphicsRectItem*)self, phase);
}

void q_graphicsrectitem_super_advance(void* self, int phase) {
    QGraphicsRectItem_SuperAdvance((QGraphicsRectItem*)self, phase);
}

void q_graphicsrectitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsRectItem_OnAdvance((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsRectItem_CollidesWithItem((QGraphicsRectItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsrectitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsRectItem_SuperCollidesWithItem((QGraphicsRectItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsrectitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsRectItem_OnCollidesWithItem((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsRectItem_CollidesWithPath((QGraphicsRectItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicsrectitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsRectItem_SuperCollidesWithPath((QGraphicsRectItem*)self, (QPainterPath*)path, mode);
}

void q_graphicsrectitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsRectItem_OnCollidesWithPath((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRectItem_SceneEventFilter((QGraphicsRectItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsrectitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRectItem_SuperSceneEventFilter((QGraphicsRectItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsrectitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsRectItem_OnSceneEventFilter((QGraphicsRectItem*)self, (intptr_t)callback);
}

bool q_graphicsrectitem_scene_event(void* self, void* event) {
    return QGraphicsRectItem_SceneEvent((QGraphicsRectItem*)self, (QEvent*)event);
}

bool q_graphicsrectitem_super_scene_event(void* self, void* event) {
    return QGraphicsRectItem_SuperSceneEvent((QGraphicsRectItem*)self, (QEvent*)event);
}

void q_graphicsrectitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsRectItem_OnSceneEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_context_menu_event(void* self, void* event) {
    QGraphicsRectItem_ContextMenuEvent((QGraphicsRectItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsrectitem_super_context_menu_event(void* self, void* event) {
    QGraphicsRectItem_SuperContextMenuEvent((QGraphicsRectItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsrectitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnContextMenuEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_drag_enter_event(void* self, void* event) {
    QGraphicsRectItem_DragEnterEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsRectItem_SuperDragEnterEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnDragEnterEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_drag_leave_event(void* self, void* event) {
    QGraphicsRectItem_DragLeaveEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsRectItem_SuperDragLeaveEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnDragLeaveEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_drag_move_event(void* self, void* event) {
    QGraphicsRectItem_DragMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_super_drag_move_event(void* self, void* event) {
    QGraphicsRectItem_SuperDragMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnDragMoveEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_drop_event(void* self, void* event) {
    QGraphicsRectItem_DropEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_super_drop_event(void* self, void* event) {
    QGraphicsRectItem_SuperDropEvent((QGraphicsRectItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsrectitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnDropEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_focus_in_event(void* self, void* event) {
    QGraphicsRectItem_FocusInEvent((QGraphicsRectItem*)self, (QFocusEvent*)event);
}

void q_graphicsrectitem_super_focus_in_event(void* self, void* event) {
    QGraphicsRectItem_SuperFocusInEvent((QGraphicsRectItem*)self, (QFocusEvent*)event);
}

void q_graphicsrectitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnFocusInEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_focus_out_event(void* self, void* event) {
    QGraphicsRectItem_FocusOutEvent((QGraphicsRectItem*)self, (QFocusEvent*)event);
}

void q_graphicsrectitem_super_focus_out_event(void* self, void* event) {
    QGraphicsRectItem_SuperFocusOutEvent((QGraphicsRectItem*)self, (QFocusEvent*)event);
}

void q_graphicsrectitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnFocusOutEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_hover_enter_event(void* self, void* event) {
    QGraphicsRectItem_HoverEnterEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsRectItem_SuperHoverEnterEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnHoverEnterEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_hover_move_event(void* self, void* event) {
    QGraphicsRectItem_HoverMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_super_hover_move_event(void* self, void* event) {
    QGraphicsRectItem_SuperHoverMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnHoverMoveEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_hover_leave_event(void* self, void* event) {
    QGraphicsRectItem_HoverLeaveEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsRectItem_SuperHoverLeaveEvent((QGraphicsRectItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsrectitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnHoverLeaveEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_key_press_event(void* self, void* event) {
    QGraphicsRectItem_KeyPressEvent((QGraphicsRectItem*)self, (QKeyEvent*)event);
}

void q_graphicsrectitem_super_key_press_event(void* self, void* event) {
    QGraphicsRectItem_SuperKeyPressEvent((QGraphicsRectItem*)self, (QKeyEvent*)event);
}

void q_graphicsrectitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnKeyPressEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_key_release_event(void* self, void* event) {
    QGraphicsRectItem_KeyReleaseEvent((QGraphicsRectItem*)self, (QKeyEvent*)event);
}

void q_graphicsrectitem_super_key_release_event(void* self, void* event) {
    QGraphicsRectItem_SuperKeyReleaseEvent((QGraphicsRectItem*)self, (QKeyEvent*)event);
}

void q_graphicsrectitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnKeyReleaseEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_mouse_press_event(void* self, void* event) {
    QGraphicsRectItem_MousePressEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsRectItem_SuperMousePressEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnMousePressEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_mouse_move_event(void* self, void* event) {
    QGraphicsRectItem_MouseMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsRectItem_SuperMouseMoveEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnMouseMoveEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_mouse_release_event(void* self, void* event) {
    QGraphicsRectItem_MouseReleaseEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsRectItem_SuperMouseReleaseEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnMouseReleaseEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsRectItem_MouseDoubleClickEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsRectItem_SuperMouseDoubleClickEvent((QGraphicsRectItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsrectitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnMouseDoubleClickEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_wheel_event(void* self, void* event) {
    QGraphicsRectItem_WheelEvent((QGraphicsRectItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsrectitem_super_wheel_event(void* self, void* event) {
    QGraphicsRectItem_SuperWheelEvent((QGraphicsRectItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsrectitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnWheelEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_input_method_event(void* self, void* event) {
    QGraphicsRectItem_InputMethodEvent((QGraphicsRectItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsrectitem_super_input_method_event(void* self, void* event) {
    QGraphicsRectItem_SuperInputMethodEvent((QGraphicsRectItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsrectitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRectItem_OnInputMethodEvent((QGraphicsRectItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsrectitem_input_method_query(void* self, int32_t query) {
    return QGraphicsRectItem_InputMethodQuery((QGraphicsRectItem*)self, query);
}

QVariant* q_graphicsrectitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsRectItem_SuperInputMethodQuery((QGraphicsRectItem*)self, query);
}

void q_graphicsrectitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsRectItem_OnInputMethodQuery((QGraphicsRectItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsrectitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsRectItem_ItemChange((QGraphicsRectItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicsrectitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsRectItem_SuperItemChange((QGraphicsRectItem*)self, change, (QVariant*)value);
}

void q_graphicsrectitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsRectItem_OnItemChange((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_update_micro_focus(void* self) {
    QGraphicsRectItem_UpdateMicroFocus((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_super_update_micro_focus(void* self) {
    QGraphicsRectItem_SuperUpdateMicroFocus((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsRectItem_OnUpdateMicroFocus((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_add_to_index(void* self) {
    QGraphicsRectItem_AddToIndex((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_super_add_to_index(void* self) {
    QGraphicsRectItem_SuperAddToIndex((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsRectItem_OnAddToIndex((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_remove_from_index(void* self) {
    QGraphicsRectItem_RemoveFromIndex((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_super_remove_from_index(void* self) {
    QGraphicsRectItem_SuperRemoveFromIndex((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsRectItem_OnRemoveFromIndex((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_prepare_geometry_change(void* self) {
    QGraphicsRectItem_PrepareGeometryChange((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_super_prepare_geometry_change(void* self) {
    QGraphicsRectItem_SuperPrepareGeometryChange((QGraphicsRectItem*)self);
}

void q_graphicsrectitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsRectItem_OnPrepareGeometryChange((QGraphicsRectItem*)self, (intptr_t)callback);
}

void q_graphicsrectitem_delete(void* self) {
    QGraphicsRectItem_Delete((QGraphicsRectItem*)(self));
}

QGraphicsEllipseItem* q_graphicsellipseitem_new() {
    return QGraphicsEllipseItem_new();
}

QGraphicsEllipseItem* q_graphicsellipseitem_new2(void* rect) {
    return QGraphicsEllipseItem_new2((QRectF*)rect);
}

QGraphicsEllipseItem* q_graphicsellipseitem_new3(double x, double y, double w, double h) {
    return QGraphicsEllipseItem_new3(x, y, w, h);
}

QGraphicsEllipseItem* q_graphicsellipseitem_new4(void* parent) {
    return QGraphicsEllipseItem_new4((QGraphicsItem*)parent);
}

QGraphicsEllipseItem* q_graphicsellipseitem_new5(void* rect, void* parent) {
    return QGraphicsEllipseItem_new5((QRectF*)rect, (QGraphicsItem*)parent);
}

QGraphicsEllipseItem* q_graphicsellipseitem_new6(double x, double y, double w, double h, void* parent) {
    return QGraphicsEllipseItem_new6(x, y, w, h, (QGraphicsItem*)parent);
}

QRectF* q_graphicsellipseitem_rect(void* self) {
    return QGraphicsEllipseItem_Rect((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_set_rect(void* self, void* rect) {
    QGraphicsEllipseItem_SetRect((QGraphicsEllipseItem*)self, (QRectF*)rect);
}

void q_graphicsellipseitem_set_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsEllipseItem_SetRect2((QGraphicsEllipseItem*)self, x, y, w, h);
}

int32_t q_graphicsellipseitem_start_angle(void* self) {
    return QGraphicsEllipseItem_StartAngle((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_set_start_angle(void* self, int angle) {
    QGraphicsEllipseItem_SetStartAngle((QGraphicsEllipseItem*)self, angle);
}

int32_t q_graphicsellipseitem_span_angle(void* self) {
    return QGraphicsEllipseItem_SpanAngle((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_set_span_angle(void* self, int angle) {
    QGraphicsEllipseItem_SetSpanAngle((QGraphicsEllipseItem*)self, angle);
}

QRectF* q_graphicsellipseitem_bounding_rect(void* self) {
    return QGraphicsEllipseItem_BoundingRect((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsEllipseItem_OnBoundingRect((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QRectF* q_graphicsellipseitem_super_bounding_rect(void* self) {
    return QGraphicsEllipseItem_SuperBoundingRect((QGraphicsEllipseItem*)self);
}

QPainterPath* q_graphicsellipseitem_shape(void* self) {
    return QGraphicsEllipseItem_Shape((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsEllipseItem_OnShape((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsellipseitem_super_shape(void* self) {
    return QGraphicsEllipseItem_SuperShape((QGraphicsEllipseItem*)self);
}

bool q_graphicsellipseitem_contains(void* self, void* point) {
    return QGraphicsEllipseItem_Contains((QGraphicsEllipseItem*)self, (QPointF*)point);
}

void q_graphicsellipseitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnContains((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_super_contains(void* self, void* point) {
    return QGraphicsEllipseItem_SuperContains((QGraphicsEllipseItem*)self, (QPointF*)point);
}

void q_graphicsellipseitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsEllipseItem_Paint((QGraphicsEllipseItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsellipseitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsEllipseItem_OnPaint((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsEllipseItem_SuperPaint((QGraphicsEllipseItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicsellipseitem_is_obscured_by(void* self, void* item) {
    return QGraphicsEllipseItem_IsObscuredBy((QGraphicsEllipseItem*)self, (QGraphicsItem*)item);
}

void q_graphicsellipseitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnIsObscuredBy((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsEllipseItem_SuperIsObscuredBy((QGraphicsEllipseItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicsellipseitem_opaque_area(void* self) {
    return QGraphicsEllipseItem_OpaqueArea((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsEllipseItem_OnOpaqueArea((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsellipseitem_super_opaque_area(void* self) {
    return QGraphicsEllipseItem_SuperOpaqueArea((QGraphicsEllipseItem*)self);
}

int32_t q_graphicsellipseitem_type(void* self) {
    return QGraphicsEllipseItem_Type((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsEllipseItem_OnType((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

int32_t q_graphicsellipseitem_super_type(void* self) {
    return QGraphicsEllipseItem_SuperType((QGraphicsEllipseItem*)self);
}

bool q_graphicsellipseitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsEllipseItem_SupportsExtension((QGraphicsEllipseItem*)self, extension);
}

void q_graphicsellipseitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsEllipseItem_OnSupportsExtension((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsEllipseItem_SuperSupportsExtension((QGraphicsEllipseItem*)self, extension);
}

void q_graphicsellipseitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsEllipseItem_SetExtension((QGraphicsEllipseItem*)self, extension, (QVariant*)variant);
}

void q_graphicsellipseitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsEllipseItem_OnSetExtension((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsEllipseItem_SuperSetExtension((QGraphicsEllipseItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicsellipseitem_extension(void* self, void* variant) {
    return QGraphicsEllipseItem_Extension((QGraphicsEllipseItem*)self, (QVariant*)variant);
}

void q_graphicsellipseitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnExtension((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsellipseitem_super_extension(void* self, void* variant) {
    return QGraphicsEllipseItem_SuperExtension((QGraphicsEllipseItem*)self, (QVariant*)variant);
}

QPen* q_graphicsellipseitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_graphicsellipseitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_graphicsellipseitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_graphicsellipseitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

QGraphicsScene* q_graphicsellipseitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsellipseitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsellipseitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsellipseitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsellipseitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsellipseitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsellipseitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsellipseitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsellipseitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsellipseitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsellipseitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsellipseitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsellipseitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsellipseitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsellipseitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsellipseitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsellipseitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsellipseitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsellipseitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsellipseitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsellipseitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsellipseitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsellipseitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsellipseitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsellipseitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsellipseitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsellipseitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsellipseitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsellipseitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsellipseitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsellipseitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsellipseitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsellipseitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsellipseitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsellipseitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsellipseitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsellipseitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsellipseitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsellipseitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsellipseitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsellipseitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsellipseitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsellipseitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsellipseitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsellipseitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsellipseitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsellipseitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsellipseitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsellipseitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsellipseitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsellipseitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsellipseitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsellipseitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsellipseitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsellipseitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsellipseitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsellipseitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsellipseitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsellipseitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsellipseitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsellipseitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsellipseitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsellipseitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsellipseitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsellipseitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsellipseitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsellipseitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsellipseitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsellipseitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsellipseitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsellipseitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsellipseitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsellipseitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsellipseitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsellipseitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsellipseitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsellipseitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsellipseitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsellipseitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsellipseitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsellipseitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsellipseitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsellipseitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsellipseitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsellipseitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsellipseitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsellipseitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsellipseitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsellipseitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsellipseitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsellipseitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsellipseitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsellipseitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsellipseitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsellipseitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsellipseitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsellipseitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsellipseitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsellipseitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsellipseitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsellipseitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsellipseitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsellipseitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsellipseitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsellipseitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsellipseitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsellipseitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsellipseitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsellipseitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsellipseitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsellipseitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsellipseitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsellipseitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsellipseitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsellipseitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsellipseitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsellipseitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsellipseitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicsellipseitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicsellipseitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsellipseitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsellipseitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsellipseitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsellipseitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsellipseitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsellipseitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsellipseitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsellipseitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsellipseitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsellipseitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsellipseitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicsellipseitem_advance(void* self, int phase) {
    QGraphicsEllipseItem_Advance((QGraphicsEllipseItem*)self, phase);
}

void q_graphicsellipseitem_super_advance(void* self, int phase) {
    QGraphicsEllipseItem_SuperAdvance((QGraphicsEllipseItem*)self, phase);
}

void q_graphicsellipseitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsEllipseItem_OnAdvance((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsEllipseItem_CollidesWithItem((QGraphicsEllipseItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsellipseitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsEllipseItem_SuperCollidesWithItem((QGraphicsEllipseItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsellipseitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsEllipseItem_OnCollidesWithItem((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsEllipseItem_CollidesWithPath((QGraphicsEllipseItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicsellipseitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsEllipseItem_SuperCollidesWithPath((QGraphicsEllipseItem*)self, (QPainterPath*)path, mode);
}

void q_graphicsellipseitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsEllipseItem_OnCollidesWithPath((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEllipseItem_SceneEventFilter((QGraphicsEllipseItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsellipseitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEllipseItem_SuperSceneEventFilter((QGraphicsEllipseItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsellipseitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsEllipseItem_OnSceneEventFilter((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

bool q_graphicsellipseitem_scene_event(void* self, void* event) {
    return QGraphicsEllipseItem_SceneEvent((QGraphicsEllipseItem*)self, (QEvent*)event);
}

bool q_graphicsellipseitem_super_scene_event(void* self, void* event) {
    return QGraphicsEllipseItem_SuperSceneEvent((QGraphicsEllipseItem*)self, (QEvent*)event);
}

void q_graphicsellipseitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnSceneEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_context_menu_event(void* self, void* event) {
    QGraphicsEllipseItem_ContextMenuEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsellipseitem_super_context_menu_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperContextMenuEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsellipseitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnContextMenuEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_drag_enter_event(void* self, void* event) {
    QGraphicsEllipseItem_DragEnterEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperDragEnterEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnDragEnterEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_drag_leave_event(void* self, void* event) {
    QGraphicsEllipseItem_DragLeaveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperDragLeaveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnDragLeaveEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_drag_move_event(void* self, void* event) {
    QGraphicsEllipseItem_DragMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_super_drag_move_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperDragMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnDragMoveEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_drop_event(void* self, void* event) {
    QGraphicsEllipseItem_DropEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_super_drop_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperDropEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsellipseitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnDropEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_focus_in_event(void* self, void* event) {
    QGraphicsEllipseItem_FocusInEvent((QGraphicsEllipseItem*)self, (QFocusEvent*)event);
}

void q_graphicsellipseitem_super_focus_in_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperFocusInEvent((QGraphicsEllipseItem*)self, (QFocusEvent*)event);
}

void q_graphicsellipseitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnFocusInEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_focus_out_event(void* self, void* event) {
    QGraphicsEllipseItem_FocusOutEvent((QGraphicsEllipseItem*)self, (QFocusEvent*)event);
}

void q_graphicsellipseitem_super_focus_out_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperFocusOutEvent((QGraphicsEllipseItem*)self, (QFocusEvent*)event);
}

void q_graphicsellipseitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnFocusOutEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_hover_enter_event(void* self, void* event) {
    QGraphicsEllipseItem_HoverEnterEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperHoverEnterEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnHoverEnterEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_hover_move_event(void* self, void* event) {
    QGraphicsEllipseItem_HoverMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_super_hover_move_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperHoverMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnHoverMoveEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_hover_leave_event(void* self, void* event) {
    QGraphicsEllipseItem_HoverLeaveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperHoverLeaveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsellipseitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnHoverLeaveEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_key_press_event(void* self, void* event) {
    QGraphicsEllipseItem_KeyPressEvent((QGraphicsEllipseItem*)self, (QKeyEvent*)event);
}

void q_graphicsellipseitem_super_key_press_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperKeyPressEvent((QGraphicsEllipseItem*)self, (QKeyEvent*)event);
}

void q_graphicsellipseitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnKeyPressEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_key_release_event(void* self, void* event) {
    QGraphicsEllipseItem_KeyReleaseEvent((QGraphicsEllipseItem*)self, (QKeyEvent*)event);
}

void q_graphicsellipseitem_super_key_release_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperKeyReleaseEvent((QGraphicsEllipseItem*)self, (QKeyEvent*)event);
}

void q_graphicsellipseitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnKeyReleaseEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_mouse_press_event(void* self, void* event) {
    QGraphicsEllipseItem_MousePressEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperMousePressEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnMousePressEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_mouse_move_event(void* self, void* event) {
    QGraphicsEllipseItem_MouseMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperMouseMoveEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnMouseMoveEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_mouse_release_event(void* self, void* event) {
    QGraphicsEllipseItem_MouseReleaseEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperMouseReleaseEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnMouseReleaseEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsEllipseItem_MouseDoubleClickEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperMouseDoubleClickEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsellipseitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnMouseDoubleClickEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_wheel_event(void* self, void* event) {
    QGraphicsEllipseItem_WheelEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsellipseitem_super_wheel_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperWheelEvent((QGraphicsEllipseItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsellipseitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnWheelEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_input_method_event(void* self, void* event) {
    QGraphicsEllipseItem_InputMethodEvent((QGraphicsEllipseItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsellipseitem_super_input_method_event(void* self, void* event) {
    QGraphicsEllipseItem_SuperInputMethodEvent((QGraphicsEllipseItem*)self, (QInputMethodEvent*)event);
}

void q_graphicsellipseitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsEllipseItem_OnInputMethodEvent((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsellipseitem_input_method_query(void* self, int32_t query) {
    return QGraphicsEllipseItem_InputMethodQuery((QGraphicsEllipseItem*)self, query);
}

QVariant* q_graphicsellipseitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsEllipseItem_SuperInputMethodQuery((QGraphicsEllipseItem*)self, query);
}

void q_graphicsellipseitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsEllipseItem_OnInputMethodQuery((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

QVariant* q_graphicsellipseitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsEllipseItem_ItemChange((QGraphicsEllipseItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicsellipseitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsEllipseItem_SuperItemChange((QGraphicsEllipseItem*)self, change, (QVariant*)value);
}

void q_graphicsellipseitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsEllipseItem_OnItemChange((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_update_micro_focus(void* self) {
    QGraphicsEllipseItem_UpdateMicroFocus((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_super_update_micro_focus(void* self) {
    QGraphicsEllipseItem_SuperUpdateMicroFocus((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsEllipseItem_OnUpdateMicroFocus((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_add_to_index(void* self) {
    QGraphicsEllipseItem_AddToIndex((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_super_add_to_index(void* self) {
    QGraphicsEllipseItem_SuperAddToIndex((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsEllipseItem_OnAddToIndex((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_remove_from_index(void* self) {
    QGraphicsEllipseItem_RemoveFromIndex((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_super_remove_from_index(void* self) {
    QGraphicsEllipseItem_SuperRemoveFromIndex((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsEllipseItem_OnRemoveFromIndex((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_prepare_geometry_change(void* self) {
    QGraphicsEllipseItem_PrepareGeometryChange((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_super_prepare_geometry_change(void* self) {
    QGraphicsEllipseItem_SuperPrepareGeometryChange((QGraphicsEllipseItem*)self);
}

void q_graphicsellipseitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsEllipseItem_OnPrepareGeometryChange((QGraphicsEllipseItem*)self, (intptr_t)callback);
}

void q_graphicsellipseitem_delete(void* self) {
    QGraphicsEllipseItem_Delete((QGraphicsEllipseItem*)(self));
}

QGraphicsPolygonItem* q_graphicspolygonitem_new() {
    return QGraphicsPolygonItem_new();
}

QGraphicsPolygonItem* q_graphicspolygonitem_new2(void* parent) {
    return QGraphicsPolygonItem_new2((QGraphicsItem*)parent);
}

int32_t q_graphicspolygonitem_fill_rule(void* self) {
    return QGraphicsPolygonItem_FillRule((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_set_fill_rule(void* self, int32_t rule) {
    QGraphicsPolygonItem_SetFillRule((QGraphicsPolygonItem*)self, rule);
}

QRectF* q_graphicspolygonitem_bounding_rect(void* self) {
    return QGraphicsPolygonItem_BoundingRect((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsPolygonItem_OnBoundingRect((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QRectF* q_graphicspolygonitem_super_bounding_rect(void* self) {
    return QGraphicsPolygonItem_SuperBoundingRect((QGraphicsPolygonItem*)self);
}

QPainterPath* q_graphicspolygonitem_shape(void* self) {
    return QGraphicsPolygonItem_Shape((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsPolygonItem_OnShape((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspolygonitem_super_shape(void* self) {
    return QGraphicsPolygonItem_SuperShape((QGraphicsPolygonItem*)self);
}

bool q_graphicspolygonitem_contains(void* self, void* point) {
    return QGraphicsPolygonItem_Contains((QGraphicsPolygonItem*)self, (QPointF*)point);
}

void q_graphicspolygonitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnContains((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_super_contains(void* self, void* point) {
    return QGraphicsPolygonItem_SuperContains((QGraphicsPolygonItem*)self, (QPointF*)point);
}

void q_graphicspolygonitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPolygonItem_Paint((QGraphicsPolygonItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicspolygonitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsPolygonItem_OnPaint((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPolygonItem_SuperPaint((QGraphicsPolygonItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicspolygonitem_is_obscured_by(void* self, void* item) {
    return QGraphicsPolygonItem_IsObscuredBy((QGraphicsPolygonItem*)self, (QGraphicsItem*)item);
}

void q_graphicspolygonitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnIsObscuredBy((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsPolygonItem_SuperIsObscuredBy((QGraphicsPolygonItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicspolygonitem_opaque_area(void* self) {
    return QGraphicsPolygonItem_OpaqueArea((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsPolygonItem_OnOpaqueArea((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspolygonitem_super_opaque_area(void* self) {
    return QGraphicsPolygonItem_SuperOpaqueArea((QGraphicsPolygonItem*)self);
}

int32_t q_graphicspolygonitem_type(void* self) {
    return QGraphicsPolygonItem_Type((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsPolygonItem_OnType((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

int32_t q_graphicspolygonitem_super_type(void* self) {
    return QGraphicsPolygonItem_SuperType((QGraphicsPolygonItem*)self);
}

bool q_graphicspolygonitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsPolygonItem_SupportsExtension((QGraphicsPolygonItem*)self, extension);
}

void q_graphicspolygonitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsPolygonItem_OnSupportsExtension((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsPolygonItem_SuperSupportsExtension((QGraphicsPolygonItem*)self, extension);
}

void q_graphicspolygonitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPolygonItem_SetExtension((QGraphicsPolygonItem*)self, extension, (QVariant*)variant);
}

void q_graphicspolygonitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsPolygonItem_OnSetExtension((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPolygonItem_SuperSetExtension((QGraphicsPolygonItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicspolygonitem_extension(void* self, void* variant) {
    return QGraphicsPolygonItem_Extension((QGraphicsPolygonItem*)self, (QVariant*)variant);
}

void q_graphicspolygonitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnExtension((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspolygonitem_super_extension(void* self, void* variant) {
    return QGraphicsPolygonItem_SuperExtension((QGraphicsPolygonItem*)self, (QVariant*)variant);
}

QPen* q_graphicspolygonitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_graphicspolygonitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_graphicspolygonitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_graphicspolygonitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

QGraphicsScene* q_graphicspolygonitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspolygonitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspolygonitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspolygonitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspolygonitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspolygonitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspolygonitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspolygonitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspolygonitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspolygonitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicspolygonitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicspolygonitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicspolygonitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicspolygonitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicspolygonitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicspolygonitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicspolygonitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicspolygonitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicspolygonitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicspolygonitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicspolygonitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicspolygonitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicspolygonitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicspolygonitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicspolygonitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicspolygonitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicspolygonitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicspolygonitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicspolygonitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicspolygonitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicspolygonitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicspolygonitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspolygonitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspolygonitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspolygonitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspolygonitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicspolygonitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicspolygonitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspolygonitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicspolygonitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspolygonitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicspolygonitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicspolygonitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicspolygonitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicspolygonitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicspolygonitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicspolygonitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicspolygonitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicspolygonitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicspolygonitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicspolygonitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicspolygonitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicspolygonitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicspolygonitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicspolygonitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicspolygonitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicspolygonitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicspolygonitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicspolygonitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicspolygonitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicspolygonitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicspolygonitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicspolygonitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicspolygonitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicspolygonitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicspolygonitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicspolygonitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicspolygonitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicspolygonitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicspolygonitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspolygonitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicspolygonitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicspolygonitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicspolygonitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicspolygonitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicspolygonitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicspolygonitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicspolygonitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspolygonitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspolygonitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspolygonitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspolygonitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspolygonitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspolygonitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspolygonitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspolygonitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspolygonitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspolygonitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspolygonitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspolygonitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspolygonitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspolygonitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspolygonitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspolygonitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspolygonitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspolygonitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspolygonitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspolygonitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspolygonitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspolygonitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspolygonitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicspolygonitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspolygonitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspolygonitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspolygonitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspolygonitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspolygonitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicspolygonitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicspolygonitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicspolygonitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicspolygonitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicspolygonitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicspolygonitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicspolygonitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicspolygonitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspolygonitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspolygonitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicspolygonitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicspolygonitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicspolygonitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicspolygonitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspolygonitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicspolygonitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicspolygonitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicspolygonitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicspolygonitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicspolygonitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicspolygonitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicspolygonitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspolygonitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspolygonitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicspolygonitem_advance(void* self, int phase) {
    QGraphicsPolygonItem_Advance((QGraphicsPolygonItem*)self, phase);
}

void q_graphicspolygonitem_super_advance(void* self, int phase) {
    QGraphicsPolygonItem_SuperAdvance((QGraphicsPolygonItem*)self, phase);
}

void q_graphicspolygonitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsPolygonItem_OnAdvance((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPolygonItem_CollidesWithItem((QGraphicsPolygonItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicspolygonitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPolygonItem_SuperCollidesWithItem((QGraphicsPolygonItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicspolygonitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPolygonItem_OnCollidesWithItem((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPolygonItem_CollidesWithPath((QGraphicsPolygonItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicspolygonitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPolygonItem_SuperCollidesWithPath((QGraphicsPolygonItem*)self, (QPainterPath*)path, mode);
}

void q_graphicspolygonitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPolygonItem_OnCollidesWithPath((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPolygonItem_SceneEventFilter((QGraphicsPolygonItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicspolygonitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPolygonItem_SuperSceneEventFilter((QGraphicsPolygonItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicspolygonitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsPolygonItem_OnSceneEventFilter((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

bool q_graphicspolygonitem_scene_event(void* self, void* event) {
    return QGraphicsPolygonItem_SceneEvent((QGraphicsPolygonItem*)self, (QEvent*)event);
}

bool q_graphicspolygonitem_super_scene_event(void* self, void* event) {
    return QGraphicsPolygonItem_SuperSceneEvent((QGraphicsPolygonItem*)self, (QEvent*)event);
}

void q_graphicspolygonitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnSceneEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_context_menu_event(void* self, void* event) {
    QGraphicsPolygonItem_ContextMenuEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspolygonitem_super_context_menu_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperContextMenuEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspolygonitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnContextMenuEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_drag_enter_event(void* self, void* event) {
    QGraphicsPolygonItem_DragEnterEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperDragEnterEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnDragEnterEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_drag_leave_event(void* self, void* event) {
    QGraphicsPolygonItem_DragLeaveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperDragLeaveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnDragLeaveEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_drag_move_event(void* self, void* event) {
    QGraphicsPolygonItem_DragMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_super_drag_move_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperDragMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnDragMoveEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_drop_event(void* self, void* event) {
    QGraphicsPolygonItem_DropEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_super_drop_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperDropEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspolygonitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnDropEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_focus_in_event(void* self, void* event) {
    QGraphicsPolygonItem_FocusInEvent((QGraphicsPolygonItem*)self, (QFocusEvent*)event);
}

void q_graphicspolygonitem_super_focus_in_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperFocusInEvent((QGraphicsPolygonItem*)self, (QFocusEvent*)event);
}

void q_graphicspolygonitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnFocusInEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_focus_out_event(void* self, void* event) {
    QGraphicsPolygonItem_FocusOutEvent((QGraphicsPolygonItem*)self, (QFocusEvent*)event);
}

void q_graphicspolygonitem_super_focus_out_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperFocusOutEvent((QGraphicsPolygonItem*)self, (QFocusEvent*)event);
}

void q_graphicspolygonitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnFocusOutEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_hover_enter_event(void* self, void* event) {
    QGraphicsPolygonItem_HoverEnterEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperHoverEnterEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnHoverEnterEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_hover_move_event(void* self, void* event) {
    QGraphicsPolygonItem_HoverMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_super_hover_move_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperHoverMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnHoverMoveEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_hover_leave_event(void* self, void* event) {
    QGraphicsPolygonItem_HoverLeaveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperHoverLeaveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspolygonitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnHoverLeaveEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_key_press_event(void* self, void* event) {
    QGraphicsPolygonItem_KeyPressEvent((QGraphicsPolygonItem*)self, (QKeyEvent*)event);
}

void q_graphicspolygonitem_super_key_press_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperKeyPressEvent((QGraphicsPolygonItem*)self, (QKeyEvent*)event);
}

void q_graphicspolygonitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnKeyPressEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_key_release_event(void* self, void* event) {
    QGraphicsPolygonItem_KeyReleaseEvent((QGraphicsPolygonItem*)self, (QKeyEvent*)event);
}

void q_graphicspolygonitem_super_key_release_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperKeyReleaseEvent((QGraphicsPolygonItem*)self, (QKeyEvent*)event);
}

void q_graphicspolygonitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnKeyReleaseEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_mouse_press_event(void* self, void* event) {
    QGraphicsPolygonItem_MousePressEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperMousePressEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnMousePressEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_mouse_move_event(void* self, void* event) {
    QGraphicsPolygonItem_MouseMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperMouseMoveEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnMouseMoveEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_mouse_release_event(void* self, void* event) {
    QGraphicsPolygonItem_MouseReleaseEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperMouseReleaseEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnMouseReleaseEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsPolygonItem_MouseDoubleClickEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperMouseDoubleClickEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspolygonitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnMouseDoubleClickEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_wheel_event(void* self, void* event) {
    QGraphicsPolygonItem_WheelEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspolygonitem_super_wheel_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperWheelEvent((QGraphicsPolygonItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspolygonitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnWheelEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_input_method_event(void* self, void* event) {
    QGraphicsPolygonItem_InputMethodEvent((QGraphicsPolygonItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspolygonitem_super_input_method_event(void* self, void* event) {
    QGraphicsPolygonItem_SuperInputMethodEvent((QGraphicsPolygonItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspolygonitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPolygonItem_OnInputMethodEvent((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspolygonitem_input_method_query(void* self, int32_t query) {
    return QGraphicsPolygonItem_InputMethodQuery((QGraphicsPolygonItem*)self, query);
}

QVariant* q_graphicspolygonitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsPolygonItem_SuperInputMethodQuery((QGraphicsPolygonItem*)self, query);
}

void q_graphicspolygonitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsPolygonItem_OnInputMethodQuery((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspolygonitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPolygonItem_ItemChange((QGraphicsPolygonItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicspolygonitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPolygonItem_SuperItemChange((QGraphicsPolygonItem*)self, change, (QVariant*)value);
}

void q_graphicspolygonitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsPolygonItem_OnItemChange((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_update_micro_focus(void* self) {
    QGraphicsPolygonItem_UpdateMicroFocus((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_super_update_micro_focus(void* self) {
    QGraphicsPolygonItem_SuperUpdateMicroFocus((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsPolygonItem_OnUpdateMicroFocus((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_add_to_index(void* self) {
    QGraphicsPolygonItem_AddToIndex((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_super_add_to_index(void* self) {
    QGraphicsPolygonItem_SuperAddToIndex((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsPolygonItem_OnAddToIndex((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_remove_from_index(void* self) {
    QGraphicsPolygonItem_RemoveFromIndex((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_super_remove_from_index(void* self) {
    QGraphicsPolygonItem_SuperRemoveFromIndex((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsPolygonItem_OnRemoveFromIndex((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_prepare_geometry_change(void* self) {
    QGraphicsPolygonItem_PrepareGeometryChange((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_super_prepare_geometry_change(void* self) {
    QGraphicsPolygonItem_SuperPrepareGeometryChange((QGraphicsPolygonItem*)self);
}

void q_graphicspolygonitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsPolygonItem_OnPrepareGeometryChange((QGraphicsPolygonItem*)self, (intptr_t)callback);
}

void q_graphicspolygonitem_delete(void* self) {
    QGraphicsPolygonItem_Delete((QGraphicsPolygonItem*)(self));
}

QGraphicsLineItem* q_graphicslineitem_new() {
    return QGraphicsLineItem_new();
}

QGraphicsLineItem* q_graphicslineitem_new2(void* line) {
    return QGraphicsLineItem_new2((QLineF*)line);
}

QGraphicsLineItem* q_graphicslineitem_new3(double x1, double y1, double x2, double y2) {
    return QGraphicsLineItem_new3(x1, y1, x2, y2);
}

QGraphicsLineItem* q_graphicslineitem_new4(void* parent) {
    return QGraphicsLineItem_new4((QGraphicsItem*)parent);
}

QGraphicsLineItem* q_graphicslineitem_new5(void* line, void* parent) {
    return QGraphicsLineItem_new5((QLineF*)line, (QGraphicsItem*)parent);
}

QGraphicsLineItem* q_graphicslineitem_new6(double x1, double y1, double x2, double y2, void* parent) {
    return QGraphicsLineItem_new6(x1, y1, x2, y2, (QGraphicsItem*)parent);
}

QPen* q_graphicslineitem_pen(void* self) {
    return QGraphicsLineItem_Pen((QGraphicsLineItem*)self);
}

void q_graphicslineitem_set_pen(void* self, void* pen) {
    QGraphicsLineItem_SetPen((QGraphicsLineItem*)self, (QPen*)pen);
}

QLineF* q_graphicslineitem_line(void* self) {
    return QGraphicsLineItem_Line((QGraphicsLineItem*)self);
}

void q_graphicslineitem_set_line(void* self, void* line) {
    QGraphicsLineItem_SetLine((QGraphicsLineItem*)self, (QLineF*)line);
}

void q_graphicslineitem_set_line2(void* self, double x1, double y1, double x2, double y2) {
    QGraphicsLineItem_SetLine2((QGraphicsLineItem*)self, x1, y1, x2, y2);
}

QRectF* q_graphicslineitem_bounding_rect(void* self) {
    return QGraphicsLineItem_BoundingRect((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsLineItem_OnBoundingRect((QGraphicsLineItem*)self, (intptr_t)callback);
}

QRectF* q_graphicslineitem_super_bounding_rect(void* self) {
    return QGraphicsLineItem_SuperBoundingRect((QGraphicsLineItem*)self);
}

QPainterPath* q_graphicslineitem_shape(void* self) {
    return QGraphicsLineItem_Shape((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsLineItem_OnShape((QGraphicsLineItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicslineitem_super_shape(void* self) {
    return QGraphicsLineItem_SuperShape((QGraphicsLineItem*)self);
}

bool q_graphicslineitem_contains(void* self, void* point) {
    return QGraphicsLineItem_Contains((QGraphicsLineItem*)self, (QPointF*)point);
}

void q_graphicslineitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsLineItem_OnContains((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_super_contains(void* self, void* point) {
    return QGraphicsLineItem_SuperContains((QGraphicsLineItem*)self, (QPointF*)point);
}

void q_graphicslineitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsLineItem_Paint((QGraphicsLineItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicslineitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsLineItem_OnPaint((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsLineItem_SuperPaint((QGraphicsLineItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicslineitem_is_obscured_by(void* self, void* item) {
    return QGraphicsLineItem_IsObscuredBy((QGraphicsLineItem*)self, (QGraphicsItem*)item);
}

void q_graphicslineitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsLineItem_OnIsObscuredBy((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsLineItem_SuperIsObscuredBy((QGraphicsLineItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicslineitem_opaque_area(void* self) {
    return QGraphicsLineItem_OpaqueArea((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsLineItem_OnOpaqueArea((QGraphicsLineItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicslineitem_super_opaque_area(void* self) {
    return QGraphicsLineItem_SuperOpaqueArea((QGraphicsLineItem*)self);
}

int32_t q_graphicslineitem_type(void* self) {
    return QGraphicsLineItem_Type((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsLineItem_OnType((QGraphicsLineItem*)self, (intptr_t)callback);
}

int32_t q_graphicslineitem_super_type(void* self) {
    return QGraphicsLineItem_SuperType((QGraphicsLineItem*)self);
}

bool q_graphicslineitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsLineItem_SupportsExtension((QGraphicsLineItem*)self, extension);
}

void q_graphicslineitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsLineItem_OnSupportsExtension((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsLineItem_SuperSupportsExtension((QGraphicsLineItem*)self, extension);
}

void q_graphicslineitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsLineItem_SetExtension((QGraphicsLineItem*)self, extension, (QVariant*)variant);
}

void q_graphicslineitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsLineItem_OnSetExtension((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsLineItem_SuperSetExtension((QGraphicsLineItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicslineitem_extension(void* self, void* variant) {
    return QGraphicsLineItem_Extension((QGraphicsLineItem*)self, (QVariant*)variant);
}

void q_graphicslineitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsLineItem_OnExtension((QGraphicsLineItem*)self, (intptr_t)callback);
}

QVariant* q_graphicslineitem_super_extension(void* self, void* variant) {
    return QGraphicsLineItem_SuperExtension((QGraphicsLineItem*)self, (QVariant*)variant);
}

QGraphicsScene* q_graphicslineitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicslineitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicslineitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicslineitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicslineitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicslineitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicslineitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicslineitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicslineitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicslineitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicslineitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicslineitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicslineitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicslineitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicslineitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicslineitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicslineitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicslineitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicslineitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicslineitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicslineitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicslineitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicslineitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicslineitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicslineitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicslineitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicslineitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicslineitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicslineitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicslineitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicslineitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicslineitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicslineitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicslineitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicslineitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicslineitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicslineitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicslineitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicslineitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicslineitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicslineitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicslineitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicslineitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicslineitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicslineitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicslineitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicslineitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicslineitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicslineitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicslineitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicslineitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicslineitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicslineitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicslineitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicslineitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicslineitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicslineitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicslineitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicslineitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicslineitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicslineitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicslineitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicslineitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicslineitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicslineitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicslineitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicslineitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicslineitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicslineitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicslineitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicslineitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicslineitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicslineitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicslineitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicslineitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicslineitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicslineitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicslineitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicslineitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicslineitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicslineitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicslineitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicslineitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicslineitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicslineitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicslineitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicslineitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicslineitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicslineitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicslineitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicslineitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicslineitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicslineitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicslineitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicslineitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicslineitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicslineitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicslineitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicslineitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicslineitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicslineitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicslineitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicslineitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicslineitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicslineitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicslineitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicslineitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicslineitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicslineitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicslineitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicslineitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicslineitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicslineitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicslineitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicslineitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicslineitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicslineitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicslineitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicslineitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicslineitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicslineitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicslineitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicslineitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicslineitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicslineitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicslineitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicslineitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicslineitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicslineitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicslineitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicslineitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicslineitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicslineitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicslineitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicslineitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicslineitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicslineitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicslineitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicslineitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicslineitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicslineitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicslineitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicslineitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicslineitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicslineitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicslineitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicslineitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicslineitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicslineitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicslineitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicslineitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicslineitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicslineitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicslineitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicslineitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicslineitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicslineitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicslineitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicslineitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicslineitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicslineitem_advance(void* self, int phase) {
    QGraphicsLineItem_Advance((QGraphicsLineItem*)self, phase);
}

void q_graphicslineitem_super_advance(void* self, int phase) {
    QGraphicsLineItem_SuperAdvance((QGraphicsLineItem*)self, phase);
}

void q_graphicslineitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsLineItem_OnAdvance((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsLineItem_CollidesWithItem((QGraphicsLineItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicslineitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsLineItem_SuperCollidesWithItem((QGraphicsLineItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicslineitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsLineItem_OnCollidesWithItem((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsLineItem_CollidesWithPath((QGraphicsLineItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicslineitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsLineItem_SuperCollidesWithPath((QGraphicsLineItem*)self, (QPainterPath*)path, mode);
}

void q_graphicslineitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsLineItem_OnCollidesWithPath((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsLineItem_SceneEventFilter((QGraphicsLineItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicslineitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsLineItem_SuperSceneEventFilter((QGraphicsLineItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicslineitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsLineItem_OnSceneEventFilter((QGraphicsLineItem*)self, (intptr_t)callback);
}

bool q_graphicslineitem_scene_event(void* self, void* event) {
    return QGraphicsLineItem_SceneEvent((QGraphicsLineItem*)self, (QEvent*)event);
}

bool q_graphicslineitem_super_scene_event(void* self, void* event) {
    return QGraphicsLineItem_SuperSceneEvent((QGraphicsLineItem*)self, (QEvent*)event);
}

void q_graphicslineitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsLineItem_OnSceneEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_context_menu_event(void* self, void* event) {
    QGraphicsLineItem_ContextMenuEvent((QGraphicsLineItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicslineitem_super_context_menu_event(void* self, void* event) {
    QGraphicsLineItem_SuperContextMenuEvent((QGraphicsLineItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicslineitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnContextMenuEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_drag_enter_event(void* self, void* event) {
    QGraphicsLineItem_DragEnterEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsLineItem_SuperDragEnterEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnDragEnterEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_drag_leave_event(void* self, void* event) {
    QGraphicsLineItem_DragLeaveEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsLineItem_SuperDragLeaveEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnDragLeaveEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_drag_move_event(void* self, void* event) {
    QGraphicsLineItem_DragMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_super_drag_move_event(void* self, void* event) {
    QGraphicsLineItem_SuperDragMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnDragMoveEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_drop_event(void* self, void* event) {
    QGraphicsLineItem_DropEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_super_drop_event(void* self, void* event) {
    QGraphicsLineItem_SuperDropEvent((QGraphicsLineItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicslineitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnDropEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_focus_in_event(void* self, void* event) {
    QGraphicsLineItem_FocusInEvent((QGraphicsLineItem*)self, (QFocusEvent*)event);
}

void q_graphicslineitem_super_focus_in_event(void* self, void* event) {
    QGraphicsLineItem_SuperFocusInEvent((QGraphicsLineItem*)self, (QFocusEvent*)event);
}

void q_graphicslineitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnFocusInEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_focus_out_event(void* self, void* event) {
    QGraphicsLineItem_FocusOutEvent((QGraphicsLineItem*)self, (QFocusEvent*)event);
}

void q_graphicslineitem_super_focus_out_event(void* self, void* event) {
    QGraphicsLineItem_SuperFocusOutEvent((QGraphicsLineItem*)self, (QFocusEvent*)event);
}

void q_graphicslineitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnFocusOutEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_hover_enter_event(void* self, void* event) {
    QGraphicsLineItem_HoverEnterEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsLineItem_SuperHoverEnterEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnHoverEnterEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_hover_move_event(void* self, void* event) {
    QGraphicsLineItem_HoverMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_super_hover_move_event(void* self, void* event) {
    QGraphicsLineItem_SuperHoverMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnHoverMoveEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_hover_leave_event(void* self, void* event) {
    QGraphicsLineItem_HoverLeaveEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsLineItem_SuperHoverLeaveEvent((QGraphicsLineItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicslineitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnHoverLeaveEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_key_press_event(void* self, void* event) {
    QGraphicsLineItem_KeyPressEvent((QGraphicsLineItem*)self, (QKeyEvent*)event);
}

void q_graphicslineitem_super_key_press_event(void* self, void* event) {
    QGraphicsLineItem_SuperKeyPressEvent((QGraphicsLineItem*)self, (QKeyEvent*)event);
}

void q_graphicslineitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnKeyPressEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_key_release_event(void* self, void* event) {
    QGraphicsLineItem_KeyReleaseEvent((QGraphicsLineItem*)self, (QKeyEvent*)event);
}

void q_graphicslineitem_super_key_release_event(void* self, void* event) {
    QGraphicsLineItem_SuperKeyReleaseEvent((QGraphicsLineItem*)self, (QKeyEvent*)event);
}

void q_graphicslineitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnKeyReleaseEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_mouse_press_event(void* self, void* event) {
    QGraphicsLineItem_MousePressEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsLineItem_SuperMousePressEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnMousePressEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_mouse_move_event(void* self, void* event) {
    QGraphicsLineItem_MouseMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsLineItem_SuperMouseMoveEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnMouseMoveEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_mouse_release_event(void* self, void* event) {
    QGraphicsLineItem_MouseReleaseEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsLineItem_SuperMouseReleaseEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnMouseReleaseEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsLineItem_MouseDoubleClickEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsLineItem_SuperMouseDoubleClickEvent((QGraphicsLineItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicslineitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnMouseDoubleClickEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_wheel_event(void* self, void* event) {
    QGraphicsLineItem_WheelEvent((QGraphicsLineItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicslineitem_super_wheel_event(void* self, void* event) {
    QGraphicsLineItem_SuperWheelEvent((QGraphicsLineItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicslineitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnWheelEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_input_method_event(void* self, void* event) {
    QGraphicsLineItem_InputMethodEvent((QGraphicsLineItem*)self, (QInputMethodEvent*)event);
}

void q_graphicslineitem_super_input_method_event(void* self, void* event) {
    QGraphicsLineItem_SuperInputMethodEvent((QGraphicsLineItem*)self, (QInputMethodEvent*)event);
}

void q_graphicslineitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsLineItem_OnInputMethodEvent((QGraphicsLineItem*)self, (intptr_t)callback);
}

QVariant* q_graphicslineitem_input_method_query(void* self, int32_t query) {
    return QGraphicsLineItem_InputMethodQuery((QGraphicsLineItem*)self, query);
}

QVariant* q_graphicslineitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsLineItem_SuperInputMethodQuery((QGraphicsLineItem*)self, query);
}

void q_graphicslineitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsLineItem_OnInputMethodQuery((QGraphicsLineItem*)self, (intptr_t)callback);
}

QVariant* q_graphicslineitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsLineItem_ItemChange((QGraphicsLineItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicslineitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsLineItem_SuperItemChange((QGraphicsLineItem*)self, change, (QVariant*)value);
}

void q_graphicslineitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsLineItem_OnItemChange((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_update_micro_focus(void* self) {
    QGraphicsLineItem_UpdateMicroFocus((QGraphicsLineItem*)self);
}

void q_graphicslineitem_super_update_micro_focus(void* self) {
    QGraphicsLineItem_SuperUpdateMicroFocus((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsLineItem_OnUpdateMicroFocus((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_add_to_index(void* self) {
    QGraphicsLineItem_AddToIndex((QGraphicsLineItem*)self);
}

void q_graphicslineitem_super_add_to_index(void* self) {
    QGraphicsLineItem_SuperAddToIndex((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsLineItem_OnAddToIndex((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_remove_from_index(void* self) {
    QGraphicsLineItem_RemoveFromIndex((QGraphicsLineItem*)self);
}

void q_graphicslineitem_super_remove_from_index(void* self) {
    QGraphicsLineItem_SuperRemoveFromIndex((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsLineItem_OnRemoveFromIndex((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_prepare_geometry_change(void* self) {
    QGraphicsLineItem_PrepareGeometryChange((QGraphicsLineItem*)self);
}

void q_graphicslineitem_super_prepare_geometry_change(void* self) {
    QGraphicsLineItem_SuperPrepareGeometryChange((QGraphicsLineItem*)self);
}

void q_graphicslineitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsLineItem_OnPrepareGeometryChange((QGraphicsLineItem*)self, (intptr_t)callback);
}

void q_graphicslineitem_delete(void* self) {
    QGraphicsLineItem_Delete((QGraphicsLineItem*)(self));
}

QGraphicsPixmapItem* q_graphicspixmapitem_new() {
    return QGraphicsPixmapItem_new();
}

QGraphicsPixmapItem* q_graphicspixmapitem_new2(void* pixmap) {
    return QGraphicsPixmapItem_new2((QPixmap*)pixmap);
}

QGraphicsPixmapItem* q_graphicspixmapitem_new3(void* parent) {
    return QGraphicsPixmapItem_new3((QGraphicsItem*)parent);
}

QGraphicsPixmapItem* q_graphicspixmapitem_new4(void* pixmap, void* parent) {
    return QGraphicsPixmapItem_new4((QPixmap*)pixmap, (QGraphicsItem*)parent);
}

QPixmap* q_graphicspixmapitem_pixmap(void* self) {
    return QGraphicsPixmapItem_Pixmap((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_set_pixmap(void* self, void* pixmap) {
    QGraphicsPixmapItem_SetPixmap((QGraphicsPixmapItem*)self, (QPixmap*)pixmap);
}

int32_t q_graphicspixmapitem_transformation_mode(void* self) {
    return QGraphicsPixmapItem_TransformationMode((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_set_transformation_mode(void* self, int32_t mode) {
    QGraphicsPixmapItem_SetTransformationMode((QGraphicsPixmapItem*)self, mode);
}

QPointF* q_graphicspixmapitem_offset(void* self) {
    return QGraphicsPixmapItem_Offset((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_set_offset(void* self, void* offset) {
    QGraphicsPixmapItem_SetOffset((QGraphicsPixmapItem*)self, (QPointF*)offset);
}

void q_graphicspixmapitem_set_offset2(void* self, double x, double y) {
    QGraphicsPixmapItem_SetOffset2((QGraphicsPixmapItem*)self, x, y);
}

QRectF* q_graphicspixmapitem_bounding_rect(void* self) {
    return QGraphicsPixmapItem_BoundingRect((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsPixmapItem_OnBoundingRect((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QRectF* q_graphicspixmapitem_super_bounding_rect(void* self) {
    return QGraphicsPixmapItem_SuperBoundingRect((QGraphicsPixmapItem*)self);
}

QPainterPath* q_graphicspixmapitem_shape(void* self) {
    return QGraphicsPixmapItem_Shape((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsPixmapItem_OnShape((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspixmapitem_super_shape(void* self) {
    return QGraphicsPixmapItem_SuperShape((QGraphicsPixmapItem*)self);
}

bool q_graphicspixmapitem_contains(void* self, void* point) {
    return QGraphicsPixmapItem_Contains((QGraphicsPixmapItem*)self, (QPointF*)point);
}

void q_graphicspixmapitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnContains((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_super_contains(void* self, void* point) {
    return QGraphicsPixmapItem_SuperContains((QGraphicsPixmapItem*)self, (QPointF*)point);
}

void q_graphicspixmapitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPixmapItem_Paint((QGraphicsPixmapItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicspixmapitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsPixmapItem_OnPaint((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsPixmapItem_SuperPaint((QGraphicsPixmapItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicspixmapitem_is_obscured_by(void* self, void* item) {
    return QGraphicsPixmapItem_IsObscuredBy((QGraphicsPixmapItem*)self, (QGraphicsItem*)item);
}

void q_graphicspixmapitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnIsObscuredBy((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsPixmapItem_SuperIsObscuredBy((QGraphicsPixmapItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicspixmapitem_opaque_area(void* self) {
    return QGraphicsPixmapItem_OpaqueArea((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsPixmapItem_OnOpaqueArea((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicspixmapitem_super_opaque_area(void* self) {
    return QGraphicsPixmapItem_SuperOpaqueArea((QGraphicsPixmapItem*)self);
}

int32_t q_graphicspixmapitem_type(void* self) {
    return QGraphicsPixmapItem_Type((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsPixmapItem_OnType((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

int32_t q_graphicspixmapitem_super_type(void* self) {
    return QGraphicsPixmapItem_SuperType((QGraphicsPixmapItem*)self);
}

int32_t q_graphicspixmapitem_shape_mode(void* self) {
    return QGraphicsPixmapItem_ShapeMode((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_set_shape_mode(void* self, int32_t mode) {
    QGraphicsPixmapItem_SetShapeMode((QGraphicsPixmapItem*)self, mode);
}

bool q_graphicspixmapitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsPixmapItem_SupportsExtension((QGraphicsPixmapItem*)self, extension);
}

void q_graphicspixmapitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsPixmapItem_OnSupportsExtension((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsPixmapItem_SuperSupportsExtension((QGraphicsPixmapItem*)self, extension);
}

void q_graphicspixmapitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPixmapItem_SetExtension((QGraphicsPixmapItem*)self, extension, (QVariant*)variant);
}

void q_graphicspixmapitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsPixmapItem_OnSetExtension((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsPixmapItem_SuperSetExtension((QGraphicsPixmapItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicspixmapitem_extension(void* self, void* variant) {
    return QGraphicsPixmapItem_Extension((QGraphicsPixmapItem*)self, (QVariant*)variant);
}

void q_graphicspixmapitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnExtension((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspixmapitem_super_extension(void* self, void* variant) {
    return QGraphicsPixmapItem_SuperExtension((QGraphicsPixmapItem*)self, (QVariant*)variant);
}

QGraphicsScene* q_graphicspixmapitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspixmapitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspixmapitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspixmapitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspixmapitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspixmapitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicspixmapitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspixmapitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspixmapitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicspixmapitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicspixmapitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicspixmapitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicspixmapitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicspixmapitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicspixmapitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicspixmapitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicspixmapitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicspixmapitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicspixmapitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicspixmapitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicspixmapitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicspixmapitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicspixmapitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicspixmapitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicspixmapitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicspixmapitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicspixmapitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicspixmapitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicspixmapitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicspixmapitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicspixmapitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicspixmapitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspixmapitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspixmapitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspixmapitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicspixmapitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicspixmapitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicspixmapitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspixmapitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicspixmapitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicspixmapitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicspixmapitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicspixmapitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicspixmapitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicspixmapitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicspixmapitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicspixmapitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicspixmapitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicspixmapitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicspixmapitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicspixmapitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicspixmapitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicspixmapitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicspixmapitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicspixmapitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicspixmapitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicspixmapitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicspixmapitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicspixmapitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicspixmapitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicspixmapitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicspixmapitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicspixmapitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicspixmapitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicspixmapitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicspixmapitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicspixmapitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicspixmapitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicspixmapitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicspixmapitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicspixmapitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicspixmapitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicspixmapitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicspixmapitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicspixmapitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicspixmapitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicspixmapitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicspixmapitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspixmapitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspixmapitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspixmapitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspixmapitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspixmapitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspixmapitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspixmapitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspixmapitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspixmapitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicspixmapitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicspixmapitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicspixmapitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicspixmapitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicspixmapitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicspixmapitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicspixmapitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicspixmapitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicspixmapitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspixmapitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspixmapitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspixmapitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspixmapitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspixmapitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicspixmapitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicspixmapitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicspixmapitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicspixmapitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicspixmapitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicspixmapitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicspixmapitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicspixmapitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicspixmapitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicspixmapitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicspixmapitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicspixmapitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicspixmapitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicspixmapitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspixmapitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicspixmapitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicspixmapitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicspixmapitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicspixmapitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicspixmapitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspixmapitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicspixmapitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicspixmapitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicspixmapitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicspixmapitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicspixmapitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicspixmapitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicspixmapitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspixmapitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicspixmapitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicspixmapitem_advance(void* self, int phase) {
    QGraphicsPixmapItem_Advance((QGraphicsPixmapItem*)self, phase);
}

void q_graphicspixmapitem_super_advance(void* self, int phase) {
    QGraphicsPixmapItem_SuperAdvance((QGraphicsPixmapItem*)self, phase);
}

void q_graphicspixmapitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsPixmapItem_OnAdvance((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPixmapItem_CollidesWithItem((QGraphicsPixmapItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicspixmapitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsPixmapItem_SuperCollidesWithItem((QGraphicsPixmapItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicspixmapitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPixmapItem_OnCollidesWithItem((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPixmapItem_CollidesWithPath((QGraphicsPixmapItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicspixmapitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsPixmapItem_SuperCollidesWithPath((QGraphicsPixmapItem*)self, (QPainterPath*)path, mode);
}

void q_graphicspixmapitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsPixmapItem_OnCollidesWithPath((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPixmapItem_SceneEventFilter((QGraphicsPixmapItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicspixmapitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsPixmapItem_SuperSceneEventFilter((QGraphicsPixmapItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicspixmapitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsPixmapItem_OnSceneEventFilter((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

bool q_graphicspixmapitem_scene_event(void* self, void* event) {
    return QGraphicsPixmapItem_SceneEvent((QGraphicsPixmapItem*)self, (QEvent*)event);
}

bool q_graphicspixmapitem_super_scene_event(void* self, void* event) {
    return QGraphicsPixmapItem_SuperSceneEvent((QGraphicsPixmapItem*)self, (QEvent*)event);
}

void q_graphicspixmapitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnSceneEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_context_menu_event(void* self, void* event) {
    QGraphicsPixmapItem_ContextMenuEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspixmapitem_super_context_menu_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperContextMenuEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicspixmapitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnContextMenuEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_drag_enter_event(void* self, void* event) {
    QGraphicsPixmapItem_DragEnterEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperDragEnterEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnDragEnterEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_drag_leave_event(void* self, void* event) {
    QGraphicsPixmapItem_DragLeaveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperDragLeaveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnDragLeaveEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_drag_move_event(void* self, void* event) {
    QGraphicsPixmapItem_DragMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_super_drag_move_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperDragMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnDragMoveEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_drop_event(void* self, void* event) {
    QGraphicsPixmapItem_DropEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_super_drop_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperDropEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicspixmapitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnDropEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_focus_in_event(void* self, void* event) {
    QGraphicsPixmapItem_FocusInEvent((QGraphicsPixmapItem*)self, (QFocusEvent*)event);
}

void q_graphicspixmapitem_super_focus_in_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperFocusInEvent((QGraphicsPixmapItem*)self, (QFocusEvent*)event);
}

void q_graphicspixmapitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnFocusInEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_focus_out_event(void* self, void* event) {
    QGraphicsPixmapItem_FocusOutEvent((QGraphicsPixmapItem*)self, (QFocusEvent*)event);
}

void q_graphicspixmapitem_super_focus_out_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperFocusOutEvent((QGraphicsPixmapItem*)self, (QFocusEvent*)event);
}

void q_graphicspixmapitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnFocusOutEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_hover_enter_event(void* self, void* event) {
    QGraphicsPixmapItem_HoverEnterEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperHoverEnterEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnHoverEnterEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_hover_move_event(void* self, void* event) {
    QGraphicsPixmapItem_HoverMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_super_hover_move_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperHoverMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnHoverMoveEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_hover_leave_event(void* self, void* event) {
    QGraphicsPixmapItem_HoverLeaveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperHoverLeaveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicspixmapitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnHoverLeaveEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_key_press_event(void* self, void* event) {
    QGraphicsPixmapItem_KeyPressEvent((QGraphicsPixmapItem*)self, (QKeyEvent*)event);
}

void q_graphicspixmapitem_super_key_press_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperKeyPressEvent((QGraphicsPixmapItem*)self, (QKeyEvent*)event);
}

void q_graphicspixmapitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnKeyPressEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_key_release_event(void* self, void* event) {
    QGraphicsPixmapItem_KeyReleaseEvent((QGraphicsPixmapItem*)self, (QKeyEvent*)event);
}

void q_graphicspixmapitem_super_key_release_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperKeyReleaseEvent((QGraphicsPixmapItem*)self, (QKeyEvent*)event);
}

void q_graphicspixmapitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnKeyReleaseEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_mouse_press_event(void* self, void* event) {
    QGraphicsPixmapItem_MousePressEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperMousePressEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnMousePressEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_mouse_move_event(void* self, void* event) {
    QGraphicsPixmapItem_MouseMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperMouseMoveEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnMouseMoveEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_mouse_release_event(void* self, void* event) {
    QGraphicsPixmapItem_MouseReleaseEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperMouseReleaseEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnMouseReleaseEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsPixmapItem_MouseDoubleClickEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperMouseDoubleClickEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicspixmapitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnMouseDoubleClickEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_wheel_event(void* self, void* event) {
    QGraphicsPixmapItem_WheelEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspixmapitem_super_wheel_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperWheelEvent((QGraphicsPixmapItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicspixmapitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnWheelEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_input_method_event(void* self, void* event) {
    QGraphicsPixmapItem_InputMethodEvent((QGraphicsPixmapItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspixmapitem_super_input_method_event(void* self, void* event) {
    QGraphicsPixmapItem_SuperInputMethodEvent((QGraphicsPixmapItem*)self, (QInputMethodEvent*)event);
}

void q_graphicspixmapitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsPixmapItem_OnInputMethodEvent((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspixmapitem_input_method_query(void* self, int32_t query) {
    return QGraphicsPixmapItem_InputMethodQuery((QGraphicsPixmapItem*)self, query);
}

QVariant* q_graphicspixmapitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsPixmapItem_SuperInputMethodQuery((QGraphicsPixmapItem*)self, query);
}

void q_graphicspixmapitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsPixmapItem_OnInputMethodQuery((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

QVariant* q_graphicspixmapitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPixmapItem_ItemChange((QGraphicsPixmapItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicspixmapitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsPixmapItem_SuperItemChange((QGraphicsPixmapItem*)self, change, (QVariant*)value);
}

void q_graphicspixmapitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsPixmapItem_OnItemChange((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_update_micro_focus(void* self) {
    QGraphicsPixmapItem_UpdateMicroFocus((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_super_update_micro_focus(void* self) {
    QGraphicsPixmapItem_SuperUpdateMicroFocus((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsPixmapItem_OnUpdateMicroFocus((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_add_to_index(void* self) {
    QGraphicsPixmapItem_AddToIndex((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_super_add_to_index(void* self) {
    QGraphicsPixmapItem_SuperAddToIndex((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsPixmapItem_OnAddToIndex((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_remove_from_index(void* self) {
    QGraphicsPixmapItem_RemoveFromIndex((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_super_remove_from_index(void* self) {
    QGraphicsPixmapItem_SuperRemoveFromIndex((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsPixmapItem_OnRemoveFromIndex((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_prepare_geometry_change(void* self) {
    QGraphicsPixmapItem_PrepareGeometryChange((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_super_prepare_geometry_change(void* self) {
    QGraphicsPixmapItem_SuperPrepareGeometryChange((QGraphicsPixmapItem*)self);
}

void q_graphicspixmapitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsPixmapItem_OnPrepareGeometryChange((QGraphicsPixmapItem*)self, (intptr_t)callback);
}

void q_graphicspixmapitem_delete(void* self) {
    QGraphicsPixmapItem_Delete((QGraphicsPixmapItem*)(self));
}

QGraphicsTextItem* q_graphicstextitem_new() {
    return QGraphicsTextItem_new();
}

QGraphicsTextItem* q_graphicstextitem_new2(const char* text) {
    return QGraphicsTextItem_new2(qstring(text));
}

QGraphicsTextItem* q_graphicstextitem_new3(void* parent) {
    return QGraphicsTextItem_new3((QGraphicsItem*)parent);
}

QGraphicsTextItem* q_graphicstextitem_new4(const char* text, void* parent) {
    return QGraphicsTextItem_new4(qstring(text), (QGraphicsItem*)parent);
}

const QMetaObject* q_graphicstextitem_meta_object(void* self) {
    return QGraphicsTextItem_MetaObject((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsTextItem_OnMetaObject((QGraphicsTextItem*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicstextitem_super_meta_object(void* self) {
    return QGraphicsTextItem_SuperMetaObject((QGraphicsTextItem*)self);
}

void* q_graphicstextitem_metacast(void* self, const char* param1) {
    return QGraphicsTextItem_Metacast((QGraphicsTextItem*)self, param1);
}

void q_graphicstextitem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsTextItem_OnMetacast((QGraphicsTextItem*)self, (intptr_t)callback);
}

void* q_graphicstextitem_super_metacast(void* self, const char* param1) {
    return QGraphicsTextItem_SuperMetacast((QGraphicsTextItem*)self, param1);
}

int32_t q_graphicstextitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsTextItem_Metacall((QGraphicsTextItem*)self, param1, param2, param3);
}

void q_graphicstextitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsTextItem_OnMetacall((QGraphicsTextItem*)self, (intptr_t)callback);
}

int32_t q_graphicstextitem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsTextItem_SuperMetacall((QGraphicsTextItem*)self, param1, param2, param3);
}

const char* q_graphicstextitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicstextitem_to_html(void* self) {
    libqt_string _str = QGraphicsTextItem_ToHtml((QGraphicsTextItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstextitem_set_html(void* self, const char* html) {
    QGraphicsTextItem_SetHtml((QGraphicsTextItem*)self, qstring(html));
}

const char* q_graphicstextitem_to_plain_text(void* self) {
    libqt_string _str = QGraphicsTextItem_ToPlainText((QGraphicsTextItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstextitem_set_plain_text(void* self, const char* text) {
    QGraphicsTextItem_SetPlainText((QGraphicsTextItem*)self, qstring(text));
}

QFont* q_graphicstextitem_font(void* self) {
    return QGraphicsTextItem_Font((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_font(void* self, void* font) {
    QGraphicsTextItem_SetFont((QGraphicsTextItem*)self, (QFont*)font);
}

void q_graphicstextitem_set_default_text_color(void* self, void* c) {
    QGraphicsTextItem_SetDefaultTextColor((QGraphicsTextItem*)self, (QColor*)c);
}

QColor* q_graphicstextitem_default_text_color(void* self) {
    return QGraphicsTextItem_DefaultTextColor((QGraphicsTextItem*)self);
}

QRectF* q_graphicstextitem_bounding_rect(void* self) {
    return QGraphicsTextItem_BoundingRect((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsTextItem_OnBoundingRect((QGraphicsTextItem*)self, (intptr_t)callback);
}

QRectF* q_graphicstextitem_super_bounding_rect(void* self) {
    return QGraphicsTextItem_SuperBoundingRect((QGraphicsTextItem*)self);
}

QPainterPath* q_graphicstextitem_shape(void* self) {
    return QGraphicsTextItem_Shape((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsTextItem_OnShape((QGraphicsTextItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicstextitem_super_shape(void* self) {
    return QGraphicsTextItem_SuperShape((QGraphicsTextItem*)self);
}

bool q_graphicstextitem_contains(void* self, void* point) {
    return QGraphicsTextItem_Contains((QGraphicsTextItem*)self, (QPointF*)point);
}

void q_graphicstextitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTextItem_OnContains((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_super_contains(void* self, void* point) {
    return QGraphicsTextItem_SuperContains((QGraphicsTextItem*)self, (QPointF*)point);
}

void q_graphicstextitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsTextItem_Paint((QGraphicsTextItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicstextitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsTextItem_OnPaint((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsTextItem_SuperPaint((QGraphicsTextItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicstextitem_is_obscured_by(void* self, void* item) {
    return QGraphicsTextItem_IsObscuredBy((QGraphicsTextItem*)self, (QGraphicsItem*)item);
}

void q_graphicstextitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTextItem_OnIsObscuredBy((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsTextItem_SuperIsObscuredBy((QGraphicsTextItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicstextitem_opaque_area(void* self) {
    return QGraphicsTextItem_OpaqueArea((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsTextItem_OnOpaqueArea((QGraphicsTextItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicstextitem_super_opaque_area(void* self) {
    return QGraphicsTextItem_SuperOpaqueArea((QGraphicsTextItem*)self);
}

int32_t q_graphicstextitem_type(void* self) {
    return QGraphicsTextItem_Type((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsTextItem_OnType((QGraphicsTextItem*)self, (intptr_t)callback);
}

int32_t q_graphicstextitem_super_type(void* self) {
    return QGraphicsTextItem_SuperType((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_text_width(void* self, double width) {
    QGraphicsTextItem_SetTextWidth((QGraphicsTextItem*)self, width);
}

double q_graphicstextitem_text_width(void* self) {
    return QGraphicsTextItem_TextWidth((QGraphicsTextItem*)self);
}

void q_graphicstextitem_adjust_size(void* self) {
    QGraphicsTextItem_AdjustSize((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_document(void* self, void* document) {
    QGraphicsTextItem_SetDocument((QGraphicsTextItem*)self, (QTextDocument*)document);
}

QTextDocument* q_graphicstextitem_document(void* self) {
    return QGraphicsTextItem_Document((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_text_interaction_flags(void* self, int32_t flags) {
    QGraphicsTextItem_SetTextInteractionFlags((QGraphicsTextItem*)self, flags);
}

int32_t q_graphicstextitem_text_interaction_flags(void* self) {
    return QGraphicsTextItem_TextInteractionFlags((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_tab_changes_focus(void* self, bool b) {
    QGraphicsTextItem_SetTabChangesFocus((QGraphicsTextItem*)self, b);
}

bool q_graphicstextitem_tab_changes_focus(void* self) {
    return QGraphicsTextItem_TabChangesFocus((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_open_external_links(void* self, bool open) {
    QGraphicsTextItem_SetOpenExternalLinks((QGraphicsTextItem*)self, open);
}

bool q_graphicstextitem_open_external_links(void* self) {
    return QGraphicsTextItem_OpenExternalLinks((QGraphicsTextItem*)self);
}

void q_graphicstextitem_set_text_cursor(void* self, void* cursor) {
    QGraphicsTextItem_SetTextCursor((QGraphicsTextItem*)self, (QTextCursor*)cursor);
}

QTextCursor* q_graphicstextitem_text_cursor(void* self) {
    return QGraphicsTextItem_TextCursor((QGraphicsTextItem*)self);
}

void q_graphicstextitem_link_activated(void* self, const char* param1) {
    QGraphicsTextItem_LinkActivated((QGraphicsTextItem*)self, qstring(param1));
}

void q_graphicstextitem_on_link_activated(void* self, void (*callback)(void*, const char*)) {
    QGraphicsTextItem_Connect_LinkActivated((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_link_hovered(void* self, const char* param1) {
    QGraphicsTextItem_LinkHovered((QGraphicsTextItem*)self, qstring(param1));
}

void q_graphicstextitem_on_link_hovered(void* self, void (*callback)(void*, const char*)) {
    QGraphicsTextItem_Connect_LinkHovered((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_scene_event(void* self, void* event) {
    return QGraphicsTextItem_SceneEvent((QGraphicsTextItem*)self, (QEvent*)event);
}

void q_graphicstextitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTextItem_OnSceneEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_super_scene_event(void* self, void* event) {
    return QGraphicsTextItem_SuperSceneEvent((QGraphicsTextItem*)self, (QEvent*)event);
}

void q_graphicstextitem_mouse_press_event(void* self, void* event) {
    QGraphicsTextItem_MousePressEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnMousePressEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsTextItem_SuperMousePressEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_mouse_move_event(void* self, void* event) {
    QGraphicsTextItem_MouseMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnMouseMoveEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsTextItem_SuperMouseMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_mouse_release_event(void* self, void* event) {
    QGraphicsTextItem_MouseReleaseEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnMouseReleaseEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsTextItem_SuperMouseReleaseEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsTextItem_MouseDoubleClickEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnMouseDoubleClickEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsTextItem_SuperMouseDoubleClickEvent((QGraphicsTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicstextitem_context_menu_event(void* self, void* event) {
    QGraphicsTextItem_ContextMenuEvent((QGraphicsTextItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicstextitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnContextMenuEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_context_menu_event(void* self, void* event) {
    QGraphicsTextItem_SuperContextMenuEvent((QGraphicsTextItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicstextitem_key_press_event(void* self, void* event) {
    QGraphicsTextItem_KeyPressEvent((QGraphicsTextItem*)self, (QKeyEvent*)event);
}

void q_graphicstextitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnKeyPressEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_key_press_event(void* self, void* event) {
    QGraphicsTextItem_SuperKeyPressEvent((QGraphicsTextItem*)self, (QKeyEvent*)event);
}

void q_graphicstextitem_key_release_event(void* self, void* event) {
    QGraphicsTextItem_KeyReleaseEvent((QGraphicsTextItem*)self, (QKeyEvent*)event);
}

void q_graphicstextitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnKeyReleaseEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_key_release_event(void* self, void* event) {
    QGraphicsTextItem_SuperKeyReleaseEvent((QGraphicsTextItem*)self, (QKeyEvent*)event);
}

void q_graphicstextitem_focus_in_event(void* self, void* event) {
    QGraphicsTextItem_FocusInEvent((QGraphicsTextItem*)self, (QFocusEvent*)event);
}

void q_graphicstextitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnFocusInEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_focus_in_event(void* self, void* event) {
    QGraphicsTextItem_SuperFocusInEvent((QGraphicsTextItem*)self, (QFocusEvent*)event);
}

void q_graphicstextitem_focus_out_event(void* self, void* event) {
    QGraphicsTextItem_FocusOutEvent((QGraphicsTextItem*)self, (QFocusEvent*)event);
}

void q_graphicstextitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnFocusOutEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_focus_out_event(void* self, void* event) {
    QGraphicsTextItem_SuperFocusOutEvent((QGraphicsTextItem*)self, (QFocusEvent*)event);
}

void q_graphicstextitem_drag_enter_event(void* self, void* event) {
    QGraphicsTextItem_DragEnterEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnDragEnterEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsTextItem_SuperDragEnterEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_drag_leave_event(void* self, void* event) {
    QGraphicsTextItem_DragLeaveEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnDragLeaveEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsTextItem_SuperDragLeaveEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_drag_move_event(void* self, void* event) {
    QGraphicsTextItem_DragMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnDragMoveEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_drag_move_event(void* self, void* event) {
    QGraphicsTextItem_SuperDragMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_drop_event(void* self, void* event) {
    QGraphicsTextItem_DropEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnDropEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_drop_event(void* self, void* event) {
    QGraphicsTextItem_SuperDropEvent((QGraphicsTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicstextitem_input_method_event(void* self, void* event) {
    QGraphicsTextItem_InputMethodEvent((QGraphicsTextItem*)self, (QInputMethodEvent*)event);
}

void q_graphicstextitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnInputMethodEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_input_method_event(void* self, void* event) {
    QGraphicsTextItem_SuperInputMethodEvent((QGraphicsTextItem*)self, (QInputMethodEvent*)event);
}

void q_graphicstextitem_hover_enter_event(void* self, void* event) {
    QGraphicsTextItem_HoverEnterEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicstextitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnHoverEnterEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsTextItem_SuperHoverEnterEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicstextitem_hover_move_event(void* self, void* event) {
    QGraphicsTextItem_HoverMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicstextitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnHoverMoveEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_hover_move_event(void* self, void* event) {
    QGraphicsTextItem_SuperHoverMoveEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicstextitem_hover_leave_event(void* self, void* event) {
    QGraphicsTextItem_HoverLeaveEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicstextitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnHoverLeaveEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsTextItem_SuperHoverLeaveEvent((QGraphicsTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

QVariant* q_graphicstextitem_input_method_query(void* self, int32_t query) {
    return QGraphicsTextItem_InputMethodQuery((QGraphicsTextItem*)self, query);
}

void q_graphicstextitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsTextItem_OnInputMethodQuery((QGraphicsTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicstextitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsTextItem_SuperInputMethodQuery((QGraphicsTextItem*)self, query);
}

bool q_graphicstextitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsTextItem_SupportsExtension((QGraphicsTextItem*)self, extension);
}

void q_graphicstextitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsTextItem_OnSupportsExtension((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsTextItem_SuperSupportsExtension((QGraphicsTextItem*)self, extension);
}

void q_graphicstextitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsTextItem_SetExtension((QGraphicsTextItem*)self, extension, (QVariant*)variant);
}

void q_graphicstextitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsTextItem_OnSetExtension((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsTextItem_SuperSetExtension((QGraphicsTextItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicstextitem_extension(void* self, void* variant) {
    return QGraphicsTextItem_Extension((QGraphicsTextItem*)self, (QVariant*)variant);
}

void q_graphicstextitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsTextItem_OnExtension((QGraphicsTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicstextitem_super_extension(void* self, void* variant) {
    return QGraphicsTextItem_SuperExtension((QGraphicsTextItem*)self, (QVariant*)variant);
}

const char* q_graphicstextitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicstextitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstextitem_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_graphicstextitem_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_graphicstextitem_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicstextitem_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_graphicstextitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstextitem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicstextitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicstextitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicstextitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicstextitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicstextitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicstextitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicstextitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicstextitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicstextitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicstextitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicstextitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicstextitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicstextitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicstextitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicstextitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicstextitem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicstextitem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicstextitem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicstextitem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicstextitem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicstextitem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicstextitem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicstextitem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicstextitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicstextitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicstextitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicstextitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicstextitem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicstextitem_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicstextitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicstextitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicstextitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicstextitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicstextitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicstextitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicstextitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicstextitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicstextitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicstextitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicstextitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicstextitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicstextitem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicstextitem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicstextitem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicstextitem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicstextitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicstextitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_graphicstextitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicstextitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicstextitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicstextitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicstextitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicstextitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicstextitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicstextitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicstextitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicstextitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicstextitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicstextitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicstextitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicstextitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicstextitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicstextitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicstextitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicstextitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicstextitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicstextitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicstextitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicstextitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicstextitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicstextitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstextitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicstextitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicstextitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicstextitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicstextitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicstextitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicstextitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicstextitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicstextitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicstextitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicstextitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicstextitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicstextitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicstextitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicstextitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicstextitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicstextitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicstextitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicstextitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicstextitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicstextitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicstextitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicstextitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicstextitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicstextitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicstextitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicstextitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicstextitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicstextitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicstextitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicstextitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicstextitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicstextitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicstextitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicstextitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicstextitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicstextitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicstextitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicstextitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicstextitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicstextitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicstextitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicstextitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicstextitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicstextitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicstextitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicstextitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicstextitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicstextitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicstextitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicstextitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicstextitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicstextitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicstextitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicstextitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicstextitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicstextitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicstextitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicstextitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicstextitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicstextitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicstextitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicstextitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicstextitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicstextitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicstextitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicstextitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicstextitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicstextitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicstextitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicstextitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicstextitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicstextitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicstextitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicstextitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicstextitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicstextitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicstextitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicstextitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicstextitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicstextitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicstextitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicstextitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicstextitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicstextitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicstextitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicstextitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicstextitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicstextitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicstextitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicstextitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicstextitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicstextitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicstextitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicstextitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicstextitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicstextitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicstextitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicstextitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicstextitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicstextitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicstextitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicstextitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicstextitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicstextitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicstextitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicstextitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicstextitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicstextitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicstextitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicstextitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicstextitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicstextitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicstextitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicstextitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicstextitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicstextitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicstextitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicstextitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicstextitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicstextitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicstextitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicstextitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicstextitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicstextitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicstextitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicstextitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicstextitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicstextitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicstextitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicstextitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicstextitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicstextitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicstextitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicstextitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicstextitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

bool q_graphicstextitem_event(void* self, void* ev) {
    return QGraphicsTextItem_Event((QGraphicsTextItem*)self, (QEvent*)ev);
}

bool q_graphicstextitem_super_event(void* self, void* ev) {
    return QGraphicsTextItem_SuperEvent((QGraphicsTextItem*)self, (QEvent*)ev);
}

void q_graphicstextitem_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTextItem_OnEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTextItem_EventFilter((QGraphicsTextItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicstextitem_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTextItem_SuperEventFilter((QGraphicsTextItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicstextitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsTextItem_OnEventFilter((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_timer_event(void* self, void* event) {
    QGraphicsTextItem_TimerEvent((QGraphicsTextItem*)self, (QTimerEvent*)event);
}

void q_graphicstextitem_super_timer_event(void* self, void* event) {
    QGraphicsTextItem_SuperTimerEvent((QGraphicsTextItem*)self, (QTimerEvent*)event);
}

void q_graphicstextitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnTimerEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_child_event(void* self, void* event) {
    QGraphicsTextItem_ChildEvent((QGraphicsTextItem*)self, (QChildEvent*)event);
}

void q_graphicstextitem_super_child_event(void* self, void* event) {
    QGraphicsTextItem_SuperChildEvent((QGraphicsTextItem*)self, (QChildEvent*)event);
}

void q_graphicstextitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnChildEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_custom_event(void* self, void* event) {
    QGraphicsTextItem_CustomEvent((QGraphicsTextItem*)self, (QEvent*)event);
}

void q_graphicstextitem_super_custom_event(void* self, void* event) {
    QGraphicsTextItem_SuperCustomEvent((QGraphicsTextItem*)self, (QEvent*)event);
}

void q_graphicstextitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnCustomEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_connect_notify(void* self, void* signal) {
    QGraphicsTextItem_ConnectNotify((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

void q_graphicstextitem_super_connect_notify(void* self, void* signal) {
    QGraphicsTextItem_SuperConnectNotify((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

void q_graphicstextitem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnConnectNotify((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_disconnect_notify(void* self, void* signal) {
    QGraphicsTextItem_DisconnectNotify((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

void q_graphicstextitem_super_disconnect_notify(void* self, void* signal) {
    QGraphicsTextItem_SuperDisconnectNotify((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

void q_graphicstextitem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnDisconnectNotify((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_advance(void* self, int phase) {
    QGraphicsTextItem_Advance((QGraphicsTextItem*)self, phase);
}

void q_graphicstextitem_super_advance(void* self, int phase) {
    QGraphicsTextItem_SuperAdvance((QGraphicsTextItem*)self, phase);
}

void q_graphicstextitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsTextItem_OnAdvance((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsTextItem_CollidesWithItem((QGraphicsTextItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicstextitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsTextItem_SuperCollidesWithItem((QGraphicsTextItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicstextitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsTextItem_OnCollidesWithItem((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsTextItem_CollidesWithPath((QGraphicsTextItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicstextitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsTextItem_SuperCollidesWithPath((QGraphicsTextItem*)self, (QPainterPath*)path, mode);
}

void q_graphicstextitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsTextItem_OnCollidesWithPath((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTextItem_SceneEventFilter((QGraphicsTextItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicstextitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTextItem_SuperSceneEventFilter((QGraphicsTextItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicstextitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsTextItem_OnSceneEventFilter((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_wheel_event(void* self, void* event) {
    QGraphicsTextItem_WheelEvent((QGraphicsTextItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicstextitem_super_wheel_event(void* self, void* event) {
    QGraphicsTextItem_SuperWheelEvent((QGraphicsTextItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicstextitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTextItem_OnWheelEvent((QGraphicsTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicstextitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsTextItem_ItemChange((QGraphicsTextItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicstextitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsTextItem_SuperItemChange((QGraphicsTextItem*)self, change, (QVariant*)value);
}

void q_graphicstextitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsTextItem_OnItemChange((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_update_micro_focus(void* self) {
    QGraphicsTextItem_UpdateMicroFocus((QGraphicsTextItem*)self);
}

void q_graphicstextitem_super_update_micro_focus(void* self) {
    QGraphicsTextItem_SuperUpdateMicroFocus((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsTextItem_OnUpdateMicroFocus((QGraphicsTextItem*)self, (intptr_t)callback);
}

QObject* q_graphicstextitem_sender(void* self) {
    return QGraphicsTextItem_Sender((QGraphicsTextItem*)self);
}

QObject* q_graphicstextitem_super_sender(void* self) {
    return QGraphicsTextItem_SuperSender((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsTextItem_OnSender((QGraphicsTextItem*)self, (intptr_t)callback);
}

int32_t q_graphicstextitem_sender_signal_index(void* self) {
    return QGraphicsTextItem_SenderSignalIndex((QGraphicsTextItem*)self);
}

int32_t q_graphicstextitem_super_sender_signal_index(void* self) {
    return QGraphicsTextItem_SuperSenderSignalIndex((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsTextItem_OnSenderSignalIndex((QGraphicsTextItem*)self, (intptr_t)callback);
}

int32_t q_graphicstextitem_receivers(void* self, const char* signal) {
    return QGraphicsTextItem_Receivers((QGraphicsTextItem*)self, signal);
}

int32_t q_graphicstextitem_super_receivers(void* self, const char* signal) {
    return QGraphicsTextItem_SuperReceivers((QGraphicsTextItem*)self, signal);
}

void q_graphicstextitem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsTextItem_OnReceivers((QGraphicsTextItem*)self, (intptr_t)callback);
}

bool q_graphicstextitem_is_signal_connected(void* self, void* signal) {
    return QGraphicsTextItem_IsSignalConnected((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

bool q_graphicstextitem_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsTextItem_SuperIsSignalConnected((QGraphicsTextItem*)self, (QMetaMethod*)signal);
}

void q_graphicstextitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTextItem_OnIsSignalConnected((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_add_to_index(void* self) {
    QGraphicsTextItem_AddToIndex((QGraphicsTextItem*)self);
}

void q_graphicstextitem_super_add_to_index(void* self) {
    QGraphicsTextItem_SuperAddToIndex((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsTextItem_OnAddToIndex((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_remove_from_index(void* self) {
    QGraphicsTextItem_RemoveFromIndex((QGraphicsTextItem*)self);
}

void q_graphicstextitem_super_remove_from_index(void* self) {
    QGraphicsTextItem_SuperRemoveFromIndex((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsTextItem_OnRemoveFromIndex((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_prepare_geometry_change(void* self) {
    QGraphicsTextItem_PrepareGeometryChange((QGraphicsTextItem*)self);
}

void q_graphicstextitem_super_prepare_geometry_change(void* self) {
    QGraphicsTextItem_SuperPrepareGeometryChange((QGraphicsTextItem*)self);
}

void q_graphicstextitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsTextItem_OnPrepareGeometryChange((QGraphicsTextItem*)self, (intptr_t)callback);
}

void q_graphicstextitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicstextitem_delete(void* self) {
    QGraphicsTextItem_Delete((QGraphicsTextItem*)(self));
}

QGraphicsSimpleTextItem* q_graphicssimpletextitem_new() {
    return QGraphicsSimpleTextItem_new();
}

QGraphicsSimpleTextItem* q_graphicssimpletextitem_new2(const char* text) {
    return QGraphicsSimpleTextItem_new2(qstring(text));
}

QGraphicsSimpleTextItem* q_graphicssimpletextitem_new3(void* parent) {
    return QGraphicsSimpleTextItem_new3((QGraphicsItem*)parent);
}

QGraphicsSimpleTextItem* q_graphicssimpletextitem_new4(const char* text, void* parent) {
    return QGraphicsSimpleTextItem_new4(qstring(text), (QGraphicsItem*)parent);
}

void q_graphicssimpletextitem_set_text(void* self, const char* text) {
    QGraphicsSimpleTextItem_SetText((QGraphicsSimpleTextItem*)self, qstring(text));
}

const char* q_graphicssimpletextitem_text(void* self) {
    libqt_string _str = QGraphicsSimpleTextItem_Text((QGraphicsSimpleTextItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssimpletextitem_set_font(void* self, void* font) {
    QGraphicsSimpleTextItem_SetFont((QGraphicsSimpleTextItem*)self, (QFont*)font);
}

QFont* q_graphicssimpletextitem_font(void* self) {
    return QGraphicsSimpleTextItem_Font((QGraphicsSimpleTextItem*)self);
}

QRectF* q_graphicssimpletextitem_bounding_rect(void* self) {
    return QGraphicsSimpleTextItem_BoundingRect((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsSimpleTextItem_OnBoundingRect((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QRectF* q_graphicssimpletextitem_super_bounding_rect(void* self) {
    return QGraphicsSimpleTextItem_SuperBoundingRect((QGraphicsSimpleTextItem*)self);
}

QPainterPath* q_graphicssimpletextitem_shape(void* self) {
    return QGraphicsSimpleTextItem_Shape((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsSimpleTextItem_OnShape((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicssimpletextitem_super_shape(void* self) {
    return QGraphicsSimpleTextItem_SuperShape((QGraphicsSimpleTextItem*)self);
}

bool q_graphicssimpletextitem_contains(void* self, void* point) {
    return QGraphicsSimpleTextItem_Contains((QGraphicsSimpleTextItem*)self, (QPointF*)point);
}

void q_graphicssimpletextitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnContains((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_super_contains(void* self, void* point) {
    return QGraphicsSimpleTextItem_SuperContains((QGraphicsSimpleTextItem*)self, (QPointF*)point);
}

void q_graphicssimpletextitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSimpleTextItem_Paint((QGraphicsSimpleTextItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicssimpletextitem_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsSimpleTextItem_OnPaint((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSimpleTextItem_SuperPaint((QGraphicsSimpleTextItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicssimpletextitem_is_obscured_by(void* self, void* item) {
    return QGraphicsSimpleTextItem_IsObscuredBy((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)item);
}

void q_graphicssimpletextitem_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnIsObscuredBy((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_super_is_obscured_by(void* self, void* item) {
    return QGraphicsSimpleTextItem_SuperIsObscuredBy((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicssimpletextitem_opaque_area(void* self) {
    return QGraphicsSimpleTextItem_OpaqueArea((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsSimpleTextItem_OnOpaqueArea((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QPainterPath* q_graphicssimpletextitem_super_opaque_area(void* self) {
    return QGraphicsSimpleTextItem_SuperOpaqueArea((QGraphicsSimpleTextItem*)self);
}

int32_t q_graphicssimpletextitem_type(void* self) {
    return QGraphicsSimpleTextItem_Type((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_type(void* self, int32_t (*callback)()) {
    QGraphicsSimpleTextItem_OnType((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

int32_t q_graphicssimpletextitem_super_type(void* self) {
    return QGraphicsSimpleTextItem_SuperType((QGraphicsSimpleTextItem*)self);
}

bool q_graphicssimpletextitem_supports_extension(void* self, int32_t extension) {
    return QGraphicsSimpleTextItem_SupportsExtension((QGraphicsSimpleTextItem*)self, extension);
}

void q_graphicssimpletextitem_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsSimpleTextItem_OnSupportsExtension((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsSimpleTextItem_SuperSupportsExtension((QGraphicsSimpleTextItem*)self, extension);
}

void q_graphicssimpletextitem_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsSimpleTextItem_SetExtension((QGraphicsSimpleTextItem*)self, extension, (QVariant*)variant);
}

void q_graphicssimpletextitem_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsSimpleTextItem_OnSetExtension((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsSimpleTextItem_SuperSetExtension((QGraphicsSimpleTextItem*)self, extension, (QVariant*)variant);
}

QVariant* q_graphicssimpletextitem_extension(void* self, void* variant) {
    return QGraphicsSimpleTextItem_Extension((QGraphicsSimpleTextItem*)self, (QVariant*)variant);
}

void q_graphicssimpletextitem_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnExtension((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssimpletextitem_super_extension(void* self, void* variant) {
    return QGraphicsSimpleTextItem_SuperExtension((QGraphicsSimpleTextItem*)self, (QVariant*)variant);
}

QPen* q_graphicssimpletextitem_pen(void* self) {
    return QAbstractGraphicsShapeItem_Pen((QAbstractGraphicsShapeItem*)self);
}

void q_graphicssimpletextitem_set_pen(void* self, void* pen) {
    QAbstractGraphicsShapeItem_SetPen((QAbstractGraphicsShapeItem*)self, (QPen*)pen);
}

QBrush* q_graphicssimpletextitem_brush(void* self) {
    return QAbstractGraphicsShapeItem_Brush((QAbstractGraphicsShapeItem*)self);
}

void q_graphicssimpletextitem_set_brush(void* self, void* brush) {
    QAbstractGraphicsShapeItem_SetBrush((QAbstractGraphicsShapeItem*)self, (QBrush*)brush);
}

QGraphicsScene* q_graphicssimpletextitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicssimpletextitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicssimpletextitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicssimpletextitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicssimpletextitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicssimpletextitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicssimpletextitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicssimpletextitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicssimpletextitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicssimpletextitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicssimpletextitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicssimpletextitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicssimpletextitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicssimpletextitem_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicssimpletextitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicssimpletextitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicssimpletextitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicssimpletextitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicssimpletextitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicssimpletextitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicssimpletextitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicssimpletextitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicssimpletextitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicssimpletextitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicssimpletextitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicssimpletextitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicssimpletextitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicssimpletextitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicssimpletextitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicssimpletextitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicssimpletextitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicssimpletextitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicssimpletextitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicssimpletextitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicssimpletextitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicssimpletextitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicssimpletextitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicssimpletextitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicssimpletextitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicssimpletextitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicssimpletextitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicssimpletextitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicssimpletextitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicssimpletextitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicssimpletextitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicssimpletextitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicssimpletextitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicssimpletextitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicssimpletextitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicssimpletextitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicssimpletextitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicssimpletextitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicssimpletextitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicssimpletextitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicssimpletextitem_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicssimpletextitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicssimpletextitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicssimpletextitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicssimpletextitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicssimpletextitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicssimpletextitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicssimpletextitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicssimpletextitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicssimpletextitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicssimpletextitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicssimpletextitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicssimpletextitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicssimpletextitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicssimpletextitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicssimpletextitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicssimpletextitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicssimpletextitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicssimpletextitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicssimpletextitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicssimpletextitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicssimpletextitem_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicssimpletextitem_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicssimpletextitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicssimpletextitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicssimpletextitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicssimpletextitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicssimpletextitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicssimpletextitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicssimpletextitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicssimpletextitem_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicssimpletextitem_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicssimpletextitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicssimpletextitem_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicssimpletextitem_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicssimpletextitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicssimpletextitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicssimpletextitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicssimpletextitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicssimpletextitem_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicssimpletextitem_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicssimpletextitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicssimpletextitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicssimpletextitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicssimpletextitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicssimpletextitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicssimpletextitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicssimpletextitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicssimpletextitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicssimpletextitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicssimpletextitem_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicssimpletextitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicssimpletextitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicssimpletextitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicssimpletextitem_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicssimpletextitem_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicssimpletextitem_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicssimpletextitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicssimpletextitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicssimpletextitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicssimpletextitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicssimpletextitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicssimpletextitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicssimpletextitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicssimpletextitem_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicssimpletextitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicssimpletextitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicssimpletextitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicssimpletextitem_advance(void* self, int phase) {
    QGraphicsSimpleTextItem_Advance((QGraphicsSimpleTextItem*)self, phase);
}

void q_graphicssimpletextitem_super_advance(void* self, int phase) {
    QGraphicsSimpleTextItem_SuperAdvance((QGraphicsSimpleTextItem*)self, phase);
}

void q_graphicssimpletextitem_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsSimpleTextItem_OnAdvance((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsSimpleTextItem_CollidesWithItem((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicssimpletextitem_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsSimpleTextItem_SuperCollidesWithItem((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)other, mode);
}

void q_graphicssimpletextitem_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsSimpleTextItem_OnCollidesWithItem((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsSimpleTextItem_CollidesWithPath((QGraphicsSimpleTextItem*)self, (QPainterPath*)path, mode);
}

bool q_graphicssimpletextitem_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsSimpleTextItem_SuperCollidesWithPath((QGraphicsSimpleTextItem*)self, (QPainterPath*)path, mode);
}

void q_graphicssimpletextitem_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsSimpleTextItem_OnCollidesWithPath((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSimpleTextItem_SceneEventFilter((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicssimpletextitem_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSimpleTextItem_SuperSceneEventFilter((QGraphicsSimpleTextItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicssimpletextitem_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsSimpleTextItem_OnSceneEventFilter((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

bool q_graphicssimpletextitem_scene_event(void* self, void* event) {
    return QGraphicsSimpleTextItem_SceneEvent((QGraphicsSimpleTextItem*)self, (QEvent*)event);
}

bool q_graphicssimpletextitem_super_scene_event(void* self, void* event) {
    return QGraphicsSimpleTextItem_SuperSceneEvent((QGraphicsSimpleTextItem*)self, (QEvent*)event);
}

void q_graphicssimpletextitem_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnSceneEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_context_menu_event(void* self, void* event) {
    QGraphicsSimpleTextItem_ContextMenuEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicssimpletextitem_super_context_menu_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperContextMenuEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicssimpletextitem_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnContextMenuEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_drag_enter_event(void* self, void* event) {
    QGraphicsSimpleTextItem_DragEnterEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_super_drag_enter_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperDragEnterEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnDragEnterEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_drag_leave_event(void* self, void* event) {
    QGraphicsSimpleTextItem_DragLeaveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_super_drag_leave_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperDragLeaveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnDragLeaveEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_drag_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_DragMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_super_drag_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperDragMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnDragMoveEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_drop_event(void* self, void* event) {
    QGraphicsSimpleTextItem_DropEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_super_drop_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperDropEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicssimpletextitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnDropEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_focus_in_event(void* self, void* event) {
    QGraphicsSimpleTextItem_FocusInEvent((QGraphicsSimpleTextItem*)self, (QFocusEvent*)event);
}

void q_graphicssimpletextitem_super_focus_in_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperFocusInEvent((QGraphicsSimpleTextItem*)self, (QFocusEvent*)event);
}

void q_graphicssimpletextitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnFocusInEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_focus_out_event(void* self, void* event) {
    QGraphicsSimpleTextItem_FocusOutEvent((QGraphicsSimpleTextItem*)self, (QFocusEvent*)event);
}

void q_graphicssimpletextitem_super_focus_out_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperFocusOutEvent((QGraphicsSimpleTextItem*)self, (QFocusEvent*)event);
}

void q_graphicssimpletextitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnFocusOutEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_hover_enter_event(void* self, void* event) {
    QGraphicsSimpleTextItem_HoverEnterEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_super_hover_enter_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperHoverEnterEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnHoverEnterEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_hover_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_HoverMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_super_hover_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperHoverMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnHoverMoveEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_hover_leave_event(void* self, void* event) {
    QGraphicsSimpleTextItem_HoverLeaveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_super_hover_leave_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperHoverLeaveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicssimpletextitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnHoverLeaveEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_key_press_event(void* self, void* event) {
    QGraphicsSimpleTextItem_KeyPressEvent((QGraphicsSimpleTextItem*)self, (QKeyEvent*)event);
}

void q_graphicssimpletextitem_super_key_press_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperKeyPressEvent((QGraphicsSimpleTextItem*)self, (QKeyEvent*)event);
}

void q_graphicssimpletextitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnKeyPressEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_key_release_event(void* self, void* event) {
    QGraphicsSimpleTextItem_KeyReleaseEvent((QGraphicsSimpleTextItem*)self, (QKeyEvent*)event);
}

void q_graphicssimpletextitem_super_key_release_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperKeyReleaseEvent((QGraphicsSimpleTextItem*)self, (QKeyEvent*)event);
}

void q_graphicssimpletextitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnKeyReleaseEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_mouse_press_event(void* self, void* event) {
    QGraphicsSimpleTextItem_MousePressEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_super_mouse_press_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperMousePressEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnMousePressEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_mouse_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_MouseMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_super_mouse_move_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperMouseMoveEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnMouseMoveEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_mouse_release_event(void* self, void* event) {
    QGraphicsSimpleTextItem_MouseReleaseEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_super_mouse_release_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperMouseReleaseEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnMouseReleaseEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsSimpleTextItem_MouseDoubleClickEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperMouseDoubleClickEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicssimpletextitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnMouseDoubleClickEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_wheel_event(void* self, void* event) {
    QGraphicsSimpleTextItem_WheelEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicssimpletextitem_super_wheel_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperWheelEvent((QGraphicsSimpleTextItem*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicssimpletextitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnWheelEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_input_method_event(void* self, void* event) {
    QGraphicsSimpleTextItem_InputMethodEvent((QGraphicsSimpleTextItem*)self, (QInputMethodEvent*)event);
}

void q_graphicssimpletextitem_super_input_method_event(void* self, void* event) {
    QGraphicsSimpleTextItem_SuperInputMethodEvent((QGraphicsSimpleTextItem*)self, (QInputMethodEvent*)event);
}

void q_graphicssimpletextitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsSimpleTextItem_OnInputMethodEvent((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssimpletextitem_input_method_query(void* self, int32_t query) {
    return QGraphicsSimpleTextItem_InputMethodQuery((QGraphicsSimpleTextItem*)self, query);
}

QVariant* q_graphicssimpletextitem_super_input_method_query(void* self, int32_t query) {
    return QGraphicsSimpleTextItem_SuperInputMethodQuery((QGraphicsSimpleTextItem*)self, query);
}

void q_graphicssimpletextitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsSimpleTextItem_OnInputMethodQuery((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

QVariant* q_graphicssimpletextitem_item_change(void* self, int32_t change, void* value) {
    return QGraphicsSimpleTextItem_ItemChange((QGraphicsSimpleTextItem*)self, change, (QVariant*)value);
}

QVariant* q_graphicssimpletextitem_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsSimpleTextItem_SuperItemChange((QGraphicsSimpleTextItem*)self, change, (QVariant*)value);
}

void q_graphicssimpletextitem_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsSimpleTextItem_OnItemChange((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_update_micro_focus(void* self) {
    QGraphicsSimpleTextItem_UpdateMicroFocus((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_super_update_micro_focus(void* self) {
    QGraphicsSimpleTextItem_SuperUpdateMicroFocus((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsSimpleTextItem_OnUpdateMicroFocus((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_add_to_index(void* self) {
    QGraphicsSimpleTextItem_AddToIndex((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_super_add_to_index(void* self) {
    QGraphicsSimpleTextItem_SuperAddToIndex((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsSimpleTextItem_OnAddToIndex((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_remove_from_index(void* self) {
    QGraphicsSimpleTextItem_RemoveFromIndex((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_super_remove_from_index(void* self) {
    QGraphicsSimpleTextItem_SuperRemoveFromIndex((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsSimpleTextItem_OnRemoveFromIndex((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_prepare_geometry_change(void* self) {
    QGraphicsSimpleTextItem_PrepareGeometryChange((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_super_prepare_geometry_change(void* self) {
    QGraphicsSimpleTextItem_SuperPrepareGeometryChange((QGraphicsSimpleTextItem*)self);
}

void q_graphicssimpletextitem_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsSimpleTextItem_OnPrepareGeometryChange((QGraphicsSimpleTextItem*)self, (intptr_t)callback);
}

void q_graphicssimpletextitem_delete(void* self) {
    QGraphicsSimpleTextItem_Delete((QGraphicsSimpleTextItem*)(self));
}

QGraphicsItemGroup* q_graphicsitemgroup_new() {
    return QGraphicsItemGroup_new();
}

QGraphicsItemGroup* q_graphicsitemgroup_new2(void* parent) {
    return QGraphicsItemGroup_new2((QGraphicsItem*)parent);
}

void q_graphicsitemgroup_add_to_group(void* self, void* item) {
    QGraphicsItemGroup_AddToGroup((QGraphicsItemGroup*)self, (QGraphicsItem*)item);
}

void q_graphicsitemgroup_remove_from_group(void* self, void* item) {
    QGraphicsItemGroup_RemoveFromGroup((QGraphicsItemGroup*)self, (QGraphicsItem*)item);
}

QRectF* q_graphicsitemgroup_bounding_rect(void* self) {
    return QGraphicsItemGroup_BoundingRect((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QGraphicsItemGroup_OnBoundingRect((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QRectF* q_graphicsitemgroup_super_bounding_rect(void* self) {
    return QGraphicsItemGroup_SuperBoundingRect((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsItemGroup_Paint((QGraphicsItemGroup*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsitemgroup_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsItemGroup_OnPaint((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_super_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsItemGroup_SuperPaint((QGraphicsItemGroup*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

bool q_graphicsitemgroup_is_obscured_by(void* self, void* item) {
    return QGraphicsItemGroup_IsObscuredBy((QGraphicsItemGroup*)self, (QGraphicsItem*)item);
}

void q_graphicsitemgroup_on_is_obscured_by(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnIsObscuredBy((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_super_is_obscured_by(void* self, void* item) {
    return QGraphicsItemGroup_SuperIsObscuredBy((QGraphicsItemGroup*)self, (QGraphicsItem*)item);
}

QPainterPath* q_graphicsitemgroup_opaque_area(void* self) {
    return QGraphicsItemGroup_OpaqueArea((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_opaque_area(void* self, QPainterPath* (*callback)()) {
    QGraphicsItemGroup_OnOpaqueArea((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsitemgroup_super_opaque_area(void* self) {
    return QGraphicsItemGroup_SuperOpaqueArea((QGraphicsItemGroup*)self);
}

int32_t q_graphicsitemgroup_type(void* self) {
    return QGraphicsItemGroup_Type((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_type(void* self, int32_t (*callback)()) {
    QGraphicsItemGroup_OnType((QGraphicsItemGroup*)self, (intptr_t)callback);
}

int32_t q_graphicsitemgroup_super_type(void* self) {
    return QGraphicsItemGroup_SuperType((QGraphicsItemGroup*)self);
}

QGraphicsScene* q_graphicsitemgroup_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitemgroup_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitemgroup_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsitemgroup_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitemgroup_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitemgroup_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsitemgroup_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitemgroup_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsitemgroup_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsitemgroup_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsitemgroup_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsitemgroup_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int32_t q_graphicsitemgroup_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsitemgroup_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int32_t q_graphicsitemgroup_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int32_t q_graphicsitemgroup_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsitemgroup_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsitemgroup_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsitemgroup_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsitemgroup_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsitemgroup_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsitemgroup_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsitemgroup_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsitemgroup_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsitemgroup_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsitemgroup_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsitemgroup_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsitemgroup_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsitemgroup_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsitemgroup_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int32_t q_graphicsitemgroup_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsitemgroup_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitemgroup_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitemgroup_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitemgroup_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsitemgroup_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsitemgroup_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsitemgroup_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitemgroup_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsitemgroup_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsitemgroup_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsitemgroup_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsitemgroup_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsitemgroup_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsitemgroup_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsitemgroup_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsitemgroup_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsitemgroup_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsitemgroup_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsitemgroup_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsitemgroup_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsitemgroup_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsitemgroup_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsitemgroup_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsitemgroup_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsitemgroup_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsitemgroup_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsitemgroup_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsitemgroup_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsitemgroup_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsitemgroup_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsitemgroup_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsitemgroup_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsitemgroup_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsitemgroup_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsitemgroup_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsitemgroup_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsitemgroup_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsitemgroup_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsitemgroup_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsitemgroup_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsitemgroup_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsitemgroup_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsitemgroup_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsitemgroup_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsitemgroup_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsitemgroup_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsitemgroup_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsitemgroup_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsitemgroup_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsitemgroup_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsitemgroup_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsitemgroup_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsitemgroup_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsitemgroup_map_to_parent4(void* self, void* path) {
    return QGraphicsItem_MapToParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsitemgroup_map_to_scene4(void* self, void* path) {
    return QGraphicsItem_MapToScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsitemgroup_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsitemgroup_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsitemgroup_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsitemgroup_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsitemgroup_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsitemgroup_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsitemgroup_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsitemgroup_map_from_parent4(void* self, void* path) {
    return QGraphicsItem_MapFromParent4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsitemgroup_map_from_scene4(void* self, void* path) {
    return QGraphicsItem_MapFromScene4((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsitemgroup_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsitemgroup_map_to_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapToParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsitemgroup_map_to_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapToScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsitemgroup_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsitemgroup_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsitemgroup_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsitemgroup_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsitemgroup_map_from_parent5(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsitemgroup_map_from_scene5(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsitemgroup_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsitemgroup_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsitemgroup_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsitemgroup_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsitemgroup_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsitemgroup_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsitemgroup_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsitemgroup_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int32_t q_graphicsitemgroup_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsitemgroup_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsitemgroup_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsitemgroup_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsitemgroup_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsitemgroup_set_cache_mode2(void* self, int32_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

bool q_graphicsitemgroup_is_blocked_by_modal_panel1(void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1((QGraphicsItem*)self, (QGraphicsItem**)blockingPanel);
}

void q_graphicsitemgroup_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsitemgroup_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitemgroup_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsitemgroup_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsitemgroup_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsitemgroup_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsitemgroup_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsitemgroup_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsitemgroup_colliding_items1(void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsitemgroup_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitemgroup_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsitemgroup_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicsitemgroup_advance(void* self, int phase) {
    QGraphicsItemGroup_Advance((QGraphicsItemGroup*)self, phase);
}

void q_graphicsitemgroup_super_advance(void* self, int phase) {
    QGraphicsItemGroup_SuperAdvance((QGraphicsItemGroup*)self, phase);
}

void q_graphicsitemgroup_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsItemGroup_OnAdvance((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsitemgroup_shape(void* self) {
    return QGraphicsItemGroup_Shape((QGraphicsItemGroup*)self);
}

QPainterPath* q_graphicsitemgroup_super_shape(void* self) {
    return QGraphicsItemGroup_SuperShape((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_shape(void* self, QPainterPath* (*callback)()) {
    QGraphicsItemGroup_OnShape((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_contains(void* self, void* point) {
    return QGraphicsItemGroup_Contains((QGraphicsItemGroup*)self, (QPointF*)point);
}

bool q_graphicsitemgroup_super_contains(void* self, void* point) {
    return QGraphicsItemGroup_SuperContains((QGraphicsItemGroup*)self, (QPointF*)point);
}

void q_graphicsitemgroup_on_contains(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnContains((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItemGroup_CollidesWithItem((QGraphicsItemGroup*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsitemgroup_super_collides_with_item(void* self, void* other, int32_t mode) {
    return QGraphicsItemGroup_SuperCollidesWithItem((QGraphicsItemGroup*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsitemgroup_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsItemGroup_OnCollidesWithItem((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItemGroup_CollidesWithPath((QGraphicsItemGroup*)self, (QPainterPath*)path, mode);
}

bool q_graphicsitemgroup_super_collides_with_path(void* self, void* path, int32_t mode) {
    return QGraphicsItemGroup_SuperCollidesWithPath((QGraphicsItemGroup*)self, (QPainterPath*)path, mode);
}

void q_graphicsitemgroup_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t)) {
    QGraphicsItemGroup_OnCollidesWithPath((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItemGroup_SceneEventFilter((QGraphicsItemGroup*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsitemgroup_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItemGroup_SuperSceneEventFilter((QGraphicsItemGroup*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsitemgroup_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsItemGroup_OnSceneEventFilter((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_scene_event(void* self, void* event) {
    return QGraphicsItemGroup_SceneEvent((QGraphicsItemGroup*)self, (QEvent*)event);
}

bool q_graphicsitemgroup_super_scene_event(void* self, void* event) {
    return QGraphicsItemGroup_SuperSceneEvent((QGraphicsItemGroup*)self, (QEvent*)event);
}

void q_graphicsitemgroup_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnSceneEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_context_menu_event(void* self, void* event) {
    QGraphicsItemGroup_ContextMenuEvent((QGraphicsItemGroup*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsitemgroup_super_context_menu_event(void* self, void* event) {
    QGraphicsItemGroup_SuperContextMenuEvent((QGraphicsItemGroup*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsitemgroup_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnContextMenuEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_drag_enter_event(void* self, void* event) {
    QGraphicsItemGroup_DragEnterEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_super_drag_enter_event(void* self, void* event) {
    QGraphicsItemGroup_SuperDragEnterEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnDragEnterEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_drag_leave_event(void* self, void* event) {
    QGraphicsItemGroup_DragLeaveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_super_drag_leave_event(void* self, void* event) {
    QGraphicsItemGroup_SuperDragLeaveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnDragLeaveEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_drag_move_event(void* self, void* event) {
    QGraphicsItemGroup_DragMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_super_drag_move_event(void* self, void* event) {
    QGraphicsItemGroup_SuperDragMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnDragMoveEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_drop_event(void* self, void* event) {
    QGraphicsItemGroup_DropEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_super_drop_event(void* self, void* event) {
    QGraphicsItemGroup_SuperDropEvent((QGraphicsItemGroup*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsitemgroup_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnDropEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_focus_in_event(void* self, void* event) {
    QGraphicsItemGroup_FocusInEvent((QGraphicsItemGroup*)self, (QFocusEvent*)event);
}

void q_graphicsitemgroup_super_focus_in_event(void* self, void* event) {
    QGraphicsItemGroup_SuperFocusInEvent((QGraphicsItemGroup*)self, (QFocusEvent*)event);
}

void q_graphicsitemgroup_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnFocusInEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_focus_out_event(void* self, void* event) {
    QGraphicsItemGroup_FocusOutEvent((QGraphicsItemGroup*)self, (QFocusEvent*)event);
}

void q_graphicsitemgroup_super_focus_out_event(void* self, void* event) {
    QGraphicsItemGroup_SuperFocusOutEvent((QGraphicsItemGroup*)self, (QFocusEvent*)event);
}

void q_graphicsitemgroup_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnFocusOutEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_hover_enter_event(void* self, void* event) {
    QGraphicsItemGroup_HoverEnterEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_super_hover_enter_event(void* self, void* event) {
    QGraphicsItemGroup_SuperHoverEnterEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnHoverEnterEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_hover_move_event(void* self, void* event) {
    QGraphicsItemGroup_HoverMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_super_hover_move_event(void* self, void* event) {
    QGraphicsItemGroup_SuperHoverMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnHoverMoveEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_hover_leave_event(void* self, void* event) {
    QGraphicsItemGroup_HoverLeaveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_super_hover_leave_event(void* self, void* event) {
    QGraphicsItemGroup_SuperHoverLeaveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsitemgroup_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnHoverLeaveEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_key_press_event(void* self, void* event) {
    QGraphicsItemGroup_KeyPressEvent((QGraphicsItemGroup*)self, (QKeyEvent*)event);
}

void q_graphicsitemgroup_super_key_press_event(void* self, void* event) {
    QGraphicsItemGroup_SuperKeyPressEvent((QGraphicsItemGroup*)self, (QKeyEvent*)event);
}

void q_graphicsitemgroup_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnKeyPressEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_key_release_event(void* self, void* event) {
    QGraphicsItemGroup_KeyReleaseEvent((QGraphicsItemGroup*)self, (QKeyEvent*)event);
}

void q_graphicsitemgroup_super_key_release_event(void* self, void* event) {
    QGraphicsItemGroup_SuperKeyReleaseEvent((QGraphicsItemGroup*)self, (QKeyEvent*)event);
}

void q_graphicsitemgroup_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnKeyReleaseEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_mouse_press_event(void* self, void* event) {
    QGraphicsItemGroup_MousePressEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_super_mouse_press_event(void* self, void* event) {
    QGraphicsItemGroup_SuperMousePressEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnMousePressEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_mouse_move_event(void* self, void* event) {
    QGraphicsItemGroup_MouseMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_super_mouse_move_event(void* self, void* event) {
    QGraphicsItemGroup_SuperMouseMoveEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnMouseMoveEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_mouse_release_event(void* self, void* event) {
    QGraphicsItemGroup_MouseReleaseEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_super_mouse_release_event(void* self, void* event) {
    QGraphicsItemGroup_SuperMouseReleaseEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnMouseReleaseEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_mouse_double_click_event(void* self, void* event) {
    QGraphicsItemGroup_MouseDoubleClickEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsItemGroup_SuperMouseDoubleClickEvent((QGraphicsItemGroup*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsitemgroup_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnMouseDoubleClickEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_wheel_event(void* self, void* event) {
    QGraphicsItemGroup_WheelEvent((QGraphicsItemGroup*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsitemgroup_super_wheel_event(void* self, void* event) {
    QGraphicsItemGroup_SuperWheelEvent((QGraphicsItemGroup*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsitemgroup_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnWheelEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_input_method_event(void* self, void* event) {
    QGraphicsItemGroup_InputMethodEvent((QGraphicsItemGroup*)self, (QInputMethodEvent*)event);
}

void q_graphicsitemgroup_super_input_method_event(void* self, void* event) {
    QGraphicsItemGroup_SuperInputMethodEvent((QGraphicsItemGroup*)self, (QInputMethodEvent*)event);
}

void q_graphicsitemgroup_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnInputMethodEvent((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QVariant* q_graphicsitemgroup_input_method_query(void* self, int32_t query) {
    return QGraphicsItemGroup_InputMethodQuery((QGraphicsItemGroup*)self, query);
}

QVariant* q_graphicsitemgroup_super_input_method_query(void* self, int32_t query) {
    return QGraphicsItemGroup_SuperInputMethodQuery((QGraphicsItemGroup*)self, query);
}

void q_graphicsitemgroup_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsItemGroup_OnInputMethodQuery((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QVariant* q_graphicsitemgroup_item_change(void* self, int32_t change, void* value) {
    return QGraphicsItemGroup_ItemChange((QGraphicsItemGroup*)self, change, (QVariant*)value);
}

QVariant* q_graphicsitemgroup_super_item_change(void* self, int32_t change, void* value) {
    return QGraphicsItemGroup_SuperItemChange((QGraphicsItemGroup*)self, change, (QVariant*)value);
}

void q_graphicsitemgroup_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*)) {
    QGraphicsItemGroup_OnItemChange((QGraphicsItemGroup*)self, (intptr_t)callback);
}

bool q_graphicsitemgroup_supports_extension(void* self, int32_t extension) {
    return QGraphicsItemGroup_SupportsExtension((QGraphicsItemGroup*)self, extension);
}

bool q_graphicsitemgroup_super_supports_extension(void* self, int32_t extension) {
    return QGraphicsItemGroup_SuperSupportsExtension((QGraphicsItemGroup*)self, extension);
}

void q_graphicsitemgroup_on_supports_extension(void* self, bool (*callback)(void*, int32_t)) {
    QGraphicsItemGroup_OnSupportsExtension((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsItemGroup_SetExtension((QGraphicsItemGroup*)self, extension, (QVariant*)variant);
}

void q_graphicsitemgroup_super_set_extension(void* self, int32_t extension, void* variant) {
    QGraphicsItemGroup_SuperSetExtension((QGraphicsItemGroup*)self, extension, (QVariant*)variant);
}

void q_graphicsitemgroup_on_set_extension(void* self, void (*callback)(void*, int32_t, void*)) {
    QGraphicsItemGroup_OnSetExtension((QGraphicsItemGroup*)self, (intptr_t)callback);
}

QVariant* q_graphicsitemgroup_extension(void* self, void* variant) {
    return QGraphicsItemGroup_Extension((QGraphicsItemGroup*)self, (QVariant*)variant);
}

QVariant* q_graphicsitemgroup_super_extension(void* self, void* variant) {
    return QGraphicsItemGroup_SuperExtension((QGraphicsItemGroup*)self, (QVariant*)variant);
}

void q_graphicsitemgroup_on_extension(void* self, QVariant* (*callback)(void*, void*)) {
    QGraphicsItemGroup_OnExtension((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_update_micro_focus(void* self) {
    QGraphicsItemGroup_UpdateMicroFocus((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_super_update_micro_focus(void* self) {
    QGraphicsItemGroup_SuperUpdateMicroFocus((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsItemGroup_OnUpdateMicroFocus((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_add_to_index(void* self) {
    QGraphicsItemGroup_AddToIndex((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_super_add_to_index(void* self) {
    QGraphicsItemGroup_SuperAddToIndex((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_add_to_index(void* self, void (*callback)()) {
    QGraphicsItemGroup_OnAddToIndex((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_remove_from_index(void* self) {
    QGraphicsItemGroup_RemoveFromIndex((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_super_remove_from_index(void* self) {
    QGraphicsItemGroup_SuperRemoveFromIndex((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_remove_from_index(void* self, void (*callback)()) {
    QGraphicsItemGroup_OnRemoveFromIndex((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_prepare_geometry_change(void* self) {
    QGraphicsItemGroup_PrepareGeometryChange((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_super_prepare_geometry_change(void* self) {
    QGraphicsItemGroup_SuperPrepareGeometryChange((QGraphicsItemGroup*)self);
}

void q_graphicsitemgroup_on_prepare_geometry_change(void* self, void (*callback)()) {
    QGraphicsItemGroup_OnPrepareGeometryChange((QGraphicsItemGroup*)self, (intptr_t)callback);
}

void q_graphicsitemgroup_delete(void* self) {
    QGraphicsItemGroup_Delete((QGraphicsItemGroup*)(self));
}
