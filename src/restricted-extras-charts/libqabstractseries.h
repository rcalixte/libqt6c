#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_abstractseries_meta_object(void* self);
void* q_abstractseries_metacast(void* self, const char* param1);
int32_t q_abstractseries_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractseries_tr(const char* s);
int64_t q_abstractseries_type(void* self);
void q_abstractseries_set_name(void* self, const char* name);
const char* q_abstractseries_name(void* self);
void q_abstractseries_set_visible(void* self);
bool q_abstractseries_is_visible(void* self);
double q_abstractseries_opacity(void* self);
void q_abstractseries_set_opacity(void* self, double opacity);
void q_abstractseries_set_use_open_g_l(void* self);
bool q_abstractseries_use_open_g_l(void* self);
QChart* q_abstractseries_chart(void* self);
bool q_abstractseries_attach_axis(void* self, void* axis);
bool q_abstractseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_abstractseries_attached_axes(void* self);
void q_abstractseries_show(void* self);
void q_abstractseries_hide(void* self);
void q_abstractseries_name_changed(void* self);
void q_abstractseries_on_name_changed(void* self, void (*slot)(void*));
void q_abstractseries_visible_changed(void* self);
void q_abstractseries_on_visible_changed(void* self, void (*slot)(void*));
void q_abstractseries_opacity_changed(void* self);
void q_abstractseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_abstractseries_use_open_g_l_changed(void* self);
void q_abstractseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
const char* q_abstractseries_tr2(const char* s, const char* c);
const char* q_abstractseries_tr3(const char* s, const char* c, int n);
void q_abstractseries_set_visible1(void* self, bool visible);
void q_abstractseries_set_use_open_g_l1(void* self, bool enable);
bool q_abstractseries_event(void* self, void* event);
bool q_abstractseries_event_filter(void* self, void* watched, void* event);
const char* q_abstractseries_object_name(void* self);
void q_abstractseries_set_object_name(void* self, const char* name);
bool q_abstractseries_is_widget_type(void* self);
bool q_abstractseries_is_window_type(void* self);
bool q_abstractseries_is_quick_item_type(void* self);
bool q_abstractseries_signals_blocked(void* self);
bool q_abstractseries_block_signals(void* self, bool b);
QThread* q_abstractseries_thread(void* self);
void q_abstractseries_move_to_thread(void* self, void* thread);
int32_t q_abstractseries_start_timer(void* self, int interval);
void q_abstractseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractseries_children(void* self);
void q_abstractseries_set_parent(void* self, void* parent);
void q_abstractseries_install_event_filter(void* self, void* filterObj);
void q_abstractseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractseries_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractseries_dump_object_tree(void* self);
void q_abstractseries_dump_object_info(void* self);
bool q_abstractseries_set_property(void* self, const char* name, void* value);
QVariant* q_abstractseries_property(void* self, const char* name);
const char** q_abstractseries_dynamic_property_names(void* self);
QBindingStorage* q_abstractseries_binding_storage(void* self);
QBindingStorage* q_abstractseries_binding_storage2(void* self);
void q_abstractseries_destroyed(void* self);
void q_abstractseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractseries_parent(void* self);
bool q_abstractseries_inherits(void* self, const char* classname);
void q_abstractseries_delete_later(void* self);
int32_t q_abstractseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractseries_destroyed1(void* self, void* param1);
void q_abstractseries_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_abstractseries_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractseries.html#types

typedef enum {
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPELINE = 0,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEAREA = 1,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEBAR = 2,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESTACKEDBAR = 3,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEPERCENTBAR = 4,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEPIE = 5,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESCATTER = 6,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPESPLINE = 7,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALBAR = 8,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALSTACKEDBAR = 9,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEHORIZONTALPERCENTBAR = 10,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPEBOXPLOT = 11,
    QABSTRACTSERIES_SERIESTYPE_SERIESTYPECANDLESTICK = 12
} QAbstractSeries__SeriesType;

#endif
