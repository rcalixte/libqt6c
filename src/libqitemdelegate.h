#pragma once
#ifndef SRCQT6C_LIBQITEMDELEGATE_H
#define SRCQT6C_LIBQITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqfont.h"
#include "libqitemeditorfactory.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpixmap.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QItemDelegate* q_itemdelegate_new();
QItemDelegate* q_itemdelegate_new2(void* parent);
QMetaObject* q_itemdelegate_meta_object(void* self);
void* q_itemdelegate_metacast(void* self, const char* param1);
int32_t q_itemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);
void q_itemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_itemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_itemdelegate_tr(const char* s);
bool q_itemdelegate_has_clipping(void* self);
void q_itemdelegate_set_clipping(void* self, bool clip);
void q_itemdelegate_paint(void* self, void* painter, void* option, void* index);
void q_itemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*));
void q_itemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);
QSize* q_itemdelegate_size_hint(void* self, void* option, void* index);
void q_itemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*));
QSize* q_itemdelegate_qbase_size_hint(void* self, void* option, void* index);
QWidget* q_itemdelegate_create_editor(void* self, void* parent, void* option, void* index);
void q_itemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*));
QWidget* q_itemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);
void q_itemdelegate_set_editor_data(void* self, void* editor, void* index);
void q_itemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*));
void q_itemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);
void q_itemdelegate_set_model_data(void* self, void* editor, void* model, void* index);
void q_itemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*));
void q_itemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);
void q_itemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);
void q_itemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*));
void q_itemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);
QItemEditorFactory* q_itemdelegate_item_editor_factory(void* self);
void q_itemdelegate_set_item_editor_factory(void* self, void* factory);
void q_itemdelegate_draw_display(void* self, void* painter, void* option, void* rect, const char* text);
void q_itemdelegate_on_draw_display(void* self, void (*slot)(void*, void*, void*, void*, const char*));
void q_itemdelegate_qbase_draw_display(void* self, void* painter, void* option, void* rect, const char* text);
void q_itemdelegate_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);
void q_itemdelegate_on_draw_decoration(void* self, void (*slot)(void*, void*, void*, void*, void*));
void q_itemdelegate_qbase_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);
void q_itemdelegate_draw_focus(void* self, void* painter, void* option, void* rect);
void q_itemdelegate_on_draw_focus(void* self, void (*slot)(void*, void*, void*, void*));
void q_itemdelegate_qbase_draw_focus(void* self, void* painter, void* option, void* rect);
void q_itemdelegate_draw_check(void* self, void* painter, void* option, void* rect, int64_t state);
void q_itemdelegate_on_draw_check(void* self, void (*slot)(void*, void*, void*, void*, int64_t));
void q_itemdelegate_qbase_draw_check(void* self, void* painter, void* option, void* rect, int64_t state);
void q_itemdelegate_draw_background(void* self, void* painter, void* option, void* index);
void q_itemdelegate_on_draw_background(void* self, void (*slot)(void*, void*, void*, void*));
void q_itemdelegate_qbase_draw_background(void* self, void* painter, void* option, void* index);
void q_itemdelegate_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);
void q_itemdelegate_on_do_layout(void* self, void (*slot)(void*, void*, void*, void*, void*, bool));
void q_itemdelegate_qbase_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);
QRect* q_itemdelegate_rect(void* self, void* option, void* index, int role);
void q_itemdelegate_on_rect(void* self, QRect* (*slot)(void*, void*, void*, int));
QRect* q_itemdelegate_qbase_rect(void* self, void* option, void* index, int role);
bool q_itemdelegate_event_filter(void* self, void* object, void* event);
void q_itemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_itemdelegate_qbase_event_filter(void* self, void* object, void* event);
bool q_itemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);
void q_itemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));
bool q_itemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);
QStyleOptionViewItem* q_itemdelegate_set_options(void* self, void* index, void* option);
void q_itemdelegate_on_set_options(void* self, QStyleOptionViewItem* (*slot)(void*, void*, void*));
QStyleOptionViewItem* q_itemdelegate_qbase_set_options(void* self, void* index, void* option);
QPixmap* q_itemdelegate_decoration(void* self, void* option, void* variant);
void q_itemdelegate_on_decoration(void* self, QPixmap* (*slot)(void*, void*, void*));
QPixmap* q_itemdelegate_qbase_decoration(void* self, void* option, void* variant);
QRect* q_itemdelegate_do_check(void* self, void* option, void* bounding, void* variant);
void q_itemdelegate_on_do_check(void* self, QRect* (*slot)(void*, void*, void*, void*));
QRect* q_itemdelegate_qbase_do_check(void* self, void* option, void* bounding, void* variant);
QRect* q_itemdelegate_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);
void q_itemdelegate_on_text_rectangle(void* self, QRect* (*slot)(void*, void*, void*, void*, const char*));
QRect* q_itemdelegate_qbase_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);
const char* q_itemdelegate_tr2(const char* s, const char* c);
const char* q_itemdelegate_tr3(const char* s, const char* c, int n);
void q_itemdelegate_commit_data(void* self, void* editor);
void q_itemdelegate_on_commit_data(void* self, void (*slot)(void*, void*));
void q_itemdelegate_close_editor(void* self, void* editor);
void q_itemdelegate_on_close_editor(void* self, void (*slot)(void*, void*));
void q_itemdelegate_size_hint_changed(void* self, void* param1);
void q_itemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*));
void q_itemdelegate_close_editor2(void* self, void* editor, int64_t hint);
void q_itemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t));
const char* q_itemdelegate_object_name(void* self);
void q_itemdelegate_set_object_name(void* self, const char* name);
bool q_itemdelegate_is_widget_type(void* self);
bool q_itemdelegate_is_window_type(void* self);
bool q_itemdelegate_is_quick_item_type(void* self);
bool q_itemdelegate_signals_blocked(void* self);
bool q_itemdelegate_block_signals(void* self, bool b);
QThread* q_itemdelegate_thread(void* self);
void q_itemdelegate_move_to_thread(void* self, void* thread);
int32_t q_itemdelegate_start_timer(void* self, int interval);
void q_itemdelegate_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_itemdelegate_children(void* self);
void q_itemdelegate_set_parent(void* self, void* parent);
void q_itemdelegate_install_event_filter(void* self, void* filterObj);
void q_itemdelegate_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_itemdelegate_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_itemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_itemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_itemdelegate_disconnect_with_q_meta_object_connection(void* param1);
void q_itemdelegate_dump_object_tree(void* self);
void q_itemdelegate_dump_object_info(void* self);
bool q_itemdelegate_set_property(void* self, const char* name, void* value);
QVariant* q_itemdelegate_property(void* self, const char* name);
const char** q_itemdelegate_dynamic_property_names(void* self);
QBindingStorage* q_itemdelegate_binding_storage(void* self);
QBindingStorage* q_itemdelegate_binding_storage2(void* self);
void q_itemdelegate_destroyed(void* self);
void q_itemdelegate_on_destroyed(void* self, void (*slot)(void*));
QObject* q_itemdelegate_parent(void* self);
bool q_itemdelegate_inherits(void* self, const char* classname);
void q_itemdelegate_delete_later(void* self);
int32_t q_itemdelegate_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_itemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_itemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_itemdelegate_destroyed1(void* self, void* param1);
void q_itemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_itemdelegate_destroy_editor(void* self, void* editor, void* index);
void q_itemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);
void q_itemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*));
bool q_itemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);
bool q_itemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);
void q_itemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));
libqt_list /* of int */ q_itemdelegate_painting_roles(void* self);
libqt_list /* of int */ q_itemdelegate_qbase_painting_roles(void* self);
void q_itemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)());
bool q_itemdelegate_event(void* self, void* event);
bool q_itemdelegate_qbase_event(void* self, void* event);
void q_itemdelegate_on_event(void* self, bool (*slot)(void*, void*));
void q_itemdelegate_timer_event(void* self, void* event);
void q_itemdelegate_qbase_timer_event(void* self, void* event);
void q_itemdelegate_on_timer_event(void* self, void (*slot)(void*, void*));
void q_itemdelegate_child_event(void* self, void* event);
void q_itemdelegate_qbase_child_event(void* self, void* event);
void q_itemdelegate_on_child_event(void* self, void (*slot)(void*, void*));
void q_itemdelegate_custom_event(void* self, void* event);
void q_itemdelegate_qbase_custom_event(void* self, void* event);
void q_itemdelegate_on_custom_event(void* self, void (*slot)(void*, void*));
void q_itemdelegate_connect_notify(void* self, void* signal);
void q_itemdelegate_qbase_connect_notify(void* self, void* signal);
void q_itemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_itemdelegate_disconnect_notify(void* self, void* signal);
void q_itemdelegate_qbase_disconnect_notify(void* self, void* signal);
void q_itemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_itemdelegate_sender(void* self);
QObject* q_itemdelegate_qbase_sender(void* self);
void q_itemdelegate_on_sender(void* self, QObject* (*slot)());
int32_t q_itemdelegate_sender_signal_index(void* self);
int32_t q_itemdelegate_qbase_sender_signal_index(void* self);
void q_itemdelegate_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_itemdelegate_receivers(void* self, const char* signal);
int32_t q_itemdelegate_qbase_receivers(void* self, const char* signal);
void q_itemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_itemdelegate_is_signal_connected(void* self, void* signal);
bool q_itemdelegate_qbase_is_signal_connected(void* self, void* signal);
void q_itemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_itemdelegate_delete(void* self);

#endif
