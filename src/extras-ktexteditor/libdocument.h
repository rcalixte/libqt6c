#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBDOCUMENT_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-mark.html)

/// [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
///
/// @param self KTextEditor__Mark*
///
int32_t k_texteditor__mark_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
///
/// @param self KTextEditor__Mark*
/// @param line int
///
void k_texteditor__mark_set_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
///
/// @param self KTextEditor__Mark*
///
uint32_t k_texteditor__mark_type(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
///
/// @param self KTextEditor__Mark*
/// @param type uint32_t
///
void k_texteditor__mark_set_type(void* self, uint32_t type);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Mark*
///
void k_texteditor__mark_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Document*
///
const QMetaObject* k_texteditor__document_meta_object(void* self);

/// @param self KTextEditor__Document*
/// @param param1 const char*
///
void* k_texteditor__document_metacast(void* self, const char* param1);

/// @param self KTextEditor__Document*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__document_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__document_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#createView)
///
/// @param self KTextEditor__Document*
/// @param parent QWidget*
/// @param mainWindow KTextEditor__MainWindow*
///
KTextEditor__View* k_texteditor__document_create_view(void* self, void* parent, void* mainWindow);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#views)
///
/// @param self KTextEditor__Document*
///
/// @return libqt_list of KTextEditor__View*
///
libqt_list k_texteditor__document_views(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#viewCreated)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param view KTextEditor__View*
///
void k_texteditor__document_view_created(void* self, void* document, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#viewCreated)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__View* view)
///
void k_texteditor__document_on_view_created(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_document_name(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#mimeType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_mime_type(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#checksum)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
char* k_texteditor__document_checksum(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_document_name_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_document_name_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_document_url_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_document_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_modified_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_modified_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_read_write_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_read_write_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEncoding)
///
/// @param self KTextEditor__Document*
/// @param encoding const char*
///
bool k_texteditor__document_set_encoding(void* self, const char* encoding);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#encoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_encoding(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentReload)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_document_reload(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSave)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_document_save(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSaveAs)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_document_save_as(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#openingError)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_opening_error(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param saveAs bool
///
void k_texteditor__document_document_saved_or_uploaded(void* self, void* document, bool saveAs);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, bool saveAs)
///
void k_texteditor__document_on_document_saved_or_uploaded(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_about_to_close(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_about_to_close(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_about_to_reload(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_about_to_reload(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_reloaded(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_reloaded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_about_to_save(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_about_to_save(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEditingTransactionRunning)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_editing_transaction_running(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_text(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param block bool
///
const char* k_texteditor__document_text2(void* self, void* range, bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#characterAt)
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
///
QChar* k_texteditor__document_character_at(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#wordAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param cursor KTextEditor__Cursor*
///
const char* k_texteditor__document_word_at(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#wordRangeAt)
///
/// @param self KTextEditor__Document*
/// @param cursor KTextEditor__Cursor*
///
KTextEditor__Range* k_texteditor__document_word_range_at(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isValidTextPosition)
///
/// @param self KTextEditor__Document*
/// @param cursor KTextEditor__Cursor*
///
bool k_texteditor__document_is_valid_text_position(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textLines)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param block bool
///
const char** k_texteditor__document_text_lines(void* self, void* range, bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#line)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param line int
///
const char* k_texteditor__document_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lines)
///
/// @param self KTextEditor__Document*
///
int32_t k_texteditor__document_lines(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineModified)
///
/// @param self KTextEditor__Document*
/// @param line int
///
bool k_texteditor__document_is_line_modified(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineSaved)
///
/// @param self KTextEditor__Document*
/// @param line int
///
bool k_texteditor__document_is_line_saved(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineTouched)
///
/// @param self KTextEditor__Document*
/// @param line int
///
bool k_texteditor__document_is_line_touched(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentEnd)
///
/// @param self KTextEditor__Document*
///
KTextEditor__Cursor* k_texteditor__document_document_end(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentRange)
///
/// @param self KTextEditor__Document*
///
KTextEditor__Range* k_texteditor__document_document_range(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#totalCharacters)
///
/// @param self KTextEditor__Document*
///
int64_t k_texteditor__document_total_characters(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEmpty)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineLength)
///
/// @param self KTextEditor__Document*
/// @param line int
///
int32_t k_texteditor__document_line_length(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#endOfLine)
///
/// @param self KTextEditor__Document*
/// @param line int
///
KTextEditor__Cursor* k_texteditor__document_end_of_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
///
/// @param self KTextEditor__Document*
/// @param text const char*
///
bool k_texteditor__document_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
///
/// @param self KTextEditor__Document*
/// @param text const char**
///
bool k_texteditor__document_set_text2(void* self, const char* text[static 1]);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#clear)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_clear(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertText)
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
/// @param text const char*
/// @param block bool
///
bool k_texteditor__document_insert_text(void* self, void* position, const char* text, bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertText)
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
/// @param text const char**
/// @param block bool
///
bool k_texteditor__document_insert_text2(void* self, void* position, const char* text[static 1], bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#replaceText)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param text const char*
/// @param block bool
///
bool k_texteditor__document_replace_text(void* self, void* range, const char* text, bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#replaceText)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param text const char**
/// @param block bool
///
bool k_texteditor__document_replace_text2(void* self, void* range, const char* text[static 1], bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeText)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param block bool
///
bool k_texteditor__document_remove_text(void* self, void* range, bool block);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLine)
///
/// @param self KTextEditor__Document*
/// @param line int
/// @param text const char*
///
bool k_texteditor__document_insert_line(void* self, int line, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLines)
///
/// @param self KTextEditor__Document*
/// @param line int
/// @param text const char**
///
bool k_texteditor__document_insert_lines(void* self, int line, const char* text[static 1]);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeLine)
///
/// @param self KTextEditor__Document*
/// @param line int
///
bool k_texteditor__document_remove_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#searchText)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param pattern const char*
///
/// @return libqt_list of KTextEditor__Range*
///
libqt_list k_texteditor__document_search_text(void* self, void* range, const char* pattern);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#cursorToOffset)
///
/// @param self KTextEditor__Document*
/// @param c KTextEditor__Cursor*
///
int64_t k_texteditor__document_cursor_to_offset(void* self, void* c);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#offsetToCursor)
///
/// @param self KTextEditor__Document*
/// @param offset int64_t
///
KTextEditor__Cursor* k_texteditor__document_offset_to_cursor(void* self, int64_t offset);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_editing_started(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_editing_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_editing_finished(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_editing_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineWrapped)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param position KTextEditor__Cursor*
///
void k_texteditor__document_line_wrapped(void* self, void* document, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineWrapped)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position)
///
void k_texteditor__document_on_line_wrapped(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param line int
///
void k_texteditor__document_line_unwrapped(void* self, void* document, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, int line)
///
void k_texteditor__document_on_line_unwrapped(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textInserted)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param position KTextEditor__Cursor*
/// @param text const char*
///
void k_texteditor__document_text_inserted(void* self, void* document, void* position, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textInserted)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position, const char* text)
///
void k_texteditor__document_on_text_inserted(void* self, void (*callback)(void*, void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textRemoved)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param text const char*
///
void k_texteditor__document_text_removed(void* self, void* document, void* range, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textRemoved)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Range* range, const char* text)
///
void k_texteditor__document_on_text_removed(void* self, void (*callback)(void*, void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_text_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_text_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#defaultStyleAt)
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
///
/// @return enum KSyntaxHighlighting__Theme__TextStyle
///
int32_t k_texteditor__document_default_style_at(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#mode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingMode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_highlighting_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#embeddedHighlightingModes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
const char** k_texteditor__document_embedded_highlighting_modes(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
///
const char* k_texteditor__document_highlighting_mode_at(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
const char** k_texteditor__document_modes(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
const char** k_texteditor__document_highlighting_modes(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMode)
///
/// @param self KTextEditor__Document*
/// @param name const char*
///
bool k_texteditor__document_set_mode(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setHighlightingMode)
///
/// @param self KTextEditor__Document*
/// @param name const char*
///
bool k_texteditor__document_set_highlighting_mode(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeSection)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param index int
///
const char* k_texteditor__document_highlighting_mode_section(void* self, int index);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeSection)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param index int
///
const char* k_texteditor__document_mode_section(void* self, int index);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_mode_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_mode_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_highlighting_mode_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_highlighting_mode_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#print)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_print(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#printPreview)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_print_preview(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#postMessage)
///
/// @param self KTextEditor__Document*
/// @param message KTextEditor__Message*
///
bool k_texteditor__document_post_message(void* self, void* message);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#readSessionConfig)
///
/// @param self KTextEditor__Document*
/// @param config KConfigGroup*
/// @param flags libqt_list /* set of const char* */ flags
///
void k_texteditor__document_read_session_config(void* self, void* config, libqt_list flags);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#writeSessionConfig)
///
/// @param self KTextEditor__Document*
/// @param config KConfigGroup*
/// @param flags libqt_list /* set of const char* */ flags
///
void k_texteditor__document_write_session_config(void* self, void* config, libqt_list flags);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#isDataRecoveryAvailable)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_data_recovery_available(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#recoverData)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_recover_data(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#discardDataRecovery)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_discard_data_recovery(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_config_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_config_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#newMovingCursor)
///
/// @param self KTextEditor__Document*
/// @param position KTextEditor__Cursor*
/// @param insertBehavior enum KTextEditor__MovingCursor__InsertBehavior
///
KTextEditor__MovingCursor* k_texteditor__document_new_moving_cursor(void* self, void* position, int32_t insertBehavior);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#newMovingRange)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param insertBehaviors flag of enum KTextEditor__MovingRange__InsertBehavior
/// @param emptyBehavior enum KTextEditor__MovingRange__EmptyBehavior
///
KTextEditor__MovingRange* k_texteditor__document_new_moving_range(void* self, void* range, int32_t insertBehaviors, int32_t emptyBehavior);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#revision)
///
/// @param self KTextEditor__Document*
///
long long k_texteditor__document_revision(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lastSavedRevision)
///
/// @param self KTextEditor__Document*
///
long long k_texteditor__document_last_saved_revision(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#lockRevision)
///
/// @param self KTextEditor__Document*
/// @param revision long long
///
void k_texteditor__document_lock_revision(void* self, long long revision);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#unlockRevision)
///
/// @param self KTextEditor__Document*
/// @param revision long long
///
void k_texteditor__document_unlock_revision(void* self, long long revision);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformCursor)
///
/// @param self KTextEditor__Document*
/// @param cursor KTextEditor__Cursor*
/// @param insertBehavior enum KTextEditor__MovingCursor__InsertBehavior
/// @param fromRevision long long
/// @param toRevision long long
///
void k_texteditor__document_transform_cursor(void* self, void* cursor, int32_t insertBehavior, long long fromRevision, long long toRevision);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformCursor)
///
/// @param self KTextEditor__Document*
/// @param line int*
/// @param column int*
/// @param insertBehavior enum KTextEditor__MovingCursor__InsertBehavior
/// @param fromRevision long long
/// @param toRevision long long
///
void k_texteditor__document_transform_cursor2(void* self, int* line, int* column, int32_t insertBehavior, long long fromRevision, long long toRevision);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformRange)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param insertBehaviors flag of enum KTextEditor__MovingRange__InsertBehavior
/// @param emptyBehavior enum KTextEditor__MovingRange__EmptyBehavior
/// @param fromRevision long long
/// @param toRevision long long
///
void k_texteditor__document_transform_range(void* self, void* range, int32_t insertBehaviors, int32_t emptyBehavior, long long fromRevision, long long toRevision);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_about_to_delete_moving_interface_content(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_about_to_delete_moving_interface_content(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_about_to_invalidate_moving_interface_content(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_about_to_invalidate_moving_interface_content(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#configKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
const char** k_texteditor__document_config_keys(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#configValue)
///
/// @param self KTextEditor__Document*
/// @param key const char*
///
QVariant* k_texteditor__document_config_value(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setConfigValue)
///
/// @param self KTextEditor__Document*
/// @param key const char*
/// @param value QVariant*
///
void k_texteditor__document_set_config_value(void* self, const char* key, void* value);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDisk)
///
/// @param self KTextEditor__Document*
/// @param reason enum KTextEditor__Document__ModifiedOnDiskReason
///
void k_texteditor__document_set_modified_on_disk(void* self, int32_t reason);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDiskWarning)
///
/// @param self KTextEditor__Document*
/// @param on bool
///
void k_texteditor__document_set_modified_on_disk_warning(void* self, bool on);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param isModified bool
/// @param reason enum KTextEditor__Document__ModifiedOnDiskReason
///
void k_texteditor__document_modified_on_disk(void* self, void* document, bool isModified, int32_t reason);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, bool isModified, enum KTextEditor__Document__ModifiedOnDiskReason reason)
///
void k_texteditor__document_on_modified_on_disk(void* self, void (*callback)(void*, void*, bool, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#mark)
///
/// @param self KTextEditor__Document*
/// @param line int
///
uint32_t k_texteditor__document_mark(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMark)
///
/// @param self KTextEditor__Document*
/// @param line int
/// @param markType uint32_t
///
void k_texteditor__document_set_mark(void* self, int line, uint32_t markType);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMark)
///
/// @param self KTextEditor__Document*
/// @param line int
///
void k_texteditor__document_clear_mark(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#addMark)
///
/// @param self KTextEditor__Document*
/// @param line int
/// @param markType uint32_t
///
void k_texteditor__document_add_mark(void* self, int line, uint32_t markType);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeMark)
///
/// @param self KTextEditor__Document*
/// @param line int
/// @param markType uint32_t
///
void k_texteditor__document_remove_mark(void* self, int line, uint32_t markType);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#marks)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to KTextEditor__Mark*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((KTextEditor::Mark*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KTextEditor__Document*
///
/// @return libqt_map of int to KTextEditor__Mark*
///
libqt_map k_texteditor__document_marks(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMarks)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_clear_marks(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#reservedMarkersCount)
///
int32_t k_texteditor__document_reserved_markers_count();

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMarkDescription)
///
/// @param self KTextEditor__Document*
/// @param mark enum KTextEditor__Document__MarkTypes
/// @param text const char*
///
void k_texteditor__document_set_mark_description(void* self, int32_t mark, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
/// @param mark enum KTextEditor__Document__MarkTypes
///
const char* k_texteditor__document_mark_description(void* self, int32_t mark);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEditableMarks)
///
/// @param self KTextEditor__Document*
/// @param markMask uint32_t
///
void k_texteditor__document_set_editable_marks(void* self, uint32_t markMask);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#editableMarks)
///
/// @param self KTextEditor__Document*
///
uint32_t k_texteditor__document_editable_marks(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMarkIcon)
///
/// @param self KTextEditor__Document*
/// @param markType enum KTextEditor__Document__MarkTypes
/// @param icon QIcon*
///
void k_texteditor__document_set_mark_icon(void* self, int32_t markType, void* icon);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markIcon)
///
/// @param self KTextEditor__Document*
/// @param markType enum KTextEditor__Document__MarkTypes
///
QIcon* k_texteditor__document_mark_icon(void* self, int32_t markType);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
///
void k_texteditor__document_marks_changed(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document)
///
void k_texteditor__document_on_marks_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param mark KTextEditor__Mark*
/// @param action enum KTextEditor__Document__MarkChangeAction
///
void k_texteditor__document_mark_changed(void* self, void* document, void* mark, int32_t action);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, enum KTextEditor__Document__MarkChangeAction action)
///
void k_texteditor__document_on_mark_changed(void* self, void (*callback)(void*, void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param mark KTextEditor__Mark*
/// @param position QPoint*
/// @param handled bool*
///
void k_texteditor__document_mark_tool_tip_requested(void* self, void* document, void* mark, void* position, bool* handled);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* position, bool* handled)
///
void k_texteditor__document_on_mark_tool_tip_requested(void* self, void (*callback)(void*, void*, void*, void*, bool*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param mark KTextEditor__Mark*
/// @param pos QPoint*
/// @param handled bool*
///
void k_texteditor__document_mark_context_menu_requested(void* self, void* document, void* mark, void* pos, bool* handled);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* pos, bool* handled)
///
void k_texteditor__document_on_mark_context_menu_requested(void* self, void (*callback)(void*, void*, void*, void*, bool*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
///
/// @param self KTextEditor__Document*
/// @param document KTextEditor__Document*
/// @param mark KTextEditor__Mark*
/// @param handled bool*
///
void k_texteditor__document_mark_clicked(void* self, void* document, void* mark, bool* handled);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, bool* handled)
///
void k_texteditor__document_on_mark_clicked(void* self, void (*callback)(void*, void*, void*, bool*));

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#setAnnotationModel)
///
/// @param self KTextEditor__Document*
/// @param model KTextEditor__AnnotationModel*
///
void k_texteditor__document_set_annotation_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#annotationModel)
///
/// @param self KTextEditor__Document*
///
KTextEditor__AnnotationModel* k_texteditor__document_annotation_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__document_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__document_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ktexteditor-document.html#searchText)
///
/// @param self KTextEditor__Document*
/// @param range KTextEditor__Range*
/// @param pattern const char*
/// @param options flag of enum KTextEditor__SearchOption
///
/// @return libqt_list of KTextEditor__Range*
///
libqt_list k_texteditor__document_search_text3(void* self, void* range, const char* pattern, const int32_t options);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_read_write(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
///
/// @param self KTextEditor__Document*
/// @param readwrite bool
///
void k_texteditor__document_set_read_write(void* self, bool readwrite);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_modified(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_query_close(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_close_url(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// @param self KTextEditor__Document*
/// @param promptToSave bool
///
bool k_texteditor__document_close_url2(void* self, bool promptToSave);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
///
/// @param self KTextEditor__Document*
/// @param url QUrl*
///
bool k_texteditor__document_save_as(void* self, void* url);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// @param self KTextEditor__Document*
/// @param modified bool
///
void k_texteditor__document_set_modified(void* self, bool modified);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
///
/// @param self KTextEditor__Document*
/// @param handled bool*
/// @param abortClosing bool*
///
void k_texteditor__document_sig_query_close(void* self, bool* handled, bool* abortClosing);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, bool* handled, bool* abortClosing)
///
void k_texteditor__document_on_sig_query_close(void* self, void (*callback)(void*, bool*, bool*));

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_set_modified2(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_save(void* self);

/// Inherited from KParts::ReadWritePart
///
/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_wait_save_complete(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
///
/// @param self KTextEditor__Document*
/// @param show bool
///
void k_texteditor__document_set_progress_info_enabled(void* self, bool show);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_progress_info_enabled(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// @param self KTextEditor__Document*
/// @param url QUrl*
///
bool k_texteditor__document_open_url(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
///
/// @param self KTextEditor__Document*
///
QUrl* k_texteditor__document_url(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
///
/// @param self KTextEditor__Document*
///
KParts__NavigationExtension* k_texteditor__document_navigation_extension(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
///
/// @param self KTextEditor__Document*
/// @param arguments KParts__OpenUrlArguments*
///
void k_texteditor__document_set_arguments(void* self, void* arguments);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
///
/// @param self KTextEditor__Document*
///
KParts__OpenUrlArguments* k_texteditor__document_arguments(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
///
/// @param self KTextEditor__Document*
/// @param mimeType const char*
/// @param url QUrl*
///
bool k_texteditor__document_open_stream(void* self, const char* mimeType, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
///
/// @param self KTextEditor__Document*
/// @param data const char*
///
bool k_texteditor__document_write_stream(void* self, const char* data);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_close_stream(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KTextEditor__Document*
/// @param job KIO__Job*
///
void k_texteditor__document_started(void* self, void* job);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, KIO__Job* job)
///
void k_texteditor__document_on_started(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_completed(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self)
///
void k_texteditor__document_on_completed(void* self, void (*callback)(void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_completed_with_pending_action(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self)
///
void k_texteditor__document_on_completed_with_pending_action(void* self, void (*callback)(void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KTextEditor__Document*
/// @param errMsg const char*
///
void k_texteditor__document_canceled(void* self, const char* errMsg);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, const char* errMsg)
///
void k_texteditor__document_on_canceled(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KTextEditor__Document*
/// @param url QUrl*
///
void k_texteditor__document_url_changed(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, QUrl* url)
///
void k_texteditor__document_on_url_changed(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// @param self KTextEditor__Document*
///
QWidget* k_texteditor__document_widget(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// @param self KTextEditor__Document*
/// @param manager KParts__PartManager*
///
void k_texteditor__document_set_manager(void* self, void* manager);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#manager)
///
/// @param self KTextEditor__Document*
///
KParts__PartManager* k_texteditor__document_manager(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
///
/// @param self KTextEditor__Document*
/// @param autoDeleteWidget bool
///
void k_texteditor__document_set_auto_delete_widget(void* self, bool autoDeleteWidget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
///
/// @param self KTextEditor__Document*
/// @param autoDeletePart bool
///
void k_texteditor__document_set_auto_delete_part(void* self, bool autoDeletePart);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// @param self KTextEditor__Document*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_texteditor__document_hit_test(void* self, void* widget, void* globalPos);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
///
/// @param self KTextEditor__Document*
///
KPluginMetaData* k_texteditor__document_meta_data(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KTextEditor__Document*
/// @param caption const char*
///
void k_texteditor__document_set_window_caption(void* self, const char* caption);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, const char* caption)
///
void k_texteditor__document_on_set_window_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KTextEditor__Document*
/// @param text const char*
///
void k_texteditor__document_set_status_bar_text(void* self, const char* text);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, const char* text)
///
void k_texteditor__document_on_set_status_bar_text(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KTextEditor__Document*
/// @param event QEvent*
///
bool k_texteditor__document_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__Document*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__document_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Document*
/// @param name char*
///
void k_texteditor__document_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Document*
/// @param b bool
///
bool k_texteditor__document_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Document*
///
QThread* k_texteditor__document_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Document*
/// @param thread QThread*
///
bool k_texteditor__document_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Document*
/// @param interval int
///
int32_t k_texteditor__document_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Document*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__document_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Document*
/// @param id int
///
void k_texteditor__document_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Document*
/// @param id enum Qt__TimerId
///
void k_texteditor__document_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Document*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__document_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Document*
/// @param parent QObject*
///
void k_texteditor__document_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Document*
/// @param filterObj QObject*
///
void k_texteditor__document_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Document*
/// @param obj QObject*
///
void k_texteditor__document_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__document_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__document_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Document*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__document_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__document_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__document_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
///
bool k_texteditor__document_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
/// @param receiver QObject*
///
bool k_texteditor__document_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__document_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Document*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__document_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Document*
/// @param name const char*
///
QVariant* k_texteditor__document_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Document*
///
const char** k_texteditor__document_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Document*
///
QBindingStorage* k_texteditor__document_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Document*
///
const QBindingStorage* k_texteditor__document_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self)
///
void k_texteditor__document_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Document*
///
QObject* k_texteditor__document_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Document*
/// @param classname const char*
///
bool k_texteditor__document_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Document*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__document_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Document*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__document_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__document_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__document_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Document*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__document_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
/// @param signal const char*
///
bool k_texteditor__document_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__document_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__document_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__Document*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__document_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Document*
/// @param param1 QObject*
///
void k_texteditor__document_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, QObject* param1)
///
void k_texteditor__document_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
///
/// @param self KTextEditor__Document*
/// @param object QObject*
///
void k_texteditor__document_set_part_object(void* self, void* object);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
///
/// @param self KTextEditor__Document*
///
QObject* k_texteditor__document_part_object(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KTextEditor__Document*
/// @param name const char*
///
QAction* k_texteditor__document_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KTextEditor__Document*
/// @param element QDomElement*
///
QAction* k_texteditor__document_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// @param self KTextEditor__Document*
///
KActionCollection* k_texteditor__document_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// @param self KTextEditor__Document*
///
QDomDocument* k_texteditor__document_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Document*
///
const char* k_texteditor__document_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KTextEditor__Document*
/// @param doc QDomDocument*
///
void k_texteditor__document_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KTextEditor__Document*
///
QDomDocument* k_texteditor__document_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KTextEditor__Document*
/// @param factory KXMLGUIFactory*
///
void k_texteditor__document_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KTextEditor__Document*
///
KXMLGUIFactory* k_texteditor__document_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KTextEditor__Document*
///
KXMLGUIClient* k_texteditor__document_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KTextEditor__Document*
/// @param child KXMLGUIClient*
///
void k_texteditor__document_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KTextEditor__Document*
/// @param child KXMLGUIClient*
///
void k_texteditor__document_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KTextEditor__Document*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_texteditor__document_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KTextEditor__Document*
/// @param builder KXMLGUIBuilder*
///
void k_texteditor__document_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KTextEditor__Document*
///
KXMLGUIBuilder* k_texteditor__document_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KTextEditor__Document*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_texteditor__document_plug_action_list(void* self, const char* name, libqt_list actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KTextEditor__Document*
/// @param name const char*
///
void k_texteditor__document_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_texteditor__document_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KTextEditor__Document*
/// @param state const char*
/// @param action const char*
///
void k_texteditor__document_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KTextEditor__Document*
/// @param state const char*
/// @param action const char*
///
void k_texteditor__document_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KTextEditor__Document*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_texteditor__document_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KTextEditor__Document*
/// @param param1 QWidget*
///
void k_texteditor__document_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KTextEditor__Document*
/// @param param1 QWidget*
///
void k_texteditor__document_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KTextEditor__Document*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_texteditor__document_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_texteditor__document_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KTextEditor__Document*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_texteditor__document_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Document*
/// @param callback void func(KTextEditor__Document* self, const char* objectName)
///
void k_texteditor__document_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Document*
///
void k_texteditor__document_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html)

/// k_texteditor__document__editingtransaction_new constructs a new KTextEditor::Document::EditingTransaction object.
///
/// @param document KTextEditor__Document*
///
KTextEditor__Document__EditingTransaction* k_texteditor__document__editingtransaction_new(void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#start)
///
/// @param self KTextEditor__Document__EditingTransaction*
///
void k_texteditor__document__editingtransaction_start(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#finish)
///
/// @param self KTextEditor__Document__EditingTransaction*
///
void k_texteditor__document__editingtransaction_finish(void* self);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Document__EditingTransaction*
///
void k_texteditor__document__editingtransaction_delete(void* self);

/// [Upstream resources](https://api.kde.org/document.html#public-types)

typedef enum {
    KTEXTEDITOR_SEARCHOPTION_DEFAULT = 0,
    KTEXTEDITOR_SEARCHOPTION_REGEX = 2,
    KTEXTEDITOR_SEARCHOPTION_CASEINSENSITIVE = 16,
    KTEXTEDITOR_SEARCHOPTION_BACKWARDS = 32,
    KTEXTEDITOR_SEARCHOPTION_ESCAPESEQUENCES = 1024,
    KTEXTEDITOR_SEARCHOPTION_WHOLEWORDS = 2048,
    KTEXTEDITOR_SEARCHOPTION_MAXSEARCHOPTION = -2147483648
} KTextEditor__SearchOption;

/// [Upstream resources](https://api.kde.org/document.html#public-types)

typedef enum {
    KTEXTEDITOR_DOCUMENT_MODIFIEDONDISKREASON_ONDISKUNMODIFIED = 0,
    KTEXTEDITOR_DOCUMENT_MODIFIEDONDISKREASON_ONDISKMODIFIED = 1,
    KTEXTEDITOR_DOCUMENT_MODIFIEDONDISKREASON_ONDISKCREATED = 2,
    KTEXTEDITOR_DOCUMENT_MODIFIEDONDISKREASON_ONDISKDELETED = 3
} KTextEditor__Document__ModifiedOnDiskReason;

/// [Upstream resources](https://api.kde.org/document.html#public-types)

typedef enum {
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE01 = 1,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE02 = 2,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE03 = 4,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE04 = 8,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE05 = 16,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE06 = 32,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE07 = 64,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE08 = 128,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE09 = 256,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE10 = 512,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE11 = 1024,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE12 = 2048,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE13 = 4096,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE14 = 8192,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE15 = 16384,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE16 = 32768,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE17 = 65536,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE18 = 131072,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE19 = 262144,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE20 = 524288,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE21 = 1048576,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE22 = 2097152,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE23 = 4194304,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE24 = 8388608,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE25 = 16777216,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE26 = 33554432,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE27 = 67108864,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE28 = 134217728,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE29 = 268435456,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE30 = 536870912,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE31 = 1073741824,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_MARKTYPE32 = -2147483648,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_BOOKMARK = 1,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_BREAKPOINTACTIVE = 2,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_BREAKPOINTREACHED = 4,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_BREAKPOINTDISABLED = 8,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_EXECUTION = 16,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_WARNING = 32,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_ERROR = 64,
    KTEXTEDITOR_DOCUMENT_MARKTYPES_SEARCHMATCH = -2147483648
} KTextEditor__Document__MarkTypes;

/// [Upstream resources](https://api.kde.org/document.html#public-types)

typedef enum {
    KTEXTEDITOR_DOCUMENT_MARKCHANGEACTION_MARKADDED = 0,
    KTEXTEDITOR_DOCUMENT_MARKCHANGEACTION_MARKREMOVED = 1
} KTextEditor__Document__MarkChangeAction;

#endif
