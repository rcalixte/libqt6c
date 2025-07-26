#pragma once
#ifndef SRCQT6C_LIBQWINDOW_H
#define SRCQT6C_LIBQWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qwindow.html

/// q_window_new constructs a new QWindow object.
///
///
QWindow* q_window_new();

/// q_window_new2 constructs a new QWindow object.
///
/// ``` QWindow* parent ```
QWindow* q_window_new2(void* parent);

/// q_window_new3 constructs a new QWindow object.
///
/// ``` QScreen* screen ```
QWindow* q_window_new3(void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWindow* self ```
const QMetaObject* q_window_meta_object(void* self);

/// ``` QWindow* self, const char* param1 ```
void* q_window_metacast(void* self, const char* param1);

/// ``` QWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_window_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWindow* self, int32_t (*slot)(QWindow*, enum QMetaObject__Call, int, void*) ```
void q_window_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_window_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_window_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_window_set_surface_type(void* self, int64_t surfaceType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// ``` QWindow* self ```
int64_t q_window_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, int64_t (*slot)() ```
void q_window_on_surface_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Base class method implementation
///
/// ``` QWindow* self ```
int64_t q_window_qbase_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QWindow* self ```
bool q_window_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QWindow* self ```
int64_t q_window_visibility(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QWindow* self, enum QWindow__Visibility v ```
void q_window_set_visibility(void* self, int64_t v);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QWindow* self ```
void q_window_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QWindow* self ```
uintptr_t q_window_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QWindow* self ```
QWindow* q_window_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QWindow* self, QWindow* parent ```
void q_window_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QWindow* self ```
bool q_window_is_top_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QWindow* self ```
bool q_window_is_modal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QWindow* self ```
int64_t q_window_modality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QWindow* self, enum Qt__WindowModality modality ```
void q_window_set_modality(void* self, int64_t modality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QWindow* self, QSurfaceFormat* format ```
void q_window_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, QSurfaceFormat* (*slot)() ```
void q_window_on_format(void* self, QSurfaceFormat* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Base class method implementation
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_qbase_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_requested_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QWindow* self, int flags ```
void q_window_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QWindow* self ```
int64_t q_window_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QWindow* self, enum Qt__WindowType param1 ```
void q_window_set_flag(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QWindow* self ```
int64_t q_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QWindow* self ```
const char* q_window_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QWindow* self, double level ```
void q_window_set_opacity(void* self, double level);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QWindow* self ```
double q_window_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QWindow* self, QRegion* region ```
void q_window_set_mask(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QWindow* self ```
QRegion* q_window_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QWindow* self ```
bool q_window_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QWindow* self, enum Qt__ScreenOrientation orientation ```
void q_window_report_content_orientation_change(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QWindow* self ```
int64_t q_window_content_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QWindow* self ```
double q_window_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QWindow* self ```
int64_t q_window_window_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QWindow* self ```
int64_t q_window_window_states(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QWindow* self, enum Qt__WindowState state ```
void q_window_set_window_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QWindow* self, int states ```
void q_window_set_window_states(void* self, int64_t states);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QWindow* self, QWindow* parent ```
void q_window_set_transient_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QWindow* self ```
QWindow* q_window_transient_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QWindow* self, QWindow* child ```
bool q_window_is_ancestor_of(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QWindow* self ```
bool q_window_is_exposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QWindow* self ```
int32_t q_window_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QWindow* self ```
int32_t q_window_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QWindow* self ```
int32_t q_window_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QWindow* self ```
int32_t q_window_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QWindow* self ```
QSize* q_window_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QWindow* self ```
QSize* q_window_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QWindow* self ```
QSize* q_window_base_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QWindow* self ```
QSize* q_window_size_increment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_minimum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_maximum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_base_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_size_increment(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QWindow* self ```
QRect* q_window_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QWindow* self ```
QMargins* q_window_frame_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QWindow* self ```
QRect* q_window_frame_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QWindow* self ```
QPoint* q_window_frame_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QWindow* self, QPoint* point ```
void q_window_set_frame_position(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QWindow* self ```
int32_t q_window_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QWindow* self ```
int32_t q_window_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QWindow* self ```
int32_t q_window_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QWindow* self ```
int32_t q_window_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// ``` QWindow* self ```
QSize* q_window_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, QSize* (*slot)() ```
void q_window_on_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Base class method implementation
///
/// ``` QWindow* self ```
QSize* q_window_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QWindow* self ```
QPoint* q_window_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QWindow* self, QPoint* pt ```
void q_window_set_position(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QWindow* self, int posx, int posy ```
void q_window_set_position2(void* self, int posx, int posy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QWindow* self, QSize* newSize ```
void q_window_resize(void* self, void* newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QWindow* self, int w, int h ```
void q_window_resize2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QWindow* self, const char* filePath ```
void q_window_set_file_path(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QWindow* self ```
const char* q_window_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QWindow* self, QIcon* icon ```
void q_window_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QWindow* self ```
QIcon* q_window_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QWindow* self ```
void q_window_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QWindow* self, bool grab ```
bool q_window_set_keyboard_grab_enabled(void* self, bool grab);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QWindow* self, bool grab ```
bool q_window_set_mouse_grab_enabled(void* self, bool grab);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QWindow* self ```
QScreen* q_window_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QWindow* self, QScreen* screen ```
void q_window_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// ``` QWindow* self ```
QAccessibleInterface* q_window_accessible_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, QAccessibleInterface* (*slot)() ```
void q_window_on_accessible_root(void* self, QAccessibleInterface* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Base class method implementation
///
/// ``` QWindow* self ```
QAccessibleInterface* q_window_qbase_accessible_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// ``` QWindow* self ```
QObject* q_window_focus_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, QObject* (*slot)() ```
void q_window_on_focus_object(void* self, QObject* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Base class method implementation
///
/// ``` QWindow* self ```
QObject* q_window_qbase_focus_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QWindow* self, QPointF* pos ```
QPointF* q_window_map_to_global(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QWindow* self, QPointF* pos ```
QPointF* q_window_map_from_global(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QWindow* self, QPoint* pos ```
QPoint* q_window_map_to_global2(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QWindow* self, QPoint* pos ```
QPoint* q_window_map_from_global2(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QWindow* self ```
QCursor* q_window_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QWindow* self, QCursor* cursor ```
void q_window_set_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QWindow* self ```
void q_window_unset_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_window_from_win_id(uintptr_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// ``` QWindow* self, const char* name, int revision ```
void* q_window_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void* (*slot)(QWindow*, const char*, int) ```
void q_window_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Base class method implementation
///
/// ``` QWindow* self, const char* name, int revision ```
void* q_window_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QWindow* self ```
void q_window_request_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QWindow* self, bool visible ```
void q_window_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QWindow* self ```
void q_window_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QWindow* self ```
void q_window_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QWindow* self ```
void q_window_show_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QWindow* self ```
void q_window_show_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QWindow* self ```
void q_window_show_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QWindow* self ```
void q_window_show_normal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QWindow* self ```
bool q_window_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QWindow* self ```
void q_window_raise(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QWindow* self ```
void q_window_lower(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QWindow* self, int edges ```
bool q_window_start_system_resize(void* self, int64_t edges);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QWindow* self ```
bool q_window_start_system_move(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QWindow* self, const char* title ```
void q_window_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QWindow* self, int arg ```
void q_window_set_x(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QWindow* self, int arg ```
void q_window_set_y(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QWindow* self, int arg ```
void q_window_set_width(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QWindow* self, int arg ```
void q_window_set_height(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QWindow* self, int posx, int posy, int w, int h ```
void q_window_set_geometry(void* self, int posx, int posy, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QWindow* self, QRect* rect ```
void q_window_set_geometry2(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QWindow* self, int w ```
void q_window_set_minimum_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QWindow* self, int h ```
void q_window_set_minimum_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QWindow* self, int w ```
void q_window_set_maximum_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QWindow* self, int h ```
void q_window_set_maximum_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QWindow* self, int msec ```
void q_window_alert(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QWindow* self ```
void q_window_request_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QWindow* self, QScreen* screen ```
void q_window_screen_changed(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, QScreen*) ```
void q_window_on_screen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QWindow* self, enum Qt__WindowModality modality ```
void q_window_modality_changed(void* self, int64_t modality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__WindowModality) ```
void q_window_on_modality_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QWindow* self, enum Qt__WindowState windowState ```
void q_window_window_state_changed(void* self, int64_t windowState);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__WindowState) ```
void q_window_on_window_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QWindow* self, const char* title ```
void q_window_window_title_changed(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, const char*) ```
void q_window_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_x_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_x_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_y_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_y_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_width_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_height_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_minimum_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_minimum_width_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_minimum_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_minimum_height_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_maximum_width_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_maximum_width_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_maximum_height_changed(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_maximum_height_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QWindow* self, bool arg ```
void q_window_visible_changed(void* self, bool arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, bool) ```
void q_window_on_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QWindow* self, enum QWindow__Visibility visibility ```
void q_window_visibility_changed(void* self, int64_t visibility);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, enum QWindow__Visibility) ```
void q_window_on_visibility_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QWindow* self ```
void q_window_active_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*) ```
void q_window_on_active_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QWindow* self, enum Qt__ScreenOrientation orientation ```
void q_window_content_orientation_changed(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__ScreenOrientation) ```
void q_window_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QWindow* self, QObject* object ```
void q_window_focus_object_changed(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_window_on_focus_object_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QWindow* self, double opacity ```
void q_window_opacity_changed(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, double) ```
void q_window_on_opacity_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QWindow* self, QWindow* transientParent ```
void q_window_transient_parent_changed(void* self, void* transientParent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QWindow* self, void (*slot)(QWindow*, QWindow*) ```
void q_window_on_transient_parent_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// ``` QWindow* self, QExposeEvent* param1 ```
void q_window_expose_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QExposeEvent*) ```
void q_window_on_expose_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QExposeEvent* param1 ```
void q_window_qbase_expose_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// ``` QWindow* self, QResizeEvent* param1 ```
void q_window_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QResizeEvent*) ```
void q_window_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QResizeEvent* param1 ```
void q_window_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// ``` QWindow* self, QPaintEvent* param1 ```
void q_window_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QPaintEvent*) ```
void q_window_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QPaintEvent* param1 ```
void q_window_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// ``` QWindow* self, QMoveEvent* param1 ```
void q_window_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMoveEvent*) ```
void q_window_on_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QMoveEvent* param1 ```
void q_window_qbase_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QFocusEvent*) ```
void q_window_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QFocusEvent*) ```
void q_window_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_qbase_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// ``` QWindow* self, QShowEvent* param1 ```
void q_window_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QShowEvent*) ```
void q_window_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QShowEvent* param1 ```
void q_window_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// ``` QWindow* self, QHideEvent* param1 ```
void q_window_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QHideEvent*) ```
void q_window_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QHideEvent* param1 ```
void q_window_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// ``` QWindow* self, QCloseEvent* param1 ```
void q_window_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QCloseEvent*) ```
void q_window_on_close_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QCloseEvent* param1 ```
void q_window_qbase_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// ``` QWindow* self, QEvent* param1 ```
bool q_window_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QEvent*) ```
void q_window_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// Base class method implementation
///
/// ``` QWindow* self, QEvent* param1 ```
bool q_window_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QKeyEvent*) ```
void q_window_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QKeyEvent*) ```
void q_window_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_qbase_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// ``` QWindow* self, QWheelEvent* param1 ```
void q_window_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QWheelEvent*) ```
void q_window_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QWheelEvent* param1 ```
void q_window_qbase_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// ``` QWindow* self, QTouchEvent* param1 ```
void q_window_touch_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTouchEvent*) ```
void q_window_on_touch_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QTouchEvent* param1 ```
void q_window_qbase_touch_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// ``` QWindow* self, QTabletEvent* param1 ```
void q_window_tablet_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTabletEvent*) ```
void q_window_on_tablet_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, QTabletEvent* param1 ```
void q_window_qbase_tablet_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// ``` QWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_window_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, const char*, void*, intptr_t*) ```
void q_window_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Base class method implementation
///
/// ``` QWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_window_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_window_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_window_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_window_parent1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QWindow* self, enum Qt__WindowType param1, bool on ```
void q_window_set_flag2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_window_is_ancestor_of2(void* self, void* child, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWindow* self ```
const char* q_window_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWindow* self, char* name ```
void q_window_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWindow* self ```
bool q_window_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWindow* self ```
bool q_window_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWindow* self ```
bool q_window_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWindow* self ```
bool q_window_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWindow* self, bool b ```
bool q_window_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWindow* self ```
QThread* q_window_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWindow* self, QThread* thread ```
bool q_window_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindow* self, int interval ```
int32_t q_window_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWindow* self, int id ```
void q_window_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWindow* self, enum Qt__TimerId id ```
void q_window_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWindow* self ```
libqt_list /* of QObject* */ q_window_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWindow* self, QObject* filterObj ```
void q_window_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWindow* self, QObject* obj ```
void q_window_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_window_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_window_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_window_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_window_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWindow* self ```
void q_window_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWindow* self ```
void q_window_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWindow* self, const char* name, QVariant* value ```
bool q_window_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWindow* self, const char* name ```
QVariant* q_window_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWindow* self ```
const char** q_window_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWindow* self ```
QBindingStorage* q_window_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWindow* self ```
const QBindingStorage* q_window_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self ```
void q_window_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self, void (*slot)(QWindow*) ```
void q_window_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWindow* self, const char* classname ```
bool q_window_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWindow* self ```
void q_window_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWindow* self, QThread* thread, Disambiguated_t* param2 ```
bool q_window_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_window_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_window_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_window_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self, QObject* param1 ```
void q_window_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_window_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QWindow* self ```
int64_t q_window_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QWindow* self ```
bool q_window_supports_open_g_l(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QObject* watched, QEvent* event ```
bool q_window_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QObject* watched, QEvent* event ```
bool q_window_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QObject*, QEvent*) ```
void q_window_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QTimerEvent* event ```
void q_window_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QTimerEvent* event ```
void q_window_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTimerEvent*) ```
void q_window_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QChildEvent* event ```
void q_window_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QChildEvent* event ```
void q_window_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QChildEvent*) ```
void q_window_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QEvent* event ```
void q_window_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QEvent* event ```
void q_window_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QEvent*) ```
void q_window_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self ```
QObject* q_window_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self ```
QObject* q_window_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, QObject* (*slot)() ```
void q_window_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self ```
int32_t q_window_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self ```
int32_t q_window_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, int32_t (*slot)() ```
void q_window_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, const char* signal ```
int32_t q_window_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, const char* signal ```
int32_t q_window_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, int32_t (*slot)(QWindow*, const char*) ```
void q_window_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
bool q_window_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
bool q_window_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWindow* self, void (*slot)(QWindow*, const char*) ```
void q_window_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#dtor.QWindow)
///
/// Delete this object from C++ memory.
///
/// ``` QWindow* self ```
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
