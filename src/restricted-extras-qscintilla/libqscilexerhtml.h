#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERHTML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERHTML_H

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

QsciLexerHTML* q_scilexerhtml_new();
QsciLexerHTML* q_scilexerhtml_new2(void* parent);
QMetaObject* q_scilexerhtml_meta_object(void* self);
void* q_scilexerhtml_metacast(void* self, const char* param1);
int32_t q_scilexerhtml_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scilexerhtml_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scilexerhtml_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scilexerhtml_tr(const char* s);
const char* q_scilexerhtml_language(void* self);
const char* q_scilexerhtml_lexer(void* self);
const char* q_scilexerhtml_auto_completion_fillups(void* self);
const char* q_scilexerhtml_word_characters(void* self);
QColor* q_scilexerhtml_default_color(void* self, int style);
bool q_scilexerhtml_default_eol_fill(void* self, int style);
QFont* q_scilexerhtml_default_font(void* self, int style);
QColor* q_scilexerhtml_default_paper(void* self, int style);
const char* q_scilexerhtml_keywords(void* self, int set);
const char* q_scilexerhtml_description(void* self, int style);
void q_scilexerhtml_refresh_properties(void* self);
bool q_scilexerhtml_case_sensitive_tags(void* self);
void q_scilexerhtml_set_django_templates(void* self, bool enabled);
bool q_scilexerhtml_django_templates(void* self);
bool q_scilexerhtml_fold_compact(void* self);
bool q_scilexerhtml_fold_preprocessor(void* self);
void q_scilexerhtml_set_fold_script_comments(void* self, bool fold);
bool q_scilexerhtml_fold_script_comments(void* self);
void q_scilexerhtml_set_fold_script_heredocs(void* self, bool fold);
bool q_scilexerhtml_fold_script_heredocs(void* self);
void q_scilexerhtml_set_mako_templates(void* self, bool enabled);
bool q_scilexerhtml_mako_templates(void* self);
void q_scilexerhtml_set_fold_compact(void* self, bool fold);
void q_scilexerhtml_on_set_fold_compact(void* self, void (*slot)(void*, bool));
void q_scilexerhtml_qbase_set_fold_compact(void* self, bool fold);
void q_scilexerhtml_set_fold_preprocessor(void* self, bool fold);
void q_scilexerhtml_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));
void q_scilexerhtml_qbase_set_fold_preprocessor(void* self, bool fold);
void q_scilexerhtml_set_case_sensitive_tags(void* self, bool sens);
void q_scilexerhtml_on_set_case_sensitive_tags(void* self, void (*slot)(void*, bool));
void q_scilexerhtml_qbase_set_case_sensitive_tags(void* self, bool sens);
bool q_scilexerhtml_read_properties(void* self, void* qs, const char* prefix);
void q_scilexerhtml_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerhtml_qbase_read_properties(void* self, void* qs, const char* prefix);
bool q_scilexerhtml_write_properties(void* self, void* qs, const char* prefix);
void q_scilexerhtml_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));
bool q_scilexerhtml_qbase_write_properties(void* self, void* qs, const char* prefix);
const char* q_scilexerhtml_tr2(const char* s, const char* c);
const char* q_scilexerhtml_tr3(const char* s, const char* c, int n);
QsciAbstractAPIs* q_scilexerhtml_apis(void* self);
int32_t q_scilexerhtml_auto_indent_style(void* self);
QsciScintilla* q_scilexerhtml_editor(void* self);
void q_scilexerhtml_set_a_p_is(void* self, void* apis);
void q_scilexerhtml_set_default_color(void* self, void* c);
void q_scilexerhtml_set_default_font(void* self, void* f);
void q_scilexerhtml_set_default_paper(void* self, void* c);
bool q_scilexerhtml_read_settings(void* self, void* qs);
bool q_scilexerhtml_write_settings(void* self, void* qs);
void q_scilexerhtml_color_changed(void* self, void* c, int style);
void q_scilexerhtml_on_color_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerhtml_eol_fill_changed(void* self, bool eolfilled, int style);
void q_scilexerhtml_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));
void q_scilexerhtml_font_changed(void* self, void* f, int style);
void q_scilexerhtml_on_font_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerhtml_paper_changed(void* self, void* c, int style);
void q_scilexerhtml_on_paper_changed(void* self, void (*slot)(void*, void*, int));
void q_scilexerhtml_property_changed(void* self, const char* prop, const char* val);
void q_scilexerhtml_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));
bool q_scilexerhtml_read_settings2(void* self, void* qs, const char* prefix);
bool q_scilexerhtml_write_settings2(void* self, void* qs, const char* prefix);
const char* q_scilexerhtml_object_name(void* self);
void q_scilexerhtml_set_object_name(void* self, const char* name);
bool q_scilexerhtml_is_widget_type(void* self);
bool q_scilexerhtml_is_window_type(void* self);
bool q_scilexerhtml_is_quick_item_type(void* self);
bool q_scilexerhtml_signals_blocked(void* self);
bool q_scilexerhtml_block_signals(void* self, bool b);
QThread* q_scilexerhtml_thread(void* self);
void q_scilexerhtml_move_to_thread(void* self, void* thread);
int32_t q_scilexerhtml_start_timer(void* self, int interval);
void q_scilexerhtml_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scilexerhtml_children(void* self);
void q_scilexerhtml_set_parent(void* self, void* parent);
void q_scilexerhtml_install_event_filter(void* self, void* filterObj);
void q_scilexerhtml_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scilexerhtml_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scilexerhtml_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scilexerhtml_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scilexerhtml_disconnect_with_q_meta_object_connection(void* param1);
void q_scilexerhtml_dump_object_tree(void* self);
void q_scilexerhtml_dump_object_info(void* self);
bool q_scilexerhtml_set_property(void* self, const char* name, void* value);
QVariant* q_scilexerhtml_property(void* self, const char* name);
const char** q_scilexerhtml_dynamic_property_names(void* self);
QBindingStorage* q_scilexerhtml_binding_storage(void* self);
QBindingStorage* q_scilexerhtml_binding_storage2(void* self);
void q_scilexerhtml_destroyed(void* self);
void q_scilexerhtml_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scilexerhtml_parent(void* self);
bool q_scilexerhtml_inherits(void* self, const char* classname);
void q_scilexerhtml_delete_later(void* self);
int32_t q_scilexerhtml_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scilexerhtml_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scilexerhtml_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scilexerhtml_destroyed1(void* self, void* param1);
void q_scilexerhtml_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_scilexerhtml_lexer_id(void* self);
int32_t q_scilexerhtml_qbase_lexer_id(void* self);
void q_scilexerhtml_on_lexer_id(void* self, int32_t (*slot)());
const char** q_scilexerhtml_auto_completion_word_separators(void* self);
const char** q_scilexerhtml_qbase_auto_completion_word_separators(void* self);
void q_scilexerhtml_on_auto_completion_word_separators(void* self, const char** (*slot)());
const char* q_scilexerhtml_block_end(void* self, int* style);
const char* q_scilexerhtml_qbase_block_end(void* self, int* style);
void q_scilexerhtml_on_block_end(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerhtml_block_lookback(void* self);
int32_t q_scilexerhtml_qbase_block_lookback(void* self);
void q_scilexerhtml_on_block_lookback(void* self, int32_t (*slot)());
const char* q_scilexerhtml_block_start(void* self, int* style);
const char* q_scilexerhtml_qbase_block_start(void* self, int* style);
void q_scilexerhtml_on_block_start(void* self, const char* (*slot)(void*, int*));
const char* q_scilexerhtml_block_start_keyword(void* self, int* style);
const char* q_scilexerhtml_qbase_block_start_keyword(void* self, int* style);
void q_scilexerhtml_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));
int32_t q_scilexerhtml_brace_style(void* self);
int32_t q_scilexerhtml_qbase_brace_style(void* self);
void q_scilexerhtml_on_brace_style(void* self, int32_t (*slot)());
bool q_scilexerhtml_case_sensitive(void* self);
bool q_scilexerhtml_qbase_case_sensitive(void* self);
void q_scilexerhtml_on_case_sensitive(void* self, bool (*slot)());
QColor* q_scilexerhtml_color(void* self, int style);
QColor* q_scilexerhtml_qbase_color(void* self, int style);
void q_scilexerhtml_on_color(void* self, QColor* (*slot)(void*, int));
bool q_scilexerhtml_eol_fill(void* self, int style);
bool q_scilexerhtml_qbase_eol_fill(void* self, int style);
void q_scilexerhtml_on_eol_fill(void* self, bool (*slot)(void*, int));
QFont* q_scilexerhtml_font(void* self, int style);
QFont* q_scilexerhtml_qbase_font(void* self, int style);
void q_scilexerhtml_on_font(void* self, QFont* (*slot)(void*, int));
int32_t q_scilexerhtml_indentation_guide_view(void* self);
int32_t q_scilexerhtml_qbase_indentation_guide_view(void* self);
void q_scilexerhtml_on_indentation_guide_view(void* self, int32_t (*slot)());
int32_t q_scilexerhtml_default_style(void* self);
int32_t q_scilexerhtml_qbase_default_style(void* self);
void q_scilexerhtml_on_default_style(void* self, int32_t (*slot)());
QColor* q_scilexerhtml_paper(void* self, int style);
QColor* q_scilexerhtml_qbase_paper(void* self, int style);
void q_scilexerhtml_on_paper(void* self, QColor* (*slot)(void*, int));
QColor* q_scilexerhtml_default_color_with_style(void* self, int style);
QColor* q_scilexerhtml_qbase_default_color_with_style(void* self, int style);
void q_scilexerhtml_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));
QFont* q_scilexerhtml_default_font_with_style(void* self, int style);
QFont* q_scilexerhtml_qbase_default_font_with_style(void* self, int style);
void q_scilexerhtml_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));
QColor* q_scilexerhtml_default_paper_with_style(void* self, int style);
QColor* q_scilexerhtml_qbase_default_paper_with_style(void* self, int style);
void q_scilexerhtml_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));
void q_scilexerhtml_set_editor(void* self, void* editor);
void q_scilexerhtml_qbase_set_editor(void* self, void* editor);
void q_scilexerhtml_on_set_editor(void* self, void (*slot)(void*, void*));
int32_t q_scilexerhtml_style_bits_needed(void* self);
int32_t q_scilexerhtml_qbase_style_bits_needed(void* self);
void q_scilexerhtml_on_style_bits_needed(void* self, int32_t (*slot)());
void q_scilexerhtml_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerhtml_qbase_set_auto_indent_style(void* self, int autoindentstyle);
void q_scilexerhtml_on_set_auto_indent_style(void* self, void (*slot)(void*, int));
void q_scilexerhtml_set_color(void* self, void* c, int style);
void q_scilexerhtml_qbase_set_color(void* self, void* c, int style);
void q_scilexerhtml_on_set_color(void* self, void (*slot)(void*, void*, int));
void q_scilexerhtml_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerhtml_qbase_set_eol_fill(void* self, bool eoffill, int style);
void q_scilexerhtml_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));
void q_scilexerhtml_set_font(void* self, void* f, int style);
void q_scilexerhtml_qbase_set_font(void* self, void* f, int style);
void q_scilexerhtml_on_set_font(void* self, void (*slot)(void*, void*, int));
void q_scilexerhtml_set_paper(void* self, void* c, int style);
void q_scilexerhtml_qbase_set_paper(void* self, void* c, int style);
void q_scilexerhtml_on_set_paper(void* self, void (*slot)(void*, void*, int));
bool q_scilexerhtml_event(void* self, void* event);
bool q_scilexerhtml_qbase_event(void* self, void* event);
void q_scilexerhtml_on_event(void* self, bool (*slot)(void*, void*));
bool q_scilexerhtml_event_filter(void* self, void* watched, void* event);
bool q_scilexerhtml_qbase_event_filter(void* self, void* watched, void* event);
void q_scilexerhtml_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scilexerhtml_timer_event(void* self, void* event);
void q_scilexerhtml_qbase_timer_event(void* self, void* event);
void q_scilexerhtml_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scilexerhtml_child_event(void* self, void* event);
void q_scilexerhtml_qbase_child_event(void* self, void* event);
void q_scilexerhtml_on_child_event(void* self, void (*slot)(void*, void*));
void q_scilexerhtml_custom_event(void* self, void* event);
void q_scilexerhtml_qbase_custom_event(void* self, void* event);
void q_scilexerhtml_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scilexerhtml_connect_notify(void* self, void* signal);
void q_scilexerhtml_qbase_connect_notify(void* self, void* signal);
void q_scilexerhtml_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scilexerhtml_disconnect_notify(void* self, void* signal);
void q_scilexerhtml_qbase_disconnect_notify(void* self, void* signal);
void q_scilexerhtml_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scilexerhtml_sender(void* self);
QObject* q_scilexerhtml_qbase_sender(void* self);
void q_scilexerhtml_on_sender(void* self, QObject* (*slot)());
int32_t q_scilexerhtml_sender_signal_index(void* self);
int32_t q_scilexerhtml_qbase_sender_signal_index(void* self);
void q_scilexerhtml_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scilexerhtml_receivers(void* self, const char* signal);
int32_t q_scilexerhtml_qbase_receivers(void* self, const char* signal);
void q_scilexerhtml_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scilexerhtml_is_signal_connected(void* self, void* signal);
bool q_scilexerhtml_qbase_is_signal_connected(void* self, void* signal);
void q_scilexerhtml_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scilexerhtml_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerhtml.html#types

