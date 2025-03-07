#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSS_H

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

QsciLexerCSS* q_scilexercss_new();
QsciLexerCSS* q_scilexercss_new2(void* parent);
QMetaObject* q_scilexercss_meta_object(void* self);
void* q_scilexercss_metacast(void* self, const char* param1);
int32_t q_scilexercss_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexercss_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexercss_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexercss_tr(const char* s);
const char* q_scilexercss_language(void* self);
const char* q_scilexercss_lexer(void* self);
const char* q_scilexercss_block_end(void* self);
const char* q_scilexercss_block_start(void* self);
const char* q_scilexercss_word_characters(void* self);
QColor* q_scilexercss_default_color(void* self, int style);
QFont* q_scilexercss_default_font(void* self, int style);
const char* q_scilexercss_keywords(void* self, int set);
const char* q_scilexercss_description(void* self, int style);
void q_scilexercss_refresh_properties(void* self);
bool q_scilexercss_fold_comments(void* self);
bool q_scilexercss_fold_compact(void* self);
void q_scilexercss_set_h_s_s_language(void* self, bool enabled);
bool q_scilexercss_h_s_s_language(void* self);
void q_scilexercss_set_less_language(void* self, bool enabled);
bool q_scilexercss_less_language(void* self);
void q_scilexercss_set_s_c_s_s_language(void* self, bool enabled);
bool q_scilexercss_s_c_s_s_language(void* self);
void q_scilexercss_set_fold_comments(void* self, bool fold);
void q_scilexercss_on_set_fold_comments(void* self, void (*slot)(void*, bool));
void q_scilexercss_qbase_set_fold_comments(void* self, bool fold);
void q_scilexercss_set_fold_compact(void* self, bool fold);
void q_scilexercss_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexercss_qbase_set_fold_compact(void* self, bool fold);
bool q_scilexercss_read_properties(void* self, void* qs, const char* prefix);
void q_scilexercss_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercss_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexercss_write_properties(void* self, void* qs, const char* prefix);
void q_scilexercss_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexercss_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexercss_tr2(const char* s, const char* c);
const char* q_scilexercss_tr3(const char* s, const char* c, int n);
const char* q_scilexercss_block_end1(void* self, int* style);
const char* q_scilexercss_block_start1(void* self, int* style);
QsciAbstractAPIs* q_scilexercss_apis(void* self);
int32_t q_scilexercss_auto_indent_style(void* self);
QColor* q_scilexercss_default_paper(void* self);
QsciScintilla* q_scilexercss_editor(void* self);
void q_scilexercss_set_a_p_is(void* self, void* apis);
void q_scilexercss_set_default_color(void* self, void* c);
void q_scilexercss_set_default_font(void* self, void* f);
void q_scilexercss_set_default_paper(void* self, void* c);
bool q_scilexercss_read_settings(void* self, void* qs);
bool q_scilexercss_write_settings(void* self, void* qs);
void q_scilexercss_color_changed(void* self, void* c, int style);
void q_scilexercss_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercss_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexercss_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexercss_font_changed(void* self, void* f, int style);
void q_scilexercss_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercss_paper_changed(void* self, void* c, int style);
void q_scilexercss_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexercss_property_changed(void* self, const char* prop, const char* val);
void q_scilexercss_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexercss_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexercss_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexercss_object_name(void* self);
void q_scilexercss_set_object_name(void* self, const char* name);
bool q_scilexercss_is_widget_type(void* self);
bool q_scilexercss_is_window_type(void* self);
bool q_scilexercss_is_quick_item_type(void* self);
bool q_scilexercss_signals_blocked(void* self);
bool q_scilexercss_block_signals(void* self, bool b);
QThread* q_scilexercss_thread(void* self);
void q_scilexercss_move_to_thread(void* self, void* thread);
int32_t q_scilexercss_start_timer(void* self, int interval);
void q_scilexercss_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexercss_children(void* self);
void q_scilexercss_set_parent(void* self, void* parent);
void q_scilexercss_install_event_filter(void* self, void* filterObj);
void q_scilexercss_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexercss_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexercss_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexercss_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexercss_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexercss_dump_object_tree(void* self);
void q_scilexercss_dump_object_info(void* self);
bool q_scilexercss_set_property(void* self, const char* name, void* value);
QVariant* q_scilexercss_property(void* self, const char* name);
const char** q_scilexercss_dynamic_property_names(void* self);
QBindingStorage* q_scilexercss_binding_storage(void* self);
QBindingStorage* q_scilexercss_binding_storage2(void* self);
void q_scilexercss_destroyed(void* self);
void q_scilexercss_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexercss_parent(void* self);
bool q_scilexercss_inherits(void* self, const char* classname);
void q_scilexercss_delete_later(void* self);
int32_t q_scilexercss_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexercss_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexercss_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexercss_destroyed1(void* self, void* param1);
void q_scilexercss_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexercss_lexer_id(void* self);
int32_t q_scilexercss_qbase_lexer_id(void* self);
void q_scilexercss_on_lexer_id(void* self, int32_t (*slot)());
const char* q_scilexercss_auto_completion_fillups(void* self);
const char* q_scilexercss_qbase_auto_completion_fillups(void* self);
void q_scilexercss_on_auto_completion_fillups(void* self, const char* (*slot)());
const char** q_scilexercss_auto_completion_word_separators(void* self);
const char** q_scilexercss_qbase_auto_completion_word_separators(void* self);
void q_scilexercss_on_auto_completion_word_separators(void* self, const char** (*slot)());
int32_t q_scilexercss_block_lookback(void* self);
int32_t q_scilexercss_qbase_block_lookback(void* self);
void q_scilexercss_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexercss_block_start_keyword(void* self, int* style);
const char* q_scilexercss_qbase_block_start_keyword(void* self, int* style);
void q_scilexercss_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexercss_brace_style(void* self);
int32_t q_scilexercss_qbase_brace_style(void* self);
void q_scilexercss_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexercss_case_sensitive(void* self);
bool q_scilexercss_qbase_case_sensitive(void* self);
void q_scilexercss_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexercss_color(void* self, int style);
QColor* q_scilexercss_qbase_color(void* self, int style);
void q_scilexercss_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexercss_eol_fill(void* self, int style);
bool q_scilexercss_qbase_eol_fill(void* self, int style);
void q_scilexercss_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexercss_font(void* self, int style);
QFont* q_scilexercss_qbase_font(void* self, int style);
void q_scilexercss_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexercss_indentation_guide_view(void* self);
int32_t q_scilexercss_qbase_indentation_guide_view(void* self);
void q_scilexercss_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexercss_default_style(void* self);
int32_t q_scilexercss_qbase_default_style(void* self);
void q_scilexercss_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexercss_paper(void* self, int style);
QColor* q_scilexercss_qbase_paper(void* self, int style);
void q_scilexercss_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexercss_default_color_with_style(void* self, int style);
QColor* q_scilexercss_qbase_default_color_with_style(void* self, int style);
void q_scilexercss_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
bool q_scilexercss_default_eol_fill(void* self, int style);
bool q_scilexercss_qbase_default_eol_fill(void* self, int style);
void q_scilexercss_on_default_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexercss_default_font_with_style(void* self, int style);
QFont* q_scilexercss_qbase_default_font_with_style(void* self, int style);
void q_scilexercss_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexercss_default_paper_with_style(void* self, int style);
QColor* q_scilexercss_qbase_default_paper_with_style(void* self, int style);
void q_scilexercss_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexercss_set_editor(void* self, void* editor);
void q_scilexercss_qbase_set_editor(void* self, void* editor);
void q_scilexercss_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexercss_style_bits_needed(void* self);
int32_t q_scilexercss_qbase_style_bits_needed(void* self);
void q_scilexercss_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexercss_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercss_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexercss_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexercss_set_color(void* self, void* c, int style);
void q_scilexercss_qbase_set_color(void* self, void* c, int style);
void q_scilexercss_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexercss_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercss_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexercss_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexercss_set_font(void* self, void* f, int style);
void q_scilexercss_qbase_set_font(void* self, void* f, int style);
void q_scilexercss_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexercss_set_paper(void* self, void* c, int style);
void q_scilexercss_qbase_set_paper(void* self, void* c, int style);
void q_scilexercss_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexercss_event(void* self, void* event);
bool q_scilexercss_qbase_event(void* self, void* event);
void q_scilexercss_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexercss_event_filter(void* self, void* watched, void* event);
bool q_scilexercss_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexercss_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexercss_timer_event(void* self, void* event);
void q_scilexercss_qbase_timer_event(void* self, void* event);
void q_scilexercss_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexercss_child_event(void* self, void* event);
void q_scilexercss_qbase_child_event(void* self, void* event);
void q_scilexercss_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexercss_custom_event(void* self, void* event);
void q_scilexercss_qbase_custom_event(void* self, void* event);
void q_scilexercss_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexercss_connect_notify(void* self, void* signal);
void q_scilexercss_qbase_connect_notify(void* self, void* signal);
void q_scilexercss_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexercss_disconnect_notify(void* self, void* signal);
void q_scilexercss_qbase_disconnect_notify(void* self, void* signal);
void q_scilexercss_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexercss_sender(void* self);
QObject* q_scilexercss_qbase_sender(void* self);
void q_scilexercss_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexercss_sender_signal_index(void* self);
int32_t q_scilexercss_qbase_sender_signal_index(void* self);
void q_scilexercss_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexercss_receivers(void* self, const char* signal);
int32_t q_scilexercss_qbase_receivers(void* self, const char* signal);
void q_scilexercss_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexercss_is_signal_connected(void* self, void* signal);
bool q_scilexercss_qbase_is_signal_connected(void* self, void* signal);
void q_scilexercss_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexercss_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexercss.html#types

