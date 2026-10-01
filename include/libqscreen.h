#pragma once
#ifndef LIBQSCREEN_H
#define LIBQSCREEN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QScreen*
///
const QMetaObject* q_screen_meta_object(const void* self);

/// @param self QScreen*
/// @param param1 const char*
///
void* q_screen_metacast(void* self, const char* param1);

/// @param self QScreen*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_screen_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_screen_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScreen*
///
const char* q_screen_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScreen*
///
const char* q_screen_manufacturer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#model)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScreen*
///
const char* q_screen_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScreen*
///
const char* q_screen_serial_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#depth)
///
/// @param self const QScreen*
///
int32_t q_screen_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#size)
///
/// @param self const QScreen*
///
QSize* q_screen_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometry)
///
/// @param self const QScreen*
///
QRect* q_screen_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
///
/// @param self const QScreen*
///
QSizeF* q_screen_physical_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
///
/// @param self const QScreen*
///
double q_screen_physical_dots_per_inch_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
///
/// @param self const QScreen*
///
double q_screen_physical_dots_per_inch_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
///
/// @param self const QScreen*
///
double q_screen_physical_dots_per_inch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
///
/// @param self const QScreen*
///
double q_screen_logical_dots_per_inch_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
///
/// @param self const QScreen*
///
double q_screen_logical_dots_per_inch_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
///
/// @param self const QScreen*
///
double q_screen_logical_dots_per_inch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
///
/// @param self const QScreen*
///
double q_screen_device_pixel_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableSize)
///
/// @param self const QScreen*
///
QSize* q_screen_available_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
///
/// @param self const QScreen*
///
QRect* q_screen_available_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
///
/// @param self const QScreen*
///
/// @return libqt_list of QScreen*
///
libqt_list q_screen_virtual_siblings(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
///
/// @param self QScreen*
/// @param point QPoint*
///
QScreen* q_screen_virtual_sibling_at(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
///
/// @param self const QScreen*
///
QSize* q_screen_virtual_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
///
/// @param self const QScreen*
///
QRect* q_screen_virtual_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
///
/// @param self const QScreen*
///
QSize* q_screen_available_virtual_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
///
/// @param self const QScreen*
///
QRect* q_screen_available_virtual_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
///
/// @param self const QScreen*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_screen_primary_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientation)
///
/// @param self const QScreen*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_screen_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
///
/// @param self const QScreen*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_screen_native_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
///
/// @param self const QScreen*
/// @param a enum Qt__ScreenOrientation
/// @param b enum Qt__ScreenOrientation
///
int32_t q_screen_angle_between(const void* self, int32_t a, int32_t b);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
///
/// @param self const QScreen*
/// @param a enum Qt__ScreenOrientation
/// @param b enum Qt__ScreenOrientation
/// @param target QRect*
///
QTransform* q_screen_transform_between(const void* self, int32_t a, int32_t b, const void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
///
/// @param self const QScreen*
/// @param a enum Qt__ScreenOrientation
/// @param b enum Qt__ScreenOrientation
/// @param rect QRect*
///
QRect* q_screen_map_between(const void* self, int32_t a, int32_t b, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
///
/// @param self const QScreen*
/// @param orientation enum Qt__ScreenOrientation
///
bool q_screen_is_portrait(const void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
///
/// @param self const QScreen*
/// @param orientation enum Qt__ScreenOrientation
///
bool q_screen_is_landscape(const void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
///
QPixmap* q_screen_grab_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
///
/// @param self const QScreen*
///
double q_screen_refresh_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
///
/// @param self QScreen*
/// @param geometry QRect*
///
void q_screen_geometry_changed(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, QRect* geometry)
///
void q_screen_on_geometry_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
///
/// @param self QScreen*
/// @param geometry QRect*
///
void q_screen_available_geometry_changed(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, QRect* geometry)
///
void q_screen_on_available_geometry_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
///
/// @param self QScreen*
/// @param size QSizeF*
///
void q_screen_physical_size_changed(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, QSizeF* size)
///
void q_screen_on_physical_size_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
///
/// @param self QScreen*
/// @param dpi double
///
void q_screen_physical_dots_per_inch_changed(void* self, double dpi);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, double dpi)
///
void q_screen_on_physical_dots_per_inch_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
///
/// @param self QScreen*
/// @param dpi double
///
void q_screen_logical_dots_per_inch_changed(void* self, double dpi);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, double dpi)
///
void q_screen_on_logical_dots_per_inch_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
///
/// @param self QScreen*
/// @param rect QRect*
///
void q_screen_virtual_geometry_changed(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, QRect* rect)
///
void q_screen_on_virtual_geometry_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
///
/// @param self QScreen*
/// @param orientation enum Qt__ScreenOrientation
///
void q_screen_primary_orientation_changed(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, enum Qt__ScreenOrientation orientation)
///
void q_screen_on_primary_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
///
/// @param self QScreen*
/// @param orientation enum Qt__ScreenOrientation
///
void q_screen_orientation_changed(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, enum Qt__ScreenOrientation orientation)
///
void q_screen_on_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
///
/// @param self QScreen*
/// @param refreshRate double
///
void q_screen_refresh_rate_changed(void* self, double refreshRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, double refreshRate)
///
void q_screen_on_refresh_rate_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_screen_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_screen_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
/// @param window uintptr_t
///
QPixmap* q_screen_grab_window1(void* self, uintptr_t window);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
/// @param window uintptr_t
/// @param x int
///
QPixmap* q_screen_grab_window2(void* self, uintptr_t window, int x);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
/// @param window uintptr_t
/// @param x int
/// @param y int
///
QPixmap* q_screen_grab_window3(void* self, uintptr_t window, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
/// @param window uintptr_t
/// @param x int
/// @param y int
/// @param w int
///
QPixmap* q_screen_grab_window4(void* self, uintptr_t window, int x, int y, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// @param self QScreen*
/// @param window uintptr_t
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
QPixmap* q_screen_grab_window5(void* self, uintptr_t window, int x, int y, int w, int h);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QScreen*
/// @param event QEvent*
///
bool q_screen_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QScreen*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_screen_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScreen*
///
const char* q_screen_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScreen*
/// @param name const char*
///
void q_screen_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QScreen*
///
bool q_screen_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QScreen*
///
bool q_screen_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QScreen*
///
bool q_screen_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QScreen*
///
bool q_screen_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScreen*
/// @param b bool
///
bool q_screen_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QScreen*
///
QThread* q_screen_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScreen*
/// @param thread QThread*
///
bool q_screen_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreen*
/// @param interval int
///
int32_t q_screen_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreen*
/// @param time int64_t of nanoseconds
///
int32_t q_screen_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScreen*
/// @param id int
///
void q_screen_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScreen*
/// @param id enum Qt__TimerId
///
void q_screen_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QScreen*
///
/// @return libqt_list of QObject*
///
libqt_list q_screen_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScreen*
/// @param parent QObject*
///
void q_screen_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScreen*
/// @param filterObj QObject*
///
void q_screen_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScreen*
/// @param obj QObject*
///
void q_screen_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_screen_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_screen_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScreen*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_screen_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screen_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_screen_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
///
bool q_screen_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
/// @param receiver QObject*
///
bool q_screen_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_screen_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QScreen*
///
void q_screen_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QScreen*
///
void q_screen_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScreen*
/// @param name const char*
/// @param value QVariant*
///
bool q_screen_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QScreen*
/// @param name const char*
///
QVariant* q_screen_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QScreen*
///
const char** q_screen_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScreen*
///
QBindingStorage* q_screen_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QScreen*
///
const QBindingStorage* q_screen_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreen*
///
void q_screen_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self)
///
void q_screen_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QScreen*
///
QObject* q_screen_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QScreen*
/// @param classname const char*
///
bool q_screen_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScreen*
///
void q_screen_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreen*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_screen_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreen*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_screen_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_screen_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_screen_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScreen*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_screen_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
/// @param signal const char*
///
bool q_screen_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_screen_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screen_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScreen*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screen_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreen*
/// @param param1 QObject*
///
void q_screen_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, QObject* param1)
///
void q_screen_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScreen*
/// @param callback void func(QScreen* self, const char* objectName)
///
void q_screen_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#dtor.QScreen)
///
/// Delete this object from C++ memory.
///
/// @param self QScreen*
///
void q_screen_delete(void* self);

#endif
