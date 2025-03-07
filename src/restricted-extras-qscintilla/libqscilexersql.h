#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERSQL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERSQL_H

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

QsciLexerSQL* q_scilexersql_new();
QsciLexerSQL* q_scilexersql_new2(void* parent);
QMetaObject* q_scilexersql_meta_object(void* self);
void* q_scilexersql_metacast(void* self, const char* param1);
int32_t q_scilexersql_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexersql_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexersql_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexersql_tr(const char* s);
const char* q_scilexersql_language(void* self);
const char* q_scilexersql_lexer(void* self);
int32_t q_scilexersql_brace_style(void* self);
QColor* q_scilexersql_default_color(void* self, int style);
bool q_scilexersql_default_eol_fill(void* self, int style);
QFont* q_scilexersql_default_font(void* self, int style);
QColor* q_scilexersql_default_paper(void* self, int style);
const char* q_scilexersql_keywords(void* self, int set);
const char* q_scilexersql_description(void* self, int style);
void q_scilexersql_refresh_properties(void* self);
bool q_scilexersql_backslash_escapes(void* self);
void q_scilexersql_set_dotted_words(void* self, bool enable);
bool q_scilexersql_dotted_words(void* self);
void q_scilexersql_set_fold_at_else(void* self, bool fold);
bool q_scilexersql_fold_at_else(void* self);
bool q_scilexersql_fold_comments(void* self);
bool q_scilexersql_fold_compact(void* self);
void q_scilexersql_set_fold_only_begin(void* self, bool fold);
bool q_scilexersql_fold_only_begin(void* self);
void q_scilexersql_set_hash_comments(void* self, bool enable);
bool q_scilexersql_hash_comments(void* self);
void q_scilexersql_set_quoted_identifiers(void* self, bool enable);
bool q_scilexersql_quoted_identifiers(void* self);
void q_scilexersql_set_backslash_escapes(void* self, bool enable);
void q_scilexersql_on_set_backslash_escapes(void* self, void (*slot)(void*, bool));
void q_scilexersql_qbase_set_backslash_escapes(void* self, bool enable);
void q_scilexersql_set_fold_comments(void* self, bool fold);
void q_scilexersql_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexersql_qbase_set_fold_comments(void* self, bool fold);
void q_scilexersql_set_fold_compact(void* self, bool fold);
void q_scilexersql_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexersql_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexersql_read_properties(void* self, void* qs, const char* prefix);
void q_scilexersql_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexersql_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexersql_write_properties(void* self, void* qs, const char* prefix);
void q_scilexersql_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexersql_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexersql_tr2(const char* s, const char* c);
const char* q_scilexersql_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexersql_apis(void* self);
int32_t q_scilexersql_auto_indent_style(void* self);
QsciScintilla* q_scilexersql_editor(void* self);
void q_scilexersql_set_a_p_is(void* self, void* apis);
void q_scilexersql_set_default_color(void* self, void* c);
void q_scilexersql_set_default_font(void* self, void* f);
void q_scilexersql_set_default_paper(void* self, void* c);
bool q_scilexersql_read_settings(void* self, void* qs);
bool q_scilexersql_write_settings(void* self, void* qs);
void q_scilexersql_color_changed(void* self, void* c, int style);
void q_scilexersql_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexersql_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexersql_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexersql_font_changed(void* self, void* f, int style);
void q_scilexersql_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexersql_paper_changed(void* self, void* c, int style);
void q_scilexersql_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexersql_property_changed(void* self, const char* prop, const char* val);
void q_scilexersql_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexersql_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexersql_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexersql_object_name(void* self);
void q_scilexersql_set_object_name(void* self, const char* name);
bool q_scilexersql_is_widget_type(void* self);
bool q_scilexersql_is_window_type(void* self);
bool q_scilexersql_is_quick_item_type(void* self);
bool q_scilexersql_signals_blocked(void* self);
bool q_scilexersql_block_signals(void* self, bool b);
QThread* q_scilexersql_thread(void* self);
void q_scilexersql_move_to_thread(void* self, void* thread);
int32_t q_scilexersql_start_timer(void* self, int interval);
void q_scilexersql_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexersql_children(void* self);
void q_scilexersql_set_parent(void* self, void* parent);
void q_scilexersql_install_event_filter(void* self, void* filterObj);
void q_scilexersql_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexersql_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexersql_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexersql_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexersql_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexersql_dump_object_tree(void* self);
void q_scilexersql_dump_object_info(void* self);
bool q_scilexersql_set_property(void* self, const char* name, void* value);
QVariant* q_scilexersql_property(void* self, const char* name);
const char** q_scilexersql_dynamic_property_names(void* self);
QBindingStorage* q_scilexersql_binding_storage(void* self);
QBindingStorage* q_scilexersql_binding_storage2(void* self);
void q_scilexersql_destroyed(void* self);
void q_scilexersql_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexersql_parent(void* self);
bool q_scilexersql_inherits(void* self, const char* classname);
void q_scilexersql_delete_later(void* self);
int32_t q_scilexersql_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexersql_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexersql_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexersql_destroyed1(void* self, void* param1);
void q_scilexersql_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexersql_lexer_id(void* self);
int32_t q_scilexersql_qbase_lexer_id(void* self);
void q_scilexersql_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexersql_auto_completion_fillups(void* self);
const char* q_scilexersql_qbase_auto_completion_fillups(void* self);
void q_scilexersql_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexersql_auto_completion_word_separators(void* self);
const char** q_scilexersql_qbase_auto_completion_word_separators(void* self);
void q_scilexersql_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexersql_block_end(void* self, int* style);
const char* q_scilexersql_qbase_block_end(void* self, int* style);
void q_scilexersql_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexersql_block_lookback(void* self);
int32_t q_scilexersql_qbase_block_lookback(void* self);
void q_scilexersql_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexersql_block_start(void* self, int* style);
const char* q_scilexersql_qbase_block_start(void* self, int* style);
void q_scilexersql_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexersql_block_start_keyword(void* self, int* style);
const char* q_scilexersql_qbase_block_start_keyword(void* self, int* style);
void q_scilexersql_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexersql_case_sensitive(void* self);
bool q_scilexersql_qbase_case_sensitive(void* self);
void q_scilexersql_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexersql_color(void* self, int style);
QColor* q_scilexersql_qbase_color(void* self, int style);
void q_scilexersql_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexersql_eol_fill(void* self, int style);
bool q_scilexersql_qbase_eol_fill(void* self, int style);
void q_scilexersql_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexersql_font(void* self, int style);
QFont* q_scilexersql_qbase_font(void* self, int style);
void q_scilexersql_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexersql_indentation_guide_view(void* self);
int32_t q_scilexersql_qbase_indentation_guide_view(void* self);
void q_scilexersql_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexersql_default_style(void* self);
int32_t q_scilexersql_qbase_default_style(void* self);
void q_scilexersql_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexersql_paper(void* self, int style);
QColor* q_scilexersql_qbase_paper(void* self, int style);
void q_scilexersql_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexersql_default_color_with_style(void* self, int style);
QColor* q_scilexersql_qbase_default_color_with_style(void* self, int style);
void q_scilexersql_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexersql_default_font_with_style(void* self, int style);
QFont* q_scilexersql_qbase_default_font_with_style(void* self, int style);
void q_scilexersql_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexersql_default_paper_with_style(void* self, int style);
QColor* q_scilexersql_qbase_default_paper_with_style(void* self, int style);
void q_scilexersql_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexersql_set_editor(void* self, void* editor);
void q_scilexersql_qbase_set_editor(void* self, void* editor);
void q_scilexersql_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexersql_style_bits_needed(void* self);
int32_t q_scilexersql_qbase_style_bits_needed(void* self);
void q_scilexersql_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexersql_word_characters(void* self);
const char* q_scilexersql_qbase_word_characters(void* self);
void q_scilexersql_on_word_characters(void* self, const char* (*slot)());
void q_scilexersql_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexersql_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexersql_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexersql_set_color(void* self, void* c, int style);
void q_scilexersql_qbase_set_color(void* self, void* c, int style);
void q_scilexersql_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexersql_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexersql_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexersql_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexersql_set_font(void* self, void* f, int style);
void q_scilexersql_qbase_set_font(void* self, void* f, int style);
void q_scilexersql_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexersql_set_paper(void* self, void* c, int style);
void q_scilexersql_qbase_set_paper(void* self, void* c, int style);
void q_scilexersql_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexersql_event(void* self, void* event);
bool q_scilexersql_qbase_event(void* self, void* event);
void q_scilexersql_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexersql_event_filter(void* self, void* watched, void* event);
bool q_scilexersql_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexersql_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexersql_timer_event(void* self, void* event);
void q_scilexersql_qbase_timer_event(void* self, void* event);
void q_scilexersql_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexersql_child_event(void* self, void* event);
void q_scilexersql_qbase_child_event(void* self, void* event);
void q_scilexersql_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexersql_custom_event(void* self, void* event);
void q_scilexersql_qbase_custom_event(void* self, void* event);
void q_scilexersql_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexersql_connect_notify(void* self, void* signal);
void q_scilexersql_qbase_connect_notify(void* self, void* signal);
void q_scilexersql_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexersql_disconnect_notify(void* self, void* signal);
void q_scilexersql_qbase_disconnect_notify(void* self, void* signal);
void q_scilexersql_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexersql_sender(void* self);
QObject* q_scilexersql_qbase_sender(void* self);
void q_scilexersql_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexersql_sender_signal_index(void* self);
int32_t q_scilexersql_qbase_sender_signal_index(void* self);
void q_scilexersql_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexersql_receivers(void* self, const char* signal);
int32_t q_scilexersql_qbase_receivers(void* self, const char* signal);
void q_scilexersql_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexersql_is_signal_connected(void* self, void* signal);
bool q_scilexersql_qbase_is_signal_connected(void* self, void* signal);
void q_scilexersql_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexersql_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexersql.html#types

