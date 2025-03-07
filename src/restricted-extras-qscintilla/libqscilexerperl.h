#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPERL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPERL_H

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

QsciLexerPerl* q_scilexerperl_new();
QsciLexerPerl* q_scilexerperl_new2(void* parent);
QMetaObject* q_scilexerperl_meta_object(void* self);
void* q_scilexerperl_metacast(void* self, const char* param1);
int32_t q_scilexerperl_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerperl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerperl_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerperl_tr(const char* s);
const char* q_scilexerperl_language(void* self);
const char* q_scilexerperl_lexer(void* self);
const char** q_scilexerperl_auto_completion_word_separators(void* self);
const char* q_scilexerperl_block_end(void* self);
const char* q_scilexerperl_block_start(void* self);
int32_t q_scilexerperl_brace_style(void* self);
const char* q_scilexerperl_word_characters(void* self);
QColor* q_scilexerperl_default_color(void* self, int style);
bool q_scilexerperl_default_eol_fill(void* self, int style);
QFont* q_scilexerperl_default_font(void* self, int style);
QColor* q_scilexerperl_default_paper(void* self, int style);
const char* q_scilexerperl_keywords(void* self, int set);
const char* q_scilexerperl_description(void* self, int style);
void q_scilexerperl_refresh_properties(void* self);
void q_scilexerperl_set_fold_at_else(void* self, bool fold);
bool q_scilexerperl_fold_at_else(void* self);
bool q_scilexerperl_fold_comments(void* self);
bool q_scilexerperl_fold_compact(void* self);
void q_scilexerperl_set_fold_packages(void* self, bool fold);
bool q_scilexerperl_fold_packages(void* self);
void q_scilexerperl_set_fold_p_o_d_blocks(void* self, bool fold);
bool q_scilexerperl_fold_p_o_d_blocks(void* self);
void q_scilexerperl_set_fold_comments(void* self, bool fold);
void q_scilexerperl_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerperl_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerperl_set_fold_compact(void* self, bool fold);
void q_scilexerperl_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerperl_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexerperl_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerperl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerperl_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerperl_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerperl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerperl_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerperl_tr2(const char* s, const char* c);
const char* q_scilexerperl_tr3(const char* s, const char* c, int n);
const char* q_scilexerperl_block_end1(void* self, int* style);
const char* q_scilexerperl_block_start1(void* self, int* style);
QsciAbstractAPIs* q_scilexerperl_apis(void* self);
int32_t q_scilexerperl_auto_indent_style(void* self);
QsciScintilla* q_scilexerperl_editor(void* self);
void q_scilexerperl_set_a_p_is(void* self, void* apis);
void q_scilexerperl_set_default_color(void* self, void* c);
void q_scilexerperl_set_default_font(void* self, void* f);
void q_scilexerperl_set_default_paper(void* self, void* c);
bool q_scilexerperl_read_settings(void* self, void* qs);
bool q_scilexerperl_write_settings(void* self, void* qs);
void q_scilexerperl_color_changed(void* self, void* c, int style);
void q_scilexerperl_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerperl_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerperl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerperl_font_changed(void* self, void* f, int style);
void q_scilexerperl_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerperl_paper_changed(void* self, void* c, int style);
void q_scilexerperl_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerperl_property_changed(void* self, const char* prop, const char* val);
void q_scilexerperl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerperl_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerperl_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerperl_object_name(void* self);
void q_scilexerperl_set_object_name(void* self, const char* name);
bool q_scilexerperl_is_widget_type(void* self);
bool q_scilexerperl_is_window_type(void* self);
bool q_scilexerperl_is_quick_item_type(void* self);
bool q_scilexerperl_signals_blocked(void* self);
bool q_scilexerperl_block_signals(void* self, bool b);
QThread* q_scilexerperl_thread(void* self);
void q_scilexerperl_move_to_thread(void* self, void* thread);
int32_t q_scilexerperl_start_timer(void* self, int interval);
void q_scilexerperl_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerperl_children(void* self);
void q_scilexerperl_set_parent(void* self, void* parent);
void q_scilexerperl_install_event_filter(void* self, void* filterObj);
void q_scilexerperl_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerperl_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerperl_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerperl_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerperl_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerperl_dump_object_tree(void* self);
void q_scilexerperl_dump_object_info(void* self);
bool q_scilexerperl_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerperl_property(void* self, const char* name);
const char** q_scilexerperl_dynamic_property_names(void* self);
QBindingStorage* q_scilexerperl_binding_storage(void* self);
QBindingStorage* q_scilexerperl_binding_storage2(void* self);
void q_scilexerperl_destroyed(void* self);
void q_scilexerperl_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerperl_parent(void* self);
bool q_scilexerperl_inherits(void* self, const char* classname);
void q_scilexerperl_delete_later(void* self);
int32_t q_scilexerperl_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerperl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerperl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerperl_destroyed1(void* self, void* param1);
void q_scilexerperl_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerperl_lexer_id(void* self);
int32_t q_scilexerperl_qbase_lexer_id(void* self);
void q_scilexerperl_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerperl_auto_completion_fillups(void* self);
const char* q_scilexerperl_qbase_auto_completion_fillups(void* self);
void q_scilexerperl_on_auto_completion_fillups(void* self, const char* (*slot)());
int32_t q_scilexerperl_block_lookback(void* self);
int32_t q_scilexerperl_qbase_block_lookback(void* self);
void q_scilexerperl_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerperl_block_start_keyword(void* self, int* style);
const char* q_scilexerperl_qbase_block_start_keyword(void* self, int* style);
void q_scilexerperl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerperl_case_sensitive(void* self);
bool q_scilexerperl_qbase_case_sensitive(void* self);
void q_scilexerperl_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerperl_color(void* self, int style);
QColor* q_scilexerperl_qbase_color(void* self, int style);
void q_scilexerperl_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerperl_eol_fill(void* self, int style);
bool q_scilexerperl_qbase_eol_fill(void* self, int style);
void q_scilexerperl_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerperl_font(void* self, int style);
QFont* q_scilexerperl_qbase_font(void* self, int style);
void q_scilexerperl_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerperl_indentation_guide_view(void* self);
int32_t q_scilexerperl_qbase_indentation_guide_view(void* self);
void q_scilexerperl_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerperl_default_style(void* self);
int32_t q_scilexerperl_qbase_default_style(void* self);
void q_scilexerperl_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerperl_paper(void* self, int style);
QColor* q_scilexerperl_qbase_paper(void* self, int style);
void q_scilexerperl_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerperl_default_color_with_style(void* self, int style);
QColor* q_scilexerperl_qbase_default_color_with_style(void* self, int style);
void q_scilexerperl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerperl_default_font_with_style(void* self, int style);
QFont* q_scilexerperl_qbase_default_font_with_style(void* self, int style);
void q_scilexerperl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerperl_default_paper_with_style(void* self, int style);
QColor* q_scilexerperl_qbase_default_paper_with_style(void* self, int style);
void q_scilexerperl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerperl_set_editor(void* self, void* editor);
void q_scilexerperl_qbase_set_editor(void* self, void* editor);
void q_scilexerperl_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerperl_style_bits_needed(void* self);
int32_t q_scilexerperl_qbase_style_bits_needed(void* self);
void q_scilexerperl_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerperl_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerperl_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerperl_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerperl_set_color(void* self, void* c, int style);
void q_scilexerperl_qbase_set_color(void* self, void* c, int style);
void q_scilexerperl_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerperl_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerperl_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerperl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerperl_set_font(void* self, void* f, int style);
void q_scilexerperl_qbase_set_font(void* self, void* f, int style);
void q_scilexerperl_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerperl_set_paper(void* self, void* c, int style);
void q_scilexerperl_qbase_set_paper(void* self, void* c, int style);
void q_scilexerperl_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerperl_event(void* self, void* event);
bool q_scilexerperl_qbase_event(void* self, void* event);
void q_scilexerperl_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerperl_event_filter(void* self, void* watched, void* event);
bool q_scilexerperl_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerperl_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerperl_timer_event(void* self, void* event);
void q_scilexerperl_qbase_timer_event(void* self, void* event);
void q_scilexerperl_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerperl_child_event(void* self, void* event);
void q_scilexerperl_qbase_child_event(void* self, void* event);
void q_scilexerperl_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerperl_custom_event(void* self, void* event);
void q_scilexerperl_qbase_custom_event(void* self, void* event);
void q_scilexerperl_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerperl_connect_notify(void* self, void* signal);
void q_scilexerperl_qbase_connect_notify(void* self, void* signal);
void q_scilexerperl_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerperl_disconnect_notify(void* self, void* signal);
void q_scilexerperl_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerperl_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerperl_sender(void* self);
QObject* q_scilexerperl_qbase_sender(void* self);
void q_scilexerperl_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerperl_sender_signal_index(void* self);
int32_t q_scilexerperl_qbase_sender_signal_index(void* self);
void q_scilexerperl_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerperl_receivers(void* self, const char* signal);
int32_t q_scilexerperl_qbase_receivers(void* self, const char* signal);
void q_scilexerperl_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerperl_is_signal_connected(void* self, void* signal);
bool q_scilexerperl_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerperl_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerperl_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerperl.html#types

