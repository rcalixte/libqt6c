#pragma once
#ifndef SRCQT6C_LIBQPOINTINGDEVICE_H
#define SRCQT6C_LIBQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqeventpoint.h"
#include "libqinputdevice.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(void* other);
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other);
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3();
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(void* param1);
void q_pointingdeviceuniqueid_copy_assign(void* self, void* other);
void q_pointingdeviceuniqueid_move_assign(void* self, void* other);
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(long long id);
bool q_pointingdeviceuniqueid_is_valid(void* self);
long long q_pointingdeviceuniqueid_numeric_id(void* self);
void q_pointingdeviceuniqueid_delete(void* self);

QPointingDevice* q_pointingdevice_new();
QPointingDevice* q_pointingdevice_new2(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount);
QPointingDevice* q_pointingdevice_new3(void* parent);
QPointingDevice* q_pointingdevice_new4(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName);
QPointingDevice* q_pointingdevice_new5(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId);
QPointingDevice* q_pointingdevice_new6(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent);
QMetaObject* q_pointingdevice_meta_object(void* self);
void* q_pointingdevice_metacast(void* self, const char* param1);
int32_t q_pointingdevice_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pointingdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pointingdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pointingdevice_tr(const char* s);
void q_pointingdevice_set_type(void* self, int64_t devType);
void q_pointingdevice_set_capabilities(void* self, int64_t caps);
void q_pointingdevice_set_maximum_touch_points(void* self, int c);
int64_t q_pointingdevice_pointer_type(void* self);
int32_t q_pointingdevice_maximum_points(void* self);
int32_t q_pointingdevice_button_count(void* self);
QPointingDeviceUniqueId* q_pointingdevice_unique_id(void* self);
QPointingDevice* q_pointingdevice_primary_pointing_device();
bool q_pointingdevice_operator_equal(void* self, void* other);
void q_pointingdevice_grab_changed(void* self, void* grabber, int64_t transition, void* event, void* point);
void q_pointingdevice_on_grab_changed(void* self, void (*slot)(void*, void*, int64_t, void*, void*));
const char* q_pointingdevice_tr2(const char* s, const char* c);
const char* q_pointingdevice_tr3(const char* s, const char* c, int n);
QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName);
const char* q_pointingdevice_name(void* self);
int64_t q_pointingdevice_type(void* self);
int64_t q_pointingdevice_capabilities(void* self);
bool q_pointingdevice_has_capability(void* self, int64_t cap);
long long q_pointingdevice_system_id(void* self);
const char* q_pointingdevice_seat_name(void* self);
QRect* q_pointingdevice_available_virtual_geometry(void* self);
const char** q_pointingdevice_seat_names();
libqt_list /* of QInputDevice* */ q_pointingdevice_devices();
QInputDevice* q_pointingdevice_primary_keyboard();
void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area);
void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*));
QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName);
const char* q_pointingdevice_object_name(void* self);
void q_pointingdevice_set_object_name(void* self, const char* name);
bool q_pointingdevice_is_widget_type(void* self);
bool q_pointingdevice_is_window_type(void* self);
bool q_pointingdevice_is_quick_item_type(void* self);
bool q_pointingdevice_signals_blocked(void* self);
bool q_pointingdevice_block_signals(void* self, bool b);
QThread* q_pointingdevice_thread(void* self);
void q_pointingdevice_move_to_thread(void* self, void* thread);
int32_t q_pointingdevice_start_timer(void* self, int interval);
void q_pointingdevice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pointingdevice_children(void* self);
void q_pointingdevice_set_parent(void* self, void* parent);
void q_pointingdevice_install_event_filter(void* self, void* filterObj);
void q_pointingdevice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pointingdevice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pointingdevice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pointingdevice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pointingdevice_disconnect_with_q_meta_object_connection(void* param1);
void q_pointingdevice_dump_object_tree(void* self);
void q_pointingdevice_dump_object_info(void* self);
bool q_pointingdevice_set_property(void* self, const char* name, void* value);
QVariant* q_pointingdevice_property(void* self, const char* name);
const char** q_pointingdevice_dynamic_property_names(void* self);
QBindingStorage* q_pointingdevice_binding_storage(void* self);
QBindingStorage* q_pointingdevice_binding_storage2(void* self);
void q_pointingdevice_destroyed(void* self);
void q_pointingdevice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pointingdevice_parent(void* self);
bool q_pointingdevice_inherits(void* self, const char* classname);
void q_pointingdevice_delete_later(void* self);
int32_t q_pointingdevice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pointingdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pointingdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pointingdevice_destroyed1(void* self, void* param1);
void q_pointingdevice_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_pointingdevice_event(void* self, void* event);
bool q_pointingdevice_qbase_event(void* self, void* event);
void q_pointingdevice_on_event(void* self, bool (*slot)(void*, void*));
bool q_pointingdevice_event_filter(void* self, void* watched, void* event);
bool q_pointingdevice_qbase_event_filter(void* self, void* watched, void* event);
void q_pointingdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pointingdevice_timer_event(void* self, void* event);
void q_pointingdevice_qbase_timer_event(void* self, void* event);
void q_pointingdevice_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pointingdevice_child_event(void* self, void* event);
void q_pointingdevice_qbase_child_event(void* self, void* event);
void q_pointingdevice_on_child_event(void* self, void (*slot)(void*, void*));
void q_pointingdevice_custom_event(void* self, void* event);
void q_pointingdevice_qbase_custom_event(void* self, void* event);
void q_pointingdevice_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pointingdevice_connect_notify(void* self, void* signal);
void q_pointingdevice_qbase_connect_notify(void* self, void* signal);
void q_pointingdevice_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pointingdevice_disconnect_notify(void* self, void* signal);
void q_pointingdevice_qbase_disconnect_notify(void* self, void* signal);
void q_pointingdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_pointingdevice_sender(void* self);
QObject* q_pointingdevice_qbase_sender(void* self);
void q_pointingdevice_on_sender(void* self, QObject* (*slot)());
int32_t q_pointingdevice_sender_signal_index(void* self);
int32_t q_pointingdevice_qbase_sender_signal_index(void* self);
void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pointingdevice_receivers(void* self, const char* signal);
int32_t q_pointingdevice_qbase_receivers(void* self, const char* signal);
void q_pointingdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pointingdevice_is_signal_connected(void* self, void* signal);
bool q_pointingdevice_qbase_is_signal_connected(void* self, void* signal);
void q_pointingdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pointingdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpointingdevice.html#types

