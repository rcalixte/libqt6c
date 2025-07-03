#pragma once
#ifndef SRCQT6C_LIBQSCREEN_H
#define SRCQT6C_LIBQSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqtransform.h"

/// https://doc.qt.io/qt-6/qscreen.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScreen* self ```
const QMetaObject* q_screen_meta_object(void* self);

/// ``` QScreen* self, const char* param1 ```
void* q_screen_metacast(void* self, const char* param1);

/// ``` QScreen* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_screen_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_screen_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#name)
///
/// ``` QScreen* self ```
const char* q_screen_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
///
/// ``` QScreen* self ```
const char* q_screen_manufacturer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#model)
///
/// ``` QScreen* self ```
const char* q_screen_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
///
/// ``` QScreen* self ```
const char* q_screen_serial_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#depth)
///
/// ``` QScreen* self ```
int32_t q_screen_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#size)
///
/// ``` QScreen* self ```
QSize* q_screen_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometry)
///
/// ``` QScreen* self ```
QRect* q_screen_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
///
/// ``` QScreen* self ```
QSizeF* q_screen_physical_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
///
/// ``` QScreen* self ```
double q_screen_physical_dots_per_inch_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
///
/// ``` QScreen* self ```
double q_screen_physical_dots_per_inch_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
///
/// ``` QScreen* self ```
double q_screen_physical_dots_per_inch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
///
/// ``` QScreen* self ```
double q_screen_logical_dots_per_inch_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
///
/// ``` QScreen* self ```
double q_screen_logical_dots_per_inch_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
///
/// ``` QScreen* self ```
double q_screen_logical_dots_per_inch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
///
/// ``` QScreen* self ```
double q_screen_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableSize)
///
/// ``` QScreen* self ```
QSize* q_screen_available_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
///
/// ``` QScreen* self ```
QRect* q_screen_available_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
///
/// ``` QScreen* self ```
libqt_list /* of QScreen* */ q_screen_virtual_siblings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
///
/// ``` QScreen* self, QPoint* point ```
QScreen* q_screen_virtual_sibling_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
///
/// ``` QScreen* self ```
QSize* q_screen_virtual_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
///
/// ``` QScreen* self ```
QRect* q_screen_virtual_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
///
/// ``` QScreen* self ```
QSize* q_screen_available_virtual_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
///
/// ``` QScreen* self ```
QRect* q_screen_available_virtual_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
///
/// ``` QScreen* self ```
int64_t q_screen_primary_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientation)
///
/// ``` QScreen* self ```
int64_t q_screen_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
///
/// ``` QScreen* self ```
int64_t q_screen_native_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation a, enum Qt__ScreenOrientation b ```
int32_t q_screen_angle_between(void* self, int64_t a, int64_t b);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation a, enum Qt__ScreenOrientation b, QRect* target ```
QTransform* q_screen_transform_between(void* self, int64_t a, int64_t b, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation a, enum Qt__ScreenOrientation b, QRect* rect ```
QRect* q_screen_map_between(void* self, int64_t a, int64_t b, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation orientation ```
bool q_screen_is_portrait(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation orientation ```
bool q_screen_is_landscape(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self ```
QPixmap* q_screen_grab_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
///
/// ``` QScreen* self ```
double q_screen_refresh_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
///
/// ``` QScreen* self, QRect* geometry ```
void q_screen_geometry_changed(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, QRect*) ```
void q_screen_on_geometry_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
///
/// ``` QScreen* self, QRect* geometry ```
void q_screen_available_geometry_changed(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, QRect*) ```
void q_screen_on_available_geometry_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
///
/// ``` QScreen* self, QSizeF* size ```
void q_screen_physical_size_changed(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, QSizeF*) ```
void q_screen_on_physical_size_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
///
/// ``` QScreen* self, double dpi ```
void q_screen_physical_dots_per_inch_changed(void* self, double dpi);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, double) ```
void q_screen_on_physical_dots_per_inch_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
///
/// ``` QScreen* self, double dpi ```
void q_screen_logical_dots_per_inch_changed(void* self, double dpi);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, double) ```
void q_screen_on_logical_dots_per_inch_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
///
/// ``` QScreen* self, QRect* rect ```
void q_screen_virtual_geometry_changed(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, QRect*) ```
void q_screen_on_virtual_geometry_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation orientation ```
void q_screen_primary_orientation_changed(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, enum Qt__ScreenOrientation) ```
void q_screen_on_primary_orientation_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
///
/// ``` QScreen* self, enum Qt__ScreenOrientation orientation ```
void q_screen_orientation_changed(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, enum Qt__ScreenOrientation) ```
void q_screen_on_orientation_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
///
/// ``` QScreen* self, double refreshRate ```
void q_screen_refresh_rate_changed(void* self, double refreshRate);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
///
/// ``` QScreen* self, void (*slot)(QScreen*, double) ```
void q_screen_on_refresh_rate_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_screen_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_screen_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self, uintptr_t window ```
QPixmap* q_screen_grab_window1(void* self, uintptr_t window);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self, uintptr_t window, int x ```
QPixmap* q_screen_grab_window2(void* self, uintptr_t window, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self, uintptr_t window, int x, int y ```
QPixmap* q_screen_grab_window3(void* self, uintptr_t window, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self, uintptr_t window, int x, int y, int w ```
QPixmap* q_screen_grab_window4(void* self, uintptr_t window, int x, int y, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
///
/// ``` QScreen* self, uintptr_t window, int x, int y, int w, int h ```
QPixmap* q_screen_grab_window5(void* self, uintptr_t window, int x, int y, int w, int h);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QScreen* self, QEvent* event ```
bool q_screen_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QScreen* self, QObject* watched, QEvent* event ```
bool q_screen_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScreen* self ```
const char* q_screen_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScreen* self, char* name ```
void q_screen_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScreen* self ```
bool q_screen_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScreen* self ```
bool q_screen_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScreen* self ```
bool q_screen_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScreen* self ```
bool q_screen_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScreen* self, bool b ```
bool q_screen_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScreen* self ```
QThread* q_screen_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScreen* self, QThread* thread ```
void q_screen_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScreen* self, int interval ```
int32_t q_screen_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScreen* self, int id ```
void q_screen_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScreen* self ```
libqt_list /* of QObject* */ q_screen_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScreen* self, QObject* parent ```
void q_screen_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScreen* self, QObject* filterObj ```
void q_screen_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScreen* self, QObject* obj ```
void q_screen_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_screen_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScreen* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_screen_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_screen_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_screen_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScreen* self ```
void q_screen_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScreen* self ```
void q_screen_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScreen* self, const char* name, QVariant* value ```
bool q_screen_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScreen* self, const char* name ```
QVariant* q_screen_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScreen* self ```
const char** q_screen_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScreen* self ```
QBindingStorage* q_screen_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScreen* self ```
const QBindingStorage* q_screen_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreen* self ```
void q_screen_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreen* self, void (*slot)(QObject*) ```
void q_screen_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScreen* self ```
QObject* q_screen_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScreen* self, const char* classname ```
bool q_screen_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScreen* self ```
void q_screen_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScreen* self, int interval, enum Qt__TimerType timerType ```
int32_t q_screen_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_screen_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScreen* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_screen_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreen* self, QObject* param1 ```
void q_screen_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreen* self, void (*slot)(QObject*, QObject*) ```
void q_screen_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QScreen* self, void (*slot)(QObject*, const char*) ```
void q_screen_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#dtor.QScreen)
///
/// Delete this object from C++ memory.
///
/// ``` QScreen* self ```
void q_screen_delete(void* self);

#endif
