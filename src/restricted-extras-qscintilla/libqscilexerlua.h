#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERLUA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERLUA_H

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

QsciLexerLua* q_scilexerlua_new();
QsciLexerLua* q_scilexerlua_new2(void* parent);
QMetaObject* q_scilexerlua_meta_object(void* self);
void* q_scilexerlua_metacast(void* self, const char* param1);
int32_t q_scilexerlua_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerlua_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerlua_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerlua_tr(const char* s);
const char* q_scilexerlua_language(void* self);
const char* q_scilexerlua_lexer(void* self);
const char** q_scilexerlua_auto_completion_word_separators(void* self);
const char* q_scilexerlua_block_start(void* self);
int32_t q_scilexerlua_brace_style(void* self);
QColor* q_scilexerlua_default_color(void* self, int style);
bool q_scilexerlua_default_eol_fill(void* self, int style);
QFont* q_scilexerlua_default_font(void* self, int style);
QColor* q_scilexerlua_default_paper(void* self, int style);
const char* q_scilexerlua_keywords(void* self, int set);
const char* q_scilexerlua_description(void* self, int style);
void q_scilexerlua_refresh_properties(void* self);
bool q_scilexerlua_fold_compact(void* self);
void q_scilexerlua_set_fold_compact(void* self, bool fold);
void q_scilexerlua_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerlua_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexerlua_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerlua_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerlua_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerlua_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerlua_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerlua_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerlua_tr2(const char* s, const char* c);
const char* q_scilexerlua_tr3(const char* s, const char* c, int n);
const char* q_scilexerlua_block_start1(void* self, int* style);
QsciAbstractAPIs* q_scilexerlua_apis(void* self);
int32_t q_scilexerlua_auto_indent_style(void* self);
QsciScintilla* q_scilexerlua_editor(void* self);
void q_scilexerlua_set_a_p_is(void* self, void* apis);
void q_scilexerlua_set_default_color(void* self, void* c);
void q_scilexerlua_set_default_font(void* self, void* f);
void q_scilexerlua_set_default_paper(void* self, void* c);
bool q_scilexerlua_read_settings(void* self, void* qs);
bool q_scilexerlua_write_settings(void* self, void* qs);
void q_scilexerlua_color_changed(void* self, void* c, int style);
void q_scilexerlua_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerlua_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerlua_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerlua_font_changed(void* self, void* f, int style);
void q_scilexerlua_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerlua_paper_changed(void* self, void* c, int style);
void q_scilexerlua_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerlua_property_changed(void* self, const char* prop, const char* val);
void q_scilexerlua_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerlua_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerlua_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerlua_object_name(void* self);
void q_scilexerlua_set_object_name(void* self, const char* name);
bool q_scilexerlua_is_widget_type(void* self);
bool q_scilexerlua_is_window_type(void* self);
bool q_scilexerlua_is_quick_item_type(void* self);
bool q_scilexerlua_signals_blocked(void* self);
bool q_scilexerlua_block_signals(void* self, bool b);
QThread* q_scilexerlua_thread(void* self);
void q_scilexerlua_move_to_thread(void* self, void* thread);
int32_t q_scilexerlua_start_timer(void* self, int interval);
void q_scilexerlua_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerlua_children(void* self);
void q_scilexerlua_set_parent(void* self, void* parent);
void q_scilexerlua_install_event_filter(void* self, void* filterObj);
void q_scilexerlua_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerlua_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerlua_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerlua_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerlua_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerlua_dump_object_tree(void* self);
void q_scilexerlua_dump_object_info(void* self);
bool q_scilexerlua_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerlua_property(void* self, const char* name);
const char** q_scilexerlua_dynamic_property_names(void* self);
QBindingStorage* q_scilexerlua_binding_storage(void* self);
QBindingStorage* q_scilexerlua_binding_storage2(void* self);
void q_scilexerlua_destroyed(void* self);
void q_scilexerlua_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerlua_parent(void* self);
bool q_scilexerlua_inherits(void* self, const char* classname);
void q_scilexerlua_delete_later(void* self);
int32_t q_scilexerlua_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerlua_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerlua_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerlua_destroyed1(void* self, void* param1);
void q_scilexerlua_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerlua_lexer_id(void* self);
int32_t q_scilexerlua_qbase_lexer_id(void* self);
void q_scilexerlua_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerlua_auto_completion_fillups(void* self);
const char* q_scilexerlua_qbase_auto_completion_fillups(void* self);
void q_scilexerlua_on_auto_completion_fillups(void* self, const char* (*slot)());
const char* q_scilexerlua_block_end(void* self, int* style);
const char* q_scilexerlua_qbase_block_end(void* self, int* style);
void q_scilexerlua_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerlua_block_lookback(void* self);
int32_t q_scilexerlua_qbase_block_lookback(void* self);
void q_scilexerlua_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerlua_block_start_keyword(void* self, int* style);
const char* q_scilexerlua_qbase_block_start_keyword(void* self, int* style);
void q_scilexerlua_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerlua_case_sensitive(void* self);
bool q_scilexerlua_qbase_case_sensitive(void* self);
void q_scilexerlua_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerlua_color(void* self, int style);
QColor* q_scilexerlua_qbase_color(void* self, int style);
void q_scilexerlua_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerlua_eol_fill(void* self, int style);
bool q_scilexerlua_qbase_eol_fill(void* self, int style);
void q_scilexerlua_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerlua_font(void* self, int style);
QFont* q_scilexerlua_qbase_font(void* self, int style);
void q_scilexerlua_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerlua_indentation_guide_view(void* self);
int32_t q_scilexerlua_qbase_indentation_guide_view(void* self);
void q_scilexerlua_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerlua_default_style(void* self);
int32_t q_scilexerlua_qbase_default_style(void* self);
void q_scilexerlua_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerlua_paper(void* self, int style);
QColor* q_scilexerlua_qbase_paper(void* self, int style);
void q_scilexerlua_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerlua_default_color_with_style(void* self, int style);
QColor* q_scilexerlua_qbase_default_color_with_style(void* self, int style);
void q_scilexerlua_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerlua_default_font_with_style(void* self, int style);
QFont* q_scilexerlua_qbase_default_font_with_style(void* self, int style);
void q_scilexerlua_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerlua_default_paper_with_style(void* self, int style);
QColor* q_scilexerlua_qbase_default_paper_with_style(void* self, int style);
void q_scilexerlua_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerlua_set_editor(void* self, void* editor);
void q_scilexerlua_qbase_set_editor(void* self, void* editor);
void q_scilexerlua_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerlua_style_bits_needed(void* self);
int32_t q_scilexerlua_qbase_style_bits_needed(void* self);
void q_scilexerlua_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerlua_word_characters(void* self);
const char* q_scilexerlua_qbase_word_characters(void* self);
void q_scilexerlua_on_word_characters(void* self, const char* (*slot)());
void q_scilexerlua_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerlua_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerlua_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerlua_set_color(void* self, void* c, int style);
void q_scilexerlua_qbase_set_color(void* self, void* c, int style);
void q_scilexerlua_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerlua_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerlua_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerlua_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerlua_set_font(void* self, void* f, int style);
void q_scilexerlua_qbase_set_font(void* self, void* f, int style);
void q_scilexerlua_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerlua_set_paper(void* self, void* c, int style);
void q_scilexerlua_qbase_set_paper(void* self, void* c, int style);
void q_scilexerlua_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerlua_event(void* self, void* event);
bool q_scilexerlua_qbase_event(void* self, void* event);
void q_scilexerlua_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerlua_event_filter(void* self, void* watched, void* event);
bool q_scilexerlua_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerlua_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerlua_timer_event(void* self, void* event);
void q_scilexerlua_qbase_timer_event(void* self, void* event);
void q_scilexerlua_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerlua_child_event(void* self, void* event);
void q_scilexerlua_qbase_child_event(void* self, void* event);
void q_scilexerlua_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerlua_custom_event(void* self, void* event);
void q_scilexerlua_qbase_custom_event(void* self, void* event);
void q_scilexerlua_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerlua_connect_notify(void* self, void* signal);
void q_scilexerlua_qbase_connect_notify(void* self, void* signal);
void q_scilexerlua_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerlua_disconnect_notify(void* self, void* signal);
void q_scilexerlua_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerlua_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerlua_sender(void* self);
QObject* q_scilexerlua_qbase_sender(void* self);
void q_scilexerlua_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerlua_sender_signal_index(void* self);
int32_t q_scilexerlua_qbase_sender_signal_index(void* self);
void q_scilexerlua_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerlua_receivers(void* self, const char* signal);
int32_t q_scilexerlua_qbase_receivers(void* self, const char* signal);
void q_scilexerlua_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerlua_is_signal_connected(void* self, void* signal);
bool q_scilexerlua_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerlua_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerlua_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerlua.html#types

