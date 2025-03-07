#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERAVS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERAVS_H

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

QsciLexerAVS* q_scilexeravs_new();
QsciLexerAVS* q_scilexeravs_new2(void* parent);
QMetaObject* q_scilexeravs_meta_object(void* self);
void* q_scilexeravs_metacast(void* self, const char* param1);
int32_t q_scilexeravs_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexeravs_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexeravs_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexeravs_tr(const char* s);
const char* q_scilexeravs_language(void* self);
const char* q_scilexeravs_lexer(void* self);
int32_t q_scilexeravs_brace_style(void* self);
const char* q_scilexeravs_word_characters(void* self);
QColor* q_scilexeravs_default_color(void* self, int style);
QFont* q_scilexeravs_default_font(void* self, int style);
const char* q_scilexeravs_keywords(void* self, int set);
const char* q_scilexeravs_description(void* self, int style);
void q_scilexeravs_refresh_properties(void* self);
bool q_scilexeravs_fold_comments(void* self);
bool q_scilexeravs_fold_compact(void* self);
void q_scilexeravs_set_fold_comments(void* self, bool fold);
void q_scilexeravs_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexeravs_qbase_set_fold_comments(void* self, bool fold);
void q_scilexeravs_set_fold_compact(void* self, bool fold);
void q_scilexeravs_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexeravs_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexeravs_read_properties(void* self, void* qs, const char* prefix);
void q_scilexeravs_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexeravs_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexeravs_write_properties(void* self, void* qs, const char* prefix);
void q_scilexeravs_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexeravs_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexeravs_tr2(const char* s, const char* c);
const char* q_scilexeravs_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexeravs_apis(void* self);
int32_t q_scilexeravs_auto_indent_style(void* self);
QColor* q_scilexeravs_default_paper(void* self);
QsciScintilla* q_scilexeravs_editor(void* self);
void q_scilexeravs_set_a_p_is(void* self, void* apis);
void q_scilexeravs_set_default_color(void* self, void* c);
void q_scilexeravs_set_default_font(void* self, void* f);
void q_scilexeravs_set_default_paper(void* self, void* c);
bool q_scilexeravs_read_settings(void* self, void* qs);
bool q_scilexeravs_write_settings(void* self, void* qs);
void q_scilexeravs_color_changed(void* self, void* c, int style);
void q_scilexeravs_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexeravs_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexeravs_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexeravs_font_changed(void* self, void* f, int style);
void q_scilexeravs_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexeravs_paper_changed(void* self, void* c, int style);
void q_scilexeravs_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexeravs_property_changed(void* self, const char* prop, const char* val);
void q_scilexeravs_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexeravs_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexeravs_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexeravs_object_name(void* self);
void q_scilexeravs_set_object_name(void* self, const char* name);
bool q_scilexeravs_is_widget_type(void* self);
bool q_scilexeravs_is_window_type(void* self);
bool q_scilexeravs_is_quick_item_type(void* self);
bool q_scilexeravs_signals_blocked(void* self);
bool q_scilexeravs_block_signals(void* self, bool b);
QThread* q_scilexeravs_thread(void* self);
void q_scilexeravs_move_to_thread(void* self, void* thread);
int32_t q_scilexeravs_start_timer(void* self, int interval);
void q_scilexeravs_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexeravs_children(void* self);
void q_scilexeravs_set_parent(void* self, void* parent);
void q_scilexeravs_install_event_filter(void* self, void* filterObj);
void q_scilexeravs_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexeravs_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexeravs_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexeravs_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexeravs_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexeravs_dump_object_tree(void* self);
void q_scilexeravs_dump_object_info(void* self);
bool q_scilexeravs_set_property(void* self, const char* name, void* value);
QVariant* q_scilexeravs_property(void* self, const char* name);
const char** q_scilexeravs_dynamic_property_names(void* self);
QBindingStorage* q_scilexeravs_binding_storage(void* self);
QBindingStorage* q_scilexeravs_binding_storage2(void* self);
void q_scilexeravs_destroyed(void* self);
void q_scilexeravs_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexeravs_parent(void* self);
bool q_scilexeravs_inherits(void* self, const char* classname);
void q_scilexeravs_delete_later(void* self);
int32_t q_scilexeravs_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexeravs_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexeravs_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexeravs_destroyed1(void* self, void* param1);
void q_scilexeravs_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexeravs_lexer_id(void* self);
int32_t q_scilexeravs_qbase_lexer_id(void* self);
void q_scilexeravs_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexeravs_auto_completion_fillups(void* self);
const char* q_scilexeravs_qbase_auto_completion_fillups(void* self);
void q_scilexeravs_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexeravs_auto_completion_word_separators(void* self);
const char** q_scilexeravs_qbase_auto_completion_word_separators(void* self);
void q_scilexeravs_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexeravs_block_end(void* self, int* style);
const char* q_scilexeravs_qbase_block_end(void* self, int* style);
void q_scilexeravs_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexeravs_block_lookback(void* self);
int32_t q_scilexeravs_qbase_block_lookback(void* self);
void q_scilexeravs_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexeravs_block_start(void* self, int* style);
const char* q_scilexeravs_qbase_block_start(void* self, int* style);
void q_scilexeravs_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexeravs_block_start_keyword(void* self, int* style);
const char* q_scilexeravs_qbase_block_start_keyword(void* self, int* style);
void q_scilexeravs_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexeravs_case_sensitive(void* self);
bool q_scilexeravs_qbase_case_sensitive(void* self);
void q_scilexeravs_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexeravs_color(void* self, int style);
QColor* q_scilexeravs_qbase_color(void* self, int style);
void q_scilexeravs_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexeravs_eol_fill(void* self, int style);
bool q_scilexeravs_qbase_eol_fill(void* self, int style);
void q_scilexeravs_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexeravs_font(void* self, int style);
QFont* q_scilexeravs_qbase_font(void* self, int style);
void q_scilexeravs_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexeravs_indentation_guide_view(void* self);
int32_t q_scilexeravs_qbase_indentation_guide_view(void* self);
void q_scilexeravs_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexeravs_default_style(void* self);
int32_t q_scilexeravs_qbase_default_style(void* self);
void q_scilexeravs_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexeravs_paper(void* self, int style);
QColor* q_scilexeravs_qbase_paper(void* self, int style);
void q_scilexeravs_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexeravs_default_color_with_style(void* self, int style);
QColor* q_scilexeravs_qbase_default_color_with_style(void* self, int style);
void q_scilexeravs_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexeravs_default_eol_fill(void* self, int style);
bool q_scilexeravs_qbase_default_eol_fill(void* self, int style);
void q_scilexeravs_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexeravs_default_font_with_style(void* self, int style);
QFont* q_scilexeravs_qbase_default_font_with_style(void* self, int style);
void q_scilexeravs_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexeravs_default_paper_with_style(void* self, int style);
QColor* q_scilexeravs_qbase_default_paper_with_style(void* self, int style);
void q_scilexeravs_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexeravs_set_editor(void* self, void* editor);
void q_scilexeravs_qbase_set_editor(void* self, void* editor);
void q_scilexeravs_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexeravs_style_bits_needed(void* self);
int32_t q_scilexeravs_qbase_style_bits_needed(void* self);
void q_scilexeravs_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexeravs_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexeravs_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexeravs_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexeravs_set_color(void* self, void* c, int style);
void q_scilexeravs_qbase_set_color(void* self, void* c, int style);
void q_scilexeravs_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexeravs_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexeravs_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexeravs_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexeravs_set_font(void* self, void* f, int style);
void q_scilexeravs_qbase_set_font(void* self, void* f, int style);
void q_scilexeravs_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexeravs_set_paper(void* self, void* c, int style);
void q_scilexeravs_qbase_set_paper(void* self, void* c, int style);
void q_scilexeravs_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexeravs_event(void* self, void* event);
bool q_scilexeravs_qbase_event(void* self, void* event);
void q_scilexeravs_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexeravs_event_filter(void* self, void* watched, void* event);
bool q_scilexeravs_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexeravs_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexeravs_timer_event(void* self, void* event);
void q_scilexeravs_qbase_timer_event(void* self, void* event);
void q_scilexeravs_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexeravs_child_event(void* self, void* event);
void q_scilexeravs_qbase_child_event(void* self, void* event);
void q_scilexeravs_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexeravs_custom_event(void* self, void* event);
void q_scilexeravs_qbase_custom_event(void* self, void* event);
void q_scilexeravs_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexeravs_connect_notify(void* self, void* signal);
void q_scilexeravs_qbase_connect_notify(void* self, void* signal);
void q_scilexeravs_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexeravs_disconnect_notify(void* self, void* signal);
void q_scilexeravs_qbase_disconnect_notify(void* self, void* signal);
void q_scilexeravs_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexeravs_sender(void* self);
QObject* q_scilexeravs_qbase_sender(void* self);
void q_scilexeravs_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexeravs_sender_signal_index(void* self);
int32_t q_scilexeravs_qbase_sender_signal_index(void* self);
void q_scilexeravs_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexeravs_receivers(void* self, const char* signal);
int32_t q_scilexeravs_qbase_receivers(void* self, const char* signal);
void q_scilexeravs_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexeravs_is_signal_connected(void* self, void* signal);
bool q_scilexeravs_qbase_is_signal_connected(void* self, void* signal);
void q_scilexeravs_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexeravs_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexeravs.html#types

typedef enum {
    QSCILEXERAVS__DEFAULT = 0,
    QSCILEXERAVS__BLOCKCOMMENT = 1,
    QSCILEXERAVS__NESTEDBLOCKCOMMENT = 2,
    QSCILEXERAVS__LINECOMMENT = 3,
    QSCILEXERAVS__NUMBER = 4,
    QSCILEXERAVS__OPERATOR = 5,
    QSCILEXERAVS__IDENTIFIER = 6,
    QSCILEXERAVS__STRING = 7,
    QSCILEXERAVS__TRIPLESTRING = 8,
    QSCILEXERAVS__KEYWORD = 9,
    QSCILEXERAVS__FILTER = 10,
    QSCILEXERAVS__PLUGIN = 11,
    QSCILEXERAVS__FUNCTION = 12,
    QSCILEXERAVS__CLIPPROPERTY = 13,
    QSCILEXERAVS__KEYWORDSET6 = 14
} QsciLexerAVS__;

#endif
