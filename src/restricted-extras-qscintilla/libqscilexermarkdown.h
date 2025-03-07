#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMARKDOWN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMARKDOWN_H

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

QsciLexerMarkdown* q_scilexermarkdown_new();
QsciLexerMarkdown* q_scilexermarkdown_new2(void* parent);
QMetaObject* q_scilexermarkdown_meta_object(void* self);
void* q_scilexermarkdown_metacast(void* self, const char* param1);
int32_t q_scilexermarkdown_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexermarkdown_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexermarkdown_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexermarkdown_tr(const char* s);
const char* q_scilexermarkdown_language(void* self);
const char* q_scilexermarkdown_lexer(void* self);
QColor* q_scilexermarkdown_default_color(void* self, int style);
QFont* q_scilexermarkdown_default_font(void* self, int style);
QColor* q_scilexermarkdown_default_paper(void* self, int style);
const char* q_scilexermarkdown_description(void* self, int style);
const char* q_scilexermarkdown_tr2(const char* s, const char* c);
const char* q_scilexermarkdown_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexermarkdown_apis(void* self);
int32_t q_scilexermarkdown_auto_indent_style(void* self);
QsciScintilla* q_scilexermarkdown_editor(void* self);
void q_scilexermarkdown_set_a_p_is(void* self, void* apis);
void q_scilexermarkdown_set_default_color(void* self, void* c);
void q_scilexermarkdown_set_default_font(void* self, void* f);
void q_scilexermarkdown_set_default_paper(void* self, void* c);
bool q_scilexermarkdown_read_settings(void* self, void* qs);
bool q_scilexermarkdown_write_settings(void* self, void* qs);
void q_scilexermarkdown_color_changed(void* self, void* c, int style);
void q_scilexermarkdown_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermarkdown_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexermarkdown_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexermarkdown_font_changed(void* self, void* f, int style);
void q_scilexermarkdown_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermarkdown_paper_changed(void* self, void* c, int style);
void q_scilexermarkdown_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexermarkdown_property_changed(void* self, const char* prop, const char* val);
void q_scilexermarkdown_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexermarkdown_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexermarkdown_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexermarkdown_object_name(void* self);
void q_scilexermarkdown_set_object_name(void* self, const char* name);
bool q_scilexermarkdown_is_widget_type(void* self);
bool q_scilexermarkdown_is_window_type(void* self);
bool q_scilexermarkdown_is_quick_item_type(void* self);
bool q_scilexermarkdown_signals_blocked(void* self);
bool q_scilexermarkdown_block_signals(void* self, bool b);
QThread* q_scilexermarkdown_thread(void* self);
void q_scilexermarkdown_move_to_thread(void* self, void* thread);
int32_t q_scilexermarkdown_start_timer(void* self, int interval);
void q_scilexermarkdown_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexermarkdown_children(void* self);
void q_scilexermarkdown_set_parent(void* self, void* parent);
void q_scilexermarkdown_install_event_filter(void* self, void* filterObj);
void q_scilexermarkdown_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexermarkdown_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexermarkdown_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexermarkdown_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexermarkdown_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexermarkdown_dump_object_tree(void* self);
void q_scilexermarkdown_dump_object_info(void* self);
bool q_scilexermarkdown_set_property(void* self, const char* name, void* value);
QVariant* q_scilexermarkdown_property(void* self, const char* name);
const char** q_scilexermarkdown_dynamic_property_names(void* self);
QBindingStorage* q_scilexermarkdown_binding_storage(void* self);
QBindingStorage* q_scilexermarkdown_binding_storage2(void* self);
void q_scilexermarkdown_destroyed(void* self);
void q_scilexermarkdown_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexermarkdown_parent(void* self);
bool q_scilexermarkdown_inherits(void* self, const char* classname);
void q_scilexermarkdown_delete_later(void* self);
int32_t q_scilexermarkdown_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexermarkdown_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexermarkdown_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexermarkdown_destroyed1(void* self, void* param1);
void q_scilexermarkdown_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexermarkdown_lexer_id(void* self);
int32_t q_scilexermarkdown_qbase_lexer_id(void* self);
void q_scilexermarkdown_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexermarkdown_auto_completion_fillups(void* self);
const char* q_scilexermarkdown_qbase_auto_completion_fillups(void* self);
void q_scilexermarkdown_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexermarkdown_auto_completion_word_separators(void* self);
const char** q_scilexermarkdown_qbase_auto_completion_word_separators(void* self);
void q_scilexermarkdown_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexermarkdown_block_end(void* self, int* style);
const char* q_scilexermarkdown_qbase_block_end(void* self, int* style);
void q_scilexermarkdown_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexermarkdown_block_lookback(void* self);
int32_t q_scilexermarkdown_qbase_block_lookback(void* self);
void q_scilexermarkdown_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexermarkdown_block_start(void* self, int* style);
const char* q_scilexermarkdown_qbase_block_start(void* self, int* style);
void q_scilexermarkdown_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexermarkdown_block_start_keyword(void* self, int* style);
const char* q_scilexermarkdown_qbase_block_start_keyword(void* self, int* style);
void q_scilexermarkdown_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexermarkdown_brace_style(void* self);
int32_t q_scilexermarkdown_qbase_brace_style(void* self);
void q_scilexermarkdown_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexermarkdown_case_sensitive(void* self);
bool q_scilexermarkdown_qbase_case_sensitive(void* self);
void q_scilexermarkdown_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexermarkdown_color(void* self, int style);
QColor* q_scilexermarkdown_qbase_color(void* self, int style);
void q_scilexermarkdown_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexermarkdown_eol_fill(void* self, int style);
bool q_scilexermarkdown_qbase_eol_fill(void* self, int style);
void q_scilexermarkdown_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexermarkdown_font(void* self, int style);
QFont* q_scilexermarkdown_qbase_font(void* self, int style);
void q_scilexermarkdown_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexermarkdown_indentation_guide_view(void* self);
int32_t q_scilexermarkdown_qbase_indentation_guide_view(void* self);
void q_scilexermarkdown_on_indentation_guide_view(void* self, int32_t (*slot)());
const char* q_scilexermarkdown_keywords(void* self, int set);
const char* q_scilexermarkdown_qbase_keywords(void* self, int set);
void q_scilexermarkdown_on_keywords(void* self, const char* (*slot)(void*, int));
int32_t q_scilexermarkdown_default_style(void* self);
int32_t q_scilexermarkdown_qbase_default_style(void* self);
void q_scilexermarkdown_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexermarkdown_paper(void* self, int style);
QColor* q_scilexermarkdown_qbase_paper(void* self, int style);
void q_scilexermarkdown_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexermarkdown_default_color_with_style(void* self, int style);
QColor* q_scilexermarkdown_qbase_default_color_with_style(void* self, int style);
void q_scilexermarkdown_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexermarkdown_default_eol_fill(void* self, int style);
bool q_scilexermarkdown_qbase_default_eol_fill(void* self, int style);
void q_scilexermarkdown_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexermarkdown_default_font_with_style(void* self, int style);
QFont* q_scilexermarkdown_qbase_default_font_with_style(void* self, int style);
void q_scilexermarkdown_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexermarkdown_default_paper_with_style(void* self, int style);
QColor* q_scilexermarkdown_qbase_default_paper_with_style(void* self, int style);
void q_scilexermarkdown_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexermarkdown_set_editor(void* self, void* editor);
void q_scilexermarkdown_qbase_set_editor(void* self, void* editor);
void q_scilexermarkdown_on_set_editor(void* self, void (*slot)(void*, void*));
void q_scilexermarkdown_refresh_properties(void* self);
void q_scilexermarkdown_qbase_refresh_properties(void* self);
void q_scilexermarkdown_on_refresh_properties(void* self, void (*slot)());
int32_t q_scilexermarkdown_style_bits_needed(void* self);
int32_t q_scilexermarkdown_qbase_style_bits_needed(void* self);
void q_scilexermarkdown_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexermarkdown_word_characters(void* self);
const char* q_scilexermarkdown_qbase_word_characters(void* self);
void q_scilexermarkdown_on_word_characters(void* self, const char* (*slot)());
void q_scilexermarkdown_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexermarkdown_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexermarkdown_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexermarkdown_set_color(void* self, void* c, int style);
void q_scilexermarkdown_qbase_set_color(void* self, void* c, int style);
void q_scilexermarkdown_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexermarkdown_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexermarkdown_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexermarkdown_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexermarkdown_set_font(void* self, void* f, int style);
void q_scilexermarkdown_qbase_set_font(void* self, void* f, int style);
void q_scilexermarkdown_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexermarkdown_set_paper(void* self, void* c, int style);
void q_scilexermarkdown_qbase_set_paper(void* self, void* c, int style);
void q_scilexermarkdown_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexermarkdown_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexermarkdown_qbase_read_properties(void* self, void* qs, const char* prefix);
void q_scilexermarkdown_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexermarkdown_write_properties(void* self, void* qs, const char* prefix);
bool q_scilexermarkdown_qbase_write_properties(void* self, void* qs, const char* prefix);
void q_scilexermarkdown_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexermarkdown_event(void* self, void* event);
bool q_scilexermarkdown_qbase_event(void* self, void* event);
void q_scilexermarkdown_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexermarkdown_event_filter(void* self, void* watched, void* event);
bool q_scilexermarkdown_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexermarkdown_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexermarkdown_timer_event(void* self, void* event);
void q_scilexermarkdown_qbase_timer_event(void* self, void* event);
void q_scilexermarkdown_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexermarkdown_child_event(void* self, void* event);
void q_scilexermarkdown_qbase_child_event(void* self, void* event);
void q_scilexermarkdown_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexermarkdown_custom_event(void* self, void* event);
void q_scilexermarkdown_qbase_custom_event(void* self, void* event);
void q_scilexermarkdown_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexermarkdown_connect_notify(void* self, void* signal);
void q_scilexermarkdown_qbase_connect_notify(void* self, void* signal);
void q_scilexermarkdown_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexermarkdown_disconnect_notify(void* self, void* signal);
void q_scilexermarkdown_qbase_disconnect_notify(void* self, void* signal);
void q_scilexermarkdown_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexermarkdown_sender(void* self);
QObject* q_scilexermarkdown_qbase_sender(void* self);
void q_scilexermarkdown_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexermarkdown_sender_signal_index(void* self);
int32_t q_scilexermarkdown_qbase_sender_signal_index(void* self);
void q_scilexermarkdown_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexermarkdown_receivers(void* self, const char* signal);
int32_t q_scilexermarkdown_qbase_receivers(void* self, const char* signal);
void q_scilexermarkdown_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexermarkdown_is_signal_connected(void* self, void* signal);
bool q_scilexermarkdown_qbase_is_signal_connected(void* self, void* signal);
void q_scilexermarkdown_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexermarkdown_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexermarkdown.html#types

