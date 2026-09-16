#include "../libqaccessible.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlincubator.hpp"
#include "libqquickgraphicsconfiguration.hpp"
#include "libqquickgraphicsdevice.hpp"
#include "libqquickitem.hpp"
#include "libqquickrendercontrol.hpp"
#include "libqquickrendertarget.hpp"
#include "../libqrunnable.hpp"
#include "libqsgimagenode.hpp"
#include "libqsgninepatchnode.hpp"
#include "libqsgrectanglenode.hpp"
#include "libqsgrendererinterface.hpp"
#include "libqsgtextnode.hpp"
#include "libqsgtexture.hpp"
#include "../libqsize.hpp"
#include "../libqsurface.hpp"
#include "../libqsurfaceformat.hpp"
#include "../libqwindow.hpp"
#include "libqquickwindow.hpp"
#include "libqquickwindow.h"

QQuickWindow* q_quickwindow_new() {
    return QQuickWindow_New();
}

QQuickWindow* q_quickwindow_new2(void* renderControl) {
    return QQuickWindow_New2((QQuickRenderControl*)renderControl);
}

QQuickWindow* q_quickwindow_new3(void* parent) {
    return QQuickWindow_New3((QWindow*)parent);
}

const QMetaObject* q_quickwindow_meta_object(void* self) {
    return QQuickWindow_MetaObject((QQuickWindow*)self);
}

void q_quickwindow_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickWindow_OnMetaObject((QQuickWindow*)self, (intptr_t)callback);
}

const QMetaObject* q_quickwindow_super_meta_object(void* self) {
    return QQuickWindow_SuperMetaObject((QQuickWindow*)self);
}

void* q_quickwindow_metacast(void* self, const char* param1) {
    return QQuickWindow_Metacast((QQuickWindow*)self, param1);
}

void q_quickwindow_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickWindow_OnMetacast((QQuickWindow*)self, (intptr_t)callback);
}

void* q_quickwindow_super_metacast(void* self, const char* param1) {
    return QQuickWindow_SuperMetacast((QQuickWindow*)self, param1);
}

int32_t q_quickwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWindow_Metacall((QQuickWindow*)self, param1, param2, param3);
}

void q_quickwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickWindow_OnMetacall((QQuickWindow*)self, (intptr_t)callback);
}

int32_t q_quickwindow_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWindow_SuperMetacall((QQuickWindow*)self, param1, param2, param3);
}

const char* q_quickwindow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQuickItem* q_quickwindow_content_item(void* self) {
    return QQuickWindow_ContentItem((QQuickWindow*)self);
}

QQuickItem* q_quickwindow_active_focus_item(void* self) {
    return QQuickWindow_ActiveFocusItem((QQuickWindow*)self);
}

QObject* q_quickwindow_focus_object(void* self) {
    return QQuickWindow_FocusObject((QQuickWindow*)self);
}

void q_quickwindow_on_focus_object(void* self, QObject* (*callback)()) {
    QQuickWindow_OnFocusObject((QQuickWindow*)self, (intptr_t)callback);
}

QObject* q_quickwindow_super_focus_object(void* self) {
    return QQuickWindow_SuperFocusObject((QQuickWindow*)self);
}

QQuickItem* q_quickwindow_mouse_grabber_item(void* self) {
    return QQuickWindow_MouseGrabberItem((QQuickWindow*)self);
}

QImage* q_quickwindow_grab_window(void* self) {
    return QQuickWindow_GrabWindow((QQuickWindow*)self);
}

void q_quickwindow_set_render_target(void* self, void* target) {
    QQuickWindow_SetRenderTarget((QQuickWindow*)self, (QQuickRenderTarget*)target);
}

QQuickRenderTarget* q_quickwindow_render_target(void* self) {
    return QQuickWindow_RenderTarget((QQuickWindow*)self);
}

const QQuickWindow__GraphicsStateInfo* q_quickwindow_graphics_state_info(void* self) {
    return QQuickWindow_GraphicsStateInfo((QQuickWindow*)self);
}

void q_quickwindow_begin_external_commands(void* self) {
    QQuickWindow_BeginExternalCommands((QQuickWindow*)self);
}

