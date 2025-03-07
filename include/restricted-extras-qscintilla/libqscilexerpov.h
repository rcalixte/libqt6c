#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPOV_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPOV_H

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

QsciLexerPOV* q_scilexerpov_new();
QsciLexerPOV* q_scilexerpov_new2(void* parent);
QMetaObject* q_scilexerpov_meta_object(void* self);
void* q_scilexerpov_metacast(void* self, const char* param1);
int32_t q_scilexerpov_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerpov_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerpov_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerpov_tr(const char* s);
const char* q_scilexerpov_language(void* self);
const char* q_scilexerpov_lexer(void* self);
int32_t q_scilexerpov_brace_style(void* self);
const char* q_scilexerpov_word_characters(void* self);
QColor* q_scilexerpov_default_color(void* self, int style);
bool q_scilexerpov_default_eol_fill(void* self, int style);
QFont* q_scilexerpov_default_font(void* self, int style);
QColor* q_scilexerpov_default_paper(void* self, int style);
const char* q_scilexerpov_keywords(void* self, int set);
const char* q_scilexerpov_description(void* self, int style);
void q_scilexerpov_refresh_properties(void* self);
bool q_scilexerpov_fold_comments(void* self);
bool q_scilexerpov_fold_compact(void* self);
bool q_scilexerpov_fold_directives(void* self);
void q_scilexerpov_set_fold_comments(void* self, bool fold);
void q_scilexerpov_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerpov_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerpov_set_fold_compact(void* self, bool fold);
void q_scilexerpov_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerpov_qbase_set_fold_compact(void* self, bool fold);
void q_scilexerpov_set_fold_directives(void* self, bool fold);
void q_scilexerpov_on_set_fold_directives(void* self, void (*slot)(void*, bool));
void q_scilexerpov_qbase_set_fold_directives(void* self, bool fold);
bool q_scilexerpov_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerpov_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpov_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerpov_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerpov_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpov_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerpov_tr2(const char* s, const char* c);
const char* q_scilexerpov_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerpov_apis(void* self);
int32_t q_scilexerpov_auto_indent_style(void* self);
QsciScintilla* q_scilexerpov_editor(void* self);
void q_scilexerpov_set_a_p_is(void* self, void* apis);
void q_scilexerpov_set_default_color(void* self, void* c);
void q_scilexerpov_set_default_font(void* self, void* f);
void q_scilexerpov_set_default_paper(void* self, void* c);
bool q_scilexerpov_read_settings(void* self, void* qs);
bool q_scilexerpov_write_settings(void* self, void* qs);
void q_scilexerpov_color_changed(void* self, void* c, int style);
void q_scilexerpov_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpov_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerpov_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerpov_font_changed(void* self, void* f, int style);
void q_scilexerpov_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpov_paper_changed(void* self, void* c, int style);
void q_scilexerpov_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpov_property_changed(void* self, const char* prop, const char* val);
void q_scilexerpov_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerpov_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerpov_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerpov_object_name(void* self);
void q_scilexerpov_set_object_name(void* self, const char* name);
bool q_scilexerpov_is_widget_type(void* self);
bool q_scilexerpov_is_window_type(void* self);
bool q_scilexerpov_is_quick_item_type(void* self);
bool q_scilexerpov_signals_blocked(void* self);
bool q_scilexerpov_block_signals(void* self, bool b);
QThread* q_scilexerpov_thread(void* self);
void q_scilexerpov_move_to_thread(void* self, void* thread);
int32_t q_scilexerpov_start_timer(void* self, int interval);
void q_scilexerpov_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerpov_children(void* self);
void q_scilexerpov_set_parent(void* self, void* parent);
void q_scilexerpov_install_event_filter(void* self, void* filterObj);
void q_scilexerpov_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerpov_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerpov_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerpov_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerpov_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerpov_dump_object_tree(void* self);
void q_scilexerpov_dump_object_info(void* self);
bool q_scilexerpov_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerpov_property(void* self, const char* name);
const char** q_scilexerpov_dynamic_property_names(void* self);
QBindingStorage* q_scilexerpov_binding_storage(void* self);
QBindingStorage* q_scilexerpov_binding_storage2(void* self);
void q_scilexerpov_destroyed(void* self);
void q_scilexerpov_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerpov_parent(void* self);
bool q_scilexerpov_inherits(void* self, const char* classname);
void q_scilexerpov_delete_later(void* self);
int32_t q_scilexerpov_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerpov_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerpov_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerpov_destroyed1(void* self, void* param1);
void q_scilexerpov_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpov_lexer_id(void* self);
int32_t q_scilexerpov_qbase_lexer_id(void* self);
void q_scilexerpov_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerpov_auto_completion_fillups(void* self);
const char* q_scilexerpov_qbase_auto_completion_fillups(void* self);
void q_scilexerpov_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerpov_auto_completion_word_separators(void* self);
const char** q_scilexerpov_qbase_auto_completion_word_separators(void* self);
void q_scilexerpov_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerpov_block_end(void* self, int* style);
const char* q_scilexerpov_qbase_block_end(void* self, int* style);
void q_scilexerpov_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerpov_block_lookback(void* self);
int32_t q_scilexerpov_qbase_block_lookback(void* self);
void q_scilexerpov_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerpov_block_start(void* self, int* style);
const char* q_scilexerpov_qbase_block_start(void* self, int* style);
void q_scilexerpov_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerpov_block_start_keyword(void* self, int* style);
const char* q_scilexerpov_qbase_block_start_keyword(void* self, int* style);
void q_scilexerpov_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerpov_case_sensitive(void* self);
bool q_scilexerpov_qbase_case_sensitive(void* self);
void q_scilexerpov_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerpov_color(void* self, int style);
QColor* q_scilexerpov_qbase_color(void* self, int style);
void q_scilexerpov_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerpov_eol_fill(void* self, int style);
bool q_scilexerpov_qbase_eol_fill(void* self, int style);
void q_scilexerpov_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerpov_font(void* self, int style);
QFont* q_scilexerpov_qbase_font(void* self, int style);
void q_scilexerpov_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerpov_indentation_guide_view(void* self);
int32_t q_scilexerpov_qbase_indentation_guide_view(void* self);
void q_scilexerpov_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerpov_default_style(void* self);
int32_t q_scilexerpov_qbase_default_style(void* self);
void q_scilexerpov_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerpov_paper(void* self, int style);
QColor* q_scilexerpov_qbase_paper(void* self, int style);
void q_scilexerpov_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerpov_default_color_with_style(void* self, int style);
QColor* q_scilexerpov_qbase_default_color_with_style(void* self, int style);
void q_scilexerpov_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerpov_default_font_with_style(void* self, int style);
QFont* q_scilexerpov_qbase_default_font_with_style(void* self, int style);
void q_scilexerpov_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerpov_default_paper_with_style(void* self, int style);
QColor* q_scilexerpov_qbase_default_paper_with_style(void* self, int style);
void q_scilexerpov_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerpov_set_editor(void* self, void* editor);
void q_scilexerpov_qbase_set_editor(void* self, void* editor);
void q_scilexerpov_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpov_style_bits_needed(void* self);
int32_t q_scilexerpov_qbase_style_bits_needed(void* self);
void q_scilexerpov_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerpov_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpov_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpov_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerpov_set_color(void* self, void* c, int style);
void q_scilexerpov_qbase_set_color(void* self, void* c, int style);
void q_scilexerpov_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerpov_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpov_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpov_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerpov_set_font(void* self, void* f, int style);
void q_scilexerpov_qbase_set_font(void* self, void* f, int style);
void q_scilexerpov_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerpov_set_paper(void* self, void* c, int style);
void q_scilexerpov_qbase_set_paper(void* self, void* c, int style);
void q_scilexerpov_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerpov_event(void* self, void* event);
bool q_scilexerpov_qbase_event(void* self, void* event);
void q_scilexerpov_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerpov_event_filter(void* self, void* watched, void* event);
bool q_scilexerpov_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerpov_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerpov_timer_event(void* self, void* event);
void q_scilexerpov_qbase_timer_event(void* self, void* event);
void q_scilexerpov_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerpov_child_event(void* self, void* event);
void q_scilexerpov_qbase_child_event(void* self, void* event);
void q_scilexerpov_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerpov_custom_event(void* self, void* event);
void q_scilexerpov_qbase_custom_event(void* self, void* event);
void q_scilexerpov_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerpov_connect_notify(void* self, void* signal);
void q_scilexerpov_qbase_connect_notify(void* self, void* signal);
void q_scilexerpov_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerpov_disconnect_notify(void* self, void* signal);
void q_scilexerpov_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerpov_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerpov_sender(void* self);
QObject* q_scilexerpov_qbase_sender(void* self);
void q_scilexerpov_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerpov_sender_signal_index(void* self);
int32_t q_scilexerpov_qbase_sender_signal_index(void* self);
void q_scilexerpov_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerpov_receivers(void* self, const char* signal);
int32_t q_scilexerpov_qbase_receivers(void* self, const char* signal);
void q_scilexerpov_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerpov_is_signal_connected(void* self, void* signal);
bool q_scilexerpov_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerpov_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerpov_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpov.html#types

typedef enum {
    QSCILEXERPOV__DEFAULT = 0,
    QSCILEXERPOV__COMMENT = 1,
    QSCILEXERPOV__COMMENTLINE = 2,
    QSCILEXERPOV__NUMBER = 3,
    QSCILEXERPOV__OPERATOR = 4,
    QSCILEXERPOV__IDENTIFIER = 5,
    QSCILEXERPOV__STRING = 6,
    QSCILEXERPOV__UNCLOSEDSTRING = 7,
    QSCILEXERPOV__DIRECTIVE = 8,
    QSCILEXERPOV__BADDIRECTIVE = 9,
    QSCILEXERPOV__OBJECTSCSGAPPEARANCE = 10,
    QSCILEXERPOV__TYPESMODIFIERSITEMS = 11,
    QSCILEXERPOV__PREDEFINEDIDENTIFIERS = 12,
    QSCILEXERPOV__PREDEFINEDFUNCTIONS = 13,
    QSCILEXERPOV__KEYWORDSET6 = 14,
    QSCILEXERPOV__KEYWORDSET7 = 15,
    QSCILEXERPOV__KEYWORDSET8 = 16
} QsciLexerPOV__;

#endif
