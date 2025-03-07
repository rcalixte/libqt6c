#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPASCAL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPASCAL_H

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

QsciLexerPascal* q_scilexerpascal_new();
QsciLexerPascal* q_scilexerpascal_new2(void* parent);
QMetaObject* q_scilexerpascal_meta_object(void* self);
void* q_scilexerpascal_metacast(void* self, const char* param1);
int32_t q_scilexerpascal_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerpascal_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerpascal_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerpascal_tr(const char* s);
const char* q_scilexerpascal_language(void* self);
const char* q_scilexerpascal_lexer(void* self);
const char** q_scilexerpascal_auto_completion_word_separators(void* self);
const char* q_scilexerpascal_block_end(void* self);
const char* q_scilexerpascal_block_start(void* self);
const char* q_scilexerpascal_block_start_keyword(void* self);
int32_t q_scilexerpascal_brace_style(void* self);
QColor* q_scilexerpascal_default_color(void* self, int style);
bool q_scilexerpascal_default_eol_fill(void* self, int style);
QFont* q_scilexerpascal_default_font(void* self, int style);
QColor* q_scilexerpascal_default_paper(void* self, int style);
const char* q_scilexerpascal_keywords(void* self, int set);
const char* q_scilexerpascal_description(void* self, int style);
void q_scilexerpascal_refresh_properties(void* self);
bool q_scilexerpascal_fold_comments(void* self);
bool q_scilexerpascal_fold_compact(void* self);
bool q_scilexerpascal_fold_preprocessor(void* self);
void q_scilexerpascal_set_smart_highlighting(void* self, bool enabled);
bool q_scilexerpascal_smart_highlighting(void* self);
void q_scilexerpascal_set_fold_comments(void* self, bool fold);
void q_scilexerpascal_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexerpascal_qbase_set_fold_comments(void* self, bool fold);
void q_scilexerpascal_set_fold_compact(void* self, bool fold);
void q_scilexerpascal_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerpascal_qbase_set_fold_compact(void* self, bool fold);
void q_scilexerpascal_set_fold_preprocessor(void* self, bool fold);
void q_scilexerpascal_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));
void q_scilexerpascal_qbase_set_fold_preprocessor(void* self, bool fold);
bool q_scilexerpascal_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerpascal_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpascal_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerpascal_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerpascal_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerpascal_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerpascal_tr2(const char* s, const char* c);
const char* q_scilexerpascal_tr3(const char* s, const char* c, int n);
const char* q_scilexerpascal_block_end1(void* self, int* style);
const char* q_scilexerpascal_block_start1(void* self, int* style);
const char* q_scilexerpascal_block_start_keyword1(void* self, int* style);
QsciAbstractAPIs* q_scilexerpascal_apis(void* self);
int32_t q_scilexerpascal_auto_indent_style(void* self);
QsciScintilla* q_scilexerpascal_editor(void* self);
void q_scilexerpascal_set_a_p_is(void* self, void* apis);
void q_scilexerpascal_set_default_color(void* self, void* c);
void q_scilexerpascal_set_default_font(void* self, void* f);
void q_scilexerpascal_set_default_paper(void* self, void* c);
bool q_scilexerpascal_read_settings(void* self, void* qs);
bool q_scilexerpascal_write_settings(void* self, void* qs);
void q_scilexerpascal_color_changed(void* self, void* c, int style);
void q_scilexerpascal_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpascal_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerpascal_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerpascal_font_changed(void* self, void* f, int style);
void q_scilexerpascal_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpascal_paper_changed(void* self, void* c, int style);
void q_scilexerpascal_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerpascal_property_changed(void* self, const char* prop, const char* val);
void q_scilexerpascal_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerpascal_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerpascal_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerpascal_object_name(void* self);
void q_scilexerpascal_set_object_name(void* self, const char* name);
bool q_scilexerpascal_is_widget_type(void* self);
bool q_scilexerpascal_is_window_type(void* self);
bool q_scilexerpascal_is_quick_item_type(void* self);
bool q_scilexerpascal_signals_blocked(void* self);
bool q_scilexerpascal_block_signals(void* self, bool b);
QThread* q_scilexerpascal_thread(void* self);
void q_scilexerpascal_move_to_thread(void* self, void* thread);
int32_t q_scilexerpascal_start_timer(void* self, int interval);
void q_scilexerpascal_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerpascal_children(void* self);
void q_scilexerpascal_set_parent(void* self, void* parent);
void q_scilexerpascal_install_event_filter(void* self, void* filterObj);
void q_scilexerpascal_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerpascal_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerpascal_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerpascal_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerpascal_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerpascal_dump_object_tree(void* self);
void q_scilexerpascal_dump_object_info(void* self);
bool q_scilexerpascal_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerpascal_property(void* self, const char* name);
const char** q_scilexerpascal_dynamic_property_names(void* self);
QBindingStorage* q_scilexerpascal_binding_storage(void* self);
QBindingStorage* q_scilexerpascal_binding_storage2(void* self);
void q_scilexerpascal_destroyed(void* self);
void q_scilexerpascal_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerpascal_parent(void* self);
bool q_scilexerpascal_inherits(void* self, const char* classname);
void q_scilexerpascal_delete_later(void* self);
int32_t q_scilexerpascal_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerpascal_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerpascal_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerpascal_destroyed1(void* self, void* param1);
void q_scilexerpascal_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpascal_lexer_id(void* self);
int32_t q_scilexerpascal_qbase_lexer_id(void* self);
void q_scilexerpascal_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexerpascal_auto_completion_fillups(void* self);
const char* q_scilexerpascal_qbase_auto_completion_fillups(void* self);
void q_scilexerpascal_on_auto_completion_fillups(void* self, const char* (*slot)());
int32_t q_scilexerpascal_block_lookback(void* self);
int32_t q_scilexerpascal_qbase_block_lookback(void* self);
void q_scilexerpascal_on_block_lookback(void* self, int32_t (*slot)());
bool q_scilexerpascal_case_sensitive(void* self);
bool q_scilexerpascal_qbase_case_sensitive(void* self);
void q_scilexerpascal_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerpascal_color(void* self, int style);
QColor* q_scilexerpascal_qbase_color(void* self, int style);
void q_scilexerpascal_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerpascal_eol_fill(void* self, int style);
bool q_scilexerpascal_qbase_eol_fill(void* self, int style);
void q_scilexerpascal_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerpascal_font(void* self, int style);
QFont* q_scilexerpascal_qbase_font(void* self, int style);
void q_scilexerpascal_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerpascal_indentation_guide_view(void* self);
int32_t q_scilexerpascal_qbase_indentation_guide_view(void* self);
void q_scilexerpascal_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerpascal_default_style(void* self);
int32_t q_scilexerpascal_qbase_default_style(void* self);
void q_scilexerpascal_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerpascal_paper(void* self, int style);
QColor* q_scilexerpascal_qbase_paper(void* self, int style);
void q_scilexerpascal_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerpascal_default_color_with_style(void* self, int style);
QColor* q_scilexerpascal_qbase_default_color_with_style(void* self, int style);
void q_scilexerpascal_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerpascal_default_font_with_style(void* self, int style);
QFont* q_scilexerpascal_qbase_default_font_with_style(void* self, int style);
void q_scilexerpascal_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerpascal_default_paper_with_style(void* self, int style);
QColor* q_scilexerpascal_qbase_default_paper_with_style(void* self, int style);
void q_scilexerpascal_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerpascal_set_editor(void* self, void* editor);
void q_scilexerpascal_qbase_set_editor(void* self, void* editor);
void q_scilexerpascal_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerpascal_style_bits_needed(void* self);
int32_t q_scilexerpascal_qbase_style_bits_needed(void* self);
void q_scilexerpascal_on_style_bits_needed(void* self, int32_t (*slot)());
const char* q_scilexerpascal_word_characters(void* self);
const char* q_scilexerpascal_qbase_word_characters(void* self);
void q_scilexerpascal_on_word_characters(void* self, const char* (*slot)());
void q_scilexerpascal_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpascal_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerpascal_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerpascal_set_color(void* self, void* c, int style);
void q_scilexerpascal_qbase_set_color(void* self, void* c, int style);
void q_scilexerpascal_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerpascal_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpascal_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerpascal_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerpascal_set_font(void* self, void* f, int style);
void q_scilexerpascal_qbase_set_font(void* self, void* f, int style);
void q_scilexerpascal_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerpascal_set_paper(void* self, void* c, int style);
void q_scilexerpascal_qbase_set_paper(void* self, void* c, int style);
void q_scilexerpascal_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerpascal_event(void* self, void* event);
bool q_scilexerpascal_qbase_event(void* self, void* event);
void q_scilexerpascal_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerpascal_event_filter(void* self, void* watched, void* event);
bool q_scilexerpascal_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerpascal_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerpascal_timer_event(void* self, void* event);
void q_scilexerpascal_qbase_timer_event(void* self, void* event);
void q_scilexerpascal_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerpascal_child_event(void* self, void* event);
void q_scilexerpascal_qbase_child_event(void* self, void* event);
void q_scilexerpascal_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerpascal_custom_event(void* self, void* event);
void q_scilexerpascal_qbase_custom_event(void* self, void* event);
void q_scilexerpascal_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerpascal_connect_notify(void* self, void* signal);
void q_scilexerpascal_qbase_connect_notify(void* self, void* signal);
void q_scilexerpascal_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerpascal_disconnect_notify(void* self, void* signal);
void q_scilexerpascal_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerpascal_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerpascal_sender(void* self);
QObject* q_scilexerpascal_qbase_sender(void* self);
void q_scilexerpascal_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerpascal_sender_signal_index(void* self);
int32_t q_scilexerpascal_qbase_sender_signal_index(void* self);
void q_scilexerpascal_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerpascal_receivers(void* self, const char* signal);
int32_t q_scilexerpascal_qbase_receivers(void* self, const char* signal);
void q_scilexerpascal_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerpascal_is_signal_connected(void* self, void* signal);
bool q_scilexerpascal_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerpascal_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerpascal_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpascal.html#types

typedef enum {
    QSCILEXERPASCAL__DEFAULT = 0,
    QSCILEXERPASCAL__IDENTIFIER = 1,
    QSCILEXERPASCAL__COMMENT = 2,
    QSCILEXERPASCAL__COMMENTPARENTHESIS = 3,
    QSCILEXERPASCAL__COMMENTLINE = 4,
    QSCILEXERPASCAL__PREPROCESSOR = 5,
    QSCILEXERPASCAL__PREPROCESSORPARENTHESIS = 6,
    QSCILEXERPASCAL__NUMBER = 7,
    QSCILEXERPASCAL__HEXNUMBER = 8,
    QSCILEXERPASCAL__KEYWORD = 9,
    QSCILEXERPASCAL__SINGLEQUOTEDSTRING = 10,
    QSCILEXERPASCAL__UNCLOSEDSTRING = 11,
    QSCILEXERPASCAL__CHARACTER = 12,
    QSCILEXERPASCAL__OPERATOR = 13,
    QSCILEXERPASCAL__ASM = 14
} QsciLexerPascal__;

#endif
