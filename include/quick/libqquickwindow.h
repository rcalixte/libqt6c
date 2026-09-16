#pragma once
#ifndef QUICK_LIBQQUICKWINDOW_H
#define QUICK_LIBQQUICKWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html)

/// q_quickwindow_new constructs a new QQuickWindow object.
///
QQuickWindow* q_quickwindow_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html)

/// q_quickwindow_new2 constructs a new QQuickWindow object.
///
/// @param renderControl QQuickRenderControl*
///
QQuickWindow* q_quickwindow_new2(void* renderControl);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html)

/// q_quickwindow_new3 constructs a new QQuickWindow object.
///
/// @param parent QWindow*
///
QQuickWindow* q_quickwindow_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickWindow*
///
const QMetaObject* q_quickwindow_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback const QMetaObject* func()
///
void q_quickwindow_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
///
const QMetaObject* q_quickwindow_super_meta_object(void* self);

/// @param self QQuickWindow*
/// @param param1 const char*
///
void* q_quickwindow_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void* func(QQuickWindow* self, const char* param1)
///
void q_quickwindow_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 const char*
///
void* q_quickwindow_super_metacast(void* self, const char* param1);

/// @param self QQuickWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback int32_t func(QQuickWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwindow_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickwindow_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#contentItem)
///
/// @param self QQuickWindow*
///
QQuickItem* q_quickwindow_content_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItem)
///
/// @param self QQuickWindow*
///
QQuickItem* q_quickwindow_active_focus_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// @param self QQuickWindow*
///
QObject* q_quickwindow_focus_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback QObject* func()
///
void q_quickwindow_on_focus_object(void* self, QObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
///
QObject* q_quickwindow_super_focus_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseGrabberItem)
///
/// @param self QQuickWindow*
///
QQuickItem* q_quickwindow_mouse_grabber_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#grabWindow)
///
/// @param self QQuickWindow*
///
QImage* q_quickwindow_grab_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setRenderTarget)
///
/// @param self QQuickWindow*
/// @param target QQuickRenderTarget*
///
void q_quickwindow_set_render_target(void* self, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#renderTarget)
///
/// @param self QQuickWindow*
///
QQuickRenderTarget* q_quickwindow_render_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsStateInfo)
///
/// @param self QQuickWindow*
///
const QQuickWindow__GraphicsStateInfo* q_quickwindow_graphics_state_info(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beginExternalCommands)
///
/// @param self QQuickWindow*
///
void q_quickwindow_begin_external_commands(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#endExternalCommands)
///
/// @param self QQuickWindow*
///
void q_quickwindow_end_external_commands(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#incubationController)
///
/// @param self QQuickWindow*
///
QQmlIncubationController* q_quickwindow_incubation_controller(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// @param self QQuickWindow*
///
QAccessibleInterface* q_quickwindow_accessible_root(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback QAccessibleInterface* func()
///
void q_quickwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
///
QAccessibleInterface* q_quickwindow_super_accessible_root(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
///
/// @param self QQuickWindow*
/// @param image QImage*
///
QSGTexture* q_quickwindow_create_texture_from_image(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
///
/// @param self QQuickWindow*
/// @param image QImage*
/// @param options flag of enum QQuickWindow__CreateTextureOption
///
QSGTexture* q_quickwindow_create_texture_from_image2(void* self, void* image, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setColor)
///
/// @param self QQuickWindow*
/// @param color QColor*
///
void q_quickwindow_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#color)
///
/// @param self QQuickWindow*
///
QColor* q_quickwindow_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hasDefaultAlphaBuffer)
///
bool q_quickwindow_has_default_alpha_buffer();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setDefaultAlphaBuffer)
///
/// @param useAlpha bool
///
void q_quickwindow_set_default_alpha_buffer(bool useAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentGraphics)
///
/// @param self QQuickWindow*
/// @param persistent bool
///
void q_quickwindow_set_persistent_graphics(void* self, bool persistent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentGraphics)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_persistent_graphics(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentSceneGraph)
///
/// @param self QQuickWindow*
/// @param persistent bool
///
void q_quickwindow_set_persistent_scene_graph(void* self, bool persistent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentSceneGraph)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_persistent_scene_graph(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isSceneGraphInitialized)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_scene_graph_initialized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#scheduleRenderJob)
///
/// @param self QQuickWindow*
/// @param job QRunnable*
/// @param schedule enum QQuickWindow__RenderStage
///
void q_quickwindow_schedule_render_job(void* self, void* job, int32_t schedule);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#effectiveDevicePixelRatio)
///
/// @param self QQuickWindow*
///
double q_quickwindow_effective_device_pixel_ratio(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#rendererInterface)
///
/// @param self QQuickWindow*
///
QSGRendererInterface* q_quickwindow_renderer_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsApi)
///
/// @param api enum QSGRendererInterface__GraphicsApi
///
void q_quickwindow_set_graphics_api(int32_t api);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsApi)
///
/// @return enum QSGRendererInterface__GraphicsApi
///
int32_t q_quickwindow_graphics_api();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setSceneGraphBackend)
///
/// @param backend const char*
///
void q_quickwindow_set_scene_graph_backend(const char* backend);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphBackend)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_quickwindow_scene_graph_backend();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsDevice)
///
/// @param self QQuickWindow*
/// @param device QQuickGraphicsDevice*
///
void q_quickwindow_set_graphics_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsDevice)
///
/// @param self QQuickWindow*
///
QQuickGraphicsDevice* q_quickwindow_graphics_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsConfiguration)
///
/// @param self QQuickWindow*
/// @param config QQuickGraphicsConfiguration*
///
void q_quickwindow_set_graphics_configuration(void* self, void* config);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsConfiguration)
///
/// @param self QQuickWindow*
///
QQuickGraphicsConfiguration* q_quickwindow_graphics_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createRectangleNode)
///
/// @param self QQuickWindow*
///
QSGRectangleNode* q_quickwindow_create_rectangle_node(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createImageNode)
///
/// @param self QQuickWindow*
///
QSGImageNode* q_quickwindow_create_image_node(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createNinePatchNode)
///
/// @param self QQuickWindow*
///
QSGNinePatchNode* q_quickwindow_create_nine_patch_node(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextNode)
///
/// @param self QQuickWindow*
///
QSGTextNode* q_quickwindow_create_text_node(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#textRenderType)
///
/// @return enum QQuickWindow__TextRenderType
///
int32_t q_quickwindow_text_render_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setTextRenderType)
///
/// @param renderType enum QQuickWindow__TextRenderType
///
void q_quickwindow_set_text_render_type(int32_t renderType);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
///
/// @param self QQuickWindow*
///
void q_quickwindow_frame_swapped(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_frame_swapped(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
///
/// @param self QQuickWindow*
///
void q_quickwindow_scene_graph_initialized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_scene_graph_initialized(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
///
/// @param self QQuickWindow*
///
void q_quickwindow_scene_graph_invalidated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_scene_graph_invalidated(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
///
/// @param self QQuickWindow*
///
void q_quickwindow_before_synchronizing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_before_synchronizing(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
///
/// @param self QQuickWindow*
///
void q_quickwindow_after_synchronizing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_after_synchronizing(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
///
/// @param self QQuickWindow*
///
void q_quickwindow_before_rendering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_before_rendering(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
///
/// @param self QQuickWindow*
///
void q_quickwindow_after_rendering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_after_rendering(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
///
/// @param self QQuickWindow*
///
void q_quickwindow_after_animating(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_after_animating(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
///
/// @param self QQuickWindow*
///
void q_quickwindow_scene_graph_about_to_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_scene_graph_about_to_stop(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
///
/// @param self QQuickWindow*
/// @param param1 QColor*
///
void q_quickwindow_color_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QColor* param1)
///
void q_quickwindow_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
///
/// @param self QQuickWindow*
///
void q_quickwindow_active_focus_item_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_active_focus_item_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
///
/// @param self QQuickWindow*
/// @param error enum QQuickWindow__SceneGraphError
/// @param message const char*
///
void q_quickwindow_scene_graph_error(void* self, int32_t error, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, enum QQuickWindow__SceneGraphError error, const char* message)
///
void q_quickwindow_on_scene_graph_error(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
///
/// @param self QQuickWindow*
///
void q_quickwindow_before_render_pass_recording(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_before_render_pass_recording(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
///
/// @param self QQuickWindow*
///
void q_quickwindow_after_render_pass_recording(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_after_render_pass_recording(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
///
/// @param self QQuickWindow*
///
void q_quickwindow_palette_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_palette_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
///
/// @param self QQuickWindow*
///
void q_quickwindow_palette_created(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_palette_created(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
///
/// @param self QQuickWindow*
///
void q_quickwindow_before_frame_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_before_frame_begin(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
///
/// @param self QQuickWindow*
///
void q_quickwindow_after_frame_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_after_frame_end(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#update)
///
/// @param self QQuickWindow*
///
void q_quickwindow_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#releaseResources)
///
/// @param self QQuickWindow*
///
void q_quickwindow_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// @param self QQuickWindow*
/// @param param1 QExposeEvent*
///
void q_quickwindow_expose_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QExposeEvent* param1)
///
void q_quickwindow_on_expose_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QExposeEvent*
///
void q_quickwindow_super_expose_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#resizeEvent)
///
/// @param self QQuickWindow*
/// @param param1 QResizeEvent*
///
void q_quickwindow_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QResizeEvent* param1)
///
void q_quickwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QResizeEvent*
///
void q_quickwindow_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// @param self QQuickWindow*
/// @param param1 QShowEvent*
///
void q_quickwindow_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QShowEvent* param1)
///
void q_quickwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QShowEvent*
///
void q_quickwindow_super_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// @param self QQuickWindow*
/// @param param1 QHideEvent*
///
void q_quickwindow_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QHideEvent* param1)
///
void q_quickwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QHideEvent*
///
void q_quickwindow_super_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// @param self QQuickWindow*
/// @param param1 QCloseEvent*
///
void q_quickwindow_close_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QCloseEvent* param1)
///
void q_quickwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QCloseEvent*
///
void q_quickwindow_super_close_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// @param self QQuickWindow*
/// @param param1 QFocusEvent*
///
void q_quickwindow_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QFocusEvent* param1)
///
void q_quickwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QFocusEvent*
///
void q_quickwindow_super_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// @param self QQuickWindow*
/// @param param1 QFocusEvent*
///
void q_quickwindow_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QFocusEvent* param1)
///
void q_quickwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QFocusEvent*
///
void q_quickwindow_super_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// @param self QQuickWindow*
/// @param param1 QEvent*
///
bool q_quickwindow_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback bool func(QQuickWindow* self, QEvent* param1)
///
void q_quickwindow_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QEvent*
///
bool q_quickwindow_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyPressEvent)
///
/// @param self QQuickWindow*
/// @param param1 QKeyEvent*
///
void q_quickwindow_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QKeyEvent* param1)
///
void q_quickwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QKeyEvent*
///
void q_quickwindow_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyReleaseEvent)
///
/// @param self QQuickWindow*
/// @param param1 QKeyEvent*
///
void q_quickwindow_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QKeyEvent* param1)
///
void q_quickwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QKeyEvent*
///
void q_quickwindow_super_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mousePressEvent)
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMouseEvent* param1)
///
void q_quickwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseReleaseEvent)
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMouseEvent* param1)
///
void q_quickwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMouseEvent* param1)
///
void q_quickwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_super_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseMoveEvent)
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMouseEvent* param1)
///
void q_quickwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QMouseEvent*
///
void q_quickwindow_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// @param self QQuickWindow*
/// @param param1 QWheelEvent*
///
void q_quickwindow_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QWheelEvent* param1)
///
void q_quickwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QWheelEvent*
///
void q_quickwindow_super_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// @param self QQuickWindow*
/// @param param1 QTabletEvent*
///
void q_quickwindow_tablet_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QTabletEvent* param1)
///
void q_quickwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// Base class method implementation
///
/// @param self QQuickWindow*
/// @param param1 QTabletEvent*
///
void q_quickwindow_super_tablet_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickwindow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickwindow_tr3(const char* s, const char* c, int n);

