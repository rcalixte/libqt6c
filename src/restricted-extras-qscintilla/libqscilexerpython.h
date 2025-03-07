#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPYTHON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPYTHON_H

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

QsciLexerPython* q_scilexerpython_new();
QsciLexerPython* q_scilexerpython_new2(void* parent);
QMetaObject* q_scilexerpython_meta_object(void* self);
void* q_scilexerpython_metacast(void* self, const char* param1);
int32_t q_scilexerpython_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerpython_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerpython_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerpython_tr(const char* s);
const char* q_scilexerpython_language(void* self);
const char* q_scilexerpython_lexer(void* self);
const char** q_scilexerpython_auto_completion_word_separators(void* self);
int32_t q_scilexerpython_block_lookback(void* self);
const char* q_scilexerpython_block_start(void* self);
int32_t q_scilexerpython_brace_style(void* self);
QColor* q_scilexerpython_default_color(void* self, int style);
bool q_scilexerpython_default_eol_fill(void* self, int style);
QFont* q_scilexerpython_default_font(void* self, int style);
QColor* q_scilexerpython_default_paper(void* self, int style);
int32_t q_scilexerpython_indentation_guide_view(void* self);
void q_scilexerpython_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerpython_qbase_indentation_guide_view(void* self);
const char* q_scilexerpython_keywords(void* self, int set);
const char* q_scilexerpython_description(void* self, int style);
void q_scilexerpython_refresh_properties(void* self);
bool q_scilexerpython_fold_comments(void* self);
void q_scilexerpython_set_fold_compact(void* self, bool fold);
bool q_scilexerpython_fold_compact(void* self);
bool q_scilexerpython_fold_quotes(void* self);
int64_t q_scilexerpython_indentation_warning(void* self);
void q_scilexerpython_set_highlight_subidentifiers(void* self, bool enabled);
bool q_scilexerpython_highlight_subidentifiers(void* self);
void q_scilexerpython_set_strings_over_newline_allowed(void* self, bool allowed);
bool q_scilexerpython_strings_over_newline_allowed(void* self);
void q_scilexerpython_set_v2_unicode_allowed(void* self, bool allowed);
bool q_scilexerpython_v2_unicode_allowed(void* self);
void q_scilexerpython_set_v3_binary_octal_allowed(void* self, bool allowed);
bool q_scilexerpython_v3_binary_octal_allowed(void* self);
void q_scilexerpython_set_v3_bytes_allowed(void* self, bool allowed);
bool q_scilexerpython_v3_bytes_allowed(void* self);
void q_scilexerpython_set_fold_comments(void* self, bool fold);
void q_scilexerpython_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerpython_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerpython_set_fold_quotes(void* self, bool fold);
void q_scilexerpython_on_set_fold_quotes(void* self, void (*slot)(void*, bool));
void q_scilexerpython_qbase_set_fold_quotes(void* self, bool fold);
void q_scilexerpython_set_indentation_warning(void* self, int64_t warn);
void q_scilexerpython_on_set_indentation_warning(void* self, void (*slot)(void*, int64_t));
void q_scilexerpython_qbase_set_indentation_warning(void* self, int64_t warn);
bool q_scilexerpython_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerpython_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpython_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerpython_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerpython_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpython_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerpython_tr2(const char* s, const char* c);
const char* q_scilexerpython_tr3(const char* s, const char* c, int n);
const char* q_scilexerpython_block_start1(void* self, int* style);
QsciAbstractAPIs* q_scilexerpython_apis(void* self);
int32_t q_scilexerpython_auto_indent_style(void* self);
QsciScintilla* q_scilexerpython_editor(void* self);
void q_scilexerpython_set_a_p_is(void* self, void* apis);
void q_scilexerpython_set_default_color(void* self, void* c);
void q_scilexerpython_set_default_font(void* self, void* f);
void q_scilexerpython_set_default_paper(void* self, void* c);
bool q_scilexerpython_read_settings(void* self, void* qs);
bool q_scilexerpython_write_settings(void* self, void* qs);
void q_scilexerpython_color_changed(void* self, void* c, int style);
void q_scilexerpython_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpython_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerpython_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerpython_font_changed(void* self, void* f, int style);
void q_scilexerpython_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpython_paper_changed(void* self, void* c, int style);
void q_scilexerpython_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpython_property_changed(void* self, const char* prop, const char* val);
void q_scilexerpython_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerpython_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerpython_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerpython_object_name(void* self);
void q_scilexerpython_set_object_name(void* self, const char* name);
bool q_scilexerpython_is_widget_type(void* self);
bool q_scilexerpython_is_window_type(void* self);
bool q_scilexerpython_is_quick_item_type(void* self);
bool q_scilexerpython_signals_blocked(void* self);
bool q_scilexerpython_block_signals(void* self, bool b);
QThread* q_scilexerpython_thread(void* self);
void q_scilexerpython_move_to_thread(void* self, void* thread);
int32_t q_scilexerpython_start_timer(void* self, int interval);
void q_scilexerpython_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerpython_children(void* self);
void q_scilexerpython_set_parent(void* self, void* parent);
void q_scilexerpython_install_event_filter(void* self, void* filterObj);
void q_scilexerpython_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerpython_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerpython_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerpython_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerpython_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerpython_dump_object_tree(void* self);
void q_scilexerpython_dump_object_info(void* self);
bool q_scilexerpython_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerpython_property(void* self, const char* name);
const char** q_scilexerpython_dynamic_property_names(void* self);
QBindingStorage* q_scilexerpython_binding_storage(void* self);
QBindingStorage* q_scilexerpython_binding_storage2(void* self);
void q_scilexerpython_destroyed(void* self);
void q_scilexerpython_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerpython_parent(void* self);
bool q_scilexerpython_inherits(void* self, const char* classname);
void q_scilexerpython_delete_later(void* self);
int32_t q_scilexerpython_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerpython_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerpython_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerpython_destroyed1(void* self, void* param1);
void q_scilexerpython_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpython_lexer_id(void* self);
int32_t q_scilexerpython_qbase_lexer_id(void* self);
void q_scilexerpython_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerpython_auto_completion_fillups(void* self);
const char* q_scilexerpython_qbase_auto_completion_fillups(void* self);
void q_scilexerpython_on_auto_completion_fillups(void* self, const char* (*slot)());
const char* q_scilexerpython_block_end(void* self, int* style);
const char* q_scilexerpython_qbase_block_end(void* self, int* style);
void q_scilexerpython_on_block_end(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerpython_block_start_keyword(void* self, int* style);
const char* q_scilexerpython_qbase_block_start_keyword(void* self, int* style);
void q_scilexerpython_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerpython_case_sensitive(void* self);
bool q_scilexerpython_qbase_case_sensitive(void* self);
void q_scilexerpython_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerpython_color(void* self, int style);
QColor* q_scilexerpython_qbase_color(void* self, int style);
void q_scilexerpython_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerpython_eol_fill(void* self, int style);
bool q_scilexerpython_qbase_eol_fill(void* self, int style);
void q_scilexerpython_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerpython_font(void* self, int style);
QFont* q_scilexerpython_qbase_font(void* self, int style);
void q_scilexerpython_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerpython_default_style(void* self);
int32_t q_scilexerpython_qbase_default_style(void* self);
void q_scilexerpython_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerpython_paper(void* self, int style);
QColor* q_scilexerpython_qbase_paper(void* self, int style);
void q_scilexerpython_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerpython_default_color_with_style(void* self, int style);
QColor* q_scilexerpython_qbase_default_color_with_style(void* self, int style);
void q_scilexerpython_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerpython_default_font_with_style(void* self, int style);
QFont* q_scilexerpython_qbase_default_font_with_style(void* self, int style);
void q_scilexerpython_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerpython_default_paper_with_style(void* self, int style);
QColor* q_scilexerpython_qbase_default_paper_with_style(void* self, int style);
void q_scilexerpython_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerpython_set_editor(void* self, void* editor);
void q_scilexerpython_qbase_set_editor(void* self, void* editor);
void q_scilexerpython_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpython_style_bits_needed(void* self);
int32_t q_scilexerpython_qbase_style_bits_needed(void* self);
void q_scilexerpython_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerpython_word_characters(void* self);
const char* q_scilexerpython_qbase_word_characters(void* self);
void q_scilexerpython_on_word_characters(void* self, const char* (*slot)());
void q_scilexerpython_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpython_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpython_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerpython_set_color(void* self, void* c, int style);
void q_scilexerpython_qbase_set_color(void* self, void* c, int style);
void q_scilexerpython_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerpython_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpython_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpython_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerpython_set_font(void* self, void* f, int style);
void q_scilexerpython_qbase_set_font(void* self, void* f, int style);
void q_scilexerpython_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerpython_set_paper(void* self, void* c, int style);
void q_scilexerpython_qbase_set_paper(void* self, void* c, int style);
void q_scilexerpython_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerpython_event(void* self, void* event);
bool q_scilexerpython_qbase_event(void* self, void* event);
void q_scilexerpython_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerpython_event_filter(void* self, void* watched, void* event);
bool q_scilexerpython_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerpython_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerpython_timer_event(void* self, void* event);
void q_scilexerpython_qbase_timer_event(void* self, void* event);
void q_scilexerpython_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerpython_child_event(void* self, void* event);
void q_scilexerpython_qbase_child_event(void* self, void* event);
void q_scilexerpython_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerpython_custom_event(void* self, void* event);
void q_scilexerpython_qbase_custom_event(void* self, void* event);
void q_scilexerpython_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerpython_connect_notify(void* self, void* signal);
void q_scilexerpython_qbase_connect_notify(void* self, void* signal);
void q_scilexerpython_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerpython_disconnect_notify(void* self, void* signal);
void q_scilexerpython_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerpython_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerpython_sender(void* self);
QObject* q_scilexerpython_qbase_sender(void* self);
void q_scilexerpython_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerpython_sender_signal_index(void* self);
int32_t q_scilexerpython_qbase_sender_signal_index(void* self);
void q_scilexerpython_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerpython_receivers(void* self, const char* signal);
int32_t q_scilexerpython_qbase_receivers(void* self, const char* signal);
void q_scilexerpython_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerpython_is_signal_connected(void* self, void* signal);
bool q_scilexerpython_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerpython_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerpython_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpython.html#types

typedef enum {
    QSCILEXERPYTHON__DEFAULT = 0,
    QSCILEXERPYTHON__COMMENT = 1,
    QSCILEXERPYTHON__NUMBER = 2,
    QSCILEXERPYTHON__DOUBLEQUOTEDSTRING = 3,
    QSCILEXERPYTHON__SINGLEQUOTEDSTRING = 4,
    QSCILEXERPYTHON__KEYWORD = 5,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDSTRING = 6,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDSTRING = 7,
    QSCILEXERPYTHON__CLASSNAME = 8,
    QSCILEXERPYTHON__FUNCTIONMETHODNAME = 9,
    QSCILEXERPYTHON__OPERATOR = 10,
    QSCILEXERPYTHON__IDENTIFIER = 11,
    QSCILEXERPYTHON__COMMENTBLOCK = 12,
    QSCILEXERPYTHON__UNCLOSEDSTRING = 13,
    QSCILEXERPYTHON__HIGHLIGHTEDIDENTIFIER = 14,
    QSCILEXERPYTHON__DECORATOR = 15,
    QSCILEXERPYTHON__DOUBLEQUOTEDFSTRING = 16,
    QSCILEXERPYTHON__SINGLEQUOTEDFSTRING = 17,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDFSTRING = 18,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDFSTRING = 19
} QsciLexerPython__;

typedef enum {
    QSCILEXERPYTHON_INDENTATIONWARNING_NOWARNING = 0,
    QSCILEXERPYTHON_INDENTATIONWARNING_INCONSISTENT = 1,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABSAFTERSPACES = 2,
    QSCILEXERPYTHON_INDENTATIONWARNING_SPACES = 3,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABS = 4
} QsciLexerPython__IndentationWarning;

#endif
