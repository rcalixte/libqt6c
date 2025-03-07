#pragma once
#ifndef SRCQT6C_LIBQSCREEN_H
#define SRCQT6C_LIBQSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"

QMetaObject* q_screen_meta_object(void* self);
void* q_screen_metacast(void* self, const char* param1);
int32_t q_screen_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_screen_tr(const char* s);
const char* q_screen_name(void* self);
const char* q_screen_manufacturer(void* self);
const char* q_screen_model(void* self);
const char* q_screen_serial_number(void* self);
int32_t q_screen_depth(void* self);
QSize* q_screen_size(void* self);
QRect* q_screen_geometry(void* self);
QSizeF* q_screen_physical_size(void* self);
double q_screen_physical_dots_per_inch_x(void* self);
double q_screen_physical_dots_per_inch_y(void* self);
double q_screen_physical_dots_per_inch(void* self);
double q_screen_logical_dots_per_inch_x(void* self);
double q_screen_logical_dots_per_inch_y(void* self);
double q_screen_logical_dots_per_inch(void* self);
double q_screen_device_pixel_ratio(void* self);
QSize* q_screen_available_size(void* self);
QRect* q_screen_available_geometry(void* self);
libqt_list /* of QScreen* */ q_screen_virtual_siblings(void* self);
QScreen* q_screen_virtual_sibling_at(void* self, void* point);
QSize* q_screen_virtual_size(void* self);
QRect* q_screen_virtual_geometry(void* self);
QSize* q_screen_available_virtual_size(void* self);
QRect* q_screen_available_virtual_geometry(void* self);
int64_t q_screen_primary_orientation(void* self);
int64_t q_screen_orientation(void* self);
int64_t q_screen_native_orientation(void* self);
int32_t q_screen_angle_between(void* self, int64_t a, int64_t b);
QTransform* q_screen_transform_between(void* self, int64_t a, int64_t b, void* target);
QRect* q_screen_map_between(void* self, int64_t a, int64_t b, void* rect);
bool q_screen_is_portrait(void* self, int64_t orientation);
bool q_screen_is_landscape(void* self, int64_t orientation);
QPixmap* q_screen_grab_window(void* self);
double q_screen_refresh_rate(void* self);
void q_screen_geometry_changed(void* self, void* geometry);
void q_screen_on_geometry_changed(void* self, void (*slot)(void*, void*));
void q_screen_available_geometry_changed(void* self, void* geometry);
void q_screen_on_available_geometry_changed(void* self, void (*slot)(void*, void*));
void q_screen_physical_size_changed(void* self, void* size);
void q_screen_on_physical_size_changed(void* self, void (*slot)(void*, void*));
void q_screen_physical_dots_per_inch_changed(void* self, double dpi);
void q_screen_on_physical_dots_per_inch_changed(void* self, void (*slot)(void*, double));
void q_screen_logical_dots_per_inch_changed(void* self, double dpi);
void q_screen_on_logical_dots_per_inch_changed(void* self, void (*slot)(void*, double));
void q_screen_virtual_geometry_changed(void* self, void* rect);
void q_screen_on_virtual_geometry_changed(void* self, void (*slot)(void*, void*));
void q_screen_primary_orientation_changed(void* self, int64_t orientation);
void q_screen_on_primary_orientation_changed(void* self, void (*slot)(void*, int64_t));
void q_screen_orientation_changed(void* self, int64_t orientation);
void q_screen_on_orientation_changed(void* self, void (*slot)(void*, int64_t));
void q_screen_refresh_rate_changed(void* self, double refreshRate);
void q_screen_on_refresh_rate_changed(void* self, void (*slot)(void*, double));
const char* q_screen_tr2(const char* s, const char* c);
const char* q_screen_tr3(const char* s, const char* c, int n);
QPixmap* q_screen_grab_window1(void* self, uintptr_t window);
QPixmap* q_screen_grab_window2(void* self, uintptr_t window, int x);
QPixmap* q_screen_grab_window3(void* self, uintptr_t window, int x, int y);
QPixmap* q_screen_grab_window4(void* self, uintptr_t window, int x, int y, int w);
QPixmap* q_screen_grab_window5(void* self, uintptr_t window, int x, int y, int w, int h);
bool q_screen_event(void* self, void* event);
bool q_screen_event_filter(void* self, void* watched, void* event);
const char* q_screen_object_name(void* self);
void q_screen_set_object_name(void* self, const char* name);
bool q_screen_is_widget_type(void* self);
bool q_screen_is_window_type(void* self);
bool q_screen_is_quick_item_type(void* self);
bool q_screen_signals_blocked(void* self);
bool q_screen_block_signals(void* self, bool b);
QThread* q_screen_thread(void* self);
void q_screen_move_to_thread(void* self, void* thread);
int32_t q_screen_start_timer(void* self, int interval);
void q_screen_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_screen_children(void* self);
void q_screen_set_parent(void* self, void* parent);
void q_screen_install_event_filter(void* self, void* filterObj);
void q_screen_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_screen_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_screen_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_screen_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_screen_disconnect_with_q_meta_object_connection(void* param1);
void q_screen_dump_object_tree(void* self);
void q_screen_dump_object_info(void* self);
bool q_screen_set_property(void* self, const char* name, void* value);
QVariant* q_screen_property(void* self, const char* name);
const char** q_screen_dynamic_property_names(void* self);
QBindingStorage* q_screen_binding_storage(void* self);
QBindingStorage* q_screen_binding_storage2(void* self);
void q_screen_destroyed(void* self);
void q_screen_on_destroyed(void* self, void (*slot)(void*));
QObject* q_screen_parent(void* self);
bool q_screen_inherits(void* self, const char* classname);
void q_screen_delete_later(void* self);
int32_t q_screen_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_screen_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_screen_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_screen_destroyed1(void* self, void* param1);
void q_screen_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_screen_delete(void* self);

#endif
