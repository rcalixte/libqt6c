#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquickitem.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgtextureprovider.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqquickrhiitem.hpp"
#include "libqquickrhiitem.h"

void q_quickrhiitemrenderer_delete(void* self) {
    QQuickRhiItemRenderer_Delete((QQuickRhiItemRenderer*)(self));
}

QQuickRhiItem* q_quickrhiitem_new() {
    return QQuickRhiItem_New();
}

QQuickRhiItem* q_quickrhiitem_new2(void* parent) {
    return QQuickRhiItem_New2((QQuickItem*)parent);
}

const QMetaObject* q_quickrhiitem_meta_object(void* self) {
    return QQuickRhiItem_MetaObject((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickRhiItem_OnMetaObject((QQuickRhiItem*)self, (intptr_t)callback);
}

const QMetaObject* q_quickrhiitem_super_meta_object(void* self) {
    return QQuickRhiItem_SuperMetaObject((QQuickRhiItem*)self);
}

void* q_quickrhiitem_metacast(void* self, const char* param1) {
    return QQuickRhiItem_Metacast((QQuickRhiItem*)self, param1);
}

void q_quickrhiitem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickRhiItem_OnMetacast((QQuickRhiItem*)self, (intptr_t)callback);
}

void* q_quickrhiitem_super_metacast(void* self, const char* param1) {
    return QQuickRhiItem_SuperMetacast((QQuickRhiItem*)self, param1);
}

int32_t q_quickrhiitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickRhiItem_Metacall((QQuickRhiItem*)self, param1, param2, param3);
}

void q_quickrhiitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickRhiItem_OnMetacall((QQuickRhiItem*)self, (intptr_t)callback);
}

int32_t q_quickrhiitem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickRhiItem_SuperMetacall((QQuickRhiItem*)self, param1, param2, param3);
}

