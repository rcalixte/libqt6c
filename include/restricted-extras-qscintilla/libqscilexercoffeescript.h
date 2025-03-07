#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCOFFEESCRIPT_H

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

QsciLexerCoffeeScript* q_scilexercoffeescript_new();
QsciLexerCoffeeScript* q_scilexercoffeescript_new2(void* parent);
QMetaObject* q_scilexercoffeescript_meta_object(void* self);
void* q_scilexercoffeescript_metacast(void* self, const char* param1);
int32_t q_scilexercoffeescript_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexercoffeescript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexercoffeescript_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexercoffeescript_tr(const char* s);
const char* q_scilexercoffeescript_language(void* self);
const char* q_scilexercoffeescript_lexer(void* self);
const char** q_scilexercoffeescript_auto_completion_word_separators(void* self);
const char* q_scilexercoffeescript_block_end(void* self);
const char* q_scilexercoffeescript_block_start(void* self);
const char* q_scilexercoffeescript_block_start_keyword(void* self);
int32_t q_scilexercoffeescript_brace_style(void* self);
const char* q_scilexercoffeescript_word_characters(void* self);
QColor* q_scilexercoffeescript_default_color(void* self, int style);
bool q_scilexercoffeescript_default_eol_fill(void* self, int style);
QFont* q_scilexercoffeescript_default_font(void* self, int style);
QColor* q_scilexercoffeescript_default_paper(void* self, int style);
const char* q_scilexercoffeescript_keywords(void* self, int set);
const char* q_scilexercoffeescript_description(void* self, int style);
void q_scilexercoffeescript_refresh_properties(void* self);
bool q_scilexercoffeescript_dollars_allowed(void* self);
void q_scilexercoffeescript_set_dollars_allowed(void* self, bool allowed);
bool q_scilexercoffeescript_fold_comments(void* self);
void q_scilexercoffeescript_set_fold_comments(void* self, bool fold);
bool q_scilexercoffeescript_fold_compact(void* self);
void q_scilexercoffeescript_set_fold_compact(void* self, bool fold);
bool q_scilexercoffeescript_style_preprocessor(void* self);
void q_scilexercoffeescript_set_style_preprocessor(void* self, bool style);
bool q_scilexercoffeescript_read_properties(void* self, void* qs, const char* prefix);
void q_scilexercoffeescript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercoffeescript_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexercoffeescript_write_properties(void* self, void* qs, const char* prefix);
void q_scilexercoffeescript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercoffeescript_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexercoffeescript_tr2(const char* s, const char* c);
const char* q_scilexercoffeescript_tr3(const char* s, const char* c, int n);
const char* q_scilexercoffeescript_block_end1(void* self, int* style);
const char* q_scilexercoffeescript_block_start1(void* self, int* style);
const char* q_scilexercoffeescript_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexercoffeescript_apis(void* self);
int32_t q_scilexercoffeescript_auto_indent_style(void* self);
QsciScintilla* q_scilexercoffeescript_editor(void* self);
void q_scilexercoffeescript_set_a_p_is(void* self, void* apis);
void q_scilexercoffeescript_set_default_color(void* self, void* c);
void q_scilexercoffeescript_set_default_font(void* self, void* f);
void q_scilexercoffeescript_set_default_paper(void* self, void* c);
bool q_scilexercoffeescript_read_settings(void* self, void* qs);
bool q_scilexercoffeescript_write_settings(void* self, void* qs);
void q_scilexercoffeescript_color_changed(void* self, void* c, int style);
void q_scilexercoffeescript_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercoffeescript_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexercoffeescript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexercoffeescript_font_changed(void* self, void* f, int style);
void q_scilexercoffeescript_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercoffeescript_paper_changed(void* self, void* c, int style);
void q_scilexercoffeescript_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercoffeescript_property_changed(void* self, const char* prop, const char* val);
void q_scilexercoffeescript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexercoffeescript_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexercoffeescript_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexercoffeescript_object_name(void* self);
void q_scilexercoffeescript_set_object_name(void* self, const char* name);
bool q_scilexercoffeescript_is_widget_type(void* self);
bool q_scilexercoffeescript_is_window_type(void* self);
bool q_scilexercoffeescript_is_quick_item_type(void* self);
bool q_scilexercoffeescript_signals_blocked(void* self);
bool q_scilexercoffeescript_block_signals(void* self, bool b);
QThread* q_scilexercoffeescript_thread(void* self);
void q_scilexercoffeescript_move_to_thread(void* self, void* thread);
int32_t q_scilexercoffeescript_start_timer(void* self, int interval);
void q_scilexercoffeescript_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexercoffeescript_children(void* self);
void q_scilexercoffeescript_set_parent(void* self, void* parent);
void q_scilexercoffeescript_install_event_filter(void* self, void* filterObj);
void q_scilexercoffeescript_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexercoffeescript_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexercoffeescript_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexercoffeescript_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexercoffeescript_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexercoffeescript_dump_object_tree(void* self);
void q_scilexercoffeescript_dump_object_info(void* self);
bool q_scilexercoffeescript_set_property(void* self, const char* name, void* value);
QVariant* q_scilexercoffeescript_property(void* self, const char* name);
const char** q_scilexercoffeescript_dynamic_property_names(void* self);
QBindingStorage* q_scilexercoffeescript_binding_storage(void* self);
QBindingStorage* q_scilexercoffeescript_binding_storage2(void* self);
void q_scilexercoffeescript_destroyed(void* self);
void q_scilexercoffeescript_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexercoffeescript_parent(void* self);
bool q_scilexercoffeescript_inherits(void* self, const char* classname);
void q_scilexercoffeescript_delete_later(void* self);
int32_t q_scilexercoffeescript_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexercoffeescript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexercoffeescript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexercoffeescript_destroyed1(void* self, void* param1);
void q_scilexercoffeescript_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexercoffeescript_lexer_id(void* self);
int32_t q_scilexercoffeescript_qbase_lexer_id(void* self);
void q_scilexercoffeescript_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexercoffeescript_auto_completion_fillups(void* self);
const char* q_scilexercoffeescript_qbase_auto_completion_fillups(void* self);
void q_scilexercoffeescript_on_auto_completion_fillups(void* self, const char* (*slot)());
int32_t q_scilexercoffeescript_block_lookback(void* self);
int32_t q_scilexercoffeescript_qbase_block_lookback(void* self);
void q_scilexercoffeescript_on_block_lookback(void* self, int32_t (*slot)());
bool q_scilexercoffeescript_case_sensitive(void* self);
bool q_scilexercoffeescript_qbase_case_sensitive(void* self);
void q_scilexercoffeescript_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexercoffeescript_color(void* self, int style);
QColor* q_scilexercoffeescript_qbase_color(void* self, int style);
void q_scilexercoffeescript_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexercoffeescript_eol_fill(void* self, int style);
bool q_scilexercoffeescript_qbase_eol_fill(void* self, int style);
void q_scilexercoffeescript_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexercoffeescript_font(void* self, int style);
QFont* q_scilexercoffeescript_qbase_font(void* self, int style);
void q_scilexercoffeescript_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexercoffeescript_indentation_guide_view(void* self);
int32_t q_scilexercoffeescript_qbase_indentation_guide_view(void* self);
void q_scilexercoffeescript_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexercoffeescript_default_style(void* self);
int32_t q_scilexercoffeescript_qbase_default_style(void* self);
void q_scilexercoffeescript_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexercoffeescript_paper(void* self, int style);
QColor* q_scilexercoffeescript_qbase_paper(void* self, int style);
void q_scilexercoffeescript_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexercoffeescript_default_color_with_style(void* self, int style);
QColor* q_scilexercoffeescript_qbase_default_color_with_style(void* self, int style);
void q_scilexercoffeescript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexercoffeescript_default_font_with_style(void* self, int style);
QFont* q_scilexercoffeescript_qbase_default_font_with_style(void* self, int style);
void q_scilexercoffeescript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexercoffeescript_default_paper_with_style(void* self, int style);
QColor* q_scilexercoffeescript_qbase_default_paper_with_style(void* self, int style);
void q_scilexercoffeescript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexercoffeescript_set_editor(void* self, void* editor);
void q_scilexercoffeescript_qbase_set_editor(void* self, void* editor);
void q_scilexercoffeescript_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexercoffeescript_style_bits_needed(void* self);
int32_t q_scilexercoffeescript_qbase_style_bits_needed(void* self);
void q_scilexercoffeescript_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexercoffeescript_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercoffeescript_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercoffeescript_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexercoffeescript_set_color(void* self, void* c, int style);
void q_scilexercoffeescript_qbase_set_color(void* self, void* c, int style);
void q_scilexercoffeescript_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexercoffeescript_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercoffeescript_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercoffeescript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexercoffeescript_set_font(void* self, void* f, int style);
void q_scilexercoffeescript_qbase_set_font(void* self, void* f, int style);
void q_scilexercoffeescript_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexercoffeescript_set_paper(void* self, void* c, int style);
void q_scilexercoffeescript_qbase_set_paper(void* self, void* c, int style);
void q_scilexercoffeescript_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexercoffeescript_event(void* self, void* event);
bool q_scilexercoffeescript_qbase_event(void* self, void* event);
void q_scilexercoffeescript_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexercoffeescript_event_filter(void* self, void* watched, void* event);
bool q_scilexercoffeescript_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexercoffeescript_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexercoffeescript_timer_event(void* self, void* event);
void q_scilexercoffeescript_qbase_timer_event(void* self, void* event);
void q_scilexercoffeescript_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexercoffeescript_child_event(void* self, void* event);
void q_scilexercoffeescript_qbase_child_event(void* self, void* event);
void q_scilexercoffeescript_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexercoffeescript_custom_event(void* self, void* event);
void q_scilexercoffeescript_qbase_custom_event(void* self, void* event);
void q_scilexercoffeescript_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexercoffeescript_connect_notify(void* self, void* signal);
void q_scilexercoffeescript_qbase_connect_notify(void* self, void* signal);
void q_scilexercoffeescript_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexercoffeescript_disconnect_notify(void* self, void* signal);
void q_scilexercoffeescript_qbase_disconnect_notify(void* self, void* signal);
void q_scilexercoffeescript_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexercoffeescript_sender(void* self);
QObject* q_scilexercoffeescript_qbase_sender(void* self);
void q_scilexercoffeescript_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexercoffeescript_sender_signal_index(void* self);
int32_t q_scilexercoffeescript_qbase_sender_signal_index(void* self);
void q_scilexercoffeescript_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexercoffeescript_receivers(void* self, const char* signal);
int32_t q_scilexercoffeescript_qbase_receivers(void* self, const char* signal);
void q_scilexercoffeescript_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexercoffeescript_is_signal_connected(void* self, void* signal);
bool q_scilexercoffeescript_qbase_is_signal_connected(void* self, void* signal);
void q_scilexercoffeescript_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexercoffeescript_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexercoffeescript.html#types