void q_quickwindow_end_external_commands(void* self) {
    QQuickWindow_EndExternalCommands((QQuickWindow*)self);
}

QQmlIncubationController* q_quickwindow_incubation_controller(void* self) {
    return QQuickWindow_IncubationController((QQuickWindow*)self);
}

QAccessibleInterface* q_quickwindow_accessible_root(void* self) {
    return QQuickWindow_AccessibleRoot((QQuickWindow*)self);
}

void q_quickwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)()) {
    QQuickWindow_OnAccessibleRoot((QQuickWindow*)self, (intptr_t)callback);
}

QAccessibleInterface* q_quickwindow_super_accessible_root(void* self) {
    return QQuickWindow_SuperAccessibleRoot((QQuickWindow*)self);
}

QSGTexture* q_quickwindow_create_texture_from_image(void* self, void* image) {
    return QQuickWindow_CreateTextureFromImage((QQuickWindow*)self, (QImage*)image);
}

QSGTexture* q_quickwindow_create_texture_from_image2(void* self, void* image, int32_t options) {
    return QQuickWindow_CreateTextureFromImage2((QQuickWindow*)self, (QImage*)image, options);
}

void q_quickwindow_set_color(void* self, void* color) {
    QQuickWindow_SetColor((QQuickWindow*)self, (QColor*)color);
}

QColor* q_quickwindow_color(void* self) {
    return QQuickWindow_Color((QQuickWindow*)self);
}

bool q_quickwindow_has_default_alpha_buffer() {
    return QQuickWindow_HasDefaultAlphaBuffer();
}

void q_quickwindow_set_default_alpha_buffer(bool useAlpha) {
    QQuickWindow_SetDefaultAlphaBuffer(useAlpha);
}

void q_quickwindow_set_persistent_graphics(void* self, bool persistent) {
    QQuickWindow_SetPersistentGraphics((QQuickWindow*)self, persistent);
}

bool q_quickwindow_is_persistent_graphics(void* self) {
    return QQuickWindow_IsPersistentGraphics((QQuickWindow*)self);
}

void q_quickwindow_set_persistent_scene_graph(void* self, bool persistent) {
    QQuickWindow_SetPersistentSceneGraph((QQuickWindow*)self, persistent);
}

bool q_quickwindow_is_persistent_scene_graph(void* self) {
    return QQuickWindow_IsPersistentSceneGraph((QQuickWindow*)self);
}

bool q_quickwindow_is_scene_graph_initialized(void* self) {
    return QQuickWindow_IsSceneGraphInitialized((QQuickWindow*)self);
}

void q_quickwindow_schedule_render_job(void* self, void* job, int32_t schedule) {
    QQuickWindow_ScheduleRenderJob((QQuickWindow*)self, (QRunnable*)job, schedule);
}

double q_quickwindow_effective_device_pixel_ratio(void* self) {
    return QQuickWindow_EffectiveDevicePixelRatio((QQuickWindow*)self);
}

QSGRendererInterface* q_quickwindow_renderer_interface(void* self) {
    return QQuickWindow_RendererInterface((QQuickWindow*)self);
}

void q_quickwindow_set_graphics_api(int32_t api) {
    QQuickWindow_SetGraphicsApi(api);
}

int32_t q_quickwindow_graphics_api() {
    return QQuickWindow_GraphicsApi();
}

void q_quickwindow_set_scene_graph_backend(const char* backend) {
    QQuickWindow_SetSceneGraphBackend(qstring(backend));
}

