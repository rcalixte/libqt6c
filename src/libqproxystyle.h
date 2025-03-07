#pragma once
#ifndef SRCQT6C_LIBQPROXYSTYLE_H
#define SRCQT6C_LIBQPROXYSTYLE_H

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
#include "libqcommonstyle.h"
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

QProxyStyle* q_proxystyle_new();
QProxyStyle* q_proxystyle_new2(const char* key);
QProxyStyle* q_proxystyle_new3(void* style);
QMetaObject* q_proxystyle_meta_object(void* self);
void* q_proxystyle_metacast(void* self, const char* param1);
int32_t q_proxystyle_metacall(void* self, int64_t param1, int param2, void* param3);
void q_proxystyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_proxystyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_proxystyle_tr(const char* s);
QStyle* q_proxystyle_base_style(void* self);
void q_proxystyle_set_base_style(void* self, void* style);
void q_proxystyle_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget);
void q_proxystyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_proxystyle_qbase_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget);
void q_proxystyle_draw_control(void* self, int64_t element, void* option, void* painter, void* widget);
void q_proxystyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_proxystyle_qbase_draw_control(void* self, int64_t element, void* option, void* painter, void* widget);
void q_proxystyle_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget);
void q_proxystyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));
void q_proxystyle_qbase_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget);
void q_proxystyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);
void q_proxystyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t));
void q_proxystyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);
void q_proxystyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);
void q_proxystyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*));
void q_proxystyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);
QSize* q_proxystyle_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget);
void q_proxystyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*));
QSize* q_proxystyle_qbase_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget);
QRect* q_proxystyle_sub_element_rect(void* self, int64_t element, void* option, void* widget);
void q_proxystyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*));
QRect* q_proxystyle_qbase_sub_element_rect(void* self, int64_t element, void* option, void* widget);
QRect* q_proxystyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);
void q_proxystyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*));
QRect* q_proxystyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);
QRect* q_proxystyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);
void q_proxystyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*));
QRect* q_proxystyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);
QRect* q_proxystyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);
void q_proxystyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*));
QRect* q_proxystyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);
int64_t q_proxystyle_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget);
void q_proxystyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*));
int64_t q_proxystyle_qbase_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget);
int32_t q_proxystyle_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData);
void q_proxystyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*));
int32_t q_proxystyle_qbase_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData);
int32_t q_proxystyle_pixel_metric(void* self, int64_t metric, void* option, void* widget);
void q_proxystyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*));
int32_t q_proxystyle_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget);
int32_t q_proxystyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);
void q_proxystyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*));
int32_t q_proxystyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);
QIcon* q_proxystyle_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);
void q_proxystyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*));
QIcon* q_proxystyle_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);
QPixmap* q_proxystyle_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);
void q_proxystyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));
QPixmap* q_proxystyle_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);
QPixmap* q_proxystyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);
void q_proxystyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));
QPixmap* q_proxystyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);
QPalette* q_proxystyle_standard_palette(void* self);
void q_proxystyle_on_standard_palette(void* self, QPalette* (*slot)());
QPalette* q_proxystyle_qbase_standard_palette(void* self);
void q_proxystyle_polish(void* self, void* widget);
void q_proxystyle_on_polish(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish(void* self, void* widget);
void q_proxystyle_polish_with_pal(void* self, void* pal);
void q_proxystyle_on_polish_with_pal(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish_with_pal(void* self, void* pal);
void q_proxystyle_polish_with_app(void* self, void* app);
void q_proxystyle_on_polish_with_app(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish_with_app(void* self, void* app);
void q_proxystyle_unpolish(void* self, void* widget);
void q_proxystyle_on_unpolish(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_unpolish(void* self, void* widget);
void q_proxystyle_unpolish_with_app(void* self, void* app);
void q_proxystyle_on_unpolish_with_app(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_unpolish_with_app(void* self, void* app);
bool q_proxystyle_event(void* self, void* e);
void q_proxystyle_on_event(void* self, bool (*slot)(void*, void*));
bool q_proxystyle_qbase_event(void* self, void* e);
const char* q_proxystyle_tr2(const char* s, const char* c);
const char* q_proxystyle_tr3(const char* s, const char* c, int n);
void q_proxystyle_polish_with_widget(void* self, void* widget);
void q_proxystyle_on_polish_with_widget(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish_with_widget(void* self, void* widget);
void q_proxystyle_unpolish_with_application(void* self, void* application);
void q_proxystyle_on_unpolish_with_application(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_unpolish_with_application(void* self, void* application);
const char* q_proxystyle_name(void* self);
void q_proxystyle_polish_with_application(void* self, void* application);
void q_proxystyle_on_polish_with_application(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish_with_application(void* self, void* application);
void q_proxystyle_polish_with_palette(void* self, void* palette);
void q_proxystyle_on_polish_with_palette(void* self, void (*slot)(void*, void*));
void q_proxystyle_qbase_polish_with_palette(void* self, void* palette);
QRect* q_proxystyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect);
QPoint* q_proxystyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos);
int32_t q_proxystyle_slider_position_from_value(int min, int max, int val, int space);
int32_t q_proxystyle_slider_value_from_position(int min, int max, int pos, int space);
int64_t q_proxystyle_visual_alignment(int64_t direction, int64_t alignment);
QRect* q_proxystyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle);
int32_t q_proxystyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation);
QStyle* q_proxystyle_proxy(void* self);
int32_t q_proxystyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);
int32_t q_proxystyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);
int32_t q_proxystyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option);
int32_t q_proxystyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget);
const char* q_proxystyle_object_name(void* self);
void q_proxystyle_set_object_name(void* self, const char* name);
bool q_proxystyle_is_widget_type(void* self);
bool q_proxystyle_is_window_type(void* self);
bool q_proxystyle_is_quick_item_type(void* self);
bool q_proxystyle_signals_blocked(void* self);
bool q_proxystyle_block_signals(void* self, bool b);
QThread* q_proxystyle_thread(void* self);
void q_proxystyle_move_to_thread(void* self, void* thread);
int32_t q_proxystyle_start_timer(void* self, int interval);
void q_proxystyle_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_proxystyle_children(void* self);
void q_proxystyle_set_parent(void* self, void* parent);
void q_proxystyle_install_event_filter(void* self, void* filterObj);
void q_proxystyle_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_proxystyle_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_proxystyle_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_proxystyle_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_proxystyle_disconnect_with_q_meta_object_connection(void* param1);
void q_proxystyle_dump_object_tree(void* self);
void q_proxystyle_dump_object_info(void* self);
bool q_proxystyle_set_property(void* self, const char* name, void* value);
QVariant* q_proxystyle_property(void* self, const char* name);
const char** q_proxystyle_dynamic_property_names(void* self);
QBindingStorage* q_proxystyle_binding_storage(void* self);
QBindingStorage* q_proxystyle_binding_storage2(void* self);
void q_proxystyle_destroyed(void* self);
void q_proxystyle_on_destroyed(void* self, void (*slot)(void*));
QObject* q_proxystyle_parent(void* self);
bool q_proxystyle_inherits(void* self, const char* classname);
void q_proxystyle_delete_later(void* self);
int32_t q_proxystyle_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_proxystyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_proxystyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_proxystyle_destroyed1(void* self, void* param1);
void q_proxystyle_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_proxystyle_event_filter(void* self, void* watched, void* event);
bool q_proxystyle_qbase_event_filter(void* self, void* watched, void* event);
void q_proxystyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_proxystyle_timer_event(void* self, void* event);
void q_proxystyle_qbase_timer_event(void* self, void* event);
void q_proxystyle_on_timer_event(void* self, void (*slot)(void*, void*));
void q_proxystyle_child_event(void* self, void* event);
void q_proxystyle_qbase_child_event(void* self, void* event);
void q_proxystyle_on_child_event(void* self, void (*slot)(void*, void*));
void q_proxystyle_custom_event(void* self, void* event);
void q_proxystyle_qbase_custom_event(void* self, void* event);
void q_proxystyle_on_custom_event(void* self, void (*slot)(void*, void*));
void q_proxystyle_connect_notify(void* self, void* signal);
void q_proxystyle_qbase_connect_notify(void* self, void* signal);
void q_proxystyle_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_proxystyle_disconnect_notify(void* self, void* signal);
void q_proxystyle_qbase_disconnect_notify(void* self, void* signal);
void q_proxystyle_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_proxystyle_sender(void* self);
QObject* q_proxystyle_qbase_sender(void* self);
void q_proxystyle_on_sender(void* self, QObject* (*slot)());
int32_t q_proxystyle_sender_signal_index(void* self);
int32_t q_proxystyle_qbase_sender_signal_index(void* self);
void q_proxystyle_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_proxystyle_receivers(void* self, const char* signal);
int32_t q_proxystyle_qbase_receivers(void* self, const char* signal);
void q_proxystyle_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_proxystyle_is_signal_connected(void* self, void* signal);
bool q_proxystyle_qbase_is_signal_connected(void* self, void* signal);
void q_proxystyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_proxystyle_delete(void* self);

#endif