typedef enum {
    QSCILEXERCOFFEESCRIPT__DEFAULT = 0,
    QSCILEXERCOFFEESCRIPT__COMMENT = 1,
    QSCILEXERCOFFEESCRIPT__COMMENTLINE = 2,
    QSCILEXERCOFFEESCRIPT__COMMENTDOC = 3,
    QSCILEXERCOFFEESCRIPT__NUMBER = 4,
    QSCILEXERCOFFEESCRIPT__KEYWORD = 5,
    QSCILEXERCOFFEESCRIPT__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERCOFFEESCRIPT__SINGLEQUOTEDSTRING = 7,
    QSCILEXERCOFFEESCRIPT__UUID = 8,
    QSCILEXERCOFFEESCRIPT__PREPROCESSOR = 9,
    QSCILEXERCOFFEESCRIPT__OPERATOR = 10,
    QSCILEXERCOFFEESCRIPT__IDENTIFIER = 11,
    QSCILEXERCOFFEESCRIPT__UNCLOSEDSTRING = 12,
    QSCILEXERCOFFEESCRIPT__VERBATIMSTRING = 13,
    QSCILEXERCOFFEESCRIPT__REGEX = 14,
    QSCILEXERCOFFEESCRIPT__COMMENTLINEDOC = 15,
    QSCILEXERCOFFEESCRIPT__KEYWORDSET2 = 16,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORD = 17,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERCOFFEESCRIPT__GLOBALCLASS = 19,
    QSCILEXERCOFFEESCRIPT__COMMENTBLOCK = 22,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEX = 23,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEXCOMMENT = 24,
    QSCILEXERCOFFEESCRIPT__INSTANCEPROPERTY = 25
} QsciLexerCoffeeScript__;

#endif