typedef enum {
    QSCILEXERLUA__DEFAULT = 0,
    QSCILEXERLUA__COMMENT = 1,
    QSCILEXERLUA__LINECOMMENT = 2,
    QSCILEXERLUA__NUMBER = 4,
    QSCILEXERLUA__KEYWORD = 5,
    QSCILEXERLUA__STRING = 6,
    QSCILEXERLUA__CHARACTER = 7,
    QSCILEXERLUA__LITERALSTRING = 8,
    QSCILEXERLUA__PREPROCESSOR = 9,
    QSCILEXERLUA__OPERATOR = 10,
    QSCILEXERLUA__IDENTIFIER = 11,
    QSCILEXERLUA__UNCLOSEDSTRING = 12,
    QSCILEXERLUA__BASICFUNCTIONS = 13,
    QSCILEXERLUA__STRINGTABLEMATHSFUNCTIONS = 14,
    QSCILEXERLUA__COROUTINESIOSYSTEMFACILITIES = 15,
    QSCILEXERLUA__KEYWORDSET5 = 16,
    QSCILEXERLUA__KEYWORDSET6 = 17,
    QSCILEXERLUA__KEYWORDSET7 = 18,
    QSCILEXERLUA__KEYWORDSET8 = 19,
    QSCILEXERLUA__LABEL = 20
} QsciLexerLua__;

#endif