typedef enum {
    QSCILEXERPERL__DEFAULT = 0,
    QSCILEXERPERL__ERROR = 1,
    QSCILEXERPERL__COMMENT = 2,
    QSCILEXERPERL__POD = 3,
    QSCILEXERPERL__NUMBER = 4,
    QSCILEXERPERL__KEYWORD = 5,
    QSCILEXERPERL__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERPERL__SINGLEQUOTEDSTRING = 7,
    QSCILEXERPERL__OPERATOR = 10,
    QSCILEXERPERL__IDENTIFIER = 11,
    QSCILEXERPERL__SCALAR = 12,
    QSCILEXERPERL__ARRAY = 13,
    QSCILEXERPERL__HASH = 14,
    QSCILEXERPERL__SYMBOLTABLE = 15,
    QSCILEXERPERL__REGEX = 17,
    QSCILEXERPERL__SUBSTITUTION = 18,
    QSCILEXERPERL__BACKTICKS = 20,
    QSCILEXERPERL__DATASECTION = 21,
    QSCILEXERPERL__HEREDOCUMENTDELIMITER = 22,
    QSCILEXERPERL__SINGLEQUOTEDHEREDOCUMENT = 23,
    QSCILEXERPERL__DOUBLEQUOTEDHEREDOCUMENT = 24,
    QSCILEXERPERL__BACKTICKHEREDOCUMENT = 25,
    QSCILEXERPERL__QUOTEDSTRINGQ = 26,
    QSCILEXERPERL__QUOTEDSTRINGQQ = 27,
    QSCILEXERPERL__QUOTEDSTRINGQX = 28,
    QSCILEXERPERL__QUOTEDSTRINGQR = 29,
    QSCILEXERPERL__QUOTEDSTRINGQW = 30,
    QSCILEXERPERL__PODVERBATIM = 31,
    QSCILEXERPERL__SUBROUTINEPROTOTYPE = 40,
    QSCILEXERPERL__FORMATIDENTIFIER = 41,
    QSCILEXERPERL__FORMATBODY = 42,
    QSCILEXERPERL__DOUBLEQUOTEDSTRINGVAR = 43,
    QSCILEXERPERL__TRANSLATION = 44,
    QSCILEXERPERL__REGEXVAR = 54,
    QSCILEXERPERL__SUBSTITUTIONVAR = 55,
    QSCILEXERPERL__BACKTICKSVAR = 57,
    QSCILEXERPERL__DOUBLEQUOTEDHEREDOCUMENTVAR = 61,
    QSCILEXERPERL__BACKTICKHEREDOCUMENTVAR = 62,
    QSCILEXERPERL__QUOTEDSTRINGQQVAR = 64,
    QSCILEXERPERL__QUOTEDSTRINGQXVAR = 65,
    QSCILEXERPERL__QUOTEDSTRINGQRVAR = 66
} QsciLexerPerl__;

#endif
