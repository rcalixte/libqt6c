#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCPP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCPP_H

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

QsciLexerCPP* q_scilexercpp_new();
QsciLexerCPP* q_scilexercpp_new2(void* parent);
QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords);
QMetaObject* q_scilexercpp_meta_object(void* self);
void* q_scilexercpp_metacast(void* self, const char* param1);
int32_t q_scilexercpp_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexercpp_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexercpp_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexercpp_tr(const char* s);
const char* q_scilexercpp_language(void* self);
const char* q_scilexercpp_lexer(void* self);
const char** q_scilexercpp_auto_completion_word_separators(void* self);
const char* q_scilexercpp_block_end(void* self);
const char* q_scilexercpp_block_start(void* self);
const char* q_scilexercpp_block_start_keyword(void* self);
int32_t q_scilexercpp_brace_style(void* self);
const char* q_scilexercpp_word_characters(void* self);
QColor* q_scilexercpp_default_color(void* self, int style);
bool q_scilexercpp_default_eol_fill(void* self, int style);
QFont* q_scilexercpp_default_font(void* self, int style);
QColor* q_scilexercpp_default_paper(void* self, int style);
const char* q_scilexercpp_keywords(void* self, int set);
const char* q_scilexercpp_description(void* self, int style);
void q_scilexercpp_refresh_properties(void* self);
bool q_scilexercpp_fold_at_else(void* self);
bool q_scilexercpp_fold_comments(void* self);
bool q_scilexercpp_fold_compact(void* self);
bool q_scilexercpp_fold_preprocessor(void* self);
bool q_scilexercpp_style_preprocessor(void* self);
void q_scilexercpp_set_dollars_allowed(void* self, bool allowed);
bool q_scilexercpp_dollars_allowed(void* self);
void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled);
bool q_scilexercpp_highlight_triple_quoted_strings(void* self);
void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled);
bool q_scilexercpp_highlight_hash_quoted_strings(void* self);
void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled);
bool q_scilexercpp_highlight_back_quoted_strings(void* self);
void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled);
bool q_scilexercpp_highlight_escape_sequences(void* self);
void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);
bool q_scilexercpp_verbatim_string_escape_sequences_allowed(void* self);
void q_scilexercpp_set_fold_at_else(void* self, bool fold);
void q_scilexercpp_on_set_fold_at_else(void* self, void (*slot)(void*, bool));
void q_scilexercpp_qbase_set_fold_at_else(void* self, bool fold);
void q_scilexercpp_set_fold_comments(void* self, bool fold);
void q_scilexercpp_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexercpp_qbase_set_fold_comments(void* self, bool fold);
void q_scilexercpp_set_fold_compact(void* self, bool fold);
void q_scilexercpp_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexercpp_qbase_set_fold_compact(void* self, bool fold);
void q_scilexercpp_set_fold_preprocessor(void* self, bool fold);
void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));
void q_scilexercpp_qbase_set_fold_preprocessor(void* self, bool fold);
void q_scilexercpp_set_style_preprocessor(void* self, bool style);
void q_scilexercpp_on_set_style_preprocessor(void* self, void (*slot)(void*, bool));
void q_scilexercpp_qbase_set_style_preprocessor(void* self, bool style);
bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix);
void q_scilexercpp_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercpp_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexercpp_write_properties(void* self, void* qs, const char* prefix);
void q_scilexercpp_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercpp_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexercpp_tr2(const char* s, const char* c);
const char* q_scilexercpp_tr3(const char* s, const char* c, int n);
const char* q_scilexercpp_block_end1(void* self, int* style);
const char* q_scilexercpp_block_start1(void* self, int* style);
const char* q_scilexercpp_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexercpp_apis(void* self);
int32_t q_scilexercpp_auto_indent_style(void* self);
QsciScintilla* q_scilexercpp_editor(void* self);
void q_scilexercpp_set_a_p_is(void* self, void* apis);
void q_scilexercpp_set_default_color(void* self, void* c);
void q_scilexercpp_set_default_font(void* self, void* f);
void q_scilexercpp_set_default_paper(void* self, void* c);
bool q_scilexercpp_read_settings(void* self, void* qs);
bool q_scilexercpp_write_settings(void* self, void* qs);
void q_scilexercpp_color_changed(void* self, void* c, int style);
void q_scilexercpp_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexercpp_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexercpp_font_changed(void* self, void* f, int style);
void q_scilexercpp_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercpp_paper_changed(void* self, void* c, int style);
void q_scilexercpp_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercpp_property_changed(void* self, const char* prop, const char* val);
void q_scilexercpp_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexercpp_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexercpp_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexercpp_object_name(void* self);
void q_scilexercpp_set_object_name(void* self, const char* name);
bool q_scilexercpp_is_widget_type(void* self);
bool q_scilexercpp_is_window_type(void* self);
bool q_scilexercpp_is_quick_item_type(void* self);
bool q_scilexercpp_signals_blocked(void* self);
bool q_scilexercpp_block_signals(void* self, bool b);
QThread* q_scilexercpp_thread(void* self);
void q_scilexercpp_move_to_thread(void* self, void* thread);
int32_t q_scilexercpp_start_timer(void* self, int interval);
void q_scilexercpp_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexercpp_children(void* self);
void q_scilexercpp_set_parent(void* self, void* parent);
void q_scilexercpp_install_event_filter(void* self, void* filterObj);
void q_scilexercpp_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexercpp_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexercpp_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexercpp_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexercpp_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexercpp_dump_object_tree(void* self);
void q_scilexercpp_dump_object_info(void* self);
bool q_scilexercpp_set_property(void* self, const char* name, void* value);
QVariant* q_scilexercpp_property(void* self, const char* name);
const char** q_scilexercpp_dynamic_property_names(void* self);
QBindingStorage* q_scilexercpp_binding_storage(void* self);
QBindingStorage* q_scilexercpp_binding_storage2(void* self);
void q_scilexercpp_destroyed(void* self);
void q_scilexercpp_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexercpp_parent(void* self);
bool q_scilexercpp_inherits(void* self, const char* classname);
void q_scilexercpp_delete_later(void* self);
int32_t q_scilexercpp_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexercpp_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexercpp_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexercpp_destroyed1(void* self, void* param1);
void q_scilexercpp_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexercpp_lexer_id(void* self);
int32_t q_scilexercpp_qbase_lexer_id(void* self);
void q_scilexercpp_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexercpp_auto_completion_fillups(void* self);
const char* q_scilexercpp_qbase_auto_completion_fillups(void* self);
void q_scilexercpp_on_auto_completion_fillups(void* self, const char* (*slot)());
int32_t q_scilexercpp_block_lookback(void* self);
int32_t q_scilexercpp_qbase_block_lookback(void* self);
void q_scilexercpp_on_block_lookback(void* self, int32_t (*slot)());
bool q_scilexercpp_case_sensitive(void* self);
bool q_scilexercpp_qbase_case_sensitive(void* self);
void q_scilexercpp_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexercpp_color(void* self, int style);
QColor* q_scilexercpp_qbase_color(void* self, int style);
void q_scilexercpp_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexercpp_eol_fill(void* self, int style);
bool q_scilexercpp_qbase_eol_fill(void* self, int style);
void q_scilexercpp_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexercpp_font(void* self, int style);
QFont* q_scilexercpp_qbase_font(void* self, int style);
void q_scilexercpp_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexercpp_indentation_guide_view(void* self);
int32_t q_scilexercpp_qbase_indentation_guide_view(void* self);
void q_scilexercpp_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexercpp_default_style(void* self);
int32_t q_scilexercpp_qbase_default_style(void* self);
void q_scilexercpp_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexercpp_paper(void* self, int style);
QColor* q_scilexercpp_qbase_paper(void* self, int style);
void q_scilexercpp_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexercpp_default_color_with_style(void* self, int style);
QColor* q_scilexercpp_qbase_default_color_with_style(void* self, int style);
void q_scilexercpp_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexercpp_default_font_with_style(void* self, int style);
QFont* q_scilexercpp_qbase_default_font_with_style(void* self, int style);
void q_scilexercpp_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexercpp_default_paper_with_style(void* self, int style);
QColor* q_scilexercpp_qbase_default_paper_with_style(void* self, int style);
void q_scilexercpp_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexercpp_set_editor(void* self, void* editor);
void q_scilexercpp_qbase_set_editor(void* self, void* editor);
void q_scilexercpp_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexercpp_style_bits_needed(void* self);
int32_t q_scilexercpp_qbase_style_bits_needed(void* self);
void q_scilexercpp_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercpp_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercpp_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexercpp_set_color(void* self, void* c, int style);
void q_scilexercpp_qbase_set_color(void* self, void* c, int style);
void q_scilexercpp_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercpp_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercpp_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexercpp_set_font(void* self, void* f, int style);
void q_scilexercpp_qbase_set_font(void* self, void* f, int style);
void q_scilexercpp_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexercpp_set_paper(void* self, void* c, int style);
void q_scilexercpp_qbase_set_paper(void* self, void* c, int style);
void q_scilexercpp_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexercpp_event(void* self, void* event);
bool q_scilexercpp_qbase_event(void* self, void* event);
void q_scilexercpp_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexercpp_event_filter(void* self, void* watched, void* event);
bool q_scilexercpp_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexercpp_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexercpp_timer_event(void* self, void* event);
void q_scilexercpp_qbase_timer_event(void* self, void* event);
void q_scilexercpp_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexercpp_child_event(void* self, void* event);
void q_scilexercpp_qbase_child_event(void* self, void* event);
void q_scilexercpp_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexercpp_custom_event(void* self, void* event);
void q_scilexercpp_qbase_custom_event(void* self, void* event);
void q_scilexercpp_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexercpp_connect_notify(void* self, void* signal);
void q_scilexercpp_qbase_connect_notify(void* self, void* signal);
void q_scilexercpp_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexercpp_disconnect_notify(void* self, void* signal);
void q_scilexercpp_qbase_disconnect_notify(void* self, void* signal);
void q_scilexercpp_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexercpp_sender(void* self);
QObject* q_scilexercpp_qbase_sender(void* self);
void q_scilexercpp_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexercpp_sender_signal_index(void* self);
int32_t q_scilexercpp_qbase_sender_signal_index(void* self);
void q_scilexercpp_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexercpp_receivers(void* self, const char* signal);
int32_t q_scilexercpp_qbase_receivers(void* self, const char* signal);
void q_scilexercpp_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexercpp_is_signal_connected(void* self, void* signal);
bool q_scilexercpp_qbase_is_signal_connected(void* self, void* signal);
void q_scilexercpp_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexercpp_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexercpp.html#types

