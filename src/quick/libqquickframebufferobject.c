#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../opengl/libqopenglframebufferobject.hpp"
#include "../libqpoint.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquickitem.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgtextureprovider.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqquickframebufferobject.hpp"
#include "libqquickframebufferobject.h"

QQuickFramebufferObject* q_quickframebufferobject_new() {
    return QQuickFramebufferObject_New();
}

QQuickFramebufferObject* q_quickframebufferobject_new2(void* parent) {
    return QQuickFramebufferObject_New2((QQuickItem*)parent);
}

const QMetaObject* q_quickframebufferobject_meta_object(void* self) {
    return QQuickFramebufferObject_MetaObject((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickFramebufferObject_OnMetaObject((QQuickFramebufferObject*)self, (intptr_t)callback);
}

const QMetaObject* q_quickframebufferobject_super_meta_object(void* self) {
    return QQuickFramebufferObject_SuperMetaObject((QQuickFramebufferObject*)self);
}

void* q_quickframebufferobject_metacast(void* self, const char* param1) {
    return QQuickFramebufferObject_Metacast((QQuickFramebufferObject*)self, param1);
}

void q_quickframebufferobject_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickFramebufferObject_OnMetacast((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void* q_quickframebufferobject_super_metacast(void* self, const char* param1) {
    return QQuickFramebufferObject_SuperMetacast((QQuickFramebufferObject*)self, param1);
}

int32_t q_quickframebufferobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickFramebufferObject_Metacall((QQuickFramebufferObject*)self, param1, param2, param3);
}

void q_quickframebufferobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickFramebufferObject_OnMetacall((QQuickFramebufferObject*)self, (intptr_t)callback);
}

int32_t q_quickframebufferobject_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickFramebufferObject_SuperMetacall((QQuickFramebufferObject*)self, param1, param2, param3);
}

const char* q_quickframebufferobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_quickframebufferobject_texture_follows_item_size(void* self) {
    return QQuickFramebufferObject_TextureFollowsItemSize((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_set_texture_follows_item_size(void* self, bool follows) {
    QQuickFramebufferObject_SetTextureFollowsItemSize((QQuickFramebufferObject*)self, follows);
}

bool q_quickframebufferobject_mirror_vertically(void* self) {
    return QQuickFramebufferObject_MirrorVertically((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_set_mirror_vertically(void* self, bool enable) {
    QQuickFramebufferObject_SetMirrorVertically((QQuickFramebufferObject*)self, enable);
}

QQuickFramebufferObject__Renderer* q_quickframebufferobject_create_renderer(void* self) {
    return QQuickFramebufferObject_CreateRenderer((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_create_renderer(void* self, QQuickFramebufferObject__Renderer* (*callback)()) {
    QQuickFramebufferObject_OnCreateRenderer((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QQuickFramebufferObject__Renderer* q_quickframebufferobject_super_create_renderer(void* self) {
    return QQuickFramebufferObject_SuperCreateRenderer((QQuickFramebufferObject*)self);
}

bool q_quickframebufferobject_is_texture_provider(void* self) {
    return QQuickFramebufferObject_IsTextureProvider((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_is_texture_provider(void* self, bool (*callback)()) {
    QQuickFramebufferObject_OnIsTextureProvider((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_super_is_texture_provider(void* self) {
    return QQuickFramebufferObject_SuperIsTextureProvider((QQuickFramebufferObject*)self);
}

QSGTextureProvider* q_quickframebufferobject_texture_provider(void* self) {
    return QQuickFramebufferObject_TextureProvider((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_texture_provider(void* self, QSGTextureProvider* (*callback)()) {
    QQuickFramebufferObject_OnTextureProvider((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QSGTextureProvider* q_quickframebufferobject_super_texture_provider(void* self) {
    return QQuickFramebufferObject_SuperTextureProvider((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_release_resources(void* self) {
    QQuickFramebufferObject_ReleaseResources((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_release_resources(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnReleaseResources((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_super_release_resources(void* self) {
    QQuickFramebufferObject_SuperReleaseResources((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickFramebufferObject_GeometryChange((QQuickFramebufferObject*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickframebufferobject_on_geometry_change(void* self, void (*callback)(void*, void*, void*)) {
    QQuickFramebufferObject_OnGeometryChange((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_super_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickFramebufferObject_SuperGeometryChange((QQuickFramebufferObject*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

QSGNode* q_quickframebufferobject_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickFramebufferObject_UpdatePaintNode((QQuickFramebufferObject*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickframebufferobject_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*)) {
    QQuickFramebufferObject_OnUpdatePaintNode((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QSGNode* q_quickframebufferobject_super_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickFramebufferObject_SuperUpdatePaintNode((QQuickFramebufferObject*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickframebufferobject_texture_follows_item_size_changed(void* self, bool param1) {
    QQuickFramebufferObject_TextureFollowsItemSizeChanged((QQuickFramebufferObject*)self, param1);
}

void q_quickframebufferobject_on_texture_follows_item_size_changed(void* self, void (*callback)(void*, bool)) {
    QQuickFramebufferObject_Connect_TextureFollowsItemSizeChanged((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mirror_vertically_changed(void* self, bool param1) {
    QQuickFramebufferObject_MirrorVerticallyChanged((QQuickFramebufferObject*)self, param1);
}

void q_quickframebufferobject_on_mirror_vertically_changed(void* self, void (*callback)(void*, bool)) {
    QQuickFramebufferObject_Connect_MirrorVerticallyChanged((QQuickFramebufferObject*)self, (intptr_t)callback);
}

const char* q_quickframebufferobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickframebufferobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlParserStatus* q_quickframebufferobject_as_q_qml_parser_status(void* self) {
    return QQuickItem_AsQQmlParserStatus((QQuickItem*)self);
}

QQuickFramebufferObject* q_quickframebufferobject_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuickFramebufferObject*)QQuickItem_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

QQuickWindow* q_quickframebufferobject_window(void* self) {
    return QQuickItem_Window((QQuickItem*)self);
}

QQuickItem* q_quickframebufferobject_parent_item(void* self) {
    return QQuickItem_ParentItem((QQuickItem*)self);
}

void q_quickframebufferobject_set_parent_item(void* self, void* parent) {
    QQuickItem_SetParentItem((QQuickItem*)self, (QQuickItem*)parent);
}

void q_quickframebufferobject_stack_before(void* self, void* param1) {
    QQuickItem_StackBefore((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickframebufferobject_stack_after(void* self, void* param1) {
    QQuickItem_StackAfter((QQuickItem*)self, (QQuickItem*)param1);
}

QRectF* q_quickframebufferobject_children_rect(void* self) {
    return QQuickItem_ChildrenRect((QQuickItem*)self);
}

libqt_list /* of QQuickItem* */ q_quickframebufferobject_child_items(void* self) {
    libqt_list _arr = QQuickItem_ChildItems((QQuickItem*)self);
    return _arr;
}

bool q_quickframebufferobject_clip(void* self) {
    return QQuickItem_Clip((QQuickItem*)self);
}

void q_quickframebufferobject_set_clip(void* self, bool clip) {
    QQuickItem_SetClip((QQuickItem*)self, clip);
}

const char* q_quickframebufferobject_state(void* self) {
    libqt_string _str = QQuickItem_State((QQuickItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickframebufferobject_set_state(void* self, const char* state) {
    QQuickItem_SetState((QQuickItem*)self, qstring(state));
}

double q_quickframebufferobject_baseline_offset(void* self) {
    return QQuickItem_BaselineOffset((QQuickItem*)self);
}

void q_quickframebufferobject_set_baseline_offset(void* self, double baselineOffset) {
    QQuickItem_SetBaselineOffset((QQuickItem*)self, baselineOffset);
}

double q_quickframebufferobject_x(void* self) {
    return QQuickItem_X((QQuickItem*)self);
}

double q_quickframebufferobject_y(void* self) {
    return QQuickItem_Y((QQuickItem*)self);
}

QPointF* q_quickframebufferobject_position(void* self) {
    return QQuickItem_Position((QQuickItem*)self);
}

void q_quickframebufferobject_set_x(void* self, double x) {
    QQuickItem_SetX((QQuickItem*)self, x);
}

void q_quickframebufferobject_set_y(void* self, double y) {
    QQuickItem_SetY((QQuickItem*)self, y);
}

void q_quickframebufferobject_set_position(void* self, void* position) {
    QQuickItem_SetPosition((QQuickItem*)self, (QPointF*)position);
}

double q_quickframebufferobject_width(void* self) {
    return QQuickItem_Width((QQuickItem*)self);
}

void q_quickframebufferobject_set_width(void* self, double width) {
    QQuickItem_SetWidth((QQuickItem*)self, width);
}

void q_quickframebufferobject_reset_width(void* self) {
    QQuickItem_ResetWidth((QQuickItem*)self);
}

void q_quickframebufferobject_set_implicit_width(void* self, double implicitWidth) {
    QQuickItem_SetImplicitWidth((QQuickItem*)self, implicitWidth);
}

double q_quickframebufferobject_implicit_width(void* self) {
    return QQuickItem_ImplicitWidth((QQuickItem*)self);
}

double q_quickframebufferobject_height(void* self) {
    return QQuickItem_Height((QQuickItem*)self);
}

void q_quickframebufferobject_set_height(void* self, double height) {
    QQuickItem_SetHeight((QQuickItem*)self, height);
}

void q_quickframebufferobject_reset_height(void* self) {
    QQuickItem_ResetHeight((QQuickItem*)self);
}

void q_quickframebufferobject_set_implicit_height(void* self, double implicitHeight) {
    QQuickItem_SetImplicitHeight((QQuickItem*)self, implicitHeight);
}

double q_quickframebufferobject_implicit_height(void* self) {
    return QQuickItem_ImplicitHeight((QQuickItem*)self);
}

QSizeF* q_quickframebufferobject_size(void* self) {
    return QQuickItem_Size((QQuickItem*)self);
}

void q_quickframebufferobject_set_size(void* self, void* size) {
    QQuickItem_SetSize((QQuickItem*)self, (QSizeF*)size);
}

int32_t q_quickframebufferobject_transform_origin(void* self) {
    return QQuickItem_TransformOrigin((QQuickItem*)self);
}

void q_quickframebufferobject_set_transform_origin(void* self, int32_t transformOrigin) {
    QQuickItem_SetTransformOrigin((QQuickItem*)self, transformOrigin);
}

QPointF* q_quickframebufferobject_transform_origin_point(void* self) {
    return QQuickItem_TransformOriginPoint((QQuickItem*)self);
}

void q_quickframebufferobject_set_transform_origin_point(void* self, void* transformOriginPoint) {
    QQuickItem_SetTransformOriginPoint((QQuickItem*)self, (QPointF*)transformOriginPoint);
}

double q_quickframebufferobject_z(void* self) {
    return QQuickItem_Z((QQuickItem*)self);
}

void q_quickframebufferobject_set_z(void* self, double z) {
    QQuickItem_SetZ((QQuickItem*)self, z);
}

double q_quickframebufferobject_rotation(void* self) {
    return QQuickItem_Rotation((QQuickItem*)self);
}

void q_quickframebufferobject_set_rotation(void* self, double rotation) {
    QQuickItem_SetRotation((QQuickItem*)self, rotation);
}

double q_quickframebufferobject_scale(void* self) {
    return QQuickItem_Scale((QQuickItem*)self);
}

void q_quickframebufferobject_set_scale(void* self, double scale) {
    QQuickItem_SetScale((QQuickItem*)self, scale);
}

double q_quickframebufferobject_opacity(void* self) {
    return QQuickItem_Opacity((QQuickItem*)self);
}

void q_quickframebufferobject_set_opacity(void* self, double opacity) {
    QQuickItem_SetOpacity((QQuickItem*)self, opacity);
}

bool q_quickframebufferobject_is_visible(void* self) {
    return QQuickItem_IsVisible((QQuickItem*)self);
}

void q_quickframebufferobject_set_visible(void* self, bool visible) {
    QQuickItem_SetVisible((QQuickItem*)self, visible);
}

bool q_quickframebufferobject_is_enabled(void* self) {
    return QQuickItem_IsEnabled((QQuickItem*)self);
}

void q_quickframebufferobject_set_enabled(void* self, bool enabled) {
    QQuickItem_SetEnabled((QQuickItem*)self, enabled);
}

bool q_quickframebufferobject_smooth(void* self) {
    return QQuickItem_Smooth((QQuickItem*)self);
}

void q_quickframebufferobject_set_smooth(void* self, bool smooth) {
    QQuickItem_SetSmooth((QQuickItem*)self, smooth);
}

bool q_quickframebufferobject_active_focus_on_tab(void* self) {
    return QQuickItem_ActiveFocusOnTab((QQuickItem*)self);
}

void q_quickframebufferobject_set_active_focus_on_tab(void* self, bool activeFocusOnTab) {
    QQuickItem_SetActiveFocusOnTab((QQuickItem*)self, activeFocusOnTab);
}

bool q_quickframebufferobject_antialiasing(void* self) {
    return QQuickItem_Antialiasing((QQuickItem*)self);
}

void q_quickframebufferobject_set_antialiasing(void* self, bool antialiasing) {
    QQuickItem_SetAntialiasing((QQuickItem*)self, antialiasing);
}

void q_quickframebufferobject_reset_antialiasing(void* self) {
    QQuickItem_ResetAntialiasing((QQuickItem*)self);
}

int32_t q_quickframebufferobject_flags(void* self) {
    return QQuickItem_Flags((QQuickItem*)self);
}

void q_quickframebufferobject_set_flag(void* self, int32_t flag) {
    QQuickItem_SetFlag((QQuickItem*)self, flag);
}

void q_quickframebufferobject_set_flags(void* self, int32_t flags) {
    QQuickItem_SetFlags((QQuickItem*)self, flags);
}

QQuickItem* q_quickframebufferobject_viewport_item(void* self) {
    return QQuickItem_ViewportItem((QQuickItem*)self);
}

bool q_quickframebufferobject_has_active_focus(void* self) {
    return QQuickItem_HasActiveFocus((QQuickItem*)self);
}

bool q_quickframebufferobject_has_focus(void* self) {
    return QQuickItem_HasFocus((QQuickItem*)self);
}

void q_quickframebufferobject_set_focus(void* self, bool focus) {
    QQuickItem_SetFocus((QQuickItem*)self, focus);
}

void q_quickframebufferobject_set_focus2(void* self, bool focus, int32_t reason) {
    QQuickItem_SetFocus2((QQuickItem*)self, focus, reason);
}

bool q_quickframebufferobject_is_focus_scope(void* self) {
    return QQuickItem_IsFocusScope((QQuickItem*)self);
}

QQuickItem* q_quickframebufferobject_scoped_focus_item(void* self) {
    return QQuickItem_ScopedFocusItem((QQuickItem*)self);
}

int32_t q_quickframebufferobject_focus_policy(void* self) {
    return QQuickItem_FocusPolicy((QQuickItem*)self);
}

void q_quickframebufferobject_set_focus_policy(void* self, int32_t policy) {
    QQuickItem_SetFocusPolicy((QQuickItem*)self, policy);
}

bool q_quickframebufferobject_is_ancestor_of(void* self, void* child) {
    return QQuickItem_IsAncestorOf((QQuickItem*)self, (QQuickItem*)child);
}

int32_t q_quickframebufferobject_accepted_mouse_buttons(void* self) {
    return QQuickItem_AcceptedMouseButtons((QQuickItem*)self);
}

void q_quickframebufferobject_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QQuickItem_SetAcceptedMouseButtons((QQuickItem*)self, buttons);
}

bool q_quickframebufferobject_accept_hover_events(void* self) {
    return QQuickItem_AcceptHoverEvents((QQuickItem*)self);
}

void q_quickframebufferobject_set_accept_hover_events(void* self, bool enabled) {
    QQuickItem_SetAcceptHoverEvents((QQuickItem*)self, enabled);
}

bool q_quickframebufferobject_accept_touch_events(void* self) {
    return QQuickItem_AcceptTouchEvents((QQuickItem*)self);
}

void q_quickframebufferobject_set_accept_touch_events(void* self, bool accept) {
    QQuickItem_SetAcceptTouchEvents((QQuickItem*)self, accept);
}

QCursor* q_quickframebufferobject_cursor(void* self) {
    return QQuickItem_Cursor((QQuickItem*)self);
}

void q_quickframebufferobject_set_cursor(void* self, void* cursor) {
    QQuickItem_SetCursor((QQuickItem*)self, (QCursor*)cursor);
}

void q_quickframebufferobject_unset_cursor(void* self) {
    QQuickItem_UnsetCursor((QQuickItem*)self);
}

bool q_quickframebufferobject_is_under_mouse(void* self) {
    return QQuickItem_IsUnderMouse((QQuickItem*)self);
}

void q_quickframebufferobject_grab_mouse(void* self) {
    QQuickItem_GrabMouse((QQuickItem*)self);
}

void q_quickframebufferobject_ungrab_mouse(void* self) {
    QQuickItem_UngrabMouse((QQuickItem*)self);
}

bool q_quickframebufferobject_keep_mouse_grab(void* self) {
    return QQuickItem_KeepMouseGrab((QQuickItem*)self);
}

void q_quickframebufferobject_set_keep_mouse_grab(void* self, bool keepMouseGrab) {
    QQuickItem_SetKeepMouseGrab((QQuickItem*)self, keepMouseGrab);
}

bool q_quickframebufferobject_filters_child_mouse_events(void* self) {
    return QQuickItem_FiltersChildMouseEvents((QQuickItem*)self);
}

void q_quickframebufferobject_set_filters_child_mouse_events(void* self, bool filter) {
    QQuickItem_SetFiltersChildMouseEvents((QQuickItem*)self, filter);
}

void q_quickframebufferobject_grab_touch_points(void* self, libqt_list /* of int */ ids) {
    QQuickItem_GrabTouchPoints((QQuickItem*)self, ids);
}

void q_quickframebufferobject_ungrab_touch_points(void* self) {
    QQuickItem_UngrabTouchPoints((QQuickItem*)self);
}

bool q_quickframebufferobject_keep_touch_grab(void* self) {
    return QQuickItem_KeepTouchGrab((QQuickItem*)self);
}

void q_quickframebufferobject_set_keep_touch_grab(void* self, bool keepTouchGrab) {
    QQuickItem_SetKeepTouchGrab((QQuickItem*)self, keepTouchGrab);
}

bool q_quickframebufferobject_grab_to_image(void* self, void* callback) {
    return QQuickItem_GrabToImage((QQuickItem*)self, (QJSValue*)callback);
}

QObject* q_quickframebufferobject_containment_mask(void* self) {
    return QQuickItem_ContainmentMask((QQuickItem*)self);
}

void q_quickframebufferobject_set_containment_mask(void* self, void* mask) {
    QQuickItem_SetContainmentMask((QQuickItem*)self, (QObject*)mask);
}

QTransform* q_quickframebufferobject_item_transform(void* self, void* param1, bool* param2) {
    return QQuickItem_ItemTransform((QQuickItem*)self, (QQuickItem*)param1, (bool*)param2);
}

QPointF* q_quickframebufferobject_map_to_scene(void* self, void* point) {
    return QQuickItem_MapToScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickframebufferobject_map_rect_to_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectToItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickframebufferobject_map_rect_to_scene(void* self, void* rect) {
    return QQuickItem_MapRectToScene((QQuickItem*)self, (QRectF*)rect);
}

QPointF* q_quickframebufferobject_map_from_scene(void* self, void* point) {
    return QQuickItem_MapFromScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickframebufferobject_map_rect_from_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectFromItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickframebufferobject_map_rect_from_scene(void* self, void* rect) {
    return QQuickItem_MapRectFromScene((QQuickItem*)self, (QRectF*)rect);
}

void q_quickframebufferobject_polish(void* self) {
    QQuickItem_Polish((QQuickItem*)self);
}

QPointF* q_quickframebufferobject_map_from_item2(void* self, void* item, void* point) {
    return QQuickItem_MapFromItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickframebufferobject_map_from_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapFromItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickframebufferobject_map_from_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapFromItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickframebufferobject_map_from_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapFromItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickframebufferobject_map_to_item2(void* self, void* item, void* point) {
    return QQuickItem_MapToItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickframebufferobject_map_to_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapToItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickframebufferobject_map_to_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapToItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickframebufferobject_map_to_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapToItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickframebufferobject_map_from_global2(void* self, double x, double y) {
    return QQuickItem_MapFromGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickframebufferobject_map_from_global3(void* self, void* point) {
    return QQuickItem_MapFromGlobal3((QQuickItem*)self, (QPointF*)point);
}

QPointF* q_quickframebufferobject_map_to_global2(void* self, double x, double y) {
    return QQuickItem_MapToGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickframebufferobject_map_to_global3(void* self, void* point) {
    return QQuickItem_MapToGlobal3((QQuickItem*)self, (QPointF*)point);
}

void q_quickframebufferobject_force_active_focus(void* self) {
    QQuickItem_ForceActiveFocus((QQuickItem*)self);
}

void q_quickframebufferobject_force_active_focus2(void* self, int32_t reason) {
    QQuickItem_ForceActiveFocus2((QQuickItem*)self, reason);
}

QQuickItem* q_quickframebufferobject_next_item_in_focus_chain(void* self) {
    return QQuickItem_NextItemInFocusChain((QQuickItem*)self);
}

QQuickItem* q_quickframebufferobject_child_at(void* self, double x, double y) {
    return QQuickItem_ChildAt((QQuickItem*)self, x, y);
}

void q_quickframebufferobject_ensure_polished(void* self) {
    QQuickItem_EnsurePolished((QQuickItem*)self);
}

void q_quickframebufferobject_dump_item_tree(void* self) {
    QQuickItem_DumpItemTree((QQuickItem*)self);
}

void q_quickframebufferobject_update(void* self) {
    QQuickItem_Update((QQuickItem*)self);
}

void q_quickframebufferobject_children_rect_changed(void* self, void* param1) {
    QQuickItem_ChildrenRectChanged((QQuickItem*)self, (QRectF*)param1);
}

void q_quickframebufferobject_on_children_rect_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ChildrenRectChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_baseline_offset_changed(void* self, double param1) {
    QQuickItem_BaselineOffsetChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_baseline_offset_changed(void* self, void (*callback)(void*, double)) {
    QQuickItem_Connect_BaselineOffsetChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_state_changed(void* self, const char* param1) {
    QQuickItem_StateChanged((QQuickItem*)self, qstring(param1));
}

void q_quickframebufferobject_on_state_changed(void* self, void (*callback)(void*, const char*)) {
    QQuickItem_Connect_StateChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_focus_changed(void* self, bool param1) {
    QQuickItem_FocusChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_FocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_active_focus_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_active_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_focus_policy_changed(void* self, int32_t param1) {
    QQuickItem_FocusPolicyChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_FocusPolicyChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_active_focus_on_tab_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusOnTabChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusOnTabChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_parent_changed(void* self, void* param1) {
    QQuickItem_ParentChanged((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickframebufferobject_on_parent_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ParentChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_transform_origin_changed(void* self, int32_t param1) {
    QQuickItem_TransformOriginChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_TransformOriginChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_smooth_changed(void* self, bool param1) {
    QQuickItem_SmoothChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_smooth_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_SmoothChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_antialiasing_changed(void* self, bool param1) {
    QQuickItem_AntialiasingChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_antialiasing_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_AntialiasingChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_clip_changed(void* self, bool param1) {
    QQuickItem_ClipChanged((QQuickItem*)self, param1);
}

void q_quickframebufferobject_on_clip_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ClipChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_window_changed(void* self, void* window) {
    QQuickItem_WindowChanged((QQuickItem*)self, (QQuickWindow*)window);
}

void q_quickframebufferobject_on_window_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_WindowChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_children_changed(void* self) {
    QQuickItem_ChildrenChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_opacity_changed(void* self) {
    QQuickItem_OpacityChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_opacity_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_OpacityChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_enabled_changed(void* self) {
    QQuickItem_EnabledChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_EnabledChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_visible_changed(void* self) {
    QQuickItem_VisibleChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_visible_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_visible_children_changed(void* self) {
    QQuickItem_VisibleChildrenChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_visible_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_rotation_changed(void* self) {
    QQuickItem_RotationChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_rotation_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_RotationChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_scale_changed(void* self) {
    QQuickItem_ScaleChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_scale_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ScaleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_x_changed(void* self) {
    QQuickItem_XChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_x_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_XChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_y_changed(void* self) {
    QQuickItem_YChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_y_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_YChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_width_changed(void* self) {
    QQuickItem_WidthChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_WidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_height_changed(void* self) {
    QQuickItem_HeightChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_HeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_z_changed(void* self) {
    QQuickItem_ZChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_z_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ZChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_implicit_width_changed(void* self) {
    QQuickItem_ImplicitWidthChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_implicit_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitWidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_implicit_height_changed(void* self) {
    QQuickItem_ImplicitHeightChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_implicit_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitHeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_containment_mask_changed(void* self) {
    QQuickItem_ContainmentMaskChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_containment_mask_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ContainmentMaskChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_palette_changed(void* self) {
    QQuickItem_PaletteChanged((QQuickItem*)self);
}

void q_quickframebufferobject_on_palette_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_palette_created(void* self) {
    QQuickItem_PaletteCreated((QQuickItem*)self);
}

void q_quickframebufferobject_on_palette_created(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteCreated((QQuickItem*)self, (intptr_t)callback);
}

void q_quickframebufferobject_set_flag2(void* self, int32_t flag, bool enabled) {
    QQuickItem_SetFlag2((QQuickItem*)self, flag, enabled);
}

bool q_quickframebufferobject_grab_to_image22(void* self, void* callback, void* targetSize) {
    return QQuickItem_GrabToImage22((QQuickItem*)self, (QJSValue*)callback, (QSize*)targetSize);
}

QQuickItem* q_quickframebufferobject_next_item_in_focus_chain1(void* self, bool forward) {
    return QQuickItem_NextItemInFocusChain1((QQuickItem*)self, forward);
}

const char* q_quickframebufferobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickframebufferobject_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickframebufferobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickframebufferobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickframebufferobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickframebufferobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickframebufferobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickframebufferobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickframebufferobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickframebufferobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickframebufferobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickframebufferobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickframebufferobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickframebufferobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickframebufferobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickframebufferobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickframebufferobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickframebufferobject_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickframebufferobject_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickframebufferobject_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickframebufferobject_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickframebufferobject_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickframebufferobject_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickframebufferobject_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickframebufferobject_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickframebufferobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickframebufferobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickframebufferobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickframebufferobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickframebufferobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickframebufferobject_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_quickframebufferobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickframebufferobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickframebufferobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickframebufferobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickframebufferobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickframebufferobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickframebufferobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickframebufferobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickframebufferobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickframebufferobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickframebufferobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickframebufferobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickframebufferobject_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickframebufferobject_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickframebufferobject_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickframebufferobject_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickframebufferobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickframebufferobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QRectF* q_quickframebufferobject_bounding_rect(void* self) {
    return QQuickFramebufferObject_BoundingRect((QQuickFramebufferObject*)self);
}

QRectF* q_quickframebufferobject_super_bounding_rect(void* self) {
    return QQuickFramebufferObject_SuperBoundingRect((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QQuickFramebufferObject_OnBoundingRect((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QRectF* q_quickframebufferobject_clip_rect(void* self) {
    return QQuickFramebufferObject_ClipRect((QQuickFramebufferObject*)self);
}

QRectF* q_quickframebufferobject_super_clip_rect(void* self) {
    return QQuickFramebufferObject_SuperClipRect((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_clip_rect(void* self, QRectF* (*callback)()) {
    QQuickFramebufferObject_OnClipRect((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_contains(void* self, void* point) {
    return QQuickFramebufferObject_Contains((QQuickFramebufferObject*)self, (QPointF*)point);
}

bool q_quickframebufferobject_super_contains(void* self, void* point) {
    return QQuickFramebufferObject_SuperContains((QQuickFramebufferObject*)self, (QPointF*)point);
}

void q_quickframebufferobject_on_contains(void* self, bool (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnContains((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QVariant* q_quickframebufferobject_input_method_query(void* self, int32_t query) {
    return QQuickFramebufferObject_InputMethodQuery((QQuickFramebufferObject*)self, query);
}

QVariant* q_quickframebufferobject_super_input_method_query(void* self, int32_t query) {
    return QQuickFramebufferObject_SuperInputMethodQuery((QQuickFramebufferObject*)self, query);
}

void q_quickframebufferobject_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QQuickFramebufferObject_OnInputMethodQuery((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_event(void* self, void* param1) {
    return QQuickFramebufferObject_Event((QQuickFramebufferObject*)self, (QEvent*)param1);
}

bool q_quickframebufferobject_super_event(void* self, void* param1) {
    return QQuickFramebufferObject_SuperEvent((QQuickFramebufferObject*)self, (QEvent*)param1);
}

void q_quickframebufferobject_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_item_change(void* self, int32_t param1, void* param2) {
    QQuickFramebufferObject_ItemChange((QQuickFramebufferObject*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickframebufferobject_super_item_change(void* self, int32_t param1, void* param2) {
    QQuickFramebufferObject_SuperItemChange((QQuickFramebufferObject*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickframebufferobject_on_item_change(void* self, void (*callback)(void*, int32_t, void*)) {
    QQuickFramebufferObject_OnItemChange((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_class_begin(void* self) {
    QQuickFramebufferObject_ClassBegin((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_class_begin(void* self) {
    QQuickFramebufferObject_SuperClassBegin((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_class_begin(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnClassBegin((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_component_complete(void* self) {
    QQuickFramebufferObject_ComponentComplete((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_component_complete(void* self) {
    QQuickFramebufferObject_SuperComponentComplete((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_component_complete(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnComponentComplete((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_key_press_event(void* self, void* event) {
    QQuickFramebufferObject_KeyPressEvent((QQuickFramebufferObject*)self, (QKeyEvent*)event);
}

void q_quickframebufferobject_super_key_press_event(void* self, void* event) {
    QQuickFramebufferObject_SuperKeyPressEvent((QQuickFramebufferObject*)self, (QKeyEvent*)event);
}

void q_quickframebufferobject_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnKeyPressEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_key_release_event(void* self, void* event) {
    QQuickFramebufferObject_KeyReleaseEvent((QQuickFramebufferObject*)self, (QKeyEvent*)event);
}

void q_quickframebufferobject_super_key_release_event(void* self, void* event) {
    QQuickFramebufferObject_SuperKeyReleaseEvent((QQuickFramebufferObject*)self, (QKeyEvent*)event);
}

void q_quickframebufferobject_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnKeyReleaseEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_input_method_event(void* self, void* param1) {
    QQuickFramebufferObject_InputMethodEvent((QQuickFramebufferObject*)self, (QInputMethodEvent*)param1);
}

void q_quickframebufferobject_super_input_method_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperInputMethodEvent((QQuickFramebufferObject*)self, (QInputMethodEvent*)param1);
}

void q_quickframebufferobject_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnInputMethodEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_focus_in_event(void* self, void* param1) {
    QQuickFramebufferObject_FocusInEvent((QQuickFramebufferObject*)self, (QFocusEvent*)param1);
}

void q_quickframebufferobject_super_focus_in_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperFocusInEvent((QQuickFramebufferObject*)self, (QFocusEvent*)param1);
}

void q_quickframebufferobject_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnFocusInEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_focus_out_event(void* self, void* param1) {
    QQuickFramebufferObject_FocusOutEvent((QQuickFramebufferObject*)self, (QFocusEvent*)param1);
}

void q_quickframebufferobject_super_focus_out_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperFocusOutEvent((QQuickFramebufferObject*)self, (QFocusEvent*)param1);
}

void q_quickframebufferobject_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnFocusOutEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mouse_press_event(void* self, void* event) {
    QQuickFramebufferObject_MousePressEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_super_mouse_press_event(void* self, void* event) {
    QQuickFramebufferObject_SuperMousePressEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnMousePressEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mouse_move_event(void* self, void* event) {
    QQuickFramebufferObject_MouseMoveEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_super_mouse_move_event(void* self, void* event) {
    QQuickFramebufferObject_SuperMouseMoveEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnMouseMoveEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mouse_release_event(void* self, void* event) {
    QQuickFramebufferObject_MouseReleaseEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_super_mouse_release_event(void* self, void* event) {
    QQuickFramebufferObject_SuperMouseReleaseEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnMouseReleaseEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mouse_double_click_event(void* self, void* event) {
    QQuickFramebufferObject_MouseDoubleClickEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_super_mouse_double_click_event(void* self, void* event) {
    QQuickFramebufferObject_SuperMouseDoubleClickEvent((QQuickFramebufferObject*)self, (QMouseEvent*)event);
}

void q_quickframebufferobject_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnMouseDoubleClickEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_mouse_ungrab_event(void* self) {
    QQuickFramebufferObject_MouseUngrabEvent((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_mouse_ungrab_event(void* self) {
    QQuickFramebufferObject_SuperMouseUngrabEvent((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_mouse_ungrab_event(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnMouseUngrabEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_touch_ungrab_event(void* self) {
    QQuickFramebufferObject_TouchUngrabEvent((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_touch_ungrab_event(void* self) {
    QQuickFramebufferObject_SuperTouchUngrabEvent((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_touch_ungrab_event(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnTouchUngrabEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_wheel_event(void* self, void* event) {
    QQuickFramebufferObject_WheelEvent((QQuickFramebufferObject*)self, (QWheelEvent*)event);
}

void q_quickframebufferobject_super_wheel_event(void* self, void* event) {
    QQuickFramebufferObject_SuperWheelEvent((QQuickFramebufferObject*)self, (QWheelEvent*)event);
}

void q_quickframebufferobject_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnWheelEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_touch_event(void* self, void* event) {
    QQuickFramebufferObject_TouchEvent((QQuickFramebufferObject*)self, (QTouchEvent*)event);
}

void q_quickframebufferobject_super_touch_event(void* self, void* event) {
    QQuickFramebufferObject_SuperTouchEvent((QQuickFramebufferObject*)self, (QTouchEvent*)event);
}

void q_quickframebufferobject_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnTouchEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_hover_enter_event(void* self, void* event) {
    QQuickFramebufferObject_HoverEnterEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_super_hover_enter_event(void* self, void* event) {
    QQuickFramebufferObject_SuperHoverEnterEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnHoverEnterEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_hover_move_event(void* self, void* event) {
    QQuickFramebufferObject_HoverMoveEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_super_hover_move_event(void* self, void* event) {
    QQuickFramebufferObject_SuperHoverMoveEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnHoverMoveEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_hover_leave_event(void* self, void* event) {
    QQuickFramebufferObject_HoverLeaveEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_super_hover_leave_event(void* self, void* event) {
    QQuickFramebufferObject_SuperHoverLeaveEvent((QQuickFramebufferObject*)self, (QHoverEvent*)event);
}

void q_quickframebufferobject_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnHoverLeaveEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_drag_enter_event(void* self, void* param1) {
    QQuickFramebufferObject_DragEnterEvent((QQuickFramebufferObject*)self, (QDragEnterEvent*)param1);
}

void q_quickframebufferobject_super_drag_enter_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperDragEnterEvent((QQuickFramebufferObject*)self, (QDragEnterEvent*)param1);
}

void q_quickframebufferobject_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnDragEnterEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_drag_move_event(void* self, void* param1) {
    QQuickFramebufferObject_DragMoveEvent((QQuickFramebufferObject*)self, (QDragMoveEvent*)param1);
}

void q_quickframebufferobject_super_drag_move_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperDragMoveEvent((QQuickFramebufferObject*)self, (QDragMoveEvent*)param1);
}

void q_quickframebufferobject_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnDragMoveEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_drag_leave_event(void* self, void* param1) {
    QQuickFramebufferObject_DragLeaveEvent((QQuickFramebufferObject*)self, (QDragLeaveEvent*)param1);
}

void q_quickframebufferobject_super_drag_leave_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperDragLeaveEvent((QQuickFramebufferObject*)self, (QDragLeaveEvent*)param1);
}

void q_quickframebufferobject_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnDragLeaveEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_drop_event(void* self, void* param1) {
    QQuickFramebufferObject_DropEvent((QQuickFramebufferObject*)self, (QDropEvent*)param1);
}

void q_quickframebufferobject_super_drop_event(void* self, void* param1) {
    QQuickFramebufferObject_SuperDropEvent((QQuickFramebufferObject*)self, (QDropEvent*)param1);
}

void q_quickframebufferobject_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnDropEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickFramebufferObject_ChildMouseEventFilter((QQuickFramebufferObject*)self, (QQuickItem*)param1, (QEvent*)param2);
}

bool q_quickframebufferobject_super_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickFramebufferObject_SuperChildMouseEventFilter((QQuickFramebufferObject*)self, (QQuickItem*)param1, (QEvent*)param2);
}

void q_quickframebufferobject_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickFramebufferObject_OnChildMouseEventFilter((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_update_polish(void* self) {
    QQuickFramebufferObject_UpdatePolish((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_update_polish(void* self) {
    QQuickFramebufferObject_SuperUpdatePolish((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_update_polish(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnUpdatePolish((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_event_filter(void* self, void* watched, void* event) {
    return QQuickFramebufferObject_EventFilter((QQuickFramebufferObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickframebufferobject_super_event_filter(void* self, void* watched, void* event) {
    return QQuickFramebufferObject_SuperEventFilter((QQuickFramebufferObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickframebufferobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickFramebufferObject_OnEventFilter((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_timer_event(void* self, void* event) {
    QQuickFramebufferObject_TimerEvent((QQuickFramebufferObject*)self, (QTimerEvent*)event);
}

void q_quickframebufferobject_super_timer_event(void* self, void* event) {
    QQuickFramebufferObject_SuperTimerEvent((QQuickFramebufferObject*)self, (QTimerEvent*)event);
}

void q_quickframebufferobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnTimerEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_child_event(void* self, void* event) {
    QQuickFramebufferObject_ChildEvent((QQuickFramebufferObject*)self, (QChildEvent*)event);
}

void q_quickframebufferobject_super_child_event(void* self, void* event) {
    QQuickFramebufferObject_SuperChildEvent((QQuickFramebufferObject*)self, (QChildEvent*)event);
}

void q_quickframebufferobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnChildEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_custom_event(void* self, void* event) {
    QQuickFramebufferObject_CustomEvent((QQuickFramebufferObject*)self, (QEvent*)event);
}

void q_quickframebufferobject_super_custom_event(void* self, void* event) {
    QQuickFramebufferObject_SuperCustomEvent((QQuickFramebufferObject*)self, (QEvent*)event);
}

void q_quickframebufferobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnCustomEvent((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_connect_notify(void* self, void* signal) {
    QQuickFramebufferObject_ConnectNotify((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

void q_quickframebufferobject_super_connect_notify(void* self, void* signal) {
    QQuickFramebufferObject_SuperConnectNotify((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

void q_quickframebufferobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnConnectNotify((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_disconnect_notify(void* self, void* signal) {
    QQuickFramebufferObject_DisconnectNotify((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

void q_quickframebufferobject_super_disconnect_notify(void* self, void* signal) {
    QQuickFramebufferObject_SuperDisconnectNotify((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

void q_quickframebufferobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnDisconnectNotify((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_is_component_complete(void* self) {
    return QQuickFramebufferObject_IsComponentComplete((QQuickFramebufferObject*)self);
}

bool q_quickframebufferobject_super_is_component_complete(void* self) {
    return QQuickFramebufferObject_SuperIsComponentComplete((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_is_component_complete(void* self, bool (*callback)()) {
    QQuickFramebufferObject_OnIsComponentComplete((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_update_input_method(void* self) {
    QQuickFramebufferObject_UpdateInputMethod((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_super_update_input_method(void* self) {
    QQuickFramebufferObject_SuperUpdateInputMethod((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_update_input_method(void* self, void (*callback)()) {
    QQuickFramebufferObject_OnUpdateInputMethod((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_width_valid(void* self) {
    return QQuickFramebufferObject_WidthValid((QQuickFramebufferObject*)self);
}

bool q_quickframebufferobject_super_width_valid(void* self) {
    return QQuickFramebufferObject_SuperWidthValid((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_width_valid(void* self, bool (*callback)()) {
    QQuickFramebufferObject_OnWidthValid((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_height_valid(void* self) {
    return QQuickFramebufferObject_HeightValid((QQuickFramebufferObject*)self);
}

bool q_quickframebufferobject_super_height_valid(void* self) {
    return QQuickFramebufferObject_SuperHeightValid((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_height_valid(void* self, bool (*callback)()) {
    QQuickFramebufferObject_OnHeightValid((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_set_implicit_size(void* self, double param1, double param2) {
    QQuickFramebufferObject_SetImplicitSize((QQuickFramebufferObject*)self, param1, param2);
}

void q_quickframebufferobject_super_set_implicit_size(void* self, double param1, double param2) {
    QQuickFramebufferObject_SuperSetImplicitSize((QQuickFramebufferObject*)self, param1, param2);
}

void q_quickframebufferobject_on_set_implicit_size(void* self, void (*callback)(void*, double, double)) {
    QQuickFramebufferObject_OnSetImplicitSize((QQuickFramebufferObject*)self, (intptr_t)callback);
}

QObject* q_quickframebufferobject_sender(void* self) {
    return QQuickFramebufferObject_Sender((QQuickFramebufferObject*)self);
}

QObject* q_quickframebufferobject_super_sender(void* self) {
    return QQuickFramebufferObject_SuperSender((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_sender(void* self, QObject* (*callback)()) {
    QQuickFramebufferObject_OnSender((QQuickFramebufferObject*)self, (intptr_t)callback);
}

int32_t q_quickframebufferobject_sender_signal_index(void* self) {
    return QQuickFramebufferObject_SenderSignalIndex((QQuickFramebufferObject*)self);
}

int32_t q_quickframebufferobject_super_sender_signal_index(void* self) {
    return QQuickFramebufferObject_SuperSenderSignalIndex((QQuickFramebufferObject*)self);
}

void q_quickframebufferobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickFramebufferObject_OnSenderSignalIndex((QQuickFramebufferObject*)self, (intptr_t)callback);
}

int32_t q_quickframebufferobject_receivers(void* self, const char* signal) {
    return QQuickFramebufferObject_Receivers((QQuickFramebufferObject*)self, signal);
}

int32_t q_quickframebufferobject_super_receivers(void* self, const char* signal) {
    return QQuickFramebufferObject_SuperReceivers((QQuickFramebufferObject*)self, signal);
}

void q_quickframebufferobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickFramebufferObject_OnReceivers((QQuickFramebufferObject*)self, (intptr_t)callback);
}

bool q_quickframebufferobject_is_signal_connected(void* self, void* signal) {
    return QQuickFramebufferObject_IsSignalConnected((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

bool q_quickframebufferobject_super_is_signal_connected(void* self, void* signal) {
    return QQuickFramebufferObject_SuperIsSignalConnected((QQuickFramebufferObject*)self, (QMetaMethod*)signal);
}

void q_quickframebufferobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickFramebufferObject_OnIsSignalConnected((QQuickFramebufferObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickframebufferobject_delete(void* self) {
    QQuickFramebufferObject_Delete((QQuickFramebufferObject*)(self));
}