typedef enum {
    QSCILEXERHTML__DEFAULT = 0,
    QSCILEXERHTML__TAG = 1,
    QSCILEXERHTML__UNKNOWNTAG = 2,
    QSCILEXERHTML__ATTRIBUTE = 3,
    QSCILEXERHTML__UNKNOWNATTRIBUTE = 4,
    QSCILEXERHTML__HTMLNUMBER = 5,
    QSCILEXERHTML__HTMLDOUBLEQUOTEDSTRING = 6,
    QSCILEXERHTML__HTMLSINGLEQUOTEDSTRING = 7,
    QSCILEXERHTML__OTHERINTAG = 8,
    QSCILEXERHTML__HTMLCOMMENT = 9,
    QSCILEXERHTML__ENTITY = 10,
    QSCILEXERHTML__XMLTAGEND = 11,
    QSCILEXERHTML__XMLSTART = 12,
    QSCILEXERHTML__XMLEND = 13,
    QSCILEXERHTML__SCRIPT = 14,
    QSCILEXERHTML__ASPATSTART = 15,
    QSCILEXERHTML__ASPSTART = 16,
    QSCILEXERHTML__CDATA = 17,
    QSCILEXERHTML__PHPSTART = 18,
    QSCILEXERHTML__HTMLVALUE = 19,
    QSCILEXERHTML__ASPXCCOMMENT = 20,
    QSCILEXERHTML__SGMLDEFAULT = 21,
    QSCILEXERHTML__SGMLCOMMAND = 22,
    QSCILEXERHTML__SGMLPARAMETER = 23,
    QSCILEXERHTML__SGMLDOUBLEQUOTEDSTRING = 24,
    QSCILEXERHTML__SGMLSINGLEQUOTEDSTRING = 25,
    QSCILEXERHTML__SGMLERROR = 26,
    QSCILEXERHTML__SGMLSPECIAL = 27,
    QSCILEXERHTML__SGMLENTITY = 28,
    QSCILEXERHTML__SGMLCOMMENT = 29,
    QSCILEXERHTML__SGMLPARAMETERCOMMENT = 30,
    QSCILEXERHTML__SGMLBLOCKDEFAULT = 31,
    QSCILEXERHTML__JAVASCRIPTSTART = 40,
    QSCILEXERHTML__JAVASCRIPTDEFAULT = 41,
    QSCILEXERHTML__JAVASCRIPTCOMMENT = 42,
    QSCILEXERHTML__JAVASCRIPTCOMMENTLINE = 43,
    QSCILEXERHTML__JAVASCRIPTCOMMENTDOC = 44,
    QSCILEXERHTML__JAVASCRIPTNUMBER = 45,
    QSCILEXERHTML__JAVASCRIPTWORD = 46,
    QSCILEXERHTML__JAVASCRIPTKEYWORD = 47,
    QSCILEXERHTML__JAVASCRIPTDOUBLEQUOTEDSTRING = 48,
    QSCILEXERHTML__JAVASCRIPTSINGLEQUOTEDSTRING = 49,
    QSCILEXERHTML__JAVASCRIPTSYMBOL = 50,
    QSCILEXERHTML__JAVASCRIPTUNCLOSEDSTRING = 51,
    QSCILEXERHTML__JAVASCRIPTREGEX = 52,
    QSCILEXERHTML__ASPJAVASCRIPTSTART = 55,
    QSCILEXERHTML__ASPJAVASCRIPTDEFAULT = 56,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENT = 57,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTLINE = 58,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTDOC = 59,
    QSCILEXERHTML__ASPJAVASCRIPTNUMBER = 60,
    QSCILEXERHTML__ASPJAVASCRIPTWORD = 61,
    QSCILEXERHTML__ASPJAVASCRIPTKEYWORD = 62,
    QSCILEXERHTML__ASPJAVASCRIPTDOUBLEQUOTEDSTRING = 63,
    QSCILEXERHTML__ASPJAVASCRIPTSINGLEQUOTEDSTRING = 64,
    QSCILEXERHTML__ASPJAVASCRIPTSYMBOL = 65,
    QSCILEXERHTML__ASPJAVASCRIPTUNCLOSEDSTRING = 66,
    QSCILEXERHTML__ASPJAVASCRIPTREGEX = 67,
    QSCILEXERHTML__VBSCRIPTSTART = 70,
    QSCILEXERHTML__VBSCRIPTDEFAULT = 71,
    QSCILEXERHTML__VBSCRIPTCOMMENT = 72,
    QSCILEXERHTML__VBSCRIPTNUMBER = 73,
    QSCILEXERHTML__VBSCRIPTKEYWORD = 74,
    QSCILEXERHTML__VBSCRIPTSTRING = 75,
    QSCILEXERHTML__VBSCRIPTIDENTIFIER = 76,
    QSCILEXERHTML__VBSCRIPTUNCLOSEDSTRING = 77,
    QSCILEXERHTML__ASPVBSCRIPTSTART = 80,
    QSCILEXERHTML__ASPVBSCRIPTDEFAULT = 81,
    QSCILEXERHTML__ASPVBSCRIPTCOMMENT = 82,
    QSCILEXERHTML__ASPVBSCRIPTNUMBER = 83,
    QSCILEXERHTML__ASPVBSCRIPTKEYWORD = 84,
    QSCILEXERHTML__ASPVBSCRIPTSTRING = 85,
    QSCILEXERHTML__ASPVBSCRIPTIDENTIFIER = 86,
    QSCILEXERHTML__ASPVBSCRIPTUNCLOSEDSTRING = 87,
    QSCILEXERHTML__PYTHONSTART = 90,
    QSCILEXERHTML__PYTHONDEFAULT = 91,
    QSCILEXERHTML__PYTHONCOMMENT = 92,
    QSCILEXERHTML__PYTHONNUMBER = 93,
    QSCILEXERHTML__PYTHONDOUBLEQUOTEDSTRING = 94,
    QSCILEXERHTML__PYTHONSINGLEQUOTEDSTRING = 95,
    QSCILEXERHTML__PYTHONKEYWORD = 96,
    QSCILEXERHTML__PYTHONTRIPLESINGLEQUOTEDSTRING = 97,
    QSCILEXERHTML__PYTHONTRIPLEDOUBLEQUOTEDSTRING = 98,
    QSCILEXERHTML__PYTHONCLASSNAME = 99,
    QSCILEXERHTML__PYTHONFUNCTIONMETHODNAME = 100,
    QSCILEXERHTML__PYTHONOPERATOR = 101,
    QSCILEXERHTML__PYTHONIDENTIFIER = 102,
    QSCILEXERHTML__ASPPYTHONSTART = 105,
    QSCILEXERHTML__ASPPYTHONDEFAULT = 106,
    QSCILEXERHTML__ASPPYTHONCOMMENT = 107,
    QSCILEXERHTML__ASPPYTHONNUMBER = 108,
    QSCILEXERHTML__ASPPYTHONDOUBLEQUOTEDSTRING = 109,
    QSCILEXERHTML__ASPPYTHONSINGLEQUOTEDSTRING = 110,
    QSCILEXERHTML__ASPPYTHONKEYWORD = 111,
    QSCILEXERHTML__ASPPYTHONTRIPLESINGLEQUOTEDSTRING = 112,
    QSCILEXERHTML__ASPPYTHONTRIPLEDOUBLEQUOTEDSTRING = 113,
    QSCILEXERHTML__ASPPYTHONCLASSNAME = 114,
    QSCILEXERHTML__ASPPYTHONFUNCTIONMETHODNAME = 115,
    QSCILEXERHTML__ASPPYTHONOPERATOR = 116,
    QSCILEXERHTML__ASPPYTHONIDENTIFIER = 117,
    QSCILEXERHTML__PHPDEFAULT = 118,
    QSCILEXERHTML__PHPDOUBLEQUOTEDSTRING = 119,
    QSCILEXERHTML__PHPSINGLEQUOTEDSTRING = 120,
    QSCILEXERHTML__PHPKEYWORD = 121,
    QSCILEXERHTML__PHPNUMBER = 122,
    QSCILEXERHTML__PHPVARIABLE = 123,
    QSCILEXERHTML__PHPCOMMENT = 124,
    QSCILEXERHTML__PHPCOMMENTLINE = 125,
    QSCILEXERHTML__PHPDOUBLEQUOTEDVARIABLE = 126,
    QSCILEXERHTML__PHPOPERATOR = 127
} QsciLexerHTML__;

#endif