const char* q_quickwindow_scene_graph_backend() {
    libqt_string _str = QQuickWindow_SceneGraphBackend();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwindow_set_graphics_device(void* self, void* device) {
    QQuickWindow_SetGraphicsDevice((QQuickWindow*)self, (QQuickGraphicsDevice*)device);
}

QQuickGraphicsDevice* q_quickwindow_graphics_device(void* self) {
    return QQuickWindow_GraphicsDevice((QQuickWindow*)self);
}

void q_quickwindow_set_graphics_configuration(void* self, void* config) {
    QQuickWindow_SetGraphicsConfiguration((QQuickWindow*)self, (QQuickGraphicsConfiguration*)config);
}

QQuickGraphicsConfiguration* q_quickwindow_graphics_configuration(void* self) {
    return QQuickWindow_GraphicsConfiguration((QQuickWindow*)self);
}

QSGRectangleNode* q_quickwindow_create_rectangle_node(void* self) {
    return QQuickWindow_CreateRectangleNode((QQuickWindow*)self);
}

QSGImageNode* q_quickwindow_create_image_node(void* self) {
    return QQuickWindow_CreateImageNode((QQuickWindow*)self);
}

QSGNinePatchNode* q_quickwindow_create_nine_patch_node(void* self) {
    return QQuickWindow_CreateNinePatchNode((QQuickWindow*)self);
}

QSGTextNode* q_quickwindow_create_text_node(void* self) {
    return QQuickWindow_CreateTextNode((QQuickWindow*)self);
}

int32_t q_quickwindow_text_render_type() {
    return QQuickWindow_TextRenderType();
}

void q_quickwindow_set_text_render_type(int32_t renderType) {
    QQuickWindow_SetTextRenderType(renderType);
}

void q_quickwindow_frame_swapped(void* self) {
    QQuickWindow_FrameSwapped((QQuickWindow*)self);
}

void q_quickwindow_on_frame_swapped(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_FrameSwapped((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_scene_graph_initialized(void* self) {
    QQuickWindow_SceneGraphInitialized((QQuickWindow*)self);
}

void q_quickwindow_on_scene_graph_initialized(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_SceneGraphInitialized((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_scene_graph_invalidated(void* self) {
    QQuickWindow_SceneGraphInvalidated((QQuickWindow*)self);
}

void q_quickwindow_on_scene_graph_invalidated(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_SceneGraphInvalidated((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_before_synchronizing(void* self) {
    QQuickWindow_BeforeSynchronizing((QQuickWindow*)self);
}

void q_quickwindow_on_before_synchronizing(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_BeforeSynchronizing((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_after_synchronizing(void* self) {
    QQuickWindow_AfterSynchronizing((QQuickWindow*)self);
}

void q_quickwindow_on_after_synchronizing(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_AfterSynchronizing((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_before_rendering(void* self) {
    QQuickWindow_BeforeRendering((QQuickWindow*)self);
}

void q_quickwindow_on_before_rendering(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_BeforeRendering((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_after_rendering(void* self) {
    QQuickWindow_AfterRendering((QQuickWindow*)self);
}

void q_quickwindow_on_after_rendering(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_AfterRendering((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_after_animating(void* self) {
    QQuickWindow_AfterAnimating((QQuickWindow*)self);
}

void q_quickwindow_on_after_animating(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_AfterAnimating((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_scene_graph_about_to_stop(void* self) {
    QQuickWindow_SceneGraphAboutToStop((QQuickWindow*)self);
}

void q_quickwindow_on_scene_graph_about_to_stop(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_SceneGraphAboutToStop((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_color_changed(void* self, void* param1) {
    QQuickWindow_ColorChanged((QQuickWindow*)self, (QColor*)param1);
}

void q_quickwindow_on_color_changed(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_Connect_ColorChanged((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_active_focus_item_changed(void* self) {
    QQuickWindow_ActiveFocusItemChanged((QQuickWindow*)self);
}

void q_quickwindow_on_active_focus_item_changed(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_ActiveFocusItemChanged((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_scene_graph_error(void* self, int32_t error, const char* message) {
    QQuickWindow_SceneGraphError((QQuickWindow*)self, error, qstring(message));
}

void q_quickwindow_on_scene_graph_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QQuickWindow_Connect_SceneGraphError((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_before_render_pass_recording(void* self) {
    QQuickWindow_BeforeRenderPassRecording((QQuickWindow*)self);
}

void q_quickwindow_on_before_render_pass_recording(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_BeforeRenderPassRecording((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_after_render_pass_recording(void* self) {
    QQuickWindow_AfterRenderPassRecording((QQuickWindow*)self);
}

void q_quickwindow_on_after_render_pass_recording(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_AfterRenderPassRecording((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_palette_changed(void* self) {
    QQuickWindow_PaletteChanged((QQuickWindow*)self);
}

void q_quickwindow_on_palette_changed(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_PaletteChanged((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_palette_created(void* self) {
    QQuickWindow_PaletteCreated((QQuickWindow*)self);
}

void q_quickwindow_on_palette_created(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_PaletteCreated((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_before_frame_begin(void* self) {
    QQuickWindow_BeforeFrameBegin((QQuickWindow*)self);
}

void q_quickwindow_on_before_frame_begin(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_BeforeFrameBegin((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_after_frame_end(void* self) {
    QQuickWindow_AfterFrameEnd((QQuickWindow*)self);
}

void q_quickwindow_on_after_frame_end(void* self, void (*callback)(void*)) {
    QQuickWindow_Connect_AfterFrameEnd((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_update(void* self) {
    QQuickWindow_Update((QQuickWindow*)self);
}

void q_quickwindow_release_resources(void* self) {
    QQuickWindow_ReleaseResources((QQuickWindow*)self);
}

void q_quickwindow_expose_event(void* self, void* param1) {
    QQuickWindow_ExposeEvent((QQuickWindow*)self, (QExposeEvent*)param1);
}

void q_quickwindow_on_expose_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnExposeEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_expose_event(void* self, void* param1) {
    QQuickWindow_SuperExposeEvent((QQuickWindow*)self, (QExposeEvent*)param1);
}

void q_quickwindow_resize_event(void* self, void* param1) {
    QQuickWindow_ResizeEvent((QQuickWindow*)self, (QResizeEvent*)param1);
}

void q_quickwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnResizeEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_resize_event(void* self, void* param1) {
    QQuickWindow_SuperResizeEvent((QQuickWindow*)self, (QResizeEvent*)param1);
}

void q_quickwindow_show_event(void* self, void* param1) {
    QQuickWindow_ShowEvent((QQuickWindow*)self, (QShowEvent*)param1);
}

void q_quickwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnShowEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_show_event(void* self, void* param1) {
    QQuickWindow_SuperShowEvent((QQuickWindow*)self, (QShowEvent*)param1);
}

void q_quickwindow_hide_event(void* self, void* param1) {
    QQuickWindow_HideEvent((QQuickWindow*)self, (QHideEvent*)param1);
}

void q_quickwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnHideEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_hide_event(void* self, void* param1) {
    QQuickWindow_SuperHideEvent((QQuickWindow*)self, (QHideEvent*)param1);
}

void q_quickwindow_close_event(void* self, void* param1) {
    QQuickWindow_CloseEvent((QQuickWindow*)self, (QCloseEvent*)param1);
}

void q_quickwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnCloseEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_close_event(void* self, void* param1) {
    QQuickWindow_SuperCloseEvent((QQuickWindow*)self, (QCloseEvent*)param1);
}

void q_quickwindow_focus_in_event(void* self, void* param1) {
    QQuickWindow_FocusInEvent((QQuickWindow*)self, (QFocusEvent*)param1);
}

void q_quickwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnFocusInEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_focus_in_event(void* self, void* param1) {
    QQuickWindow_SuperFocusInEvent((QQuickWindow*)self, (QFocusEvent*)param1);
}

void q_quickwindow_focus_out_event(void* self, void* param1) {
    QQuickWindow_FocusOutEvent((QQuickWindow*)self, (QFocusEvent*)param1);
}

void q_quickwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnFocusOutEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_focus_out_event(void* self, void* param1) {
    QQuickWindow_SuperFocusOutEvent((QQuickWindow*)self, (QFocusEvent*)param1);
}

bool q_quickwindow_event(void* self, void* param1) {
    return QQuickWindow_Event((QQuickWindow*)self, (QEvent*)param1);
}

void q_quickwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickWindow_OnEvent((QQuickWindow*)self, (intptr_t)callback);
}

bool q_quickwindow_super_event(void* self, void* param1) {
    return QQuickWindow_SuperEvent((QQuickWindow*)self, (QEvent*)param1);
}

void q_quickwindow_key_press_event(void* self, void* param1) {
    QQuickWindow_KeyPressEvent((QQuickWindow*)self, (QKeyEvent*)param1);
}

void q_quickwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnKeyPressEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_key_press_event(void* self, void* param1) {
    QQuickWindow_SuperKeyPressEvent((QQuickWindow*)self, (QKeyEvent*)param1);
}

void q_quickwindow_key_release_event(void* self, void* param1) {
    QQuickWindow_KeyReleaseEvent((QQuickWindow*)self, (QKeyEvent*)param1);
}

void q_quickwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnKeyReleaseEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_key_release_event(void* self, void* param1) {
    QQuickWindow_SuperKeyReleaseEvent((QQuickWindow*)self, (QKeyEvent*)param1);
}

void q_quickwindow_mouse_press_event(void* self, void* param1) {
    QQuickWindow_MousePressEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnMousePressEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_mouse_press_event(void* self, void* param1) {
    QQuickWindow_SuperMousePressEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_mouse_release_event(void* self, void* param1) {
    QQuickWindow_MouseReleaseEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnMouseReleaseEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_mouse_release_event(void* self, void* param1) {
    QQuickWindow_SuperMouseReleaseEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_mouse_double_click_event(void* self, void* param1) {
    QQuickWindow_MouseDoubleClickEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnMouseDoubleClickEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_mouse_double_click_event(void* self, void* param1) {
    QQuickWindow_SuperMouseDoubleClickEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_mouse_move_event(void* self, void* param1) {
    QQuickWindow_MouseMoveEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnMouseMoveEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_mouse_move_event(void* self, void* param1) {
    QQuickWindow_SuperMouseMoveEvent((QQuickWindow*)self, (QMouseEvent*)param1);
}

void q_quickwindow_wheel_event(void* self, void* param1) {
    QQuickWindow_WheelEvent((QQuickWindow*)self, (QWheelEvent*)param1);
}

void q_quickwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnWheelEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_wheel_event(void* self, void* param1) {
    QQuickWindow_SuperWheelEvent((QQuickWindow*)self, (QWheelEvent*)param1);
}

void q_quickwindow_tablet_event(void* self, void* param1) {
    QQuickWindow_TabletEvent((QQuickWindow*)self, (QTabletEvent*)param1);
}

void q_quickwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnTabletEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_super_tablet_event(void* self, void* param1) {
    QQuickWindow_SuperTabletEvent((QQuickWindow*)self, (QTabletEvent*)param1);
}

const char* q_quickwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSurface* q_quickwindow_as_q_surface(void* self) {
    return QWindow_AsQSurface((QWindow*)self);
}

QQuickWindow* q_quickwindow_from_q_surface(void* _qsurface) {
    return (QQuickWindow*)QWindow_FromQSurface((QSurface*)_qsurface);
}

void q_quickwindow_set_surface_type(void* self, int32_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

bool q_quickwindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

int32_t q_quickwindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

void q_quickwindow_set_visibility(void* self, int32_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

void q_quickwindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

uintptr_t q_quickwindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

QWindow* q_quickwindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

void q_quickwindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

bool q_quickwindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

bool q_quickwindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

int32_t q_quickwindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

void q_quickwindow_set_modality(void* self, int32_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

void q_quickwindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_quickwindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

void q_quickwindow_set_flags(void* self, int32_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

int32_t q_quickwindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

void q_quickwindow_set_flag(void* self, int32_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

int32_t q_quickwindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

const char* q_quickwindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

double q_quickwindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

void q_quickwindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

QRegion* q_quickwindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

bool q_quickwindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

void q_quickwindow_report_content_orientation_change(void* self, int32_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

int32_t q_quickwindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

double q_quickwindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

int32_t q_quickwindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

int32_t q_quickwindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

void q_quickwindow_set_window_state(void* self, int32_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

void q_quickwindow_set_window_states(void* self, int32_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

void q_quickwindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

QWindow* q_quickwindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

bool q_quickwindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

bool q_quickwindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

int32_t q_quickwindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

int32_t q_quickwindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

int32_t q_quickwindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

int32_t q_quickwindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

QSize* q_quickwindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

QSize* q_quickwindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

QSize* q_quickwindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

QSize* q_quickwindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

void q_quickwindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

void q_quickwindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

void q_quickwindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

void q_quickwindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

QRect* q_quickwindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

QMargins* q_quickwindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

QRect* q_quickwindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

QPoint* q_quickwindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

void q_quickwindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

int32_t q_quickwindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

int32_t q_quickwindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

int32_t q_quickwindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

int32_t q_quickwindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

QPoint* q_quickwindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

void q_quickwindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

void q_quickwindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

void q_quickwindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

void q_quickwindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

void q_quickwindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

const char* q_quickwindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

QIcon* q_quickwindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

void q_quickwindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

bool q_quickwindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

bool q_quickwindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

QScreen* q_quickwindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

void q_quickwindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

QPointF* q_quickwindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

QPointF* q_quickwindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

QPoint* q_quickwindow_map_to_global2(void* self, void* pos) {
    return QWindow_MapToGlobal2((QWindow*)self, (QPoint*)pos);
}

QPoint* q_quickwindow_map_from_global2(void* self, void* pos) {
    return QWindow_MapFromGlobal2((QWindow*)self, (QPoint*)pos);
}

QCursor* q_quickwindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

void q_quickwindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

void q_quickwindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

QWindow* q_quickwindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

void q_quickwindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

void q_quickwindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

void q_quickwindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

void q_quickwindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

void q_quickwindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

void q_quickwindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

void q_quickwindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

void q_quickwindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

bool q_quickwindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

void q_quickwindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

void q_quickwindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

bool q_quickwindow_start_system_resize(void* self, int32_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

bool q_quickwindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

void q_quickwindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

void q_quickwindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

void q_quickwindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

void q_quickwindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

void q_quickwindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

void q_quickwindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

void q_quickwindow_set_geometry2(void* self, void* rect) {
    QWindow_SetGeometry2((QWindow*)self, (QRect*)rect);
}

void q_quickwindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

void q_quickwindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

void q_quickwindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

void q_quickwindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

void q_quickwindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

void q_quickwindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

void q_quickwindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

void q_quickwindow_on_screen_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_modality_changed(void* self, int32_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

void q_quickwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_window_state_changed(void* self, int32_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

void q_quickwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

void q_quickwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

void q_quickwindow_on_x_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

void q_quickwindow_on_y_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

void q_quickwindow_on_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

void q_quickwindow_on_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

void q_quickwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

void q_quickwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

void q_quickwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

void q_quickwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

void q_quickwindow_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_visibility_changed(void* self, int32_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

void q_quickwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

void q_quickwindow_on_active_changed(void* self, void (*callback)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_content_orientation_changed(void* self, int32_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

void q_quickwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

void q_quickwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

void q_quickwindow_on_opacity_changed(void* self, void (*callback)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)callback);
}

void q_quickwindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

void q_quickwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)callback);
}

QWindow* q_quickwindow_parent1(void* self, int32_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

void q_quickwindow_set_flag2(void* self, int32_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

bool q_quickwindow_is_ancestor_of2(void* self, void* child, int32_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

const char* q_quickwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwindow_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickwindow_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickwindow_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickwindow_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickwindow_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickwindow_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickwindow_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickwindow_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickwindow_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickwindow_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwindow_dynamic_property_names\n");
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

QBindingStorage* q_quickwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_quickwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickwindow_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickwindow_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickwindow_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickwindow_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickwindow_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickwindow_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickwindow_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_quickwindow_surface_class(void* self) {
    return QSurface_SurfaceClass(q_quickwindow_as_q_surface(self));
}

bool q_quickwindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL(q_quickwindow_as_q_surface(self));
}

int32_t q_quickwindow_surface_type(void* self) {
    return QQuickWindow_SurfaceType((QQuickWindow*)self);
}

int32_t q_quickwindow_super_surface_type(void* self) {
    return QQuickWindow_SuperSurfaceType((QQuickWindow*)self);
}

void q_quickwindow_on_surface_type(void* self, int32_t (*callback)()) {
    QQuickWindow_OnSurfaceType((QQuickWindow*)self, (intptr_t)callback);
}

QSurfaceFormat* q_quickwindow_format(void* self) {
    return QQuickWindow_Format((QQuickWindow*)self);
}

QSurfaceFormat* q_quickwindow_super_format(void* self) {
    return QQuickWindow_SuperFormat((QQuickWindow*)self);
}

void q_quickwindow_on_format(void* self, QSurfaceFormat* (*callback)()) {
    QQuickWindow_OnFormat((QQuickWindow*)self, (intptr_t)callback);
}

QSize* q_quickwindow_size(void* self) {
    return QQuickWindow_Size((QQuickWindow*)self);
}

QSize* q_quickwindow_super_size(void* self) {
    return QQuickWindow_SuperSize((QQuickWindow*)self);
}

void q_quickwindow_on_size(void* self, QSize* (*callback)()) {
    QQuickWindow_OnSize((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_paint_event(void* self, void* param1) {
    QQuickWindow_PaintEvent((QQuickWindow*)self, (QPaintEvent*)param1);
}

void q_quickwindow_super_paint_event(void* self, void* param1) {
    QQuickWindow_SuperPaintEvent((QQuickWindow*)self, (QPaintEvent*)param1);
}

void q_quickwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnPaintEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_move_event(void* self, void* param1) {
    QQuickWindow_MoveEvent((QQuickWindow*)self, (QMoveEvent*)param1);
}

void q_quickwindow_super_move_event(void* self, void* param1) {
    QQuickWindow_SuperMoveEvent((QQuickWindow*)self, (QMoveEvent*)param1);
}

void q_quickwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnMoveEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_touch_event(void* self, void* param1) {
    QQuickWindow_TouchEvent((QQuickWindow*)self, (QTouchEvent*)param1);
}

void q_quickwindow_super_touch_event(void* self, void* param1) {
    QQuickWindow_SuperTouchEvent((QQuickWindow*)self, (QTouchEvent*)param1);
}

void q_quickwindow_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnTouchEvent((QQuickWindow*)self, (intptr_t)callback);
}

bool q_quickwindow_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QQuickWindow_NativeEvent((QQuickWindow*)self, qstring(eventType), message, result);
}

bool q_quickwindow_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QQuickWindow_SuperNativeEvent((QQuickWindow*)self, qstring(eventType), message, result);
}

void q_quickwindow_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QQuickWindow_OnNativeEvent((QQuickWindow*)self, (intptr_t)callback);
}

bool q_quickwindow_event_filter(void* self, void* watched, void* event) {
    return QQuickWindow_EventFilter((QQuickWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickwindow_super_event_filter(void* self, void* watched, void* event) {
    return QQuickWindow_SuperEventFilter((QQuickWindow*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickWindow_OnEventFilter((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_timer_event(void* self, void* event) {
    QQuickWindow_TimerEvent((QQuickWindow*)self, (QTimerEvent*)event);
}

void q_quickwindow_super_timer_event(void* self, void* event) {
    QQuickWindow_SuperTimerEvent((QQuickWindow*)self, (QTimerEvent*)event);
}

void q_quickwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnTimerEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_child_event(void* self, void* event) {
    QQuickWindow_ChildEvent((QQuickWindow*)self, (QChildEvent*)event);
}

void q_quickwindow_super_child_event(void* self, void* event) {
    QQuickWindow_SuperChildEvent((QQuickWindow*)self, (QChildEvent*)event);
}

void q_quickwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnChildEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_custom_event(void* self, void* event) {
    QQuickWindow_CustomEvent((QQuickWindow*)self, (QEvent*)event);
}

void q_quickwindow_super_custom_event(void* self, void* event) {
    QQuickWindow_SuperCustomEvent((QQuickWindow*)self, (QEvent*)event);
}

void q_quickwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnCustomEvent((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_connect_notify(void* self, void* signal) {
    QQuickWindow_ConnectNotify((QQuickWindow*)self, (QMetaMethod*)signal);
}

void q_quickwindow_super_connect_notify(void* self, void* signal) {
    QQuickWindow_SuperConnectNotify((QQuickWindow*)self, (QMetaMethod*)signal);
}

void q_quickwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnConnectNotify((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_disconnect_notify(void* self, void* signal) {
    QQuickWindow_DisconnectNotify((QQuickWindow*)self, (QMetaMethod*)signal);
}

void q_quickwindow_super_disconnect_notify(void* self, void* signal) {
    QQuickWindow_SuperDisconnectNotify((QQuickWindow*)self, (QMetaMethod*)signal);
}

void q_quickwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickWindow_OnDisconnectNotify((QQuickWindow*)self, (intptr_t)callback);
}

void* q_quickwindow_resolve_interface(void* self, const char* name, int revision) {
    return QQuickWindow_ResolveInterface((QQuickWindow*)self, name, revision);
}

void* q_quickwindow_super_resolve_interface(void* self, const char* name, int revision) {
    return QQuickWindow_SuperResolveInterface((QQuickWindow*)self, name, revision);
}

void q_quickwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QQuickWindow_OnResolveInterface((QQuickWindow*)self, (intptr_t)callback);
}

QObject* q_quickwindow_sender(void* self) {
    return QQuickWindow_Sender((QQuickWindow*)self);
}

QObject* q_quickwindow_super_sender(void* self) {
    return QQuickWindow_SuperSender((QQuickWindow*)self);
}

void q_quickwindow_on_sender(void* self, QObject* (*callback)()) {
    QQuickWindow_OnSender((QQuickWindow*)self, (intptr_t)callback);
}

int32_t q_quickwindow_sender_signal_index(void* self) {
    return QQuickWindow_SenderSignalIndex((QQuickWindow*)self);
}

int32_t q_quickwindow_super_sender_signal_index(void* self) {
    return QQuickWindow_SuperSenderSignalIndex((QQuickWindow*)self);
}

void q_quickwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickWindow_OnSenderSignalIndex((QQuickWindow*)self, (intptr_t)callback);
}

int32_t q_quickwindow_receivers(void* self, const char* signal) {
    return QQuickWindow_Receivers((QQuickWindow*)self, signal);
}

int32_t q_quickwindow_super_receivers(void* self, const char* signal) {
    return QQuickWindow_SuperReceivers((QQuickWindow*)self, signal);
}

void q_quickwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickWindow_OnReceivers((QQuickWindow*)self, (intptr_t)callback);
}

bool q_quickwindow_is_signal_connected(void* self, void* signal) {
    return QQuickWindow_IsSignalConnected((QQuickWindow*)self, (QMetaMethod*)signal);
}

bool q_quickwindow_super_is_signal_connected(void* self, void* signal) {
    return QQuickWindow_SuperIsSignalConnected((QQuickWindow*)self, (QMetaMethod*)signal);
}

void q_quickwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickWindow_OnIsSignalConnected((QQuickWindow*)self, (intptr_t)callback);
}

void q_quickwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickwindow_delete(void* self) {
    QQuickWindow_Delete((QQuickWindow*)(self));
}

int32_t q_quickwindow__graphicsstateinfo_current_frame_slot(void* self) {
    return QQuickWindow__GraphicsStateInfo_CurrentFrameSlot((QQuickWindow__GraphicsStateInfo*)self);
}

void q_quickwindow__graphicsstateinfo_set_current_frame_slot(void* self, int currentFrameSlot) {
    QQuickWindow__GraphicsStateInfo_SetCurrentFrameSlot((QQuickWindow__GraphicsStateInfo*)self, currentFrameSlot);
}

int32_t q_quickwindow__graphicsstateinfo_frames_in_flight(void* self) {
    return QQuickWindow__GraphicsStateInfo_FramesInFlight((QQuickWindow__GraphicsStateInfo*)self);
}

void q_quickwindow__graphicsstateinfo_set_frames_in_flight(void* self, int framesInFlight) {
    QQuickWindow__GraphicsStateInfo_SetFramesInFlight((QQuickWindow__GraphicsStateInfo*)self, framesInFlight);
}

void q_quickwindow__graphicsstateinfo_delete(void* self) {
    QQuickWindow__GraphicsStateInfo_Delete((QQuickWindow__GraphicsStateInfo*)(self));
}
