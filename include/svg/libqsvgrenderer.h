#pragma once
#ifndef SRC_SVGQT6C_LIBQSVGRENDERER_H
#define SRC_SVGQT6C_LIBQSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqxmlstream.h"

QSvgRenderer* q_svgrenderer_new();
QSvgRenderer* q_svgrenderer_new2(const char* filename);
QSvgRenderer* q_svgrenderer_new3(const char* contents);
QSvgRenderer* q_svgrenderer_new4(void* contents);
QSvgRenderer* q_svgrenderer_new5(void* parent);
QSvgRenderer* q_svgrenderer_new6(const char* filename, void* parent);
QSvgRenderer* q_svgrenderer_new7(const char* contents, void* parent);
QSvgRenderer* q_svgrenderer_new8(void* contents, void* parent);
QMetaObject* q_svgrenderer_meta_object(void* self);
void* q_svgrenderer_metacast(void* self, const char* param1);
int32_t q_svgrenderer_metacall(void* self, int64_t param1, int param2, void* param3);
void q_svgrenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_svgrenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_svgrenderer_tr(const char* s);
bool q_svgrenderer_is_valid(void* self);
QSize* q_svgrenderer_default_size(void* self);
QRect* q_svgrenderer_view_box(void* self);
QRectF* q_svgrenderer_view_box_f(void* self);
void q_svgrenderer_set_view_box(void* self, void* viewbox);
void q_svgrenderer_set_view_box_with_viewbox(void* self, void* viewbox);
int64_t q_svgrenderer_aspect_ratio_mode(void* self);
void q_svgrenderer_set_aspect_ratio_mode(void* self, int64_t mode);
bool q_svgrenderer_animated(void* self);
int32_t q_svgrenderer_frames_per_second(void* self);
void q_svgrenderer_set_frames_per_second(void* self, int num);
int32_t q_svgrenderer_current_frame(void* self);
void q_svgrenderer_set_current_frame(void* self, int currentFrame);
int32_t q_svgrenderer_animation_duration(void* self);
QRectF* q_svgrenderer_bounds_on_element(void* self, const char* id);
bool q_svgrenderer_element_exists(void* self, const char* id);
QTransform* q_svgrenderer_transform_for_element(void* self, const char* id);
bool q_svgrenderer_load(void* self, const char* filename);
bool q_svgrenderer_load_with_contents(void* self, const char* contents);
bool q_svgrenderer_load2(void* self, void* contents);
void q_svgrenderer_render(void* self, void* p);
void q_svgrenderer_render2(void* self, void* p, void* bounds);
void q_svgrenderer_render3(void* self, void* p, const char* elementId);
void q_svgrenderer_repaint_needed(void* self);
void q_svgrenderer_on_repaint_needed(void* self, void (*slot)(void*));
const char* q_svgrenderer_tr2(const char* s, const char* c);
const char* q_svgrenderer_tr3(const char* s, const char* c, int n);
void q_svgrenderer_render32(void* self, void* p, const char* elementId, void* bounds);
const char* q_svgrenderer_object_name(void* self);
void q_svgrenderer_set_object_name(void* self, const char* name);
bool q_svgrenderer_is_widget_type(void* self);
bool q_svgrenderer_is_window_type(void* self);
bool q_svgrenderer_is_quick_item_type(void* self);
bool q_svgrenderer_signals_blocked(void* self);
bool q_svgrenderer_block_signals(void* self, bool b);
QThread* q_svgrenderer_thread(void* self);
void q_svgrenderer_move_to_thread(void* self, void* thread);
int32_t q_svgrenderer_start_timer(void* self, int interval);
void q_svgrenderer_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_svgrenderer_children(void* self);
void q_svgrenderer_set_parent(void* self, void* parent);
void q_svgrenderer_install_event_filter(void* self, void* filterObj);
void q_svgrenderer_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_svgrenderer_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_svgrenderer_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_svgrenderer_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_svgrenderer_disconnect_with_q_meta_object_connection(void* param1);
void q_svgrenderer_dump_object_tree(void* self);
void q_svgrenderer_dump_object_info(void* self);
bool q_svgrenderer_set_property(void* self, const char* name, void* value);
QVariant* q_svgrenderer_property(void* self, const char* name);
const char** q_svgrenderer_dynamic_property_names(void* self);
QBindingStorage* q_svgrenderer_binding_storage(void* self);
QBindingStorage* q_svgrenderer_binding_storage2(void* self);
void q_svgrenderer_destroyed(void* self);
void q_svgrenderer_on_destroyed(void* self, void (*slot)(void*));
QObject* q_svgrenderer_parent(void* self);
bool q_svgrenderer_inherits(void* self, const char* classname);
void q_svgrenderer_delete_later(void* self);
int32_t q_svgrenderer_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_svgrenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_svgrenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_svgrenderer_destroyed1(void* self, void* param1);
void q_svgrenderer_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_svgrenderer_event(void* self, void* event);
bool q_svgrenderer_qbase_event(void* self, void* event);
void q_svgrenderer_on_event(void* self, bool (*slot)(void*, void*));
bool q_svgrenderer_event_filter(void* self, void* watched, void* event);
bool q_svgrenderer_qbase_event_filter(void* self, void* watched, void* event);
void q_svgrenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_svgrenderer_timer_event(void* self, void* event);
void q_svgrenderer_qbase_timer_event(void* self, void* event);
void q_svgrenderer_on_timer_event(void* self, void (*slot)(void*, void*));
void q_svgrenderer_child_event(void* self, void* event);
void q_svgrenderer_qbase_child_event(void* self, void* event);
void q_svgrenderer_on_child_event(void* self, void (*slot)(void*, void*));
void q_svgrenderer_custom_event(void* self, void* event);
void q_svgrenderer_qbase_custom_event(void* self, void* event);
void q_svgrenderer_on_custom_event(void* self, void (*slot)(void*, void*));
void q_svgrenderer_connect_notify(void* self, void* signal);
void q_svgrenderer_qbase_connect_notify(void* self, void* signal);
void q_svgrenderer_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_svgrenderer_disconnect_notify(void* self, void* signal);
void q_svgrenderer_qbase_disconnect_notify(void* self, void* signal);
void q_svgrenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_svgrenderer_sender(void* self);
QObject* q_svgrenderer_qbase_sender(void* self);
void q_svgrenderer_on_sender(void* self, QObject* (*slot)());
int32_t q_svgrenderer_sender_signal_index(void* self);
int32_t q_svgrenderer_qbase_sender_signal_index(void* self);
void q_svgrenderer_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_svgrenderer_receivers(void* self, const char* signal);
int32_t q_svgrenderer_qbase_receivers(void* self, const char* signal);
void q_svgrenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_svgrenderer_is_signal_connected(void* self, void* signal);
bool q_svgrenderer_qbase_is_signal_connected(void* self, void* signal);
void q_svgrenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_svgrenderer_delete(void* self);

#endif
