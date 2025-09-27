#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLWINDOW_H
#define SRC_OPENGLQT6C_LIBQOPENGLWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglwindow.html

/// q_openglwindow_new constructs a new QOpenGLWindow object.
///
QOpenGLWindow* q_openglwindow_new();

/// q_openglwindow_new2 constructs a new QOpenGLWindow object.
///
/// @param shareContext QOpenGLContext*
QOpenGLWindow* q_openglwindow_new2(void* shareContext);

/// q_openglwindow_new3 constructs a new QOpenGLWindow object.
///
/// @param updateBehavior enum QOpenGLWindow__UpdateBehavior
QOpenGLWindow* q_openglwindow_new3(int32_t updateBehavior);

/// q_openglwindow_new4 constructs a new QOpenGLWindow object.
///
/// @param updateBehavior enum QOpenGLWindow__UpdateBehavior
/// @param parent QWindow*
QOpenGLWindow* q_openglwindow_new4(int32_t updateBehavior, void* parent);

/// q_openglwindow_new5 constructs a new QOpenGLWindow object.
///
/// @param shareContext QOpenGLContext*
/// @param updateBehavior enum QOpenGLWindow__UpdateBehavior
QOpenGLWindow* q_openglwindow_new5(void* shareContext, int32_t updateBehavior);

