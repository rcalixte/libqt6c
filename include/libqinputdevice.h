#pragma once
#ifndef SRCQT6C_LIBQINPUTDEVICE_H
#define SRCQT6C_LIBQINPUTDEVICE_H

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
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QInputDevice* q_inputdevice_new();
QInputDevice* q_inputdevice_new2(const char* name, long long systemId, int64_t typeVal);
QInputDevice* q_inputdevice_new3(void* parent);
QInputDevice* q_inputdevice_new4(const char* name, long long systemId, int64_t typeVal, const char* seatName);
QInputDevice* q_inputdevice_new5(const char* name, long long systemId, int64_t typeVal, const char* seatName, void* parent);
QMetaObject* q_inputdevice_meta_object(void* self);
void* q_inputdevice_metacast(void* self, const char* param1);
int32_t q_inputdevice_metacall(void* self, int64_t param1, int param2, void* param3);
void q_inputdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_inputdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_inputdevice_tr(const char* s);
const char* q_inputdevice_name(void* self);
int64_t q_inputdevice_type(void* self);
int64_t q_inputdevice_capabilities(void* self);
bool q_inputdevice_has_capability(void* self, int64_t cap);
long long q_inputdevice_system_id(void* self);
const char* q_inputdevice_seat_name(void* self);
QRect* q_inputdevice_available_virtual_geometry(void* self);
const char** q_inputdevice_seat_names();
libqt_list /* of QInputDevice* */ q_inputdevice_devices();
QInputDevice* q_inputdevice_primary_keyboard();
bool q_inputdevice_operator_equal(void* self, void* other);
void q_inputdevice_available_virtual_geometry_changed(void* self, void* area);
void q_inputdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*));
const char* q_inputdevice_tr2(const char* s, const char* c);
const char* q_inputdevice_tr3(const char* s, const char* c, int n);
QInputDevice* q_inputdevice_primary_keyboard1(const char* seatName);
const char* q_inputdevice_object_name(void* self);
void q_inputdevice_set_object_name(void* self, const char* name);
bool q_inputdevice_is_widget_type(void* self);
bool q_inputdevice_is_window_type(void* self);
bool q_inputdevice_is_quick_item_type(void* self);
bool q_inputdevice_signals_blocked(void* self);
bool q_inputdevice_block_signals(void* self, bool b);
QThread* q_inputdevice_thread(void* self);
void q_inputdevice_move_to_thread(void* self, void* thread);
int32_t q_inputdevice_start_timer(void* self, int interval);
void q_inputdevice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_inputdevice_children(void* self);
void q_inputdevice_set_parent(void* self, void* parent);
void q_inputdevice_install_event_filter(void* self, void* filterObj);
void q_inputdevice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_inputdevice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_inputdevice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_inputdevice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_inputdevice_disconnect_with_q_meta_object_connection(void* param1);
void q_inputdevice_dump_object_tree(void* self);
void q_inputdevice_dump_object_info(void* self);
bool q_inputdevice_set_property(void* self, const char* name, void* value);
QVariant* q_inputdevice_property(void* self, const char* name);
const char** q_inputdevice_dynamic_property_names(void* self);
QBindingStorage* q_inputdevice_binding_storage(void* self);
QBindingStorage* q_inputdevice_binding_storage2(void* self);
void q_inputdevice_destroyed(void* self);
void q_inputdevice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_inputdevice_parent(void* self);
bool q_inputdevice_inherits(void* self, const char* classname);
void q_inputdevice_delete_later(void* self);
int32_t q_inputdevice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_inputdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_inputdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_inputdevice_destroyed1(void* self, void* param1);
void q_inputdevice_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_inputdevice_event(void* self, void* event);
bool q_inputdevice_qbase_event(void* self, void* event);
void q_inputdevice_on_event(void* self, bool (*slot)(void*, void*));
bool q_inputdevice_event_filter(void* self, void* watched, void* event);
bool q_inputdevice_qbase_event_filter(void* self, void* watched, void* event);
void q_inputdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_inputdevice_timer_event(void* self, void* event);
void q_inputdevice_qbase_timer_event(void* self, void* event);
void q_inputdevice_on_timer_event(void* self, void (*slot)(void*, void*));
void q_inputdevice_child_event(void* self, void* event);
void q_inputdevice_qbase_child_event(void* self, void* event);
void q_inputdevice_on_child_event(void* self, void (*slot)(void*, void*));
void q_inputdevice_custom_event(void* self, void* event);
void q_inputdevice_qbase_custom_event(void* self, void* event);
void q_inputdevice_on_custom_event(void* self, void (*slot)(void*, void*));
void q_inputdevice_connect_notify(void* self, void* signal);
void q_inputdevice_qbase_connect_notify(void* self, void* signal);
void q_inputdevice_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_inputdevice_disconnect_notify(void* self, void* signal);
void q_inputdevice_qbase_disconnect_notify(void* self, void* signal);
void q_inputdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_inputdevice_sender(void* self);
QObject* q_inputdevice_qbase_sender(void* self);
void q_inputdevice_on_sender(void* self, QObject* (*slot)());
int32_t q_inputdevice_sender_signal_index(void* self);
int32_t q_inputdevice_qbase_sender_signal_index(void* self);
void q_inputdevice_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_inputdevice_receivers(void* self, const char* signal);
int32_t q_inputdevice_qbase_receivers(void* self, const char* signal);
void q_inputdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_inputdevice_is_signal_connected(void* self, void* signal);
bool q_inputdevice_qbase_is_signal_connected(void* self, void* signal);
void q_inputdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_inputdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qinputdevice.html#types

