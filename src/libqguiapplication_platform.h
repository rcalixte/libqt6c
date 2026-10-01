#pragma once
#ifndef LIBQGUIAPPLICATION_PLATFORM_H
#define LIBQGUIAPPLICATION_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html)

#if defined(__linux__) && defined(__FreeBSD__)
/// q_nativeinterface__qx11application_new constructs a new QNativeInterface::QX11Application object.
///
QNativeInterface__QX11Application* q_nativeinterface__qx11application_new();
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
///
/// @warning This method must be implemented with `q_nativeinterface__qx11application_on_display` before it can be called.
///
/// @param self const QNativeInterface__QX11Application*
///
void* q_nativeinterface__qx11application_display(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#display)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QX11Application*
/// @param callback void* func(const QNativeInterface__QX11Application* self)
///
void q_nativeinterface__qx11application_on_display(const void* self, void* (*callback)(const void*));

#ifdef __linux__
/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
///
/// @warning This method must be implemented with `q_nativeinterface__qx11application_on_connection` before it can be called.
///
/// @param self const QNativeInterface__QX11Application*
///
/// @return xcb_connection_t* (NOTE: This pointer value could be `NULL`.)
///
xcb_connection_t* q_nativeinterface__qx11application_connection(const void* self);
#endif

#ifdef __linux__
/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qx11application.html#connection)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QX11Application*
/// @param callback xcb_connection_t* func(const QNativeInterface__QX11Application* self)
///
void q_nativeinterface__qx11application_on_connection(const void* self, xcb_connection_t* (*callback)(const void*));
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html)

#if defined(__linux__) && defined(__FreeBSD__)
/// q_nativeinterface__qwaylandapplication_new constructs a new QNativeInterface::QWaylandApplication object.
///
QNativeInterface__QWaylandApplication* q_nativeinterface__qwaylandapplication_new();
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_display` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_display* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_display(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#display)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_display(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_compositor` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_compositor* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_compositor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#compositor)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_compositor(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_seat` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_seat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#seat)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_seat(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_keyboard` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_keyboard* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_keyboard(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#keyboard)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_keyboard(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_pointer` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_pointer* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_pointer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#pointer)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_pointer(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_touch` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_touch* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_touch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#touch)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_touch(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_last_input_serial` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
uint32_t q_nativeinterface__qwaylandapplication_last_input_serial(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSerial)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback uint32_t func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_last_input_serial(const void* self, uint32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
///
/// @warning This method must be implemented with `q_nativeinterface__qwaylandapplication_on_last_input_seat` before it can be called.
///
/// @param self const QNativeInterface__QWaylandApplication*
///
/// @return wl_seat* (NOTE: This pointer value could be `NULL`.)
///
void* q_nativeinterface__qwaylandapplication_last_input_seat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qwaylandapplication.html#lastInputSeat)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QWaylandApplication*
/// @param callback void* func(const QNativeInterface__QWaylandApplication* self)
///
void q_nativeinterface__qwaylandapplication_on_last_input_seat(const void* self, void* (*callback)(const void*));

#endif
