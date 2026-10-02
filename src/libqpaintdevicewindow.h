#pragma once
#ifndef LIBQPAINTDEVICEWINDOW_H
#define LIBQPAINTDEVICEWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html)

/// Upcasts to a QPaintDevice object
///
/// @param self const QPaintDeviceWindow*
///
QPaintDevice* q_paintdevicewindow_as_q_paint_device(const void* self);

/// Downcasts to a QPaintDeviceWindow object
///
/// @param _qpaintdevice QPaintDevice*
///
QPaintDeviceWindow* q_paintdevicewindow_from_q_paint_device(const void* _qpaintdevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPaintDeviceWindow*
///
const QMetaObject* q_paintdevicewindow_meta_object(const void* self);

/// @param self QPaintDeviceWindow*
/// @param param1 const char*
///
void* q_paintdevicewindow_metacast(void* self, const char* param1);

/// @param self QPaintDeviceWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_paintdevicewindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_paintdevicewindow_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QPaintDeviceWindow*
/// @param rect QRect*
///
void q_paintdevicewindow_update(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QPaintDeviceWindow*
/// @param region QRegion*
///
void q_paintdevicewindow_update2(void* self, const void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_update3(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_paintdevicewindow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_paintdevicewindow_tr3(const char* s, const char* c, int n);

/// Inherited from QWindow
///
/// Upcasts to a QSurface object
///
/// @param self const QPaintDeviceWindow*
///
QSurface* q_paintdevicewindow_as_q_surface(const void* self);

/// Inherited from QWindow
///
/// Downcasts to a QPaintDeviceWindow object
///
/// @param _qsurface QSurface*
///
QPaintDeviceWindow* q_paintdevicewindow_from_q_surface(const void* _qsurface);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QPaintDeviceWindow*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_paintdevicewindow_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_paintdevicewindow_surface_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_visible(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum QWindow__Visibility
///
int32_t q_paintdevicewindow_visibility(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QPaintDeviceWindow*
/// @param v enum QWindow__Visibility
///
void q_paintdevicewindow_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self const QPaintDeviceWindow*
///
uintptr_t q_paintdevicewindow_win_id(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const QPaintDeviceWindow*
///
QWindow* q_paintdevicewindow_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QPaintDeviceWindow*
/// @param parent QWindow*
///
void q_paintdevicewindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_top_level(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_modal(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum Qt__WindowModality
///
int32_t q_paintdevicewindow_modality(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QPaintDeviceWindow*
/// @param modality enum Qt__WindowModality
///
void q_paintdevicewindow_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QPaintDeviceWindow*
/// @param format QSurfaceFormat*
///
void q_paintdevicewindow_set_format(void* self, const void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// @param self const QPaintDeviceWindow*
///
QSurfaceFormat* q_paintdevicewindow_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self const QPaintDeviceWindow*
///
QSurfaceFormat* q_paintdevicewindow_requested_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QPaintDeviceWindow*
/// @param flags flag of enum Qt__WindowType
///
void q_paintdevicewindow_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self const QPaintDeviceWindow*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_paintdevicewindow_flags(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QPaintDeviceWindow*
/// @param param1 enum Qt__WindowType
///
void q_paintdevicewindow_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum Qt__WindowType
///
int32_t q_paintdevicewindow_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPaintDeviceWindow*
///
const char* q_paintdevicewindow_title(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QPaintDeviceWindow*
/// @param level double
///
void q_paintdevicewindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self const QPaintDeviceWindow*
///
double q_paintdevicewindow_opacity(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QPaintDeviceWindow*
/// @param region QRegion*
///
void q_paintdevicewindow_set_mask(void* self, const void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self const QPaintDeviceWindow*
///
QRegion* q_paintdevicewindow_mask(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_active(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QPaintDeviceWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_paintdevicewindow_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_paintdevicewindow_content_orientation(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self const QPaintDeviceWindow*
///
double q_paintdevicewindow_device_pixel_ratio(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum Qt__WindowState
///
int32_t q_paintdevicewindow_window_state(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self const QPaintDeviceWindow*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_paintdevicewindow_window_states(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QPaintDeviceWindow*
/// @param state enum Qt__WindowState
///
void q_paintdevicewindow_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QPaintDeviceWindow*
/// @param states flag of enum Qt__WindowState
///
void q_paintdevicewindow_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QPaintDeviceWindow*
/// @param parent QWindow*
///
void q_paintdevicewindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self const QPaintDeviceWindow*
///
QWindow* q_paintdevicewindow_transient_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const QPaintDeviceWindow*
/// @param child QWindow*
///
bool q_paintdevicewindow_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_exposed(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_minimum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_minimum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_maximum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_maximum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self const QPaintDeviceWindow*
///
QSize* q_paintdevicewindow_minimum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self const QPaintDeviceWindow*
///
QSize* q_paintdevicewindow_maximum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self const QPaintDeviceWindow*
///
QSize* q_paintdevicewindow_base_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self const QPaintDeviceWindow*
///
QSize* q_paintdevicewindow_size_increment(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QPaintDeviceWindow*
/// @param size QSize*
///
void q_paintdevicewindow_set_minimum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QPaintDeviceWindow*
/// @param size QSize*
///
void q_paintdevicewindow_set_maximum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QPaintDeviceWindow*
/// @param size QSize*
///
void q_paintdevicewindow_set_base_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QPaintDeviceWindow*
/// @param size QSize*
///
void q_paintdevicewindow_set_size_increment(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self const QPaintDeviceWindow*
///
QRect* q_paintdevicewindow_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self const QPaintDeviceWindow*
///
QMargins* q_paintdevicewindow_frame_margins(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self const QPaintDeviceWindow*
///
QRect* q_paintdevicewindow_frame_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self const QPaintDeviceWindow*
///
QPoint* q_paintdevicewindow_frame_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QPaintDeviceWindow*
/// @param point QPoint*
///
void q_paintdevicewindow_set_frame_position(void* self, const void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_x(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_y(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// @param self const QPaintDeviceWindow*
///
QSize* q_paintdevicewindow_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self const QPaintDeviceWindow*
///
QPoint* q_paintdevicewindow_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QPaintDeviceWindow*
/// @param pt QPoint*
///
void q_paintdevicewindow_set_position(void* self, const void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QPaintDeviceWindow*
/// @param posx int
/// @param posy int
///
void q_paintdevicewindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QPaintDeviceWindow*
/// @param newSize QSize*
///
void q_paintdevicewindow_resize(void* self, const void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QPaintDeviceWindow*
/// @param w int
/// @param h int
///
void q_paintdevicewindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QPaintDeviceWindow*
/// @param filePath const char*
///
void q_paintdevicewindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPaintDeviceWindow*
///
const char* q_paintdevicewindow_file_path(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QPaintDeviceWindow*
/// @param icon QIcon*
///
void q_paintdevicewindow_set_icon(void* self, const void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self const QPaintDeviceWindow*
///
QIcon* q_paintdevicewindow_icon(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QPaintDeviceWindow*
/// @param grab bool
///
bool q_paintdevicewindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QPaintDeviceWindow*
/// @param grab bool
///
bool q_paintdevicewindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self const QPaintDeviceWindow*
///
QScreen* q_paintdevicewindow_screen(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QPaintDeviceWindow*
/// @param screen QScreen*
///
void q_paintdevicewindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// @param self const QPaintDeviceWindow*
///
QAccessibleInterface* q_paintdevicewindow_accessible_root(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// @param self const QPaintDeviceWindow*
///
QObject* q_paintdevicewindow_focus_object(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const QPaintDeviceWindow*
/// @param pos QPointF*
///
QPointF* q_paintdevicewindow_map_to_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const QPaintDeviceWindow*
/// @param pos QPointF*
///
QPointF* q_paintdevicewindow_map_from_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const QPaintDeviceWindow*
/// @param pos QPoint*
///
QPoint* q_paintdevicewindow_map_to_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const QPaintDeviceWindow*
/// @param pos QPoint*
///
QPoint* q_paintdevicewindow_map_from_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self const QPaintDeviceWindow*
///
QCursor* q_paintdevicewindow_cursor(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QPaintDeviceWindow*
/// @param cursor QCursor*
///
void q_paintdevicewindow_set_cursor(void* self, const void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_paintdevicewindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QPaintDeviceWindow*
/// @param visible bool
///
void q_paintdevicewindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QPaintDeviceWindow*
///
bool q_paintdevicewindow_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QPaintDeviceWindow*
/// @param edges flag of enum Qt__Edge
///
bool q_paintdevicewindow_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QPaintDeviceWindow*
///
bool q_paintdevicewindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QPaintDeviceWindow*
/// @param title const char*
///
void q_paintdevicewindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QPaintDeviceWindow*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_paintdevicewindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QPaintDeviceWindow*
/// @param rect QRect*
///
void q_paintdevicewindow_set_geometry2(void* self, const void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QPaintDeviceWindow*
/// @param w int
///
void q_paintdevicewindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QPaintDeviceWindow*
/// @param h int
///
void q_paintdevicewindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QPaintDeviceWindow*
/// @param w int
///
void q_paintdevicewindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QPaintDeviceWindow*
/// @param h int
///
void q_paintdevicewindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QPaintDeviceWindow*
/// @param msec int
///
void q_paintdevicewindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QPaintDeviceWindow*
/// @param screen QScreen*
///
void q_paintdevicewindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, QScreen* screen)
///
void q_paintdevicewindow_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param modality enum Qt__WindowModality
///
void q_paintdevicewindow_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, enum Qt__WindowModality modality)
///
void q_paintdevicewindow_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QPaintDeviceWindow*
/// @param windowState enum Qt__WindowState
///
void q_paintdevicewindow_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, enum Qt__WindowState windowState)
///
void q_paintdevicewindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QPaintDeviceWindow*
/// @param title const char*
///
void q_paintdevicewindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, const char* title)
///
void q_paintdevicewindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg int
///
void q_paintdevicewindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, int arg)
///
void q_paintdevicewindow_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QPaintDeviceWindow*
/// @param arg bool
///
void q_paintdevicewindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, bool arg)
///
void q_paintdevicewindow_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param visibility enum QWindow__Visibility
///
void q_paintdevicewindow_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, enum QWindow__Visibility visibility)
///
void q_paintdevicewindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self)
///
void q_paintdevicewindow_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QPaintDeviceWindow*
/// @param orientation enum Qt__ScreenOrientation
///
void q_paintdevicewindow_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, enum Qt__ScreenOrientation orientation)
///
void q_paintdevicewindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QPaintDeviceWindow*
/// @param object QObject*
///
void q_paintdevicewindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, QObject* object)
///
void q_paintdevicewindow_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param opacity double
///
void q_paintdevicewindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, double opacity)
///
void q_paintdevicewindow_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QPaintDeviceWindow*
/// @param transientParent QWindow*
///
void q_paintdevicewindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, QWindow* transientParent)
///
void q_paintdevicewindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const QPaintDeviceWindow*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_paintdevicewindow_parent1(const void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QPaintDeviceWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_paintdevicewindow_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const QPaintDeviceWindow*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_paintdevicewindow_is_ancestor_of2(const void* self, const void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QPaintDeviceWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_paintdevicewindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPaintDeviceWindow*
///
const char* q_paintdevicewindow_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPaintDeviceWindow*
/// @param name const char*
///
void q_paintdevicewindow_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPaintDeviceWindow*
/// @param b bool
///
bool q_paintdevicewindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPaintDeviceWindow*
///
QThread* q_paintdevicewindow_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPaintDeviceWindow*
/// @param thread QThread*
///
bool q_paintdevicewindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPaintDeviceWindow*
/// @param interval int
///
int32_t q_paintdevicewindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPaintDeviceWindow*
/// @param time int64_t of nanoseconds
///
int32_t q_paintdevicewindow_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPaintDeviceWindow*
/// @param id int
///
void q_paintdevicewindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPaintDeviceWindow*
/// @param id enum Qt__TimerId
///
void q_paintdevicewindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPaintDeviceWindow*
///
/// @return libqt_list of QObject*
///
libqt_list q_paintdevicewindow_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPaintDeviceWindow*
/// @param filterObj QObject*
///
void q_paintdevicewindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPaintDeviceWindow*
/// @param obj QObject*
///
void q_paintdevicewindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_paintdevicewindow_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_paintdevicewindow_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPaintDeviceWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_paintdevicewindow_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_paintdevicewindow_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_paintdevicewindow_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
/// @param receiver QObject*
///
bool q_paintdevicewindow_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_paintdevicewindow_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPaintDeviceWindow*
///
void q_paintdevicewindow_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPaintDeviceWindow*
///
void q_paintdevicewindow_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPaintDeviceWindow*
/// @param name const char*
/// @param value QVariant*
///
bool q_paintdevicewindow_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPaintDeviceWindow*
/// @param name const char*
///
QVariant* q_paintdevicewindow_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPaintDeviceWindow*
///
const char** q_paintdevicewindow_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPaintDeviceWindow*
///
QBindingStorage* q_paintdevicewindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPaintDeviceWindow*
///
const QBindingStorage* q_paintdevicewindow_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self)
///
void q_paintdevicewindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPaintDeviceWindow*
/// @param classname const char*
///
bool q_paintdevicewindow_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPaintDeviceWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_paintdevicewindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPaintDeviceWindow*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_paintdevicewindow_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_paintdevicewindow_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_paintdevicewindow_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPaintDeviceWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_paintdevicewindow_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
/// @param signal const char*
///
bool q_paintdevicewindow_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_paintdevicewindow_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_paintdevicewindow_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPaintDeviceWindow*
/// @param receiver QObject*
/// @param member const char*
///
bool q_paintdevicewindow_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPaintDeviceWindow*
/// @param param1 QObject*
///
void q_paintdevicewindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, QObject* param1)
///
void q_paintdevicewindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self const QPaintDeviceWindow*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_paintdevicewindow_surface_class(const void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_supports_open_g_l(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_dev_type(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPaintDeviceWindow*
///
bool q_paintdevicewindow_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QPaintDeviceWindow*
///
QPaintEngine* q_paintdevicewindow_paint_engine(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPaintDeviceWindow*
///
double q_paintdevicewindow_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPaintDeviceWindow*
///
int32_t q_paintdevicewindow_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_paintdevicewindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_paintdevicewindow_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPaintDeviceWindow*
/// @param callback void func(QPaintDeviceWindow* self, const char* objectName)
///
void q_paintdevicewindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevicewindow.html#dtor.QPaintDeviceWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintDeviceWindow*
///
void q_paintdevicewindow_delete(void* self);

#endif
