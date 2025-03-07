#pragma once
#ifndef SRCQT6C_LIBQTEXTDOCUMENT_H
#define SRCQT6C_LIBQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracttextdocumentlayout.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqchar.h"
#include "libqevent.h"
#include "libqfont.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpagedpaintdevice.h"
#include "libqpainter.h"
#include "libqrect.h"
#include "libqregularexpression.h"
#include "libqsize.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextcursor.h"
#include "libqtextformat.h"
#include "libqtextoption.h"
#include "libqthread.h"
#include "libqurl.h"
#include "libqvariant.h"

void q_abstractundoitem_undo(void* self);
void q_abstractundoitem_redo(void* self);
void q_abstractundoitem_operator_assign(void* self, void* param1);
void q_abstractundoitem_delete(void* self);

QTextDocument* q_textdocument_new();
QTextDocument* q_textdocument_new2(const char* text);
QTextDocument* q_textdocument_new3(void* parent);
QTextDocument* q_textdocument_new4(const char* text, void* parent);
QMetaObject* q_textdocument_meta_object(void* self);
void* q_textdocument_metacast(void* self, const char* param1);
int32_t q_textdocument_metacall(void* self, int64_t param1, int param2, void* param3);
void q_textdocument_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_textdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textdocument_tr(const char* s);
QTextDocument* q_textdocument_clone(void* self);
bool q_textdocument_is_empty(void* self);
void q_textdocument_clear(void* self);
void q_textdocument_on_clear(void* self, void (*slot)());
void q_textdocument_qbase_clear(void* self);
void q_textdocument_set_undo_redo_enabled(void* self, bool enable);
bool q_textdocument_is_undo_redo_enabled(void* self);
bool q_textdocument_is_undo_available(void* self);
bool q_textdocument_is_redo_available(void* self);
int32_t q_textdocument_available_undo_steps(void* self);
int32_t q_textdocument_available_redo_steps(void* self);
int32_t q_textdocument_revision(void* self);
void q_textdocument_set_document_layout(void* self, void* layout);
QAbstractTextDocumentLayout* q_textdocument_document_layout(void* self);
void q_textdocument_set_meta_information(void* self, int64_t info, const char* param2);
const char* q_textdocument_meta_information(void* self, int64_t info);
const char* q_textdocument_to_html(void* self);
void q_textdocument_set_html(void* self, const char* html);
const char* q_textdocument_to_markdown(void* self);
void q_textdocument_set_markdown(void* self, const char* markdown);
const char* q_textdocument_to_raw_text(void* self);
const char* q_textdocument_to_plain_text(void* self);
void q_textdocument_set_plain_text(void* self, const char* text);
QChar* q_textdocument_character_at(void* self, int pos);
QTextCursor* q_textdocument_find(void* self, const char* subString);
QTextCursor* q_textdocument_find2(void* self, const char* subString, void* cursor);
QTextCursor* q_textdocument_find_with_expr(void* self, void* expr);
QTextCursor* q_textdocument_find3(void* self, void* expr, void* cursor);
QTextFrame* q_textdocument_frame_at(void* self, int pos);
QTextFrame* q_textdocument_root_frame(void* self);
QTextObject* q_textdocument_object(void* self, int objectIndex);
QTextObject* q_textdocument_object_for_format(void* self, void* param1);
QTextBlock* q_textdocument_find_block(void* self, int pos);
QTextBlock* q_textdocument_find_block_by_number(void* self, int blockNumber);
QTextBlock* q_textdocument_find_block_by_line_number(void* self, int blockNumber);
QTextBlock* q_textdocument_begin(void* self);
QTextBlock* q_textdocument_end(void* self);
QTextBlock* q_textdocument_first_block(void* self);
QTextBlock* q_textdocument_last_block(void* self);
void q_textdocument_set_page_size(void* self, void* size);
QSizeF* q_textdocument_page_size(void* self);
void q_textdocument_set_default_font(void* self, void* font);
QFont* q_textdocument_default_font(void* self);
void q_textdocument_set_super_script_baseline(void* self, double baseline);
double q_textdocument_super_script_baseline(void* self);
void q_textdocument_set_sub_script_baseline(void* self, double baseline);
double q_textdocument_sub_script_baseline(void* self);
void q_textdocument_set_baseline_offset(void* self, double baseline);
double q_textdocument_baseline_offset(void* self);
int32_t q_textdocument_page_count(void* self);
bool q_textdocument_is_modified(void* self);
void q_textdocument_print(void* self, void* printer);
QVariant* q_textdocument_resource(void* self, int typeVal, void* name);
void q_textdocument_add_resource(void* self, int typeVal, void* name, void* resource);
libqt_list /* of QTextFormat* */ q_textdocument_all_formats(void* self);
void q_textdocument_mark_contents_dirty(void* self, int from, int length);
void q_textdocument_set_use_design_metrics(void* self, bool b);
bool q_textdocument_use_design_metrics(void* self);
void q_textdocument_set_layout_enabled(void* self, bool b);
bool q_textdocument_is_layout_enabled(void* self);
void q_textdocument_draw_contents(void* self, void* painter);
void q_textdocument_set_text_width(void* self, double width);
double q_textdocument_text_width(void* self);
double q_textdocument_ideal_width(void* self);
double q_textdocument_indent_width(void* self);
void q_textdocument_set_indent_width(void* self, double width);
double q_textdocument_document_margin(void* self);
void q_textdocument_set_document_margin(void* self, double margin);
void q_textdocument_adjust_size(void* self);
QSizeF* q_textdocument_size(void* self);
int32_t q_textdocument_block_count(void* self);
int32_t q_textdocument_line_count(void* self);
int32_t q_textdocument_character_count(void* self);
void q_textdocument_set_default_style_sheet(void* self, const char* sheet);
const char* q_textdocument_default_style_sheet(void* self);
void q_textdocument_undo(void* self, void* cursor);
void q_textdocument_redo(void* self, void* cursor);
void q_textdocument_clear_undo_redo_stacks(void* self);
int32_t q_textdocument_maximum_block_count(void* self);
void q_textdocument_set_maximum_block_count(void* self, int maximum);
QTextOption* q_textdocument_default_text_option(void* self);
void q_textdocument_set_default_text_option(void* self, void* option);
QUrl* q_textdocument_base_url(void* self);
void q_textdocument_set_base_url(void* self, void* url);
int64_t q_textdocument_default_cursor_move_style(void* self);
void q_textdocument_set_default_cursor_move_style(void* self, int64_t style);
void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded);
void q_textdocument_on_contents_change(void* self, void (*slot)(void*, int, int, int));
void q_textdocument_contents_changed(void* self);
void q_textdocument_on_contents_changed(void* self, void (*slot)(void*));
void q_textdocument_undo_available(void* self, bool param1);
void q_textdocument_on_undo_available(void* self, void (*slot)(void*, bool));
void q_textdocument_redo_available(void* self, bool param1);
void q_textdocument_on_redo_available(void* self, void (*slot)(void*, bool));
void q_textdocument_undo_command_added(void* self);
void q_textdocument_on_undo_command_added(void* self, void (*slot)(void*));
void q_textdocument_modification_changed(void* self, bool m);
void q_textdocument_on_modification_changed(void* self, void (*slot)(void*, bool));
void q_textdocument_cursor_position_changed(void* self, void* cursor);
void q_textdocument_on_cursor_position_changed(void* self, void (*slot)(void*, void*));
void q_textdocument_block_count_changed(void* self, int newBlockCount);
void q_textdocument_on_block_count_changed(void* self, void (*slot)(void*, int));
void q_textdocument_base_url_changed(void* self, void* url);
void q_textdocument_on_base_url_changed(void* self, void (*slot)(void*, void*));
void q_textdocument_document_layout_changed(void* self);
void q_textdocument_on_document_layout_changed(void* self, void (*slot)(void*));
void q_textdocument_undo2(void* self);
void q_textdocument_redo2(void* self);
void q_textdocument_append_undo_item(void* self, void* param1);
void q_textdocument_set_modified(void* self);
QTextObject* q_textdocument_create_object(void* self, void* f);
void q_textdocument_on_create_object(void* self, QTextObject* (*slot)(void*, void*));
QTextObject* q_textdocument_qbase_create_object(void* self, void* f);
QVariant* q_textdocument_load_resource(void* self, int typeVal, void* name);
void q_textdocument_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*));
QVariant* q_textdocument_qbase_load_resource(void* self, int typeVal, void* name);
const char* q_textdocument_tr2(const char* s, const char* c);
const char* q_textdocument_tr3(const char* s, const char* c, int n);
QTextDocument* q_textdocument_clone1(void* self, void* parent);
const char* q_textdocument_to_markdown1(void* self, int64_t features);
void q_textdocument_set_markdown2(void* self, const char* markdown, int64_t features);
QTextCursor* q_textdocument_find22(void* self, const char* subString, int from);
QTextCursor* q_textdocument_find32(void* self, const char* subString, int from, int64_t options);
QTextCursor* q_textdocument_find33(void* self, const char* subString, void* cursor, int64_t options);
QTextCursor* q_textdocument_find23(void* self, void* expr, int from);
QTextCursor* q_textdocument_find34(void* self, void* expr, int from, int64_t options);
QTextCursor* q_textdocument_find35(void* self, void* expr, void* cursor, int64_t options);
void q_textdocument_draw_contents2(void* self, void* painter, void* rect);
void q_textdocument_clear_undo_redo_stacks1(void* self, int64_t historyToClear);
void q_textdocument_set_modified1(void* self, bool m);
const char* q_textdocument_object_name(void* self);
void q_textdocument_set_object_name(void* self, const char* name);
bool q_textdocument_is_widget_type(void* self);
bool q_textdocument_is_window_type(void* self);
bool q_textdocument_is_quick_item_type(void* self);
bool q_textdocument_signals_blocked(void* self);
bool q_textdocument_block_signals(void* self, bool b);
QThread* q_textdocument_thread(void* self);
void q_textdocument_move_to_thread(void* self, void* thread);
int32_t q_textdocument_start_timer(void* self, int interval);
void q_textdocument_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textdocument_children(void* self);
void q_textdocument_set_parent(void* self, void* parent);
void q_textdocument_install_event_filter(void* self, void* filterObj);
void q_textdocument_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textdocument_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textdocument_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textdocument_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textdocument_disconnect_with_q_meta_object_connection(void* param1);
void q_textdocument_dump_object_tree(void* self);
void q_textdocument_dump_object_info(void* self);
bool q_textdocument_set_property(void* self, const char* name, void* value);
QVariant* q_textdocument_property(void* self, const char* name);
const char** q_textdocument_dynamic_property_names(void* self);
QBindingStorage* q_textdocument_binding_storage(void* self);
QBindingStorage* q_textdocument_binding_storage2(void* self);
void q_textdocument_destroyed(void* self);
void q_textdocument_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textdocument_parent(void* self);
bool q_textdocument_inherits(void* self, const char* classname);
void q_textdocument_delete_later(void* self);
int32_t q_textdocument_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textdocument_destroyed1(void* self, void* param1);
void q_textdocument_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_textdocument_event(void* self, void* event);
bool q_textdocument_qbase_event(void* self, void* event);
void q_textdocument_on_event(void* self, bool (*slot)(void*, void*));
bool q_textdocument_event_filter(void* self, void* watched, void* event);
bool q_textdocument_qbase_event_filter(void* self, void* watched, void* event);
void q_textdocument_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_textdocument_timer_event(void* self, void* event);
void q_textdocument_qbase_timer_event(void* self, void* event);
void q_textdocument_on_timer_event(void* self, void (*slot)(void*, void*));
void q_textdocument_child_event(void* self, void* event);
void q_textdocument_qbase_child_event(void* self, void* event);
void q_textdocument_on_child_event(void* self, void (*slot)(void*, void*));
void q_textdocument_custom_event(void* self, void* event);
void q_textdocument_qbase_custom_event(void* self, void* event);
void q_textdocument_on_custom_event(void* self, void (*slot)(void*, void*));
void q_textdocument_connect_notify(void* self, void* signal);
void q_textdocument_qbase_connect_notify(void* self, void* signal);
void q_textdocument_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_textdocument_disconnect_notify(void* self, void* signal);
void q_textdocument_qbase_disconnect_notify(void* self, void* signal);
void q_textdocument_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_textdocument_sender(void* self);
QObject* q_textdocument_qbase_sender(void* self);
void q_textdocument_on_sender(void* self, QObject* (*slot)());
int32_t q_textdocument_sender_signal_index(void* self);
int32_t q_textdocument_qbase_sender_signal_index(void* self);
void q_textdocument_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_textdocument_receivers(void* self, const char* signal);
int32_t q_textdocument_qbase_receivers(void* self, const char* signal);
void q_textdocument_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_textdocument_is_signal_connected(void* self, void* signal);
bool q_textdocument_qbase_is_signal_connected(void* self, void* signal);
void q_textdocument_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_textdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qtextdocument.html#types

