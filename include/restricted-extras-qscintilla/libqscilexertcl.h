#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERTCL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERTCL_H

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

QsciLexerTCL* q_scilexertcl_new();
QsciLexerTCL* q_scilexertcl_new2(void* parent);
QMetaObject* q_scilexertcl_meta_object(void* self);
void* q_scilexertcl_metacast(void* self, const char* param1);
int32_t q_scilexertcl_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexertcl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexertcl_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexertcl_tr(const char* s);
const char* q_scilexertcl_language(void* self);
const char* q_scilexertcl_lexer(void* self);
int32_t q_scilexertcl_brace_style(void* self);
QColor* q_scilexertcl_default_color(void* self, int style);
bool q_scilexertcl_default_eol_fill(void* self, int style);
QFont* q_scilexertcl_default_font(void* self, int style);
QColor* q_scilexertcl_default_paper(void* self, int style);
const char* q_scilexertcl_keywords(void* self, int set);
const char* q_scilexertcl_description(void* self, int style);
void q_scilexertcl_refresh_properties(void* self);
void q_scilexertcl_set_fold_comments(void* self, bool fold);
bool q_scilexertcl_fold_comments(void* self);
bool q_scilexertcl_read_properties(void* self, void* qs, const char* prefix);
void q_scilexertcl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexertcl_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexertcl_write_properties(void* self, void* qs, const char* prefix);
void q_scilexertcl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexertcl_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexertcl_tr2(const char* s, const char* c);
const char* q_scilexertcl_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexertcl_apis(void* self);
int32_t q_scilexertcl_auto_indent_style(void* self);
QsciScintilla* q_scilexertcl_editor(void* self);
void q_scilexertcl_set_a_p_is(void* self, void* apis);
void q_scilexertcl_set_default_color(void* self, void* c);
void q_scilexertcl_set_default_font(void* self, void* f);
void q_scilexertcl_set_default_paper(void* self, void* c);
bool q_scilexertcl_read_settings(void* self, void* qs);
bool q_scilexertcl_write_settings(void* self, void* qs);
void q_scilexertcl_color_changed(void* self, void* c, int style);
void q_scilexertcl_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexertcl_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexertcl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexertcl_font_changed(void* self, void* f, int style);
void q_scilexertcl_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexertcl_paper_changed(void* self, void* c, int style);
void q_scilexertcl_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexertcl_property_changed(void* self, const char* prop, const char* val);
void q_scilexertcl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexertcl_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexertcl_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexertcl_object_name(void* self);
void q_scilexertcl_set_object_name(void* self, const char* name);
bool q_scilexertcl_is_widget_type(void* self);
bool q_scilexertcl_is_window_type(void* self);
bool q_scilexertcl_is_quick_item_type(void* self);
bool q_scilexertcl_signals_blocked(void* self);
bool q_scilexertcl_block_signals(void* self, bool b);
QThread* q_scilexertcl_thread(void* self);
void q_scilexertcl_move_to_thread(void* self, void* thread);
int32_t q_scilexertcl_start_timer(void* self, int interval);
void q_scilexertcl_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexertcl_children(void* self);
void q_scilexertcl_set_parent(void* self, void* parent);
void q_scilexertcl_install_event_filter(void* self, void* filterObj);
void q_scilexertcl_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexertcl_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexertcl_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexertcl_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexertcl_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexertcl_dump_object_tree(void* self);
void q_scilexertcl_dump_object_info(void* self);
bool q_scilexertcl_set_property(void* self, const char* name, void* value);
QVariant* q_scilexertcl_property(void* self, const char* name);
const char** q_scilexertcl_dynamic_property_names(void* self);
QBindingStorage* q_scilexertcl_binding_storage(void* self);
QBindingStorage* q_scilexertcl_binding_storage2(void* self);
void q_scilexertcl_destroyed(void* self);
void q_scilexertcl_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexertcl_parent(void* self);
bool q_scilexertcl_inherits(void* self, const char* classname);
void q_scilexertcl_delete_later(void* self);
int32_t q_scilexertcl_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexertcl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexertcl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexertcl_destroyed1(void* self, void* param1);
void q_scilexertcl_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexertcl_lexer_id(void* self);
int32_t q_scilexertcl_qbase_lexer_id(void* self);
void q_scilexertcl_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexertcl_auto_completion_fillups(void* self);
const char* q_scilexertcl_qbase_auto_completion_fillups(void* self);
void q_scilexertcl_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexertcl_auto_completion_word_separators(void* self);
const char** q_scilexertcl_qbase_auto_completion_word_separators(void* self);
void q_scilexertcl_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexertcl_block_end(void* self, int* style);
const char* q_scilexertcl_qbase_block_end(void* self, int* style);
void q_scilexertcl_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexertcl_block_lookback(void* self);
int32_t q_scilexertcl_qbase_block_lookback(void* self);
void q_scilexertcl_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexertcl_block_start(void* self, int* style);
const char* q_scilexertcl_qbase_block_start(void* self, int* style);
void q_scilexertcl_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexertcl_block_start_keyword(void* self, int* style);
const char* q_scilexertcl_qbase_block_start_keyword(void* self, int* style);
void q_scilexertcl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexertcl_case_sensitive(void* self);
bool q_scilexertcl_qbase_case_sensitive(void* self);
void q_scilexertcl_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexertcl_color(void* self, int style);
QColor* q_scilexertcl_qbase_color(void* self, int style);
void q_scilexertcl_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexertcl_eol_fill(void* self, int style);
bool q_scilexertcl_qbase_eol_fill(void* self, int style);
void q_scilexertcl_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexertcl_font(void* self, int style);
QFont* q_scilexertcl_qbase_font(void* self, int style);
void q_scilexertcl_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexertcl_indentation_guide_view(void* self);
int32_t q_scilexertcl_qbase_indentation_guide_view(void* self);
void q_scilexertcl_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexertcl_default_style(void* self);
int32_t q_scilexertcl_qbase_default_style(void* self);
void q_scilexertcl_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexertcl_paper(void* self, int style);
QColor* q_scilexertcl_qbase_paper(void* self, int style);
void q_scilexertcl_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexertcl_default_color_with_style(void* self, int style);
QColor* q_scilexertcl_qbase_default_color_with_style(void* self, int style);
void q_scilexertcl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexertcl_default_font_with_style(void* self, int style);
QFont* q_scilexertcl_qbase_default_font_with_style(void* self, int style);
void q_scilexertcl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexertcl_default_paper_with_style(void* self, int style);
QColor* q_scilexertcl_qbase_default_paper_with_style(void* self, int style);
void q_scilexertcl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexertcl_set_editor(void* self, void* editor);
void q_scilexertcl_qbase_set_editor(void* self, void* editor);
void q_scilexertcl_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexertcl_style_bits_needed(void* self);
int32_t q_scilexertcl_qbase_style_bits_needed(void* self);
void q_scilexertcl_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexertcl_word_characters(void* self);
const char* q_scilexertcl_qbase_word_characters(void* self);
void q_scilexertcl_on_word_characters(void* self, const char* (*slot)());
void q_scilexertcl_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexertcl_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexertcl_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexertcl_set_color(void* self, void* c, int style);
void q_scilexertcl_qbase_set_color(void* self, void* c, int style);
void q_scilexertcl_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexertcl_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexertcl_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexertcl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexertcl_set_font(void* self, void* f, int style);
void q_scilexertcl_qbase_set_font(void* self, void* f, int style);
void q_scilexertcl_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexertcl_set_paper(void* self, void* c, int style);
void q_scilexertcl_qbase_set_paper(void* self, void* c, int style);
void q_scilexertcl_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexertcl_event(void* self, void* event);
bool q_scilexertcl_qbase_event(void* self, void* event);
void q_scilexertcl_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexertcl_event_filter(void* self, void* watched, void* event);
bool q_scilexertcl_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexertcl_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexertcl_timer_event(void* self, void* event);
void q_scilexertcl_qbase_timer_event(void* self, void* event);
void q_scilexertcl_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexertcl_child_event(void* self, void* event);
void q_scilexertcl_qbase_child_event(void* self, void* event);
void q_scilexertcl_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexertcl_custom_event(void* self, void* event);
void q_scilexertcl_qbase_custom_event(void* self, void* event);
void q_scilexertcl_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexertcl_connect_notify(void* self, void* signal);
void q_scilexertcl_qbase_connect_notify(void* self, void* signal);
void q_scilexertcl_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexertcl_disconnect_notify(void* self, void* signal);
void q_scilexertcl_qbase_disconnect_notify(void* self, void* signal);
void q_scilexertcl_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexertcl_sender(void* self);
QObject* q_scilexertcl_qbase_sender(void* self);
void q_scilexertcl_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexertcl_sender_signal_index(void* self);
int32_t q_scilexertcl_qbase_sender_signal_index(void* self);
void q_scilexertcl_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexertcl_receivers(void* self, const char* signal);
int32_t q_scilexertcl_qbase_receivers(void* self, const char* signal);
void q_scilexertcl_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexertcl_is_signal_connected(void* self, void* signal);
bool q_scilexertcl_qbase_is_signal_connected(void* self, void* signal);
void q_scilexertcl_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexertcl_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexertcl.html#types

