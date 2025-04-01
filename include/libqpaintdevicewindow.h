#pragma once
#ifndef SRCQT6C_LIBQPAINTDEVICEWINDOW_H
#define SRCQT6C_LIBQPAINTDEVICEWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcursor.h"
#include "libqicon.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include <string.h>
#include "libqsurface.h"
#include "libqsurfaceformat.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qpaintdevicewindow.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPaintDeviceWindow* self ```
QMetaObject* q_paintdevicewindow_meta_object(void* self);

/// ``` QPaintDeviceWindow* self, const char* param1 ```
void* q_paintdevicewindow_metacast(void* self, const char* param1);

/// ``` QPaintDeviceWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_paintdevicewindow_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_paintdevicewindow_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self, QRect* rect ```
void q_paintdevicewindow_update(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self, QRegion* region ```
void q_paintdevicewindow_update_with_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_update2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_paintdevicewindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_paintdevicewindow_tr3(const char* s, const char* c, int n);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QPaintDeviceWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_paintdevicewindow_set_surface_type(void* self, int64_t surfaceType);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_surface_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_visible(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_visibility(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__Visibility v ```
void q_paintdevicewindow_set_visibility(void* self, int64_t v);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_create(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QPaintDeviceWindow* self ```
uintptr_t q_paintdevicewindow_win_id(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QPaintDeviceWindow* self ```
QWindow* q_paintdevicewindow_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QPaintDeviceWindow* self, QWindow* parent ```
void q_paintdevicewindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_modal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_modality(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowModality modality ```
void q_paintdevicewindow_set_modality(void* self, int64_t modality);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QPaintDeviceWindow* self, QSurfaceFormat* format ```
void q_paintdevicewindow_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// ``` QPaintDeviceWindow* self ```
QSurfaceFormat* q_paintdevicewindow_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QPaintDeviceWindow* self ```
QSurfaceFormat* q_paintdevicewindow_requested_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QPaintDeviceWindow* self, int flags ```
void q_paintdevicewindow_set_flags(void* self, int64_t flags);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_flags(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowType param1 ```
void q_paintdevicewindow_set_flag(void* self, int64_t param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_title(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QPaintDeviceWindow* self, double level ```
void q_paintdevicewindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_opacity(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QPaintDeviceWindow* self, QRegion* region ```
void q_paintdevicewindow_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QPaintDeviceWindow* self ```
QRegion* q_paintdevicewindow_mask(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_active(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QPaintDeviceWindow* self, enum Qt__ScreenOrientation orientation ```
void q_paintdevicewindow_report_content_orientation_change(void* self, int64_t orientation);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_window_state(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_window_states(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowState state ```
void q_paintdevicewindow_set_window_state(void* self, int64_t state);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QPaintDeviceWindow* self, int states ```
void q_paintdevicewindow_set_window_states(void* self, int64_t states);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QPaintDeviceWindow* self, QWindow* parent ```
void q_paintdevicewindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QPaintDeviceWindow* self ```
QWindow* q_paintdevicewindow_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QPaintDeviceWindow* self, QWindow* child ```
bool q_paintdevicewindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_base_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_size_increment(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QPaintDeviceWindow* self ```
QRect* q_paintdevicewindow_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QPaintDeviceWindow* self ```
QMargins* q_paintdevicewindow_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QPaintDeviceWindow* self ```
QRect* q_paintdevicewindow_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QPaintDeviceWindow* self ```
QPoint* q_paintdevicewindow_frame_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QPaintDeviceWindow* self, QPoint* point ```
void q_paintdevicewindow_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_x(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_y(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QPaintDeviceWindow* self ```
QPoint* q_paintdevicewindow_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QPaintDeviceWindow* self, QPoint* pt ```
void q_paintdevicewindow_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QPaintDeviceWindow* self, int posx, int posy ```
void q_paintdevicewindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QPaintDeviceWindow* self, QSize* newSize ```
void q_paintdevicewindow_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QPaintDeviceWindow* self, int w, int h ```
void q_paintdevicewindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QPaintDeviceWindow* self, const char* filePath ```
void q_paintdevicewindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_file_path(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QPaintDeviceWindow* self, QIcon* icon ```
void q_paintdevicewindow_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QPaintDeviceWindow* self ```
QIcon* q_paintdevicewindow_icon(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QPaintDeviceWindow* self, bool grab ```
bool q_paintdevicewindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QPaintDeviceWindow* self, bool grab ```
bool q_paintdevicewindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QPaintDeviceWindow* self ```
QScreen* q_paintdevicewindow_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QPaintDeviceWindow* self, QScreen* screen ```
void q_paintdevicewindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// ``` QPaintDeviceWindow* self ```
QAccessibleInterface* q_paintdevicewindow_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// ``` QPaintDeviceWindow* self ```
QObject* q_paintdevicewindow_focus_object(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QPaintDeviceWindow* self, QPointF* pos ```
QPointF* q_paintdevicewindow_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QPaintDeviceWindow* self, QPointF* pos ```
QPointF* q_paintdevicewindow_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QPaintDeviceWindow* self, QPoint* pos ```
QPoint* q_paintdevicewindow_map_to_global_with_pos(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QPaintDeviceWindow* self, QPoint* pos ```
QPoint* q_paintdevicewindow_map_from_global_with_pos(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QPaintDeviceWindow* self ```
QCursor* q_paintdevicewindow_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QPaintDeviceWindow* self, QCursor* cursor ```
void q_paintdevicewindow_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_paintdevicewindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QPaintDeviceWindow* self, bool visible ```
void q_paintdevicewindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_hide(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_close(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_raise(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_lower(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QPaintDeviceWindow* self, int edges ```
bool q_paintdevicewindow_start_system_resize(void* self, int64_t edges);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QPaintDeviceWindow* self, const char* title ```
void q_paintdevicewindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QPaintDeviceWindow* self, int posx, int posy, int w, int h ```
void q_paintdevicewindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QPaintDeviceWindow* self, QRect* rect ```
void q_paintdevicewindow_set_geometry_with_rect(void* self, void* rect);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QPaintDeviceWindow* self, int w ```
void q_paintdevicewindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QPaintDeviceWindow* self, int h ```
void q_paintdevicewindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QPaintDeviceWindow* self, int w ```
void q_paintdevicewindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QPaintDeviceWindow* self, int h ```
void q_paintdevicewindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QPaintDeviceWindow* self, int msec ```
void q_paintdevicewindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QPaintDeviceWindow* self, QScreen* screen ```
void q_paintdevicewindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QScreen*) ```
void q_paintdevicewindow_on_screen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowModality modality ```
void q_paintdevicewindow_modality_changed(void* self, int64_t modality);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__WindowModality) ```
void q_paintdevicewindow_on_modality_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowState windowState ```
void q_paintdevicewindow_window_state_changed(void* self, int64_t windowState);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__WindowState) ```
void q_paintdevicewindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QPaintDeviceWindow* self, const char* title ```
void q_paintdevicewindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, const char*) ```
void q_paintdevicewindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_x_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_y_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_minimum_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_minimum_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_maximum_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_maximum_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QPaintDeviceWindow* self, bool arg ```
void q_paintdevicewindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, bool) ```
void q_paintdevicewindow_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__Visibility visibility ```
void q_paintdevicewindow_visibility_changed(void* self, int64_t visibility);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum QWindow__Visibility) ```
void q_paintdevicewindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_active_changed(void* self);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*) ```
void q_paintdevicewindow_on_active_changed(void* self, void (*slot)(void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__ScreenOrientation orientation ```
void q_paintdevicewindow_content_orientation_changed(void* self, int64_t orientation);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__ScreenOrientation) ```
void q_paintdevicewindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QPaintDeviceWindow* self, QObject* object ```
void q_paintdevicewindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_paintdevicewindow_on_focus_object_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QPaintDeviceWindow* self, double opacity ```
void q_paintdevicewindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, double) ```
void q_paintdevicewindow_on_opacity_changed(void* self, void (*slot)(void*, double));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QPaintDeviceWindow* self, QWindow* transientParent ```
void q_paintdevicewindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QWindow*) ```
void q_paintdevicewindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_paintdevicewindow_parent1(void* self, int64_t mode);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowType param1, bool on ```
void q_paintdevicewindow_set_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QPaintDeviceWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_paintdevicewindow_is_ancestor_of2(void* self, void* child, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* watched, QEvent* event ```
bool q_paintdevicewindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPaintDeviceWindow* self, const char* name ```
void q_paintdevicewindow_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPaintDeviceWindow* self, bool b ```
bool q_paintdevicewindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPaintDeviceWindow* self ```
QThread* q_paintdevicewindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPaintDeviceWindow* self, QThread* thread ```
void q_paintdevicewindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPaintDeviceWindow* self, int interval ```
int32_t q_paintdevicewindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPaintDeviceWindow* self, int id ```
void q_paintdevicewindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPaintDeviceWindow* self ```
libqt_list /* of QObject* */ q_paintdevicewindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* filterObj ```
void q_paintdevicewindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* obj ```
void q_paintdevicewindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_paintdevicewindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPaintDeviceWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_paintdevicewindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_paintdevicewindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_paintdevicewindow_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPaintDeviceWindow* self, const char* name, QVariant* value ```
bool q_paintdevicewindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPaintDeviceWindow* self, const char* name ```
QVariant* q_paintdevicewindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPaintDeviceWindow* self ```
const char** q_paintdevicewindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPaintDeviceWindow* self ```
QBindingStorage* q_paintdevicewindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPaintDeviceWindow* self ```
QBindingStorage* q_paintdevicewindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QObject*) ```
void q_paintdevicewindow_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPaintDeviceWindow* self, const char* classname ```
bool q_paintdevicewindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPaintDeviceWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_paintdevicewindow_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_paintdevicewindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPaintDeviceWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_paintdevicewindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPaintDeviceWindow* self, QObject* param1 ```
void q_paintdevicewindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QObject*, QObject*) ```
void q_paintdevicewindow_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_supports_open_g_l(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPaintDeviceWindow* self ```
QPaintEngine* q_paintdevicewindow_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_paintdevicewindow_device_pixel_ratio_f_scale();

/// Delete this object from C++ memory.
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_delete(void* self);

#endif
