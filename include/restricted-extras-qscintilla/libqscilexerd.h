#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERD_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERD_H

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

QsciLexerD* q_scilexerd_new();
QsciLexerD* q_scilexerd_new2(void* parent);
QMetaObject* q_scilexerd_meta_object(void* self);
void* q_scilexerd_metacast(void* self, const char* param1);
int32_t q_scilexerd_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerd_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerd_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerd_tr(const char* s);
const char* q_scilexerd_language(void* self);
const char* q_scilexerd_lexer(void* self);
const char** q_scilexerd_auto_completion_word_separators(void* self);
const char* q_scilexerd_block_end(void* self);
const char* q_scilexerd_block_start(void* self);
const char* q_scilexerd_block_start_keyword(void* self);
int32_t q_scilexerd_brace_style(void* self);
const char* q_scilexerd_word_characters(void* self);
QColor* q_scilexerd_default_color(void* self, int style);
bool q_scilexerd_default_eol_fill(void* self, int style);
QFont* q_scilexerd_default_font(void* self, int style);
QColor* q_scilexerd_default_paper(void* self, int style);
const char* q_scilexerd_keywords(void* self, int set);
const char* q_scilexerd_description(void* self, int style);
void q_scilexerd_refresh_properties(void* self);
bool q_scilexerd_fold_at_else(void* self);
bool q_scilexerd_fold_comments(void* self);
bool q_scilexerd_fold_compact(void* self);
void q_scilexerd_set_fold_at_else(void* self, bool fold);
void q_scilexerd_on_set_fold_at_else(void* self, void (*slot)(void*, bool));
void q_scilexerd_qbase_set_fold_at_else(void* self, bool fold);
void q_scilexerd_set_fold_comments(void* self, bool fold);
void q_scilexerd_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerd_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerd_set_fold_compact(void* self, bool fold);
void q_scilexerd_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerd_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexerd_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerd_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerd_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerd_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerd_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerd_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerd_tr2(const char* s, const char* c);
const char* q_scilexerd_tr3(const char* s, const char* c, int n);
const char* q_scilexerd_block_end1(void* self, int* style);
const char* q_scilexerd_block_start1(void* self, int* style);
const char* q_scilexerd_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexerd_apis(void* self);
int32_t q_scilexerd_auto_indent_style(void* self);
QsciScintilla* q_scilexerd_editor(void* self);
void q_scilexerd_set_a_p_is(void* self, void* apis);
void q_scilexerd_set_default_color(void* self, void* c);
void q_scilexerd_set_default_font(void* self, void* f);
void q_scilexerd_set_default_paper(void* self, void* c);
bool q_scilexerd_read_settings(void* self, void* qs);
bool q_scilexerd_write_settings(void* self, void* qs);
void q_scilexerd_color_changed(void* self, void* c, int style);
void q_scilexerd_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerd_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerd_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerd_font_changed(void* self, void* f, int style);
void q_scilexerd_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerd_paper_changed(void* self, void* c, int style);
void q_scilexerd_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerd_property_changed(void* self, const char* prop, const char* val);
void q_scilexerd_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerd_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerd_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerd_object_name(void* self);
void q_scilexerd_set_object_name(void* self, const char* name);
bool q_scilexerd_is_widget_type(void* self);
bool q_scilexerd_is_window_type(void* self);
bool q_scilexerd_is_quick_item_type(void* self);
bool q_scilexerd_signals_blocked(void* self);
bool q_scilexerd_block_signals(void* self, bool b);
QThread* q_scilexerd_thread(void* self);
void q_scilexerd_move_to_thread(void* self, void* thread);
int32_t q_scilexerd_start_timer(void* self, int interval);
void q_scilexerd_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerd_children(void* self);
void q_scilexerd_set_parent(void* self, void* parent);
void q_scilexerd_install_event_filter(void* self, void* filterObj);
void q_scilexerd_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerd_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerd_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerd_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerd_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerd_dump_object_tree(void* self);
void q_scilexerd_dump_object_info(void* self);
bool q_scilexerd_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerd_property(void* self, const char* name);
const char** q_scilexerd_dynamic_property_names(void* self);
QBindingStorage* q_scilexerd_binding_storage(void* self);
QBindingStorage* q_scilexerd_binding_storage2(void* self);
void q_scilexerd_destroyed(void* self);
void q_scilexerd_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerd_parent(void* self);
bool q_scilexerd_inherits(void* self, const char* classname);
void q_scilexerd_delete_later(void* self);
int32_t q_scilexerd_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerd_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerd_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerd_destroyed1(void* self, void* param1);
void q_scilexerd_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerd_lexer_id(void* self);
int32_t q_scilexerd_qbase_lexer_id(void* self);
void q_scilexerd_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerd_auto_completion_fillups(void* self);
const char* q_scilexerd_qbase_auto_completion_fillups(void* self);
void q_scilexerd_on_auto_completion_fillups(void* self, const char* (*slot)());
int32_t q_scilexerd_block_lookback(void* self);
int32_t q_scilexerd_qbase_block_lookback(void* self);
void q_scilexerd_on_block_lookback(void* self, int32_t (*slot)());
bool q_scilexerd_case_sensitive(void* self);
bool q_scilexerd_qbase_case_sensitive(void* self);
void q_scilexerd_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerd_color(void* self, int style);
QColor* q_scilexerd_qbase_color(void* self, int style);
void q_scilexerd_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerd_eol_fill(void* self, int style);
bool q_scilexerd_qbase_eol_fill(void* self, int style);
void q_scilexerd_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerd_font(void* self, int style);
QFont* q_scilexerd_qbase_font(void* self, int style);
void q_scilexerd_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerd_indentation_guide_view(void* self);
int32_t q_scilexerd_qbase_indentation_guide_view(void* self);
void q_scilexerd_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerd_default_style(void* self);
int32_t q_scilexerd_qbase_default_style(void* self);
void q_scilexerd_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerd_paper(void* self, int style);
QColor* q_scilexerd_qbase_paper(void* self, int style);
void q_scilexerd_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerd_default_color_with_style(void* self, int style);
QColor* q_scilexerd_qbase_default_color_with_style(void* self, int style);
void q_scilexerd_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerd_default_font_with_style(void* self, int style);
QFont* q_scilexerd_qbase_default_font_with_style(void* self, int style);
void q_scilexerd_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerd_default_paper_with_style(void* self, int style);
QColor* q_scilexerd_qbase_default_paper_with_style(void* self, int style);
void q_scilexerd_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerd_set_editor(void* self, void* editor);
void q_scilexerd_qbase_set_editor(void* self, void* editor);
void q_scilexerd_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerd_style_bits_needed(void* self);
int32_t q_scilexerd_qbase_style_bits_needed(void* self);
void q_scilexerd_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerd_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerd_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerd_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerd_set_color(void* self, void* c, int style);
void q_scilexerd_qbase_set_color(void* self, void* c, int style);
void q_scilexerd_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerd_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerd_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerd_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerd_set_font(void* self, void* f, int style);
void q_scilexerd_qbase_set_font(void* self, void* f, int style);
void q_scilexerd_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerd_set_paper(void* self, void* c, int style);
void q_scilexerd_qbase_set_paper(void* self, void* c, int style);
void q_scilexerd_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerd_event(void* self, void* event);
bool q_scilexerd_qbase_event(void* self, void* event);
void q_scilexerd_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerd_event_filter(void* self, void* watched, void* event);
bool q_scilexerd_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerd_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerd_timer_event(void* self, void* event);
void q_scilexerd_qbase_timer_event(void* self, void* event);
void q_scilexerd_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerd_child_event(void* self, void* event);
void q_scilexerd_qbase_child_event(void* self, void* event);
void q_scilexerd_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerd_custom_event(void* self, void* event);
void q_scilexerd_qbase_custom_event(void* self, void* event);
void q_scilexerd_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerd_connect_notify(void* self, void* signal);
void q_scilexerd_qbase_connect_notify(void* self, void* signal);
void q_scilexerd_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerd_disconnect_notify(void* self, void* signal);
void q_scilexerd_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerd_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerd_sender(void* self);
QObject* q_scilexerd_qbase_sender(void* self);
void q_scilexerd_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerd_sender_signal_index(void* self);
int32_t q_scilexerd_qbase_sender_signal_index(void* self);
void q_scilexerd_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerd_receivers(void* self, const char* signal);
int32_t q_scilexerd_qbase_receivers(void* self, const char* signal);
void q_scilexerd_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerd_is_signal_connected(void* self, void* signal);
bool q_scilexerd_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerd_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerd_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerd.html#types