typedef enum {
    QINPUTDEVICE_DEVICETYPE_UNKNOWN = 0,
    QINPUTDEVICE_DEVICETYPE_MOUSE = 1,
    QINPUTDEVICE_DEVICETYPE_TOUCHSCREEN = 2,
    QINPUTDEVICE_DEVICETYPE_TOUCHPAD = 4,
    QINPUTDEVICE_DEVICETYPE_PUCK = 8,
    QINPUTDEVICE_DEVICETYPE_STYLUS = 16,
    QINPUTDEVICE_DEVICETYPE_AIRBRUSH = 32,
    QINPUTDEVICE_DEVICETYPE_KEYBOARD = 4096,
    QINPUTDEVICE_DEVICETYPE_ALLDEVICES = 2147483647
} QInputDevice__DeviceType;

typedef enum {
    QINPUTDEVICE_CAPABILITY_NONE = 0,
    QINPUTDEVICE_CAPABILITY_POSITION = 1,
    QINPUTDEVICE_CAPABILITY_AREA = 2,
    QINPUTDEVICE_CAPABILITY_PRESSURE = 4,
    QINPUTDEVICE_CAPABILITY_VELOCITY = 8,
    QINPUTDEVICE_CAPABILITY_NORMALIZEDPOSITION = 32,
    QINPUTDEVICE_CAPABILITY_MOUSEEMULATION = 64,
    QINPUTDEVICE_CAPABILITY_PIXELSCROLL = 128,
    QINPUTDEVICE_CAPABILITY_SCROLL = 256,
    QINPUTDEVICE_CAPABILITY_HOVER = 512,
    QINPUTDEVICE_CAPABILITY_ROTATION = 1024,
    QINPUTDEVICE_CAPABILITY_XTILT = 2048,
    QINPUTDEVICE_CAPABILITY_YTILT = 4096,
    QINPUTDEVICE_CAPABILITY_TANGENTIALPRESSURE = 8192,
    QINPUTDEVICE_CAPABILITY_ZPOSITION = 16384,
    QINPUTDEVICE_CAPABILITY_ALL = 2147483647
} QInputDevice__Capability;

#endif
