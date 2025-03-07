#pragma once
#ifndef SRCQT6C_LIBQCOMMONSTYLE_H
#define SRCQT6C_LIBQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqapplication.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqfontmetrics.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QCommonStyle* q_commonstyle_new();
QMetaObject* q_commonstyle_meta_object(void* self);
void* q_commonstyle_metacast(void* self, const char* param1);
int32_t q_commonstyle_metacall(void* self, int64_t param1, int param2, void* param3);
void q_commonstyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_commonstyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_commonstyle_tr(const char* s);
void q_commonstyle_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w);
void q_commonstyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_commonstyle_qbase_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w);
void q_commonstyle_draw_control(void* self, int64_t element, void* opt, void* p, void* w);
void q_commonstyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_commonstyle_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w);
QRect* q_commonstyle_sub_element_rect(void* self, int64_t r, void* opt, void* widget);
void q_commonstyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*));
QRect* q_commonstyle_qbase_sub_element_rect(void* self, int64_t r, void* opt, void* widget);
void q_commonstyle_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w);
void q_commonstyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_commonstyle_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w);
int64_t q_commonstyle_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w);
void q_commonstyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*));
int64_t q_commonstyle_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w);
QRect* q_commonstyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w);
void q_commonstyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*));
QRect* q_commonstyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w);
QSize* q_commonstyle_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget);
void q_commonstyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*));
QSize* q_commonstyle_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget);
int32_t q_commonstyle_pixel_metric(void* self, int64_t m, void* opt, void* widget);
void q_commonstyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*));
int32_t q_commonstyle_qbase_pixel_metric(void* self, int64_t m, void* opt, void* widget);
int32_t q_commonstyle_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret);
void q_commonstyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*));
int32_t q_commonstyle_qbase_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret);
QIcon* q_commonstyle_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget);
void q_commonstyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*));
QIcon* q_commonstyle_qbase_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget);
QPixmap* q_commonstyle_standard_pixmap(void* self, int64_t sp, void* opt, void* widget);
void q_commonstyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));
QPixmap* q_commonstyle_qbase_standard_pixmap(void* self, int64_t sp, void* opt, void* widget);
QPixmap* q_commonstyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);
void q_commonstyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));
QPixmap* q_commonstyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);
int32_t q_commonstyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);
void q_commonstyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*));
int32_t q_commonstyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);
void q_commonstyle_polish(void* self, void* param1);
void q_commonstyle_on_polish(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_polish(void* self, void* param1);
void q_commonstyle_polish_with_app(void* self, void* app);
void q_commonstyle_on_polish_with_app(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_polish_with_app(void* self, void* app);
void q_commonstyle_polish_with_widget(void* self, void* widget);
void q_commonstyle_on_polish_with_widget(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_polish_with_widget(void* self, void* widget);
void q_commonstyle_unpolish(void* self, void* widget);
void q_commonstyle_on_unpolish(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_unpolish(void* self, void* widget);
void q_commonstyle_unpolish_with_application(void* self, void* application);
void q_commonstyle_on_unpolish_with_application(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_unpolish_with_application(void* self, void* application);
const char* q_commonstyle_tr2(const char* s, const char* c);
const char* q_commonstyle_tr3(const char* s, const char* c, int n);
const char* q_commonstyle_name(void* self);
void q_commonstyle_polish_with_application(void* self, void* application);
void q_commonstyle_on_polish_with_application(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_polish_with_application(void* self, void* application);
void q_commonstyle_polish_with_palette(void* self, void* palette);
void q_commonstyle_on_polish_with_palette(void* self, void (*slot)(void*, void*));
void q_commonstyle_qbase_polish_with_palette(void* self, void* palette);
QRect* q_commonstyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect);
QPoint* q_commonstyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos);
int32_t q_commonstyle_slider_position_from_value(int min, int max, int val, int space);
int32_t q_commonstyle_slider_value_from_position(int min, int max, int pos, int space);
int64_t q_commonstyle_visual_alignment(int64_t direction, int64_t alignment);
QRect* q_commonstyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle);
int32_t q_commonstyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation);
QStyle* q_commonstyle_proxy(void* self);
int32_t q_commonstyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);
int32_t q_commonstyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);
int32_t q_commonstyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option);
int32_t q_commonstyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget);
const char* q_commonstyle_object_name(void* self);
void q_commonstyle_set_object_name(void* self, const char* name);
bool q_commonstyle_is_widget_type(void* self);
bool q_commonstyle_is_window_type(void* self);
bool q_commonstyle_is_quick_item_type(void* self);
bool q_commonstyle_signals_blocked(void* self);
bool q_commonstyle_block_signals(void* self, bool b);
QThread* q_commonstyle_thread(void* self);
void q_commonstyle_move_to_thread(void* self, void* thread);
int32_t q_commonstyle_start_timer(void* self, int interval);
void q_commonstyle_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_commonstyle_children(void* self);
void q_commonstyle_set_parent(void* self, void* parent);
void q_commonstyle_install_event_filter(void* self, void* filterObj);
void q_commonstyle_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_commonstyle_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_commonstyle_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_commonstyle_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_commonstyle_disconnect_with_q_meta_object_connection(void* param1);
void q_commonstyle_dump_object_tree(void* self);
void q_commonstyle_dump_object_info(void* self);
bool q_commonstyle_set_property(void* self, const char* name, void* value);
QVariant* q_commonstyle_property(void* self, const char* name);
const char** q_commonstyle_dynamic_property_names(void* self);
QBindingStorage* q_commonstyle_binding_storage(void* self);
QBindingStorage* q_commonstyle_binding_storage2(void* self);
void q_commonstyle_destroyed(void* self);
void q_commonstyle_on_destroyed(void* self, void (*slot)(void*));
QObject* q_commonstyle_parent(void* self);
bool q_commonstyle_inherits(void* self, const char* classname);
void q_commonstyle_delete_later(void* self);
int32_t q_commonstyle_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_commonstyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_commonstyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_commonstyle_destroyed1(void* self, void* param1);
void q_commonstyle_on_destroyed1(void* self, void (*slot)(void*, void*));
QRect* q_commonstyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);
QRect* q_commonstyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);
void q_commonstyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*));
QRect* q_commonstyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);
QRect* q_commonstyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);
void q_commonstyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*));
void q_commonstyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);
void q_commonstyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);
void q_commonstyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t));
void q_commonstyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);
void q_commonstyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);
void q_commonstyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*));
QPalette* q_commonstyle_standard_palette(void* self);
QPalette* q_commonstyle_qbase_standard_palette(void* self);
void q_commonstyle_on_standard_palette(void* self, QPalette* (*slot)());
bool q_commonstyle_event(void* self, void* event);
bool q_commonstyle_qbase_event(void* self, void* event);
void q_commonstyle_on_event(void* self, bool (*slot)(void*, void*));
bool q_commonstyle_event_filter(void* self, void* watched, void* event);
bool q_commonstyle_qbase_event_filter(void* self, void* watched, void* event);
void q_commonstyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_commonstyle_timer_event(void* self, void* event);
void q_commonstyle_qbase_timer_event(void* self, void* event);
void q_commonstyle_on_timer_event(void* self, void (*slot)(void*, void*));
void q_commonstyle_child_event(void* self, void* event);
void q_commonstyle_qbase_child_event(void* self, void* event);
void q_commonstyle_on_child_event(void* self, void (*slot)(void*, void*));
void q_commonstyle_custom_event(void* self, void* event);
void q_commonstyle_qbase_custom_event(void* self, void* event);
void q_commonstyle_on_custom_event(void* self, void (*slot)(void*, void*));
void q_commonstyle_connect_notify(void* self, void* signal);
void q_commonstyle_qbase_connect_notify(void* self, void* signal);
void q_commonstyle_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_commonstyle_disconnect_notify(void* self, void* signal);
void q_commonstyle_qbase_disconnect_notify(void* self, void* signal);
void q_commonstyle_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_commonstyle_sender(void* self);
QObject* q_commonstyle_qbase_sender(void* self);
void q_commonstyle_on_sender(void* self, QObject* (*slot)());
int32_t q_commonstyle_sender_signal_index(void* self);
int32_t q_commonstyle_qbase_sender_signal_index(void* self);
void q_commonstyle_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_commonstyle_receivers(void* self, const char* signal);
int32_t q_commonstyle_qbase_receivers(void* self, const char* signal);
void q_commonstyle_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_commonstyle_is_signal_connected(void* self, void* signal);
bool q_commonstyle_qbase_is_signal_connected(void* self, void* signal);
void q_commonstyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_commonstyle_delete(void* self);

#endif
