#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVERILOG_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVERILOG_H

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

QsciLexerVerilog* q_scilexerverilog_new();
QsciLexerVerilog* q_scilexerverilog_new2(void* parent);
QMetaObject* q_scilexerverilog_meta_object(void* self);
void* q_scilexerverilog_metacast(void* self, const char* param1);
int32_t q_scilexerverilog_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerverilog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerverilog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerverilog_tr(const char* s);
const char* q_scilexerverilog_language(void* self);
const char* q_scilexerverilog_lexer(void* self);
int32_t q_scilexerverilog_brace_style(void* self);
const char* q_scilexerverilog_word_characters(void* self);
QColor* q_scilexerverilog_default_color(void* self, int style);
bool q_scilexerverilog_default_eol_fill(void* self, int style);
QFont* q_scilexerverilog_default_font(void* self, int style);
QColor* q_scilexerverilog_default_paper(void* self, int style);
const char* q_scilexerverilog_keywords(void* self, int set);
const char* q_scilexerverilog_description(void* self, int style);
void q_scilexerverilog_refresh_properties(void* self);
void q_scilexerverilog_set_fold_at_else(void* self, bool fold);
bool q_scilexerverilog_fold_at_else(void* self);
void q_scilexerverilog_set_fold_comments(void* self, bool fold);
bool q_scilexerverilog_fold_comments(void* self);
void q_scilexerverilog_set_fold_compact(void* self, bool fold);
bool q_scilexerverilog_fold_compact(void* self);
void q_scilexerverilog_set_fold_preprocessor(void* self, bool fold);
bool q_scilexerverilog_fold_preprocessor(void* self);
void q_scilexerverilog_set_fold_at_module(void* self, bool fold);
bool q_scilexerverilog_fold_at_module(void* self);
bool q_scilexerverilog_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerverilog_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerverilog_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerverilog_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerverilog_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerverilog_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerverilog_tr2(const char* s, const char* c);
const char* q_scilexerverilog_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerverilog_apis(void* self);
int32_t q_scilexerverilog_auto_indent_style(void* self);
QsciScintilla* q_scilexerverilog_editor(void* self);
void q_scilexerverilog_set_a_p_is(void* self, void* apis);
void q_scilexerverilog_set_default_color(void* self, void* c);
void q_scilexerverilog_set_default_font(void* self, void* f);
void q_scilexerverilog_set_default_paper(void* self, void* c);
bool q_scilexerverilog_read_settings(void* self, void* qs);
bool q_scilexerverilog_write_settings(void* self, void* qs);
void q_scilexerverilog_color_changed(void* self, void* c, int style);
void q_scilexerverilog_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerverilog_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerverilog_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerverilog_font_changed(void* self, void* f, int style);
void q_scilexerverilog_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerverilog_paper_changed(void* self, void* c, int style);
void q_scilexerverilog_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerverilog_property_changed(void* self, const char* prop, const char* val);
void q_scilexerverilog_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerverilog_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerverilog_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerverilog_object_name(void* self);
void q_scilexerverilog_set_object_name(void* self, const char* name);
bool q_scilexerverilog_is_widget_type(void* self);
bool q_scilexerverilog_is_window_type(void* self);
bool q_scilexerverilog_is_quick_item_type(void* self);
bool q_scilexerverilog_signals_blocked(void* self);
bool q_scilexerverilog_block_signals(void* self, bool b);
QThread* q_scilexerverilog_thread(void* self);
void q_scilexerverilog_move_to_thread(void* self, void* thread);
int32_t q_scilexerverilog_start_timer(void* self, int interval);
void q_scilexerverilog_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerverilog_children(void* self);
void q_scilexerverilog_set_parent(void* self, void* parent);
void q_scilexerverilog_install_event_filter(void* self, void* filterObj);
void q_scilexerverilog_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerverilog_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerverilog_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerverilog_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerverilog_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerverilog_dump_object_tree(void* self);
void q_scilexerverilog_dump_object_info(void* self);
bool q_scilexerverilog_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerverilog_property(void* self, const char* name);
const char** q_scilexerverilog_dynamic_property_names(void* self);
QBindingStorage* q_scilexerverilog_binding_storage(void* self);
QBindingStorage* q_scilexerverilog_binding_storage2(void* self);
void q_scilexerverilog_destroyed(void* self);
void q_scilexerverilog_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerverilog_parent(void* self);
bool q_scilexerverilog_inherits(void* self, const char* classname);
void q_scilexerverilog_delete_later(void* self);
int32_t q_scilexerverilog_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerverilog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerverilog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerverilog_destroyed1(void* self, void* param1);
void q_scilexerverilog_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerverilog_lexer_id(void* self);
int32_t q_scilexerverilog_qbase_lexer_id(void* self);
void q_scilexerverilog_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerverilog_auto_completion_fillups(void* self);
const char* q_scilexerverilog_qbase_auto_completion_fillups(void* self);
void q_scilexerverilog_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerverilog_auto_completion_word_separators(void* self);
const char** q_scilexerverilog_qbase_auto_completion_word_separators(void* self);
void q_scilexerverilog_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerverilog_block_end(void* self, int* style);
const char* q_scilexerverilog_qbase_block_end(void* self, int* style);
void q_scilexerverilog_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerverilog_block_lookback(void* self);
int32_t q_scilexerverilog_qbase_block_lookback(void* self);
void q_scilexerverilog_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerverilog_block_start(void* self, int* style);
const char* q_scilexerverilog_qbase_block_start(void* self, int* style);
void q_scilexerverilog_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerverilog_block_start_keyword(void* self, int* style);
const char* q_scilexerverilog_qbase_block_start_keyword(void* self, int* style);
void q_scilexerverilog_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerverilog_case_sensitive(void* self);
bool q_scilexerverilog_qbase_case_sensitive(void* self);
void q_scilexerverilog_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerverilog_color(void* self, int style);
QColor* q_scilexerverilog_qbase_color(void* self, int style);
void q_scilexerverilog_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerverilog_eol_fill(void* self, int style);
bool q_scilexerverilog_qbase_eol_fill(void* self, int style);
void q_scilexerverilog_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerverilog_font(void* self, int style);
QFont* q_scilexerverilog_qbase_font(void* self, int style);
void q_scilexerverilog_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerverilog_indentation_guide_view(void* self);
int32_t q_scilexerverilog_qbase_indentation_guide_view(void* self);
void q_scilexerverilog_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerverilog_default_style(void* self);
int32_t q_scilexerverilog_qbase_default_style(void* self);
void q_scilexerverilog_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerverilog_paper(void* self, int style);
QColor* q_scilexerverilog_qbase_paper(void* self, int style);
void q_scilexerverilog_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerverilog_default_color_with_style(void* self, int style);
QColor* q_scilexerverilog_qbase_default_color_with_style(void* self, int style);
void q_scilexerverilog_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerverilog_default_font_with_style(void* self, int style);
QFont* q_scilexerverilog_qbase_default_font_with_style(void* self, int style);
void q_scilexerverilog_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerverilog_default_paper_with_style(void* self, int style);
QColor* q_scilexerverilog_qbase_default_paper_with_style(void* self, int style);
void q_scilexerverilog_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerverilog_set_editor(void* self, void* editor);
void q_scilexerverilog_qbase_set_editor(void* self, void* editor);
void q_scilexerverilog_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerverilog_style_bits_needed(void* self);
int32_t q_scilexerverilog_qbase_style_bits_needed(void* self);
void q_scilexerverilog_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerverilog_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerverilog_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerverilog_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerverilog_set_color(void* self, void* c, int style);
void q_scilexerverilog_qbase_set_color(void* self, void* c, int style);
void q_scilexerverilog_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerverilog_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerverilog_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerverilog_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerverilog_set_font(void* self, void* f, int style);
void q_scilexerverilog_qbase_set_font(void* self, void* f, int style);
void q_scilexerverilog_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerverilog_set_paper(void* self, void* c, int style);
void q_scilexerverilog_qbase_set_paper(void* self, void* c, int style);
void q_scilexerverilog_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerverilog_event(void* self, void* event);
bool q_scilexerverilog_qbase_event(void* self, void* event);
void q_scilexerverilog_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerverilog_event_filter(void* self, void* watched, void* event);
bool q_scilexerverilog_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerverilog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerverilog_timer_event(void* self, void* event);
void q_scilexerverilog_qbase_timer_event(void* self, void* event);
void q_scilexerverilog_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerverilog_child_event(void* self, void* event);
void q_scilexerverilog_qbase_child_event(void* self, void* event);
void q_scilexerverilog_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerverilog_custom_event(void* self, void* event);
void q_scilexerverilog_qbase_custom_event(void* self, void* event);
void q_scilexerverilog_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerverilog_connect_notify(void* self, void* signal);
void q_scilexerverilog_qbase_connect_notify(void* self, void* signal);
void q_scilexerverilog_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerverilog_disconnect_notify(void* self, void* signal);
void q_scilexerverilog_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerverilog_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerverilog_sender(void* self);
QObject* q_scilexerverilog_qbase_sender(void* self);
void q_scilexerverilog_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerverilog_sender_signal_index(void* self);
int32_t q_scilexerverilog_qbase_sender_signal_index(void* self);
void q_scilexerverilog_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerverilog_receivers(void* self, const char* signal);
int32_t q_scilexerverilog_qbase_receivers(void* self, const char* signal);
void q_scilexerverilog_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerverilog_is_signal_connected(void* self, void* signal);
bool q_scilexerverilog_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerverilog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerverilog_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerverilog.html#types

