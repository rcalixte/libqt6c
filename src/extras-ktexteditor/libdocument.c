#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../extras-kparts/libpart.hpp"
#include "../extras-kparts/libpartbase.hpp"
#include "../extras-kparts/libreadonlypart.hpp"
#include "../extras-kparts/libreadwritepart.hpp"
#include "libannotationinterface.hpp"
#include "libcursor.hpp"
#include "libmainwindow_1.hpp"
#include "libmessage_1.hpp"
#include "libmovingcursor.hpp"
#include "libmovingrange.hpp"
#include "librange.hpp"
#include "libview.hpp"
#include "../extras-kxmlgui/libkxmlguiclient.hpp"
#include "../libqchar.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libdocument.hpp"
#include "libdocument.h"

int32_t k_texteditor__mark_line(void* self) {
    return KTextEditor__Mark_Line((KTextEditor__Mark*)self);
}

void k_texteditor__mark_set_line(void* self, int line) {
    KTextEditor__Mark_SetLine((KTextEditor__Mark*)self, line);
}

uint32_t k_texteditor__mark_type(void* self) {
    return KTextEditor__Mark_Type((KTextEditor__Mark*)self);
}

void k_texteditor__mark_set_type(void* self, uint32_t type) {
    KTextEditor__Mark_SetType((KTextEditor__Mark*)self, type);
}

void k_texteditor__mark_delete(void* self) {
    KTextEditor__Mark_Delete((KTextEditor__Mark*)(self));
}

const QMetaObject* k_texteditor__document_meta_object(void* self) {
    return KTextEditor__Document_MetaObject((KTextEditor__Document*)self);
}

void* k_texteditor__document_metacast(void* self, const char* param1) {
    return KTextEditor__Document_Metacast((KTextEditor__Document*)self, param1);
}

int32_t k_texteditor__document_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Document_Metacall((KTextEditor__Document*)self, param1, param2, param3);
}

const char* k_texteditor__document_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__View* k_texteditor__document_create_view(void* self, void* parent, void* mainWindow) {
    return KTextEditor__Document_CreateView((KTextEditor__Document*)self, (QWidget*)parent, (KTextEditor__MainWindow*)mainWindow);
}

libqt_list /* of KTextEditor__View* */ k_texteditor__document_views(void* self) {
    libqt_list _arr = KTextEditor__Document_Views((KTextEditor__Document*)self);
    return _arr;
}

void k_texteditor__document_view_created(void* self, void* document, void* view) {
    KTextEditor__Document_ViewCreated((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__View*)view);
}

void k_texteditor__document_on_view_created(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__Document_Connect_ViewCreated((KTextEditor__Document*)self, (intptr_t)callback);
}

