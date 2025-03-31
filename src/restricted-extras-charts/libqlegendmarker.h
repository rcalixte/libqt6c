#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGENDMARKER_H

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
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_legendmarker_meta_object(void* self);
void* q_legendmarker_metacast(void* self, const char* param1);
int32_t q_legendmarker_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_legendmarker_tr(const char* s);
int64_t q_legendmarker_type(void* self);
const char* q_legendmarker_label(void* self);
void q_legendmarker_set_label(void* self, const char* label);
QBrush* q_legendmarker_label_brush(void* self);
void q_legendmarker_set_label_brush(void* self, void* brush);
QFont* q_legendmarker_font(void* self);
void q_legendmarker_set_font(void* self, void* font);
QPen* q_legendmarker_pen(void* self);
void q_legendmarker_set_pen(void* self, void* pen);
QBrush* q_legendmarker_brush(void* self);
void q_legendmarker_set_brush(void* self, void* brush);
bool q_legendmarker_is_visible(void* self);
void q_legendmarker_set_visible(void* self, bool visible);
int64_t q_legendmarker_shape(void* self);
void q_legendmarker_set_shape(void* self, int64_t shape);
QAbstractSeries* q_legendmarker_series(void* self);
void q_legendmarker_clicked(void* self);
void q_legendmarker_on_clicked(void* self, void (*slot)(void*));
void q_legendmarker_hovered(void* self, bool status);
void q_legendmarker_on_hovered(void* self, void (*slot)(void*, bool));
void q_legendmarker_label_changed(void* self);
void q_legendmarker_on_label_changed(void* self, void (*slot)(void*));
void q_legendmarker_label_brush_changed(void* self);
void q_legendmarker_on_label_brush_changed(void* self, void (*slot)(void*));
void q_legendmarker_font_changed(void* self);
void q_legendmarker_on_font_changed(void* self, void (*slot)(void*));
void q_legendmarker_pen_changed(void* self);
void q_legendmarker_on_pen_changed(void* self, void (*slot)(void*));
void q_legendmarker_brush_changed(void* self);
void q_legendmarker_on_brush_changed(void* self, void (*slot)(void*));
void q_legendmarker_visible_changed(void* self);
void q_legendmarker_on_visible_changed(void* self, void (*slot)(void*));
void q_legendmarker_shape_changed(void* self);
void q_legendmarker_on_shape_changed(void* self, void (*slot)(void*));
const char* q_legendmarker_tr2(const char* s, const char* c);
const char* q_legendmarker_tr3(const char* s, const char* c, int n);
bool q_legendmarker_event(void* self, void* event);
bool q_legendmarker_event_filter(void* self, void* watched, void* event);
const char* q_legendmarker_object_name(void* self);
void q_legendmarker_set_object_name(void* self, const char* name);
bool q_legendmarker_is_widget_type(void* self);
bool q_legendmarker_is_window_type(void* self);
bool q_legendmarker_is_quick_item_type(void* self);
bool q_legendmarker_signals_blocked(void* self);
bool q_legendmarker_block_signals(void* self, bool b);
QThread* q_legendmarker_thread(void* self);
void q_legendmarker_move_to_thread(void* self, void* thread);
int32_t q_legendmarker_start_timer(void* self, int interval);
void q_legendmarker_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_legendmarker_children(void* self);
void q_legendmarker_set_parent(void* self, void* parent);
void q_legendmarker_install_event_filter(void* self, void* filterObj);
void q_legendmarker_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_legendmarker_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_legendmarker_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_legendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_legendmarker_disconnect_with_q_meta_object_connection(void* param1);
void q_legendmarker_dump_object_tree(void* self);
void q_legendmarker_dump_object_info(void* self);
bool q_legendmarker_set_property(void* self, const char* name, void* value);
QVariant* q_legendmarker_property(void* self, const char* name);
const char** q_legendmarker_dynamic_property_names(void* self);
QBindingStorage* q_legendmarker_binding_storage(void* self);
QBindingStorage* q_legendmarker_binding_storage2(void* self);
void q_legendmarker_destroyed(void* self);
void q_legendmarker_on_destroyed(void* self, void (*slot)(void*));
QObject* q_legendmarker_parent(void* self);
bool q_legendmarker_inherits(void* self, const char* classname);
void q_legendmarker_delete_later(void* self);
int32_t q_legendmarker_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_legendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_legendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_legendmarker_destroyed1(void* self, void* param1);
void q_legendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_legendmarker_delete(void* self);

/// https://doc.qt.io/qt-6/qlegendmarker.html#types

typedef enum {
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEAREA = 0,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBAR = 1,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEPIE = 2,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEXY = 3,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBOXPLOT = 4,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPECANDLESTICK = 5
} QLegendMarker__LegendMarkerType;

#endif
