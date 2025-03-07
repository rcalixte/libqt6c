#pragma once
#ifndef SRCQT6C_LIBQSTYLEDITEMDELEGATE_H
#define SRCQT6C_LIBQSTYLEDITEMDELEGATE_H

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
#include "libqitemeditorfactory.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QStyledItemDelegate* q_styleditemdelegate_new();
QStyledItemDelegate* q_styleditemdelegate_new2(void* parent);
QMetaObject* q_styleditemdelegate_meta_object(void* self);
void* q_styleditemdelegate_metacast(void* self, const char* param1);
int32_t q_styleditemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);
void q_styleditemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_styleditemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_styleditemdelegate_tr(const char* s);
void q_styleditemdelegate_paint(void* self, void* painter, void* option, void* index);
void q_styleditemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*));
void q_styleditemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);
QSize* q_styleditemdelegate_size_hint(void* self, void* option, void* index);
void q_styleditemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*));
QSize* q_styleditemdelegate_qbase_size_hint(void* self, void* option, void* index);
QWidget* q_styleditemdelegate_create_editor(void* self, void* parent, void* option, void* index);
void q_styleditemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*));
QWidget* q_styleditemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);
void q_styleditemdelegate_set_editor_data(void* self, void* editor, void* index);
void q_styleditemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*));
void q_styleditemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);
void q_styleditemdelegate_set_model_data(void* self, void* editor, void* model, void* index);
void q_styleditemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*));
void q_styleditemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);
void q_styleditemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);
void q_styleditemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*));
void q_styleditemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);
QItemEditorFactory* q_styleditemdelegate_item_editor_factory(void* self);
void q_styleditemdelegate_set_item_editor_factory(void* self, void* factory);
const char* q_styleditemdelegate_display_text(void* self, void* value, void* locale);
void q_styleditemdelegate_on_display_text(void* self, const char* (*slot)(void*, void*, void*));
const char* q_styleditemdelegate_qbase_display_text(void* self, void* value, void* locale);
void q_styleditemdelegate_init_style_option(void* self, void* option, void* index);
void q_styleditemdelegate_on_init_style_option(void* self, void (*slot)(void*, void*, void*));
void q_styleditemdelegate_qbase_init_style_option(void* self, void* option, void* index);
bool q_styleditemdelegate_event_filter(void* self, void* object, void* event);
void q_styleditemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_styleditemdelegate_qbase_event_filter(void* self, void* object, void* event);
bool q_styleditemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);
void q_styleditemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));
bool q_styleditemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);
const char* q_styleditemdelegate_tr2(const char* s, const char* c);
const char* q_styleditemdelegate_tr3(const char* s, const char* c, int n);
void q_styleditemdelegate_commit_data(void* self, void* editor);
void q_styleditemdelegate_on_commit_data(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_close_editor(void* self, void* editor);
void q_styleditemdelegate_on_close_editor(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_size_hint_changed(void* self, void* param1);
void q_styleditemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_close_editor2(void* self, void* editor, int64_t hint);
void q_styleditemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t));
const char* q_styleditemdelegate_object_name(void* self);
void q_styleditemdelegate_set_object_name(void* self, const char* name);
bool q_styleditemdelegate_is_widget_type(void* self);
bool q_styleditemdelegate_is_window_type(void* self);
bool q_styleditemdelegate_is_quick_item_type(void* self);
bool q_styleditemdelegate_signals_blocked(void* self);
bool q_styleditemdelegate_block_signals(void* self, bool b);
QThread* q_styleditemdelegate_thread(void* self);
void q_styleditemdelegate_move_to_thread(void* self, void* thread);
int32_t q_styleditemdelegate_start_timer(void* self, int interval);
void q_styleditemdelegate_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_styleditemdelegate_children(void* self);
void q_styleditemdelegate_set_parent(void* self, void* parent);
void q_styleditemdelegate_install_event_filter(void* self, void* filterObj);
void q_styleditemdelegate_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_styleditemdelegate_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_styleditemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_styleditemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_styleditemdelegate_disconnect_with_q_meta_object_connection(void* param1);
void q_styleditemdelegate_dump_object_tree(void* self);
void q_styleditemdelegate_dump_object_info(void* self);
bool q_styleditemdelegate_set_property(void* self, const char* name, void* value);
QVariant* q_styleditemdelegate_property(void* self, const char* name);
const char** q_styleditemdelegate_dynamic_property_names(void* self);
QBindingStorage* q_styleditemdelegate_binding_storage(void* self);
QBindingStorage* q_styleditemdelegate_binding_storage2(void* self);
void q_styleditemdelegate_destroyed(void* self);
void q_styleditemdelegate_on_destroyed(void* self, void (*slot)(void*));
QObject* q_styleditemdelegate_parent(void* self);
bool q_styleditemdelegate_inherits(void* self, const char* classname);
void q_styleditemdelegate_delete_later(void* self);
int32_t q_styleditemdelegate_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_styleditemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_styleditemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_styleditemdelegate_destroyed1(void* self, void* param1);
void q_styleditemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_destroy_editor(void* self, void* editor, void* index);
void q_styleditemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);
void q_styleditemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*));
bool q_styleditemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);
bool q_styleditemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);
void q_styleditemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));
libqt_list /* of int */ q_styleditemdelegate_painting_roles(void* self);
libqt_list /* of int */ q_styleditemdelegate_qbase_painting_roles(void* self);
void q_styleditemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)());
bool q_styleditemdelegate_event(void* self, void* event);
bool q_styleditemdelegate_qbase_event(void* self, void* event);
void q_styleditemdelegate_on_event(void* self, bool (*slot)(void*, void*));
void q_styleditemdelegate_timer_event(void* self, void* event);
void q_styleditemdelegate_qbase_timer_event(void* self, void* event);
void q_styleditemdelegate_on_timer_event(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_child_event(void* self, void* event);
void q_styleditemdelegate_qbase_child_event(void* self, void* event);
void q_styleditemdelegate_on_child_event(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_custom_event(void* self, void* event);
void q_styleditemdelegate_qbase_custom_event(void* self, void* event);
void q_styleditemdelegate_on_custom_event(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_connect_notify(void* self, void* signal);
void q_styleditemdelegate_qbase_connect_notify(void* self, void* signal);
void q_styleditemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_styleditemdelegate_disconnect_notify(void* self, void* signal);
void q_styleditemdelegate_qbase_disconnect_notify(void* self, void* signal);
void q_styleditemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_styleditemdelegate_sender(void* self);
QObject* q_styleditemdelegate_qbase_sender(void* self);
void q_styleditemdelegate_on_sender(void* self, QObject* (*slot)());
int32_t q_styleditemdelegate_sender_signal_index(void* self);
int32_t q_styleditemdelegate_qbase_sender_signal_index(void* self);
void q_styleditemdelegate_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_styleditemdelegate_receivers(void* self, const char* signal);
int32_t q_styleditemdelegate_qbase_receivers(void* self, const char* signal);
void q_styleditemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_styleditemdelegate_is_signal_connected(void* self, void* signal);
bool q_styleditemdelegate_qbase_is_signal_connected(void* self, void* signal);
void q_styleditemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_styleditemdelegate_delete(void* self);

#endif
