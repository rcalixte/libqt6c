#pragma once
#ifndef SRCQT6C_LIBQCOMPLETER_H
#define SRCQT6C_LIBQCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

QCompleter* q_completer_new();
QCompleter* q_completer_new2(void* model);
QCompleter* q_completer_new3(const char* completions[]);
QCompleter* q_completer_new4(void* parent);
QCompleter* q_completer_new5(void* model, void* parent);
QCompleter* q_completer_new6(const char* completions[], void* parent);
QMetaObject* q_completer_meta_object(void* self);
void* q_completer_metacast(void* self, const char* param1);
int32_t q_completer_metacall(void* self, int64_t param1, int param2, void* param3);
void q_completer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_completer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_completer_tr(const char* s);
void q_completer_set_widget(void* self, void* widget);
QWidget* q_completer_widget(void* self);
void q_completer_set_model(void* self, void* c);
QAbstractItemModel* q_completer_model(void* self);
void q_completer_set_completion_mode(void* self, int64_t mode);
int64_t q_completer_completion_mode(void* self);
void q_completer_set_filter_mode(void* self, int64_t filterMode);
int64_t q_completer_filter_mode(void* self);
QAbstractItemView* q_completer_popup(void* self);
void q_completer_set_popup(void* self, void* popup);
void q_completer_set_case_sensitivity(void* self, int64_t caseSensitivity);
int64_t q_completer_case_sensitivity(void* self);
void q_completer_set_model_sorting(void* self, int64_t sorting);
int64_t q_completer_model_sorting(void* self);
void q_completer_set_completion_column(void* self, int column);
int32_t q_completer_completion_column(void* self);
void q_completer_set_completion_role(void* self, int role);
int32_t q_completer_completion_role(void* self);
bool q_completer_wrap_around(void* self);
int32_t q_completer_max_visible_items(void* self);
void q_completer_set_max_visible_items(void* self, int maxItems);
int32_t q_completer_completion_count(void* self);
bool q_completer_set_current_row(void* self, int row);
int32_t q_completer_current_row(void* self);
QModelIndex* q_completer_current_index(void* self);
const char* q_completer_current_completion(void* self);
QAbstractItemModel* q_completer_completion_model(void* self);
const char* q_completer_completion_prefix(void* self);
void q_completer_set_completion_prefix(void* self, const char* prefix);
void q_completer_complete(void* self);
void q_completer_set_wrap_around(void* self, bool wrap);
const char* q_completer_path_from_index(void* self, void* index);
void q_completer_on_path_from_index(void* self, const char* (*slot)(void*, void*));
const char* q_completer_qbase_path_from_index(void* self, void* index);
const char** q_completer_split_path(void* self, const char* path);
void q_completer_on_split_path(void* self, const char** (*slot)(void*, const char*));
const char** q_completer_qbase_split_path(void* self, const char* path);
bool q_completer_event_filter(void* self, void* o, void* e);
void q_completer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_completer_qbase_event_filter(void* self, void* o, void* e);
bool q_completer_event(void* self, void* param1);
void q_completer_on_event(void* self, bool (*slot)(void*, void*));
bool q_completer_qbase_event(void* self, void* param1);
void q_completer_activated(void* self, const char* text);
void q_completer_activated_with_index(void* self, void* index);
void q_completer_highlighted(void* self, const char* text);
void q_completer_highlighted_with_index(void* self, void* index);
const char* q_completer_tr2(const char* s, const char* c);
const char* q_completer_tr3(const char* s, const char* c, int n);
void q_completer_complete1(void* self, void* rect);
const char* q_completer_object_name(void* self);
void q_completer_set_object_name(void* self, const char* name);
bool q_completer_is_widget_type(void* self);
bool q_completer_is_window_type(void* self);
bool q_completer_is_quick_item_type(void* self);
bool q_completer_signals_blocked(void* self);
bool q_completer_block_signals(void* self, bool b);
QThread* q_completer_thread(void* self);
void q_completer_move_to_thread(void* self, void* thread);
int32_t q_completer_start_timer(void* self, int interval);
void q_completer_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_completer_children(void* self);
void q_completer_set_parent(void* self, void* parent);
void q_completer_install_event_filter(void* self, void* filterObj);
void q_completer_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_completer_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_completer_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_completer_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_completer_disconnect_with_q_meta_object_connection(void* param1);
void q_completer_dump_object_tree(void* self);
void q_completer_dump_object_info(void* self);
bool q_completer_set_property(void* self, const char* name, void* value);
QVariant* q_completer_property(void* self, const char* name);
const char** q_completer_dynamic_property_names(void* self);
QBindingStorage* q_completer_binding_storage(void* self);
QBindingStorage* q_completer_binding_storage2(void* self);
void q_completer_destroyed(void* self);
void q_completer_on_destroyed(void* self, void (*slot)(void*));
QObject* q_completer_parent(void* self);
bool q_completer_inherits(void* self, const char* classname);
void q_completer_delete_later(void* self);
int32_t q_completer_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_completer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_completer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_completer_destroyed1(void* self, void* param1);
void q_completer_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_completer_timer_event(void* self, void* event);
void q_completer_qbase_timer_event(void* self, void* event);
void q_completer_on_timer_event(void* self, void (*slot)(void*, void*));
void q_completer_child_event(void* self, void* event);
void q_completer_qbase_child_event(void* self, void* event);
void q_completer_on_child_event(void* self, void (*slot)(void*, void*));
void q_completer_custom_event(void* self, void* event);
void q_completer_qbase_custom_event(void* self, void* event);
void q_completer_on_custom_event(void* self, void (*slot)(void*, void*));
void q_completer_connect_notify(void* self, void* signal);
void q_completer_qbase_connect_notify(void* self, void* signal);
void q_completer_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_completer_disconnect_notify(void* self, void* signal);
void q_completer_qbase_disconnect_notify(void* self, void* signal);
void q_completer_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_completer_sender(void* self);
QObject* q_completer_qbase_sender(void* self);
void q_completer_on_sender(void* self, QObject* (*slot)());
int32_t q_completer_sender_signal_index(void* self);
int32_t q_completer_qbase_sender_signal_index(void* self);
void q_completer_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_completer_receivers(void* self, const char* signal);
int32_t q_completer_qbase_receivers(void* self, const char* signal);
void q_completer_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_completer_is_signal_connected(void* self, void* signal);
bool q_completer_qbase_is_signal_connected(void* self, void* signal);
void q_completer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_completer_delete(void* self);

/// https://doc.qt.io/qt-6/qcompleter.html#types

typedef enum {
    QCOMPLETER_COMPLETIONMODE_POPUPCOMPLETION = 0,
    QCOMPLETER_COMPLETIONMODE_UNFILTEREDPOPUPCOMPLETION = 1,
    QCOMPLETER_COMPLETIONMODE_INLINECOMPLETION = 2
} QCompleter__CompletionMode;

typedef enum {
    QCOMPLETER_MODELSORTING_UNSORTEDMODEL = 0,
    QCOMPLETER_MODELSORTING_CASESENSITIVELYSORTEDMODEL = 1,
    QCOMPLETER_MODELSORTING_CASEINSENSITIVELYSORTEDMODEL = 2
} QCompleter__ModelSorting;

#endif