const char* q_quickrhiitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_quickrhiitem_sample_count(void* self) {
    return QQuickRhiItem_SampleCount((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_sample_count(void* self, int samples) {
    QQuickRhiItem_SetSampleCount((QQuickRhiItem*)self, samples);
}

int32_t q_quickrhiitem_color_buffer_format(void* self) {
    return QQuickRhiItem_ColorBufferFormat((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_color_buffer_format(void* self, int32_t format) {
    QQuickRhiItem_SetColorBufferFormat((QQuickRhiItem*)self, format);
}

bool q_quickrhiitem_is_mirror_vertically_enabled(void* self) {
    return QQuickRhiItem_IsMirrorVerticallyEnabled((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_mirror_vertically(void* self, bool enable) {
    QQuickRhiItem_SetMirrorVertically((QQuickRhiItem*)self, enable);
}

bool q_quickrhiitem_alpha_blending(void* self) {
    return QQuickRhiItem_AlphaBlending((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_alpha_blending(void* self, bool enable) {
    QQuickRhiItem_SetAlphaBlending((QQuickRhiItem*)self, enable);
}

int32_t q_quickrhiitem_fixed_color_buffer_width(void* self) {
    return QQuickRhiItem_FixedColorBufferWidth((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_fixed_color_buffer_width(void* self, int width) {
    QQuickRhiItem_SetFixedColorBufferWidth((QQuickRhiItem*)self, width);
}

int32_t q_quickrhiitem_fixed_color_buffer_height(void* self) {
    return QQuickRhiItem_FixedColorBufferHeight((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_fixed_color_buffer_height(void* self, int height) {
    QQuickRhiItem_SetFixedColorBufferHeight((QQuickRhiItem*)self, height);
}

QSize* q_quickrhiitem_effective_color_buffer_size(void* self) {
    return QQuickRhiItem_EffectiveColorBufferSize((QQuickRhiItem*)self);
}

bool q_quickrhiitem_is_texture_provider(void* self) {
    return QQuickRhiItem_IsTextureProvider((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_is_texture_provider(void* self, bool (*callback)()) {
    QQuickRhiItem_OnIsTextureProvider((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_super_is_texture_provider(void* self) {
    return QQuickRhiItem_SuperIsTextureProvider((QQuickRhiItem*)self);
}

QSGTextureProvider* q_quickrhiitem_texture_provider(void* self) {
    return QQuickRhiItem_TextureProvider((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_texture_provider(void* self, QSGTextureProvider* (*callback)()) {
    QQuickRhiItem_OnTextureProvider((QQuickRhiItem*)self, (intptr_t)callback);
}

QSGTextureProvider* q_quickrhiitem_super_texture_provider(void* self) {
    return QQuickRhiItem_SuperTextureProvider((QQuickRhiItem*)self);
}

void q_quickrhiitem_sample_count_changed(void* self) {
    QQuickRhiItem_SampleCountChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_sample_count_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_SampleCountChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_color_buffer_format_changed(void* self) {
    QQuickRhiItem_ColorBufferFormatChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_color_buffer_format_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_ColorBufferFormatChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_auto_render_target_changed(void* self) {
    QQuickRhiItem_AutoRenderTargetChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_auto_render_target_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_AutoRenderTargetChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mirror_vertically_changed(void* self) {
    QQuickRhiItem_MirrorVerticallyChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_mirror_vertically_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_MirrorVerticallyChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_alpha_blending_changed(void* self) {
    QQuickRhiItem_AlphaBlendingChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_alpha_blending_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_AlphaBlendingChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_fixed_color_buffer_width_changed(void* self) {
    QQuickRhiItem_FixedColorBufferWidthChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_fixed_color_buffer_width_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_FixedColorBufferWidthChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_fixed_color_buffer_height_changed(void* self) {
    QQuickRhiItem_FixedColorBufferHeightChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_fixed_color_buffer_height_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_FixedColorBufferHeightChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_effective_color_buffer_size_changed(void* self) {
    QQuickRhiItem_EffectiveColorBufferSizeChanged((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_effective_color_buffer_size_changed(void* self, void (*callback)(void*)) {
    QQuickRhiItem_Connect_EffectiveColorBufferSizeChanged((QQuickRhiItem*)self, (intptr_t)callback);
}

QQuickRhiItemRenderer* q_quickrhiitem_create_renderer(void* self) {
    return QQuickRhiItem_CreateRenderer((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_create_renderer(void* self, QQuickRhiItemRenderer* (*callback)()) {
    QQuickRhiItem_OnCreateRenderer((QQuickRhiItem*)self, (intptr_t)callback);
}

QQuickRhiItemRenderer* q_quickrhiitem_super_create_renderer(void* self) {
    return QQuickRhiItem_SuperCreateRenderer((QQuickRhiItem*)self);
}

bool q_quickrhiitem_is_auto_render_target_enabled(void* self) {
    return QQuickRhiItem_IsAutoRenderTargetEnabled((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_is_auto_render_target_enabled(void* self, bool (*callback)()) {
    QQuickRhiItem_OnIsAutoRenderTargetEnabled((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_super_is_auto_render_target_enabled(void* self) {
    return QQuickRhiItem_SuperIsAutoRenderTargetEnabled((QQuickRhiItem*)self);
}

void q_quickrhiitem_set_auto_render_target(void* self, bool enabled) {
    QQuickRhiItem_SetAutoRenderTarget((QQuickRhiItem*)self, enabled);
}

void q_quickrhiitem_on_set_auto_render_target(void* self, void (*callback)(void*, bool)) {
    QQuickRhiItem_OnSetAutoRenderTarget((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_super_set_auto_render_target(void* self, bool enabled) {
    QQuickRhiItem_SuperSetAutoRenderTarget((QQuickRhiItem*)self, enabled);
}

QSGNode* q_quickrhiitem_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickRhiItem_UpdatePaintNode((QQuickRhiItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickrhiitem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*)) {
    QQuickRhiItem_OnUpdatePaintNode((QQuickRhiItem*)self, (intptr_t)callback);
}

QSGNode* q_quickrhiitem_super_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickRhiItem_SuperUpdatePaintNode((QQuickRhiItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

bool q_quickrhiitem_event(void* self, void* param1) {
    return QQuickRhiItem_Event((QQuickRhiItem*)self, (QEvent*)param1);
}

void q_quickrhiitem_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickRhiItem_OnEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_super_event(void* self, void* param1) {
    return QQuickRhiItem_SuperEvent((QQuickRhiItem*)self, (QEvent*)param1);
}

void q_quickrhiitem_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickRhiItem_GeometryChange((QQuickRhiItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickrhiitem_on_geometry_change(void* self, void (*callback)(void*, void*, void*)) {
    QQuickRhiItem_OnGeometryChange((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickRhiItem_SuperGeometryChange((QQuickRhiItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickrhiitem_release_resources(void* self) {
    QQuickRhiItem_ReleaseResources((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_release_resources(void* self, void (*callback)()) {
    QQuickRhiItem_OnReleaseResources((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_super_release_resources(void* self) {
    QQuickRhiItem_SuperReleaseResources((QQuickRhiItem*)self);
}

const char* q_quickrhiitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickrhiitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlParserStatus* q_quickrhiitem_as_q_qml_parser_status(void* self) {
    return QQuickItem_AsQQmlParserStatus((QQuickItem*)self);
}

QQuickRhiItem* q_quickrhiitem_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuickRhiItem*)QQuickItem_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

QQuickWindow* q_quickrhiitem_window(void* self) {
    return QQuickItem_Window((QQuickItem*)self);
}

QQuickItem* q_quickrhiitem_parent_item(void* self) {
    return QQuickItem_ParentItem((QQuickItem*)self);
}

void q_quickrhiitem_set_parent_item(void* self, void* parent) {
    QQuickItem_SetParentItem((QQuickItem*)self, (QQuickItem*)parent);
}

void q_quickrhiitem_stack_before(void* self, void* param1) {
    QQuickItem_StackBefore((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickrhiitem_stack_after(void* self, void* param1) {
    QQuickItem_StackAfter((QQuickItem*)self, (QQuickItem*)param1);
}

QRectF* q_quickrhiitem_children_rect(void* self) {
    return QQuickItem_ChildrenRect((QQuickItem*)self);
}

libqt_list /* of QQuickItem* */ q_quickrhiitem_child_items(void* self) {
    libqt_list _arr = QQuickItem_ChildItems((QQuickItem*)self);
    return _arr;
}

bool q_quickrhiitem_clip(void* self) {
    return QQuickItem_Clip((QQuickItem*)self);
}

void q_quickrhiitem_set_clip(void* self, bool clip) {
    QQuickItem_SetClip((QQuickItem*)self, clip);
}

const char* q_quickrhiitem_state(void* self) {
    libqt_string _str = QQuickItem_State((QQuickItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickrhiitem_set_state(void* self, const char* state) {
    QQuickItem_SetState((QQuickItem*)self, qstring(state));
}

double q_quickrhiitem_baseline_offset(void* self) {
    return QQuickItem_BaselineOffset((QQuickItem*)self);
}

void q_quickrhiitem_set_baseline_offset(void* self, double baselineOffset) {
    QQuickItem_SetBaselineOffset((QQuickItem*)self, baselineOffset);
}

double q_quickrhiitem_x(void* self) {
    return QQuickItem_X((QQuickItem*)self);
}

double q_quickrhiitem_y(void* self) {
    return QQuickItem_Y((QQuickItem*)self);
}

QPointF* q_quickrhiitem_position(void* self) {
    return QQuickItem_Position((QQuickItem*)self);
}

void q_quickrhiitem_set_x(void* self, double x) {
    QQuickItem_SetX((QQuickItem*)self, x);
}

void q_quickrhiitem_set_y(void* self, double y) {
    QQuickItem_SetY((QQuickItem*)self, y);
}

void q_quickrhiitem_set_position(void* self, void* position) {
    QQuickItem_SetPosition((QQuickItem*)self, (QPointF*)position);
}

double q_quickrhiitem_width(void* self) {
    return QQuickItem_Width((QQuickItem*)self);
}

void q_quickrhiitem_set_width(void* self, double width) {
    QQuickItem_SetWidth((QQuickItem*)self, width);
}

void q_quickrhiitem_reset_width(void* self) {
    QQuickItem_ResetWidth((QQuickItem*)self);
}

void q_quickrhiitem_set_implicit_width(void* self, double implicitWidth) {
    QQuickItem_SetImplicitWidth((QQuickItem*)self, implicitWidth);
}

double q_quickrhiitem_implicit_width(void* self) {
    return QQuickItem_ImplicitWidth((QQuickItem*)self);
}

double q_quickrhiitem_height(void* self) {
    return QQuickItem_Height((QQuickItem*)self);
}

void q_quickrhiitem_set_height(void* self, double height) {
    QQuickItem_SetHeight((QQuickItem*)self, height);
}

void q_quickrhiitem_reset_height(void* self) {
    QQuickItem_ResetHeight((QQuickItem*)self);
}

void q_quickrhiitem_set_implicit_height(void* self, double implicitHeight) {
    QQuickItem_SetImplicitHeight((QQuickItem*)self, implicitHeight);
}

double q_quickrhiitem_implicit_height(void* self) {
    return QQuickItem_ImplicitHeight((QQuickItem*)self);
}

QSizeF* q_quickrhiitem_size(void* self) {
    return QQuickItem_Size((QQuickItem*)self);
}

void q_quickrhiitem_set_size(void* self, void* size) {
    QQuickItem_SetSize((QQuickItem*)self, (QSizeF*)size);
}

int32_t q_quickrhiitem_transform_origin(void* self) {
    return QQuickItem_TransformOrigin((QQuickItem*)self);
}

void q_quickrhiitem_set_transform_origin(void* self, int32_t transformOrigin) {
    QQuickItem_SetTransformOrigin((QQuickItem*)self, transformOrigin);
}

QPointF* q_quickrhiitem_transform_origin_point(void* self) {
    return QQuickItem_TransformOriginPoint((QQuickItem*)self);
}

void q_quickrhiitem_set_transform_origin_point(void* self, void* transformOriginPoint) {
    QQuickItem_SetTransformOriginPoint((QQuickItem*)self, (QPointF*)transformOriginPoint);
}

double q_quickrhiitem_z(void* self) {
    return QQuickItem_Z((QQuickItem*)self);
}

void q_quickrhiitem_set_z(void* self, double z) {
    QQuickItem_SetZ((QQuickItem*)self, z);
}

double q_quickrhiitem_rotation(void* self) {
    return QQuickItem_Rotation((QQuickItem*)self);
}

void q_quickrhiitem_set_rotation(void* self, double rotation) {
    QQuickItem_SetRotation((QQuickItem*)self, rotation);
}

double q_quickrhiitem_scale(void* self) {
    return QQuickItem_Scale((QQuickItem*)self);
}

void q_quickrhiitem_set_scale(void* self, double scale) {
    QQuickItem_SetScale((QQuickItem*)self, scale);
}

double q_quickrhiitem_opacity(void* self) {
    return QQuickItem_Opacity((QQuickItem*)self);
}

void q_quickrhiitem_set_opacity(void* self, double opacity) {
    QQuickItem_SetOpacity((QQuickItem*)self, opacity);
}

bool q_quickrhiitem_is_visible(void* self) {
    return QQuickItem_IsVisible((QQuickItem*)self);
}

void q_quickrhiitem_set_visible(void* self, bool visible) {
    QQuickItem_SetVisible((QQuickItem*)self, visible);
}

bool q_quickrhiitem_is_enabled(void* self) {
    return QQuickItem_IsEnabled((QQuickItem*)self);
}

void q_quickrhiitem_set_enabled(void* self, bool enabled) {
    QQuickItem_SetEnabled((QQuickItem*)self, enabled);
}

bool q_quickrhiitem_smooth(void* self) {
    return QQuickItem_Smooth((QQuickItem*)self);
}

void q_quickrhiitem_set_smooth(void* self, bool smooth) {
    QQuickItem_SetSmooth((QQuickItem*)self, smooth);
}

bool q_quickrhiitem_active_focus_on_tab(void* self) {
    return QQuickItem_ActiveFocusOnTab((QQuickItem*)self);
}

void q_quickrhiitem_set_active_focus_on_tab(void* self, bool activeFocusOnTab) {
    QQuickItem_SetActiveFocusOnTab((QQuickItem*)self, activeFocusOnTab);
}

bool q_quickrhiitem_antialiasing(void* self) {
    return QQuickItem_Antialiasing((QQuickItem*)self);
}

void q_quickrhiitem_set_antialiasing(void* self, bool antialiasing) {
    QQuickItem_SetAntialiasing((QQuickItem*)self, antialiasing);
}

void q_quickrhiitem_reset_antialiasing(void* self) {
    QQuickItem_ResetAntialiasing((QQuickItem*)self);
}

int32_t q_quickrhiitem_flags(void* self) {
    return QQuickItem_Flags((QQuickItem*)self);
}

void q_quickrhiitem_set_flag(void* self, int32_t flag) {
    QQuickItem_SetFlag((QQuickItem*)self, flag);
}

void q_quickrhiitem_set_flags(void* self, int32_t flags) {
    QQuickItem_SetFlags((QQuickItem*)self, flags);
}

QQuickItem* q_quickrhiitem_viewport_item(void* self) {
    return QQuickItem_ViewportItem((QQuickItem*)self);
}

bool q_quickrhiitem_has_active_focus(void* self) {
    return QQuickItem_HasActiveFocus((QQuickItem*)self);
}

bool q_quickrhiitem_has_focus(void* self) {
    return QQuickItem_HasFocus((QQuickItem*)self);
}

void q_quickrhiitem_set_focus(void* self, bool focus) {
    QQuickItem_SetFocus((QQuickItem*)self, focus);
}

void q_quickrhiitem_set_focus2(void* self, bool focus, int32_t reason) {
    QQuickItem_SetFocus2((QQuickItem*)self, focus, reason);
}

bool q_quickrhiitem_is_focus_scope(void* self) {
    return QQuickItem_IsFocusScope((QQuickItem*)self);
}

QQuickItem* q_quickrhiitem_scoped_focus_item(void* self) {
    return QQuickItem_ScopedFocusItem((QQuickItem*)self);
}

int32_t q_quickrhiitem_focus_policy(void* self) {
    return QQuickItem_FocusPolicy((QQuickItem*)self);
}

void q_quickrhiitem_set_focus_policy(void* self, int32_t policy) {
    QQuickItem_SetFocusPolicy((QQuickItem*)self, policy);
}

bool q_quickrhiitem_is_ancestor_of(void* self, void* child) {
    return QQuickItem_IsAncestorOf((QQuickItem*)self, (QQuickItem*)child);
}

int32_t q_quickrhiitem_accepted_mouse_buttons(void* self) {
    return QQuickItem_AcceptedMouseButtons((QQuickItem*)self);
}

void q_quickrhiitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QQuickItem_SetAcceptedMouseButtons((QQuickItem*)self, buttons);
}

bool q_quickrhiitem_accept_hover_events(void* self) {
    return QQuickItem_AcceptHoverEvents((QQuickItem*)self);
}

void q_quickrhiitem_set_accept_hover_events(void* self, bool enabled) {
    QQuickItem_SetAcceptHoverEvents((QQuickItem*)self, enabled);
}

bool q_quickrhiitem_accept_touch_events(void* self) {
    return QQuickItem_AcceptTouchEvents((QQuickItem*)self);
}

void q_quickrhiitem_set_accept_touch_events(void* self, bool accept) {
    QQuickItem_SetAcceptTouchEvents((QQuickItem*)self, accept);
}

QCursor* q_quickrhiitem_cursor(void* self) {
    return QQuickItem_Cursor((QQuickItem*)self);
}

void q_quickrhiitem_set_cursor(void* self, void* cursor) {
    QQuickItem_SetCursor((QQuickItem*)self, (QCursor*)cursor);
}

void q_quickrhiitem_unset_cursor(void* self) {
    QQuickItem_UnsetCursor((QQuickItem*)self);
}

bool q_quickrhiitem_is_under_mouse(void* self) {
    return QQuickItem_IsUnderMouse((QQuickItem*)self);
}

void q_quickrhiitem_grab_mouse(void* self) {
    QQuickItem_GrabMouse((QQuickItem*)self);
}

void q_quickrhiitem_ungrab_mouse(void* self) {
    QQuickItem_UngrabMouse((QQuickItem*)self);
}

bool q_quickrhiitem_keep_mouse_grab(void* self) {
    return QQuickItem_KeepMouseGrab((QQuickItem*)self);
}

void q_quickrhiitem_set_keep_mouse_grab(void* self, bool keepMouseGrab) {
    QQuickItem_SetKeepMouseGrab((QQuickItem*)self, keepMouseGrab);
}

bool q_quickrhiitem_filters_child_mouse_events(void* self) {
    return QQuickItem_FiltersChildMouseEvents((QQuickItem*)self);
}

void q_quickrhiitem_set_filters_child_mouse_events(void* self, bool filter) {
    QQuickItem_SetFiltersChildMouseEvents((QQuickItem*)self, filter);
}

void q_quickrhiitem_grab_touch_points(void* self, libqt_list /* of int */ ids) {
    QQuickItem_GrabTouchPoints((QQuickItem*)self, ids);
}

void q_quickrhiitem_ungrab_touch_points(void* self) {
    QQuickItem_UngrabTouchPoints((QQuickItem*)self);
}

bool q_quickrhiitem_keep_touch_grab(void* self) {
    return QQuickItem_KeepTouchGrab((QQuickItem*)self);
}

void q_quickrhiitem_set_keep_touch_grab(void* self, bool keepTouchGrab) {
    QQuickItem_SetKeepTouchGrab((QQuickItem*)self, keepTouchGrab);
}

bool q_quickrhiitem_grab_to_image(void* self, void* callback) {
    return QQuickItem_GrabToImage((QQuickItem*)self, (QJSValue*)callback);
}

QObject* q_quickrhiitem_containment_mask(void* self) {
    return QQuickItem_ContainmentMask((QQuickItem*)self);
}

void q_quickrhiitem_set_containment_mask(void* self, void* mask) {
    QQuickItem_SetContainmentMask((QQuickItem*)self, (QObject*)mask);
}

QTransform* q_quickrhiitem_item_transform(void* self, void* param1, bool* param2) {
    return QQuickItem_ItemTransform((QQuickItem*)self, (QQuickItem*)param1, (bool*)param2);
}

QPointF* q_quickrhiitem_map_to_scene(void* self, void* point) {
    return QQuickItem_MapToScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickrhiitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectToItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickrhiitem_map_rect_to_scene(void* self, void* rect) {
    return QQuickItem_MapRectToScene((QQuickItem*)self, (QRectF*)rect);
}

QPointF* q_quickrhiitem_map_from_scene(void* self, void* point) {
    return QQuickItem_MapFromScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickrhiitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectFromItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickrhiitem_map_rect_from_scene(void* self, void* rect) {
    return QQuickItem_MapRectFromScene((QQuickItem*)self, (QRectF*)rect);
}

void q_quickrhiitem_polish(void* self) {
    QQuickItem_Polish((QQuickItem*)self);
}

QPointF* q_quickrhiitem_map_from_item2(void* self, void* item, void* point) {
    return QQuickItem_MapFromItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickrhiitem_map_from_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapFromItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickrhiitem_map_from_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapFromItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickrhiitem_map_from_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapFromItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickrhiitem_map_to_item2(void* self, void* item, void* point) {
    return QQuickItem_MapToItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickrhiitem_map_to_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapToItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickrhiitem_map_to_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapToItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickrhiitem_map_to_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapToItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickrhiitem_map_from_global2(void* self, double x, double y) {
    return QQuickItem_MapFromGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickrhiitem_map_from_global3(void* self, void* point) {
    return QQuickItem_MapFromGlobal3((QQuickItem*)self, (QPointF*)point);
}

QPointF* q_quickrhiitem_map_to_global2(void* self, double x, double y) {
    return QQuickItem_MapToGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickrhiitem_map_to_global3(void* self, void* point) {
    return QQuickItem_MapToGlobal3((QQuickItem*)self, (QPointF*)point);
}

void q_quickrhiitem_force_active_focus(void* self) {
    QQuickItem_ForceActiveFocus((QQuickItem*)self);
}

void q_quickrhiitem_force_active_focus2(void* self, int32_t reason) {
    QQuickItem_ForceActiveFocus2((QQuickItem*)self, reason);
}

QQuickItem* q_quickrhiitem_next_item_in_focus_chain(void* self) {
    return QQuickItem_NextItemInFocusChain((QQuickItem*)self);
}

QQuickItem* q_quickrhiitem_child_at(void* self, double x, double y) {
    return QQuickItem_ChildAt((QQuickItem*)self, x, y);
}

void q_quickrhiitem_ensure_polished(void* self) {
    QQuickItem_EnsurePolished((QQuickItem*)self);
}

void q_quickrhiitem_dump_item_tree(void* self) {
    QQuickItem_DumpItemTree((QQuickItem*)self);
}

void q_quickrhiitem_update(void* self) {
    QQuickItem_Update((QQuickItem*)self);
}

void q_quickrhiitem_children_rect_changed(void* self, void* param1) {
    QQuickItem_ChildrenRectChanged((QQuickItem*)self, (QRectF*)param1);
}

void q_quickrhiitem_on_children_rect_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ChildrenRectChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_baseline_offset_changed(void* self, double param1) {
    QQuickItem_BaselineOffsetChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_baseline_offset_changed(void* self, void (*callback)(void*, double)) {
    QQuickItem_Connect_BaselineOffsetChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_state_changed(void* self, const char* param1) {
    QQuickItem_StateChanged((QQuickItem*)self, qstring(param1));
}

void q_quickrhiitem_on_state_changed(void* self, void (*callback)(void*, const char*)) {
    QQuickItem_Connect_StateChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_focus_changed(void* self, bool param1) {
    QQuickItem_FocusChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_FocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_active_focus_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_active_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_focus_policy_changed(void* self, int32_t param1) {
    QQuickItem_FocusPolicyChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_FocusPolicyChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_active_focus_on_tab_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusOnTabChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusOnTabChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_parent_changed(void* self, void* param1) {
    QQuickItem_ParentChanged((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickrhiitem_on_parent_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ParentChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_transform_origin_changed(void* self, int32_t param1) {
    QQuickItem_TransformOriginChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_TransformOriginChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_smooth_changed(void* self, bool param1) {
    QQuickItem_SmoothChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_smooth_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_SmoothChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_antialiasing_changed(void* self, bool param1) {
    QQuickItem_AntialiasingChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_antialiasing_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_AntialiasingChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_clip_changed(void* self, bool param1) {
    QQuickItem_ClipChanged((QQuickItem*)self, param1);
}

void q_quickrhiitem_on_clip_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ClipChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_window_changed(void* self, void* window) {
    QQuickItem_WindowChanged((QQuickItem*)self, (QQuickWindow*)window);
}

void q_quickrhiitem_on_window_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_WindowChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_children_changed(void* self) {
    QQuickItem_ChildrenChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_opacity_changed(void* self) {
    QQuickItem_OpacityChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_OpacityChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_enabled_changed(void* self) {
    QQuickItem_EnabledChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_EnabledChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_visible_changed(void* self) {
    QQuickItem_VisibleChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_visible_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_visible_children_changed(void* self) {
    QQuickItem_VisibleChildrenChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_visible_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_rotation_changed(void* self) {
    QQuickItem_RotationChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_RotationChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_scale_changed(void* self) {
    QQuickItem_ScaleChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_scale_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ScaleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_x_changed(void* self) {
    QQuickItem_XChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_x_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_XChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_y_changed(void* self) {
    QQuickItem_YChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_y_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_YChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_width_changed(void* self) {
    QQuickItem_WidthChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_WidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_height_changed(void* self) {
    QQuickItem_HeightChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_HeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_z_changed(void* self) {
    QQuickItem_ZChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_z_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ZChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_implicit_width_changed(void* self) {
    QQuickItem_ImplicitWidthChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_implicit_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitWidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_implicit_height_changed(void* self) {
    QQuickItem_ImplicitHeightChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_implicit_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitHeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_containment_mask_changed(void* self) {
    QQuickItem_ContainmentMaskChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_containment_mask_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ContainmentMaskChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_palette_changed(void* self) {
    QQuickItem_PaletteChanged((QQuickItem*)self);
}

void q_quickrhiitem_on_palette_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_palette_created(void* self) {
    QQuickItem_PaletteCreated((QQuickItem*)self);
}

void q_quickrhiitem_on_palette_created(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteCreated((QQuickItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QQuickItem_SetFlag2((QQuickItem*)self, flag, enabled);
}

bool q_quickrhiitem_grab_to_image22(void* self, void* callback, void* targetSize) {
    return QQuickItem_GrabToImage22((QQuickItem*)self, (QJSValue*)callback, (QSize*)targetSize);
}

QQuickItem* q_quickrhiitem_next_item_in_focus_chain1(void* self, bool forward) {
    return QQuickItem_NextItemInFocusChain1((QQuickItem*)self, forward);
}

const char* q_quickrhiitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickrhiitem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickrhiitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickrhiitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickrhiitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickrhiitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickrhiitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickrhiitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickrhiitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickrhiitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickrhiitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickrhiitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickrhiitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickrhiitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickrhiitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickrhiitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickrhiitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickrhiitem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickrhiitem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickrhiitem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickrhiitem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickrhiitem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickrhiitem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickrhiitem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickrhiitem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickrhiitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickrhiitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickrhiitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickrhiitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickrhiitem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickrhiitem_dynamic_property_names\n");
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

QBindingStorage* q_quickrhiitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickrhiitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickrhiitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickrhiitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickrhiitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickrhiitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickrhiitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickrhiitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickrhiitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickrhiitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickrhiitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickrhiitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickrhiitem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickrhiitem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickrhiitem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickrhiitem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickrhiitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickrhiitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QRectF* q_quickrhiitem_bounding_rect(void* self) {
    return QQuickRhiItem_BoundingRect((QQuickRhiItem*)self);
}

QRectF* q_quickrhiitem_super_bounding_rect(void* self) {
    return QQuickRhiItem_SuperBoundingRect((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QQuickRhiItem_OnBoundingRect((QQuickRhiItem*)self, (intptr_t)callback);
}

QRectF* q_quickrhiitem_clip_rect(void* self) {
    return QQuickRhiItem_ClipRect((QQuickRhiItem*)self);
}

QRectF* q_quickrhiitem_super_clip_rect(void* self) {
    return QQuickRhiItem_SuperClipRect((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_clip_rect(void* self, QRectF* (*callback)()) {
    QQuickRhiItem_OnClipRect((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_contains(void* self, void* point) {
    return QQuickRhiItem_Contains((QQuickRhiItem*)self, (QPointF*)point);
}

bool q_quickrhiitem_super_contains(void* self, void* point) {
    return QQuickRhiItem_SuperContains((QQuickRhiItem*)self, (QPointF*)point);
}

void q_quickrhiitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QQuickRhiItem_OnContains((QQuickRhiItem*)self, (intptr_t)callback);
}

QVariant* q_quickrhiitem_input_method_query(void* self, int32_t query) {
    return QQuickRhiItem_InputMethodQuery((QQuickRhiItem*)self, query);
}

QVariant* q_quickrhiitem_super_input_method_query(void* self, int32_t query) {
    return QQuickRhiItem_SuperInputMethodQuery((QQuickRhiItem*)self, query);
}

void q_quickrhiitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QQuickRhiItem_OnInputMethodQuery((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_item_change(void* self, int32_t param1, void* param2) {
    QQuickRhiItem_ItemChange((QQuickRhiItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickrhiitem_super_item_change(void* self, int32_t param1, void* param2) {
    QQuickRhiItem_SuperItemChange((QQuickRhiItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickrhiitem_on_item_change(void* self, void (*callback)(void*, int32_t, void*)) {
    QQuickRhiItem_OnItemChange((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_class_begin(void* self) {
    QQuickRhiItem_ClassBegin((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_class_begin(void* self) {
    QQuickRhiItem_SuperClassBegin((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_class_begin(void* self, void (*callback)()) {
    QQuickRhiItem_OnClassBegin((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_component_complete(void* self) {
    QQuickRhiItem_ComponentComplete((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_component_complete(void* self) {
    QQuickRhiItem_SuperComponentComplete((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_component_complete(void* self, void (*callback)()) {
    QQuickRhiItem_OnComponentComplete((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_key_press_event(void* self, void* event) {
    QQuickRhiItem_KeyPressEvent((QQuickRhiItem*)self, (QKeyEvent*)event);
}

void q_quickrhiitem_super_key_press_event(void* self, void* event) {
    QQuickRhiItem_SuperKeyPressEvent((QQuickRhiItem*)self, (QKeyEvent*)event);
}

void q_quickrhiitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnKeyPressEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_key_release_event(void* self, void* event) {
    QQuickRhiItem_KeyReleaseEvent((QQuickRhiItem*)self, (QKeyEvent*)event);
}

void q_quickrhiitem_super_key_release_event(void* self, void* event) {
    QQuickRhiItem_SuperKeyReleaseEvent((QQuickRhiItem*)self, (QKeyEvent*)event);
}

void q_quickrhiitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnKeyReleaseEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_input_method_event(void* self, void* param1) {
    QQuickRhiItem_InputMethodEvent((QQuickRhiItem*)self, (QInputMethodEvent*)param1);
}

void q_quickrhiitem_super_input_method_event(void* self, void* param1) {
    QQuickRhiItem_SuperInputMethodEvent((QQuickRhiItem*)self, (QInputMethodEvent*)param1);
}

void q_quickrhiitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnInputMethodEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_focus_in_event(void* self, void* param1) {
    QQuickRhiItem_FocusInEvent((QQuickRhiItem*)self, (QFocusEvent*)param1);
}

void q_quickrhiitem_super_focus_in_event(void* self, void* param1) {
    QQuickRhiItem_SuperFocusInEvent((QQuickRhiItem*)self, (QFocusEvent*)param1);
}

void q_quickrhiitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnFocusInEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_focus_out_event(void* self, void* param1) {
    QQuickRhiItem_FocusOutEvent((QQuickRhiItem*)self, (QFocusEvent*)param1);
}

void q_quickrhiitem_super_focus_out_event(void* self, void* param1) {
    QQuickRhiItem_SuperFocusOutEvent((QQuickRhiItem*)self, (QFocusEvent*)param1);
}

void q_quickrhiitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnFocusOutEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mouse_press_event(void* self, void* event) {
    QQuickRhiItem_MousePressEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_super_mouse_press_event(void* self, void* event) {
    QQuickRhiItem_SuperMousePressEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnMousePressEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mouse_move_event(void* self, void* event) {
    QQuickRhiItem_MouseMoveEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_super_mouse_move_event(void* self, void* event) {
    QQuickRhiItem_SuperMouseMoveEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnMouseMoveEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mouse_release_event(void* self, void* event) {
    QQuickRhiItem_MouseReleaseEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_super_mouse_release_event(void* self, void* event) {
    QQuickRhiItem_SuperMouseReleaseEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnMouseReleaseEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mouse_double_click_event(void* self, void* event) {
    QQuickRhiItem_MouseDoubleClickEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_super_mouse_double_click_event(void* self, void* event) {
    QQuickRhiItem_SuperMouseDoubleClickEvent((QQuickRhiItem*)self, (QMouseEvent*)event);
}

void q_quickrhiitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnMouseDoubleClickEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_mouse_ungrab_event(void* self) {
    QQuickRhiItem_MouseUngrabEvent((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_mouse_ungrab_event(void* self) {
    QQuickRhiItem_SuperMouseUngrabEvent((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_mouse_ungrab_event(void* self, void (*callback)()) {
    QQuickRhiItem_OnMouseUngrabEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_touch_ungrab_event(void* self) {
    QQuickRhiItem_TouchUngrabEvent((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_touch_ungrab_event(void* self) {
    QQuickRhiItem_SuperTouchUngrabEvent((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_touch_ungrab_event(void* self, void (*callback)()) {
    QQuickRhiItem_OnTouchUngrabEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_wheel_event(void* self, void* event) {
    QQuickRhiItem_WheelEvent((QQuickRhiItem*)self, (QWheelEvent*)event);
}

void q_quickrhiitem_super_wheel_event(void* self, void* event) {
    QQuickRhiItem_SuperWheelEvent((QQuickRhiItem*)self, (QWheelEvent*)event);
}

void q_quickrhiitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnWheelEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_touch_event(void* self, void* event) {
    QQuickRhiItem_TouchEvent((QQuickRhiItem*)self, (QTouchEvent*)event);
}

void q_quickrhiitem_super_touch_event(void* self, void* event) {
    QQuickRhiItem_SuperTouchEvent((QQuickRhiItem*)self, (QTouchEvent*)event);
}

void q_quickrhiitem_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnTouchEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_hover_enter_event(void* self, void* event) {
    QQuickRhiItem_HoverEnterEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_super_hover_enter_event(void* self, void* event) {
    QQuickRhiItem_SuperHoverEnterEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnHoverEnterEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_hover_move_event(void* self, void* event) {
    QQuickRhiItem_HoverMoveEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_super_hover_move_event(void* self, void* event) {
    QQuickRhiItem_SuperHoverMoveEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnHoverMoveEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_hover_leave_event(void* self, void* event) {
    QQuickRhiItem_HoverLeaveEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_super_hover_leave_event(void* self, void* event) {
    QQuickRhiItem_SuperHoverLeaveEvent((QQuickRhiItem*)self, (QHoverEvent*)event);
}

void q_quickrhiitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnHoverLeaveEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_drag_enter_event(void* self, void* param1) {
    QQuickRhiItem_DragEnterEvent((QQuickRhiItem*)self, (QDragEnterEvent*)param1);
}

void q_quickrhiitem_super_drag_enter_event(void* self, void* param1) {
    QQuickRhiItem_SuperDragEnterEvent((QQuickRhiItem*)self, (QDragEnterEvent*)param1);
}

void q_quickrhiitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnDragEnterEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_drag_move_event(void* self, void* param1) {
    QQuickRhiItem_DragMoveEvent((QQuickRhiItem*)self, (QDragMoveEvent*)param1);
}

void q_quickrhiitem_super_drag_move_event(void* self, void* param1) {
    QQuickRhiItem_SuperDragMoveEvent((QQuickRhiItem*)self, (QDragMoveEvent*)param1);
}

void q_quickrhiitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnDragMoveEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_drag_leave_event(void* self, void* param1) {
    QQuickRhiItem_DragLeaveEvent((QQuickRhiItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickrhiitem_super_drag_leave_event(void* self, void* param1) {
    QQuickRhiItem_SuperDragLeaveEvent((QQuickRhiItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickrhiitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnDragLeaveEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_drop_event(void* self, void* param1) {
    QQuickRhiItem_DropEvent((QQuickRhiItem*)self, (QDropEvent*)param1);
}

void q_quickrhiitem_super_drop_event(void* self, void* param1) {
    QQuickRhiItem_SuperDropEvent((QQuickRhiItem*)self, (QDropEvent*)param1);
}

void q_quickrhiitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnDropEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickRhiItem_ChildMouseEventFilter((QQuickRhiItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

bool q_quickrhiitem_super_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickRhiItem_SuperChildMouseEventFilter((QQuickRhiItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

void q_quickrhiitem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickRhiItem_OnChildMouseEventFilter((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_update_polish(void* self) {
    QQuickRhiItem_UpdatePolish((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_update_polish(void* self) {
    QQuickRhiItem_SuperUpdatePolish((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_update_polish(void* self, void (*callback)()) {
    QQuickRhiItem_OnUpdatePolish((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_event_filter(void* self, void* watched, void* event) {
    return QQuickRhiItem_EventFilter((QQuickRhiItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickrhiitem_super_event_filter(void* self, void* watched, void* event) {
    return QQuickRhiItem_SuperEventFilter((QQuickRhiItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickrhiitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickRhiItem_OnEventFilter((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_timer_event(void* self, void* event) {
    QQuickRhiItem_TimerEvent((QQuickRhiItem*)self, (QTimerEvent*)event);
}

void q_quickrhiitem_super_timer_event(void* self, void* event) {
    QQuickRhiItem_SuperTimerEvent((QQuickRhiItem*)self, (QTimerEvent*)event);
}

void q_quickrhiitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnTimerEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_child_event(void* self, void* event) {
    QQuickRhiItem_ChildEvent((QQuickRhiItem*)self, (QChildEvent*)event);
}

void q_quickrhiitem_super_child_event(void* self, void* event) {
    QQuickRhiItem_SuperChildEvent((QQuickRhiItem*)self, (QChildEvent*)event);
}

void q_quickrhiitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnChildEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_custom_event(void* self, void* event) {
    QQuickRhiItem_CustomEvent((QQuickRhiItem*)self, (QEvent*)event);
}

void q_quickrhiitem_super_custom_event(void* self, void* event) {
    QQuickRhiItem_SuperCustomEvent((QQuickRhiItem*)self, (QEvent*)event);
}

void q_quickrhiitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnCustomEvent((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_connect_notify(void* self, void* signal) {
    QQuickRhiItem_ConnectNotify((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

void q_quickrhiitem_super_connect_notify(void* self, void* signal) {
    QQuickRhiItem_SuperConnectNotify((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

void q_quickrhiitem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnConnectNotify((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_disconnect_notify(void* self, void* signal) {
    QQuickRhiItem_DisconnectNotify((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

void q_quickrhiitem_super_disconnect_notify(void* self, void* signal) {
    QQuickRhiItem_SuperDisconnectNotify((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

void q_quickrhiitem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickRhiItem_OnDisconnectNotify((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_is_component_complete(void* self) {
    return QQuickRhiItem_IsComponentComplete((QQuickRhiItem*)self);
}

bool q_quickrhiitem_super_is_component_complete(void* self) {
    return QQuickRhiItem_SuperIsComponentComplete((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_is_component_complete(void* self, bool (*callback)()) {
    QQuickRhiItem_OnIsComponentComplete((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_update_input_method(void* self) {
    QQuickRhiItem_UpdateInputMethod((QQuickRhiItem*)self);
}

void q_quickrhiitem_super_update_input_method(void* self) {
    QQuickRhiItem_SuperUpdateInputMethod((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_update_input_method(void* self, void (*callback)()) {
    QQuickRhiItem_OnUpdateInputMethod((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_width_valid(void* self) {
    return QQuickRhiItem_WidthValid((QQuickRhiItem*)self);
}

bool q_quickrhiitem_super_width_valid(void* self) {
    return QQuickRhiItem_SuperWidthValid((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_width_valid(void* self, bool (*callback)()) {
    QQuickRhiItem_OnWidthValid((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_height_valid(void* self) {
    return QQuickRhiItem_HeightValid((QQuickRhiItem*)self);
}

bool q_quickrhiitem_super_height_valid(void* self) {
    return QQuickRhiItem_SuperHeightValid((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_height_valid(void* self, bool (*callback)()) {
    QQuickRhiItem_OnHeightValid((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_set_implicit_size(void* self, double param1, double param2) {
    QQuickRhiItem_SetImplicitSize((QQuickRhiItem*)self, param1, param2);
}

void q_quickrhiitem_super_set_implicit_size(void* self, double param1, double param2) {
    QQuickRhiItem_SuperSetImplicitSize((QQuickRhiItem*)self, param1, param2);
}

void q_quickrhiitem_on_set_implicit_size(void* self, void (*callback)(void*, double, double)) {
    QQuickRhiItem_OnSetImplicitSize((QQuickRhiItem*)self, (intptr_t)callback);
}

QObject* q_quickrhiitem_sender(void* self) {
    return QQuickRhiItem_Sender((QQuickRhiItem*)self);
}

QObject* q_quickrhiitem_super_sender(void* self) {
    return QQuickRhiItem_SuperSender((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_sender(void* self, QObject* (*callback)()) {
    QQuickRhiItem_OnSender((QQuickRhiItem*)self, (intptr_t)callback);
}

int32_t q_quickrhiitem_sender_signal_index(void* self) {
    return QQuickRhiItem_SenderSignalIndex((QQuickRhiItem*)self);
}

int32_t q_quickrhiitem_super_sender_signal_index(void* self) {
    return QQuickRhiItem_SuperSenderSignalIndex((QQuickRhiItem*)self);
}

void q_quickrhiitem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickRhiItem_OnSenderSignalIndex((QQuickRhiItem*)self, (intptr_t)callback);
}

int32_t q_quickrhiitem_receivers(void* self, const char* signal) {
    return QQuickRhiItem_Receivers((QQuickRhiItem*)self, signal);
}

int32_t q_quickrhiitem_super_receivers(void* self, const char* signal) {
    return QQuickRhiItem_SuperReceivers((QQuickRhiItem*)self, signal);
}

void q_quickrhiitem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickRhiItem_OnReceivers((QQuickRhiItem*)self, (intptr_t)callback);
}

bool q_quickrhiitem_is_signal_connected(void* self, void* signal) {
    return QQuickRhiItem_IsSignalConnected((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

bool q_quickrhiitem_super_is_signal_connected(void* self, void* signal) {
    return QQuickRhiItem_SuperIsSignalConnected((QQuickRhiItem*)self, (QMetaMethod*)signal);
}

void q_quickrhiitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickRhiItem_OnIsSignalConnected((QQuickRhiItem*)self, (intptr_t)callback);
}

void q_quickrhiitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickrhiitem_delete(void* self) {
    QQuickRhiItem_Delete((QQuickRhiItem*)(self));
}