typedef enum {
    QSCILEXERMARKDOWN__DEFAULT = 0,
    QSCILEXERMARKDOWN__SPECIAL = 1,
    QSCILEXERMARKDOWN__STRONGEMPHASISASTERISKS = 2,
    QSCILEXERMARKDOWN__STRONGEMPHASISUNDERSCORES = 3,
    QSCILEXERMARKDOWN__EMPHASISASTERISKS = 4,
    QSCILEXERMARKDOWN__EMPHASISUNDERSCORES = 5,
    QSCILEXERMARKDOWN__HEADER1 = 6,
    QSCILEXERMARKDOWN__HEADER2 = 7,
    QSCILEXERMARKDOWN__HEADER3 = 8,
    QSCILEXERMARKDOWN__HEADER4 = 9,
    QSCILEXERMARKDOWN__HEADER5 = 10,
    QSCILEXERMARKDOWN__HEADER6 = 11,
    QSCILEXERMARKDOWN__PRECHAR = 12,
    QSCILEXERMARKDOWN__UNORDEREDLISTITEM = 13,
    QSCILEXERMARKDOWN__ORDEREDLISTITEM = 14,
    QSCILEXERMARKDOWN__BLOCKQUOTE = 15,
    QSCILEXERMARKDOWN__STRIKEOUT = 16,
    QSCILEXERMARKDOWN__HORIZONTALRULE = 17,
    QSCILEXERMARKDOWN__LINK = 18,
    QSCILEXERMARKDOWN__CODEBACKTICKS = 19,
    QSCILEXERMARKDOWN__CODEDOUBLEBACKTICKS = 20,
    QSCILEXERMARKDOWN__CODEBLOCK = 21
} QsciLexerMarkdown__;

#endif
