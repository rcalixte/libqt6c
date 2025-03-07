#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMATLAB_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMATLAB_H

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

QsciLexerMatlab* q_scilexermatlab_new();
QsciLexerMatlab* q_scilexermatlab_new2(void* parent);
QMetaObject* q_scilexermatlab_meta_object(void* self);
void* q_scilexermatlab_metacast(void* self, const char* param1);
int32_t q_scilexermatlab_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexermatlab_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexermatlab_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexermatlab_tr(const char* s);
const char* q_scilexermatlab_language(void* self);
const char* q_scilexermatlab_lexer(void* self);
QColor* q_scilexermatlab_default_color(void* self, int style);
QFont* q_scilexermatlab_default_font(void* self, int style);
const char* q_scilexermatlab_keywords(void* self, int set);
const char* q_scilexermatlab_description(void* self, int style);
const char* q_scilexermatlab_tr2(const char* s, const char* c);
const char* q_scilexermatlab_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexermatlab_apis(void* self);
int32_t q_scilexermatlab_auto_indent_style(void* self);
QColor* q_scilexermatlab_default_paper(void* self);
QsciScintilla* q_scilexermatlab_editor(void* self);
void q_scilexermatlab_set_a_p_is(void* self, void* apis);
void q_scilexermatlab_set_default_color(void* self, void* c);
void q_scilexermatlab_set_default_font(void* self, void* f);
void q_scilexermatlab_set_default_paper(void* self, void* c);
bool q_scilexermatlab_read_settings(void* self, void* qs);
bool q_scilexermatlab_write_settings(void* self, void* qs);
void q_scilexermatlab_color_changed(void* self, void* c, int style);
void q_scilexermatlab_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermatlab_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexermatlab_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexermatlab_font_changed(void* self, void* f, int style);
void q_scilexermatlab_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermatlab_paper_changed(void* self, void* c, int style);
void q_scilexermatlab_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermatlab_property_changed(void* self, const char* prop, const char* val);
void q_scilexermatlab_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexermatlab_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexermatlab_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexermatlab_object_name(void* self);
void q_scilexermatlab_set_object_name(void* self, const char* name);
bool q_scilexermatlab_is_widget_type(void* self);
bool q_scilexermatlab_is_window_type(void* self);
bool q_scilexermatlab_is_quick_item_type(void* self);
bool q_scilexermatlab_signals_blocked(void* self);
bool q_scilexermatlab_block_signals(void* self, bool b);
QThread* q_scilexermatlab_thread(void* self);
void q_scilexermatlab_move_to_thread(void* self, void* thread);
int32_t q_scilexermatlab_start_timer(void* self, int interval);
void q_scilexermatlab_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexermatlab_children(void* self);
void q_scilexermatlab_set_parent(void* self, void* parent);
void q_scilexermatlab_install_event_filter(void* self, void* filterObj);
void q_scilexermatlab_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexermatlab_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexermatlab_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexermatlab_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexermatlab_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexermatlab_dump_object_tree(void* self);
void q_scilexermatlab_dump_object_info(void* self);
bool q_scilexermatlab_set_property(void* self, const char* name, void* value);
QVariant* q_scilexermatlab_property(void* self, const char* name);
const char** q_scilexermatlab_dynamic_property_names(void* self);
QBindingStorage* q_scilexermatlab_binding_storage(void* self);
QBindingStorage* q_scilexermatlab_binding_storage2(void* self);
void q_scilexermatlab_destroyed(void* self);
void q_scilexermatlab_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexermatlab_parent(void* self);
bool q_scilexermatlab_inherits(void* self, const char* classname);
void q_scilexermatlab_delete_later(void* self);
int32_t q_scilexermatlab_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexermatlab_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexermatlab_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexermatlab_destroyed1(void* self, void* param1);
void q_scilexermatlab_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexermatlab_lexer_id(void* self);
int32_t q_scilexermatlab_qbase_lexer_id(void* self);
void q_scilexermatlab_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexermatlab_auto_completion_fillups(void* self);
const char* q_scilexermatlab_qbase_auto_completion_fillups(void* self);
void q_scilexermatlab_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexermatlab_auto_completion_word_separators(void* self);
const char** q_scilexermatlab_qbase_auto_completion_word_separators(void* self);
void q_scilexermatlab_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexermatlab_block_end(void* self, int* style);
const char* q_scilexermatlab_qbase_block_end(void* self, int* style);
void q_scilexermatlab_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexermatlab_block_lookback(void* self);
int32_t q_scilexermatlab_qbase_block_lookback(void* self);
void q_scilexermatlab_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexermatlab_block_start(void* self, int* style);
const char* q_scilexermatlab_qbase_block_start(void* self, int* style);
void q_scilexermatlab_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexermatlab_block_start_keyword(void* self, int* style);
const char* q_scilexermatlab_qbase_block_start_keyword(void* self, int* style);
void q_scilexermatlab_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexermatlab_brace_style(void* self);
int32_t q_scilexermatlab_qbase_brace_style(void* self);
void q_scilexermatlab_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexermatlab_case_sensitive(void* self);
bool q_scilexermatlab_qbase_case_sensitive(void* self);
void q_scilexermatlab_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexermatlab_color(void* self, int style);
QColor* q_scilexermatlab_qbase_color(void* self, int style);
void q_scilexermatlab_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexermatlab_eol_fill(void* self, int style);
bool q_scilexermatlab_qbase_eol_fill(void* self, int style);
void q_scilexermatlab_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexermatlab_font(void* self, int style);
QFont* q_scilexermatlab_qbase_font(void* self, int style);
void q_scilexermatlab_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexermatlab_indentation_guide_view(void* self);
int32_t q_scilexermatlab_qbase_indentation_guide_view(void* self);
void q_scilexermatlab_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexermatlab_default_style(void* self);
int32_t q_scilexermatlab_qbase_default_style(void* self);
void q_scilexermatlab_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexermatlab_paper(void* self, int style);
QColor* q_scilexermatlab_qbase_paper(void* self, int style);
void q_scilexermatlab_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexermatlab_default_color_with_style(void* self, int style);
QColor* q_scilexermatlab_qbase_default_color_with_style(void* self, int style);
void q_scilexermatlab_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexermatlab_default_eol_fill(void* self, int style);
bool q_scilexermatlab_qbase_default_eol_fill(void* self, int style);
void q_scilexermatlab_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexermatlab_default_font_with_style(void* self, int style);
QFont* q_scilexermatlab_qbase_default_font_with_style(void* self, int style);
void q_scilexermatlab_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexermatlab_default_paper_with_style(void* self, int style);
QColor* q_scilexermatlab_qbase_default_paper_with_style(void* self, int style);
void q_scilexermatlab_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexermatlab_set_editor(void* self, void* editor);
void q_scilexermatlab_qbase_set_editor(void* self, void* editor);
void q_scilexermatlab_on_set_editor(void* self, void (*slot)(void*, void*));
void q_scilexermatlab_refresh_properties(void* self);
void q_scilexermatlab_qbase_refresh_properties(void* self);
void q_scilexermatlab_on_refresh_properties(void* self, void (*slot)());
int32_t q_scilexermatlab_style_bits_needed(void* self);
int32_t q_scilexermatlab_qbase_style_bits_needed(void* self);
void q_scilexermatlab_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexermatlab_word_characters(void* self);
const char* q_scilexermatlab_qbase_word_characters(void* self);
void q_scilexermatlab_on_word_characters(void* self, const char* (*slot)());
void q_scilexermatlab_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexermatlab_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexermatlab_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexermatlab_set_color(void* self, void* c, int style);
void q_scilexermatlab_qbase_set_color(void* self, void* c, int style);
void q_scilexermatlab_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexermatlab_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexermatlab_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexermatlab_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexermatlab_set_font(void* self, void* f, int style);
void q_scilexermatlab_qbase_set_font(void* self, void* f, int style);
void q_scilexermatlab_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexermatlab_set_paper(void* self, void* c, int style);
void q_scilexermatlab_qbase_set_paper(void* self, void* c, int style);
void q_scilexermatlab_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexermatlab_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexermatlab_qbase_read_properties(void* self, void* qs, const char* prefix);
void q_scilexermatlab_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexermatlab_write_properties(void* self, void* qs, const char* prefix);
bool q_scilexermatlab_qbase_write_properties(void* self, void* qs, const char* prefix);
void q_scilexermatlab_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexermatlab_event(void* self, void* event);
bool q_scilexermatlab_qbase_event(void* self, void* event);
void q_scilexermatlab_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexermatlab_event_filter(void* self, void* watched, void* event);
bool q_scilexermatlab_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexermatlab_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexermatlab_timer_event(void* self, void* event);
void q_scilexermatlab_qbase_timer_event(void* self, void* event);
void q_scilexermatlab_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexermatlab_child_event(void* self, void* event);
void q_scilexermatlab_qbase_child_event(void* self, void* event);
void q_scilexermatlab_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexermatlab_custom_event(void* self, void* event);
void q_scilexermatlab_qbase_custom_event(void* self, void* event);
void q_scilexermatlab_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexermatlab_connect_notify(void* self, void* signal);
void q_scilexermatlab_qbase_connect_notify(void* self, void* signal);
void q_scilexermatlab_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexermatlab_disconnect_notify(void* self, void* signal);
void q_scilexermatlab_qbase_disconnect_notify(void* self, void* signal);
void q_scilexermatlab_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexermatlab_sender(void* self);
QObject* q_scilexermatlab_qbase_sender(void* self);
void q_scilexermatlab_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexermatlab_sender_signal_index(void* self);
int32_t q_scilexermatlab_qbase_sender_signal_index(void* self);
void q_scilexermatlab_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexermatlab_receivers(void* self, const char* signal);
int32_t q_scilexermatlab_qbase_receivers(void* self, const char* signal);
void q_scilexermatlab_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexermatlab_is_signal_connected(void* self, void* signal);
bool q_scilexermatlab_qbase_is_signal_connected(void* self, void* signal);
void q_scilexermatlab_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexermatlab_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexermatlab.html#types

typedef enum {
    QSCILEXERMATLAB__DEFAULT = 0,
    QSCILEXERMATLAB__COMMENT = 1,
    QSCILEXERMATLAB__COMMAND = 2,
    QSCILEXERMATLAB__NUMBER = 3,
    QSCILEXERMATLAB__KEYWORD = 4,
    QSCILEXERMATLAB__SINGLEQUOTEDSTRING = 5,
    QSCILEXERMATLAB__OPERATOR = 6,
    QSCILEXERMATLAB__IDENTIFIER = 7,
    QSCILEXERMATLAB__DOUBLEQUOTEDSTRING = 8
} QsciLexerMatlab__;

#endif
