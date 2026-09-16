#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquickitem.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgtextureprovider.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqquickpainteditem.hpp"
#include "libqquickpainteditem.h"

QQuickPaintedItem* q_quickpainteditem_new() {
    return QQuickPaintedItem_New();
}

QQuickPaintedItem* q_quickpainteditem_new2(void* parent) {
    return QQuickPaintedItem_New2((QQuickItem*)parent);
}

const QMetaObject* q_quickpainteditem_meta_object(void* self) {
    return QQuickPaintedItem_MetaObject((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickPaintedItem_OnMetaObject((QQuickPaintedItem*)self, (intptr_t)callback);
}

const QMetaObject* q_quickpainteditem_super_meta_object(void* self) {
    return QQuickPaintedItem_SuperMetaObject((QQuickPaintedItem*)self);
}

void* q_quickpainteditem_metacast(void* self, const char* param1) {
    return QQuickPaintedItem_Metacast((QQuickPaintedItem*)self, param1);
}

void q_quickpainteditem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickPaintedItem_OnMetacast((QQuickPaintedItem*)self, (intptr_t)callback);
}

void* q_quickpainteditem_super_metacast(void* self, const char* param1) {
    return QQuickPaintedItem_SuperMetacast((QQuickPaintedItem*)self, param1);
}

int32_t q_quickpainteditem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickPaintedItem_Metacall((QQuickPaintedItem*)self, param1, param2, param3);
}

void q_quickpainteditem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickPaintedItem_OnMetacall((QQuickPaintedItem*)self, (intptr_t)callback);
}

int32_t q_quickpainteditem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickPaintedItem_SuperMetacall((QQuickPaintedItem*)self, param1, param2, param3);
}

const char* q_quickpainteditem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickpainteditem_update(void* self) {
    QQuickPaintedItem_Update((QQuickPaintedItem*)self);
}

