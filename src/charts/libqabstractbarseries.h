#pragma once
#ifndef SRC_CHARTSQT6C_LIBQABSTRACTBARSERIES_H
#define SRC_CHARTSQT6C_LIBQABSTRACTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "libqbarset.h"
#include "../libqbindingstorage.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_abstractbarseries_meta_object(void* self);
void* q_abstractbarseries_metacast(void* self, const char* param1);
int32_t q_abstractbarseries_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractbarseries_tr(const char* s);
void q_abstractbarseries_set_bar_width(void* self, double width);
double q_abstractbarseries_bar_width(void* self);
bool q_abstractbarseries_append(void* self, void* set);
bool q_abstractbarseries_remove(void* self, void* set);
bool q_abstractbarseries_take(void* self, void* set);
bool q_abstractbarseries_append_with_sets(void* self, void* sets[]);
bool q_abstractbarseries_insert(void* self, int index, void* set);
int32_t q_abstractbarseries_count(void* self);
libqt_list /* of QBarSet* */ q_abstractbarseries_bar_sets(void* self);
void q_abstractbarseries_clear(void* self);
void q_abstractbarseries_set_labels_visible(void* self);
bool q_abstractbarseries_is_labels_visible(void* self);
void q_abstractbarseries_set_labels_format(void* self, const char* format);
const char* q_abstractbarseries_labels_format(void* self);
void q_abstractbarseries_set_labels_angle(void* self, double angle);
double q_abstractbarseries_labels_angle(void* self);
void q_abstractbarseries_set_labels_position(void* self, int64_t position);
int64_t q_abstractbarseries_labels_position(void* self);
void q_abstractbarseries_set_labels_precision(void* self, int precision);
int32_t q_abstractbarseries_labels_precision(void* self);
void q_abstractbarseries_clicked(void* self, int index, void* barset);
void q_abstractbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));
void q_abstractbarseries_hovered(void* self, bool status, int index, void* barset);
void q_abstractbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));
void q_abstractbarseries_pressed(void* self, int index, void* barset);
void q_abstractbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));
void q_abstractbarseries_released(void* self, int index, void* barset);
void q_abstractbarseries_on_released(void* self, void (*slot)(void*, int, void*));
void q_abstractbarseries_double_clicked(void* self, int index, void* barset);
void q_abstractbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));
void q_abstractbarseries_count_changed(void* self);
void q_abstractbarseries_on_count_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_labels_visible_changed(void* self);
void q_abstractbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_labels_format_changed(void* self, const char* format);
void q_abstractbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_abstractbarseries_labels_position_changed(void* self, int64_t position);
void q_abstractbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));
void q_abstractbarseries_labels_angle_changed(void* self, double angle);
void q_abstractbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));
void q_abstractbarseries_labels_precision_changed(void* self, int precision);
void q_abstractbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));
void q_abstractbarseries_barsets_added(void* self, void* sets[]);
void q_abstractbarseries_on_barsets_added(void* self, void (*slot)(void*, void*));
void q_abstractbarseries_barsets_removed(void* self, void* sets[]);
void q_abstractbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*));
const char* q_abstractbarseries_tr2(const char* s, const char* c);
const char* q_abstractbarseries_tr3(const char* s, const char* c, int n);
void q_abstractbarseries_set_labels_visible1(void* self, bool visible);
int64_t q_abstractbarseries_type(void* self);
void q_abstractbarseries_set_name(void* self, const char* name);
const char* q_abstractbarseries_name(void* self);
void q_abstractbarseries_set_visible(void* self);
bool q_abstractbarseries_is_visible(void* self);
double q_abstractbarseries_opacity(void* self);
void q_abstractbarseries_set_opacity(void* self, double opacity);
void q_abstractbarseries_set_use_open_g_l(void* self);
bool q_abstractbarseries_use_open_g_l(void* self);
QChart* q_abstractbarseries_chart(void* self);
bool q_abstractbarseries_attach_axis(void* self, void* axis);
bool q_abstractbarseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_abstractbarseries_attached_axes(void* self);
void q_abstractbarseries_show(void* self);
void q_abstractbarseries_hide(void* self);
void q_abstractbarseries_name_changed(void* self);
void q_abstractbarseries_on_name_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_visible_changed(void* self);
void q_abstractbarseries_on_visible_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_opacity_changed(void* self);
void q_abstractbarseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_use_open_g_l_changed(void* self);
void q_abstractbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_abstractbarseries_set_visible1(void* self, bool visible);
void q_abstractbarseries_set_use_open_g_l1(void* self, bool enable);
bool q_abstractbarseries_event(void* self, void* event);
bool q_abstractbarseries_event_filter(void* self, void* watched, void* event);
const char* q_abstractbarseries_object_name(void* self);
void q_abstractbarseries_set_object_name(void* self, const char* name);
bool q_abstractbarseries_is_widget_type(void* self);
bool q_abstractbarseries_is_window_type(void* self);
bool q_abstractbarseries_is_quick_item_type(void* self);
bool q_abstractbarseries_signals_blocked(void* self);
bool q_abstractbarseries_block_signals(void* self, bool b);
QThread* q_abstractbarseries_thread(void* self);
void q_abstractbarseries_move_to_thread(void* self, void* thread);
int32_t q_abstractbarseries_start_timer(void* self, int interval);
void q_abstractbarseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractbarseries_children(void* self);
void q_abstractbarseries_set_parent(void* self, void* parent);
void q_abstractbarseries_install_event_filter(void* self, void* filterObj);
void q_abstractbarseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractbarseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractbarseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractbarseries_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractbarseries_dump_object_tree(void* self);
void q_abstractbarseries_dump_object_info(void* self);
bool q_abstractbarseries_set_property(void* self, const char* name, void* value);
QVariant* q_abstractbarseries_property(void* self, const char* name);
const char** q_abstractbarseries_dynamic_property_names(void* self);
QBindingStorage* q_abstractbarseries_binding_storage(void* self);
QBindingStorage* q_abstractbarseries_binding_storage2(void* self);
void q_abstractbarseries_destroyed(void* self);
void q_abstractbarseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractbarseries_parent(void* self);
bool q_abstractbarseries_inherits(void* self, const char* classname);
void q_abstractbarseries_delete_later(void* self);
int32_t q_abstractbarseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractbarseries_destroyed1(void* self, void* param1);
void q_abstractbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_abstractbarseries_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractbarseries.html#types

typedef enum {
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSCENTER = 0,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEEND = 1,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEBASE = 2,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSOUTSIDEEND = 3
} QAbstractBarSeries__LabelsPosition;

#endif