/// q_openglwindow_new6 constructs a new QOpenGLWindow object.
///
/// @param shareContext QOpenGLContext*
/// @param updateBehavior enum QOpenGLWindow__UpdateBehavior
/// @param parent QWindow*
QOpenGLWindow* q_openglwindow_new6(void* shareContext, int32_t updateBehavior, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLWindow*
const QMetaObject* q_openglwindow_meta_object(void* self);

/// @param self QOpenGLWindow*
/// @param param1 const char*
void* q_openglwindow_metacast(void* self, const char* param1);

/// @param self QOpenGLWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_openglwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func(QOpenGLWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_openglwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_openglwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_openglwindow_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#updateBehavior)
///
/// @param self QOpenGLWindow*
///
/// @return enum QOpenGLWindow__UpdateBehavior
int32_t q_openglwindow_update_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#isValid)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#makeCurrent)
///
/// @param self QOpenGLWindow*
void q_openglwindow_make_current(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#doneCurrent)
///
/// @param self QOpenGLWindow*
void q_openglwindow_done_current(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#context)
///
/// @param self QOpenGLWindow*
QOpenGLContext* q_openglwindow_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#shareContext)
///
/// @param self QOpenGLWindow*
QOpenGLContext* q_openglwindow_share_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#defaultFramebufferObject)
///
/// @param self QOpenGLWindow*
uint32_t q_openglwindow_default_framebuffer_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#grabFramebuffer)
///
/// @param self QOpenGLWindow*
QImage* q_openglwindow_grab_framebuffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
///
/// @param self QOpenGLWindow*
void q_openglwindow_frame_swapped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#frameSwapped)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self)
void q_openglwindow_on_frame_swapped(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
///
/// @param self QOpenGLWindow*
void q_openglwindow_initialize_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func()
void q_openglwindow_on_initialize_g_l(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#initializeGL)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
void q_openglwindow_qbase_initialize_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
///
/// @param self QOpenGLWindow*
/// @param w int
/// @param h int
void q_openglwindow_resize_g_l(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int w, int h)
void q_openglwindow_on_resize_g_l(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeGL)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param w int
/// @param h int
void q_openglwindow_qbase_resize_g_l(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
///
/// @param self QOpenGLWindow*
void q_openglwindow_paint_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func()
void q_openglwindow_on_paint_g_l(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintGL)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
void q_openglwindow_qbase_paint_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
///
/// @param self QOpenGLWindow*
void q_openglwindow_paint_under_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func()
void q_openglwindow_on_paint_under_g_l(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintUnderGL)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
void q_openglwindow_qbase_paint_under_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
///
/// @param self QOpenGLWindow*
void q_openglwindow_paint_over_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func()
void q_openglwindow_on_paint_over_g_l(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintOverGL)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
void q_openglwindow_qbase_paint_over_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
///
/// @param self QOpenGLWindow*
/// @param event QPaintEvent*
void q_openglwindow_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QPaintEvent* event)
void q_openglwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param event QPaintEvent*
void q_openglwindow_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
///
/// @param self QOpenGLWindow*
/// @param event QResizeEvent*
void q_openglwindow_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QResizeEvent* event)
void q_openglwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param event QResizeEvent*
void q_openglwindow_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
///
/// @param self QOpenGLWindow*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_openglwindow_metric(void* self, int32_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func(QOpenGLWindow* self, enum QPaintDevice__PaintDeviceMetric metric)
void q_openglwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#metric)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_openglwindow_qbase_metric(void* self, int32_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
///
/// @param self QOpenGLWindow*
/// @param param1 QPoint*
QPaintDevice* q_openglwindow_redirected(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLWindow*
/// @param callback QPaintDevice* func(QOpenGLWindow* self, QPoint* param1)
void q_openglwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#redirected)
///
/// Base class method implementation
///
/// @param self QOpenGLWindow*
/// @param param1 QPoint*
QPaintDevice* q_openglwindow_qbase_redirected(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_openglwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_openglwindow_tr3(const char* s, const char* c, int n);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QOpenGLWindow*
/// @param rect QRect*
void q_openglwindow_update(void* self, void* rect);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QOpenGLWindow*
/// @param region QRegion*
void q_openglwindow_update2(void* self, void* region);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QOpenGLWindow*
void q_openglwindow_update3(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QOpenGLWindow*
/// @param surfaceType enum QSurface__SurfaceType
void q_openglwindow_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_visible(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self QOpenGLWindow*
///
/// @return enum QWindow__Visibility
int32_t q_openglwindow_visibility(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QOpenGLWindow*
/// @param v enum QWindow__Visibility
void q_openglwindow_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QOpenGLWindow*
void q_openglwindow_create(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self QOpenGLWindow*
uintptr_t q_openglwindow_win_id(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QOpenGLWindow*
QWindow* q_openglwindow_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QOpenGLWindow*
/// @param parent QWindow*
void q_openglwindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_modal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self QOpenGLWindow*
///
/// @return enum Qt__WindowModality
int32_t q_openglwindow_modality(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QOpenGLWindow*
/// @param modality enum Qt__WindowModality
void q_openglwindow_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QOpenGLWindow*
/// @param format QSurfaceFormat*
void q_openglwindow_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self QOpenGLWindow*
QSurfaceFormat* q_openglwindow_requested_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QOpenGLWindow*
/// @param flags flag of enum Qt__WindowType
void q_openglwindow_set_flags(void* self, int64_t flags);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self QOpenGLWindow*
///
/// @return flag of enum Qt__WindowType
int64_t q_openglwindow_flags(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QOpenGLWindow*
/// @param param1 enum Qt__WindowType
void q_openglwindow_set_flag(void* self, int64_t param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self QOpenGLWindow*
///
/// @return enum Qt__WindowType
int64_t q_openglwindow_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLWindow*
const char* q_openglwindow_title(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QOpenGLWindow*
/// @param level double
void q_openglwindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self QOpenGLWindow*
double q_openglwindow_opacity(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QOpenGLWindow*
/// @param region QRegion*
void q_openglwindow_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self QOpenGLWindow*
QRegion* q_openglwindow_mask(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_active(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QOpenGLWindow*
/// @param orientation enum Qt__ScreenOrientation
void q_openglwindow_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self QOpenGLWindow*
///
/// @return enum Qt__ScreenOrientation
int32_t q_openglwindow_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self QOpenGLWindow*
double q_openglwindow_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self QOpenGLWindow*
///
/// @return enum Qt__WindowState
int32_t q_openglwindow_window_state(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self QOpenGLWindow*
///
/// @return flag of enum Qt__WindowState
int32_t q_openglwindow_window_states(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QOpenGLWindow*
/// @param state enum Qt__WindowState
void q_openglwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QOpenGLWindow*
/// @param states flag of enum Qt__WindowState
void q_openglwindow_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QOpenGLWindow*
/// @param parent QWindow*
void q_openglwindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self QOpenGLWindow*
QWindow* q_openglwindow_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QOpenGLWindow*
/// @param child QWindow*
bool q_openglwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_base_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_size_increment(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QOpenGLWindow*
/// @param size QSize*
void q_openglwindow_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QOpenGLWindow*
/// @param size QSize*
void q_openglwindow_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QOpenGLWindow*
/// @param size QSize*
void q_openglwindow_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QOpenGLWindow*
/// @param size QSize*
void q_openglwindow_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self QOpenGLWindow*
QRect* q_openglwindow_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self QOpenGLWindow*
QMargins* q_openglwindow_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self QOpenGLWindow*
QRect* q_openglwindow_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self QOpenGLWindow*
QPoint* q_openglwindow_frame_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QOpenGLWindow*
/// @param point QPoint*
void q_openglwindow_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_x(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_y(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self QOpenGLWindow*
QPoint* q_openglwindow_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QOpenGLWindow*
/// @param pt QPoint*
void q_openglwindow_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QOpenGLWindow*
/// @param posx int
/// @param posy int
void q_openglwindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QOpenGLWindow*
/// @param newSize QSize*
void q_openglwindow_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QOpenGLWindow*
/// @param w int
/// @param h int
void q_openglwindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QOpenGLWindow*
/// @param filePath const char*
void q_openglwindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLWindow*
const char* q_openglwindow_file_path(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QOpenGLWindow*
/// @param icon QIcon*
void q_openglwindow_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self QOpenGLWindow*
QIcon* q_openglwindow_icon(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QOpenGLWindow*
void q_openglwindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QOpenGLWindow*
/// @param grab bool
bool q_openglwindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QOpenGLWindow*
/// @param grab bool
bool q_openglwindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self QOpenGLWindow*
QScreen* q_openglwindow_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QOpenGLWindow*
/// @param screen QScreen*
void q_openglwindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QOpenGLWindow*
/// @param pos QPointF*
QPointF* q_openglwindow_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QOpenGLWindow*
/// @param pos QPointF*
QPointF* q_openglwindow_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QOpenGLWindow*
/// @param pos QPoint*
QPoint* q_openglwindow_map_to_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QOpenGLWindow*
/// @param pos QPoint*
QPoint* q_openglwindow_map_from_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self QOpenGLWindow*
QCursor* q_openglwindow_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QOpenGLWindow*
/// @param cursor QCursor*
void q_openglwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QOpenGLWindow*
void q_openglwindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
QWindow* q_openglwindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QOpenGLWindow*
void q_openglwindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QOpenGLWindow*
/// @param visible bool
void q_openglwindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QOpenGLWindow*
void q_openglwindow_show(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QOpenGLWindow*
void q_openglwindow_hide(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QOpenGLWindow*
void q_openglwindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QOpenGLWindow*
void q_openglwindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QOpenGLWindow*
void q_openglwindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QOpenGLWindow*
void q_openglwindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_close(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QOpenGLWindow*
void q_openglwindow_raise(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QOpenGLWindow*
void q_openglwindow_lower(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QOpenGLWindow*
/// @param edges flag of enum Qt__Edge
bool q_openglwindow_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QOpenGLWindow*
/// @param title const char*
void q_openglwindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QOpenGLWindow*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
void q_openglwindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QOpenGLWindow*
/// @param rect QRect*
void q_openglwindow_set_geometry2(void* self, void* rect);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QOpenGLWindow*
/// @param w int
void q_openglwindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QOpenGLWindow*
/// @param h int
void q_openglwindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QOpenGLWindow*
/// @param w int
void q_openglwindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QOpenGLWindow*
/// @param h int
void q_openglwindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QOpenGLWindow*
/// @param msec int
void q_openglwindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QOpenGLWindow*
void q_openglwindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QOpenGLWindow*
/// @param screen QScreen*
void q_openglwindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QScreen* screen)
void q_openglwindow_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QOpenGLWindow*
/// @param modality enum Qt__WindowModality
void q_openglwindow_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, enum Qt__WindowModality modality)
void q_openglwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QOpenGLWindow*
/// @param windowState enum Qt__WindowState
void q_openglwindow_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, enum Qt__WindowState windowState)
void q_openglwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QOpenGLWindow*
/// @param title const char*
void q_openglwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, const char* title)
void q_openglwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QOpenGLWindow*
/// @param arg int
void q_openglwindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, int arg)
void q_openglwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QOpenGLWindow*
/// @param arg bool
void q_openglwindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, bool arg)
void q_openglwindow_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QOpenGLWindow*
/// @param visibility enum QWindow__Visibility
void q_openglwindow_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, enum QWindow__Visibility visibility)
void q_openglwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QOpenGLWindow*
void q_openglwindow_active_changed(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self)
void q_openglwindow_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QOpenGLWindow*
/// @param orientation enum Qt__ScreenOrientation
void q_openglwindow_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, enum Qt__ScreenOrientation orientation)
void q_openglwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QOpenGLWindow*
/// @param object QObject*
void q_openglwindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QObject* object)
void q_openglwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QOpenGLWindow*
/// @param opacity double
void q_openglwindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, double opacity)
void q_openglwindow_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QOpenGLWindow*
/// @param transientParent QWindow*
void q_openglwindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QWindow* transientParent)
void q_openglwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QOpenGLWindow*
/// @param mode enum QWindow__AncestorMode
QWindow* q_openglwindow_parent1(void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QOpenGLWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_openglwindow_set_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QOpenGLWindow*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
bool q_openglwindow_is_ancestor_of2(void* self, void* child, int32_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLWindow*
const char* q_openglwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLWindow*
/// @param name char*
void q_openglwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLWindow*
/// @param b bool
bool q_openglwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLWindow*
QThread* q_openglwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLWindow*
/// @param thread QThread*
bool q_openglwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLWindow*
/// @param interval int
int32_t q_openglwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLWindow*
/// @param id int
void q_openglwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLWindow*
/// @param id enum Qt__TimerId
void q_openglwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLWindow*
libqt_list /* of QObject* */ q_openglwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLWindow*
/// @param filterObj QObject*
void q_openglwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLWindow*
/// @param obj QObject*
void q_openglwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_openglwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_openglwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_openglwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_openglwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLWindow*
void q_openglwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLWindow*
void q_openglwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLWindow*
/// @param name const char*
/// @param value QVariant*
bool q_openglwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLWindow*
/// @param name const char*
QVariant* q_openglwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLWindow*
const char** q_openglwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLWindow*
QBindingStorage* q_openglwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLWindow*
const QBindingStorage* q_openglwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLWindow*
void q_openglwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self)
void q_openglwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLWindow*
/// @param classname const char*
bool q_openglwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLWindow*
void q_openglwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_openglwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_openglwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_openglwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_openglwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLWindow*
/// @param param1 QObject*
void q_openglwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QObject* param1)
void q_openglwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QOpenGLWindow*
///
/// @return enum QSurface__SurfaceClass
int32_t q_openglwindow_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_supports_open_g_l(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QOpenGLWindow*
bool q_openglwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @param self QOpenGLWindow*
QPaintEngine* q_openglwindow_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QOpenGLWindow*
double q_openglwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_openglwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_openglwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QExposeEvent*
void q_openglwindow_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QExposeEvent*
void q_openglwindow_qbase_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QExposeEvent* param1)
void q_openglwindow_on_expose_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QEvent*
bool q_openglwindow_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QEvent*
bool q_openglwindow_qbase_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback bool func(QOpenGLWindow* self, QEvent* event)
void q_openglwindow_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
///
/// @return enum QSurface__SurfaceType
int32_t q_openglwindow_surface_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
///
/// @return enum QSurface__SurfaceType
int32_t q_openglwindow_qbase_surface_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func()
void q_openglwindow_on_surface_type(void* self, int32_t (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QSurfaceFormat* q_openglwindow_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QSurfaceFormat* q_openglwindow_qbase_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QSurfaceFormat* func()
void q_openglwindow_on_format(void* self, QSurfaceFormat* (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QSize* q_openglwindow_qbase_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QSize* func()
void q_openglwindow_on_size(void* self, QSize* (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QAccessibleInterface* q_openglwindow_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QAccessibleInterface* q_openglwindow_qbase_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QAccessibleInterface* func()
void q_openglwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QObject* q_openglwindow_focus_object(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QObject* q_openglwindow_qbase_focus_object(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QObject* func()
void q_openglwindow_on_focus_object(void* self, QObject* (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMoveEvent*
void q_openglwindow_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMoveEvent*
void q_openglwindow_qbase_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMoveEvent* param1)
void q_openglwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QFocusEvent*
void q_openglwindow_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QFocusEvent*
void q_openglwindow_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QFocusEvent* param1)
void q_openglwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QFocusEvent*
void q_openglwindow_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QFocusEvent*
void q_openglwindow_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QFocusEvent* param1)
void q_openglwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QShowEvent*
void q_openglwindow_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QShowEvent*
void q_openglwindow_qbase_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QShowEvent* param1)
void q_openglwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QHideEvent*
void q_openglwindow_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QHideEvent*
void q_openglwindow_qbase_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QHideEvent* param1)
void q_openglwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QCloseEvent*
void q_openglwindow_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QCloseEvent*
void q_openglwindow_qbase_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QCloseEvent* param1)
void q_openglwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QKeyEvent*
void q_openglwindow_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QKeyEvent*
void q_openglwindow_qbase_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QKeyEvent* param1)
void q_openglwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QKeyEvent*
void q_openglwindow_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QKeyEvent*
void q_openglwindow_qbase_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QKeyEvent* param1)
void q_openglwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMouseEvent* param1)
void q_openglwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMouseEvent* param1)
void q_openglwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMouseEvent* param1)
void q_openglwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QMouseEvent*
void q_openglwindow_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMouseEvent* param1)
void q_openglwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QWheelEvent*
void q_openglwindow_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QWheelEvent*
void q_openglwindow_qbase_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QWheelEvent* param1)
void q_openglwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QTouchEvent*
void q_openglwindow_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QTouchEvent*
void q_openglwindow_qbase_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QTouchEvent* param1)
void q_openglwindow_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QTabletEvent*
void q_openglwindow_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param param1 QTabletEvent*
void q_openglwindow_qbase_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QTabletEvent* param1)
void q_openglwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_openglwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_openglwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback bool func(QOpenGLWindow* self, const char* eventType, void* message, intptr_t* result)
void q_openglwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param watched QObject*
/// @param event QEvent*
bool q_openglwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param watched QObject*
/// @param event QEvent*
bool q_openglwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback bool func(QOpenGLWindow* self, QObject* watched, QEvent* event)
void q_openglwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QTimerEvent*
void q_openglwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QTimerEvent*
void q_openglwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QTimerEvent* event)
void q_openglwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QChildEvent*
void q_openglwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QChildEvent*
void q_openglwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QChildEvent* event)
void q_openglwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QEvent*
void q_openglwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param event QEvent*
void q_openglwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QEvent* event)
void q_openglwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
void q_openglwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
void q_openglwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMetaMethod* signal)
void q_openglwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
void q_openglwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
void q_openglwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QMetaMethod* signal)
void q_openglwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func()
void q_openglwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param painter QPainter*
void q_openglwindow_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param painter QPainter*
void q_openglwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, QPainter* painter)
void q_openglwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QPainter* q_openglwindow_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QPainter* q_openglwindow_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QPainter* func()
void q_openglwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param name const char*
/// @param revision int
void* q_openglwindow_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param name const char*
/// @param revision int
void* q_openglwindow_qbase_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback void* func(QOpenGLWindow* self, const char* name, int revision)
void q_openglwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
QObject* q_openglwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
QObject* q_openglwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback QObject* func()
void q_openglwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
int32_t q_openglwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func()
void q_openglwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal const char*
int32_t q_openglwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal const char*
int32_t q_openglwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback int32_t func(QOpenGLWindow* self, const char* signal)
void q_openglwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
bool q_openglwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param signal QMetaMethod*
bool q_openglwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback bool func(QOpenGLWindow* self, QMetaMethod* signal)
void q_openglwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_openglwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_openglwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLWindow*
/// @param callback double func(QOpenGLWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_openglwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLWindow*
/// @param callback void func(QOpenGLWindow* self, const char* objectName)
void q_openglwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglwindow.html#dtor.QOpenGLWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLWindow*
void q_openglwindow_delete(void* self);

/// https://doc.qt.io/qt-6/qopenglwindow.html#types

typedef enum {
    QOPENGLWINDOW_UPDATEBEHAVIOR_NOPARTIALUPDATE = 0,
    QOPENGLWINDOW_UPDATEBEHAVIOR_PARTIALUPDATEBLIT = 1,
    QOPENGLWINDOW_UPDATEBEHAVIOR_PARTIALUPDATEBLEND = 2
} QOpenGLWindow__UpdateBehavior;

#endif
