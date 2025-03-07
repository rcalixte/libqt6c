#pragma once
#ifndef SRCQT6C_LIBQDATAWIDGETMAPPER_H
#define SRCQT6C_LIBQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QDataWidgetMapper* q_datawidgetmapper_new();
QDataWidgetMapper* q_datawidgetmapper_new2(void* parent);
QMetaObject* q_datawidgetmapper_meta_object(void* self);
void* q_datawidgetmapper_metacast(void* self, const char* param1);
int32_t q_datawidgetmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_datawidgetmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_datawidgetmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_datawidgetmapper_tr(const char* s);
void q_datawidgetmapper_set_model(void* self, void* model);
QAbstractItemModel* q_datawidgetmapper_model(void* self);
void q_datawidgetmapper_set_item_delegate(void* self, void* delegate);
QAbstractItemDelegate* q_datawidgetmapper_item_delegate(void* self);
void q_datawidgetmapper_set_root_index(void* self, void* index);
QModelIndex* q_datawidgetmapper_root_index(void* self);
void q_datawidgetmapper_set_orientation(void* self, int64_t aOrientation);
int64_t q_datawidgetmapper_orientation(void* self);
void q_datawidgetmapper_set_submit_policy(void* self, int64_t policy);
int64_t q_datawidgetmapper_submit_policy(void* self);
void q_datawidgetmapper_add_mapping(void* self, void* widget, int section);
void q_datawidgetmapper_add_mapping2(void* self, void* widget, int section, const char* propertyName);
void q_datawidgetmapper_remove_mapping(void* self, void* widget);
int32_t q_datawidgetmapper_mapped_section(void* self, void* widget);
char* q_datawidgetmapper_mapped_property_name(void* self, void* widget);
QWidget* q_datawidgetmapper_mapped_widget_at(void* self, int section);
void q_datawidgetmapper_clear_mapping(void* self);
int32_t q_datawidgetmapper_current_index(void* self);
void q_datawidgetmapper_revert(void* self);
bool q_datawidgetmapper_submit(void* self);
void q_datawidgetmapper_to_first(void* self);
void q_datawidgetmapper_to_last(void* self);
void q_datawidgetmapper_to_next(void* self);
void q_datawidgetmapper_to_previous(void* self);
void q_datawidgetmapper_set_current_index(void* self, int index);
void q_datawidgetmapper_on_set_current_index(void* self, void (*slot)(void*, int));
void q_datawidgetmapper_qbase_set_current_index(void* self, int index);
void q_datawidgetmapper_set_current_model_index(void* self, void* index);
void q_datawidgetmapper_current_index_changed(void* self, int index);
void q_datawidgetmapper_on_current_index_changed(void* self, void (*slot)(void*, int));
const char* q_datawidgetmapper_tr2(const char* s, const char* c);
const char* q_datawidgetmapper_tr3(const char* s, const char* c, int n);
const char* q_datawidgetmapper_object_name(void* self);
void q_datawidgetmapper_set_object_name(void* self, const char* name);
bool q_datawidgetmapper_is_widget_type(void* self);
bool q_datawidgetmapper_is_window_type(void* self);
bool q_datawidgetmapper_is_quick_item_type(void* self);
bool q_datawidgetmapper_signals_blocked(void* self);
bool q_datawidgetmapper_block_signals(void* self, bool b);
QThread* q_datawidgetmapper_thread(void* self);
void q_datawidgetmapper_move_to_thread(void* self, void* thread);
int32_t q_datawidgetmapper_start_timer(void* self, int interval);
void q_datawidgetmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_datawidgetmapper_children(void* self);
void q_datawidgetmapper_set_parent(void* self, void* parent);
void q_datawidgetmapper_install_event_filter(void* self, void* filterObj);
void q_datawidgetmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_datawidgetmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_datawidgetmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_datawidgetmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_datawidgetmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_datawidgetmapper_dump_object_tree(void* self);
void q_datawidgetmapper_dump_object_info(void* self);
bool q_datawidgetmapper_set_property(void* self, const char* name, void* value);
QVariant* q_datawidgetmapper_property(void* self, const char* name);
const char** q_datawidgetmapper_dynamic_property_names(void* self);
QBindingStorage* q_datawidgetmapper_binding_storage(void* self);
QBindingStorage* q_datawidgetmapper_binding_storage2(void* self);
void q_datawidgetmapper_destroyed(void* self);
void q_datawidgetmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_datawidgetmapper_parent(void* self);
bool q_datawidgetmapper_inherits(void* self, const char* classname);
void q_datawidgetmapper_delete_later(void* self);
int32_t q_datawidgetmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_datawidgetmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_datawidgetmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_datawidgetmapper_destroyed1(void* self, void* param1);
void q_datawidgetmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_datawidgetmapper_event(void* self, void* event);
bool q_datawidgetmapper_qbase_event(void* self, void* event);
void q_datawidgetmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_datawidgetmapper_event_filter(void* self, void* watched, void* event);
bool q_datawidgetmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_datawidgetmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_datawidgetmapper_timer_event(void* self, void* event);
void q_datawidgetmapper_qbase_timer_event(void* self, void* event);
void q_datawidgetmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_datawidgetmapper_child_event(void* self, void* event);
void q_datawidgetmapper_qbase_child_event(void* self, void* event);
void q_datawidgetmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_datawidgetmapper_custom_event(void* self, void* event);
void q_datawidgetmapper_qbase_custom_event(void* self, void* event);
void q_datawidgetmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_datawidgetmapper_connect_notify(void* self, void* signal);
void q_datawidgetmapper_qbase_connect_notify(void* self, void* signal);
void q_datawidgetmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_datawidgetmapper_disconnect_notify(void* self, void* signal);
void q_datawidgetmapper_qbase_disconnect_notify(void* self, void* signal);
void q_datawidgetmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_datawidgetmapper_sender(void* self);
QObject* q_datawidgetmapper_qbase_sender(void* self);
void q_datawidgetmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_datawidgetmapper_sender_signal_index(void* self);
int32_t q_datawidgetmapper_qbase_sender_signal_index(void* self);
void q_datawidgetmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_datawidgetmapper_receivers(void* self, const char* signal);
int32_t q_datawidgetmapper_qbase_receivers(void* self, const char* signal);
void q_datawidgetmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_datawidgetmapper_is_signal_connected(void* self, void* signal);
bool q_datawidgetmapper_qbase_is_signal_connected(void* self, void* signal);
void q_datawidgetmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_datawidgetmapper_delete(void* self);

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html#types

typedef enum {
    QDATAWIDGETMAPPER_SUBMITPOLICY_AUTOSUBMIT = 0,
    QDATAWIDGETMAPPER_SUBMITPOLICY_MANUALSUBMIT = 1
} QDataWidgetMapper__SubmitPolicy;

#endif