typedef enum {
    QSCILEXERCSS__DEFAULT = 0,
    QSCILEXERCSS__TAG = 1,
    QSCILEXERCSS__CLASSSELECTOR = 2,
    QSCILEXERCSS__PSEUDOCLASS = 3,
    QSCILEXERCSS__UNKNOWNPSEUDOCLASS = 4,
    QSCILEXERCSS__OPERATOR = 5,
    QSCILEXERCSS__CSS1PROPERTY = 6,
    QSCILEXERCSS__UNKNOWNPROPERTY = 7,
    QSCILEXERCSS__VALUE = 8,
    QSCILEXERCSS__COMMENT = 9,
    QSCILEXERCSS__IDSELECTOR = 10,
    QSCILEXERCSS__IMPORTANT = 11,
    QSCILEXERCSS__ATRULE = 12,
    QSCILEXERCSS__DOUBLEQUOTEDSTRING = 13,
    QSCILEXERCSS__SINGLEQUOTEDSTRING = 14,
    QSCILEXERCSS__CSS2PROPERTY = 15,
    QSCILEXERCSS__ATTRIBUTE = 16,
    QSCILEXERCSS__CSS3PROPERTY = 17,
    QSCILEXERCSS__PSEUDOELEMENT = 18,
    QSCILEXERCSS__EXTENDEDCSSPROPERTY = 19,
    QSCILEXERCSS__EXTENDEDPSEUDOCLASS = 20,
    QSCILEXERCSS__EXTENDEDPSEUDOELEMENT = 21,
    QSCILEXERCSS__MEDIARULE = 22,
    QSCILEXERCSS__VARIABLE = 23
} QsciLexerCSS__;

#endif
