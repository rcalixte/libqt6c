#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsettings.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QsciLexer* q_scilexer_new();
QsciLexer* q_scilexer_new2(void* parent);
QMetaObject* q_scilexer_meta_object(void* self);
void* q_scilexer_metacast(void* self, const char* param1);
int32_t q_scilexer_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexer_tr(const char* s);
const char* q_scilexer_language(void* self);
void q_scilexer_on_language(void* self, const char* (*slot)());
const char* q_scilexer_qbase_language(void* self);
const char* q_scilexer_lexer(void* self);
void q_scilexer_on_lexer(void* self, const char* (*slot)());
const char* q_scilexer_qbase_lexer(void* self);
int32_t q_scilexer_lexer_id(void* self);
void q_scilexer_on_lexer_id(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_lexer_id(void* self);
QsciAbstractAPIs* q_scilexer_apis(void* self);
const char* q_scilexer_auto_completion_fillups(void* self);
void q_scilexer_on_auto_completion_fillups(void* self, const char* (*slot)());
const char* q_scilexer_qbase_auto_completion_fillups(void* self);
const char** q_scilexer_auto_completion_word_separators(void* self);
void q_scilexer_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char** q_scilexer_qbase_auto_completion_word_separators(void* self);
int32_t q_scilexer_auto_indent_style(void* self);
const char* q_scilexer_block_end(void* self, int* style);
void q_scilexer_on_block_end(void* self, const char* (*slot)(void*, int*));
const char* q_scilexer_qbase_block_end(void* self, int* style);
int32_t q_scilexer_block_lookback(void* self);
void q_scilexer_on_block_lookback(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_block_lookback(void* self);
const char* q_scilexer_block_start(void* self, int* style);
void q_scilexer_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexer_qbase_block_start(void* self, int* style);
const char* q_scilexer_block_start_keyword(void* self, int* style);
void q_scilexer_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
const char* q_scilexer_qbase_block_start_keyword(void* self, int* style);
int32_t q_scilexer_brace_style(void* self);
void q_scilexer_on_brace_style(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_brace_style(void* self);
bool q_scilexer_case_sensitive(void* self);
void q_scilexer_on_case_sensitive(void* self, bool (*slot)());
bool q_scilexer_qbase_case_sensitive(void* self);
QColor* q_scilexer_color(void* self, int style);
void q_scilexer_on_color(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexer_qbase_color(void* self, int style);
bool q_scilexer_eol_fill(void* self, int style);
void q_scilexer_on_eol_fill(void* self, bool (*slot)(void*, int));
bool q_scilexer_qbase_eol_fill(void* self, int style);
QFont* q_scilexer_font(void* self, int style);
void q_scilexer_on_font(void* self, QFont* (*slot)(void*, int));
QFont* q_scilexer_qbase_font(void* self, int style);
int32_t q_scilexer_indentation_guide_view(void* self);
void q_scilexer_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_indentation_guide_view(void* self);
const char* q_scilexer_keywords(void* self, int set);
void q_scilexer_on_keywords(void* self, const char* (*slot)(void*, int));
const char* q_scilexer_qbase_keywords(void* self, int set);
int32_t q_scilexer_default_style(void* self);
void q_scilexer_on_default_style(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_default_style(void* self);
const char* q_scilexer_description(void* self, int style);
void q_scilexer_on_description(void* self, const char* (*slot)(void*, int));
const char* q_scilexer_qbase_description(void* self, int style);
QColor* q_scilexer_paper(void* self, int style);
void q_scilexer_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexer_qbase_paper(void* self, int style);
QColor* q_scilexer_default_color(void* self);
QColor* q_scilexer_default_color_with_style(void* self, int style);
void q_scilexer_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexer_qbase_default_color_with_style(void* self, int style);
bool q_scilexer_default_eol_fill(void* self, int style);
void q_scilexer_on_default_eol_fill(void* self, bool (*slot)(void*, int));
bool q_scilexer_qbase_default_eol_fill(void* self, int style);
QFont* q_scilexer_default_font(void* self);
QFont* q_scilexer_default_font_with_style(void* self, int style);
void q_scilexer_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QFont* q_scilexer_qbase_default_font_with_style(void* self, int style);
QColor* q_scilexer_default_paper(void* self);
QColor* q_scilexer_default_paper_with_style(void* self, int style);
void q_scilexer_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexer_qbase_default_paper_with_style(void* self, int style);
QsciScintilla* q_scilexer_editor(void* self);
void q_scilexer_set_a_p_is(void* self, void* apis);
void q_scilexer_set_default_color(void* self, void* c);
void q_scilexer_set_default_font(void* self, void* f);
void q_scilexer_set_default_paper(void* self, void* c);
void q_scilexer_set_editor(void* self, void* editor);
void q_scilexer_on_set_editor(void* self, void (*slot)(void*, void*));
void q_scilexer_qbase_set_editor(void* self, void* editor);
bool q_scilexer_read_settings(void* self, void* qs);
void q_scilexer_refresh_properties(void* self);
void q_scilexer_on_refresh_properties(void* self, void (*slot)());
void q_scilexer_qbase_refresh_properties(void* self);
int32_t q_scilexer_style_bits_needed(void* self);
void q_scilexer_on_style_bits_needed(void* self, int32_t (*slot)());
int32_t q_scilexer_qbase_style_bits_needed(void* self);
const char* q_scilexer_word_characters(void* self);
void q_scilexer_on_word_characters(void* self, const char* (*slot)());
const char* q_scilexer_qbase_word_characters(void* self);
bool q_scilexer_write_settings(void* self, void* qs);
void q_scilexer_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexer_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexer_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexer_set_color(void* self, void* c, int style);
void q_scilexer_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexer_qbase_set_color(void* self, void* c, int style);
void q_scilexer_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexer_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexer_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexer_set_font(void* self, void* f, int style);
void q_scilexer_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexer_qbase_set_font(void* self, void* f, int style);
void q_scilexer_set_paper(void* self, void* c, int style);
void q_scilexer_on_set_paper(void* self, void (*slot)(void*, void*, int));
void q_scilexer_qbase_set_paper(void* self, void* c, int style);
void q_scilexer_color_changed(void* self, void* c, int style);
void q_scilexer_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexer_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexer_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexer_font_changed(void* self, void* f, int style);
void q_scilexer_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexer_paper_changed(void* self, void* c, int style);
void q_scilexer_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexer_property_changed(void* self, const char* prop, const char* val);
void q_scilexer_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexer_read_properties(void* self, void* qs, const char* prefix);
void q_scilexer_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexer_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexer_write_properties(void* self, void* qs, const char* prefix);
void q_scilexer_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexer_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexer_tr2(const char* s, const char* c);
const char* q_scilexer_tr3(const char* s, const char* c, int n);
bool q_scilexer_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexer_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexer_object_name(void* self);
void q_scilexer_set_object_name(void* self, const char* name);
bool q_scilexer_is_widget_type(void* self);
bool q_scilexer_is_window_type(void* self);
bool q_scilexer_is_quick_item_type(void* self);
bool q_scilexer_signals_blocked(void* self);
bool q_scilexer_block_signals(void* self, bool b);
QThread* q_scilexer_thread(void* self);
void q_scilexer_move_to_thread(void* self, void* thread);
int32_t q_scilexer_start_timer(void* self, int interval);
void q_scilexer_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexer_children(void* self);
void q_scilexer_set_parent(void* self, void* parent);
void q_scilexer_install_event_filter(void* self, void* filterObj);
void q_scilexer_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexer_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexer_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexer_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexer_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexer_dump_object_tree(void* self);
void q_scilexer_dump_object_info(void* self);
bool q_scilexer_set_property(void* self, const char* name, void* value);
QVariant* q_scilexer_property(void* self, const char* name);
const char** q_scilexer_dynamic_property_names(void* self);
QBindingStorage* q_scilexer_binding_storage(void* self);
QBindingStorage* q_scilexer_binding_storage2(void* self);
void q_scilexer_destroyed(void* self);
void q_scilexer_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexer_parent(void* self);
bool q_scilexer_inherits(void* self, const char* classname);
void q_scilexer_delete_later(void* self);
int32_t q_scilexer_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexer_destroyed1(void* self, void* param1);
void q_scilexer_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_scilexer_event(void* self, void* event);
bool q_scilexer_qbase_event(void* self, void* event);
void q_scilexer_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexer_event_filter(void* self, void* watched, void* event);
bool q_scilexer_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexer_timer_event(void* self, void* event);
void q_scilexer_qbase_timer_event(void* self, void* event);
void q_scilexer_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexer_child_event(void* self, void* event);
void q_scilexer_qbase_child_event(void* self, void* event);
void q_scilexer_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexer_custom_event(void* self, void* event);
void q_scilexer_qbase_custom_event(void* self, void* event);
void q_scilexer_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexer_connect_notify(void* self, void* signal);
void q_scilexer_qbase_connect_notify(void* self, void* signal);
void q_scilexer_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexer_disconnect_notify(void* self, void* signal);
void q_scilexer_qbase_disconnect_notify(void* self, void* signal);
void q_scilexer_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexer_sender(void* self);
QObject* q_scilexer_qbase_sender(void* self);
void q_scilexer_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexer_sender_signal_index(void* self);
int32_t q_scilexer_qbase_sender_signal_index(void* self);
void q_scilexer_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexer_receivers(void* self, const char* signal);
int32_t q_scilexer_qbase_receivers(void* self, const char* signal);
void q_scilexer_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexer_is_signal_connected(void* self, void* signal);
bool q_scilexer_qbase_is_signal_connected(void* self, void* signal);
void q_scilexer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexer_delete(void* self);

#endif