typedef enum {
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTTITLE = 0,
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTURL = 1,
    QTEXTDOCUMENT_METAINFORMATION_CSSMEDIA = 2
} QTextDocument__MetaInformation;

typedef enum {
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNNOHTML = 96,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTCOMMONMARK = 0,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTGITHUB = 20236
} QTextDocument__MarkdownFeature;

typedef enum {
    QTEXTDOCUMENT_FINDFLAG_FINDBACKWARD = 1,
    QTEXTDOCUMENT_FINDFLAG_FINDCASESENSITIVELY = 2,
    QTEXTDOCUMENT_FINDFLAG_FINDWHOLEWORDS = 4
} QTextDocument__FindFlag;

typedef enum {
    QTEXTDOCUMENT_RESOURCETYPE_UNKNOWNRESOURCE = 0,
    QTEXTDOCUMENT_RESOURCETYPE_HTMLRESOURCE = 1,
    QTEXTDOCUMENT_RESOURCETYPE_IMAGERESOURCE = 2,
    QTEXTDOCUMENT_RESOURCETYPE_STYLESHEETRESOURCE = 3,
    QTEXTDOCUMENT_RESOURCETYPE_MARKDOWNRESOURCE = 4,
    QTEXTDOCUMENT_RESOURCETYPE_USERRESOURCE = 100
} QTextDocument__ResourceType;

typedef enum {
    QTEXTDOCUMENT_STACKS_UNDOSTACK = 1,
    QTEXTDOCUMENT_STACKS_REDOSTACK = 2,
    QTEXTDOCUMENT_STACKS_UNDOANDREDOSTACKS = 3
} QTextDocument__Stacks;

#endif
