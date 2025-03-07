#pragma once
#ifndef SRCQT6C_LIBQSCROLLER_H
#define SRCQT6C_LIBQSCROLLER_H

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
#include "libqpoint.h"
#include "libqrect.h"
#include "libqscrollerproperties.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_scroller_meta_object(void* self);
void* q_scroller_metacast(void* self, const char* param1);
int32_t q_scroller_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scroller_tr(const char* s);
bool q_scroller_has_scroller(void* target);
QScroller* q_scroller_scroller(void* target);
QScroller* q_scroller_scroller_with_target(void* target);
int64_t q_scroller_grab_gesture(void* target);
int64_t q_scroller_grabbed_gesture(void* target);
void q_scroller_ungrab_gesture(void* target);
libqt_list /* of QScroller* */ q_scroller_active_scrollers();
QObject* q_scroller_target(void* self);
int64_t q_scroller_state(void* self);
bool q_scroller_handle_input(void* self, int64_t input, void* position);
void q_scroller_stop(void* self);
QPointF* q_scroller_velocity(void* self);
QPointF* q_scroller_final_position(void* self);
QPointF* q_scroller_pixel_per_meter(void* self);
QScrollerProperties* q_scroller_scroller_properties(void* self);
void q_scroller_set_snap_positions_x(void* self, double* positions[]);
void q_scroller_set_snap_positions_x2(void* self, double first, double interval);
void q_scroller_set_snap_positions_y(void* self, double* positions[]);
void q_scroller_set_snap_positions_y2(void* self, double first, double interval);
void q_scroller_set_scroller_properties(void* self, void* prop);
void q_scroller_scroll_to(void* self, void* pos);
void q_scroller_scroll_to2(void* self, void* pos, int scrollTime);
void q_scroller_ensure_visible(void* self, void* rect, double xmargin, double ymargin);
void q_scroller_ensure_visible2(void* self, void* rect, double xmargin, double ymargin, int scrollTime);
void q_scroller_resend_prepare_event(void* self);
void q_scroller_state_changed(void* self, int64_t newstate);
void q_scroller_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_scroller_scroller_properties_changed(void* self, void* param1);
void q_scroller_on_scroller_properties_changed(void* self, void (*slot)(void*, void*));
const char* q_scroller_tr2(const char* s, const char* c);
const char* q_scroller_tr3(const char* s, const char* c, int n);
int64_t q_scroller_grab_gesture2(void* target, int64_t gestureType);
bool q_scroller_handle_input3(void* self, int64_t input, void* position, long long timestamp);
bool q_scroller_event(void* self, void* event);
bool q_scroller_event_filter(void* self, void* watched, void* event);
const char* q_scroller_object_name(void* self);
void q_scroller_set_object_name(void* self, const char* name);
bool q_scroller_is_widget_type(void* self);
bool q_scroller_is_window_type(void* self);
bool q_scroller_is_quick_item_type(void* self);
bool q_scroller_signals_blocked(void* self);
bool q_scroller_block_signals(void* self, bool b);
QThread* q_scroller_thread(void* self);
void q_scroller_move_to_thread(void* self, void* thread);
int32_t q_scroller_start_timer(void* self, int interval);
void q_scroller_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scroller_children(void* self);
void q_scroller_set_parent(void* self, void* parent);
void q_scroller_install_event_filter(void* self, void* filterObj);
void q_scroller_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scroller_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scroller_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scroller_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scroller_disconnect_with_q_meta_object_connection(void* param1);
void q_scroller_dump_object_tree(void* self);
void q_scroller_dump_object_info(void* self);
bool q_scroller_set_property(void* self, const char* name, void* value);
QVariant* q_scroller_property(void* self, const char* name);
const char** q_scroller_dynamic_property_names(void* self);
QBindingStorage* q_scroller_binding_storage(void* self);
QBindingStorage* q_scroller_binding_storage2(void* self);
void q_scroller_destroyed(void* self);
void q_scroller_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scroller_parent(void* self);
bool q_scroller_inherits(void* self, const char* classname);
void q_scroller_delete_later(void* self);
int32_t q_scroller_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scroller_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scroller_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scroller_destroyed1(void* self, void* param1);
void q_scroller_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qscroller.html#types

typedef enum {
    QSCROLLER_STATE_INACTIVE = 0,
    QSCROLLER_STATE_PRESSED = 1,
    QSCROLLER_STATE_DRAGGING = 2,
    QSCROLLER_STATE_SCROLLING = 3
} QScroller__State;

typedef enum {
    QSCROLLER_SCROLLERGESTURETYPE_TOUCHGESTURE = 0,
    QSCROLLER_SCROLLERGESTURETYPE_LEFTMOUSEBUTTONGESTURE = 1,
    QSCROLLER_SCROLLERGESTURETYPE_RIGHTMOUSEBUTTONGESTURE = 2,
    QSCROLLER_SCROLLERGESTURETYPE_MIDDLEMOUSEBUTTONGESTURE = 3
} QScroller__ScrollerGestureType;

typedef enum {
    QSCROLLER_INPUT_INPUTPRESS = 1,
    QSCROLLER_INPUT_INPUTMOVE = 2,
    QSCROLLER_INPUT_INPUTRELEASE = 3
} QScroller__Input;

#endif