typedef enum {
    QPOINTINGDEVICE_POINTERTYPE_UNKNOWN = 0,
    QPOINTINGDEVICE_POINTERTYPE_GENERIC = 1,
    QPOINTINGDEVICE_POINTERTYPE_FINGER = 2,
    QPOINTINGDEVICE_POINTERTYPE_PEN = 4,
    QPOINTINGDEVICE_POINTERTYPE_ERASER = 8,
    QPOINTINGDEVICE_POINTERTYPE_CURSOR = 16,
    QPOINTINGDEVICE_POINTERTYPE_ALLPOINTERTYPES = 32767
} QPointingDevice__PointerType;

typedef enum {
    QPOINTINGDEVICE_GRABTRANSITION_GRABPASSIVE = 1,
    QPOINTINGDEVICE_GRABTRANSITION_UNGRABPASSIVE = 2,
    QPOINTINGDEVICE_GRABTRANSITION_CANCELGRABPASSIVE = 3,
    QPOINTINGDEVICE_GRABTRANSITION_OVERRIDEGRABPASSIVE = 4,
    QPOINTINGDEVICE_GRABTRANSITION_GRABEXCLUSIVE = 16,
    QPOINTINGDEVICE_GRABTRANSITION_UNGRABEXCLUSIVE = 32,
    QPOINTINGDEVICE_GRABTRANSITION_CANCELGRABEXCLUSIVE = 48
} QPointingDevice__GrabTransition;

#endif