typedef enum {
    QSCILEXERD__DEFAULT = 0,
    QSCILEXERD__COMMENT = 1,
    QSCILEXERD__COMMENTLINE = 2,
    QSCILEXERD__COMMENTDOC = 3,
    QSCILEXERD__COMMENTNESTED = 4,
    QSCILEXERD__NUMBER = 5,
    QSCILEXERD__KEYWORD = 6,
    QSCILEXERD__KEYWORDSECONDARY = 7,
    QSCILEXERD__KEYWORDDOC = 8,
    QSCILEXERD__TYPEDEFS = 9,
    QSCILEXERD__STRING = 10,
    QSCILEXERD__UNCLOSEDSTRING = 11,
    QSCILEXERD__CHARACTER = 12,
    QSCILEXERD__OPERATOR = 13,
    QSCILEXERD__IDENTIFIER = 14,
    QSCILEXERD__COMMENTLINEDOC = 15,
    QSCILEXERD__COMMENTDOCKEYWORD = 16,
    QSCILEXERD__COMMENTDOCKEYWORDERROR = 17,
    QSCILEXERD__BACKQUOTESTRING = 18,
    QSCILEXERD__RAWSTRING = 19,
    QSCILEXERD__KEYWORDSET5 = 20,
    QSCILEXERD__KEYWORDSET6 = 21,
    QSCILEXERD__KEYWORDSET7 = 22
} QsciLexerD__;

#endif
