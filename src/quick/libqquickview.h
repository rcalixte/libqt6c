#pragma once
#ifndef QUICK_LIBQQUICKVIEW_H
#define QUICK_LIBQQUICKVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new constructs a new QQuickView object.
///
QQuickView* q_quickview_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new2 constructs a new QQuickView object.
///
/// @param engine QQmlEngine*
/// @param parent QWindow*
///
QQuickView* q_quickview_new2(void* engine, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new3 constructs a new QQuickView object.
///
/// @param source QUrl*
///
QQuickView* q_quickview_new3(void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new4 constructs a new QQuickView object.
///
/// @param uri const char*
/// @param typeName const char*
///
QQuickView* q_quickview_new4(const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new5 constructs a new QQuickView object.
///
/// @param source QUrl*
/// @param renderControl QQuickRenderControl*
///
QQuickView* q_quickview_new5(void* source, void* renderControl);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new6 constructs a new QQuickView object.
///
/// @param parent QWindow*
///
QQuickView* q_quickview_new6(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new7 constructs a new QQuickView object.
///
/// @param source QUrl*
/// @param parent QWindow*
///
QQuickView* q_quickview_new7(void* source, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)

/// q_quickview_new8 constructs a new QQuickView object.
///
/// @param uri const char*
/// @param typeName const char*
/// @param parent QWindow*
///
QQuickView* q_quickview_new8(const char* uri, const char* typeName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickView*
///
const QMetaObject* q_quickview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback const QMetaObject* func()
///
void q_quickview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickView*
///
const QMetaObject* q_quickview_super_meta_object(void* self);

/// @param self QQuickView*
/// @param param1 const char*
///
void* q_quickview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void* func(QQuickView* self, const char* param1)
///
void q_quickview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 const char*
///
void* q_quickview_super_metacast(void* self, const char* param1);

/// @param self QQuickView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback int32_t func(QQuickView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickview_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#source)
///
/// @param self QQuickView*
///
QUrl* q_quickview_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#engine)
///
/// @param self QQuickView*
///
QQmlEngine* q_quickview_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#rootContext)
///
/// @param self QQuickView*
///
QQmlContext* q_quickview_root_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#rootObject)
///
/// @param self QQuickView*
///
QQuickItem* q_quickview_root_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeMode)
///
/// @param self QQuickView*
///
/// @return enum QQuickView__ResizeMode
///
int32_t q_quickview_resize_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setResizeMode)
///
/// @param self QQuickView*
/// @param resizeMode enum QQuickView__ResizeMode
///
void q_quickview_set_resize_mode(void* self, int32_t resizeMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#status)
///
/// @param self QQuickView*
///
/// @return enum QQuickView__Status
///
int32_t q_quickview_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#errors)
///
/// @param self QQuickView*
///
/// @return libqt_list of QQmlError*
///
libqt_list q_quickview_errors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#sizeHint)
///
/// @param self QQuickView*
///
QSize* q_quickview_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#initialSize)
///
/// @param self QQuickView*
///
QSize* q_quickview_initial_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setSource)
///
/// @param self QQuickView*
/// @param source QUrl*
///
void q_quickview_set_source(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#loadFromModule)
///
/// @param self QQuickView*
/// @param uri const char*
/// @param typeName const char*
///
void q_quickview_load_from_module(void* self, const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setInitialProperties)
///
/// @param self QQuickView*
/// @param initialProperties libqt_map of const char* to QVariant*
///
void q_quickview_set_initial_properties(void* self, libqt_map initialProperties);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setContent)
///
/// @param self QQuickView*
/// @param url QUrl*
/// @param component QQmlComponent*
/// @param item QObject*
///
void q_quickview_set_content(void* self, void* url, void* component, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#statusChanged)
///
/// @param self QQuickView*
/// @param param1 enum QQuickView__Status
///
void q_quickview_status_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#statusChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum QQuickView__Status param1)
///
void q_quickview_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
///
/// @param self QQuickView*
/// @param param1 QResizeEvent*
///
void q_quickview_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QResizeEvent* param1)
///
void q_quickview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QResizeEvent*
///
void q_quickview_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
///
/// @param self QQuickView*
/// @param param1 QTimerEvent*
///
void q_quickview_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QTimerEvent* param1)
///
void q_quickview_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QTimerEvent*
///
void q_quickview_super_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
///
/// @param self QQuickView*
/// @param param1 QKeyEvent*
///
void q_quickview_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QKeyEvent* param1)
///
void q_quickview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QKeyEvent*
///
void q_quickview_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
///
/// @param self QQuickView*
/// @param param1 QKeyEvent*
///
void q_quickview_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QKeyEvent* param1)
///
void q_quickview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QKeyEvent*
///
void q_quickview_super_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMouseEvent* param1)
///
void q_quickview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMouseEvent* param1)
///
void q_quickview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMouseEvent* param1)
///
void q_quickview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickview_tr3(const char* s, const char* c, int n);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#contentItem)
///
/// @param self QQuickView*
///
QQuickItem* q_quickview_content_item(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItem)
///
/// @param self QQuickView*
///
QQuickItem* q_quickview_active_focus_item(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseGrabberItem)
///
/// @param self QQuickView*
///
QQuickItem* q_quickview_mouse_grabber_item(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#grabWindow)
///
/// @param self QQuickView*
///
QImage* q_quickview_grab_window(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setRenderTarget)
///
/// @param self QQuickView*
/// @param target QQuickRenderTarget*
///
void q_quickview_set_render_target(void* self, void* target);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#renderTarget)
///
/// @param self QQuickView*
///
QQuickRenderTarget* q_quickview_render_target(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsStateInfo)
///
/// @param self QQuickView*
///
const QQuickWindow__GraphicsStateInfo* q_quickview_graphics_state_info(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beginExternalCommands)
///
/// @param self QQuickView*
///
void q_quickview_begin_external_commands(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#endExternalCommands)
///
/// @param self QQuickView*
///
void q_quickview_end_external_commands(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#incubationController)
///
/// @param self QQuickView*
///
QQmlIncubationController* q_quickview_incubation_controller(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
///
/// @param self QQuickView*
/// @param image QImage*
///
QSGTexture* q_quickview_create_texture_from_image(void* self, void* image);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
///
/// @param self QQuickView*
/// @param image QImage*
/// @param options flag of enum QQuickWindow__CreateTextureOption
///
QSGTexture* q_quickview_create_texture_from_image2(void* self, void* image, int32_t options);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setColor)
///
/// @param self QQuickView*
/// @param color QColor*
///
void q_quickview_set_color(void* self, void* color);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#color)
///
/// @param self QQuickView*
///
QColor* q_quickview_color(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hasDefaultAlphaBuffer)
///
bool q_quickview_has_default_alpha_buffer();

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setDefaultAlphaBuffer)
///
/// @param useAlpha bool
///
void q_quickview_set_default_alpha_buffer(bool useAlpha);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentGraphics)
///
/// @param self QQuickView*
/// @param persistent bool
///
void q_quickview_set_persistent_graphics(void* self, bool persistent);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentGraphics)
///
/// @param self QQuickView*
///
bool q_quickview_is_persistent_graphics(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentSceneGraph)
///
/// @param self QQuickView*
/// @param persistent bool
///
void q_quickview_set_persistent_scene_graph(void* self, bool persistent);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentSceneGraph)
///
/// @param self QQuickView*
///
bool q_quickview_is_persistent_scene_graph(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isSceneGraphInitialized)
///
/// @param self QQuickView*
///
bool q_quickview_is_scene_graph_initialized(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#scheduleRenderJob)
///
/// @param self QQuickView*
/// @param job QRunnable*
/// @param schedule enum QQuickWindow__RenderStage
///
void q_quickview_schedule_render_job(void* self, void* job, int32_t schedule);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#effectiveDevicePixelRatio)
///
/// @param self QQuickView*
///
double q_quickview_effective_device_pixel_ratio(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#rendererInterface)
///
/// @param self QQuickView*
///
QSGRendererInterface* q_quickview_renderer_interface(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsApi)
///
/// @param api enum QSGRendererInterface__GraphicsApi
///
void q_quickview_set_graphics_api(int32_t api);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsApi)
///
/// @return enum QSGRendererInterface__GraphicsApi
///
int32_t q_quickview_graphics_api();

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setSceneGraphBackend)
///
/// @param backend const char*
///
void q_quickview_set_scene_graph_backend(const char* backend);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphBackend)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_quickview_scene_graph_backend();

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsDevice)
///
/// @param self QQuickView*
/// @param device QQuickGraphicsDevice*
///
void q_quickview_set_graphics_device(void* self, void* device);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsDevice)
///
/// @param self QQuickView*
///
QQuickGraphicsDevice* q_quickview_graphics_device(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsConfiguration)
///
/// @param self QQuickView*
/// @param config QQuickGraphicsConfiguration*
///
void q_quickview_set_graphics_configuration(void* self, void* config);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsConfiguration)
///
/// @param self QQuickView*
///
QQuickGraphicsConfiguration* q_quickview_graphics_configuration(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createRectangleNode)
///
/// @param self QQuickView*
///
QSGRectangleNode* q_quickview_create_rectangle_node(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createImageNode)
///
/// @param self QQuickView*
///
QSGImageNode* q_quickview_create_image_node(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createNinePatchNode)
///
/// @param self QQuickView*
///
QSGNinePatchNode* q_quickview_create_nine_patch_node(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextNode)
///
/// @param self QQuickView*
///
QSGTextNode* q_quickview_create_text_node(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#textRenderType)
///
/// @return enum QQuickWindow__TextRenderType
///
int32_t q_quickview_text_render_type();

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setTextRenderType)
///
/// @param renderType enum QQuickWindow__TextRenderType
///
void q_quickview_set_text_render_type(int32_t renderType);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
///
/// @param self QQuickView*
///
void q_quickview_frame_swapped(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_frame_swapped(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
///
/// @param self QQuickView*
///
void q_quickview_scene_graph_initialized(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_scene_graph_initialized(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
///
/// @param self QQuickView*
///
void q_quickview_scene_graph_invalidated(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_scene_graph_invalidated(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
///
/// @param self QQuickView*
///
void q_quickview_before_synchronizing(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_before_synchronizing(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
///
/// @param self QQuickView*
///
void q_quickview_after_synchronizing(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_after_synchronizing(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
///
/// @param self QQuickView*
///
void q_quickview_before_rendering(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_before_rendering(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
///
/// @param self QQuickView*
///
void q_quickview_after_rendering(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_after_rendering(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
///
/// @param self QQuickView*
///
void q_quickview_after_animating(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_after_animating(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
///
/// @param self QQuickView*
///
void q_quickview_scene_graph_about_to_stop(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_scene_graph_about_to_stop(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
///
/// @param self QQuickView*
/// @param param1 QColor*
///
void q_quickview_color_changed(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QColor* param1)
///
void q_quickview_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
///
/// @param self QQuickView*
///
void q_quickview_active_focus_item_changed(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_active_focus_item_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
///
/// @param self QQuickView*
/// @param error enum QQuickWindow__SceneGraphError
/// @param message const char*
///
void q_quickview_scene_graph_error(void* self, int32_t error, const char* message);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum QQuickWindow__SceneGraphError error, const char* message)
///
void q_quickview_on_scene_graph_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
///
/// @param self QQuickView*
///
void q_quickview_before_render_pass_recording(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_before_render_pass_recording(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
///
/// @param self QQuickView*
///
void q_quickview_after_render_pass_recording(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_after_render_pass_recording(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
///
/// @param self QQuickView*
///
void q_quickview_palette_changed(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_palette_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
///
/// @param self QQuickView*
///
void q_quickview_palette_created(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_palette_created(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
///
/// @param self QQuickView*
///
void q_quickview_before_frame_begin(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_before_frame_begin(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
///
/// @param self QQuickView*
///
void q_quickview_after_frame_end(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_after_frame_end(void* self, void (*callback)(void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#update)
///
/// @param self QQuickView*
///
void q_quickview_update(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#releaseResources)
///
/// @param self QQuickView*
///
void q_quickview_release_resources(void* self);

/// Inherited from QWindow
///
/// Upcasts to a QSurface object
///
/// @param self QQuickView*
///
QSurface* q_quickview_as_q_surface(void* self);

/// Inherited from QWindow
///
/// Downcasts to a QQuickView object
///
/// @param _qsurface QSurface*
///
QQuickView* q_quickview_from_q_surface(void* _qsurface);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QQuickView*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_quickview_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self QQuickView*
///
bool q_quickview_is_visible(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self QQuickView*
///
/// @return enum QWindow__Visibility
///
int32_t q_quickview_visibility(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QQuickView*
/// @param v enum QWindow__Visibility
///
void q_quickview_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QQuickView*
///
void q_quickview_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self QQuickView*
///
uintptr_t q_quickview_win_id(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QQuickView*
///
QWindow* q_quickview_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QQuickView*
/// @param parent QWindow*
///
void q_quickview_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self QQuickView*
///
bool q_quickview_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self QQuickView*
///
bool q_quickview_is_modal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self QQuickView*
///
/// @return enum Qt__WindowModality
///
int32_t q_quickview_modality(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QQuickView*
/// @param modality enum Qt__WindowModality
///
void q_quickview_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QQuickView*
/// @param format QSurfaceFormat*
///
void q_quickview_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self QQuickView*
///
QSurfaceFormat* q_quickview_requested_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QQuickView*
/// @param flags flag of enum Qt__WindowType
///
void q_quickview_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self QQuickView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_quickview_flags(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QQuickView*
/// @param param1 enum Qt__WindowType
///
void q_quickview_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self QQuickView*
///
/// @return enum Qt__WindowType
///
int32_t q_quickview_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickView*
///
const char* q_quickview_title(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QQuickView*
/// @param level double
///
void q_quickview_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self QQuickView*
///
double q_quickview_opacity(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QQuickView*
/// @param region QRegion*
///
void q_quickview_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self QQuickView*
///
QRegion* q_quickview_mask(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self QQuickView*
///
bool q_quickview_is_active(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QQuickView*
/// @param orientation enum Qt__ScreenOrientation
///
void q_quickview_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self QQuickView*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_quickview_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self QQuickView*
///
double q_quickview_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self QQuickView*
///
/// @return enum Qt__WindowState
///
int32_t q_quickview_window_state(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self QQuickView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_quickview_window_states(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QQuickView*
/// @param state enum Qt__WindowState
///
void q_quickview_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QQuickView*
/// @param states flag of enum Qt__WindowState
///
void q_quickview_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QQuickView*
/// @param parent QWindow*
///
void q_quickview_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self QQuickView*
///
QWindow* q_quickview_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QQuickView*
/// @param child QWindow*
///
bool q_quickview_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self QQuickView*
///
bool q_quickview_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self QQuickView*
///
int32_t q_quickview_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self QQuickView*
///
int32_t q_quickview_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self QQuickView*
///
int32_t q_quickview_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self QQuickView*
///
int32_t q_quickview_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self QQuickView*
///
QSize* q_quickview_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self QQuickView*
///
QSize* q_quickview_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self QQuickView*
///
QSize* q_quickview_base_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self QQuickView*
///
QSize* q_quickview_size_increment(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QQuickView*
/// @param size QSize*
///
void q_quickview_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QQuickView*
/// @param size QSize*
///
void q_quickview_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QQuickView*
/// @param size QSize*
///
void q_quickview_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QQuickView*
/// @param size QSize*
///
void q_quickview_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self QQuickView*
///
QRect* q_quickview_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self QQuickView*
///
QMargins* q_quickview_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self QQuickView*
///
QRect* q_quickview_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self QQuickView*
///
QPoint* q_quickview_frame_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QQuickView*
/// @param point QPoint*
///
void q_quickview_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self QQuickView*
///
int32_t q_quickview_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self QQuickView*
///
int32_t q_quickview_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self QQuickView*
///
int32_t q_quickview_x(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self QQuickView*
///
int32_t q_quickview_y(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self QQuickView*
///
QPoint* q_quickview_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QQuickView*
/// @param pt QPoint*
///
void q_quickview_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QQuickView*
/// @param posx int
/// @param posy int
///
void q_quickview_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QQuickView*
/// @param newSize QSize*
///
void q_quickview_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QQuickView*
/// @param w int
/// @param h int
///
void q_quickview_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QQuickView*
/// @param filePath const char*
///
void q_quickview_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickView*
///
const char* q_quickview_file_path(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QQuickView*
/// @param icon QIcon*
///
void q_quickview_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self QQuickView*
///
QIcon* q_quickview_icon(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QQuickView*
///
void q_quickview_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QQuickView*
/// @param grab bool
///
bool q_quickview_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QQuickView*
/// @param grab bool
///
bool q_quickview_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self QQuickView*
///
QScreen* q_quickview_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QQuickView*
/// @param screen QScreen*
///
void q_quickview_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QQuickView*
/// @param pos QPointF*
///
QPointF* q_quickview_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QQuickView*
/// @param pos QPointF*
///
QPointF* q_quickview_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QQuickView*
/// @param pos QPoint*
///
QPoint* q_quickview_map_to_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QQuickView*
/// @param pos QPoint*
///
QPoint* q_quickview_map_from_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self QQuickView*
///
QCursor* q_quickview_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QQuickView*
/// @param cursor QCursor*
///
void q_quickview_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QQuickView*
///
void q_quickview_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_quickview_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QQuickView*
///
void q_quickview_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QQuickView*
/// @param visible bool
///
void q_quickview_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QQuickView*
///
void q_quickview_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QQuickView*
///
void q_quickview_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QQuickView*
///
void q_quickview_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QQuickView*
///
void q_quickview_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QQuickView*
///
void q_quickview_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QQuickView*
///
void q_quickview_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QQuickView*
///
bool q_quickview_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QQuickView*
///
void q_quickview_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QQuickView*
///
void q_quickview_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QQuickView*
/// @param edges flag of enum Qt__Edge
///
bool q_quickview_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QQuickView*
///
bool q_quickview_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QQuickView*
/// @param title const char*
///
void q_quickview_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QQuickView*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_quickview_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QQuickView*
/// @param rect QRect*
///
void q_quickview_set_geometry2(void* self, void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QQuickView*
/// @param w int
///
void q_quickview_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QQuickView*
/// @param h int
///
void q_quickview_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QQuickView*
/// @param w int
///
void q_quickview_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QQuickView*
/// @param h int
///
void q_quickview_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QQuickView*
/// @param msec int
///
void q_quickview_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QQuickView*
///
void q_quickview_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QQuickView*
/// @param screen QScreen*
///
void q_quickview_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QScreen* screen)
///
void q_quickview_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QQuickView*
/// @param modality enum Qt__WindowModality
///
void q_quickview_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum Qt__WindowModality modality)
///
void q_quickview_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QQuickView*
/// @param windowState enum Qt__WindowState
///
void q_quickview_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum Qt__WindowState windowState)
///
void q_quickview_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QQuickView*
/// @param title const char*
///
void q_quickview_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, const char* title)
///
void q_quickview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QQuickView*
/// @param arg int
///
void q_quickview_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, int arg)
///
void q_quickview_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QQuickView*
/// @param arg bool
///
void q_quickview_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, bool arg)
///
void q_quickview_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QQuickView*
/// @param visibility enum QWindow__Visibility
///
void q_quickview_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum QWindow__Visibility visibility)
///
void q_quickview_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QQuickView*
///
void q_quickview_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QQuickView*
/// @param orientation enum Qt__ScreenOrientation
///
void q_quickview_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, enum Qt__ScreenOrientation orientation)
///
void q_quickview_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QQuickView*
/// @param object QObject*
///
void q_quickview_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QObject* object)
///
void q_quickview_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QQuickView*
/// @param opacity double
///
void q_quickview_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, double opacity)
///
void q_quickview_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QQuickView*
/// @param transientParent QWindow*
///
void q_quickview_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QWindow* transientParent)
///
void q_quickview_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QQuickView*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_quickview_parent1(void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QQuickView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_quickview_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QQuickView*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_quickview_is_ancestor_of2(void* self, void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickView*
///
const char* q_quickview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickView*
/// @param name const char*
///
void q_quickview_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickView*
///
bool q_quickview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickView*
///
bool q_quickview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickView*
///
bool q_quickview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickView*
///
bool q_quickview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickView*
/// @param b bool
///
bool q_quickview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickView*
///
QThread* q_quickview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickView*
/// @param thread QThread*
///
bool q_quickview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickView*
/// @param interval int
///
int32_t q_quickview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickView*
/// @param time int64_t of nanoseconds
///
int32_t q_quickview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickView*
/// @param id int
///
void q_quickview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickView*
/// @param id enum Qt__TimerId
///
void q_quickview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickView*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickView*
/// @param filterObj QObject*
///
void q_quickview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickView*
/// @param obj QObject*
///
void q_quickview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickview_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickview_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickview_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickview_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickview_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
///
bool q_quickview_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
/// @param receiver QObject*
///
bool q_quickview_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickview_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickView*
///
void q_quickview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickView*
///
void q_quickview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickView*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickView*
/// @param name const char*
///
QVariant* q_quickview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickView*
///
const char** q_quickview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickView*
///
QBindingStorage* q_quickview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickView*
///
const QBindingStorage* q_quickview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickView*
///
void q_quickview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self)
///
void q_quickview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickView*
/// @param classname const char*
///
bool q_quickview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickView*
///
void q_quickview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
/// @param signal const char*
///
bool q_quickview_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickview_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickview_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickView*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickview_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickView*
/// @param param1 QObject*
///
void q_quickview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QObject* param1)
///
void q_quickview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QQuickView*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_quickview_surface_class(void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QQuickView*
///
bool q_quickview_supports_open_g_l(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
QObject* q_quickview_focus_object(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
QObject* q_quickview_super_focus_object(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback QObject* func()
///
void q_quickview_on_focus_object(void* self, QObject* (*callback)());

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
QAccessibleInterface* q_quickview_accessible_root(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
QAccessibleInterface* q_quickview_super_accessible_root(void* self);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback QAccessibleInterface* func()
///
void q_quickview_on_accessible_root(void* self, QAccessibleInterface* (*callback)());

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QExposeEvent*
///
void q_quickview_expose_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QExposeEvent*
///
void q_quickview_super_expose_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QExposeEvent* param1)
///
void q_quickview_on_expose_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QShowEvent*
///
void q_quickview_show_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QShowEvent*
///
void q_quickview_super_show_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QShowEvent* param1)
///
void q_quickview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QHideEvent*
///
void q_quickview_hide_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QHideEvent*
///
void q_quickview_super_hide_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QHideEvent* param1)
///
void q_quickview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QCloseEvent*
///
void q_quickview_close_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QCloseEvent*
///
void q_quickview_super_close_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QCloseEvent* param1)
///
void q_quickview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QFocusEvent*
///
void q_quickview_focus_in_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QFocusEvent*
///
void q_quickview_super_focus_in_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QFocusEvent* param1)
///
void q_quickview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QFocusEvent*
///
void q_quickview_focus_out_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QFocusEvent*
///
void q_quickview_super_focus_out_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QFocusEvent* param1)
///
void q_quickview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QEvent*
///
bool q_quickview_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QEvent*
///
bool q_quickview_super_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback bool func(QQuickView* self, QEvent* param1)
///
void q_quickview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_mouse_double_click_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QMouseEvent*
///
void q_quickview_super_mouse_double_click_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMouseEvent* param1)
///
void q_quickview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QWheelEvent*
///
void q_quickview_wheel_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QWheelEvent*
///
void q_quickview_super_wheel_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QWheelEvent* param1)
///
void q_quickview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QTabletEvent*
///
void q_quickview_tablet_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QTabletEvent*
///
void q_quickview_super_tablet_event(void* self, void* param1);

/// Inherited from QQuickWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QTabletEvent* param1)
///
void q_quickview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_quickview_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_quickview_super_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback int32_t func()
///
void q_quickview_on_surface_type(void* self, int32_t (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
QSurfaceFormat* q_quickview_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
QSurfaceFormat* q_quickview_super_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback QSurfaceFormat* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickview_on_format(void* self, QSurfaceFormat* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
QSize* q_quickview_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
QSize* q_quickview_super_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback QSize* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickview_on_size(void* self, QSize* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QPaintEvent*
///
void q_quickview_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QPaintEvent*
///
void q_quickview_super_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QPaintEvent* param1)
///
void q_quickview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QMoveEvent*
///
void q_quickview_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QMoveEvent*
///
void q_quickview_super_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMoveEvent* param1)
///
void q_quickview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QTouchEvent*
///
void q_quickview_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param param1 QTouchEvent*
///
void q_quickview_super_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QTouchEvent* param1)
///
void q_quickview_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickview_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickview_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback bool func(QQuickView* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_quickview_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickview_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickview_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback bool func(QQuickView* self, QObject* watched, QEvent* event)
///
void q_quickview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param event QChildEvent*
///
void q_quickview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param event QChildEvent*
///
void q_quickview_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QChildEvent* event)
///
void q_quickview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param event QEvent*
///
void q_quickview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param event QEvent*
///
void q_quickview_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QEvent* event)
///
void q_quickview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
void q_quickview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
void q_quickview_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMetaMethod* signal)
///
void q_quickview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
void q_quickview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
void q_quickview_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, QMetaMethod* signal)
///
void q_quickview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param name const char*
/// @param revision int
///
void* q_quickview_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param name const char*
/// @param revision int
///
void* q_quickview_super_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback void* func(QQuickView* self, const char* name, int revision)
///
void q_quickview_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
QObject* q_quickview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
QObject* q_quickview_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback QObject* func()
///
void q_quickview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
///
int32_t q_quickview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
///
int32_t q_quickview_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback int32_t func()
///
void q_quickview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param signal const char*
///
int32_t q_quickview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param signal const char*
///
int32_t q_quickview_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback int32_t func(QQuickView* self, const char* signal)
///
void q_quickview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
bool q_quickview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickView*
/// @param signal QMetaMethod*
///
bool q_quickview_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickView*
/// @param callback bool func(QQuickView* self, QMetaMethod* signal)
///
void q_quickview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickView*
/// @param callback void func(QQuickView* self, const char* objectName)
///
void q_quickview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#dtor.QQuickView)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickView*
///
void q_quickview_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#public-types)

typedef enum {
    QQUICKVIEW_RESIZEMODE_SIZEVIEWTOROOTOBJECT = 0,
    QQUICKVIEW_RESIZEMODE_SIZEROOTOBJECTTOVIEW = 1
} QQuickView__ResizeMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#public-types)

typedef enum {
    QQUICKVIEW_STATUS_NULL = 0,
    QQUICKVIEW_STATUS_READY = 1,
    QQUICKVIEW_STATUS_LOADING = 2,
    QQUICKVIEW_STATUS_ERROR = 3
} QQuickView__Status;

#endif
