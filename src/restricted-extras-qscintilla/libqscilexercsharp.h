#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSHARP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSHARP_H

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

QsciLexerCSharp* q_scilexercsharp_new();
QsciLexerCSharp* q_scilexercsharp_new2(void* parent);
QMetaObject* q_scilexercsharp_meta_object(void* self);
void* q_scilexercsharp_metacast(void* self, const char* param1);
int32_t q_scilexercsharp_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexercsharp_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexercsharp_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexercsharp_tr(const char* s);
const char* q_scilexercsharp_language(void* self);
QColor* q_scilexercsharp_default_color(void* self, int style);
bool q_scilexercsharp_default_eol_fill(void* self, int style);
QFont* q_scilexercsharp_default_font(void* self, int style);
QColor* q_scilexercsharp_default_paper(void* self, int style);
const char* q_scilexercsharp_keywords(void* self, int set);
const char* q_scilexercsharp_description(void* self, int style);
const char* q_scilexercsharp_tr2(const char* s, const char* c);
const char* q_scilexercsharp_tr3(const char* s, const char* c, int n);
bool q_scilexercsharp_fold_at_else(void* self);
bool q_scilexercsharp_fold_comments(void* self);
bool q_scilexercsharp_fold_compact(void* self);
bool q_scilexercsharp_fold_preprocessor(void* self);
bool q_scilexercsharp_style_preprocessor(void* self);
void q_scilexercsharp_set_dollars_allowed(void* self, bool allowed);
bool q_scilexercsharp_dollars_allowed(void* self);
void q_scilexercsharp_set_highlight_triple_quoted_strings(void* self, bool enabled);
bool q_scilexercsharp_highlight_triple_quoted_strings(void* self);
void q_scilexercsharp_set_highlight_hash_quoted_strings(void* self, bool enabled);
bool q_scilexercsharp_highlight_hash_quoted_strings(void* self);
void q_scilexercsharp_set_highlight_back_quoted_strings(void* self, bool enabled);
bool q_scilexercsharp_highlight_back_quoted_strings(void* self);
void q_scilexercsharp_set_highlight_escape_sequences(void* self, bool enabled);
bool q_scilexercsharp_highlight_escape_sequences(void* self);
void q_scilexercsharp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);
bool q_scilexercsharp_verbatim_string_escape_sequences_allowed(void* self);
const char* q_scilexercsharp_block_end1(void* self, int* style);
const char* q_scilexercsharp_block_start1(void* self, int* style);
const char* q_scilexercsharp_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexercsharp_apis(void* self);
int32_t q_scilexercsharp_auto_indent_style(void* self);
QsciScintilla* q_scilexercsharp_editor(void* self);
void q_scilexercsharp_set_a_p_is(void* self, void* apis);
void q_scilexercsharp_set_default_color(void* self, void* c);
void q_scilexercsharp_set_default_font(void* self, void* f);
void q_scilexercsharp_set_default_paper(void* self, void* c);
bool q_scilexercsharp_read_settings(void* self, void* qs);
bool q_scilexercsharp_write_settings(void* self, void* qs);
void q_scilexercsharp_color_changed(void* self, void* c, int style);
void q_scilexercsharp_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercsharp_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexercsharp_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexercsharp_font_changed(void* self, void* f, int style);
void q_scilexercsharp_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercsharp_paper_changed(void* self, void* c, int style);
void q_scilexercsharp_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercsharp_property_changed(void* self, const char* prop, const char* val);
void q_scilexercsharp_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexercsharp_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexercsharp_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexercsharp_object_name(void* self);
void q_scilexercsharp_set_object_name(void* self, const char* name);
bool q_scilexercsharp_is_widget_type(void* self);
bool q_scilexercsharp_is_window_type(void* self);
bool q_scilexercsharp_is_quick_item_type(void* self);
bool q_scilexercsharp_signals_blocked(void* self);
bool q_scilexercsharp_block_signals(void* self, bool b);
QThread* q_scilexercsharp_thread(void* self);
void q_scilexercsharp_move_to_thread(void* self, void* thread);
int32_t q_scilexercsharp_start_timer(void* self, int interval);
void q_scilexercsharp_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexercsharp_children(void* self);
void q_scilexercsharp_set_parent(void* self, void* parent);
void q_scilexercsharp_install_event_filter(void* self, void* filterObj);
void q_scilexercsharp_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexercsharp_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexercsharp_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexercsharp_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexercsharp_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexercsharp_dump_object_tree(void* self);
void q_scilexercsharp_dump_object_info(void* self);
bool q_scilexercsharp_set_property(void* self, const char* name, void* value);
QVariant* q_scilexercsharp_property(void* self, const char* name);
const char** q_scilexercsharp_dynamic_property_names(void* self);
QBindingStorage* q_scilexercsharp_binding_storage(void* self);
QBindingStorage* q_scilexercsharp_binding_storage2(void* self);
void q_scilexercsharp_destroyed(void* self);
void q_scilexercsharp_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexercsharp_parent(void* self);
bool q_scilexercsharp_inherits(void* self, const char* classname);
void q_scilexercsharp_delete_later(void* self);
int32_t q_scilexercsharp_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexercsharp_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexercsharp_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexercsharp_destroyed1(void* self, void* param1);
void q_scilexercsharp_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_set_fold_at_else(void* self, bool fold);
void q_scilexercsharp_qbase_set_fold_at_else(void* self, bool fold);
void q_scilexercsharp_on_set_fold_at_else(void* self, void (*slot)(void*, bool));
void q_scilexercsharp_set_fold_comments(void* self, bool fold);
void q_scilexercsharp_qbase_set_fold_comments(void* self, bool fold);
void q_scilexercsharp_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexercsharp_set_fold_compact(void* self, bool fold);
void q_scilexercsharp_qbase_set_fold_compact(void* self, bool fold);
void q_scilexercsharp_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexercsharp_set_fold_preprocessor(void* self, bool fold);
void q_scilexercsharp_qbase_set_fold_preprocessor(void* self, bool fold);
void q_scilexercsharp_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));
void q_scilexercsharp_set_style_preprocessor(void* self, bool style);
void q_scilexercsharp_qbase_set_style_preprocessor(void* self, bool style);
void q_scilexercsharp_on_set_style_preprocessor(void* self, void (*slot)(void*, bool));
const char* q_scilexercsharp_lexer(void* self);
const char* q_scilexercsharp_qbase_lexer(void* self);
void q_scilexercsharp_on_lexer(void* self, const char* (*slot)());
int32_t q_scilexercsharp_lexer_id(void* self);
int32_t q_scilexercsharp_qbase_lexer_id(void* self);
void q_scilexercsharp_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexercsharp_auto_completion_fillups(void* self);
const char* q_scilexercsharp_qbase_auto_completion_fillups(void* self);
void q_scilexercsharp_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexercsharp_auto_completion_word_separators(void* self);
const char** q_scilexercsharp_qbase_auto_completion_word_separators(void* self);
void q_scilexercsharp_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexercsharp_block_end(void* self, int* style);
const char* q_scilexercsharp_qbase_block_end(void* self, int* style);
void q_scilexercsharp_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexercsharp_block_lookback(void* self);
int32_t q_scilexercsharp_qbase_block_lookback(void* self);
void q_scilexercsharp_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexercsharp_block_start(void* self, int* style);
const char* q_scilexercsharp_qbase_block_start(void* self, int* style);
void q_scilexercsharp_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexercsharp_block_start_keyword(void* self, int* style);
const char* q_scilexercsharp_qbase_block_start_keyword(void* self, int* style);
void q_scilexercsharp_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexercsharp_brace_style(void* self);
int32_t q_scilexercsharp_qbase_brace_style(void* self);
void q_scilexercsharp_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexercsharp_case_sensitive(void* self);
bool q_scilexercsharp_qbase_case_sensitive(void* self);
void q_scilexercsharp_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexercsharp_color(void* self, int style);
QColor* q_scilexercsharp_qbase_color(void* self, int style);
void q_scilexercsharp_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexercsharp_eol_fill(void* self, int style);
bool q_scilexercsharp_qbase_eol_fill(void* self, int style);
void q_scilexercsharp_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexercsharp_font(void* self, int style);
QFont* q_scilexercsharp_qbase_font(void* self, int style);
void q_scilexercsharp_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexercsharp_indentation_guide_view(void* self);
int32_t q_scilexercsharp_qbase_indentation_guide_view(void* self);
void q_scilexercsharp_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexercsharp_default_style(void* self);
int32_t q_scilexercsharp_qbase_default_style(void* self);
void q_scilexercsharp_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexercsharp_paper(void* self, int style);
QColor* q_scilexercsharp_qbase_paper(void* self, int style);
void q_scilexercsharp_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexercsharp_default_color_with_style(void* self, int style);
QColor* q_scilexercsharp_qbase_default_color_with_style(void* self, int style);
void q_scilexercsharp_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexercsharp_default_font_with_style(void* self, int style);
QFont* q_scilexercsharp_qbase_default_font_with_style(void* self, int style);
void q_scilexercsharp_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexercsharp_default_paper_with_style(void* self, int style);
QColor* q_scilexercsharp_qbase_default_paper_with_style(void* self, int style);
void q_scilexercsharp_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexercsharp_set_editor(void* self, void* editor);
void q_scilexercsharp_qbase_set_editor(void* self, void* editor);
void q_scilexercsharp_on_set_editor(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_refresh_properties(void* self);
void q_scilexercsharp_qbase_refresh_properties(void* self);
void q_scilexercsharp_on_refresh_properties(void* self, void (*slot)());
int32_t q_scilexercsharp_style_bits_needed(void* self);
int32_t q_scilexercsharp_qbase_style_bits_needed(void* self);
void q_scilexercsharp_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexercsharp_word_characters(void* self);
const char* q_scilexercsharp_qbase_word_characters(void* self);
void q_scilexercsharp_on_word_characters(void* self, const char* (*slot)());
void q_scilexercsharp_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercsharp_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercsharp_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexercsharp_set_color(void* self, void* c, int style);
void q_scilexercsharp_qbase_set_color(void* self, void* c, int style);
void q_scilexercsharp_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexercsharp_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercsharp_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercsharp_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexercsharp_set_font(void* self, void* f, int style);
void q_scilexercsharp_qbase_set_font(void* self, void* f, int style);
void q_scilexercsharp_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexercsharp_set_paper(void* self, void* c, int style);
void q_scilexercsharp_qbase_set_paper(void* self, void* c, int style);
void q_scilexercsharp_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexercsharp_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexercsharp_qbase_read_properties(void* self, void* qs, const char* prefix);
void q_scilexercsharp_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercsharp_write_properties(void* self, void* qs, const char* prefix);
bool q_scilexercsharp_qbase_write_properties(void* self, void* qs, const char* prefix);
void q_scilexercsharp_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercsharp_event(void* self, void* event);
bool q_scilexercsharp_qbase_event(void* self, void* event);
void q_scilexercsharp_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexercsharp_event_filter(void* self, void* watched, void* event);
bool q_scilexercsharp_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexercsharp_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexercsharp_timer_event(void* self, void* event);
void q_scilexercsharp_qbase_timer_event(void* self, void* event);
void q_scilexercsharp_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_child_event(void* self, void* event);
void q_scilexercsharp_qbase_child_event(void* self, void* event);
void q_scilexercsharp_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_custom_event(void* self, void* event);
void q_scilexercsharp_qbase_custom_event(void* self, void* event);
void q_scilexercsharp_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_connect_notify(void* self, void* signal);
void q_scilexercsharp_qbase_connect_notify(void* self, void* signal);
void q_scilexercsharp_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexercsharp_disconnect_notify(void* self, void* signal);
void q_scilexercsharp_qbase_disconnect_notify(void* self, void* signal);
void q_scilexercsharp_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexercsharp_sender(void* self);
QObject* q_scilexercsharp_qbase_sender(void* self);
void q_scilexercsharp_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexercsharp_sender_signal_index(void* self);
int32_t q_scilexercsharp_qbase_sender_signal_index(void* self);
void q_scilexercsharp_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexercsharp_receivers(void* self, const char* signal);
int32_t q_scilexercsharp_qbase_receivers(void* self, const char* signal);
void q_scilexercsharp_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexercsharp_is_signal_connected(void* self, void* signal);
bool q_scilexercsharp_qbase_is_signal_connected(void* self, void* signal);
void q_scilexercsharp_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexercsharp_delete(void* self);

#endif