typedef enum {
    QSCILEXERVERILOG__DEFAULT = 0,
    QSCILEXERVERILOG__INACTIVEDEFAULT = 64,
    QSCILEXERVERILOG__COMMENT = 1,
    QSCILEXERVERILOG__INACTIVECOMMENT = 65,
    QSCILEXERVERILOG__COMMENTLINE = 2,
    QSCILEXERVERILOG__INACTIVECOMMENTLINE = 66,
    QSCILEXERVERILOG__COMMENTBANG = 3,
    QSCILEXERVERILOG__INACTIVECOMMENTBANG = 67,
    QSCILEXERVERILOG__NUMBER = 4,
    QSCILEXERVERILOG__INACTIVENUMBER = 68,
    QSCILEXERVERILOG__KEYWORD = 5,
    QSCILEXERVERILOG__INACTIVEKEYWORD = 69,
    QSCILEXERVERILOG__STRING = 6,
    QSCILEXERVERILOG__INACTIVESTRING = 70,
    QSCILEXERVERILOG__KEYWORDSET2 = 7,
    QSCILEXERVERILOG__INACTIVEKEYWORDSET2 = 71,
    QSCILEXERVERILOG__SYSTEMTASK = 8,
    QSCILEXERVERILOG__INACTIVESYSTEMTASK = 72,
    QSCILEXERVERILOG__PREPROCESSOR = 9,
    QSCILEXERVERILOG__INACTIVEPREPROCESSOR = 73,
    QSCILEXERVERILOG__OPERATOR = 10,
    QSCILEXERVERILOG__INACTIVEOPERATOR = 74,
    QSCILEXERVERILOG__IDENTIFIER = 11,
    QSCILEXERVERILOG__INACTIVEIDENTIFIER = 75,
    QSCILEXERVERILOG__UNCLOSEDSTRING = 12,
    QSCILEXERVERILOG__INACTIVEUNCLOSEDSTRING = 76,
    QSCILEXERVERILOG__USERKEYWORDSET = 19,
    QSCILEXERVERILOG__INACTIVEUSERKEYWORDSET = 83,
    QSCILEXERVERILOG__COMMENTKEYWORD = 20,
    QSCILEXERVERILOG__INACTIVECOMMENTKEYWORD = 84,
    QSCILEXERVERILOG__DECLAREINPUTPORT = 21,
    QSCILEXERVERILOG__INACTIVEDECLAREINPUTPORT = 85,
    QSCILEXERVERILOG__DECLAREOUTPUTPORT = 22,
    QSCILEXERVERILOG__INACTIVEDECLAREOUTPUTPORT = 86,
    QSCILEXERVERILOG__DECLAREINPUTOUTPUTPORT = 23,
    QSCILEXERVERILOG__INACTIVEDECLAREINPUTOUTPUTPORT = 87,
    QSCILEXERVERILOG__PORTCONNECTION = 24,
    QSCILEXERVERILOG__INACTIVEPORTCONNECTION = 88
} QsciLexerVerilog__;

#endif
