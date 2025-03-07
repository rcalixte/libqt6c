#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPO_H

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

QsciLexerPO* q_scilexerpo_new();
QsciLexerPO* q_scilexerpo_new2(void* parent);
QMetaObject* q_scilexerpo_meta_object(void* self);
void* q_scilexerpo_metacast(void* self, const char* param1);
int32_t q_scilexerpo_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerpo_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerpo_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerpo_tr(const char* s);
const char* q_scilexerpo_language(void* self);
const char* q_scilexerpo_lexer(void* self);
QColor* q_scilexerpo_default_color(void* self, int style);
QFont* q_scilexerpo_default_font(void* self, int style);
const char* q_scilexerpo_description(void* self, int style);
void q_scilexerpo_refresh_properties(void* self);
bool q_scilexerpo_fold_comments(void* self);
bool q_scilexerpo_fold_compact(void* self);
void q_scilexerpo_set_fold_comments(void* self, bool fold);
void q_scilexerpo_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerpo_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerpo_set_fold_compact(void* self, bool fold);
void q_scilexerpo_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerpo_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexerpo_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerpo_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpo_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerpo_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerpo_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpo_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerpo_tr2(const char* s, const char* c);
const char* q_scilexerpo_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerpo_apis(void* self);
int32_t q_scilexerpo_auto_indent_style(void* self);
QColor* q_scilexerpo_default_paper(void* self);
QsciScintilla* q_scilexerpo_editor(void* self);
void q_scilexerpo_set_a_p_is(void* self, void* apis);
void q_scilexerpo_set_default_color(void* self, void* c);
void q_scilexerpo_set_default_font(void* self, void* f);
void q_scilexerpo_set_default_paper(void* self, void* c);
bool q_scilexerpo_read_settings(void* self, void* qs);
bool q_scilexerpo_write_settings(void* self, void* qs);
void q_scilexerpo_color_changed(void* self, void* c, int style);
void q_scilexerpo_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpo_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerpo_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerpo_font_changed(void* self, void* f, int style);
void q_scilexerpo_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpo_paper_changed(void* self, void* c, int style);
void q_scilexerpo_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpo_property_changed(void* self, const char* prop, const char* val);
void q_scilexerpo_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerpo_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerpo_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerpo_object_name(void* self);
void q_scilexerpo_set_object_name(void* self, const char* name);
bool q_scilexerpo_is_widget_type(void* self);
bool q_scilexerpo_is_window_type(void* self);
bool q_scilexerpo_is_quick_item_type(void* self);
bool q_scilexerpo_signals_blocked(void* self);
bool q_scilexerpo_block_signals(void* self, bool b);
QThread* q_scilexerpo_thread(void* self);
void q_scilexerpo_move_to_thread(void* self, void* thread);
int32_t q_scilexerpo_start_timer(void* self, int interval);
void q_scilexerpo_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerpo_children(void* self);
void q_scilexerpo_set_parent(void* self, void* parent);
void q_scilexerpo_install_event_filter(void* self, void* filterObj);
void q_scilexerpo_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerpo_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerpo_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerpo_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerpo_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerpo_dump_object_tree(void* self);
void q_scilexerpo_dump_object_info(void* self);
bool q_scilexerpo_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerpo_property(void* self, const char* name);
const char** q_scilexerpo_dynamic_property_names(void* self);
QBindingStorage* q_scilexerpo_binding_storage(void* self);
QBindingStorage* q_scilexerpo_binding_storage2(void* self);
void q_scilexerpo_destroyed(void* self);
void q_scilexerpo_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerpo_parent(void* self);
bool q_scilexerpo_inherits(void* self, const char* classname);
void q_scilexerpo_delete_later(void* self);
int32_t q_scilexerpo_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerpo_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerpo_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerpo_destroyed1(void* self, void* param1);
void q_scilexerpo_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpo_lexer_id(void* self);
int32_t q_scilexerpo_qbase_lexer_id(void* self);
void q_scilexerpo_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerpo_auto_completion_fillups(void* self);
const char* q_scilexerpo_qbase_auto_completion_fillups(void* self);
void q_scilexerpo_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerpo_auto_completion_word_separators(void* self);
const char** q_scilexerpo_qbase_auto_completion_word_separators(void* self);
void q_scilexerpo_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerpo_block_end(void* self, int* style);
const char* q_scilexerpo_qbase_block_end(void* self, int* style);
void q_scilexerpo_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerpo_block_lookback(void* self);
int32_t q_scilexerpo_qbase_block_lookback(void* self);
void q_scilexerpo_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerpo_block_start(void* self, int* style);
const char* q_scilexerpo_qbase_block_start(void* self, int* style);
void q_scilexerpo_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerpo_block_start_keyword(void* self, int* style);
const char* q_scilexerpo_qbase_block_start_keyword(void* self, int* style);
void q_scilexerpo_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerpo_brace_style(void* self);
int32_t q_scilexerpo_qbase_brace_style(void* self);
void q_scilexerpo_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexerpo_case_sensitive(void* self);
bool q_scilexerpo_qbase_case_sensitive(void* self);
void q_scilexerpo_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerpo_color(void* self, int style);
QColor* q_scilexerpo_qbase_color(void* self, int style);
void q_scilexerpo_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerpo_eol_fill(void* self, int style);
bool q_scilexerpo_qbase_eol_fill(void* self, int style);
void q_scilexerpo_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerpo_font(void* self, int style);
QFont* q_scilexerpo_qbase_font(void* self, int style);
void q_scilexerpo_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerpo_indentation_guide_view(void* self);
int32_t q_scilexerpo_qbase_indentation_guide_view(void* self);
void q_scilexerpo_on_indentation_guide_view(void* self, int32_t (*slot)());
const char* q_scilexerpo_keywords(void* self, int set);
const char* q_scilexerpo_qbase_keywords(void* self, int set);
void q_scilexerpo_on_keywords(void* self, const char* (*slot)(void*, int));
int32_t q_scilexerpo_default_style(void* self);
int32_t q_scilexerpo_qbase_default_style(void* self);
void q_scilexerpo_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerpo_paper(void* self, int style);
QColor* q_scilexerpo_qbase_paper(void* self, int style);
void q_scilexerpo_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerpo_default_color_with_style(void* self, int style);
QColor* q_scilexerpo_qbase_default_color_with_style(void* self, int style);
void q_scilexerpo_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexerpo_default_eol_fill(void* self, int style);
bool q_scilexerpo_qbase_default_eol_fill(void* self, int style);
void q_scilexerpo_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerpo_default_font_with_style(void* self, int style);
QFont* q_scilexerpo_qbase_default_font_with_style(void* self, int style);
void q_scilexerpo_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerpo_default_paper_with_style(void* self, int style);
QColor* q_scilexerpo_qbase_default_paper_with_style(void* self, int style);
void q_scilexerpo_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerpo_set_editor(void* self, void* editor);
void q_scilexerpo_qbase_set_editor(void* self, void* editor);
void q_scilexerpo_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpo_style_bits_needed(void* self);
int32_t q_scilexerpo_qbase_style_bits_needed(void* self);
void q_scilexerpo_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerpo_word_characters(void* self);
const char* q_scilexerpo_qbase_word_characters(void* self);
void q_scilexerpo_on_word_characters(void* self, const char* (*slot)());
void q_scilexerpo_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpo_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpo_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerpo_set_color(void* self, void* c, int style);
void q_scilexerpo_qbase_set_color(void* self, void* c, int style);
void q_scilexerpo_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerpo_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpo_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpo_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerpo_set_font(void* self, void* f, int style);
void q_scilexerpo_qbase_set_font(void* self, void* f, int style);
void q_scilexerpo_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerpo_set_paper(void* self, void* c, int style);
void q_scilexerpo_qbase_set_paper(void* self, void* c, int style);
void q_scilexerpo_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerpo_event(void* self, void* event);
bool q_scilexerpo_qbase_event(void* self, void* event);
void q_scilexerpo_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerpo_event_filter(void* self, void* watched, void* event);
bool q_scilexerpo_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerpo_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerpo_timer_event(void* self, void* event);
void q_scilexerpo_qbase_timer_event(void* self, void* event);
void q_scilexerpo_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerpo_child_event(void* self, void* event);
void q_scilexerpo_qbase_child_event(void* self, void* event);
void q_scilexerpo_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerpo_custom_event(void* self, void* event);
void q_scilexerpo_qbase_custom_event(void* self, void* event);
void q_scilexerpo_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerpo_connect_notify(void* self, void* signal);
void q_scilexerpo_qbase_connect_notify(void* self, void* signal);
void q_scilexerpo_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerpo_disconnect_notify(void* self, void* signal);
void q_scilexerpo_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerpo_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerpo_sender(void* self);
QObject* q_scilexerpo_qbase_sender(void* self);
void q_scilexerpo_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerpo_sender_signal_index(void* self);
int32_t q_scilexerpo_qbase_sender_signal_index(void* self);
void q_scilexerpo_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerpo_receivers(void* self, const char* signal);
int32_t q_scilexerpo_qbase_receivers(void* self, const char* signal);
void q_scilexerpo_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerpo_is_signal_connected(void* self, void* signal);
bool q_scilexerpo_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerpo_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerpo_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpo.html#types

typedef enum {
    QSCILEXERPO__DEFAULT = 0,
    QSCILEXERPO__COMMENT = 1,
    QSCILEXERPO__MESSAGEID = 2,
    QSCILEXERPO__MESSAGEIDTEXT = 3,
    QSCILEXERPO__MESSAGESTRING = 4,
    QSCILEXERPO__MESSAGESTRINGTEXT = 5,
    QSCILEXERPO__MESSAGECONTEXT = 6,
    QSCILEXERPO__MESSAGECONTEXTTEXT = 7,
    QSCILEXERPO__FUZZY = 8,
    QSCILEXERPO__PROGRAMMERCOMMENT = 9,
    QSCILEXERPO__REFERENCE = 10,
    QSCILEXERPO__FLAGS = 11,
    QSCILEXERPO__MESSAGEIDTEXTEOL = 12,
    QSCILEXERPO__MESSAGESTRINGTEXTEOL = 13,
    QSCILEXERPO__MESSAGECONTEXTTEXTEOL = 14
} QsciLexerPO__;

#endif
