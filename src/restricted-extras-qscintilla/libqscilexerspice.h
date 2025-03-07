#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERSPICE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERSPICE_H

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

QsciLexerSpice* q_scilexerspice_new();
QsciLexerSpice* q_scilexerspice_new2(void* parent);
QMetaObject* q_scilexerspice_meta_object(void* self);
void* q_scilexerspice_metacast(void* self, const char* param1);
int32_t q_scilexerspice_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerspice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerspice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerspice_tr(const char* s);
const char* q_scilexerspice_language(void* self);
const char* q_scilexerspice_lexer(void* self);
int32_t q_scilexerspice_brace_style(void* self);
const char* q_scilexerspice_keywords(void* self, int set);
QColor* q_scilexerspice_default_color(void* self, int style);
QFont* q_scilexerspice_default_font(void* self, int style);
const char* q_scilexerspice_description(void* self, int style);
const char* q_scilexerspice_tr2(const char* s, const char* c);
const char* q_scilexerspice_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerspice_apis(void* self);
int32_t q_scilexerspice_auto_indent_style(void* self);
QColor* q_scilexerspice_default_paper(void* self);
QsciScintilla* q_scilexerspice_editor(void* self);
void q_scilexerspice_set_a_p_is(void* self, void* apis);
void q_scilexerspice_set_default_color(void* self, void* c);
void q_scilexerspice_set_default_font(void* self, void* f);
void q_scilexerspice_set_default_paper(void* self, void* c);
bool q_scilexerspice_read_settings(void* self, void* qs);
bool q_scilexerspice_write_settings(void* self, void* qs);
void q_scilexerspice_color_changed(void* self, void* c, int style);
void q_scilexerspice_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerspice_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerspice_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerspice_font_changed(void* self, void* f, int style);
void q_scilexerspice_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerspice_paper_changed(void* self, void* c, int style);
void q_scilexerspice_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerspice_property_changed(void* self, const char* prop, const char* val);
void q_scilexerspice_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerspice_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerspice_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerspice_object_name(void* self);
void q_scilexerspice_set_object_name(void* self, const char* name);
bool q_scilexerspice_is_widget_type(void* self);
bool q_scilexerspice_is_window_type(void* self);
bool q_scilexerspice_is_quick_item_type(void* self);
bool q_scilexerspice_signals_blocked(void* self);
bool q_scilexerspice_block_signals(void* self, bool b);
QThread* q_scilexerspice_thread(void* self);
void q_scilexerspice_move_to_thread(void* self, void* thread);
int32_t q_scilexerspice_start_timer(void* self, int interval);
void q_scilexerspice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerspice_children(void* self);
void q_scilexerspice_set_parent(void* self, void* parent);
void q_scilexerspice_install_event_filter(void* self, void* filterObj);
void q_scilexerspice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerspice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerspice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerspice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerspice_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerspice_dump_object_tree(void* self);
void q_scilexerspice_dump_object_info(void* self);
bool q_scilexerspice_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerspice_property(void* self, const char* name);
const char** q_scilexerspice_dynamic_property_names(void* self);
QBindingStorage* q_scilexerspice_binding_storage(void* self);
QBindingStorage* q_scilexerspice_binding_storage2(void* self);
void q_scilexerspice_destroyed(void* self);
void q_scilexerspice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerspice_parent(void* self);
bool q_scilexerspice_inherits(void* self, const char* classname);
void q_scilexerspice_delete_later(void* self);
int32_t q_scilexerspice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerspice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerspice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerspice_destroyed1(void* self, void* param1);
void q_scilexerspice_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerspice_lexer_id(void* self);
int32_t q_scilexerspice_qbase_lexer_id(void* self);
void q_scilexerspice_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerspice_auto_completion_fillups(void* self);
const char* q_scilexerspice_qbase_auto_completion_fillups(void* self);
void q_scilexerspice_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexerspice_auto_completion_word_separators(void* self);
const char** q_scilexerspice_qbase_auto_completion_word_separators(void* self);
void q_scilexerspice_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerspice_block_end(void* self, int* style);
const char* q_scilexerspice_qbase_block_end(void* self, int* style);
void q_scilexerspice_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerspice_block_lookback(void* self);
int32_t q_scilexerspice_qbase_block_lookback(void* self);
void q_scilexerspice_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerspice_block_start(void* self, int* style);
const char* q_scilexerspice_qbase_block_start(void* self, int* style);
void q_scilexerspice_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerspice_block_start_keyword(void* self, int* style);
const char* q_scilexerspice_qbase_block_start_keyword(void* self, int* style);
void q_scilexerspice_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
bool q_scilexerspice_case_sensitive(void* self);
bool q_scilexerspice_qbase_case_sensitive(void* self);
void q_scilexerspice_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerspice_color(void* self, int style);
QColor* q_scilexerspice_qbase_color(void* self, int style);
void q_scilexerspice_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerspice_eol_fill(void* self, int style);
bool q_scilexerspice_qbase_eol_fill(void* self, int style);
void q_scilexerspice_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerspice_font(void* self, int style);
QFont* q_scilexerspice_qbase_font(void* self, int style);
void q_scilexerspice_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerspice_indentation_guide_view(void* self);
int32_t q_scilexerspice_qbase_indentation_guide_view(void* self);
void q_scilexerspice_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerspice_default_style(void* self);
int32_t q_scilexerspice_qbase_default_style(void* self);
void q_scilexerspice_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerspice_paper(void* self, int style);
QColor* q_scilexerspice_qbase_paper(void* self, int style);
void q_scilexerspice_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerspice_default_color_with_style(void* self, int style);
QColor* q_scilexerspice_qbase_default_color_with_style(void* self, int style);
void q_scilexerspice_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexerspice_default_eol_fill(void* self, int style);
bool q_scilexerspice_qbase_default_eol_fill(void* self, int style);
void q_scilexerspice_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerspice_default_font_with_style(void* self, int style);
QFont* q_scilexerspice_qbase_default_font_with_style(void* self, int style);
void q_scilexerspice_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerspice_default_paper_with_style(void* self, int style);
QColor* q_scilexerspice_qbase_default_paper_with_style(void* self, int style);
void q_scilexerspice_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerspice_set_editor(void* self, void* editor);
void q_scilexerspice_qbase_set_editor(void* self, void* editor);
void q_scilexerspice_on_set_editor(void* self, void (*slot)(void*, void*));
void q_scilexerspice_refresh_properties(void* self);
void q_scilexerspice_qbase_refresh_properties(void* self);
void q_scilexerspice_on_refresh_properties(void* self, void (*slot)());
int32_t q_scilexerspice_style_bits_needed(void* self);
int32_t q_scilexerspice_qbase_style_bits_needed(void* self);
void q_scilexerspice_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerspice_word_characters(void* self);
const char* q_scilexerspice_qbase_word_characters(void* self);
void q_scilexerspice_on_word_characters(void* self, const char* (*slot)());
void q_scilexerspice_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerspice_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerspice_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerspice_set_color(void* self, void* c, int style);
void q_scilexerspice_qbase_set_color(void* self, void* c, int style);
void q_scilexerspice_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerspice_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerspice_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerspice_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerspice_set_font(void* self, void* f, int style);
void q_scilexerspice_qbase_set_font(void* self, void* f, int style);
void q_scilexerspice_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerspice_set_paper(void* self, void* c, int style);
void q_scilexerspice_qbase_set_paper(void* self, void* c, int style);
void q_scilexerspice_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerspice_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerspice_qbase_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerspice_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerspice_write_properties(void* self, void* qs, const char* prefix);
bool q_scilexerspice_qbase_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerspice_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerspice_event(void* self, void* event);
bool q_scilexerspice_qbase_event(void* self, void* event);
void q_scilexerspice_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerspice_event_filter(void* self, void* watched, void* event);
bool q_scilexerspice_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerspice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerspice_timer_event(void* self, void* event);
void q_scilexerspice_qbase_timer_event(void* self, void* event);
void q_scilexerspice_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerspice_child_event(void* self, void* event);
void q_scilexerspice_qbase_child_event(void* self, void* event);
void q_scilexerspice_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerspice_custom_event(void* self, void* event);
void q_scilexerspice_qbase_custom_event(void* self, void* event);
void q_scilexerspice_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerspice_connect_notify(void* self, void* signal);
void q_scilexerspice_qbase_connect_notify(void* self, void* signal);
void q_scilexerspice_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerspice_disconnect_notify(void* self, void* signal);
void q_scilexerspice_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerspice_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerspice_sender(void* self);
QObject* q_scilexerspice_qbase_sender(void* self);
void q_scilexerspice_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerspice_sender_signal_index(void* self);
int32_t q_scilexerspice_qbase_sender_signal_index(void* self);
void q_scilexerspice_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerspice_receivers(void* self, const char* signal);
int32_t q_scilexerspice_qbase_receivers(void* self, const char* signal);
void q_scilexerspice_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerspice_is_signal_connected(void* self, void* signal);
bool q_scilexerspice_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerspice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerspice_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerspice.html#types

typedef enum {
    QSCILEXERSPICE__DEFAULT = 0,
    QSCILEXERSPICE__IDENTIFIER = 1,
    QSCILEXERSPICE__COMMAND = 2,
    QSCILEXERSPICE__FUNCTION = 3,
    QSCILEXERSPICE__PARAMETER = 4,
    QSCILEXERSPICE__NUMBER = 5,
    QSCILEXERSPICE__DELIMITER = 6,
    QSCILEXERSPICE__VALUE = 7,
    QSCILEXERSPICE__COMMENT = 8
} QsciLexerSpice__;

#endif
