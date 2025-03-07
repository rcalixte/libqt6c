#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERRUBY_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERRUBY_H

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

QsciLexerRuby* q_scilexerruby_new();
QsciLexerRuby* q_scilexerruby_new2(void* parent);
QMetaObject* q_scilexerruby_meta_object(void* self);
void* q_scilexerruby_metacast(void* self, const char* param1);
int32_t q_scilexerruby_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerruby_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerruby_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerruby_tr(const char* s);
const char* q_scilexerruby_language(void* self);
const char* q_scilexerruby_lexer(void* self);
const char* q_scilexerruby_block_end(void* self);
const char* q_scilexerruby_block_start(void* self);
const char* q_scilexerruby_block_start_keyword(void* self);
int32_t q_scilexerruby_brace_style(void* self);
QColor* q_scilexerruby_default_color(void* self, int style);
bool q_scilexerruby_default_eol_fill(void* self, int style);
QFont* q_scilexerruby_default_font(void* self, int style);
QColor* q_scilexerruby_default_paper(void* self, int style);
const char* q_scilexerruby_keywords(void* self, int set);
const char* q_scilexerruby_description(void* self, int style);
void q_scilexerruby_refresh_properties(void* self);
void q_scilexerruby_set_fold_comments(void* self, bool fold);
bool q_scilexerruby_fold_comments(void* self);
void q_scilexerruby_set_fold_compact(void* self, bool fold);
bool q_scilexerruby_fold_compact(void* self);
bool q_scilexerruby_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerruby_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerruby_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerruby_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerruby_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerruby_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerruby_tr2(const char* s, const char* c);
const char* q_scilexerruby_tr3(const char* s, const char* c, int n);
const char* q_scilexerruby_block_end1(void* self, int* style);
const char* q_scilexerruby_block_start1(void* self, int* style);
const char* q_scilexerruby_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexerruby_apis(void* self);
int32_t q_scilexerruby_auto_indent_style(void* self);
QsciScintilla* q_scilexerruby_editor(void* self);
void q_scilexerruby_set_a_p_is(void* self, void* apis);
void q_scilexerruby_set_default_color(void* self, void* c);
void q_scilexerruby_set_default_font(void* self, void* f);
void q_scilexerruby_set_default_paper(void* self, void* c);
bool q_scilexerruby_read_settings(void* self, void* qs);
bool q_scilexerruby_write_settings(void* self, void* qs);
void q_scilexerruby_color_changed(void* self, void* c, int style);
void q_scilexerruby_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerruby_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerruby_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerruby_font_changed(void* self, void* f, int style);
void q_scilexerruby_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerruby_paper_changed(void* self, void* c, int style);
void q_scilexerruby_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerruby_property_changed(void* self, const char* prop, const char* val);
void q_scilexerruby_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerruby_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerruby_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerruby_object_name(void* self);
void q_scilexerruby_set_object_name(void* self, const char* name);
bool q_scilexerruby_is_widget_type(void* self);
bool q_scilexerruby_is_window_type(void* self);
bool q_scilexerruby_is_quick_item_type(void* self);
bool q_scilexerruby_signals_blocked(void* self);
bool q_scilexerruby_block_signals(void* self, bool b);
QThread* q_scilexerruby_thread(void* self);
void q_scilexerruby_move_to_thread(void* self, void* thread);
int32_t q_scilexerruby_start_timer(void* self, int interval);
void q_scilexerruby_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerruby_children(void* self);
void q_scilexerruby_set_parent(void* self, void* parent);
void q_scilexerruby_install_event_filter(void* self, void* filterObj);
void q_scilexerruby_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerruby_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerruby_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerruby_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerruby_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerruby_dump_object_tree(void* self);
void q_scilexerruby_dump_object_info(void* self);
bool q_scilexerruby_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerruby_property(void* self, const char* name);
const char** q_scilexerruby_dynamic_property_names(void* self);
QBindingStorage* q_scilexerruby_binding_storage(void* self);
QBindingStorage* q_scilexerruby_binding_storage2(void* self);
void q_scilexerruby_destroyed(void* self);
void q_scilexerruby_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerruby_parent(void* self);
bool q_scilexerruby_inherits(void* self, const char* classname);
void q_scilexerruby_delete_later(void* self);
int32_t q_scilexerruby_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerruby_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerruby_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerruby_destroyed1(void* self, void* param1);
void q_scilexerruby_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerruby_lexer_id(void* self);
int32_t q_scilexerruby_qbase_lexer_id(void* self);
void q_scilexerruby_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerruby_auto_completion_fillups(void* self);
const char* q_scilexerruby_qbase_auto_completion_fillups(void* self);
void q_scilexerruby_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerruby_auto_completion_word_separators(void* self);
const char** q_scilexerruby_qbase_auto_completion_word_separators(void* self);
void q_scilexerruby_on_auto_completion_word_separators(void* self, const char** (*slot)());
int32_t q_scilexerruby_block_lookback(void* self);
int32_t q_scilexerruby_qbase_block_lookback(void* self);
void q_scilexerruby_on_block_lookback(void* self, int32_t (*slot)());
bool q_scilexerruby_case_sensitive(void* self);
bool q_scilexerruby_qbase_case_sensitive(void* self);
void q_scilexerruby_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerruby_color(void* self, int style);
QColor* q_scilexerruby_qbase_color(void* self, int style);
void q_scilexerruby_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerruby_eol_fill(void* self, int style);
bool q_scilexerruby_qbase_eol_fill(void* self, int style);
void q_scilexerruby_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerruby_font(void* self, int style);
QFont* q_scilexerruby_qbase_font(void* self, int style);
void q_scilexerruby_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerruby_indentation_guide_view(void* self);
int32_t q_scilexerruby_qbase_indentation_guide_view(void* self);
void q_scilexerruby_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerruby_default_style(void* self);
int32_t q_scilexerruby_qbase_default_style(void* self);
void q_scilexerruby_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerruby_paper(void* self, int style);
QColor* q_scilexerruby_qbase_paper(void* self, int style);
void q_scilexerruby_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerruby_default_color_with_style(void* self, int style);
QColor* q_scilexerruby_qbase_default_color_with_style(void* self, int style);
void q_scilexerruby_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerruby_default_font_with_style(void* self, int style);
QFont* q_scilexerruby_qbase_default_font_with_style(void* self, int style);
void q_scilexerruby_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerruby_default_paper_with_style(void* self, int style);
QColor* q_scilexerruby_qbase_default_paper_with_style(void* self, int style);
void q_scilexerruby_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerruby_set_editor(void* self, void* editor);
void q_scilexerruby_qbase_set_editor(void* self, void* editor);
void q_scilexerruby_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerruby_style_bits_needed(void* self);
int32_t q_scilexerruby_qbase_style_bits_needed(void* self);
void q_scilexerruby_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerruby_word_characters(void* self);
const char* q_scilexerruby_qbase_word_characters(void* self);
void q_scilexerruby_on_word_characters(void* self, const char* (*slot)());
void q_scilexerruby_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerruby_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerruby_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerruby_set_color(void* self, void* c, int style);
void q_scilexerruby_qbase_set_color(void* self, void* c, int style);
void q_scilexerruby_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerruby_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerruby_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerruby_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerruby_set_font(void* self, void* f, int style);
void q_scilexerruby_qbase_set_font(void* self, void* f, int style);
void q_scilexerruby_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerruby_set_paper(void* self, void* c, int style);
void q_scilexerruby_qbase_set_paper(void* self, void* c, int style);
void q_scilexerruby_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerruby_event(void* self, void* event);
bool q_scilexerruby_qbase_event(void* self, void* event);
void q_scilexerruby_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerruby_event_filter(void* self, void* watched, void* event);
bool q_scilexerruby_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerruby_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerruby_timer_event(void* self, void* event);
void q_scilexerruby_qbase_timer_event(void* self, void* event);
void q_scilexerruby_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerruby_child_event(void* self, void* event);
void q_scilexerruby_qbase_child_event(void* self, void* event);
void q_scilexerruby_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerruby_custom_event(void* self, void* event);
void q_scilexerruby_qbase_custom_event(void* self, void* event);
void q_scilexerruby_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerruby_connect_notify(void* self, void* signal);
void q_scilexerruby_qbase_connect_notify(void* self, void* signal);
void q_scilexerruby_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerruby_disconnect_notify(void* self, void* signal);
void q_scilexerruby_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerruby_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerruby_sender(void* self);
QObject* q_scilexerruby_qbase_sender(void* self);
void q_scilexerruby_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerruby_sender_signal_index(void* self);
int32_t q_scilexerruby_qbase_sender_signal_index(void* self);
void q_scilexerruby_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerruby_receivers(void* self, const char* signal);
int32_t q_scilexerruby_qbase_receivers(void* self, const char* signal);
void q_scilexerruby_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerruby_is_signal_connected(void* self, void* signal);
bool q_scilexerruby_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerruby_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerruby_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerruby.html#types

