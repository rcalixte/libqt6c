#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxplotseries.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqfont.h"
#include "libqlegend.h"
#include "libqlegendmarker.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QBoxPlotLegendMarker* q_boxplotlegendmarker_new(void* series, void* legend);
QBoxPlotLegendMarker* q_boxplotlegendmarker_new2(void* series, void* legend, void* parent);
QMetaObject* q_boxplotlegendmarker_meta_object(void* self);
void* q_boxplotlegendmarker_metacast(void* self, const char* param1);
int32_t q_boxplotlegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);
void q_boxplotlegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_boxplotlegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_boxplotlegendmarker_tr(const char* s);
int64_t q_boxplotlegendmarker_type(void* self);
void q_boxplotlegendmarker_on_type(void* self, int64_t (*slot)());
int64_t q_boxplotlegendmarker_qbase_type(void* self);
QBoxPlotSeries* q_boxplotlegendmarker_series(void* self);
void q_boxplotlegendmarker_on_series(void* self, QBoxPlotSeries* (*slot)());
QBoxPlotSeries* q_boxplotlegendmarker_qbase_series(void* self);
const char* q_boxplotlegendmarker_tr2(const char* s, const char* c);
const char* q_boxplotlegendmarker_tr3(const char* s, const char* c, int n);
const char* q_boxplotlegendmarker_label(void* self);
void q_boxplotlegendmarker_set_label(void* self, const char* label);
QBrush* q_boxplotlegendmarker_label_brush(void* self);
void q_boxplotlegendmarker_set_label_brush(void* self, void* brush);
QFont* q_boxplotlegendmarker_font(void* self);
void q_boxplotlegendmarker_set_font(void* self, void* font);
QPen* q_boxplotlegendmarker_pen(void* self);
void q_boxplotlegendmarker_set_pen(void* self, void* pen);
QBrush* q_boxplotlegendmarker_brush(void* self);
void q_boxplotlegendmarker_set_brush(void* self, void* brush);
bool q_boxplotlegendmarker_is_visible(void* self);
void q_boxplotlegendmarker_set_visible(void* self, bool visible);
int64_t q_boxplotlegendmarker_shape(void* self);
void q_boxplotlegendmarker_set_shape(void* self, int64_t shape);
void q_boxplotlegendmarker_clicked(void* self);
void q_boxplotlegendmarker_on_clicked(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_hovered(void* self, bool status);
void q_boxplotlegendmarker_on_hovered(void* self, void (*slot)(void*, bool));
void q_boxplotlegendmarker_label_changed(void* self);
void q_boxplotlegendmarker_on_label_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_label_brush_changed(void* self);
void q_boxplotlegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_font_changed(void* self);
void q_boxplotlegendmarker_on_font_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_pen_changed(void* self);
void q_boxplotlegendmarker_on_pen_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_brush_changed(void* self);
void q_boxplotlegendmarker_on_brush_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_visible_changed(void* self);
void q_boxplotlegendmarker_on_visible_changed(void* self, void (*slot)(void*));
void q_boxplotlegendmarker_shape_changed(void* self);
void q_boxplotlegendmarker_on_shape_changed(void* self, void (*slot)(void*));
const char* q_boxplotlegendmarker_object_name(void* self);
void q_boxplotlegendmarker_set_object_name(void* self, const char* name);
bool q_boxplotlegendmarker_is_widget_type(void* self);
bool q_boxplotlegendmarker_is_window_type(void* self);
bool q_boxplotlegendmarker_is_quick_item_type(void* self);
bool q_boxplotlegendmarker_signals_blocked(void* self);
bool q_boxplotlegendmarker_block_signals(void* self, bool b);
QThread* q_boxplotlegendmarker_thread(void* self);
void q_boxplotlegendmarker_move_to_thread(void* self, void* thread);
int32_t q_boxplotlegendmarker_start_timer(void* self, int interval);
void q_boxplotlegendmarker_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_boxplotlegendmarker_children(void* self);
void q_boxplotlegendmarker_set_parent(void* self, void* parent);
void q_boxplotlegendmarker_install_event_filter(void* self, void* filterObj);
void q_boxplotlegendmarker_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_boxplotlegendmarker_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_boxplotlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_boxplotlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_boxplotlegendmarker_disconnect_with_q_meta_object_connection(void* param1);
void q_boxplotlegendmarker_dump_object_tree(void* self);
void q_boxplotlegendmarker_dump_object_info(void* self);
bool q_boxplotlegendmarker_set_property(void* self, const char* name, void* value);
QVariant* q_boxplotlegendmarker_property(void* self, const char* name);
const char** q_boxplotlegendmarker_dynamic_property_names(void* self);
QBindingStorage* q_boxplotlegendmarker_binding_storage(void* self);
QBindingStorage* q_boxplotlegendmarker_binding_storage2(void* self);
void q_boxplotlegendmarker_destroyed(void* self);
void q_boxplotlegendmarker_on_destroyed(void* self, void (*slot)(void*));
QObject* q_boxplotlegendmarker_parent(void* self);
bool q_boxplotlegendmarker_inherits(void* self, const char* classname);
void q_boxplotlegendmarker_delete_later(void* self);
int32_t q_boxplotlegendmarker_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_boxplotlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_boxplotlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_boxplotlegendmarker_destroyed1(void* self, void* param1);
void q_boxplotlegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_boxplotlegendmarker_event(void* self, void* event);
bool q_boxplotlegendmarker_qbase_event(void* self, void* event);
void q_boxplotlegendmarker_on_event(void* self, bool (*slot)(void*, void*));
bool q_boxplotlegendmarker_event_filter(void* self, void* watched, void* event);
bool q_boxplotlegendmarker_qbase_event_filter(void* self, void* watched, void* event);
void q_boxplotlegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_boxplotlegendmarker_timer_event(void* self, void* event);
void q_boxplotlegendmarker_qbase_timer_event(void* self, void* event);
void q_boxplotlegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));
void q_boxplotlegendmarker_child_event(void* self, void* event);
void q_boxplotlegendmarker_qbase_child_event(void* self, void* event);
void q_boxplotlegendmarker_on_child_event(void* self, void (*slot)(void*, void*));
void q_boxplotlegendmarker_custom_event(void* self, void* event);
void q_boxplotlegendmarker_qbase_custom_event(void* self, void* event);
void q_boxplotlegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));
void q_boxplotlegendmarker_connect_notify(void* self, void* signal);
void q_boxplotlegendmarker_qbase_connect_notify(void* self, void* signal);
void q_boxplotlegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_boxplotlegendmarker_disconnect_notify(void* self, void* signal);
void q_boxplotlegendmarker_qbase_disconnect_notify(void* self, void* signal);
void q_boxplotlegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_boxplotlegendmarker_sender(void* self);
QObject* q_boxplotlegendmarker_qbase_sender(void* self);
void q_boxplotlegendmarker_on_sender(void* self, QObject* (*slot)());
int32_t q_boxplotlegendmarker_sender_signal_index(void* self);
int32_t q_boxplotlegendmarker_qbase_sender_signal_index(void* self);
void q_boxplotlegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_boxplotlegendmarker_receivers(void* self, const char* signal);
int32_t q_boxplotlegendmarker_qbase_receivers(void* self, const char* signal);
void q_boxplotlegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_boxplotlegendmarker_is_signal_connected(void* self, void* signal);
bool q_boxplotlegendmarker_qbase_is_signal_connected(void* self, void* signal);
void q_boxplotlegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_boxplotlegendmarker_delete(void* self);

#endif
