#pragma once
#ifndef SRCQT6C_LIBQINPUTMETHOD_H
#define SRCQT6C_LIBQINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"

QMetaObject* q_inputmethod_meta_object(void* self);
void* q_inputmethod_metacast(void* self, const char* param1);
int32_t q_inputmethod_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_inputmethod_tr(const char* s);
QTransform* q_inputmethod_input_item_transform(void* self);
void q_inputmethod_set_input_item_transform(void* self, void* transform);
QRectF* q_inputmethod_input_item_rectangle(void* self);
void q_inputmethod_set_input_item_rectangle(void* self, void* rect);
QRectF* q_inputmethod_cursor_rectangle(void* self);
QRectF* q_inputmethod_anchor_rectangle(void* self);
QRectF* q_inputmethod_keyboard_rectangle(void* self);
QRectF* q_inputmethod_input_item_clip_rectangle(void* self);
bool q_inputmethod_is_visible(void* self);
void q_inputmethod_set_visible(void* self, bool visible);
bool q_inputmethod_is_animating(void* self);
QLocale* q_inputmethod_locale(void* self);
int64_t q_inputmethod_input_direction(void* self);
QVariant* q_inputmethod_query_focus_object(int64_t query, void* argument);
void q_inputmethod_show(void* self);
void q_inputmethod_hide(void* self);
void q_inputmethod_update(void* self, int64_t queries);
void q_inputmethod_reset(void* self);
void q_inputmethod_commit(void* self);
void q_inputmethod_invoke_action(void* self, int64_t a, int cursorPosition);
void q_inputmethod_cursor_rectangle_changed(void* self);
void q_inputmethod_on_cursor_rectangle_changed(void* self, void (*slot)(void*));
void q_inputmethod_anchor_rectangle_changed(void* self);
void q_inputmethod_on_anchor_rectangle_changed(void* self, void (*slot)(void*));
void q_inputmethod_keyboard_rectangle_changed(void* self);
void q_inputmethod_on_keyboard_rectangle_changed(void* self, void (*slot)(void*));
void q_inputmethod_input_item_clip_rectangle_changed(void* self);
void q_inputmethod_on_input_item_clip_rectangle_changed(void* self, void (*slot)(void*));
void q_inputmethod_visible_changed(void* self);
void q_inputmethod_on_visible_changed(void* self, void (*slot)(void*));
void q_inputmethod_animating_changed(void* self);
void q_inputmethod_on_animating_changed(void* self, void (*slot)(void*));
void q_inputmethod_locale_changed(void* self);
void q_inputmethod_on_locale_changed(void* self, void (*slot)(void*));
void q_inputmethod_input_direction_changed(void* self, int64_t newDirection);
void q_inputmethod_on_input_direction_changed(void* self, void (*slot)(void*, int64_t));
const char* q_inputmethod_tr2(const char* s, const char* c);
const char* q_inputmethod_tr3(const char* s, const char* c, int n);
bool q_inputmethod_event(void* self, void* event);
bool q_inputmethod_event_filter(void* self, void* watched, void* event);
const char* q_inputmethod_object_name(void* self);
void q_inputmethod_set_object_name(void* self, const char* name);
bool q_inputmethod_is_widget_type(void* self);
bool q_inputmethod_is_window_type(void* self);
bool q_inputmethod_is_quick_item_type(void* self);
bool q_inputmethod_signals_blocked(void* self);
bool q_inputmethod_block_signals(void* self, bool b);
QThread* q_inputmethod_thread(void* self);
void q_inputmethod_move_to_thread(void* self, void* thread);
int32_t q_inputmethod_start_timer(void* self, int interval);
void q_inputmethod_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_inputmethod_children(void* self);
void q_inputmethod_set_parent(void* self, void* parent);
void q_inputmethod_install_event_filter(void* self, void* filterObj);
void q_inputmethod_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_inputmethod_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_inputmethod_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_inputmethod_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_inputmethod_disconnect_with_q_meta_object_connection(void* param1);
void q_inputmethod_dump_object_tree(void* self);
void q_inputmethod_dump_object_info(void* self);
bool q_inputmethod_set_property(void* self, const char* name, void* value);
QVariant* q_inputmethod_property(void* self, const char* name);
const char** q_inputmethod_dynamic_property_names(void* self);
QBindingStorage* q_inputmethod_binding_storage(void* self);
QBindingStorage* q_inputmethod_binding_storage2(void* self);
void q_inputmethod_destroyed(void* self);
void q_inputmethod_on_destroyed(void* self, void (*slot)(void*));
QObject* q_inputmethod_parent(void* self);
bool q_inputmethod_inherits(void* self, const char* classname);
void q_inputmethod_delete_later(void* self);
int32_t q_inputmethod_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_inputmethod_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_inputmethod_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_inputmethod_destroyed1(void* self, void* param1);
void q_inputmethod_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qinputmethod.html#types

typedef enum {
    QINPUTMETHOD_ACTION_CLICK = 0,
    QINPUTMETHOD_ACTION_CONTEXTMENU = 1
} QInputMethod__Action;

#endif