typedef enum {
    QSCILEXERRUBY__DEFAULT = 0,
    QSCILEXERRUBY__ERROR = 1,
    QSCILEXERRUBY__COMMENT = 2,
    QSCILEXERRUBY__POD = 3,
    QSCILEXERRUBY__NUMBER = 4,
    QSCILEXERRUBY__KEYWORD = 5,
    QSCILEXERRUBY__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERRUBY__SINGLEQUOTEDSTRING = 7,
    QSCILEXERRUBY__CLASSNAME = 8,
    QSCILEXERRUBY__FUNCTIONMETHODNAME = 9,
    QSCILEXERRUBY__OPERATOR = 10,
    QSCILEXERRUBY__IDENTIFIER = 11,
    QSCILEXERRUBY__REGEX = 12,
    QSCILEXERRUBY__GLOBAL = 13,
    QSCILEXERRUBY__SYMBOL = 14,
    QSCILEXERRUBY__MODULENAME = 15,
    QSCILEXERRUBY__INSTANCEVARIABLE = 16,
    QSCILEXERRUBY__CLASSVARIABLE = 17,
    QSCILEXERRUBY__BACKTICKS = 18,
    QSCILEXERRUBY__DATASECTION = 19,
    QSCILEXERRUBY__HEREDOCUMENTDELIMITER = 20,
    QSCILEXERRUBY__HEREDOCUMENT = 21,
    /// Workaround for duplicate enum value: PERCENTSTRINGQ
    QSCILEXERRUBY__PERCENTSTRINGQ_4 = 24,
    /// Workaround for duplicate enum value: PERCENTSTRINGQ
    QSCILEXERRUBY__PERCENTSTRINGQ_5 = 25,
    QSCILEXERRUBY__PERCENTSTRINGX = 26,
    QSCILEXERRUBY__PERCENTSTRINGR = 27,
    QSCILEXERRUBY__PERCENTSTRINGW = 28,
    QSCILEXERRUBY__DEMOTEDKEYWORD = 29,
    QSCILEXERRUBY__STDIN = 30,
    QSCILEXERRUBY__STDOUT = 31,
    QSCILEXERRUBY__STDERR = 40
} QsciLexerRuby__;

#endif