bool q_quickpainteditem_opaque_painting(void* self) {
    return QQuickPaintedItem_OpaquePainting((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_opaque_painting(void* self, bool opaque) {
    QQuickPaintedItem_SetOpaquePainting((QQuickPaintedItem*)self, opaque);
}

bool q_quickpainteditem_antialiasing(void* self) {
    return QQuickPaintedItem_Antialiasing((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_antialiasing(void* self, bool enable) {
    QQuickPaintedItem_SetAntialiasing((QQuickPaintedItem*)self, enable);
}

bool q_quickpainteditem_mipmap(void* self) {
    return QQuickPaintedItem_Mipmap((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_mipmap(void* self, bool enable) {
    QQuickPaintedItem_SetMipmap((QQuickPaintedItem*)self, enable);
}

int32_t q_quickpainteditem_performance_hints(void* self) {
    return QQuickPaintedItem_PerformanceHints((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_performance_hint(void* self, int32_t hint) {
    QQuickPaintedItem_SetPerformanceHint((QQuickPaintedItem*)self, hint);
}

void q_quickpainteditem_set_performance_hints(void* self, int32_t hints) {
    QQuickPaintedItem_SetPerformanceHints((QQuickPaintedItem*)self, hints);
}

QRectF* q_quickpainteditem_contents_bounding_rect(void* self) {
    return QQuickPaintedItem_ContentsBoundingRect((QQuickPaintedItem*)self);
}

QSize* q_quickpainteditem_contents_size(void* self) {
    return QQuickPaintedItem_ContentsSize((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_contents_size(void* self, void* contentsSize) {
    QQuickPaintedItem_SetContentsSize((QQuickPaintedItem*)self, (QSize*)contentsSize);
}

void q_quickpainteditem_reset_contents_size(void* self) {
    QQuickPaintedItem_ResetContentsSize((QQuickPaintedItem*)self);
}

double q_quickpainteditem_contents_scale(void* self) {
    return QQuickPaintedItem_ContentsScale((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_contents_scale(void* self, double contentsScale) {
    QQuickPaintedItem_SetContentsScale((QQuickPaintedItem*)self, contentsScale);
}

QSize* q_quickpainteditem_texture_size(void* self) {
    return QQuickPaintedItem_TextureSize((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_texture_size(void* self, void* size) {
    QQuickPaintedItem_SetTextureSize((QQuickPaintedItem*)self, (QSize*)size);
}

QColor* q_quickpainteditem_fill_color(void* self) {
    return QQuickPaintedItem_FillColor((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_fill_color(void* self, void* fillColor) {
    QQuickPaintedItem_SetFillColor((QQuickPaintedItem*)self, (QColor*)fillColor);
}

int32_t q_quickpainteditem_render_target(void* self) {
    return QQuickPaintedItem_RenderTarget((QQuickPaintedItem*)self);
}

void q_quickpainteditem_set_render_target(void* self, int32_t target) {
    QQuickPaintedItem_SetRenderTarget((QQuickPaintedItem*)self, target);
}

void q_quickpainteditem_paint(void* self, void* painter) {
    QQuickPaintedItem_Paint((QQuickPaintedItem*)self, (QPainter*)painter);
}

void q_quickpainteditem_on_paint(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnPaint((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_super_paint(void* self, void* painter) {
    QQuickPaintedItem_SuperPaint((QQuickPaintedItem*)self, (QPainter*)painter);
}

bool q_quickpainteditem_is_texture_provider(void* self) {
    return QQuickPaintedItem_IsTextureProvider((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_is_texture_provider(void* self, bool (*callback)()) {
    QQuickPaintedItem_OnIsTextureProvider((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_super_is_texture_provider(void* self) {
    return QQuickPaintedItem_SuperIsTextureProvider((QQuickPaintedItem*)self);
}

QSGTextureProvider* q_quickpainteditem_texture_provider(void* self) {
    return QQuickPaintedItem_TextureProvider((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_texture_provider(void* self, QSGTextureProvider* (*callback)()) {
    QQuickPaintedItem_OnTextureProvider((QQuickPaintedItem*)self, (intptr_t)callback);
}

QSGTextureProvider* q_quickpainteditem_super_texture_provider(void* self) {
    return QQuickPaintedItem_SuperTextureProvider((QQuickPaintedItem*)self);
}

void q_quickpainteditem_fill_color_changed(void* self) {
    QQuickPaintedItem_FillColorChanged((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_fill_color_changed(void* self, void (*callback)(void*)) {
    QQuickPaintedItem_Connect_FillColorChanged((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_contents_size_changed(void* self) {
    QQuickPaintedItem_ContentsSizeChanged((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_contents_size_changed(void* self, void (*callback)(void*)) {
    QQuickPaintedItem_Connect_ContentsSizeChanged((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_contents_scale_changed(void* self) {
    QQuickPaintedItem_ContentsScaleChanged((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_contents_scale_changed(void* self, void (*callback)(void*)) {
    QQuickPaintedItem_Connect_ContentsScaleChanged((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_render_target_changed(void* self) {
    QQuickPaintedItem_RenderTargetChanged((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_render_target_changed(void* self, void (*callback)(void*)) {
    QQuickPaintedItem_Connect_RenderTargetChanged((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_texture_size_changed(void* self) {
    QQuickPaintedItem_TextureSizeChanged((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_texture_size_changed(void* self, void (*callback)(void*)) {
    QQuickPaintedItem_Connect_TextureSizeChanged((QQuickPaintedItem*)self, (intptr_t)callback);
}

QSGNode* q_quickpainteditem_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickPaintedItem_UpdatePaintNode((QQuickPaintedItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickpainteditem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*)) {
    QQuickPaintedItem_OnUpdatePaintNode((QQuickPaintedItem*)self, (intptr_t)callback);
}

QSGNode* q_quickpainteditem_super_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickPaintedItem_SuperUpdatePaintNode((QQuickPaintedItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickpainteditem_release_resources(void* self) {
    QQuickPaintedItem_ReleaseResources((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_release_resources(void* self, void (*callback)()) {
    QQuickPaintedItem_OnReleaseResources((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_super_release_resources(void* self) {
    QQuickPaintedItem_SuperReleaseResources((QQuickPaintedItem*)self);
}

void q_quickpainteditem_item_change(void* self, int32_t param1, void* param2) {
    QQuickPaintedItem_ItemChange((QQuickPaintedItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickpainteditem_on_item_change(void* self, void (*callback)(void*, int32_t, void*)) {
    QQuickPaintedItem_OnItemChange((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_super_item_change(void* self, int32_t param1, void* param2) {
    QQuickPaintedItem_SuperItemChange((QQuickPaintedItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

const char* q_quickpainteditem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickpainteditem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickpainteditem_update1(void* self, void* rect) {
    QQuickPaintedItem_Update1((QQuickPaintedItem*)self, (QRect*)rect);
}

void q_quickpainteditem_set_performance_hint2(void* self, int32_t hint, bool enabled) {
    QQuickPaintedItem_SetPerformanceHint2((QQuickPaintedItem*)self, hint, enabled);
}

QQmlParserStatus* q_quickpainteditem_as_q_qml_parser_status(void* self) {
    return QQuickItem_AsQQmlParserStatus((QQuickItem*)self);
}

QQuickPaintedItem* q_quickpainteditem_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuickPaintedItem*)QQuickItem_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

QQuickWindow* q_quickpainteditem_window(void* self) {
    return QQuickItem_Window((QQuickItem*)self);
}

QQuickItem* q_quickpainteditem_parent_item(void* self) {
    return QQuickItem_ParentItem((QQuickItem*)self);
}

void q_quickpainteditem_set_parent_item(void* self, void* parent) {
    QQuickItem_SetParentItem((QQuickItem*)self, (QQuickItem*)parent);
}

void q_quickpainteditem_stack_before(void* self, void* param1) {
    QQuickItem_StackBefore((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickpainteditem_stack_after(void* self, void* param1) {
    QQuickItem_StackAfter((QQuickItem*)self, (QQuickItem*)param1);
}

QRectF* q_quickpainteditem_children_rect(void* self) {
    return QQuickItem_ChildrenRect((QQuickItem*)self);
}

libqt_list /* of QQuickItem* */ q_quickpainteditem_child_items(void* self) {
    libqt_list _arr = QQuickItem_ChildItems((QQuickItem*)self);
    return _arr;
}

bool q_quickpainteditem_clip(void* self) {
    return QQuickItem_Clip((QQuickItem*)self);
}

void q_quickpainteditem_set_clip(void* self, bool clip) {
    QQuickItem_SetClip((QQuickItem*)self, clip);
}

const char* q_quickpainteditem_state(void* self) {
    libqt_string _str = QQuickItem_State((QQuickItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickpainteditem_set_state(void* self, const char* state) {
    QQuickItem_SetState((QQuickItem*)self, qstring(state));
}

double q_quickpainteditem_baseline_offset(void* self) {
    return QQuickItem_BaselineOffset((QQuickItem*)self);
}

void q_quickpainteditem_set_baseline_offset(void* self, double baselineOffset) {
    QQuickItem_SetBaselineOffset((QQuickItem*)self, baselineOffset);
}

double q_quickpainteditem_x(void* self) {
    return QQuickItem_X((QQuickItem*)self);
}

double q_quickpainteditem_y(void* self) {
    return QQuickItem_Y((QQuickItem*)self);
}

QPointF* q_quickpainteditem_position(void* self) {
    return QQuickItem_Position((QQuickItem*)self);
}

void q_quickpainteditem_set_x(void* self, double x) {
    QQuickItem_SetX((QQuickItem*)self, x);
}

void q_quickpainteditem_set_y(void* self, double y) {
    QQuickItem_SetY((QQuickItem*)self, y);
}

void q_quickpainteditem_set_position(void* self, void* position) {
    QQuickItem_SetPosition((QQuickItem*)self, (QPointF*)position);
}

double q_quickpainteditem_width(void* self) {
    return QQuickItem_Width((QQuickItem*)self);
}

void q_quickpainteditem_set_width(void* self, double width) {
    QQuickItem_SetWidth((QQuickItem*)self, width);
}

void q_quickpainteditem_reset_width(void* self) {
    QQuickItem_ResetWidth((QQuickItem*)self);
}

void q_quickpainteditem_set_implicit_width(void* self, double implicitWidth) {
    QQuickItem_SetImplicitWidth((QQuickItem*)self, implicitWidth);
}

double q_quickpainteditem_implicit_width(void* self) {
    return QQuickItem_ImplicitWidth((QQuickItem*)self);
}

double q_quickpainteditem_height(void* self) {
    return QQuickItem_Height((QQuickItem*)self);
}

void q_quickpainteditem_set_height(void* self, double height) {
    QQuickItem_SetHeight((QQuickItem*)self, height);
}

void q_quickpainteditem_reset_height(void* self) {
    QQuickItem_ResetHeight((QQuickItem*)self);
}

void q_quickpainteditem_set_implicit_height(void* self, double implicitHeight) {
    QQuickItem_SetImplicitHeight((QQuickItem*)self, implicitHeight);
}

double q_quickpainteditem_implicit_height(void* self) {
    return QQuickItem_ImplicitHeight((QQuickItem*)self);
}

QSizeF* q_quickpainteditem_size(void* self) {
    return QQuickItem_Size((QQuickItem*)self);
}

void q_quickpainteditem_set_size(void* self, void* size) {
    QQuickItem_SetSize((QQuickItem*)self, (QSizeF*)size);
}

int32_t q_quickpainteditem_transform_origin(void* self) {
    return QQuickItem_TransformOrigin((QQuickItem*)self);
}

void q_quickpainteditem_set_transform_origin(void* self, int32_t transformOrigin) {
    QQuickItem_SetTransformOrigin((QQuickItem*)self, transformOrigin);
}

QPointF* q_quickpainteditem_transform_origin_point(void* self) {
    return QQuickItem_TransformOriginPoint((QQuickItem*)self);
}

void q_quickpainteditem_set_transform_origin_point(void* self, void* transformOriginPoint) {
    QQuickItem_SetTransformOriginPoint((QQuickItem*)self, (QPointF*)transformOriginPoint);
}

double q_quickpainteditem_z(void* self) {
    return QQuickItem_Z((QQuickItem*)self);
}

void q_quickpainteditem_set_z(void* self, double z) {
    QQuickItem_SetZ((QQuickItem*)self, z);
}

double q_quickpainteditem_rotation(void* self) {
    return QQuickItem_Rotation((QQuickItem*)self);
}

void q_quickpainteditem_set_rotation(void* self, double rotation) {
    QQuickItem_SetRotation((QQuickItem*)self, rotation);
}

double q_quickpainteditem_scale(void* self) {
    return QQuickItem_Scale((QQuickItem*)self);
}

void q_quickpainteditem_set_scale(void* self, double scale) {
    QQuickItem_SetScale((QQuickItem*)self, scale);
}

double q_quickpainteditem_opacity(void* self) {
    return QQuickItem_Opacity((QQuickItem*)self);
}

void q_quickpainteditem_set_opacity(void* self, double opacity) {
    QQuickItem_SetOpacity((QQuickItem*)self, opacity);
}

bool q_quickpainteditem_is_visible(void* self) {
    return QQuickItem_IsVisible((QQuickItem*)self);
}

void q_quickpainteditem_set_visible(void* self, bool visible) {
    QQuickItem_SetVisible((QQuickItem*)self, visible);
}

bool q_quickpainteditem_is_enabled(void* self) {
    return QQuickItem_IsEnabled((QQuickItem*)self);
}

void q_quickpainteditem_set_enabled(void* self, bool enabled) {
    QQuickItem_SetEnabled((QQuickItem*)self, enabled);
}

bool q_quickpainteditem_smooth(void* self) {
    return QQuickItem_Smooth((QQuickItem*)self);
}

void q_quickpainteditem_set_smooth(void* self, bool smooth) {
    QQuickItem_SetSmooth((QQuickItem*)self, smooth);
}

bool q_quickpainteditem_active_focus_on_tab(void* self) {
    return QQuickItem_ActiveFocusOnTab((QQuickItem*)self);
}

void q_quickpainteditem_set_active_focus_on_tab(void* self, bool activeFocusOnTab) {
    QQuickItem_SetActiveFocusOnTab((QQuickItem*)self, activeFocusOnTab);
}

void q_quickpainteditem_reset_antialiasing(void* self) {
    QQuickItem_ResetAntialiasing((QQuickItem*)self);
}

int32_t q_quickpainteditem_flags(void* self) {
    return QQuickItem_Flags((QQuickItem*)self);
}

void q_quickpainteditem_set_flag(void* self, int32_t flag) {
    QQuickItem_SetFlag((QQuickItem*)self, flag);
}

void q_quickpainteditem_set_flags(void* self, int32_t flags) {
    QQuickItem_SetFlags((QQuickItem*)self, flags);
}

QQuickItem* q_quickpainteditem_viewport_item(void* self) {
    return QQuickItem_ViewportItem((QQuickItem*)self);
}

bool q_quickpainteditem_has_active_focus(void* self) {
    return QQuickItem_HasActiveFocus((QQuickItem*)self);
}

bool q_quickpainteditem_has_focus(void* self) {
    return QQuickItem_HasFocus((QQuickItem*)self);
}

void q_quickpainteditem_set_focus(void* self, bool focus) {
    QQuickItem_SetFocus((QQuickItem*)self, focus);
}

void q_quickpainteditem_set_focus2(void* self, bool focus, int32_t reason) {
    QQuickItem_SetFocus2((QQuickItem*)self, focus, reason);
}

bool q_quickpainteditem_is_focus_scope(void* self) {
    return QQuickItem_IsFocusScope((QQuickItem*)self);
}

QQuickItem* q_quickpainteditem_scoped_focus_item(void* self) {
    return QQuickItem_ScopedFocusItem((QQuickItem*)self);
}

int32_t q_quickpainteditem_focus_policy(void* self) {
    return QQuickItem_FocusPolicy((QQuickItem*)self);
}

void q_quickpainteditem_set_focus_policy(void* self, int32_t policy) {
    QQuickItem_SetFocusPolicy((QQuickItem*)self, policy);
}

bool q_quickpainteditem_is_ancestor_of(void* self, void* child) {
    return QQuickItem_IsAncestorOf((QQuickItem*)self, (QQuickItem*)child);
}

int32_t q_quickpainteditem_accepted_mouse_buttons(void* self) {
    return QQuickItem_AcceptedMouseButtons((QQuickItem*)self);
}

void q_quickpainteditem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QQuickItem_SetAcceptedMouseButtons((QQuickItem*)self, buttons);
}

bool q_quickpainteditem_accept_hover_events(void* self) {
    return QQuickItem_AcceptHoverEvents((QQuickItem*)self);
}

void q_quickpainteditem_set_accept_hover_events(void* self, bool enabled) {
    QQuickItem_SetAcceptHoverEvents((QQuickItem*)self, enabled);
}

bool q_quickpainteditem_accept_touch_events(void* self) {
    return QQuickItem_AcceptTouchEvents((QQuickItem*)self);
}

void q_quickpainteditem_set_accept_touch_events(void* self, bool accept) {
    QQuickItem_SetAcceptTouchEvents((QQuickItem*)self, accept);
}

QCursor* q_quickpainteditem_cursor(void* self) {
    return QQuickItem_Cursor((QQuickItem*)self);
}

void q_quickpainteditem_set_cursor(void* self, void* cursor) {
    QQuickItem_SetCursor((QQuickItem*)self, (QCursor*)cursor);
}

void q_quickpainteditem_unset_cursor(void* self) {
    QQuickItem_UnsetCursor((QQuickItem*)self);
}

bool q_quickpainteditem_is_under_mouse(void* self) {
    return QQuickItem_IsUnderMouse((QQuickItem*)self);
}

void q_quickpainteditem_grab_mouse(void* self) {
    QQuickItem_GrabMouse((QQuickItem*)self);
}

void q_quickpainteditem_ungrab_mouse(void* self) {
    QQuickItem_UngrabMouse((QQuickItem*)self);
}

bool q_quickpainteditem_keep_mouse_grab(void* self) {
    return QQuickItem_KeepMouseGrab((QQuickItem*)self);
}

void q_quickpainteditem_set_keep_mouse_grab(void* self, bool keepMouseGrab) {
    QQuickItem_SetKeepMouseGrab((QQuickItem*)self, keepMouseGrab);
}

bool q_quickpainteditem_filters_child_mouse_events(void* self) {
    return QQuickItem_FiltersChildMouseEvents((QQuickItem*)self);
}

void q_quickpainteditem_set_filters_child_mouse_events(void* self, bool filter) {
    QQuickItem_SetFiltersChildMouseEvents((QQuickItem*)self, filter);
}

void q_quickpainteditem_grab_touch_points(void* self, libqt_list /* of int */ ids) {
    QQuickItem_GrabTouchPoints((QQuickItem*)self, ids);
}

void q_quickpainteditem_ungrab_touch_points(void* self) {
    QQuickItem_UngrabTouchPoints((QQuickItem*)self);
}

bool q_quickpainteditem_keep_touch_grab(void* self) {
    return QQuickItem_KeepTouchGrab((QQuickItem*)self);
}

void q_quickpainteditem_set_keep_touch_grab(void* self, bool keepTouchGrab) {
    QQuickItem_SetKeepTouchGrab((QQuickItem*)self, keepTouchGrab);
}

bool q_quickpainteditem_grab_to_image(void* self, void* callback) {
    return QQuickItem_GrabToImage((QQuickItem*)self, (QJSValue*)callback);
}

QObject* q_quickpainteditem_containment_mask(void* self) {
    return QQuickItem_ContainmentMask((QQuickItem*)self);
}

void q_quickpainteditem_set_containment_mask(void* self, void* mask) {
    QQuickItem_SetContainmentMask((QQuickItem*)self, (QObject*)mask);
}

QTransform* q_quickpainteditem_item_transform(void* self, void* param1, bool* param2) {
    return QQuickItem_ItemTransform((QQuickItem*)self, (QQuickItem*)param1, (bool*)param2);
}

QPointF* q_quickpainteditem_map_to_scene(void* self, void* point) {
    return QQuickItem_MapToScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickpainteditem_map_rect_to_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectToItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickpainteditem_map_rect_to_scene(void* self, void* rect) {
    return QQuickItem_MapRectToScene((QQuickItem*)self, (QRectF*)rect);
}

QPointF* q_quickpainteditem_map_from_scene(void* self, void* point) {
    return QQuickItem_MapFromScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickpainteditem_map_rect_from_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectFromItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickpainteditem_map_rect_from_scene(void* self, void* rect) {
    return QQuickItem_MapRectFromScene((QQuickItem*)self, (QRectF*)rect);
}

void q_quickpainteditem_polish(void* self) {
    QQuickItem_Polish((QQuickItem*)self);
}

QPointF* q_quickpainteditem_map_from_item2(void* self, void* item, void* point) {
    return QQuickItem_MapFromItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickpainteditem_map_from_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapFromItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickpainteditem_map_from_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapFromItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickpainteditem_map_from_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapFromItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickpainteditem_map_to_item2(void* self, void* item, void* point) {
    return QQuickItem_MapToItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickpainteditem_map_to_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapToItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickpainteditem_map_to_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapToItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickpainteditem_map_to_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapToItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickpainteditem_map_from_global2(void* self, double x, double y) {
    return QQuickItem_MapFromGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickpainteditem_map_from_global3(void* self, void* point) {
    return QQuickItem_MapFromGlobal3((QQuickItem*)self, (QPointF*)point);
}

QPointF* q_quickpainteditem_map_to_global2(void* self, double x, double y) {
    return QQuickItem_MapToGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickpainteditem_map_to_global3(void* self, void* point) {
    return QQuickItem_MapToGlobal3((QQuickItem*)self, (QPointF*)point);
}

void q_quickpainteditem_force_active_focus(void* self) {
    QQuickItem_ForceActiveFocus((QQuickItem*)self);
}

void q_quickpainteditem_force_active_focus2(void* self, int32_t reason) {
    QQuickItem_ForceActiveFocus2((QQuickItem*)self, reason);
}

QQuickItem* q_quickpainteditem_next_item_in_focus_chain(void* self) {
    return QQuickItem_NextItemInFocusChain((QQuickItem*)self);
}

QQuickItem* q_quickpainteditem_child_at(void* self, double x, double y) {
    return QQuickItem_ChildAt((QQuickItem*)self, x, y);
}

void q_quickpainteditem_ensure_polished(void* self) {
    QQuickItem_EnsurePolished((QQuickItem*)self);
}

void q_quickpainteditem_dump_item_tree(void* self) {
    QQuickItem_DumpItemTree((QQuickItem*)self);
}

void q_quickpainteditem_children_rect_changed(void* self, void* param1) {
    QQuickItem_ChildrenRectChanged((QQuickItem*)self, (QRectF*)param1);
}

void q_quickpainteditem_on_children_rect_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ChildrenRectChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_baseline_offset_changed(void* self, double param1) {
    QQuickItem_BaselineOffsetChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_baseline_offset_changed(void* self, void (*callback)(void*, double)) {
    QQuickItem_Connect_BaselineOffsetChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_state_changed(void* self, const char* param1) {
    QQuickItem_StateChanged((QQuickItem*)self, qstring(param1));
}

void q_quickpainteditem_on_state_changed(void* self, void (*callback)(void*, const char*)) {
    QQuickItem_Connect_StateChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_focus_changed(void* self, bool param1) {
    QQuickItem_FocusChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_FocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_active_focus_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_active_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_focus_policy_changed(void* self, int32_t param1) {
    QQuickItem_FocusPolicyChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_FocusPolicyChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_active_focus_on_tab_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusOnTabChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusOnTabChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_parent_changed(void* self, void* param1) {
    QQuickItem_ParentChanged((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickpainteditem_on_parent_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ParentChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_transform_origin_changed(void* self, int32_t param1) {
    QQuickItem_TransformOriginChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_TransformOriginChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_smooth_changed(void* self, bool param1) {
    QQuickItem_SmoothChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_smooth_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_SmoothChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_antialiasing_changed(void* self, bool param1) {
    QQuickItem_AntialiasingChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_antialiasing_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_AntialiasingChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_clip_changed(void* self, bool param1) {
    QQuickItem_ClipChanged((QQuickItem*)self, param1);
}

void q_quickpainteditem_on_clip_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ClipChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_window_changed(void* self, void* window) {
    QQuickItem_WindowChanged((QQuickItem*)self, (QQuickWindow*)window);
}

void q_quickpainteditem_on_window_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_WindowChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_children_changed(void* self) {
    QQuickItem_ChildrenChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_opacity_changed(void* self) {
    QQuickItem_OpacityChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_OpacityChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_enabled_changed(void* self) {
    QQuickItem_EnabledChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_EnabledChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_visible_changed(void* self) {
    QQuickItem_VisibleChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_visible_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_visible_children_changed(void* self) {
    QQuickItem_VisibleChildrenChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_visible_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_rotation_changed(void* self) {
    QQuickItem_RotationChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_RotationChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_scale_changed(void* self) {
    QQuickItem_ScaleChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_scale_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ScaleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_x_changed(void* self) {
    QQuickItem_XChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_x_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_XChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_y_changed(void* self) {
    QQuickItem_YChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_y_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_YChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_width_changed(void* self) {
    QQuickItem_WidthChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_WidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_height_changed(void* self) {
    QQuickItem_HeightChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_HeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_z_changed(void* self) {
    QQuickItem_ZChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_z_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ZChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_implicit_width_changed(void* self) {
    QQuickItem_ImplicitWidthChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_implicit_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitWidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_implicit_height_changed(void* self) {
    QQuickItem_ImplicitHeightChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_implicit_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitHeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_containment_mask_changed(void* self) {
    QQuickItem_ContainmentMaskChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_containment_mask_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ContainmentMaskChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_palette_changed(void* self) {
    QQuickItem_PaletteChanged((QQuickItem*)self);
}

void q_quickpainteditem_on_palette_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_palette_created(void* self) {
    QQuickItem_PaletteCreated((QQuickItem*)self);
}

void q_quickpainteditem_on_palette_created(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteCreated((QQuickItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_set_flag2(void* self, int32_t flag, bool enabled) {
    QQuickItem_SetFlag2((QQuickItem*)self, flag, enabled);
}

bool q_quickpainteditem_grab_to_image22(void* self, void* callback, void* targetSize) {
    return QQuickItem_GrabToImage22((QQuickItem*)self, (QJSValue*)callback, (QSize*)targetSize);
}

QQuickItem* q_quickpainteditem_next_item_in_focus_chain1(void* self, bool forward) {
    return QQuickItem_NextItemInFocusChain1((QQuickItem*)self, forward);
}

const char* q_quickpainteditem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickpainteditem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickpainteditem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickpainteditem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickpainteditem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickpainteditem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickpainteditem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickpainteditem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickpainteditem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickpainteditem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickpainteditem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickpainteditem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickpainteditem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickpainteditem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickpainteditem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickpainteditem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickpainteditem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickpainteditem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickpainteditem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickpainteditem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickpainteditem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickpainteditem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickpainteditem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickpainteditem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickpainteditem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickpainteditem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickpainteditem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickpainteditem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickpainteditem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickpainteditem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickpainteditem_dynamic_property_names\n");
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

QBindingStorage* q_quickpainteditem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickpainteditem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickpainteditem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickpainteditem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickpainteditem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickpainteditem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickpainteditem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickpainteditem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickpainteditem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickpainteditem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickpainteditem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickpainteditem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickpainteditem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickpainteditem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickpainteditem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickpainteditem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickpainteditem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickpainteditem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QRectF* q_quickpainteditem_bounding_rect(void* self) {
    return QQuickPaintedItem_BoundingRect((QQuickPaintedItem*)self);
}

QRectF* q_quickpainteditem_super_bounding_rect(void* self) {
    return QQuickPaintedItem_SuperBoundingRect((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QQuickPaintedItem_OnBoundingRect((QQuickPaintedItem*)self, (intptr_t)callback);
}

QRectF* q_quickpainteditem_clip_rect(void* self) {
    return QQuickPaintedItem_ClipRect((QQuickPaintedItem*)self);
}

QRectF* q_quickpainteditem_super_clip_rect(void* self) {
    return QQuickPaintedItem_SuperClipRect((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_clip_rect(void* self, QRectF* (*callback)()) {
    QQuickPaintedItem_OnClipRect((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_contains(void* self, void* point) {
    return QQuickPaintedItem_Contains((QQuickPaintedItem*)self, (QPointF*)point);
}

bool q_quickpainteditem_super_contains(void* self, void* point) {
    return QQuickPaintedItem_SuperContains((QQuickPaintedItem*)self, (QPointF*)point);
}

void q_quickpainteditem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QQuickPaintedItem_OnContains((QQuickPaintedItem*)self, (intptr_t)callback);
}

QVariant* q_quickpainteditem_input_method_query(void* self, int32_t query) {
    return QQuickPaintedItem_InputMethodQuery((QQuickPaintedItem*)self, query);
}

QVariant* q_quickpainteditem_super_input_method_query(void* self, int32_t query) {
    return QQuickPaintedItem_SuperInputMethodQuery((QQuickPaintedItem*)self, query);
}

void q_quickpainteditem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QQuickPaintedItem_OnInputMethodQuery((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_event(void* self, void* param1) {
    return QQuickPaintedItem_Event((QQuickPaintedItem*)self, (QEvent*)param1);
}

bool q_quickpainteditem_super_event(void* self, void* param1) {
    return QQuickPaintedItem_SuperEvent((QQuickPaintedItem*)self, (QEvent*)param1);
}

void q_quickpainteditem_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickPaintedItem_OnEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickPaintedItem_GeometryChange((QQuickPaintedItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickpainteditem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickPaintedItem_SuperGeometryChange((QQuickPaintedItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickpainteditem_on_geometry_change(void* self, void (*callback)(void*, void*, void*)) {
    QQuickPaintedItem_OnGeometryChange((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_class_begin(void* self) {
    QQuickPaintedItem_ClassBegin((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_class_begin(void* self) {
    QQuickPaintedItem_SuperClassBegin((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_class_begin(void* self, void (*callback)()) {
    QQuickPaintedItem_OnClassBegin((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_component_complete(void* self) {
    QQuickPaintedItem_ComponentComplete((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_component_complete(void* self) {
    QQuickPaintedItem_SuperComponentComplete((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_component_complete(void* self, void (*callback)()) {
    QQuickPaintedItem_OnComponentComplete((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_key_press_event(void* self, void* event) {
    QQuickPaintedItem_KeyPressEvent((QQuickPaintedItem*)self, (QKeyEvent*)event);
}

void q_quickpainteditem_super_key_press_event(void* self, void* event) {
    QQuickPaintedItem_SuperKeyPressEvent((QQuickPaintedItem*)self, (QKeyEvent*)event);
}

void q_quickpainteditem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnKeyPressEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_key_release_event(void* self, void* event) {
    QQuickPaintedItem_KeyReleaseEvent((QQuickPaintedItem*)self, (QKeyEvent*)event);
}

void q_quickpainteditem_super_key_release_event(void* self, void* event) {
    QQuickPaintedItem_SuperKeyReleaseEvent((QQuickPaintedItem*)self, (QKeyEvent*)event);
}

void q_quickpainteditem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnKeyReleaseEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_input_method_event(void* self, void* param1) {
    QQuickPaintedItem_InputMethodEvent((QQuickPaintedItem*)self, (QInputMethodEvent*)param1);
}

void q_quickpainteditem_super_input_method_event(void* self, void* param1) {
    QQuickPaintedItem_SuperInputMethodEvent((QQuickPaintedItem*)self, (QInputMethodEvent*)param1);
}

void q_quickpainteditem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnInputMethodEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_focus_in_event(void* self, void* param1) {
    QQuickPaintedItem_FocusInEvent((QQuickPaintedItem*)self, (QFocusEvent*)param1);
}

void q_quickpainteditem_super_focus_in_event(void* self, void* param1) {
    QQuickPaintedItem_SuperFocusInEvent((QQuickPaintedItem*)self, (QFocusEvent*)param1);
}

void q_quickpainteditem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnFocusInEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_focus_out_event(void* self, void* param1) {
    QQuickPaintedItem_FocusOutEvent((QQuickPaintedItem*)self, (QFocusEvent*)param1);
}

void q_quickpainteditem_super_focus_out_event(void* self, void* param1) {
    QQuickPaintedItem_SuperFocusOutEvent((QQuickPaintedItem*)self, (QFocusEvent*)param1);
}

void q_quickpainteditem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnFocusOutEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_mouse_press_event(void* self, void* event) {
    QQuickPaintedItem_MousePressEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_super_mouse_press_event(void* self, void* event) {
    QQuickPaintedItem_SuperMousePressEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnMousePressEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_mouse_move_event(void* self, void* event) {
    QQuickPaintedItem_MouseMoveEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_super_mouse_move_event(void* self, void* event) {
    QQuickPaintedItem_SuperMouseMoveEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnMouseMoveEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_mouse_release_event(void* self, void* event) {
    QQuickPaintedItem_MouseReleaseEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_super_mouse_release_event(void* self, void* event) {
    QQuickPaintedItem_SuperMouseReleaseEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnMouseReleaseEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_mouse_double_click_event(void* self, void* event) {
    QQuickPaintedItem_MouseDoubleClickEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_super_mouse_double_click_event(void* self, void* event) {
    QQuickPaintedItem_SuperMouseDoubleClickEvent((QQuickPaintedItem*)self, (QMouseEvent*)event);
}

void q_quickpainteditem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnMouseDoubleClickEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_mouse_ungrab_event(void* self) {
    QQuickPaintedItem_MouseUngrabEvent((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_mouse_ungrab_event(void* self) {
    QQuickPaintedItem_SuperMouseUngrabEvent((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_mouse_ungrab_event(void* self, void (*callback)()) {
    QQuickPaintedItem_OnMouseUngrabEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_touch_ungrab_event(void* self) {
    QQuickPaintedItem_TouchUngrabEvent((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_touch_ungrab_event(void* self) {
    QQuickPaintedItem_SuperTouchUngrabEvent((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_touch_ungrab_event(void* self, void (*callback)()) {
    QQuickPaintedItem_OnTouchUngrabEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_wheel_event(void* self, void* event) {
    QQuickPaintedItem_WheelEvent((QQuickPaintedItem*)self, (QWheelEvent*)event);
}

void q_quickpainteditem_super_wheel_event(void* self, void* event) {
    QQuickPaintedItem_SuperWheelEvent((QQuickPaintedItem*)self, (QWheelEvent*)event);
}

void q_quickpainteditem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnWheelEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_touch_event(void* self, void* event) {
    QQuickPaintedItem_TouchEvent((QQuickPaintedItem*)self, (QTouchEvent*)event);
}

void q_quickpainteditem_super_touch_event(void* self, void* event) {
    QQuickPaintedItem_SuperTouchEvent((QQuickPaintedItem*)self, (QTouchEvent*)event);
}

void q_quickpainteditem_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnTouchEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_hover_enter_event(void* self, void* event) {
    QQuickPaintedItem_HoverEnterEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_super_hover_enter_event(void* self, void* event) {
    QQuickPaintedItem_SuperHoverEnterEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnHoverEnterEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_hover_move_event(void* self, void* event) {
    QQuickPaintedItem_HoverMoveEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_super_hover_move_event(void* self, void* event) {
    QQuickPaintedItem_SuperHoverMoveEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnHoverMoveEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_hover_leave_event(void* self, void* event) {
    QQuickPaintedItem_HoverLeaveEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_super_hover_leave_event(void* self, void* event) {
    QQuickPaintedItem_SuperHoverLeaveEvent((QQuickPaintedItem*)self, (QHoverEvent*)event);
}

void q_quickpainteditem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnHoverLeaveEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_drag_enter_event(void* self, void* param1) {
    QQuickPaintedItem_DragEnterEvent((QQuickPaintedItem*)self, (QDragEnterEvent*)param1);
}

void q_quickpainteditem_super_drag_enter_event(void* self, void* param1) {
    QQuickPaintedItem_SuperDragEnterEvent((QQuickPaintedItem*)self, (QDragEnterEvent*)param1);
}

void q_quickpainteditem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnDragEnterEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_drag_move_event(void* self, void* param1) {
    QQuickPaintedItem_DragMoveEvent((QQuickPaintedItem*)self, (QDragMoveEvent*)param1);
}

void q_quickpainteditem_super_drag_move_event(void* self, void* param1) {
    QQuickPaintedItem_SuperDragMoveEvent((QQuickPaintedItem*)self, (QDragMoveEvent*)param1);
}

void q_quickpainteditem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnDragMoveEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_drag_leave_event(void* self, void* param1) {
    QQuickPaintedItem_DragLeaveEvent((QQuickPaintedItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickpainteditem_super_drag_leave_event(void* self, void* param1) {
    QQuickPaintedItem_SuperDragLeaveEvent((QQuickPaintedItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickpainteditem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnDragLeaveEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_drop_event(void* self, void* param1) {
    QQuickPaintedItem_DropEvent((QQuickPaintedItem*)self, (QDropEvent*)param1);
}

void q_quickpainteditem_super_drop_event(void* self, void* param1) {
    QQuickPaintedItem_SuperDropEvent((QQuickPaintedItem*)self, (QDropEvent*)param1);
}

void q_quickpainteditem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnDropEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickPaintedItem_ChildMouseEventFilter((QQuickPaintedItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

bool q_quickpainteditem_super_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickPaintedItem_SuperChildMouseEventFilter((QQuickPaintedItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

void q_quickpainteditem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickPaintedItem_OnChildMouseEventFilter((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_update_polish(void* self) {
    QQuickPaintedItem_UpdatePolish((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_update_polish(void* self) {
    QQuickPaintedItem_SuperUpdatePolish((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_update_polish(void* self, void (*callback)()) {
    QQuickPaintedItem_OnUpdatePolish((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_event_filter(void* self, void* watched, void* event) {
    return QQuickPaintedItem_EventFilter((QQuickPaintedItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickpainteditem_super_event_filter(void* self, void* watched, void* event) {
    return QQuickPaintedItem_SuperEventFilter((QQuickPaintedItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickpainteditem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickPaintedItem_OnEventFilter((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_timer_event(void* self, void* event) {
    QQuickPaintedItem_TimerEvent((QQuickPaintedItem*)self, (QTimerEvent*)event);
}

void q_quickpainteditem_super_timer_event(void* self, void* event) {
    QQuickPaintedItem_SuperTimerEvent((QQuickPaintedItem*)self, (QTimerEvent*)event);
}

void q_quickpainteditem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnTimerEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_child_event(void* self, void* event) {
    QQuickPaintedItem_ChildEvent((QQuickPaintedItem*)self, (QChildEvent*)event);
}

void q_quickpainteditem_super_child_event(void* self, void* event) {
    QQuickPaintedItem_SuperChildEvent((QQuickPaintedItem*)self, (QChildEvent*)event);
}

void q_quickpainteditem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnChildEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_custom_event(void* self, void* event) {
    QQuickPaintedItem_CustomEvent((QQuickPaintedItem*)self, (QEvent*)event);
}

void q_quickpainteditem_super_custom_event(void* self, void* event) {
    QQuickPaintedItem_SuperCustomEvent((QQuickPaintedItem*)self, (QEvent*)event);
}

void q_quickpainteditem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnCustomEvent((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_connect_notify(void* self, void* signal) {
    QQuickPaintedItem_ConnectNotify((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

void q_quickpainteditem_super_connect_notify(void* self, void* signal) {
    QQuickPaintedItem_SuperConnectNotify((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

void q_quickpainteditem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnConnectNotify((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_disconnect_notify(void* self, void* signal) {
    QQuickPaintedItem_DisconnectNotify((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

void q_quickpainteditem_super_disconnect_notify(void* self, void* signal) {
    QQuickPaintedItem_SuperDisconnectNotify((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

void q_quickpainteditem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickPaintedItem_OnDisconnectNotify((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_is_component_complete(void* self) {
    return QQuickPaintedItem_IsComponentComplete((QQuickPaintedItem*)self);
}

bool q_quickpainteditem_super_is_component_complete(void* self) {
    return QQuickPaintedItem_SuperIsComponentComplete((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_is_component_complete(void* self, bool (*callback)()) {
    QQuickPaintedItem_OnIsComponentComplete((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_update_input_method(void* self) {
    QQuickPaintedItem_UpdateInputMethod((QQuickPaintedItem*)self);
}

void q_quickpainteditem_super_update_input_method(void* self) {
    QQuickPaintedItem_SuperUpdateInputMethod((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_update_input_method(void* self, void (*callback)()) {
    QQuickPaintedItem_OnUpdateInputMethod((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_width_valid(void* self) {
    return QQuickPaintedItem_WidthValid((QQuickPaintedItem*)self);
}

bool q_quickpainteditem_super_width_valid(void* self) {
    return QQuickPaintedItem_SuperWidthValid((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_width_valid(void* self, bool (*callback)()) {
    QQuickPaintedItem_OnWidthValid((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_height_valid(void* self) {
    return QQuickPaintedItem_HeightValid((QQuickPaintedItem*)self);
}

bool q_quickpainteditem_super_height_valid(void* self) {
    return QQuickPaintedItem_SuperHeightValid((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_height_valid(void* self, bool (*callback)()) {
    QQuickPaintedItem_OnHeightValid((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_set_implicit_size(void* self, double param1, double param2) {
    QQuickPaintedItem_SetImplicitSize((QQuickPaintedItem*)self, param1, param2);
}

void q_quickpainteditem_super_set_implicit_size(void* self, double param1, double param2) {
    QQuickPaintedItem_SuperSetImplicitSize((QQuickPaintedItem*)self, param1, param2);
}

void q_quickpainteditem_on_set_implicit_size(void* self, void (*callback)(void*, double, double)) {
    QQuickPaintedItem_OnSetImplicitSize((QQuickPaintedItem*)self, (intptr_t)callback);
}

QObject* q_quickpainteditem_sender(void* self) {
    return QQuickPaintedItem_Sender((QQuickPaintedItem*)self);
}

QObject* q_quickpainteditem_super_sender(void* self) {
    return QQuickPaintedItem_SuperSender((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_sender(void* self, QObject* (*callback)()) {
    QQuickPaintedItem_OnSender((QQuickPaintedItem*)self, (intptr_t)callback);
}

int32_t q_quickpainteditem_sender_signal_index(void* self) {
    return QQuickPaintedItem_SenderSignalIndex((QQuickPaintedItem*)self);
}

int32_t q_quickpainteditem_super_sender_signal_index(void* self) {
    return QQuickPaintedItem_SuperSenderSignalIndex((QQuickPaintedItem*)self);
}

void q_quickpainteditem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickPaintedItem_OnSenderSignalIndex((QQuickPaintedItem*)self, (intptr_t)callback);
}

int32_t q_quickpainteditem_receivers(void* self, const char* signal) {
    return QQuickPaintedItem_Receivers((QQuickPaintedItem*)self, signal);
}

int32_t q_quickpainteditem_super_receivers(void* self, const char* signal) {
    return QQuickPaintedItem_SuperReceivers((QQuickPaintedItem*)self, signal);
}

void q_quickpainteditem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickPaintedItem_OnReceivers((QQuickPaintedItem*)self, (intptr_t)callback);
}

bool q_quickpainteditem_is_signal_connected(void* self, void* signal) {
    return QQuickPaintedItem_IsSignalConnected((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

bool q_quickpainteditem_super_is_signal_connected(void* self, void* signal) {
    return QQuickPaintedItem_SuperIsSignalConnected((QQuickPaintedItem*)self, (QMetaMethod*)signal);
}

void q_quickpainteditem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickPaintedItem_OnIsSignalConnected((QQuickPaintedItem*)self, (intptr_t)callback);
}

void q_quickpainteditem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickpainteditem_delete(void* self) {
    QQuickPaintedItem_Delete((QQuickPaintedItem*)(self));
}