/// Inherited from QWindow
///
/// Upcasts to a QSurface object
///
/// @param self QQuickWindow*
///
QSurface* q_quickwindow_as_q_surface(void* self);

/// Inherited from QWindow
///
/// Downcasts to a QQuickWindow object
///
/// @param _qsurface QSurface*
///
QQuickWindow* q_quickwindow_from_q_surface(void* _qsurface);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QQuickWindow*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_quickwindow_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_visible(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self QQuickWindow*
///
/// @return enum QWindow__Visibility
///
int32_t q_quickwindow_visibility(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QQuickWindow*
/// @param v enum QWindow__Visibility
///
void q_quickwindow_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QQuickWindow*
///
void q_quickwindow_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self QQuickWindow*
///
uintptr_t q_quickwindow_win_id(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QQuickWindow*
///
QWindow* q_quickwindow_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QQuickWindow*
/// @param parent QWindow*
///
void q_quickwindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_modal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self QQuickWindow*
///
/// @return enum Qt__WindowModality
///
int32_t q_quickwindow_modality(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QQuickWindow*
/// @param modality enum Qt__WindowModality
///
void q_quickwindow_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QQuickWindow*
/// @param format QSurfaceFormat*
///
void q_quickwindow_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self QQuickWindow*
///
QSurfaceFormat* q_quickwindow_requested_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QQuickWindow*
/// @param flags flag of enum Qt__WindowType
///
void q_quickwindow_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self QQuickWindow*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_quickwindow_flags(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QQuickWindow*
/// @param param1 enum Qt__WindowType
///
void q_quickwindow_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self QQuickWindow*
///
/// @return enum Qt__WindowType
///
int32_t q_quickwindow_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickWindow*
///
const char* q_quickwindow_title(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QQuickWindow*
/// @param level double
///
void q_quickwindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self QQuickWindow*
///
double q_quickwindow_opacity(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QQuickWindow*
/// @param region QRegion*
///
void q_quickwindow_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self QQuickWindow*
///
QRegion* q_quickwindow_mask(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_active(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QQuickWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_quickwindow_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self QQuickWindow*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_quickwindow_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self QQuickWindow*
///
double q_quickwindow_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self QQuickWindow*
///
/// @return enum Qt__WindowState
///
int32_t q_quickwindow_window_state(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self QQuickWindow*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_quickwindow_window_states(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QQuickWindow*
/// @param state enum Qt__WindowState
///
void q_quickwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QQuickWindow*
/// @param states flag of enum Qt__WindowState
///
void q_quickwindow_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QQuickWindow*
/// @param parent QWindow*
///
void q_quickwindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self QQuickWindow*
///
QWindow* q_quickwindow_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QQuickWindow*
/// @param child QWindow*
///
bool q_quickwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_base_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_size_increment(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QQuickWindow*
/// @param size QSize*
///
void q_quickwindow_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QQuickWindow*
/// @param size QSize*
///
void q_quickwindow_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QQuickWindow*
/// @param size QSize*
///
void q_quickwindow_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QQuickWindow*
/// @param size QSize*
///
void q_quickwindow_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self QQuickWindow*
///
QRect* q_quickwindow_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self QQuickWindow*
///
QMargins* q_quickwindow_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self QQuickWindow*
///
QRect* q_quickwindow_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self QQuickWindow*
///
QPoint* q_quickwindow_frame_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QQuickWindow*
/// @param point QPoint*
///
void q_quickwindow_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_x(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_y(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self QQuickWindow*
///
QPoint* q_quickwindow_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QQuickWindow*
/// @param pt QPoint*
///
void q_quickwindow_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QQuickWindow*
/// @param posx int
/// @param posy int
///
void q_quickwindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QQuickWindow*
/// @param newSize QSize*
///
void q_quickwindow_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QQuickWindow*
/// @param w int
/// @param h int
///
void q_quickwindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QQuickWindow*
/// @param filePath const char*
///
void q_quickwindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickWindow*
///
const char* q_quickwindow_file_path(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QQuickWindow*
/// @param icon QIcon*
///
void q_quickwindow_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self QQuickWindow*
///
QIcon* q_quickwindow_icon(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QQuickWindow*
///
void q_quickwindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QQuickWindow*
/// @param grab bool
///
bool q_quickwindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QQuickWindow*
/// @param grab bool
///
bool q_quickwindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self QQuickWindow*
///
QScreen* q_quickwindow_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QQuickWindow*
/// @param screen QScreen*
///
void q_quickwindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QQuickWindow*
/// @param pos QPointF*
///
QPointF* q_quickwindow_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QQuickWindow*
/// @param pos QPointF*
///
QPointF* q_quickwindow_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QQuickWindow*
/// @param pos QPoint*
///
QPoint* q_quickwindow_map_to_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QQuickWindow*
/// @param pos QPoint*
///
QPoint* q_quickwindow_map_from_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self QQuickWindow*
///
QCursor* q_quickwindow_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QQuickWindow*
/// @param cursor QCursor*
///
void q_quickwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QQuickWindow*
///
void q_quickwindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_quickwindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QQuickWindow*
///
void q_quickwindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QQuickWindow*
/// @param visible bool
///
void q_quickwindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QQuickWindow*
///
void q_quickwindow_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QQuickWindow*
///
void q_quickwindow_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QQuickWindow*
///
void q_quickwindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QQuickWindow*
///
void q_quickwindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QQuickWindow*
///
void q_quickwindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QQuickWindow*
///
void q_quickwindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QQuickWindow*
///
void q_quickwindow_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QQuickWindow*
///
void q_quickwindow_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QQuickWindow*
/// @param edges flag of enum Qt__Edge
///
bool q_quickwindow_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QQuickWindow*
/// @param title const char*
///
void q_quickwindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QQuickWindow*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_quickwindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QQuickWindow*
/// @param rect QRect*
///
void q_quickwindow_set_geometry2(void* self, void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QQuickWindow*
/// @param w int
///
void q_quickwindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QQuickWindow*
/// @param h int
///
void q_quickwindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QQuickWindow*
/// @param w int
///
void q_quickwindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QQuickWindow*
/// @param h int
///
void q_quickwindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QQuickWindow*
/// @param msec int
///
void q_quickwindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QQuickWindow*
///
void q_quickwindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QQuickWindow*
/// @param screen QScreen*
///
void q_quickwindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QScreen* screen)
///
void q_quickwindow_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QQuickWindow*
/// @param modality enum Qt__WindowModality
///
void q_quickwindow_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, enum Qt__WindowModality modality)
///
void q_quickwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QQuickWindow*
/// @param windowState enum Qt__WindowState
///
void q_quickwindow_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, enum Qt__WindowState windowState)
///
void q_quickwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QQuickWindow*
/// @param title const char*
///
void q_quickwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, const char* title)
///
void q_quickwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QQuickWindow*
/// @param arg int
///
void q_quickwindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, int arg)
///
void q_quickwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QQuickWindow*
/// @param arg bool
///
void q_quickwindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, bool arg)
///
void q_quickwindow_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QQuickWindow*
/// @param visibility enum QWindow__Visibility
///
void q_quickwindow_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, enum QWindow__Visibility visibility)
///
void q_quickwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QQuickWindow*
///
void q_quickwindow_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QQuickWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_quickwindow_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, enum Qt__ScreenOrientation orientation)
///
void q_quickwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QQuickWindow*
/// @param object QObject*
///
void q_quickwindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QObject* object)
///
void q_quickwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QQuickWindow*
/// @param opacity double
///
void q_quickwindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, double opacity)
///
void q_quickwindow_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QQuickWindow*
/// @param transientParent QWindow*
///
void q_quickwindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QWindow* transientParent)
///
void q_quickwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QQuickWindow*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_quickwindow_parent1(void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QQuickWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_quickwindow_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QQuickWindow*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_quickwindow_is_ancestor_of2(void* self, void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickWindow*
///
const char* q_quickwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickWindow*
/// @param name const char*
///
void q_quickwindow_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickWindow*
/// @param b bool
///
bool q_quickwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickWindow*
///
QThread* q_quickwindow_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickWindow*
/// @param thread QThread*
///
bool q_quickwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWindow*
/// @param interval int
///
int32_t q_quickwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWindow*
/// @param time int64_t of nanoseconds
///
int32_t q_quickwindow_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWindow*
/// @param id int
///
void q_quickwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWindow*
/// @param id enum Qt__TimerId
///
void q_quickwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickWindow*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickwindow_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickWindow*
/// @param filterObj QObject*
///
void q_quickwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickWindow*
/// @param obj QObject*
///
void q_quickwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickwindow_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickwindow_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickwindow_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwindow_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickwindow_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
/// @param receiver QObject*
///
bool q_quickwindow_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickwindow_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickWindow*
///
void q_quickwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickWindow*
///
void q_quickwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickWindow*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickWindow*
/// @param name const char*
///
QVariant* q_quickwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickWindow*
///
const char** q_quickwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickWindow*
///
QBindingStorage* q_quickwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickWindow*
///
const QBindingStorage* q_quickwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWindow*
///
void q_quickwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self)
///
void q_quickwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickWindow*
/// @param classname const char*
///
bool q_quickwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickWindow*
///
void q_quickwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWindow*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwindow_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwindow_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwindow_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
/// @param signal const char*
///
bool q_quickwindow_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickwindow_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwindow_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickWindow*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwindow_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWindow*
/// @param param1 QObject*
///
void q_quickwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QObject* param1)
///
void q_quickwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QQuickWindow*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_quickwindow_surface_class(void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QQuickWindow*
///
bool q_quickwindow_supports_open_g_l(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_quickwindow_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_quickwindow_super_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback int32_t func()
///
void q_quickwindow_on_surface_type(void* self, int32_t (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
///
QSurfaceFormat* q_quickwindow_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
///
QSurfaceFormat* q_quickwindow_super_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback QSurfaceFormat* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickwindow_on_format(void* self, QSurfaceFormat* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
///
QSize* q_quickwindow_super_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback QSize* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickwindow_on_size(void* self, QSize* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QPaintEvent*
///
void q_quickwindow_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QPaintEvent*
///
void q_quickwindow_super_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QPaintEvent* param1)
///
void q_quickwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QMoveEvent*
///
void q_quickwindow_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QMoveEvent*
///
void q_quickwindow_super_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMoveEvent* param1)
///
void q_quickwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QTouchEvent*
///
void q_quickwindow_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param param1 QTouchEvent*
///
void q_quickwindow_super_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QTouchEvent* param1)
///
void q_quickwindow_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickwindow_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickwindow_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback bool func(QQuickWindow* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_quickwindow_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwindow_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback bool func(QQuickWindow* self, QObject* watched, QEvent* event)
///
void q_quickwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QTimerEvent*
///
void q_quickwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QTimerEvent*
///
void q_quickwindow_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QTimerEvent* event)
///
void q_quickwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QChildEvent*
///
void q_quickwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QChildEvent*
///
void q_quickwindow_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QChildEvent* event)
///
void q_quickwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QEvent*
///
void q_quickwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param event QEvent*
///
void q_quickwindow_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QEvent* event)
///
void q_quickwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
void q_quickwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
void q_quickwindow_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMetaMethod* signal)
///
void q_quickwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
void q_quickwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
void q_quickwindow_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, QMetaMethod* signal)
///
void q_quickwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param name const char*
/// @param revision int
///
void* q_quickwindow_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param name const char*
/// @param revision int
///
void* q_quickwindow_super_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback void* func(QQuickWindow* self, const char* name, int revision)
///
void q_quickwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
///
QObject* q_quickwindow_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
///
QObject* q_quickwindow_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback QObject* func()
///
void q_quickwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
///
int32_t q_quickwindow_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback int32_t func()
///
void q_quickwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal const char*
///
int32_t q_quickwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal const char*
///
int32_t q_quickwindow_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback int32_t func(QQuickWindow* self, const char* signal)
///
void q_quickwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
bool q_quickwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param signal QMetaMethod*
///
bool q_quickwindow_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWindow*
/// @param callback bool func(QQuickWindow* self, QMetaMethod* signal)
///
void q_quickwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickWindow*
/// @param callback void func(QQuickWindow* self, const char* objectName)
///
void q_quickwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#dtor.QQuickWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickWindow*
///
void q_quickwindow_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow-graphicsstateinfo.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow-graphicsstateinfo.html#currentFrameSlot-var)
///
/// @param self QQuickWindow__GraphicsStateInfo*
///
int32_t q_quickwindow__graphicsstateinfo_current_frame_slot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow-graphicsstateinfo.html#currentFrameSlot-var)
///
/// @param self QQuickWindow__GraphicsStateInfo*
/// @param currentFrameSlot int
///
void q_quickwindow__graphicsstateinfo_set_current_frame_slot(void* self, int currentFrameSlot);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow-graphicsstateinfo.html#framesInFlight-var)
///
/// @param self QQuickWindow__GraphicsStateInfo*
///
int32_t q_quickwindow__graphicsstateinfo_frames_in_flight(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow-graphicsstateinfo.html#framesInFlight-var)
///
/// @param self QQuickWindow__GraphicsStateInfo*
/// @param framesInFlight int
///
void q_quickwindow__graphicsstateinfo_set_frames_in_flight(void* self, int framesInFlight);

/// Delete this object from C++ memory.
///
/// @param self QQuickWindow__GraphicsStateInfo*
///
void q_quickwindow__graphicsstateinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#public-types)

typedef enum {
    QQUICKWINDOW_CREATETEXTUREOPTION_TEXTUREHASALPHACHANNEL = 1,
    QQUICKWINDOW_CREATETEXTUREOPTION_TEXTUREHASMIPMAPS = 2,
    QQUICKWINDOW_CREATETEXTUREOPTION_TEXTUREOWNSGLTEXTURE = 4,
    QQUICKWINDOW_CREATETEXTUREOPTION_TEXTURECANUSEATLAS = 8,
    QQUICKWINDOW_CREATETEXTUREOPTION_TEXTUREISOPAQUE = 16
} QQuickWindow__CreateTextureOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#public-types)

typedef enum {
    QQUICKWINDOW_RENDERSTAGE_BEFORESYNCHRONIZINGSTAGE = 0,
    QQUICKWINDOW_RENDERSTAGE_AFTERSYNCHRONIZINGSTAGE = 1,
    QQUICKWINDOW_RENDERSTAGE_BEFORERENDERINGSTAGE = 2,
    QQUICKWINDOW_RENDERSTAGE_AFTERRENDERINGSTAGE = 3,
    QQUICKWINDOW_RENDERSTAGE_AFTERSWAPSTAGE = 4,
    QQUICKWINDOW_RENDERSTAGE_NOSTAGE = 5
} QQuickWindow__RenderStage;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#public-types)

typedef enum {
    QQUICKWINDOW_SCENEGRAPHERROR_CONTEXTNOTAVAILABLE = 1
} QQuickWindow__SceneGraphError;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#public-types)

typedef enum {
    QQUICKWINDOW_TEXTRENDERTYPE_QTTEXTRENDERING = 0,
    QQUICKWINDOW_TEXTRENDERTYPE_NATIVETEXTRENDERING = 1,
    QQUICKWINDOW_TEXTRENDERTYPE_CURVETEXTRENDERING = 2
} QQuickWindow__TextRenderType;

#endif
