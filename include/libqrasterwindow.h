#pragma once
#ifndef SRC_QT6C_LIBQRASTERWINDOW_H
#define SRC_QT6C_LIBQRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html)

/// q_rasterwindow_new constructs a new QRasterWindow object.
///
QRasterWindow* q_rasterwindow_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html)

/// q_rasterwindow_new2 constructs a new QRasterWindow object.
///
/// @param parent QWindow*
///
QRasterWindow* q_rasterwindow_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QRasterWindow*
///
const QMetaObject* q_rasterwindow_meta_object(void* self);

/// @param self QRasterWindow*
/// @param param1 const char*
///
void* q_rasterwindow_metacast(void* self, const char* param1);

/// @param self QRasterWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_rasterwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QRasterWindow*
/// @param callback int32_t func(QRasterWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_rasterwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QRasterWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_rasterwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_rasterwindow_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// @param self QRasterWindow*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_rasterwindow_metric(void* self, int32_t metric);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QRasterWindow*
/// @param callback int32_t func(QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metric)
///
void q_rasterwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// Base class method implementation
///
/// @param self QRasterWindow*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_rasterwindow_qbase_metric(void* self, int32_t metric);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// @param self QRasterWindow*
/// @param param1 QPoint*
///
QPaintDevice* q_rasterwindow_redirected(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// Allows for overriding the related default method
///
/// @param self QRasterWindow*
/// @param callback QPaintDevice* func(QRasterWindow* self, QPoint* param1)
///
void q_rasterwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// Base class method implementation
///
/// @param self QRasterWindow*
/// @param param1 QPoint*
///
QPaintDevice* q_rasterwindow_qbase_redirected(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// @param self QRasterWindow*
/// @param event QResizeEvent*
///
void q_rasterwindow_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QResizeEvent* event)
///
void q_rasterwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QRasterWindow*
/// @param event QResizeEvent*
///
void q_rasterwindow_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_rasterwindow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_rasterwindow_tr3(const char* s, const char* c, int n);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QRasterWindow*
/// @param rect QRect*
///
void q_rasterwindow_update(void* self, void* rect);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QRasterWindow*
/// @param region QRegion*
///
void q_rasterwindow_update2(void* self, void* region);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_update3(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QRasterWindow*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_rasterwindow_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_visible(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self QRasterWindow*
///
/// @return enum QWindow__Visibility
///
int32_t q_rasterwindow_visibility(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QRasterWindow*
/// @param v enum QWindow__Visibility
///
void q_rasterwindow_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self QRasterWindow*
///
uintptr_t q_rasterwindow_win_id(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QRasterWindow*
///
QWindow* q_rasterwindow_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QRasterWindow*
/// @param parent QWindow*
///
void q_rasterwindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_modal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self QRasterWindow*
///
/// @return enum Qt__WindowModality
///
int32_t q_rasterwindow_modality(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QRasterWindow*
/// @param modality enum Qt__WindowModality
///
void q_rasterwindow_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QRasterWindow*
/// @param format QSurfaceFormat*
///
void q_rasterwindow_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self QRasterWindow*
///
QSurfaceFormat* q_rasterwindow_requested_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QRasterWindow*
/// @param flags flag of enum Qt__WindowType
///
void q_rasterwindow_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self QRasterWindow*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_rasterwindow_flags(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QRasterWindow*
/// @param param1 enum Qt__WindowType
///
void q_rasterwindow_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self QRasterWindow*
///
/// @return enum Qt__WindowType
///
int32_t q_rasterwindow_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QRasterWindow*
///
const char* q_rasterwindow_title(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QRasterWindow*
/// @param level double
///
void q_rasterwindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self QRasterWindow*
///
double q_rasterwindow_opacity(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QRasterWindow*
/// @param region QRegion*
///
void q_rasterwindow_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self QRasterWindow*
///
QRegion* q_rasterwindow_mask(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_active(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QRasterWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_rasterwindow_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self QRasterWindow*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_rasterwindow_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self QRasterWindow*
///
double q_rasterwindow_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self QRasterWindow*
///
/// @return enum Qt__WindowState
///
int32_t q_rasterwindow_window_state(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self QRasterWindow*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_rasterwindow_window_states(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QRasterWindow*
/// @param state enum Qt__WindowState
///
void q_rasterwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QRasterWindow*
/// @param states flag of enum Qt__WindowState
///
void q_rasterwindow_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QRasterWindow*
/// @param parent QWindow*
///
void q_rasterwindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self QRasterWindow*
///
QWindow* q_rasterwindow_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QRasterWindow*
/// @param child QWindow*
///
bool q_rasterwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_base_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_size_increment(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QRasterWindow*
/// @param size QSize*
///
void q_rasterwindow_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QRasterWindow*
/// @param size QSize*
///
void q_rasterwindow_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QRasterWindow*
/// @param size QSize*
///
void q_rasterwindow_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QRasterWindow*
/// @param size QSize*
///
void q_rasterwindow_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self QRasterWindow*
///
QRect* q_rasterwindow_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self QRasterWindow*
///
QMargins* q_rasterwindow_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self QRasterWindow*
///
QRect* q_rasterwindow_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self QRasterWindow*
///
QPoint* q_rasterwindow_frame_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QRasterWindow*
/// @param point QPoint*
///
void q_rasterwindow_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_width(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_height(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_x(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_y(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self QRasterWindow*
///
QPoint* q_rasterwindow_position(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QRasterWindow*
/// @param pt QPoint*
///
void q_rasterwindow_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QRasterWindow*
/// @param posx int
/// @param posy int
///
void q_rasterwindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QRasterWindow*
/// @param newSize QSize*
///
void q_rasterwindow_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QRasterWindow*
/// @param w int
/// @param h int
///
void q_rasterwindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QRasterWindow*
/// @param filePath const char*
///
void q_rasterwindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QRasterWindow*
///
const char* q_rasterwindow_file_path(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QRasterWindow*
/// @param icon QIcon*
///
void q_rasterwindow_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self QRasterWindow*
///
QIcon* q_rasterwindow_icon(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QRasterWindow*
/// @param grab bool
///
bool q_rasterwindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QRasterWindow*
/// @param grab bool
///
bool q_rasterwindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self QRasterWindow*
///
QScreen* q_rasterwindow_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QRasterWindow*
/// @param screen QScreen*
///
void q_rasterwindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QRasterWindow*
/// @param pos QPointF*
///
QPointF* q_rasterwindow_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QRasterWindow*
/// @param pos QPointF*
///
QPointF* q_rasterwindow_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QRasterWindow*
/// @param pos QPoint*
///
QPoint* q_rasterwindow_map_to_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QRasterWindow*
/// @param pos QPoint*
///
QPoint* q_rasterwindow_map_from_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self QRasterWindow*
///
QCursor* q_rasterwindow_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QRasterWindow*
/// @param cursor QCursor*
///
void q_rasterwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_rasterwindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QRasterWindow*
/// @param visible bool
///
void q_rasterwindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QRasterWindow*
/// @param edges flag of enum Qt__Edge
///
bool q_rasterwindow_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QRasterWindow*
/// @param title const char*
///
void q_rasterwindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QRasterWindow*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_rasterwindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QRasterWindow*
/// @param rect QRect*
///
void q_rasterwindow_set_geometry2(void* self, void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QRasterWindow*
/// @param w int
///
void q_rasterwindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QRasterWindow*
/// @param h int
///
void q_rasterwindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QRasterWindow*
/// @param w int
///
void q_rasterwindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QRasterWindow*
/// @param h int
///
void q_rasterwindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QRasterWindow*
/// @param msec int
///
void q_rasterwindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QRasterWindow*
/// @param screen QScreen*
///
void q_rasterwindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QScreen* screen)
///
void q_rasterwindow_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QRasterWindow*
/// @param modality enum Qt__WindowModality
///
void q_rasterwindow_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, enum Qt__WindowModality modality)
///
void q_rasterwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QRasterWindow*
/// @param windowState enum Qt__WindowState
///
void q_rasterwindow_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, enum Qt__WindowState windowState)
///
void q_rasterwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QRasterWindow*
/// @param title const char*
///
void q_rasterwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, const char* title)
///
void q_rasterwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QRasterWindow*
/// @param arg int
///
void q_rasterwindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, int arg)
///
void q_rasterwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QRasterWindow*
/// @param arg bool
///
void q_rasterwindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, bool arg)
///
void q_rasterwindow_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QRasterWindow*
/// @param visibility enum QWindow__Visibility
///
void q_rasterwindow_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, enum QWindow__Visibility visibility)
///
void q_rasterwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self)
///
void q_rasterwindow_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QRasterWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_rasterwindow_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, enum Qt__ScreenOrientation orientation)
///
void q_rasterwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QRasterWindow*
/// @param object QObject*
///
void q_rasterwindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QObject* object)
///
void q_rasterwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QRasterWindow*
/// @param opacity double
///
void q_rasterwindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, double opacity)
///
void q_rasterwindow_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QRasterWindow*
/// @param transientParent QWindow*
///
void q_rasterwindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QWindow* transientParent)
///
void q_rasterwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QRasterWindow*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_rasterwindow_parent1(void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QRasterWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_rasterwindow_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QRasterWindow*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_rasterwindow_is_ancestor_of2(void* self, void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QRasterWindow*
///
const char* q_rasterwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QRasterWindow*
/// @param name char*
///
void q_rasterwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QRasterWindow*
/// @param b bool
///
bool q_rasterwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QRasterWindow*
///
QThread* q_rasterwindow_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRasterWindow*
/// @param thread QThread*
///
bool q_rasterwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRasterWindow*
/// @param interval int
///
int32_t q_rasterwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRasterWindow*
/// @param id int
///
void q_rasterwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRasterWindow*
/// @param id enum Qt__TimerId
///
void q_rasterwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QRasterWindow*
///
/// @return libqt_list of QObject*
///
libqt_list q_rasterwindow_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QRasterWindow*
/// @param filterObj QObject*
///
void q_rasterwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QRasterWindow*
/// @param obj QObject*
///
void q_rasterwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_rasterwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRasterWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_rasterwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_rasterwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_rasterwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QRasterWindow*
/// @param name const char*
/// @param value QVariant*
///
bool q_rasterwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QRasterWindow*
/// @param name const char*
///
QVariant* q_rasterwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QRasterWindow*
///
const char** q_rasterwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRasterWindow*
///
QBindingStorage* q_rasterwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRasterWindow*
///
const QBindingStorage* q_rasterwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self)
///
void q_rasterwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QRasterWindow*
/// @param classname const char*
///
bool q_rasterwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QRasterWindow*
///
void q_rasterwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRasterWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_rasterwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRasterWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_rasterwindow_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_rasterwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRasterWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_rasterwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRasterWindow*
/// @param param1 QObject*
///
void q_rasterwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QObject* param1)
///
void q_rasterwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QRasterWindow*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_rasterwindow_surface_class(void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_supports_open_g_l(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QRasterWindow*
///
bool q_rasterwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @param self QRasterWindow*
///
QPaintEngine* q_rasterwindow_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QRasterWindow*
///
double q_rasterwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_rasterwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_rasterwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QExposeEvent*
///
void q_rasterwindow_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QExposeEvent*
///
void q_rasterwindow_qbase_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QExposeEvent* param1)
///
void q_rasterwindow_on_expose_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QPaintEvent*
///
void q_rasterwindow_paint_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QPaintEvent*
///
void q_rasterwindow_qbase_paint_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QPaintEvent* event)
///
void q_rasterwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QEvent*
///
bool q_rasterwindow_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QEvent*
///
bool q_rasterwindow_qbase_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback bool func(QRasterWindow* self, QEvent* event)
///
void q_rasterwindow_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_rasterwindow_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_rasterwindow_qbase_surface_type(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback int32_t func()
///
void q_rasterwindow_on_surface_type(void* self, int32_t (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QSurfaceFormat* q_rasterwindow_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QSurfaceFormat* q_rasterwindow_qbase_format(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QSurfaceFormat* func()
///
void q_rasterwindow_on_format(void* self, QSurfaceFormat* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QSize* q_rasterwindow_qbase_size(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QSize* func()
///
void q_rasterwindow_on_size(void* self, QSize* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QAccessibleInterface* q_rasterwindow_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QAccessibleInterface* q_rasterwindow_qbase_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QAccessibleInterface* func()
///
void q_rasterwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QObject* q_rasterwindow_focus_object(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QObject* q_rasterwindow_qbase_focus_object(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QObject* func()
///
void q_rasterwindow_on_focus_object(void* self, QObject* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMoveEvent*
///
void q_rasterwindow_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMoveEvent*
///
void q_rasterwindow_qbase_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMoveEvent* param1)
///
void q_rasterwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QFocusEvent*
///
void q_rasterwindow_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QFocusEvent*
///
void q_rasterwindow_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QFocusEvent* param1)
///
void q_rasterwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QFocusEvent*
///
void q_rasterwindow_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QFocusEvent*
///
void q_rasterwindow_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QFocusEvent* param1)
///
void q_rasterwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QShowEvent*
///
void q_rasterwindow_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QShowEvent*
///
void q_rasterwindow_qbase_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QShowEvent* param1)
///
void q_rasterwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QHideEvent*
///
void q_rasterwindow_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QHideEvent*
///
void q_rasterwindow_qbase_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QHideEvent* param1)
///
void q_rasterwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QCloseEvent*
///
void q_rasterwindow_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QCloseEvent*
///
void q_rasterwindow_qbase_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QCloseEvent* param1)
///
void q_rasterwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QKeyEvent*
///
void q_rasterwindow_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QKeyEvent*
///
void q_rasterwindow_qbase_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QKeyEvent* param1)
///
void q_rasterwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QKeyEvent*
///
void q_rasterwindow_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QKeyEvent*
///
void q_rasterwindow_qbase_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QKeyEvent* param1)
///
void q_rasterwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMouseEvent* param1)
///
void q_rasterwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMouseEvent* param1)
///
void q_rasterwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMouseEvent* param1)
///
void q_rasterwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QMouseEvent*
///
void q_rasterwindow_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMouseEvent* param1)
///
void q_rasterwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QWheelEvent*
///
void q_rasterwindow_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QWheelEvent*
///
void q_rasterwindow_qbase_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QWheelEvent* param1)
///
void q_rasterwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QTouchEvent*
///
void q_rasterwindow_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QTouchEvent*
///
void q_rasterwindow_qbase_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QTouchEvent* param1)
///
void q_rasterwindow_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QTabletEvent*
///
void q_rasterwindow_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param param1 QTabletEvent*
///
void q_rasterwindow_qbase_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QTabletEvent* param1)
///
void q_rasterwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_rasterwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_rasterwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback bool func(QRasterWindow* self, const char* eventType, void* message, intptr_t* result)
///
void q_rasterwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_rasterwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_rasterwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback bool func(QRasterWindow* self, QObject* watched, QEvent* event)
///
void q_rasterwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QTimerEvent*
///
void q_rasterwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QTimerEvent*
///
void q_rasterwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QTimerEvent* event)
///
void q_rasterwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QChildEvent*
///
void q_rasterwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QChildEvent*
///
void q_rasterwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QChildEvent* event)
///
void q_rasterwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QEvent*
///
void q_rasterwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param event QEvent*
///
void q_rasterwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QEvent* event)
///
void q_rasterwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
void q_rasterwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
void q_rasterwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMetaMethod* signal)
///
void q_rasterwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
void q_rasterwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
void q_rasterwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QMetaMethod* signal)
///
void q_rasterwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback int32_t func()
///
void q_rasterwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param painter QPainter*
///
void q_rasterwindow_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param painter QPainter*
///
void q_rasterwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, QPainter* painter)
///
void q_rasterwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QPainter* q_rasterwindow_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QPainter* q_rasterwindow_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QPainter* func()
///
void q_rasterwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param name const char*
/// @param revision int
///
void* q_rasterwindow_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param name const char*
/// @param revision int
///
void* q_rasterwindow_qbase_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback void* func(QRasterWindow* self, const char* name, int revision)
///
void q_rasterwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
QObject* q_rasterwindow_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
QObject* q_rasterwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback QObject* func()
///
void q_rasterwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
///
int32_t q_rasterwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback int32_t func()
///
void q_rasterwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal const char*
///
int32_t q_rasterwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal const char*
///
int32_t q_rasterwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback int32_t func(QRasterWindow* self, const char* signal)
///
void q_rasterwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
bool q_rasterwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param signal QMetaMethod*
///
bool q_rasterwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback bool func(QRasterWindow* self, QMetaMethod* signal)
///
void q_rasterwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRasterWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_rasterwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_rasterwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRasterWindow*
/// @param callback double func(QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_rasterwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QRasterWindow*
/// @param callback void func(QRasterWindow* self, const char* objectName)
///
void q_rasterwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qrasterwindow.html#dtor.QRasterWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QRasterWindow*
///
void q_rasterwindow_delete(void* self);

#endif
