#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVHDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVHDL_H

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

QsciLexerVHDL* q_scilexervhdl_new();
QsciLexerVHDL* q_scilexervhdl_new2(void* parent);
QMetaObject* q_scilexervhdl_meta_object(void* self);
void* q_scilexervhdl_metacast(void* self, const char* param1);
int32_t q_scilexervhdl_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexervhdl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexervhdl_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexervhdl_tr(const char* s);
const char* q_scilexervhdl_language(void* self);
const char* q_scilexervhdl_lexer(void* self);
int32_t q_scilexervhdl_brace_style(void* self);
QColor* q_scilexervhdl_default_color(void* self, int style);
bool q_scilexervhdl_default_eol_fill(void* self, int style);
QFont* q_scilexervhdl_default_font(void* self, int style);
QColor* q_scilexervhdl_default_paper(void* self, int style);
const char* q_scilexervhdl_keywords(void* self, int set);
const char* q_scilexervhdl_description(void* self, int style);
void q_scilexervhdl_refresh_properties(void* self);
bool q_scilexervhdl_fold_comments(void* self);
bool q_scilexervhdl_fold_compact(void* self);
bool q_scilexervhdl_fold_at_else(void* self);
bool q_scilexervhdl_fold_at_begin(void* self);
bool q_scilexervhdl_fold_at_parenthesis(void* self);
void q_scilexervhdl_set_fold_comments(void* self, bool fold);
void q_scilexervhdl_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexervhdl_qbase_set_fold_comments(void* self, bool fold);
void q_scilexervhdl_set_fold_compact(void* self, bool fold);
void q_scilexervhdl_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexervhdl_qbase_set_fold_compact(void* self, bool fold);
void q_scilexervhdl_set_fold_at_else(void* self, bool fold);
void q_scilexervhdl_on_set_fold_at_else(void* self, void (*slot)(void*, bool));
void q_scilexervhdl_qbase_set_fold_at_else(void* self, bool fold);
void q_scilexervhdl_set_fold_at_begin(void* self, bool fold);
void q_scilexervhdl_on_set_fold_at_begin(void* self, void (*slot)(void*, bool));
void q_scilexervhdl_qbase_set_fold_at_begin(void* self, bool fold);
void q_scilexervhdl_set_fold_at_parenthesis(void* self, bool fold);
void q_scilexervhdl_on_set_fold_at_parenthesis(void* self, void (*slot)(void*, bool));
void q_scilexervhdl_qbase_set_fold_at_parenthesis(void* self, bool fold);
bool q_scilexervhdl_read_properties(void* self, void* qs, const char* prefix);
void q_scilexervhdl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexervhdl_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexervhdl_write_properties(void* self, void* qs, const char* prefix);
void q_scilexervhdl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexervhdl_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexervhdl_tr2(const char* s, const char* c);
const char* q_scilexervhdl_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexervhdl_apis(void* self);
int32_t q_scilexervhdl_auto_indent_style(void* self);
QsciScintilla* q_scilexervhdl_editor(void* self);
void q_scilexervhdl_set_a_p_is(void* self, void* apis);
void q_scilexervhdl_set_default_color(void* self, void* c);
void q_scilexervhdl_set_default_font(void* self, void* f);
void q_scilexervhdl_set_default_paper(void* self, void* c);
bool q_scilexervhdl_read_settings(void* self, void* qs);
bool q_scilexervhdl_write_settings(void* self, void* qs);
void q_scilexervhdl_color_changed(void* self, void* c, int style);
void q_scilexervhdl_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexervhdl_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexervhdl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexervhdl_font_changed(void* self, void* f, int style);
void q_scilexervhdl_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexervhdl_paper_changed(void* self, void* c, int style);
void q_scilexervhdl_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexervhdl_property_changed(void* self, const char* prop, const char* val);
void q_scilexervhdl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexervhdl_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexervhdl_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexervhdl_object_name(void* self);
void q_scilexervhdl_set_object_name(void* self, const char* name);
bool q_scilexervhdl_is_widget_type(void* self);
bool q_scilexervhdl_is_window_type(void* self);
bool q_scilexervhdl_is_quick_item_type(void* self);
bool q_scilexervhdl_signals_blocked(void* self);
bool q_scilexervhdl_block_signals(void* self, bool b);
QThread* q_scilexervhdl_thread(void* self);
void q_scilexervhdl_move_to_thread(void* self, void* thread);
int32_t q_scilexervhdl_start_timer(void* self, int interval);
void q_scilexervhdl_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexervhdl_children(void* self);
void q_scilexervhdl_set_parent(void* self, void* parent);
void q_scilexervhdl_install_event_filter(void* self, void* filterObj);
void q_scilexervhdl_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexervhdl_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexervhdl_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexervhdl_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexervhdl_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexervhdl_dump_object_tree(void* self);
void q_scilexervhdl_dump_object_info(void* self);
bool q_scilexervhdl_set_property(void* self, const char* name, void* value);
QVariant* q_scilexervhdl_property(void* self, const char* name);
const char** q_scilexervhdl_dynamic_property_names(void* self);
QBindingStorage* q_scilexervhdl_binding_storage(void* self);
QBindingStorage* q_scilexervhdl_binding_storage2(void* self);
void q_scilexervhdl_destroyed(void* self);
void q_scilexervhdl_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexervhdl_parent(void* self);
bool q_scilexervhdl_inherits(void* self, const char* classname);
void q_scilexervhdl_delete_later(void* self);
int32_t q_scilexervhdl_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexervhdl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexervhdl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexervhdl_destroyed1(void* self, void* param1);
void q_scilexervhdl_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexervhdl_lexer_id(void* self);
int32_t q_scilexervhdl_qbase_lexer_id(void* self);
void q_scilexervhdl_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexervhdl_auto_completion_fillups(void* self);
const char* q_scilexervhdl_qbase_auto_completion_fillups(void* self);
void q_scilexervhdl_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexervhdl_auto_completion_word_separators(void* self);
const char** q_scilexervhdl_qbase_auto_completion_word_separators(void* self);
void q_scilexervhdl_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexervhdl_block_end(void* self, int* style);
const char* q_scilexervhdl_qbase_block_end(void* self, int* style);
void q_scilexervhdl_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexervhdl_block_lookback(void* self);
int32_t q_scilexervhdl_qbase_block_lookback(void* self);
void q_scilexervhdl_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexervhdl_block_start(void* self, int* style);
const char* q_scilexervhdl_qbase_block_start(void* self, int* style);
void q_scilexervhdl_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexervhdl_block_start_keyword(void* self, int* style);
const char* q_scilexervhdl_qbase_block_start_keyword(void* self, int* style);
void q_scilexervhdl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexervhdl_case_sensitive(void* self);
bool q_scilexervhdl_qbase_case_sensitive(void* self);
void q_scilexervhdl_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexervhdl_color(void* self, int style);
QColor* q_scilexervhdl_qbase_color(void* self, int style);
void q_scilexervhdl_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexervhdl_eol_fill(void* self, int style);
bool q_scilexervhdl_qbase_eol_fill(void* self, int style);
void q_scilexervhdl_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexervhdl_font(void* self, int style);
QFont* q_scilexervhdl_qbase_font(void* self, int style);
void q_scilexervhdl_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexervhdl_indentation_guide_view(void* self);
int32_t q_scilexervhdl_qbase_indentation_guide_view(void* self);
void q_scilexervhdl_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexervhdl_default_style(void* self);
int32_t q_scilexervhdl_qbase_default_style(void* self);
void q_scilexervhdl_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexervhdl_paper(void* self, int style);
QColor* q_scilexervhdl_qbase_paper(void* self, int style);
void q_scilexervhdl_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexervhdl_default_color_with_style(void* self, int style);
QColor* q_scilexervhdl_qbase_default_color_with_style(void* self, int style);
void q_scilexervhdl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexervhdl_default_font_with_style(void* self, int style);
QFont* q_scilexervhdl_qbase_default_font_with_style(void* self, int style);
void q_scilexervhdl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexervhdl_default_paper_with_style(void* self, int style);
QColor* q_scilexervhdl_qbase_default_paper_with_style(void* self, int style);
void q_scilexervhdl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexervhdl_set_editor(void* self, void* editor);
void q_scilexervhdl_qbase_set_editor(void* self, void* editor);
void q_scilexervhdl_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexervhdl_style_bits_needed(void* self);
int32_t q_scilexervhdl_qbase_style_bits_needed(void* self);
void q_scilexervhdl_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexervhdl_word_characters(void* self);
const char* q_scilexervhdl_qbase_word_characters(void* self);
void q_scilexervhdl_on_word_characters(void* self, const char* (*slot)());
void q_scilexervhdl_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexervhdl_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexervhdl_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexervhdl_set_color(void* self, void* c, int style);
void q_scilexervhdl_qbase_set_color(void* self, void* c, int style);
void q_scilexervhdl_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexervhdl_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexervhdl_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexervhdl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexervhdl_set_font(void* self, void* f, int style);
void q_scilexervhdl_qbase_set_font(void* self, void* f, int style);
void q_scilexervhdl_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexervhdl_set_paper(void* self, void* c, int style);
void q_scilexervhdl_qbase_set_paper(void* self, void* c, int style);
void q_scilexervhdl_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexervhdl_event(void* self, void* event);
bool q_scilexervhdl_qbase_event(void* self, void* event);
void q_scilexervhdl_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexervhdl_event_filter(void* self, void* watched, void* event);
bool q_scilexervhdl_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexervhdl_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexervhdl_timer_event(void* self, void* event);
void q_scilexervhdl_qbase_timer_event(void* self, void* event);
void q_scilexervhdl_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexervhdl_child_event(void* self, void* event);
void q_scilexervhdl_qbase_child_event(void* self, void* event);
void q_scilexervhdl_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexervhdl_custom_event(void* self, void* event);
void q_scilexervhdl_qbase_custom_event(void* self, void* event);
void q_scilexervhdl_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexervhdl_connect_notify(void* self, void* signal);
void q_scilexervhdl_qbase_connect_notify(void* self, void* signal);
void q_scilexervhdl_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexervhdl_disconnect_notify(void* self, void* signal);
void q_scilexervhdl_qbase_disconnect_notify(void* self, void* signal);
void q_scilexervhdl_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexervhdl_sender(void* self);
QObject* q_scilexervhdl_qbase_sender(void* self);
void q_scilexervhdl_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexervhdl_sender_signal_index(void* self);
int32_t q_scilexervhdl_qbase_sender_signal_index(void* self);
void q_scilexervhdl_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexervhdl_receivers(void* self, const char* signal);
int32_t q_scilexervhdl_qbase_receivers(void* self, const char* signal);
void q_scilexervhdl_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexervhdl_is_signal_connected(void* self, void* signal);
bool q_scilexervhdl_qbase_is_signal_connected(void* self, void* signal);
void q_scilexervhdl_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexervhdl_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexervhdl.html#types

typedef enum {
    QSCILEXERVHDL__DEFAULT = 0,
    QSCILEXERVHDL__COMMENT = 1,
    QSCILEXERVHDL__COMMENTLINE = 2,
    QSCILEXERVHDL__NUMBER = 3,
    QSCILEXERVHDL__STRING = 4,
    QSCILEXERVHDL__OPERATOR = 5,
    QSCILEXERVHDL__IDENTIFIER = 6,
    QSCILEXERVHDL__UNCLOSEDSTRING = 7,
    QSCILEXERVHDL__KEYWORD = 8,
    QSCILEXERVHDL__STANDARDOPERATOR = 9,
    QSCILEXERVHDL__ATTRIBUTE = 10,
    QSCILEXERVHDL__STANDARDFUNCTION = 11,
    QSCILEXERVHDL__STANDARDPACKAGE = 12,
    QSCILEXERVHDL__STANDARDTYPE = 13,
    QSCILEXERVHDL__KEYWORDSET7 = 14,
    QSCILEXERVHDL__COMMENTBLOCK = 15
} QsciLexerVHDL__;

#endif