typedef enum {
    QSCILEXERTCL__DEFAULT = 0,
    QSCILEXERTCL__COMMENT = 1,
    QSCILEXERTCL__COMMENTLINE = 2,
    QSCILEXERTCL__NUMBER = 3,
    QSCILEXERTCL__QUOTEDKEYWORD = 4,
    QSCILEXERTCL__QUOTEDSTRING = 5,
    QSCILEXERTCL__OPERATOR = 6,
    QSCILEXERTCL__IDENTIFIER = 7,
    QSCILEXERTCL__SUBSTITUTION = 8,
    QSCILEXERTCL__SUBSTITUTIONBRACE = 9,
    QSCILEXERTCL__MODIFIER = 10,
    QSCILEXERTCL__EXPANDKEYWORD = 11,
    QSCILEXERTCL__TCLKEYWORD = 12,
    QSCILEXERTCL__TKKEYWORD = 13,
    QSCILEXERTCL__ITCLKEYWORD = 14,
    QSCILEXERTCL__TKCOMMAND = 15,
    QSCILEXERTCL__KEYWORDSET6 = 16,
    QSCILEXERTCL__KEYWORDSET7 = 17,
    QSCILEXERTCL__KEYWORDSET8 = 18,
    QSCILEXERTCL__KEYWORDSET9 = 19,
    QSCILEXERTCL__COMMENTBOX = 20,
    QSCILEXERTCL__COMMENTBLOCK = 21
} QsciLexerTCL__;

#endif
