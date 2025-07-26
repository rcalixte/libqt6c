#pragma once
#ifndef SRCQT6C_LIBQRASTERWINDOW_H
#define SRCQT6C_LIBQRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrasterwindow.html

/// q_rasterwindow_new constructs a new QRasterWindow object.
///
///
QRasterWindow* q_rasterwindow_new();

/// q_rasterwindow_new2 constructs a new QRasterWindow object.
///
/// ``` QWindow* parent ```
QRasterWindow* q_rasterwindow_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRasterWindow* self ```
const QMetaObject* q_rasterwindow_meta_object(void* self);

/// ``` QRasterWindow* self, const char* param1 ```
void* q_rasterwindow_metacast(void* self, const char* param1);

/// ``` QRasterWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rasterwindow_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, enum QMetaObject__Call, int, void*) ```
void q_rasterwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QRasterWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rasterwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_rasterwindow_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_rasterwindow_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, enum QPaintDevice__PaintDeviceMetric) ```
void q_rasterwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// Base class method implementation
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_rasterwindow_qbase_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// ``` QRasterWindow* self, QPoint* param1 ```
QPaintDevice* q_rasterwindow_redirected(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, QPaintDevice* (*slot)(QRasterWindow*, QPoint*) ```
void q_rasterwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// Base class method implementation
///
/// ``` QRasterWindow* self, QPoint* param1 ```
QPaintDevice* q_rasterwindow_qbase_redirected(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// ``` QRasterWindow* self, QResizeEvent* event ```
void q_rasterwindow_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QResizeEvent*) ```
void q_rasterwindow_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QRasterWindow* self, QResizeEvent* event ```
void q_rasterwindow_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_rasterwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_rasterwindow_tr3(const char* s, const char* c, int n);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self, QRect* rect ```
void q_rasterwindow_update(void* self, void* rect);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self, QRegion* region ```
void q_rasterwindow_update2(void* self, void* region);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_update3(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QRasterWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_rasterwindow_set_surface_type(void* self, int64_t surfaceType);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_visible(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_visibility(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QRasterWindow* self, enum QWindow__Visibility v ```
void q_rasterwindow_set_visibility(void* self, int64_t v);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_create(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QRasterWindow* self ```
uintptr_t q_rasterwindow_win_id(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QRasterWindow* self ```
QWindow* q_rasterwindow_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QRasterWindow* self, QWindow* parent ```
void q_rasterwindow_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_top_level(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_modal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_modality(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QRasterWindow* self, enum Qt__WindowModality modality ```
void q_rasterwindow_set_modality(void* self, int64_t modality);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QRasterWindow* self, QSurfaceFormat* format ```
void q_rasterwindow_set_format(void* self, void* format);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_requested_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QRasterWindow* self, int flags ```
void q_rasterwindow_set_flags(void* self, int64_t flags);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_flags(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QRasterWindow* self, enum Qt__WindowType param1 ```
void q_rasterwindow_set_flag(void* self, int64_t param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_title(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QRasterWindow* self, double level ```
void q_rasterwindow_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_opacity(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QRasterWindow* self, QRegion* region ```
void q_rasterwindow_set_mask(void* self, void* region);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QRasterWindow* self ```
QRegion* q_rasterwindow_mask(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_active(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QRasterWindow* self, enum Qt__ScreenOrientation orientation ```
void q_rasterwindow_report_content_orientation_change(void* self, int64_t orientation);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_content_orientation(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_device_pixel_ratio(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_window_state(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_window_states(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QRasterWindow* self, enum Qt__WindowState state ```
void q_rasterwindow_set_window_state(void* self, int64_t state);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QRasterWindow* self, int states ```
void q_rasterwindow_set_window_states(void* self, int64_t states);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QRasterWindow* self, QWindow* parent ```
void q_rasterwindow_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QRasterWindow* self ```
QWindow* q_rasterwindow_transient_parent(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QRasterWindow* self, QWindow* child ```
bool q_rasterwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_exposed(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_minimum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_minimum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_maximum_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_maximum_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_minimum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_maximum_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_base_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_size_increment(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_minimum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_maximum_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_base_size(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_size_increment(void* self, void* size);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QRasterWindow* self ```
QRect* q_rasterwindow_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QRasterWindow* self ```
QMargins* q_rasterwindow_frame_margins(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QRasterWindow* self ```
QRect* q_rasterwindow_frame_geometry(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QRasterWindow* self ```
QPoint* q_rasterwindow_frame_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QRasterWindow* self, QPoint* point ```
void q_rasterwindow_set_frame_position(void* self, void* point);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_width(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_height(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_x(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_y(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QRasterWindow* self ```
QPoint* q_rasterwindow_position(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QRasterWindow* self, QPoint* pt ```
void q_rasterwindow_set_position(void* self, void* pt);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QRasterWindow* self, int posx, int posy ```
void q_rasterwindow_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QRasterWindow* self, QSize* newSize ```
void q_rasterwindow_resize(void* self, void* newSize);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QRasterWindow* self, int w, int h ```
void q_rasterwindow_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QRasterWindow* self, const char* filePath ```
void q_rasterwindow_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_file_path(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QRasterWindow* self, QIcon* icon ```
void q_rasterwindow_set_icon(void* self, void* icon);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QRasterWindow* self ```
QIcon* q_rasterwindow_icon(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_destroy(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QRasterWindow* self, bool grab ```
bool q_rasterwindow_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QRasterWindow* self, bool grab ```
bool q_rasterwindow_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QRasterWindow* self ```
QScreen* q_rasterwindow_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QRasterWindow* self, QScreen* screen ```
void q_rasterwindow_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QRasterWindow* self, QPointF* pos ```
QPointF* q_rasterwindow_map_to_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QRasterWindow* self, QPointF* pos ```
QPointF* q_rasterwindow_map_from_global(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QRasterWindow* self, QPoint* pos ```
QPoint* q_rasterwindow_map_to_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QRasterWindow* self, QPoint* pos ```
QPoint* q_rasterwindow_map_from_global2(void* self, void* pos);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QRasterWindow* self ```
QCursor* q_rasterwindow_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QRasterWindow* self, QCursor* cursor ```
void q_rasterwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_rasterwindow_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_request_activate(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QRasterWindow* self, bool visible ```
void q_rasterwindow_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_hide(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_normal(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_close(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_raise(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_lower(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QRasterWindow* self, int edges ```
bool q_rasterwindow_start_system_resize(void* self, int64_t edges);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QRasterWindow* self, const char* title ```
void q_rasterwindow_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QRasterWindow* self, int posx, int posy, int w, int h ```
void q_rasterwindow_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QRasterWindow* self, QRect* rect ```
void q_rasterwindow_set_geometry2(void* self, void* rect);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QRasterWindow* self, int w ```
void q_rasterwindow_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QRasterWindow* self, int h ```
void q_rasterwindow_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QRasterWindow* self, int w ```
void q_rasterwindow_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QRasterWindow* self, int h ```
void q_rasterwindow_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QRasterWindow* self, int msec ```
void q_rasterwindow_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_request_update(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QRasterWindow* self, QScreen* screen ```
void q_rasterwindow_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QScreen*) ```
void q_rasterwindow_on_screen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QRasterWindow* self, enum Qt__WindowModality modality ```
void q_rasterwindow_modality_changed(void* self, int64_t modality);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, enum Qt__WindowModality) ```
void q_rasterwindow_on_modality_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QRasterWindow* self, enum Qt__WindowState windowState ```
void q_rasterwindow_window_state_changed(void* self, int64_t windowState);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, enum Qt__WindowState) ```
void q_rasterwindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QRasterWindow* self, const char* title ```
void q_rasterwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, const char*) ```
void q_rasterwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_x_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_y_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_minimum_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_minimum_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_maximum_width_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, int) ```
void q_rasterwindow_on_maximum_height_changed(void* self, void (*slot)(void*, int));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QRasterWindow* self, bool arg ```
void q_rasterwindow_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, bool) ```
void q_rasterwindow_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QRasterWindow* self, enum QWindow__Visibility visibility ```
void q_rasterwindow_visibility_changed(void* self, int64_t visibility);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, enum QWindow__Visibility) ```
void q_rasterwindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_active_changed(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*) ```
void q_rasterwindow_on_active_changed(void* self, void (*slot)(void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QRasterWindow* self, enum Qt__ScreenOrientation orientation ```
void q_rasterwindow_content_orientation_changed(void* self, int64_t orientation);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, enum Qt__ScreenOrientation) ```
void q_rasterwindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QRasterWindow* self, QObject* object ```
void q_rasterwindow_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QObject*) ```
void q_rasterwindow_on_focus_object_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QRasterWindow* self, double opacity ```
void q_rasterwindow_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, double) ```
void q_rasterwindow_on_opacity_changed(void* self, void (*slot)(void*, double));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QRasterWindow* self, QWindow* transientParent ```
void q_rasterwindow_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QWindow*) ```
void q_rasterwindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QRasterWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_rasterwindow_parent1(void* self, int64_t mode);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QRasterWindow* self, enum Qt__WindowType param1, bool on ```
void q_rasterwindow_set_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QRasterWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_rasterwindow_is_ancestor_of2(void* self, void* child, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRasterWindow* self, char* name ```
void q_rasterwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRasterWindow* self, bool b ```
bool q_rasterwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRasterWindow* self ```
QThread* q_rasterwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRasterWindow* self, QThread* thread ```
bool q_rasterwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRasterWindow* self, int interval ```
int32_t q_rasterwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRasterWindow* self, int id ```
void q_rasterwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRasterWindow* self, enum Qt__TimerId id ```
void q_rasterwindow_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRasterWindow* self ```
libqt_list /* of QObject* */ q_rasterwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRasterWindow* self, QObject* filterObj ```
void q_rasterwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRasterWindow* self, QObject* obj ```
void q_rasterwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_rasterwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRasterWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_rasterwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_rasterwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_rasterwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRasterWindow* self, const char* name, QVariant* value ```
bool q_rasterwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRasterWindow* self, const char* name ```
QVariant* q_rasterwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRasterWindow* self ```
const char** q_rasterwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRasterWindow* self ```
QBindingStorage* q_rasterwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRasterWindow* self ```
const QBindingStorage* q_rasterwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*) ```
void q_rasterwindow_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRasterWindow* self, const char* classname ```
bool q_rasterwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRasterWindow* self, QThread* thread, Disambiguated_t* param2 ```
bool q_rasterwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRasterWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_rasterwindow_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rasterwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRasterWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rasterwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self, QObject* param1 ```
void q_rasterwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QObject*) ```
void q_rasterwindow_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_supports_open_g_l(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QRasterWindow* self ```
QPaintEngine* q_rasterwindow_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_rasterwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_rasterwindow_encode_metric_f(int64_t metric, double value);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QExposeEvent* param1 ```
void q_rasterwindow_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QExposeEvent* param1 ```
void q_rasterwindow_qbase_expose_event(void* self, void* param1);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QExposeEvent*) ```
void q_rasterwindow_on_expose_event(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QPaintEvent* event ```
void q_rasterwindow_paint_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QPaintEvent* event ```
void q_rasterwindow_qbase_paint_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QPaintEvent*) ```
void q_rasterwindow_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
bool q_rasterwindow_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
bool q_rasterwindow_qbase_event(void* self, void* event);

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QEvent*) ```
void q_rasterwindow_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_surface_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_qbase_surface_type(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int64_t (*slot)() ```
void q_rasterwindow_on_surface_type(void* self, int64_t (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_qbase_format(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QSurfaceFormat* (*slot)() ```
void q_rasterwindow_on_format(void* self, QSurfaceFormat* (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_qbase_size(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QSize* (*slot)() ```
void q_rasterwindow_on_size(void* self, QSize* (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QAccessibleInterface* q_rasterwindow_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QAccessibleInterface* q_rasterwindow_qbase_accessible_root(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QAccessibleInterface* (*slot)() ```
void q_rasterwindow_on_accessible_root(void* self, QAccessibleInterface* (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_focus_object(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_qbase_focus_object(void* self);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* (*slot)() ```
void q_rasterwindow_on_focus_object(void* self, QObject* (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMoveEvent* param1 ```
void q_rasterwindow_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMoveEvent* param1 ```
void q_rasterwindow_qbase_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMoveEvent*) ```
void q_rasterwindow_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QFocusEvent*) ```
void q_rasterwindow_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QFocusEvent*) ```
void q_rasterwindow_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QShowEvent* param1 ```
void q_rasterwindow_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QShowEvent* param1 ```
void q_rasterwindow_qbase_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QShowEvent*) ```
void q_rasterwindow_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QHideEvent* param1 ```
void q_rasterwindow_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QHideEvent* param1 ```
void q_rasterwindow_qbase_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QHideEvent*) ```
void q_rasterwindow_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QCloseEvent* param1 ```
void q_rasterwindow_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QCloseEvent* param1 ```
void q_rasterwindow_qbase_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QCloseEvent*) ```
void q_rasterwindow_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_qbase_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QKeyEvent*) ```
void q_rasterwindow_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_qbase_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QKeyEvent*) ```
void q_rasterwindow_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QWheelEvent* param1 ```
void q_rasterwindow_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QWheelEvent* param1 ```
void q_rasterwindow_qbase_wheel_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QWheelEvent*) ```
void q_rasterwindow_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTouchEvent* param1 ```
void q_rasterwindow_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTouchEvent* param1 ```
void q_rasterwindow_qbase_touch_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTouchEvent*) ```
void q_rasterwindow_on_touch_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTabletEvent* param1 ```
void q_rasterwindow_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTabletEvent* param1 ```
void q_rasterwindow_qbase_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTabletEvent*) ```
void q_rasterwindow_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_rasterwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_rasterwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, const char*, void*, intptr_t*) ```
void q_rasterwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QObject* watched, QEvent* event ```
bool q_rasterwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* watched, QEvent* event ```
bool q_rasterwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QObject*, QEvent*) ```
void q_rasterwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTimerEvent* event ```
void q_rasterwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTimerEvent* event ```
void q_rasterwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTimerEvent*) ```
void q_rasterwindow_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QChildEvent* event ```
void q_rasterwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QChildEvent* event ```
void q_rasterwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QChildEvent*) ```
void q_rasterwindow_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
void q_rasterwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
void q_rasterwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QEvent*) ```
void q_rasterwindow_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)() ```
void q_rasterwindow_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* painter ```
void q_rasterwindow_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* painter ```
void q_rasterwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QPainter*) ```
void q_rasterwindow_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QPainter* q_rasterwindow_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QPainter* q_rasterwindow_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* (*slot)() ```
void q_rasterwindow_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* name, int revision ```
void* q_rasterwindow_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* name, int revision ```
void* q_rasterwindow_qbase_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void* (*slot)(QRasterWindow*, const char*, int) ```
void q_rasterwindow_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* (*slot)() ```
void q_rasterwindow_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)() ```
void q_rasterwindow_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* signal ```
int32_t q_rasterwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* signal ```
int32_t q_rasterwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, const char*) ```
void q_rasterwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
bool q_rasterwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
bool q_rasterwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_rasterwindow_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_rasterwindow_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, double (*slot)(QRasterWindow*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_rasterwindow_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, const char*) ```
void q_rasterwindow_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#dtor.QRasterWindow)
///
/// Delete this object from C++ memory.
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_delete(void* self);

#endif
