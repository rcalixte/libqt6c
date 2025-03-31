#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
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
#include "libqxyseries.h"

QXYLegendMarker* q_xylegendmarker_new(void* series, void* legend);
QXYLegendMarker* q_xylegendmarker_new2(void* series, void* legend, void* parent);
QMetaObject* q_xylegendmarker_meta_object(void* self);
void* q_xylegendmarker_metacast(void* self, const char* param1);
int32_t q_xylegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);
void q_xylegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_xylegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_xylegendmarker_tr(const char* s);
int64_t q_xylegendmarker_type(void* self);
void q_xylegendmarker_on_type(void* self, int64_t (*slot)());
int64_t q_xylegendmarker_qbase_type(void* self);
QXYSeries* q_xylegendmarker_series(void* self);
void q_xylegendmarker_on_series(void* self, QXYSeries* (*slot)());
QXYSeries* q_xylegendmarker_qbase_series(void* self);
const char* q_xylegendmarker_tr2(const char* s, const char* c);
const char* q_xylegendmarker_tr3(const char* s, const char* c, int n);
const char* q_xylegendmarker_label(void* self);
void q_xylegendmarker_set_label(void* self, const char* label);
QBrush* q_xylegendmarker_label_brush(void* self);
void q_xylegendmarker_set_label_brush(void* self, void* brush);
QFont* q_xylegendmarker_font(void* self);
void q_xylegendmarker_set_font(void* self, void* font);
QPen* q_xylegendmarker_pen(void* self);
void q_xylegendmarker_set_pen(void* self, void* pen);
QBrush* q_xylegendmarker_brush(void* self);
void q_xylegendmarker_set_brush(void* self, void* brush);
bool q_xylegendmarker_is_visible(void* self);
void q_xylegendmarker_set_visible(void* self, bool visible);
int64_t q_xylegendmarker_shape(void* self);
void q_xylegendmarker_set_shape(void* self, int64_t shape);
void q_xylegendmarker_clicked(void* self);
void q_xylegendmarker_on_clicked(void* self, void (*slot)(void*));
void q_xylegendmarker_hovered(void* self, bool status);
void q_xylegendmarker_on_hovered(void* self, void (*slot)(void*, bool));
void q_xylegendmarker_label_changed(void* self);
void q_xylegendmarker_on_label_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_label_brush_changed(void* self);
void q_xylegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_font_changed(void* self);
void q_xylegendmarker_on_font_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_pen_changed(void* self);
void q_xylegendmarker_on_pen_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_brush_changed(void* self);
void q_xylegendmarker_on_brush_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_visible_changed(void* self);
void q_xylegendmarker_on_visible_changed(void* self, void (*slot)(void*));
void q_xylegendmarker_shape_changed(void* self);
void q_xylegendmarker_on_shape_changed(void* self, void (*slot)(void*));
const char* q_xylegendmarker_object_name(void* self);
void q_xylegendmarker_set_object_name(void* self, const char* name);
bool q_xylegendmarker_is_widget_type(void* self);
bool q_xylegendmarker_is_window_type(void* self);
bool q_xylegendmarker_is_quick_item_type(void* self);
bool q_xylegendmarker_signals_blocked(void* self);
bool q_xylegendmarker_block_signals(void* self, bool b);
QThread* q_xylegendmarker_thread(void* self);
void q_xylegendmarker_move_to_thread(void* self, void* thread);
int32_t q_xylegendmarker_start_timer(void* self, int interval);
void q_xylegendmarker_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_xylegendmarker_children(void* self);
void q_xylegendmarker_set_parent(void* self, void* parent);
void q_xylegendmarker_install_event_filter(void* self, void* filterObj);
void q_xylegendmarker_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_xylegendmarker_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_xylegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_xylegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_xylegendmarker_disconnect_with_q_meta_object_connection(void* param1);
void q_xylegendmarker_dump_object_tree(void* self);
void q_xylegendmarker_dump_object_info(void* self);
bool q_xylegendmarker_set_property(void* self, const char* name, void* value);
QVariant* q_xylegendmarker_property(void* self, const char* name);
const char** q_xylegendmarker_dynamic_property_names(void* self);
QBindingStorage* q_xylegendmarker_binding_storage(void* self);
QBindingStorage* q_xylegendmarker_binding_storage2(void* self);
void q_xylegendmarker_destroyed(void* self);
void q_xylegendmarker_on_destroyed(void* self, void (*slot)(void*));
QObject* q_xylegendmarker_parent(void* self);
bool q_xylegendmarker_inherits(void* self, const char* classname);
void q_xylegendmarker_delete_later(void* self);
int32_t q_xylegendmarker_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_xylegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_xylegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_xylegendmarker_destroyed1(void* self, void* param1);
void q_xylegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_xylegendmarker_event(void* self, void* event);
bool q_xylegendmarker_qbase_event(void* self, void* event);
void q_xylegendmarker_on_event(void* self, bool (*slot)(void*, void*));
bool q_xylegendmarker_event_filter(void* self, void* watched, void* event);
bool q_xylegendmarker_qbase_event_filter(void* self, void* watched, void* event);
void q_xylegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_xylegendmarker_timer_event(void* self, void* event);
void q_xylegendmarker_qbase_timer_event(void* self, void* event);
void q_xylegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));
void q_xylegendmarker_child_event(void* self, void* event);
void q_xylegendmarker_qbase_child_event(void* self, void* event);
void q_xylegendmarker_on_child_event(void* self, void (*slot)(void*, void*));
void q_xylegendmarker_custom_event(void* self, void* event);
void q_xylegendmarker_qbase_custom_event(void* self, void* event);
void q_xylegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));
void q_xylegendmarker_connect_notify(void* self, void* signal);
void q_xylegendmarker_qbase_connect_notify(void* self, void* signal);
void q_xylegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_xylegendmarker_disconnect_notify(void* self, void* signal);
void q_xylegendmarker_qbase_disconnect_notify(void* self, void* signal);
void q_xylegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_xylegendmarker_sender(void* self);
QObject* q_xylegendmarker_qbase_sender(void* self);
void q_xylegendmarker_on_sender(void* self, QObject* (*slot)());
int32_t q_xylegendmarker_sender_signal_index(void* self);
int32_t q_xylegendmarker_qbase_sender_signal_index(void* self);
void q_xylegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_xylegendmarker_receivers(void* self, const char* signal);
int32_t q_xylegendmarker_qbase_receivers(void* self, const char* signal);
void q_xylegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_xylegendmarker_is_signal_connected(void* self, void* signal);
bool q_xylegendmarker_qbase_is_signal_connected(void* self, void* signal);
void q_xylegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_xylegendmarker_delete(void* self);

#endif
