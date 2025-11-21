#pragma once
#ifndef SRC_QT6C_LIBQWINDOW_H
#define SRC_QT6C_LIBQWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qwindow.html

/// q_window_new constructs a new QWindow object.
///
QWindow* q_window_new();

/// q_window_new2 constructs a new QWindow object.
///
/// @param parent QWindow*
QWindow* q_window_new2(void* parent);

/// q_window_new3 constructs a new QWindow object.
///
/// @param screen QScreen*
QWindow* q_window_new3(void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWindow*
const QMetaObject* q_window_meta_object(void* self);

/// @param self QWindow*
/// @param param1 const char*
void* q_window_metacast(void* self, const char* param1);

/// @param self QWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_window_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback int32_t func(QWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_window_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_window_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_window_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QWindow*
/// @param surfaceType enum QSurface__SurfaceType
void q_window_set_surface_type(void* self, int32_t surfaceType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// @param self QWindow*
///
/// @return enum QSurface__SurfaceType
int32_t q_window_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback int32_t func()
void q_window_on_surface_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Base class method implementation
///
/// @param self QWindow*
///
/// @return enum QSurface__SurfaceType
int32_t q_window_qbase_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self QWindow*
bool q_window_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self QWindow*
///
/// @return enum QWindow__Visibility
int32_t q_window_visibility(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QWindow*
/// @param v enum QWindow__Visibility
void q_window_set_visibility(void* self, int32_t v);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QWindow*
void q_window_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self QWindow*
uintptr_t q_window_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QWindow*
QWindow* q_window_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QWindow*
/// @param parent QWindow*
void q_window_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self QWindow*
bool q_window_is_top_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self QWindow*
bool q_window_is_modal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self QWindow*
///
/// @return enum Qt__WindowModality
int32_t q_window_modality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QWindow*
/// @param modality enum Qt__WindowModality
void q_window_set_modality(void* self, int32_t modality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QWindow*
/// @param format QSurfaceFormat*
void q_window_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// @param self QWindow*
QSurfaceFormat* q_window_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback QSurfaceFormat* func()
void q_window_on_format(void* self, QSurfaceFormat* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Base class method implementation
///
/// @param self QWindow*
QSurfaceFormat* q_window_qbase_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self QWindow*
QSurfaceFormat* q_window_requested_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QWindow*
/// @param flags flag of enum Qt__WindowType
void q_window_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self QWindow*
///
/// @return flag of enum Qt__WindowType
int64_t q_window_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QWindow*
/// @param param1 enum Qt__WindowType
void q_window_set_flag(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self QWindow*
///
/// @return enum Qt__WindowType
int64_t q_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWindow*
const char* q_window_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QWindow*
/// @param level double
void q_window_set_opacity(void* self, double level);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self QWindow*
double q_window_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QWindow*
/// @param region QRegion*
void q_window_set_mask(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self QWindow*
QRegion* q_window_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self QWindow*
bool q_window_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QWindow*
/// @param orientation enum Qt__ScreenOrientation
void q_window_report_content_orientation_change(void* self, int32_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self QWindow*
///
/// @return enum Qt__ScreenOrientation
int32_t q_window_content_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self QWindow*
double q_window_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self QWindow*
///
/// @return enum Qt__WindowState
int32_t q_window_window_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self QWindow*
///
/// @return flag of enum Qt__WindowState
int32_t q_window_window_states(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QWindow*
/// @param state enum Qt__WindowState
void q_window_set_window_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QWindow*
/// @param states flag of enum Qt__WindowState
void q_window_set_window_states(void* self, int32_t states);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QWindow*
/// @param parent QWindow*
void q_window_set_transient_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self QWindow*
QWindow* q_window_transient_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QWindow*
/// @param child QWindow*
bool q_window_is_ancestor_of(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self QWindow*
bool q_window_is_exposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self QWindow*
int32_t q_window_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self QWindow*
int32_t q_window_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self QWindow*
int32_t q_window_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self QWindow*
int32_t q_window_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self QWindow*
QSize* q_window_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self QWindow*
QSize* q_window_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self QWindow*
QSize* q_window_base_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self QWindow*
QSize* q_window_size_increment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QWindow*
/// @param size QSize*
void q_window_set_minimum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QWindow*
/// @param size QSize*
void q_window_set_maximum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QWindow*
/// @param size QSize*
void q_window_set_base_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QWindow*
/// @param size QSize*
void q_window_set_size_increment(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self QWindow*
QRect* q_window_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self QWindow*
QMargins* q_window_frame_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self QWindow*
QRect* q_window_frame_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self QWindow*
QPoint* q_window_frame_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QWindow*
/// @param point QPoint*
void q_window_set_frame_position(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self QWindow*
int32_t q_window_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self QWindow*
int32_t q_window_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self QWindow*
int32_t q_window_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self QWindow*
int32_t q_window_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// @param self QWindow*
QSize* q_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback QSize* func()
void q_window_on_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Base class method implementation
///
/// @param self QWindow*
QSize* q_window_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self QWindow*
QPoint* q_window_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QWindow*
/// @param pt QPoint*
void q_window_set_position(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QWindow*
/// @param posx int
/// @param posy int
void q_window_set_position2(void* self, int posx, int posy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QWindow*
/// @param newSize QSize*
void q_window_resize(void* self, void* newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QWindow*
/// @param w int
/// @param h int
void q_window_resize2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QWindow*
/// @param filePath const char*
void q_window_set_file_path(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWindow*
const char* q_window_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QWindow*
/// @param icon QIcon*
void q_window_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self QWindow*
QIcon* q_window_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QWindow*
void q_window_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QWindow*
/// @param grab bool
bool q_window_set_keyboard_grab_enabled(void* self, bool grab);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QWindow*
/// @param grab bool
bool q_window_set_mouse_grab_enabled(void* self, bool grab);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self QWindow*
QScreen* q_window_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QWindow*
/// @param screen QScreen*
void q_window_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// @param self QWindow*
QAccessibleInterface* q_window_accessible_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback QAccessibleInterface* func()
void q_window_on_accessible_root(void* self, QAccessibleInterface* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Base class method implementation
///
/// @param self QWindow*
QAccessibleInterface* q_window_qbase_accessible_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// @param self QWindow*
QObject* q_window_focus_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback QObject* func()
void q_window_on_focus_object(void* self, QObject* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Base class method implementation
///
/// @param self QWindow*
QObject* q_window_qbase_focus_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QWindow*
/// @param pos QPointF*
QPointF* q_window_map_to_global(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QWindow*
/// @param pos QPointF*
QPointF* q_window_map_from_global(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self QWindow*
/// @param pos QPoint*
QPoint* q_window_map_to_global2(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self QWindow*
/// @param pos QPoint*
QPoint* q_window_map_from_global2(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self QWindow*
QCursor* q_window_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QWindow*
/// @param cursor QCursor*
void q_window_set_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QWindow*
void q_window_unset_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
QWindow* q_window_from_win_id(uintptr_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// @param self QWindow*
/// @param name const char*
/// @param revision int
void* q_window_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void* func(QWindow* self, const char* name, int revision)
void q_window_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param name const char*
/// @param revision int
void* q_window_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QWindow*
void q_window_request_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QWindow*
/// @param visible bool
void q_window_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QWindow*
void q_window_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QWindow*
void q_window_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QWindow*
void q_window_show_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QWindow*
void q_window_show_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QWindow*
void q_window_show_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QWindow*
void q_window_show_normal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QWindow*
bool q_window_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QWindow*
void q_window_raise(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QWindow*
void q_window_lower(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QWindow*
/// @param edges flag of enum Qt__Edge
bool q_window_start_system_resize(void* self, int32_t edges);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QWindow*
bool q_window_start_system_move(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QWindow*
/// @param title const char*
void q_window_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QWindow*
/// @param arg int
void q_window_set_x(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QWindow*
/// @param arg int
void q_window_set_y(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QWindow*
/// @param arg int
void q_window_set_width(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QWindow*
/// @param arg int
void q_window_set_height(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QWindow*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
void q_window_set_geometry(void* self, int posx, int posy, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QWindow*
/// @param rect QRect*
void q_window_set_geometry2(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QWindow*
/// @param w int
void q_window_set_minimum_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QWindow*
/// @param h int
void q_window_set_minimum_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QWindow*
/// @param w int
void q_window_set_maximum_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QWindow*
/// @param h int
void q_window_set_maximum_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QWindow*
/// @param msec int
void q_window_alert(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QWindow*
void q_window_request_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QWindow*
/// @param screen QScreen*
void q_window_screen_changed(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QScreen* screen)
void q_window_on_screen_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QWindow*
/// @param modality enum Qt__WindowModality
void q_window_modality_changed(void* self, int32_t modality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, enum Qt__WindowModality modality)
void q_window_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QWindow*
/// @param windowState enum Qt__WindowState
void q_window_window_state_changed(void* self, int32_t windowState);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, enum Qt__WindowState windowState)
void q_window_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QWindow*
/// @param title const char*
void q_window_window_title_changed(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, const char* title)
void q_window_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_x_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_x_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_y_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_y_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_width_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_height_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_minimum_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_minimum_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_maximum_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QWindow*
/// @param arg int
void q_window_maximum_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, int arg)
void q_window_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QWindow*
/// @param arg bool
void q_window_visible_changed(void* self, bool arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, bool arg)
void q_window_on_visible_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QWindow*
/// @param visibility enum QWindow__Visibility
void q_window_visibility_changed(void* self, int32_t visibility);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, enum QWindow__Visibility visibility)
void q_window_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QWindow*
void q_window_active_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self)
void q_window_on_active_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QWindow*
/// @param orientation enum Qt__ScreenOrientation
void q_window_content_orientation_changed(void* self, int32_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, enum Qt__ScreenOrientation orientation)
void q_window_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QWindow*
/// @param object QObject*
void q_window_focus_object_changed(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QObject* object)
void q_window_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QWindow*
/// @param opacity double
void q_window_opacity_changed(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, double opacity)
void q_window_on_opacity_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QWindow*
/// @param transientParent QWindow*
void q_window_transient_parent_changed(void* self, void* transientParent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QWindow* transientParent)
void q_window_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// @param self QWindow*
/// @param param1 QExposeEvent*
void q_window_expose_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QExposeEvent* param1)
void q_window_on_expose_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QExposeEvent*
void q_window_qbase_expose_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// @param self QWindow*
/// @param param1 QResizeEvent*
void q_window_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QResizeEvent* param1)
void q_window_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QResizeEvent*
void q_window_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// @param self QWindow*
/// @param param1 QPaintEvent*
void q_window_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QPaintEvent* param1)
void q_window_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QPaintEvent*
void q_window_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// @param self QWindow*
/// @param param1 QMoveEvent*
void q_window_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMoveEvent* param1)
void q_window_on_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QMoveEvent*
void q_window_qbase_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// @param self QWindow*
/// @param param1 QFocusEvent*
void q_window_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QFocusEvent* param1)
void q_window_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QFocusEvent*
void q_window_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// @param self QWindow*
/// @param param1 QFocusEvent*
void q_window_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QFocusEvent* param1)
void q_window_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QFocusEvent*
void q_window_qbase_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// @param self QWindow*
/// @param param1 QShowEvent*
void q_window_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QShowEvent* param1)
void q_window_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QShowEvent*
void q_window_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// @param self QWindow*
/// @param param1 QHideEvent*
void q_window_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QHideEvent* param1)
void q_window_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QHideEvent*
void q_window_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// @param self QWindow*
/// @param param1 QCloseEvent*
void q_window_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QCloseEvent* param1)
void q_window_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QCloseEvent*
void q_window_qbase_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// @param self QWindow*
/// @param param1 QEvent*
bool q_window_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback bool func(QWindow* self, QEvent* param1)
void q_window_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QEvent*
bool q_window_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// @param self QWindow*
/// @param param1 QKeyEvent*
void q_window_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QKeyEvent* param1)
void q_window_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QKeyEvent*
void q_window_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// @param self QWindow*
/// @param param1 QKeyEvent*
void q_window_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QKeyEvent* param1)
void q_window_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QKeyEvent*
void q_window_qbase_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMouseEvent* param1)
void q_window_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMouseEvent* param1)
void q_window_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMouseEvent* param1)
void q_window_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMouseEvent* param1)
void q_window_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QMouseEvent*
void q_window_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// @param self QWindow*
/// @param param1 QWheelEvent*
void q_window_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QWheelEvent* param1)
void q_window_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QWheelEvent*
void q_window_qbase_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// @param self QWindow*
/// @param param1 QTouchEvent*
void q_window_touch_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QTouchEvent* param1)
void q_window_on_touch_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QTouchEvent*
void q_window_qbase_touch_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// @param self QWindow*
/// @param param1 QTabletEvent*
void q_window_tablet_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QTabletEvent* param1)
void q_window_on_tablet_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param param1 QTabletEvent*
void q_window_qbase_tablet_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// @param self QWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_window_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWindow*
/// @param callback bool func(QWindow* self, const char* eventType, void* message, intptr_t* result)
void q_window_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Base class method implementation
///
/// @param self QWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_window_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_window_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_window_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self QWindow*
/// @param mode enum QWindow__AncestorMode
QWindow* q_window_parent1(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_window_set_flag2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self QWindow*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
bool q_window_is_ancestor_of2(void* self, void* child, int32_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWindow*
const char* q_window_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWindow*
/// @param name char*
void q_window_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWindow*
bool q_window_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWindow*
bool q_window_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWindow*
bool q_window_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWindow*
bool q_window_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWindow*
/// @param b bool
bool q_window_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWindow*
QThread* q_window_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWindow*
/// @param thread QThread*
bool q_window_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWindow*
/// @param interval int
int32_t q_window_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWindow*
/// @param id int
void q_window_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWindow*
/// @param id enum Qt__TimerId
void q_window_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWindow*
libqt_list /* of QObject* */ q_window_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWindow*
/// @param filterObj QObject*
void q_window_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWindow*
/// @param obj QObject*
void q_window_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_window_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_window_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_window_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_window_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWindow*
void q_window_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWindow*
void q_window_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWindow*
/// @param name const char*
/// @param value QVariant*
bool q_window_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWindow*
/// @param name const char*
QVariant* q_window_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWindow*
const char** q_window_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWindow*
QBindingStorage* q_window_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWindow*
const QBindingStorage* q_window_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindow*
void q_window_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self)
void q_window_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWindow*
/// @param classname const char*
bool q_window_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWindow*
void q_window_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_window_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_window_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_window_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_window_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindow*
/// @param param1 QObject*
void q_window_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QObject* param1)
void q_window_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QWindow*
///
/// @return enum QSurface__SurfaceClass
int32_t q_window_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QWindow*
bool q_window_supports_open_g_l(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param watched QObject*
/// @param event QEvent*
bool q_window_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param watched QObject*
/// @param event QEvent*
bool q_window_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback bool func(QWindow* self, QObject* watched, QEvent* event)
void q_window_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param event QTimerEvent*
void q_window_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param event QTimerEvent*
void q_window_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QTimerEvent* event)
void q_window_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param event QChildEvent*
void q_window_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param event QChildEvent*
void q_window_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QChildEvent* event)
void q_window_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param event QEvent*
void q_window_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param event QEvent*
void q_window_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QEvent* event)
void q_window_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
void q_window_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
void q_window_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMetaMethod* signal)
void q_window_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
void q_window_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
void q_window_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, QMetaMethod* signal)
void q_window_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
QObject* q_window_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
QObject* q_window_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback QObject* func()
void q_window_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
int32_t q_window_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
int32_t q_window_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback int32_t func()
void q_window_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param signal const char*
int32_t q_window_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param signal const char*
int32_t q_window_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback int32_t func(QWindow* self, const char* signal)
void q_window_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
bool q_window_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindow*
/// @param signal QMetaMethod*
bool q_window_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindow*
/// @param callback bool func(QWindow* self, QMetaMethod* signal)
void q_window_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWindow*
/// @param callback void func(QWindow* self, const char* objectName)
void q_window_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#dtor.QWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QWindow*
void q_window_delete(void* self);

/// https://doc.qt.io/qt-6/qwindow.html#types

typedef enum {
    QWINDOW_VISIBILITY_HIDDEN = 0,
    QWINDOW_VISIBILITY_AUTOMATICVISIBILITY = 1,
    QWINDOW_VISIBILITY_WINDOWED = 2,
    QWINDOW_VISIBILITY_MINIMIZED = 3,
    QWINDOW_VISIBILITY_MAXIMIZED = 4,
    QWINDOW_VISIBILITY_FULLSCREEN = 5
} QWindow__Visibility;

typedef enum {
    QWINDOW_ANCESTORMODE_EXCLUDETRANSIENTS = 0,
    QWINDOW_ANCESTORMODE_INCLUDETRANSIENTS = 1
} QWindow__AncestorMode;

#endif