typedef enum {
    QSCILEXERSQL__DEFAULT = 0,
    QSCILEXERSQL__COMMENT = 1,
    QSCILEXERSQL__COMMENTLINE = 2,
    QSCILEXERSQL__COMMENTDOC = 3,
    QSCILEXERSQL__NUMBER = 4,
    QSCILEXERSQL__KEYWORD = 5,
    QSCILEXERSQL__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERSQL__SINGLEQUOTEDSTRING = 7,
    QSCILEXERSQL__PLUSKEYWORD = 8,
    QSCILEXERSQL__PLUSPROMPT = 9,
    QSCILEXERSQL__OPERATOR = 10,
    QSCILEXERSQL__IDENTIFIER = 11,
    QSCILEXERSQL__PLUSCOMMENT = 13,
    QSCILEXERSQL__COMMENTLINEHASH = 15,
    QSCILEXERSQL__COMMENTDOCKEYWORD = 17,
    QSCILEXERSQL__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERSQL__KEYWORDSET5 = 19,
    QSCILEXERSQL__KEYWORDSET6 = 20,
    QSCILEXERSQL__KEYWORDSET7 = 21,
    QSCILEXERSQL__KEYWORDSET8 = 22,
    QSCILEXERSQL__QUOTEDIDENTIFIER = 23,
    QSCILEXERSQL__QUOTEDOPERATOR = 24
} QsciLexerSQL__;

#endif
