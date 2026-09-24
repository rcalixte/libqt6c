#pragma once
#ifndef LIBQGUIAPPLICATION_PLATFORM_H
#define LIBQGUIAPPLICATION_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html)

/// q_nativeinterface__qx11application_new constructs a new QNativeInterface::QX11Application object.
///
QNativeInterface__QX11Application* q_nativeinterface__qx11application_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
///
/// @param self QNativeInterface__QX11Application*
///
void* q_nativeinterface__qx11application_display(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QX11Application*
/// @param callback void* func()
///
void q_nativeinterface__qx11application_on_display(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QX11Application*
///
void* q_nativeinterface__qx11application_super_display(void* self);

#ifdef __linux__
/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
///
/// @param self QNativeInterface__QX11Application*
///
/// @return xcb_connection_t* (NOTE: This pointer value could be `NULL`.)
///
xcb_connection_t* q_nativeinterface__qx11application_connection(void* self);
#endif

#ifdef __linux__
/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QX11Application*
/// @param callback xcb_connection_t* func()
///
void q_nativeinterface__qx11application_on_connection(void* self, xcb_connection_t* (*callback)());
#endif

#ifdef __linux__
/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QX11Application*
///
/// @return xcb_connection_t* (NOTE: This pointer value could be `NULL`.)
///
xcb_connection_t* q_nativeinterface__qx11application_super_connection(void* self);
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html)

/// q_nativeinterface__qwaylandapplication_new constructs a new QNativeInterface::QWaylandApplication object.
///
QNativeInterface__QWaylandApplication* q_nativeinterface__qwaylandapplication_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_display* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_display(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_display(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_display* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_display(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_compositor* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_compositor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_compositor(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_compositor* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_compositor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_seat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_seat(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_seat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_keyboard* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_keyboard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_keyboard(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_keyboard* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_keyboard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_pointer* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_pointer(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_pointer* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_touch* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_touch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_touch(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_touch* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_touch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
///
/// @param self QNativeInterface__QWaylandApplication*
///
uint32_t q_nativeinterface__qwaylandapplication_last_input_serial(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback uint32_t func()
///
void q_nativeinterface__qwaylandapplication_on_last_input_serial(void* self, uint32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
uint32_t q_nativeinterface__qwaylandapplication_super_last_input_serial(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_last_input_seat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QWaylandApplication*
/// @param callback void* func()
///
void q_nativeinterface__qwaylandapplication_on_last_input_seat(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_super_last_input_seat(void* self);

#endif
