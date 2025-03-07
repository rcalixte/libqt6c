#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERBASH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERBASH_H

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

QsciLexerBash* q_scilexerbash_new();
QsciLexerBash* q_scilexerbash_new2(void* parent);
QMetaObject* q_scilexerbash_meta_object(void* self);
void* q_scilexerbash_metacast(void* self, const char* param1);
int32_t q_scilexerbash_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerbash_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerbash_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerbash_tr(const char* s);
const char* q_scilexerbash_language(void* self);
const char* q_scilexerbash_lexer(void* self);
int32_t q_scilexerbash_brace_style(void* self);
const char* q_scilexerbash_word_characters(void* self);
QColor* q_scilexerbash_default_color(void* self, int style);
bool q_scilexerbash_default_eol_fill(void* self, int style);
QFont* q_scilexerbash_default_font(void* self, int style);
QColor* q_scilexerbash_default_paper(void* self, int style);
const char* q_scilexerbash_keywords(void* self, int set);
const char* q_scilexerbash_description(void* self, int style);
void q_scilexerbash_refresh_properties(void* self);
bool q_scilexerbash_fold_comments(void* self);
bool q_scilexerbash_fold_compact(void* self);
void q_scilexerbash_set_fold_comments(void* self, bool fold);
void q_scilexerbash_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerbash_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerbash_set_fold_compact(void* self, bool fold);
void q_scilexerbash_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerbash_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexerbash_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerbash_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerbash_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerbash_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerbash_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerbash_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerbash_tr2(const char* s, const char* c);
const char* q_scilexerbash_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerbash_apis(void* self);
int32_t q_scilexerbash_auto_indent_style(void* self);
QsciScintilla* q_scilexerbash_editor(void* self);
void q_scilexerbash_set_a_p_is(void* self, void* apis);
void q_scilexerbash_set_default_color(void* self, void* c);
void q_scilexerbash_set_default_font(void* self, void* f);
void q_scilexerbash_set_default_paper(void* self, void* c);
bool q_scilexerbash_read_settings(void* self, void* qs);
bool q_scilexerbash_write_settings(void* self, void* qs);
void q_scilexerbash_color_changed(void* self, void* c, int style);
void q_scilexerbash_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerbash_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerbash_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerbash_font_changed(void* self, void* f, int style);
void q_scilexerbash_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerbash_paper_changed(void* self, void* c, int style);
void q_scilexerbash_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerbash_property_changed(void* self, const char* prop, const char* val);
void q_scilexerbash_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerbash_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerbash_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerbash_object_name(void* self);
void q_scilexerbash_set_object_name(void* self, const char* name);
bool q_scilexerbash_is_widget_type(void* self);
bool q_scilexerbash_is_window_type(void* self);
bool q_scilexerbash_is_quick_item_type(void* self);
bool q_scilexerbash_signals_blocked(void* self);
bool q_scilexerbash_block_signals(void* self, bool b);
QThread* q_scilexerbash_thread(void* self);
void q_scilexerbash_move_to_thread(void* self, void* thread);
int32_t q_scilexerbash_start_timer(void* self, int interval);
void q_scilexerbash_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerbash_children(void* self);
void q_scilexerbash_set_parent(void* self, void* parent);
void q_scilexerbash_install_event_filter(void* self, void* filterObj);
void q_scilexerbash_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerbash_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerbash_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerbash_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerbash_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerbash_dump_object_tree(void* self);
void q_scilexerbash_dump_object_info(void* self);
bool q_scilexerbash_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerbash_property(void* self, const char* name);
const char** q_scilexerbash_dynamic_property_names(void* self);
QBindingStorage* q_scilexerbash_binding_storage(void* self);
QBindingStorage* q_scilexerbash_binding_storage2(void* self);
void q_scilexerbash_destroyed(void* self);
void q_scilexerbash_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerbash_parent(void* self);
bool q_scilexerbash_inherits(void* self, const char* classname);
void q_scilexerbash_delete_later(void* self);
int32_t q_scilexerbash_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerbash_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerbash_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerbash_destroyed1(void* self, void* param1);
void q_scilexerbash_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerbash_lexer_id(void* self);
int32_t q_scilexerbash_qbase_lexer_id(void* self);
void q_scilexerbash_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerbash_auto_completion_fillups(void* self);
const char* q_scilexerbash_qbase_auto_completion_fillups(void* self);
void q_scilexerbash_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerbash_auto_completion_word_separators(void* self);
const char** q_scilexerbash_qbase_auto_completion_word_separators(void* self);
void q_scilexerbash_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerbash_block_end(void* self, int* style);
const char* q_scilexerbash_qbase_block_end(void* self, int* style);
void q_scilexerbash_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerbash_block_lookback(void* self);
int32_t q_scilexerbash_qbase_block_lookback(void* self);
void q_scilexerbash_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerbash_block_start(void* self, int* style);
const char* q_scilexerbash_qbase_block_start(void* self, int* style);
void q_scilexerbash_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerbash_block_start_keyword(void* self, int* style);
const char* q_scilexerbash_qbase_block_start_keyword(void* self, int* style);
void q_scilexerbash_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerbash_case_sensitive(void* self);
bool q_scilexerbash_qbase_case_sensitive(void* self);
void q_scilexerbash_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerbash_color(void* self, int style);
QColor* q_scilexerbash_qbase_color(void* self, int style);
void q_scilexerbash_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerbash_eol_fill(void* self, int style);
bool q_scilexerbash_qbase_eol_fill(void* self, int style);
void q_scilexerbash_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerbash_font(void* self, int style);
QFont* q_scilexerbash_qbase_font(void* self, int style);
void q_scilexerbash_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerbash_indentation_guide_view(void* self);
int32_t q_scilexerbash_qbase_indentation_guide_view(void* self);
void q_scilexerbash_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerbash_default_style(void* self);
int32_t q_scilexerbash_qbase_default_style(void* self);
void q_scilexerbash_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerbash_paper(void* self, int style);
QColor* q_scilexerbash_qbase_paper(void* self, int style);
void q_scilexerbash_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerbash_default_color_with_style(void* self, int style);
QColor* q_scilexerbash_qbase_default_color_with_style(void* self, int style);
void q_scilexerbash_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerbash_default_font_with_style(void* self, int style);
QFont* q_scilexerbash_qbase_default_font_with_style(void* self, int style);
void q_scilexerbash_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerbash_default_paper_with_style(void* self, int style);
QColor* q_scilexerbash_qbase_default_paper_with_style(void* self, int style);
void q_scilexerbash_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerbash_set_editor(void* self, void* editor);
void q_scilexerbash_qbase_set_editor(void* self, void* editor);
void q_scilexerbash_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerbash_style_bits_needed(void* self);
int32_t q_scilexerbash_qbase_style_bits_needed(void* self);
void q_scilexerbash_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerbash_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerbash_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerbash_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerbash_set_color(void* self, void* c, int style);
void q_scilexerbash_qbase_set_color(void* self, void* c, int style);
void q_scilexerbash_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerbash_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerbash_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerbash_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerbash_set_font(void* self, void* f, int style);
void q_scilexerbash_qbase_set_font(void* self, void* f, int style);
void q_scilexerbash_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerbash_set_paper(void* self, void* c, int style);
void q_scilexerbash_qbase_set_paper(void* self, void* c, int style);
void q_scilexerbash_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerbash_event(void* self, void* event);
bool q_scilexerbash_qbase_event(void* self, void* event);
void q_scilexerbash_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerbash_event_filter(void* self, void* watched, void* event);
bool q_scilexerbash_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerbash_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerbash_timer_event(void* self, void* event);
void q_scilexerbash_qbase_timer_event(void* self, void* event);
void q_scilexerbash_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerbash_child_event(void* self, void* event);
void q_scilexerbash_qbase_child_event(void* self, void* event);
void q_scilexerbash_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerbash_custom_event(void* self, void* event);
void q_scilexerbash_qbase_custom_event(void* self, void* event);
void q_scilexerbash_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerbash_connect_notify(void* self, void* signal);
void q_scilexerbash_qbase_connect_notify(void* self, void* signal);
void q_scilexerbash_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerbash_disconnect_notify(void* self, void* signal);
void q_scilexerbash_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerbash_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerbash_sender(void* self);
QObject* q_scilexerbash_qbase_sender(void* self);
void q_scilexerbash_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerbash_sender_signal_index(void* self);
int32_t q_scilexerbash_qbase_sender_signal_index(void* self);
void q_scilexerbash_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerbash_receivers(void* self, const char* signal);
int32_t q_scilexerbash_qbase_receivers(void* self, const char* signal);
void q_scilexerbash_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerbash_is_signal_connected(void* self, void* signal);
bool q_scilexerbash_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerbash_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerbash_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerbash.html#types

typedef enum {
    QSCILEXERBASH__DEFAULT = 0,
    QSCILEXERBASH__ERROR = 1,
    QSCILEXERBASH__COMMENT = 2,
    QSCILEXERBASH__NUMBER = 3,
    QSCILEXERBASH__KEYWORD = 4,
    QSCILEXERBASH__DOUBLEQUOTEDSTRING = 5,
    QSCILEXERBASH__SINGLEQUOTEDSTRING = 6,
    QSCILEXERBASH__OPERATOR = 7,
    QSCILEXERBASH__IDENTIFIER = 8,
    QSCILEXERBASH__SCALAR = 9,
    QSCILEXERBASH__PARAMETEREXPANSION = 10,
    QSCILEXERBASH__BACKTICKS = 11,
    QSCILEXERBASH__HEREDOCUMENTDELIMITER = 12,
    QSCILEXERBASH__SINGLEQUOTEDHEREDOCUMENT = 13
} QsciLexerBash__;

#endif