const char* k_texteditor__document_document_name(void* self) {
    libqt_string _str = KTextEditor__Document_DocumentName((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_mime_type(void* self) {
    libqt_string _str = KTextEditor__Document_MimeType((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_texteditor__document_checksum(void* self) {
    libqt_string _str = KTextEditor__Document_Checksum((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_document_name_changed(void* self, void* document) {
    KTextEditor__Document_DocumentNameChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_document_name_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_DocumentNameChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_document_url_changed(void* self, void* document) {
    KTextEditor__Document_DocumentUrlChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_document_url_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_DocumentUrlChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_modified_changed(void* self, void* document) {
    KTextEditor__Document_ModifiedChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_modified_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_ModifiedChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_read_write_changed(void* self, void* document) {
    KTextEditor__Document_ReadWriteChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_read_write_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_ReadWriteChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

bool k_texteditor__document_set_encoding(void* self, const char* encoding) {
    return KTextEditor__Document_SetEncoding((KTextEditor__Document*)self, qstring(encoding));
}

const char* k_texteditor__document_encoding(void* self) {
    libqt_string _str = KTextEditor__Document_Encoding((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__document_document_reload(void* self) {
    return KTextEditor__Document_DocumentReload((KTextEditor__Document*)self);
}

bool k_texteditor__document_document_save(void* self) {
    return KTextEditor__Document_DocumentSave((KTextEditor__Document*)self);
}

bool k_texteditor__document_document_save_as(void* self) {
    return KTextEditor__Document_DocumentSaveAs((KTextEditor__Document*)self);
}

bool k_texteditor__document_opening_error(void* self) {
    return KTextEditor__Document_OpeningError((KTextEditor__Document*)self);
}

void k_texteditor__document_document_saved_or_uploaded(void* self, void* document, bool saveAs) {
    KTextEditor__Document_DocumentSavedOrUploaded((KTextEditor__Document*)self, (KTextEditor__Document*)document, saveAs);
}

void k_texteditor__document_on_document_saved_or_uploaded(void* self, void (*callback)(void*, void*, bool)) {
    KTextEditor__Document_Connect_DocumentSavedOrUploaded((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_about_to_close(void* self, void* document) {
    KTextEditor__Document_AboutToClose((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_about_to_close(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_AboutToClose((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_about_to_reload(void* self, void* document) {
    KTextEditor__Document_AboutToReload((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_about_to_reload(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_AboutToReload((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_reloaded(void* self, void* document) {
    KTextEditor__Document_Reloaded((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_reloaded(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_Reloaded((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_about_to_save(void* self, void* document) {
    KTextEditor__Document_AboutToSave((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_about_to_save(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_AboutToSave((KTextEditor__Document*)self, (intptr_t)callback);
}

bool k_texteditor__document_is_editing_transaction_running(void* self) {
    return KTextEditor__Document_IsEditingTransactionRunning((KTextEditor__Document*)self);
}

const char* k_texteditor__document_text(void* self) {
    libqt_string _str = KTextEditor__Document_Text((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_text2(void* self, void* range, bool block) {
    libqt_string _str = KTextEditor__Document_Text2((KTextEditor__Document*)self, (KTextEditor__Range*)range, block);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QChar* k_texteditor__document_character_at(void* self, void* position) {
    return KTextEditor__Document_CharacterAt((KTextEditor__Document*)self, (KTextEditor__Cursor*)position);
}

const char* k_texteditor__document_word_at(void* self, void* cursor) {
    libqt_string _str = KTextEditor__Document_WordAt((KTextEditor__Document*)self, (KTextEditor__Cursor*)cursor);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__Range* k_texteditor__document_word_range_at(void* self, void* cursor) {
    return KTextEditor__Document_WordRangeAt((KTextEditor__Document*)self, (KTextEditor__Cursor*)cursor);
}

bool k_texteditor__document_is_valid_text_position(void* self, void* cursor) {
    return KTextEditor__Document_IsValidTextPosition((KTextEditor__Document*)self, (KTextEditor__Cursor*)cursor);
}

const char** k_texteditor__document_text_lines(void* self, void* range, bool block) {
    libqt_list _arr = KTextEditor__Document_TextLines((KTextEditor__Document*)self, (KTextEditor__Range*)range, block);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_text_lines");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_texteditor__document_line(void* self, int line) {
    libqt_string _str = KTextEditor__Document_Line((KTextEditor__Document*)self, line);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_texteditor__document_lines(void* self) {
    return KTextEditor__Document_Lines((KTextEditor__Document*)self);
}

bool k_texteditor__document_is_line_modified(void* self, int line) {
    return KTextEditor__Document_IsLineModified((KTextEditor__Document*)self, line);
}

bool k_texteditor__document_is_line_saved(void* self, int line) {
    return KTextEditor__Document_IsLineSaved((KTextEditor__Document*)self, line);
}

bool k_texteditor__document_is_line_touched(void* self, int line) {
    return KTextEditor__Document_IsLineTouched((KTextEditor__Document*)self, line);
}

KTextEditor__Cursor* k_texteditor__document_document_end(void* self) {
    return KTextEditor__Document_DocumentEnd((KTextEditor__Document*)self);
}

KTextEditor__Range* k_texteditor__document_document_range(void* self) {
    return KTextEditor__Document_DocumentRange((KTextEditor__Document*)self);
}

int64_t k_texteditor__document_total_characters(void* self) {
    return KTextEditor__Document_TotalCharacters((KTextEditor__Document*)self);
}

bool k_texteditor__document_is_empty(void* self) {
    return KTextEditor__Document_IsEmpty((KTextEditor__Document*)self);
}

int32_t k_texteditor__document_line_length(void* self, int line) {
    return KTextEditor__Document_LineLength((KTextEditor__Document*)self, line);
}

KTextEditor__Cursor* k_texteditor__document_end_of_line(void* self, int line) {
    return KTextEditor__Document_EndOfLine((KTextEditor__Document*)self, line);
}

bool k_texteditor__document_set_text(void* self, const char* text) {
    return KTextEditor__Document_SetText((KTextEditor__Document*)self, qstring(text));
}

bool k_texteditor__document_set_text2(void* self, const char* text[static 1]) {
    size_t text_len = libqt_strv_length(text);
    libqt_string* text_qstr = (libqt_string*)malloc(text_len * sizeof(libqt_string));
    if (text_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_set_text2");
        abort();
    }
    for (size_t i = 0; i < text_len; ++i) {
        text_qstr[i] = qstring(text[i]);
    }
    libqt_list text_list = qlist(text_qstr, text_len);
    bool _out = KTextEditor__Document_SetText2((KTextEditor__Document*)self, text_list);
    free(text_qstr);
    return _out;
}

bool k_texteditor__document_clear(void* self) {
    return KTextEditor__Document_Clear((KTextEditor__Document*)self);
}

bool k_texteditor__document_insert_text(void* self, void* position, const char* text, bool block) {
    return KTextEditor__Document_InsertText((KTextEditor__Document*)self, (KTextEditor__Cursor*)position, qstring(text), block);
}

bool k_texteditor__document_insert_text2(void* self, void* position, const char* text[static 1], bool block) {
    size_t text_len = libqt_strv_length(text);
    libqt_string* text_qstr = (libqt_string*)malloc(text_len * sizeof(libqt_string));
    if (text_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_insert_text2");
        abort();
    }
    for (size_t i = 0; i < text_len; ++i) {
        text_qstr[i] = qstring(text[i]);
    }
    libqt_list text_list = qlist(text_qstr, text_len);
    bool _out = KTextEditor__Document_InsertText2((KTextEditor__Document*)self, (KTextEditor__Cursor*)position, text_list, block);
    free(text_qstr);
    return _out;
}

bool k_texteditor__document_replace_text(void* self, void* range, const char* text, bool block) {
    return KTextEditor__Document_ReplaceText((KTextEditor__Document*)self, (KTextEditor__Range*)range, qstring(text), block);
}

bool k_texteditor__document_replace_text2(void* self, void* range, const char* text[static 1], bool block) {
    size_t text_len = libqt_strv_length(text);
    libqt_string* text_qstr = (libqt_string*)malloc(text_len * sizeof(libqt_string));
    if (text_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_replace_text2");
        abort();
    }
    for (size_t i = 0; i < text_len; ++i) {
        text_qstr[i] = qstring(text[i]);
    }
    libqt_list text_list = qlist(text_qstr, text_len);
    bool _out = KTextEditor__Document_ReplaceText2((KTextEditor__Document*)self, (KTextEditor__Range*)range, text_list, block);
    free(text_qstr);
    return _out;
}

bool k_texteditor__document_remove_text(void* self, void* range, bool block) {
    return KTextEditor__Document_RemoveText((KTextEditor__Document*)self, (KTextEditor__Range*)range, block);
}

bool k_texteditor__document_insert_line(void* self, int line, const char* text) {
    return KTextEditor__Document_InsertLine((KTextEditor__Document*)self, line, qstring(text));
}

bool k_texteditor__document_insert_lines(void* self, int line, const char* text[static 1]) {
    size_t text_len = libqt_strv_length(text);
    libqt_string* text_qstr = (libqt_string*)malloc(text_len * sizeof(libqt_string));
    if (text_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_insert_lines");
        abort();
    }
    for (size_t i = 0; i < text_len; ++i) {
        text_qstr[i] = qstring(text[i]);
    }
    libqt_list text_list = qlist(text_qstr, text_len);
    bool _out = KTextEditor__Document_InsertLines((KTextEditor__Document*)self, line, text_list);
    free(text_qstr);
    return _out;
}

bool k_texteditor__document_remove_line(void* self, int line) {
    return KTextEditor__Document_RemoveLine((KTextEditor__Document*)self, line);
}

libqt_list /* of KTextEditor__Range* */ k_texteditor__document_search_text(void* self, void* range, const char* pattern) {
    libqt_list _arr = KTextEditor__Document_SearchText((KTextEditor__Document*)self, (KTextEditor__Range*)range, qstring(pattern));
    return _arr;
}

int64_t k_texteditor__document_cursor_to_offset(void* self, void* c) {
    return KTextEditor__Document_CursorToOffset((KTextEditor__Document*)self, (KTextEditor__Cursor*)c);
}

KTextEditor__Cursor* k_texteditor__document_offset_to_cursor(void* self, int64_t offset) {
    return KTextEditor__Document_OffsetToCursor((KTextEditor__Document*)self, offset);
}

void k_texteditor__document_editing_started(void* self, void* document) {
    KTextEditor__Document_EditingStarted((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_editing_started(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_EditingStarted((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_editing_finished(void* self, void* document) {
    KTextEditor__Document_EditingFinished((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_editing_finished(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_EditingFinished((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_line_wrapped(void* self, void* document, void* position) {
    KTextEditor__Document_LineWrapped((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Cursor*)position);
}

void k_texteditor__document_on_line_wrapped(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__Document_Connect_LineWrapped((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_line_unwrapped(void* self, void* document, int line) {
    KTextEditor__Document_LineUnwrapped((KTextEditor__Document*)self, (KTextEditor__Document*)document, line);
}

void k_texteditor__document_on_line_unwrapped(void* self, void (*callback)(void*, void*, int)) {
    KTextEditor__Document_Connect_LineUnwrapped((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_text_inserted(void* self, void* document, void* position, const char* text) {
    KTextEditor__Document_TextInserted((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Cursor*)position, qstring(text));
}

void k_texteditor__document_on_text_inserted(void* self, void (*callback)(void*, void*, void*, const char*)) {
    KTextEditor__Document_Connect_TextInserted((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_text_removed(void* self, void* document, void* range, const char* text) {
    KTextEditor__Document_TextRemoved((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Range*)range, qstring(text));
}

void k_texteditor__document_on_text_removed(void* self, void (*callback)(void*, void*, void*, const char*)) {
    KTextEditor__Document_Connect_TextRemoved((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_text_changed(void* self, void* document) {
    KTextEditor__Document_TextChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_text_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_TextChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

int32_t k_texteditor__document_default_style_at(void* self, void* position) {
    return KTextEditor__Document_DefaultStyleAt((KTextEditor__Document*)self, (KTextEditor__Cursor*)position);
}

const char* k_texteditor__document_mode(void* self) {
    libqt_string _str = KTextEditor__Document_Mode((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_highlighting_mode(void* self) {
    libqt_string _str = KTextEditor__Document_HighlightingMode((KTextEditor__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_texteditor__document_embedded_highlighting_modes(void* self) {
    libqt_list _arr = KTextEditor__Document_EmbeddedHighlightingModes((KTextEditor__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_embedded_highlighting_modes");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_texteditor__document_highlighting_mode_at(void* self, void* position) {
    libqt_string _str = KTextEditor__Document_HighlightingModeAt((KTextEditor__Document*)self, (KTextEditor__Cursor*)position);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_texteditor__document_modes(void* self) {
    libqt_list _arr = KTextEditor__Document_Modes((KTextEditor__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_modes");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_texteditor__document_highlighting_modes(void* self) {
    libqt_list _arr = KTextEditor__Document_HighlightingModes((KTextEditor__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_highlighting_modes");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool k_texteditor__document_set_mode(void* self, const char* name) {
    return KTextEditor__Document_SetMode((KTextEditor__Document*)self, qstring(name));
}

bool k_texteditor__document_set_highlighting_mode(void* self, const char* name) {
    return KTextEditor__Document_SetHighlightingMode((KTextEditor__Document*)self, qstring(name));
}

const char* k_texteditor__document_highlighting_mode_section(void* self, int index) {
    libqt_string _str = KTextEditor__Document_HighlightingModeSection((KTextEditor__Document*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_mode_section(void* self, int index) {
    libqt_string _str = KTextEditor__Document_ModeSection((KTextEditor__Document*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_mode_changed(void* self, void* document) {
    KTextEditor__Document_ModeChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_mode_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_ModeChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_highlighting_mode_changed(void* self, void* document) {
    KTextEditor__Document_HighlightingModeChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_highlighting_mode_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_HighlightingModeChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

bool k_texteditor__document_print(void* self) {
    return KTextEditor__Document_Print((KTextEditor__Document*)self);
}

void k_texteditor__document_print_preview(void* self) {
    KTextEditor__Document_PrintPreview((KTextEditor__Document*)self);
}

bool k_texteditor__document_post_message(void* self, void* message) {
    return KTextEditor__Document_PostMessage((KTextEditor__Document*)self, (KTextEditor__Message*)message);
}

void k_texteditor__document_read_session_config(void* self, void* config, libqt_list /* set of const char* */ flags) {
    KTextEditor__Document_ReadSessionConfig((KTextEditor__Document*)self, (KConfigGroup*)config, flags);
}

void k_texteditor__document_write_session_config(void* self, void* config, libqt_list /* set of const char* */ flags) {
    KTextEditor__Document_WriteSessionConfig((KTextEditor__Document*)self, (KConfigGroup*)config, flags);
}

bool k_texteditor__document_is_data_recovery_available(void* self) {
    return KTextEditor__Document_IsDataRecoveryAvailable((KTextEditor__Document*)self);
}

void k_texteditor__document_recover_data(void* self) {
    KTextEditor__Document_RecoverData((KTextEditor__Document*)self);
}

void k_texteditor__document_discard_data_recovery(void* self) {
    KTextEditor__Document_DiscardDataRecovery((KTextEditor__Document*)self);
}

void k_texteditor__document_config_changed(void* self, void* document) {
    KTextEditor__Document_ConfigChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_config_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_ConfigChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

KTextEditor__MovingCursor* k_texteditor__document_new_moving_cursor(void* self, void* position, int32_t insertBehavior) {
    return KTextEditor__Document_NewMovingCursor((KTextEditor__Document*)self, (KTextEditor__Cursor*)position, insertBehavior);
}

KTextEditor__MovingRange* k_texteditor__document_new_moving_range(void* self, void* range, int32_t insertBehaviors, int32_t emptyBehavior) {
    return KTextEditor__Document_NewMovingRange((KTextEditor__Document*)self, (KTextEditor__Range*)range, insertBehaviors, emptyBehavior);
}

long long k_texteditor__document_revision(void* self) {
    return KTextEditor__Document_Revision((KTextEditor__Document*)self);
}

long long k_texteditor__document_last_saved_revision(void* self) {
    return KTextEditor__Document_LastSavedRevision((KTextEditor__Document*)self);
}

void k_texteditor__document_lock_revision(void* self, long long revision) {
    KTextEditor__Document_LockRevision((KTextEditor__Document*)self, revision);
}

void k_texteditor__document_unlock_revision(void* self, long long revision) {
    KTextEditor__Document_UnlockRevision((KTextEditor__Document*)self, revision);
}

void k_texteditor__document_transform_cursor(void* self, void* cursor, int32_t insertBehavior, long long fromRevision, long long toRevision) {
    KTextEditor__Document_TransformCursor((KTextEditor__Document*)self, (KTextEditor__Cursor*)cursor, insertBehavior, fromRevision, toRevision);
}

void k_texteditor__document_transform_cursor2(void* self, int* line, int* column, int32_t insertBehavior, long long fromRevision, long long toRevision) {
    KTextEditor__Document_TransformCursor2((KTextEditor__Document*)self, line, column, insertBehavior, fromRevision, toRevision);
}

void k_texteditor__document_transform_range(void* self, void* range, int32_t insertBehaviors, int32_t emptyBehavior, long long fromRevision, long long toRevision) {
    KTextEditor__Document_TransformRange((KTextEditor__Document*)self, (KTextEditor__Range*)range, insertBehaviors, emptyBehavior, fromRevision, toRevision);
}

void k_texteditor__document_about_to_delete_moving_interface_content(void* self, void* document) {
    KTextEditor__Document_AboutToDeleteMovingInterfaceContent((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_about_to_delete_moving_interface_content(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_about_to_invalidate_moving_interface_content(void* self, void* document) {
    KTextEditor__Document_AboutToInvalidateMovingInterfaceContent((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_about_to_invalidate_moving_interface_content(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent((KTextEditor__Document*)self, (intptr_t)callback);
}

const char** k_texteditor__document_config_keys(void* self) {
    libqt_list _arr = KTextEditor__Document_ConfigKeys((KTextEditor__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_config_keys");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QVariant* k_texteditor__document_config_value(void* self, const char* key) {
    return KTextEditor__Document_ConfigValue((KTextEditor__Document*)self, qstring(key));
}

void k_texteditor__document_set_config_value(void* self, const char* key, void* value) {
    KTextEditor__Document_SetConfigValue((KTextEditor__Document*)self, qstring(key), (QVariant*)value);
}

void k_texteditor__document_set_modified_on_disk(void* self, int32_t reason) {
    KTextEditor__Document_SetModifiedOnDisk((KTextEditor__Document*)self, reason);
}

void k_texteditor__document_set_modified_on_disk_warning(void* self, bool on) {
    KTextEditor__Document_SetModifiedOnDiskWarning((KTextEditor__Document*)self, on);
}

void k_texteditor__document_modified_on_disk(void* self, void* document, bool isModified, int32_t reason) {
    KTextEditor__Document_ModifiedOnDisk((KTextEditor__Document*)self, (KTextEditor__Document*)document, isModified, reason);
}

void k_texteditor__document_on_modified_on_disk(void* self, void (*callback)(void*, void*, bool, int32_t)) {
    KTextEditor__Document_Connect_ModifiedOnDisk((KTextEditor__Document*)self, (intptr_t)callback);
}

uint32_t k_texteditor__document_mark(void* self, int line) {
    return KTextEditor__Document_Mark((KTextEditor__Document*)self, line);
}

void k_texteditor__document_set_mark(void* self, int line, uint32_t markType) {
    KTextEditor__Document_SetMark((KTextEditor__Document*)self, line, markType);
}

void k_texteditor__document_clear_mark(void* self, int line) {
    KTextEditor__Document_ClearMark((KTextEditor__Document*)self, line);
}

void k_texteditor__document_add_mark(void* self, int line, uint32_t markType) {
    KTextEditor__Document_AddMark((KTextEditor__Document*)self, line, markType);
}

void k_texteditor__document_remove_mark(void* self, int line, uint32_t markType) {
    KTextEditor__Document_RemoveMark((KTextEditor__Document*)self, line, markType);
}

libqt_map /* of int to KTextEditor__Mark* */ k_texteditor__document_marks(void* self) {
    // Convert QHash<int,KTextEditor::Mark> to libqt_map
    libqt_map _out = KTextEditor__Document_Marks((KTextEditor__Document*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_texteditor__document_clear_marks(void* self) {
    KTextEditor__Document_ClearMarks((KTextEditor__Document*)self);
}

int32_t k_texteditor__document_reserved_markers_count() {
    return KTextEditor__Document_ReservedMarkersCount();
}

void k_texteditor__document_set_mark_description(void* self, int64_t mark, const char* text) {
    KTextEditor__Document_SetMarkDescription((KTextEditor__Document*)self, mark, qstring(text));
}

const char* k_texteditor__document_mark_description(void* self, int64_t mark) {
    libqt_string _str = KTextEditor__Document_MarkDescription((KTextEditor__Document*)self, mark);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_set_editable_marks(void* self, uint32_t markMask) {
    KTextEditor__Document_SetEditableMarks((KTextEditor__Document*)self, markMask);
}

uint32_t k_texteditor__document_editable_marks(void* self) {
    return KTextEditor__Document_EditableMarks((KTextEditor__Document*)self);
}

void k_texteditor__document_set_mark_icon(void* self, int64_t markType, void* icon) {
    KTextEditor__Document_SetMarkIcon((KTextEditor__Document*)self, markType, (QIcon*)icon);
}

QIcon* k_texteditor__document_mark_icon(void* self, int64_t markType) {
    return KTextEditor__Document_MarkIcon((KTextEditor__Document*)self, markType);
}

void k_texteditor__document_marks_changed(void* self, void* document) {
    KTextEditor__Document_MarksChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document);
}

void k_texteditor__document_on_marks_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Document_Connect_MarksChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_mark_changed(void* self, void* document, void* mark, int32_t action) {
    KTextEditor__Document_MarkChanged((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Mark*)mark, action);
}

void k_texteditor__document_on_mark_changed(void* self, void (*callback)(void*, void*, void*, int32_t)) {
    KTextEditor__Document_Connect_MarkChanged((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_mark_tool_tip_requested(void* self, void* document, void* mark, void* position, bool* handled) {
    KTextEditor__Document_MarkToolTipRequested((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Mark*)mark, (QPoint*)position, (bool*)handled);
}

void k_texteditor__document_on_mark_tool_tip_requested(void* self, void (*callback)(void*, void*, void*, void*, bool*)) {
    KTextEditor__Document_Connect_MarkToolTipRequested((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_mark_context_menu_requested(void* self, void* document, void* mark, void* pos, bool* handled) {
    KTextEditor__Document_MarkContextMenuRequested((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Mark*)mark, (QPoint*)pos, (bool*)handled);
}

void k_texteditor__document_on_mark_context_menu_requested(void* self, void (*callback)(void*, void*, void*, void*, bool*)) {
    KTextEditor__Document_Connect_MarkContextMenuRequested((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_mark_clicked(void* self, void* document, void* mark, bool* handled) {
    KTextEditor__Document_MarkClicked((KTextEditor__Document*)self, (KTextEditor__Document*)document, (KTextEditor__Mark*)mark, (bool*)handled);
}

void k_texteditor__document_on_mark_clicked(void* self, void (*callback)(void*, void*, void*, bool*)) {
    KTextEditor__Document_Connect_MarkClicked((KTextEditor__Document*)self, (intptr_t)callback);
}

void k_texteditor__document_set_annotation_model(void* self, void* model) {
    KTextEditor__Document_SetAnnotationModel((KTextEditor__Document*)self, (KTextEditor__AnnotationModel*)model);
}

KTextEditor__AnnotationModel* k_texteditor__document_annotation_model(void* self) {
    return KTextEditor__Document_AnnotationModel((KTextEditor__Document*)self);
}

const char* k_texteditor__document_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KTextEditor__Range* */ k_texteditor__document_search_text3(void* self, void* range, const char* pattern, const int64_t options) {
    libqt_list _arr = KTextEditor__Document_SearchText3((KTextEditor__Document*)self, (KTextEditor__Range*)range, qstring(pattern), options);
    return _arr;
}

bool k_texteditor__document_is_read_write(void* self) {
    return KParts__ReadWritePart_IsReadWrite((KParts__ReadWritePart*)self);
}

void k_texteditor__document_set_read_write(void* self, bool readwrite) {
    KParts__ReadWritePart_SetReadWrite((KParts__ReadWritePart*)self, readwrite);
}

bool k_texteditor__document_is_modified(void* self) {
    return KParts__ReadWritePart_IsModified((KParts__ReadWritePart*)self);
}

bool k_texteditor__document_query_close(void* self) {
    return KParts__ReadWritePart_QueryClose((KParts__ReadWritePart*)self);
}

bool k_texteditor__document_close_url(void* self) {
    return KParts__ReadWritePart_CloseUrl((KParts__ReadWritePart*)self);
}

bool k_texteditor__document_close_url2(void* self, bool promptToSave) {
    return KParts__ReadWritePart_CloseUrl2((KParts__ReadWritePart*)self, promptToSave);
}

bool k_texteditor__document_save_as(void* self, void* url) {
    return KParts__ReadWritePart_SaveAs((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_texteditor__document_set_modified(void* self, bool modified) {
    KParts__ReadWritePart_SetModified((KParts__ReadWritePart*)self, modified);
}

void k_texteditor__document_sig_query_close(void* self, bool* handled, bool* abortClosing) {
    KParts__ReadWritePart_SigQueryClose((KParts__ReadWritePart*)self, (bool*)handled, (bool*)abortClosing);
}

void k_texteditor__document_on_sig_query_close(void* self, void (*callback)(void*, bool*, bool*)) {
    KParts__ReadWritePart_Connect_SigQueryClose((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_texteditor__document_set_modified2(void* self) {
    KParts__ReadWritePart_SetModified2((KParts__ReadWritePart*)self);
}

bool k_texteditor__document_save(void* self) {
    return KParts__ReadWritePart_Save((KParts__ReadWritePart*)self);
}

bool k_texteditor__document_wait_save_complete(void* self) {
    return KParts__ReadWritePart_WaitSaveComplete((KParts__ReadWritePart*)self);
}

void k_texteditor__document_set_progress_info_enabled(void* self, bool show) {
    KParts__ReadOnlyPart_SetProgressInfoEnabled((KParts__ReadOnlyPart*)self, show);
}

bool k_texteditor__document_is_progress_info_enabled(void* self) {
    return KParts__ReadOnlyPart_IsProgressInfoEnabled((KParts__ReadOnlyPart*)self);
}

bool k_texteditor__document_open_url(void* self, void* url) {
    return KParts__ReadOnlyPart_OpenUrl((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

QUrl* k_texteditor__document_url(void* self) {
    return KParts__ReadOnlyPart_Url((KParts__ReadOnlyPart*)self);
}

KParts__NavigationExtension* k_texteditor__document_navigation_extension(void* self) {
    return KParts__ReadOnlyPart_NavigationExtension((KParts__ReadOnlyPart*)self);
}

void k_texteditor__document_set_arguments(void* self, void* arguments) {
    KParts__ReadOnlyPart_SetArguments((KParts__ReadOnlyPart*)self, (KParts__OpenUrlArguments*)arguments);
}

KParts__OpenUrlArguments* k_texteditor__document_arguments(void* self) {
    return KParts__ReadOnlyPart_Arguments((KParts__ReadOnlyPart*)self);
}

bool k_texteditor__document_open_stream(void* self, const char* mimeType, void* url) {
    return KParts__ReadOnlyPart_OpenStream((KParts__ReadOnlyPart*)self, qstring(mimeType), (QUrl*)url);
}

bool k_texteditor__document_write_stream(void* self, const char* data) {
    return KParts__ReadOnlyPart_WriteStream((KParts__ReadOnlyPart*)self, qstring(data));
}

bool k_texteditor__document_close_stream(void* self) {
    return KParts__ReadOnlyPart_CloseStream((KParts__ReadOnlyPart*)self);
}

void k_texteditor__document_started(void* self, void* job) {
    KParts__ReadOnlyPart_Started((KParts__ReadOnlyPart*)self, (KIO__Job*)job);
}

void k_texteditor__document_on_started(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_Started((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_texteditor__document_completed(void* self) {
    KParts__ReadOnlyPart_Completed((KParts__ReadOnlyPart*)self);
}

void k_texteditor__document_on_completed(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_Completed((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_texteditor__document_completed_with_pending_action(void* self) {
    KParts__ReadOnlyPart_CompletedWithPendingAction((KParts__ReadOnlyPart*)self);
}

void k_texteditor__document_on_completed_with_pending_action(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_CompletedWithPendingAction((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_texteditor__document_canceled(void* self, const char* errMsg) {
    KParts__ReadOnlyPart_Canceled((KParts__ReadOnlyPart*)self, qstring(errMsg));
}

void k_texteditor__document_on_canceled(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_Connect_Canceled((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_texteditor__document_url_changed(void* self, void* url) {
    KParts__ReadOnlyPart_UrlChanged((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

void k_texteditor__document_on_url_changed(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_UrlChanged((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

QWidget* k_texteditor__document_widget(void* self) {
    return KParts__Part_Widget((KParts__Part*)self);
}

void k_texteditor__document_set_manager(void* self, void* manager) {
    KParts__Part_SetManager((KParts__Part*)self, (KParts__PartManager*)manager);
}

KParts__PartManager* k_texteditor__document_manager(void* self) {
    return KParts__Part_Manager((KParts__Part*)self);
}

void k_texteditor__document_set_auto_delete_widget(void* self, bool autoDeleteWidget) {
    KParts__Part_SetAutoDeleteWidget((KParts__Part*)self, autoDeleteWidget);
}

void k_texteditor__document_set_auto_delete_part(void* self, bool autoDeletePart) {
    KParts__Part_SetAutoDeletePart((KParts__Part*)self, autoDeletePart);
}

KParts__Part* k_texteditor__document_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__Part_HitTest((KParts__Part*)self, (QWidget*)widget, (QPoint*)globalPos);
}

KPluginMetaData* k_texteditor__document_meta_data(void* self) {
    return KParts__Part_MetaData((KParts__Part*)self);
}

void k_texteditor__document_set_window_caption(void* self, const char* caption) {
    KParts__Part_SetWindowCaption((KParts__Part*)self, qstring(caption));
}

void k_texteditor__document_on_set_window_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetWindowCaption((KParts__Part*)self, (intptr_t)callback);
}

void k_texteditor__document_set_status_bar_text(void* self, const char* text) {
    KParts__Part_SetStatusBarText((KParts__Part*)self, qstring(text));
}

void k_texteditor__document_on_set_status_bar_text(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetStatusBarText((KParts__Part*)self, (intptr_t)callback);
}

bool k_texteditor__document_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_texteditor__document_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_texteditor__document_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__document_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__document_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__document_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__document_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__document_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__document_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__document_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__document_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_texteditor__document_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__document_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__document_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__document_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__document_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__document_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__document_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__document_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__document_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__document_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__document_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__document_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__document_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__document_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__document_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_texteditor__document_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__document_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__document_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__document_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__document_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__document_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__document_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__document_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__document_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_texteditor__document_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__document_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__document_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__document_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_texteditor__document_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_texteditor__document_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

QAction* k_texteditor__document_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

QAction* k_texteditor__document_action2(void* self, void* element) {
    return KXMLGUIClient_Action2((KXMLGUIClient*)self, (QDomElement*)element);
}

KActionCollection* k_texteditor__document_action_collection(void* self) {
    return KXMLGUIClient_ActionCollection((KXMLGUIClient*)self);
}

const char* k_texteditor__document_component_name(void* self) {
    libqt_string _str = KXMLGUIClient_ComponentName((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomDocument* k_texteditor__document_dom_document(void* self) {
    return KXMLGUIClient_DomDocument((KXMLGUIClient*)self);
}

const char* k_texteditor__document_xml_file(void* self) {
    libqt_string _str = KXMLGUIClient_XmlFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__document_local_x_m_l_file(void* self) {
    libqt_string _str = KXMLGUIClient_LocalXMLFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_texteditor__document_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_texteditor__document_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_texteditor__document_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_texteditor__document_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_texteditor__document_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_texteditor__document_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_texteditor__document_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_texteditor__document_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_texteditor__document_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_texteditor__document_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_texteditor__document_plug_action_list(void* self, const char* name, libqt_list actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_texteditor__document_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_texteditor__document_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__document_find_most_recent_x_m_l_file");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    libqt_string _str = KXMLGUIClient_FindMostRecentXMLFile(files_list, qstring(doc));
    free(files_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_texteditor__document_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_texteditor__document_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_texteditor__document_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_texteditor__document_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_texteditor__document_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_texteditor__document_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_texteditor__document_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__document_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

void k_texteditor__document_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__document_delete(void* self) {
    KTextEditor__Document_Delete((KTextEditor__Document*)(self));
}

KTextEditor__Document__EditingTransaction* k_texteditor__document__editingtransaction_new(void* document) {
    return KTextEditor__Document__EditingTransaction_new((KTextEditor__Document*)document);
}

void k_texteditor__document__editingtransaction_start(void* self) {
    KTextEditor__Document__EditingTransaction_Start((KTextEditor__Document__EditingTransaction*)self);
}

void k_texteditor__document__editingtransaction_finish(void* self) {
    KTextEditor__Document__EditingTransaction_Finish((KTextEditor__Document__EditingTransaction*)self);
}

void k_texteditor__document__editingtransaction_delete(void* self) {
    KTextEditor__Document__EditingTransaction_Delete((KTextEditor__Document__EditingTransaction*)(self));
}