typedef enum {
    QSCILEXERCPP__DEFAULT = 0,
    QSCILEXERCPP__INACTIVEDEFAULT = 64,
    QSCILEXERCPP__COMMENT = 1,
    QSCILEXERCPP__INACTIVECOMMENT = 65,
    QSCILEXERCPP__COMMENTLINE = 2,
    QSCILEXERCPP__INACTIVECOMMENTLINE = 66,
    QSCILEXERCPP__COMMENTDOC = 3,
    QSCILEXERCPP__INACTIVECOMMENTDOC = 67,
    QSCILEXERCPP__NUMBER = 4,
    QSCILEXERCPP__INACTIVENUMBER = 68,
    QSCILEXERCPP__KEYWORD = 5,
    QSCILEXERCPP__INACTIVEKEYWORD = 69,
    QSCILEXERCPP__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERCPP__INACTIVEDOUBLEQUOTEDSTRING = 70,
    QSCILEXERCPP__SINGLEQUOTEDSTRING = 7,
    QSCILEXERCPP__INACTIVESINGLEQUOTEDSTRING = 71,
    QSCILEXERCPP__UUID = 8,
    QSCILEXERCPP__INACTIVEUUID = 72,
    QSCILEXERCPP__PREPROCESSOR = 9,
    QSCILEXERCPP__INACTIVEPREPROCESSOR = 73,
    QSCILEXERCPP__OPERATOR = 10,
    QSCILEXERCPP__INACTIVEOPERATOR = 74,
    QSCILEXERCPP__IDENTIFIER = 11,
    QSCILEXERCPP__INACTIVEIDENTIFIER = 75,
    QSCILEXERCPP__UNCLOSEDSTRING = 12,
    QSCILEXERCPP__INACTIVEUNCLOSEDSTRING = 76,
    QSCILEXERCPP__VERBATIMSTRING = 13,
    QSCILEXERCPP__INACTIVEVERBATIMSTRING = 77,
    QSCILEXERCPP__REGEX = 14,
    QSCILEXERCPP__INACTIVEREGEX = 78,
    QSCILEXERCPP__COMMENTLINEDOC = 15,
    QSCILEXERCPP__INACTIVECOMMENTLINEDOC = 79,
    QSCILEXERCPP__KEYWORDSET2 = 16,
    QSCILEXERCPP__INACTIVEKEYWORDSET2 = 80,
    QSCILEXERCPP__COMMENTDOCKEYWORD = 17,
    QSCILEXERCPP__INACTIVECOMMENTDOCKEYWORD = 81,
    QSCILEXERCPP__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERCPP__INACTIVECOMMENTDOCKEYWORDERROR = 82,
    QSCILEXERCPP__GLOBALCLASS = 19,
    QSCILEXERCPP__INACTIVEGLOBALCLASS = 83,
    QSCILEXERCPP__RAWSTRING = 20,
    QSCILEXERCPP__INACTIVERAWSTRING = 84,
    QSCILEXERCPP__TRIPLEQUOTEDVERBATIMSTRING = 21,
    QSCILEXERCPP__INACTIVETRIPLEQUOTEDVERBATIMSTRING = 85,
    QSCILEXERCPP__HASHQUOTEDSTRING = 22,
    QSCILEXERCPP__INACTIVEHASHQUOTEDSTRING = 86,
    QSCILEXERCPP__PREPROCESSORCOMMENT = 23,
    QSCILEXERCPP__INACTIVEPREPROCESSORCOMMENT = 87,
    QSCILEXERCPP__PREPROCESSORCOMMENTLINEDOC = 24,
    QSCILEXERCPP__INACTIVEPREPROCESSORCOMMENTLINEDOC = 88,
    QSCILEXERCPP__USERLITERAL = 25,
    QSCILEXERCPP__INACTIVEUSERLITERAL = 89,
    QSCILEXERCPP__TASKMARKER = 26,
    QSCILEXERCPP__INACTIVETASKMARKER = 90,
    QSCILEXERCPP__ESCAPESEQUENCE = 27,
    QSCILEXERCPP__INACTIVEESCAPESEQUENCE = 91
} QsciLexerCPP__;

#endif
