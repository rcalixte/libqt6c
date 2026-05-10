#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqmargins.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtextbrowser.hpp"
#include "../libqtextcursor.hpp"
#include "../libqtextedit.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "librichtextbrowser.hpp"
#include "librichtextbrowser.h"

TextCustomEditor__RichTextBrowser* k_textcustomeditor__richtextbrowser_new(void* parent) {
    return TextCustomEditor__RichTextBrowser_new((QWidget*)parent);
}

TextCustomEditor__RichTextBrowser* k_textcustomeditor__richtextbrowser_new2() {
    return TextCustomEditor__RichTextBrowser_new2();
}

const QMetaObject* k_textcustomeditor__richtextbrowser_meta_object(void* self) {
    return TextCustomEditor__RichTextBrowser_MetaObject((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnMetaObject((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__richtextbrowser_super_meta_object(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperMetaObject((TextCustomEditor__RichTextBrowser*)self);
}

void* k_textcustomeditor__richtextbrowser_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextBrowser_Metacast((TextCustomEditor__RichTextBrowser*)self, param1);
}

void k_textcustomeditor__richtextbrowser_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextBrowser_OnMetacast((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void* k_textcustomeditor__richtextbrowser_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextBrowser_SuperMetacast((TextCustomEditor__RichTextBrowser*)self, param1);
}

int32_t k_textcustomeditor__richtextbrowser_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextBrowser_Metacall((TextCustomEditor__RichTextBrowser*)self, param1, param2, param3);
}

void k_textcustomeditor__richtextbrowser_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__RichTextBrowser_OnMetacall((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextBrowser_SuperMetacall((TextCustomEditor__RichTextBrowser*)self, param1, param2, param3);
}

const char* k_textcustomeditor__richtextbrowser_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_search_support(void* self, bool b) {
    TextCustomEditor__RichTextBrowser_SetSearchSupport((TextCustomEditor__RichTextBrowser*)self, b);
}

bool k_textcustomeditor__richtextbrowser_search_support(void* self) {
    return TextCustomEditor__RichTextBrowser_SearchSupport((TextCustomEditor__RichTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_text_to_speech_support(void* self) {
    return TextCustomEditor__RichTextBrowser_TextToSpeechSupport((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_set_text_to_speech_support(void* self, bool b) {
    TextCustomEditor__RichTextBrowser_SetTextToSpeechSupport((TextCustomEditor__RichTextBrowser*)self, b);
}

void k_textcustomeditor__richtextbrowser_set_web_shortcut_support(void* self, bool b) {
    TextCustomEditor__RichTextBrowser_SetWebShortcutSupport((TextCustomEditor__RichTextBrowser*)self, b);
}

bool k_textcustomeditor__richtextbrowser_web_shortcut_support(void* self) {
    return TextCustomEditor__RichTextBrowser_WebShortcutSupport((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_set_default_font_size(void* self, int val) {
    TextCustomEditor__RichTextBrowser_SetDefaultFontSize((TextCustomEditor__RichTextBrowser*)self, val);
}

int32_t k_textcustomeditor__richtextbrowser_zoom_factor(void* self) {
    return TextCustomEditor__RichTextBrowser_ZoomFactor((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_slot_display_message_indicator(void* self, const char* message) {
    TextCustomEditor__RichTextBrowser_SlotDisplayMessageIndicator((TextCustomEditor__RichTextBrowser*)self, qstring(message));
}

void k_textcustomeditor__richtextbrowser_slot_speak_text(void* self) {
    TextCustomEditor__RichTextBrowser_SlotSpeakText((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_slot_zoom_reset(void* self) {
    TextCustomEditor__RichTextBrowser_SlotZoomReset((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__RichTextBrowser_AddExtraMenuEntry((TextCustomEditor__RichTextBrowser*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__richtextbrowser_on_add_extra_menu_entry(void* self, void (*callback)(void*, void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnAddExtraMenuEntry((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_super_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry((TextCustomEditor__RichTextBrowser*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__richtextbrowser_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_ContextMenuEvent((TextCustomEditor__RichTextBrowser*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnContextMenuEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_super_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperContextMenuEvent((TextCustomEditor__RichTextBrowser*)self, (QContextMenuEvent*)event);
}

bool k_textcustomeditor__richtextbrowser_event(void* self, void* ev) {
    return TextCustomEditor__RichTextBrowser_Event((TextCustomEditor__RichTextBrowser*)self, (QEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_super_event(void* self, void* ev) {
    return TextCustomEditor__RichTextBrowser_SuperEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_KeyPressEvent((TextCustomEditor__RichTextBrowser*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnKeyPressEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_super_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperKeyPressEvent((TextCustomEditor__RichTextBrowser*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtextbrowser_wheel_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_WheelEvent((TextCustomEditor__RichTextBrowser*)self, (QWheelEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnWheelEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_super_wheel_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperWheelEvent((TextCustomEditor__RichTextBrowser*)self, (QWheelEvent*)e);
}

QMenu* k_textcustomeditor__richtextbrowser_mouse_popup_menu(void* self, void* pos) {
    return TextCustomEditor__RichTextBrowser_MousePopupMenu((TextCustomEditor__RichTextBrowser*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtextbrowser_on_mouse_popup_menu(void* self, QMenu* (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMousePopupMenu((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QMenu* k_textcustomeditor__richtextbrowser_super_mouse_popup_menu(void* self, void* pos) {
    return TextCustomEditor__RichTextBrowser_SuperMousePopupMenu((TextCustomEditor__RichTextBrowser*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtextbrowser_say(void* self, const char* text) {
    TextCustomEditor__RichTextBrowser_Say((TextCustomEditor__RichTextBrowser*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_on_say(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextBrowser_Connect_Say((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_find_text(void* self) {
    TextCustomEditor__RichTextBrowser_FindText((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_find_text(void* self, void (*callback)(void*)) {
    TextCustomEditor__RichTextBrowser_Connect_FindText((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

const char* k_textcustomeditor__richtextbrowser_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtextbrowser_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_textcustomeditor__richtextbrowser_source(void* self) {
    return QTextBrowser_Source((QTextBrowser*)self);
}

int32_t k_textcustomeditor__richtextbrowser_source_type(void* self) {
    return QTextBrowser_SourceType((QTextBrowser*)self);
}

const char** k_textcustomeditor__richtextbrowser_search_paths(void* self) {
    libqt_list _arr = QTextBrowser_SearchPaths((QTextBrowser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtextbrowser_search_paths\n");
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

void k_textcustomeditor__richtextbrowser_set_search_paths(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtextbrowser_set_search_paths\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i) {
        paths_qstr[i] = qstring(paths[i]);
    }
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QTextBrowser_SetSearchPaths((QTextBrowser*)self, paths_list);
    free(paths_qstr);
}

bool k_textcustomeditor__richtextbrowser_is_backward_available(void* self) {
    return QTextBrowser_IsBackwardAvailable((QTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_is_forward_available(void* self) {
    return QTextBrowser_IsForwardAvailable((QTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_clear_history(void* self) {
    QTextBrowser_ClearHistory((QTextBrowser*)self);
}

const char* k_textcustomeditor__richtextbrowser_history_title(void* self, int param1) {
    libqt_string _str = QTextBrowser_HistoryTitle((QTextBrowser*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_textcustomeditor__richtextbrowser_history_url(void* self, int param1) {
    return QTextBrowser_HistoryUrl((QTextBrowser*)self, param1);
}

int32_t k_textcustomeditor__richtextbrowser_backward_history_count(void* self) {
    return QTextBrowser_BackwardHistoryCount((QTextBrowser*)self);
}

int32_t k_textcustomeditor__richtextbrowser_forward_history_count(void* self) {
    return QTextBrowser_ForwardHistoryCount((QTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_open_external_links(void* self) {
    return QTextBrowser_OpenExternalLinks((QTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_set_open_external_links(void* self, bool open) {
    QTextBrowser_SetOpenExternalLinks((QTextBrowser*)self, open);
}

bool k_textcustomeditor__richtextbrowser_open_links(void* self) {
    return QTextBrowser_OpenLinks((QTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_set_open_links(void* self, bool open) {
    QTextBrowser_SetOpenLinks((QTextBrowser*)self, open);
}

void k_textcustomeditor__richtextbrowser_set_source(void* self, void* name) {
    QTextBrowser_SetSource((QTextBrowser*)self, (QUrl*)name);
}

void k_textcustomeditor__richtextbrowser_backward_available(void* self, bool param1) {
    QTextBrowser_BackwardAvailable((QTextBrowser*)self, param1);
}

void k_textcustomeditor__richtextbrowser_on_backward_available(void* self, void (*callback)(void*, bool)) {
    QTextBrowser_Connect_BackwardAvailable((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_forward_available(void* self, bool param1) {
    QTextBrowser_ForwardAvailable((QTextBrowser*)self, param1);
}

void k_textcustomeditor__richtextbrowser_on_forward_available(void* self, void (*callback)(void*, bool)) {
    QTextBrowser_Connect_ForwardAvailable((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_history_changed(void* self) {
    QTextBrowser_HistoryChanged((QTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_history_changed(void* self, void (*callback)(void*)) {
    QTextBrowser_Connect_HistoryChanged((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_source_changed(void* self, void* param1) {
    QTextBrowser_SourceChanged((QTextBrowser*)self, (QUrl*)param1);
}

void k_textcustomeditor__richtextbrowser_on_source_changed(void* self, void (*callback)(void*, void*)) {
    QTextBrowser_Connect_SourceChanged((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_highlighted(void* self, void* param1) {
    QTextBrowser_Highlighted((QTextBrowser*)self, (QUrl*)param1);
}

void k_textcustomeditor__richtextbrowser_on_highlighted(void* self, void (*callback)(void*, void*)) {
    QTextBrowser_Connect_Highlighted((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_anchor_clicked(void* self, void* param1) {
    QTextBrowser_AnchorClicked((QTextBrowser*)self, (QUrl*)param1);
}

void k_textcustomeditor__richtextbrowser_on_anchor_clicked(void* self, void (*callback)(void*, void*)) {
    QTextBrowser_Connect_AnchorClicked((QTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_set_source2(void* self, void* name, int32_t type) {
    QTextBrowser_SetSource2((QTextBrowser*)self, (QUrl*)name, type);
}

void k_textcustomeditor__richtextbrowser_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textcustomeditor__richtextbrowser_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_textcustomeditor__richtextbrowser_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textcustomeditor__richtextbrowser_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_textcustomeditor__richtextbrowser_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

void k_textcustomeditor__richtextbrowser_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_textcustomeditor__richtextbrowser_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_textcustomeditor__richtextbrowser_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_textcustomeditor__richtextbrowser_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textcustomeditor__richtextbrowser_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_textcustomeditor__richtextbrowser_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_textcustomeditor__richtextbrowser_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_textcustomeditor__richtextbrowser_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_textcustomeditor__richtextbrowser_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_textcustomeditor__richtextbrowser_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_textcustomeditor__richtextbrowser_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textcustomeditor__richtextbrowser_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textcustomeditor__richtextbrowser_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_textcustomeditor__richtextbrowser_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_textcustomeditor__richtextbrowser_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_textcustomeditor__richtextbrowser_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtextbrowser_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_textcustomeditor__richtextbrowser_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_textcustomeditor__richtextbrowser_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_textcustomeditor__richtextbrowser_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_textcustomeditor__richtextbrowser_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_textcustomeditor__richtextbrowser_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textcustomeditor__richtextbrowser_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtextbrowser_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtextbrowser_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_textcustomeditor__richtextbrowser_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_textcustomeditor__richtextbrowser_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textcustomeditor__richtextbrowser_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_textcustomeditor__richtextbrowser_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textcustomeditor__richtextbrowser_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_textcustomeditor__richtextbrowser_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtextbrowser_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_textcustomeditor__richtextbrowser_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_textcustomeditor__richtextbrowser_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_textcustomeditor__richtextbrowser_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_textcustomeditor__richtextbrowser_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textcustomeditor__richtextbrowser_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_textcustomeditor__richtextbrowser_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_textcustomeditor__richtextbrowser_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_textcustomeditor__richtextbrowser_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_textcustomeditor__richtextbrowser_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_textcustomeditor__richtextbrowser_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void k_textcustomeditor__richtextbrowser_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_textcustomeditor__richtextbrowser_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_textcustomeditor__richtextbrowser_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void k_textcustomeditor__richtextbrowser_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_textcustomeditor__richtextbrowser_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_textcustomeditor__richtextbrowser_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_textcustomeditor__richtextbrowser_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtextbrowser_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_textcustomeditor__richtextbrowser_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_textcustomeditor__richtextbrowser_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtextbrowser_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtextbrowser_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_textcustomeditor__richtextbrowser_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_textcustomeditor__richtextbrowser_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_textcustomeditor__richtextbrowser_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_textcustomeditor__richtextbrowser_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_textcustomeditor__richtextbrowser_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__richtextbrowser_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textcustomeditor__richtextbrowser_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__richtextbrowser_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textcustomeditor__richtextbrowser_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textcustomeditor__richtextbrowser_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textcustomeditor__richtextbrowser_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textcustomeditor__richtextbrowser_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textcustomeditor__richtextbrowser_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textcustomeditor__richtextbrowser_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtextbrowser_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textcustomeditor__richtextbrowser_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textcustomeditor__richtextbrowser_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textcustomeditor__richtextbrowser_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textcustomeditor__richtextbrowser_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textcustomeditor__richtextbrowser_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textcustomeditor__richtextbrowser_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textcustomeditor__richtextbrowser_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textcustomeditor__richtextbrowser_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textcustomeditor__richtextbrowser_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtextbrowser_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtextbrowser_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textcustomeditor__richtextbrowser_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textcustomeditor__richtextbrowser_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textcustomeditor__richtextbrowser_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtextbrowser_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textcustomeditor__richtextbrowser_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textcustomeditor__richtextbrowser_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textcustomeditor__richtextbrowser_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textcustomeditor__richtextbrowser_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textcustomeditor__richtextbrowser_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textcustomeditor__richtextbrowser_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textcustomeditor__richtextbrowser_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtextbrowser_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textcustomeditor__richtextbrowser_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textcustomeditor__richtextbrowser_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textcustomeditor__richtextbrowser_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textcustomeditor__richtextbrowser_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtextbrowser_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textcustomeditor__richtextbrowser_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textcustomeditor__richtextbrowser_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textcustomeditor__richtextbrowser_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textcustomeditor__richtextbrowser_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textcustomeditor__richtextbrowser_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textcustomeditor__richtextbrowser_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textcustomeditor__richtextbrowser_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textcustomeditor__richtextbrowser_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textcustomeditor__richtextbrowser_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textcustomeditor__richtextbrowser_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textcustomeditor__richtextbrowser_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textcustomeditor__richtextbrowser_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textcustomeditor__richtextbrowser_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textcustomeditor__richtextbrowser_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textcustomeditor__richtextbrowser_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textcustomeditor__richtextbrowser_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtextbrowser_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtextbrowser_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtextbrowser_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtextbrowser_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtextbrowser_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtextbrowser_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtextbrowser_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtextbrowser_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtextbrowser_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textcustomeditor__richtextbrowser_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtextbrowser_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textcustomeditor__richtextbrowser_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textcustomeditor__richtextbrowser_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtextbrowser_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textcustomeditor__richtextbrowser_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textcustomeditor__richtextbrowser_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textcustomeditor__richtextbrowser_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textcustomeditor__richtextbrowser_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textcustomeditor__richtextbrowser_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textcustomeditor__richtextbrowser_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textcustomeditor__richtextbrowser_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textcustomeditor__richtextbrowser_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textcustomeditor__richtextbrowser_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtextbrowser_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtextbrowser_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textcustomeditor__richtextbrowser_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textcustomeditor__richtextbrowser_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textcustomeditor__richtextbrowser_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textcustomeditor__richtextbrowser_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textcustomeditor__richtextbrowser_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textcustomeditor__richtextbrowser_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtextbrowser_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtextbrowser_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textcustomeditor__richtextbrowser_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textcustomeditor__richtextbrowser_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtextbrowser_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textcustomeditor__richtextbrowser_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textcustomeditor__richtextbrowser_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textcustomeditor__richtextbrowser_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textcustomeditor__richtextbrowser_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textcustomeditor__richtextbrowser_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textcustomeditor__richtextbrowser_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textcustomeditor__richtextbrowser_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textcustomeditor__richtextbrowser_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textcustomeditor__richtextbrowser_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtextbrowser_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textcustomeditor__richtextbrowser_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textcustomeditor__richtextbrowser_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textcustomeditor__richtextbrowser_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textcustomeditor__richtextbrowser_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textcustomeditor__richtextbrowser_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textcustomeditor__richtextbrowser_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textcustomeditor__richtextbrowser_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textcustomeditor__richtextbrowser_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textcustomeditor__richtextbrowser_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textcustomeditor__richtextbrowser_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textcustomeditor__richtextbrowser_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textcustomeditor__richtextbrowser_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textcustomeditor__richtextbrowser_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textcustomeditor__richtextbrowser_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textcustomeditor__richtextbrowser_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textcustomeditor__richtextbrowser_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textcustomeditor__richtextbrowser_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtextbrowser_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtextbrowser_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtextbrowser_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtextbrowser_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtextbrowser_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtextbrowser_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textcustomeditor__richtextbrowser_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtextbrowser_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textcustomeditor__richtextbrowser_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textcustomeditor__richtextbrowser_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textcustomeditor__richtextbrowser_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textcustomeditor__richtextbrowser_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtextbrowser_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textcustomeditor__richtextbrowser_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtextbrowser_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textcustomeditor__richtextbrowser_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textcustomeditor__richtextbrowser_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textcustomeditor__richtextbrowser_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textcustomeditor__richtextbrowser_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textcustomeditor__richtextbrowser_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textcustomeditor__richtextbrowser_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textcustomeditor__richtextbrowser_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtextbrowser_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textcustomeditor__richtextbrowser_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textcustomeditor__richtextbrowser_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textcustomeditor__richtextbrowser_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textcustomeditor__richtextbrowser_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textcustomeditor__richtextbrowser_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textcustomeditor__richtextbrowser_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textcustomeditor__richtextbrowser_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textcustomeditor__richtextbrowser_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtextbrowser_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textcustomeditor__richtextbrowser_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textcustomeditor__richtextbrowser_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textcustomeditor__richtextbrowser_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textcustomeditor__richtextbrowser_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textcustomeditor__richtextbrowser_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textcustomeditor__richtextbrowser_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textcustomeditor__richtextbrowser_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textcustomeditor__richtextbrowser_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textcustomeditor__richtextbrowser_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textcustomeditor__richtextbrowser_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textcustomeditor__richtextbrowser_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textcustomeditor__richtextbrowser_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtextbrowser_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textcustomeditor__richtextbrowser_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtextbrowser_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textcustomeditor__richtextbrowser_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textcustomeditor__richtextbrowser_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textcustomeditor__richtextbrowser_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textcustomeditor__richtextbrowser_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textcustomeditor__richtextbrowser_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textcustomeditor__richtextbrowser_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textcustomeditor__richtextbrowser_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textcustomeditor__richtextbrowser_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textcustomeditor__richtextbrowser_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textcustomeditor__richtextbrowser_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textcustomeditor__richtextbrowser_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textcustomeditor__richtextbrowser_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textcustomeditor__richtextbrowser_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textcustomeditor__richtextbrowser_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textcustomeditor__richtextbrowser_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textcustomeditor__richtextbrowser_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtextbrowser_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textcustomeditor__richtextbrowser_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textcustomeditor__richtextbrowser_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtextbrowser_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtextbrowser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textcustomeditor__richtextbrowser_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtextbrowser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtextbrowser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textcustomeditor__richtextbrowser_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textcustomeditor__richtextbrowser_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textcustomeditor__richtextbrowser_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textcustomeditor__richtextbrowser_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtextbrowser_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtextbrowser_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textcustomeditor__richtextbrowser_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textcustomeditor__richtextbrowser_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textcustomeditor__richtextbrowser_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textcustomeditor__richtextbrowser_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtextbrowser_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__richtextbrowser_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__richtextbrowser_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__richtextbrowser_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__richtextbrowser_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__richtextbrowser_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__richtextbrowser_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__richtextbrowser_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__richtextbrowser_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__richtextbrowser_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__richtextbrowser_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtextbrowser_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__richtextbrowser_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__richtextbrowser_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__richtextbrowser_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__richtextbrowser_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__richtextbrowser_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__richtextbrowser_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtextbrowser_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__richtextbrowser_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__richtextbrowser_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__richtextbrowser_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__richtextbrowser_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtextbrowser_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__richtextbrowser_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__richtextbrowser_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__richtextbrowser_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__richtextbrowser_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__richtextbrowser_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__richtextbrowser_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__richtextbrowser_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__richtextbrowser_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtextbrowser_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__richtextbrowser_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__richtextbrowser_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textcustomeditor__richtextbrowser_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textcustomeditor__richtextbrowser_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtextbrowser_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textcustomeditor__richtextbrowser_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textcustomeditor__richtextbrowser_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textcustomeditor__richtextbrowser_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__RichTextBrowser_LoadResource((TextCustomEditor__RichTextBrowser*)self, type, (QUrl*)name);
}

QVariant* k_textcustomeditor__richtextbrowser_super_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__RichTextBrowser_SuperLoadResource((TextCustomEditor__RichTextBrowser*)self, type, (QUrl*)name);
}

void k_textcustomeditor__richtextbrowser_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextCustomEditor__RichTextBrowser_OnLoadResource((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_backward(void* self) {
    TextCustomEditor__RichTextBrowser_Backward((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_backward(void* self) {
    TextCustomEditor__RichTextBrowser_SuperBackward((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_backward(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnBackward((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_forward(void* self) {
    TextCustomEditor__RichTextBrowser_Forward((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_forward(void* self) {
    TextCustomEditor__RichTextBrowser_SuperForward((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_forward(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnForward((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_home(void* self) {
    TextCustomEditor__RichTextBrowser_Home((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_home(void* self) {
    TextCustomEditor__RichTextBrowser_SuperHome((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_home(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnHome((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_reload(void* self) {
    TextCustomEditor__RichTextBrowser_Reload((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_reload(void* self) {
    TextCustomEditor__RichTextBrowser_SuperReload((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_reload(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnReload((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_mouse_move_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_MouseMoveEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_super_mouse_move_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMouseMoveEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_mouse_press_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_MousePressEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_super_mouse_press_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_SuperMousePressEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMousePressEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_mouse_release_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_MouseReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_super_mouse_release_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMouseReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_focus_out_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_FocusOutEvent((TextCustomEditor__RichTextBrowser*)self, (QFocusEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_super_focus_out_event(void* self, void* ev) {
    TextCustomEditor__RichTextBrowser_SuperFocusOutEvent((TextCustomEditor__RichTextBrowser*)self, (QFocusEvent*)ev);
}

void k_textcustomeditor__richtextbrowser_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnFocusOutEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextBrowser_FocusNextPrevChild((TextCustomEditor__RichTextBrowser*)self, next);
}

bool k_textcustomeditor__richtextbrowser_super_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild((TextCustomEditor__RichTextBrowser*)self, next);
}

void k_textcustomeditor__richtextbrowser_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextCustomEditor__RichTextBrowser_OnFocusNextPrevChild((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_paint_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_PaintEvent((TextCustomEditor__RichTextBrowser*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_paint_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperPaintEvent((TextCustomEditor__RichTextBrowser*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnPaintEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_do_set_source(void* self, void* name, int32_t type) {
    TextCustomEditor__RichTextBrowser_DoSetSource((TextCustomEditor__RichTextBrowser*)self, (QUrl*)name, type);
}

void k_textcustomeditor__richtextbrowser_super_do_set_source(void* self, void* name, int32_t type) {
    TextCustomEditor__RichTextBrowser_SuperDoSetSource((TextCustomEditor__RichTextBrowser*)self, (QUrl*)name, type);
}

void k_textcustomeditor__richtextbrowser_on_do_set_source(void* self, void (*callback)(void*, void*, int32_t)) {
    TextCustomEditor__RichTextBrowser_OnDoSetSource((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QVariant* k_textcustomeditor__richtextbrowser_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__RichTextBrowser_InputMethodQuery((TextCustomEditor__RichTextBrowser*)self, property);
}

QVariant* k_textcustomeditor__richtextbrowser_super_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__RichTextBrowser_SuperInputMethodQuery((TextCustomEditor__RichTextBrowser*)self, property);
}

void k_textcustomeditor__richtextbrowser_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextBrowser_OnInputMethodQuery((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_timer_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_TimerEvent((TextCustomEditor__RichTextBrowser*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_timer_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperTimerEvent((TextCustomEditor__RichTextBrowser*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnTimerEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_key_release_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_KeyReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_key_release_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnKeyReleaseEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_resize_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_ResizeEvent((TextCustomEditor__RichTextBrowser*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_resize_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperResizeEvent((TextCustomEditor__RichTextBrowser*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnResizeEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent((TextCustomEditor__RichTextBrowser*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMouseDoubleClickEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_drag_enter_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_DragEnterEvent((TextCustomEditor__RichTextBrowser*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_drag_enter_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperDragEnterEvent((TextCustomEditor__RichTextBrowser*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDragEnterEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_drag_leave_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_DragLeaveEvent((TextCustomEditor__RichTextBrowser*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_drag_leave_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent((TextCustomEditor__RichTextBrowser*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDragLeaveEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_drag_move_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_DragMoveEvent((TextCustomEditor__RichTextBrowser*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_drag_move_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperDragMoveEvent((TextCustomEditor__RichTextBrowser*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDragMoveEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_drop_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_DropEvent((TextCustomEditor__RichTextBrowser*)self, (QDropEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_drop_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperDropEvent((TextCustomEditor__RichTextBrowser*)self, (QDropEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDropEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_focus_in_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_FocusInEvent((TextCustomEditor__RichTextBrowser*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_focus_in_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperFocusInEvent((TextCustomEditor__RichTextBrowser*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnFocusInEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_show_event(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_ShowEvent((TextCustomEditor__RichTextBrowser*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__richtextbrowser_super_show_event(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_SuperShowEvent((TextCustomEditor__RichTextBrowser*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__richtextbrowser_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnShowEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_change_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_ChangeEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)e);
}

void k_textcustomeditor__richtextbrowser_super_change_event(void* self, void* e) {
    TextCustomEditor__RichTextBrowser_SuperChangeEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)e);
}

void k_textcustomeditor__richtextbrowser_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnChangeEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QMimeData* k_textcustomeditor__richtextbrowser_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection((TextCustomEditor__RichTextBrowser*)self);
}

QMimeData* k_textcustomeditor__richtextbrowser_super_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnCreateMimeDataFromSelection((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__RichTextBrowser_CanInsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (QMimeData*)source);
}

bool k_textcustomeditor__richtextbrowser_super_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtextbrowser_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnCanInsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__RichTextBrowser_InsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtextbrowser_super_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtextbrowser_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnInsertFromMimeData((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_InputMethodEvent((TextCustomEditor__RichTextBrowser*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtextbrowser_super_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_SuperInputMethodEvent((TextCustomEditor__RichTextBrowser*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtextbrowser_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnInputMethodEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__RichTextBrowser_ScrollContentsBy((TextCustomEditor__RichTextBrowser*)self, dx, dy);
}

void k_textcustomeditor__richtextbrowser_super_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__RichTextBrowser_SuperScrollContentsBy((TextCustomEditor__RichTextBrowser*)self, dx, dy);
}

void k_textcustomeditor__richtextbrowser_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextCustomEditor__RichTextBrowser_OnScrollContentsBy((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__RichTextBrowser_DoSetTextCursor((TextCustomEditor__RichTextBrowser*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__richtextbrowser_super_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor((TextCustomEditor__RichTextBrowser*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__richtextbrowser_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDoSetTextCursor((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtextbrowser_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_MinimumSizeHint((TextCustomEditor__RichTextBrowser*)self);
}

QSize* k_textcustomeditor__richtextbrowser_super_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperMinimumSizeHint((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnMinimumSizeHint((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtextbrowser_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_SizeHint((TextCustomEditor__RichTextBrowser*)self);
}

QSize* k_textcustomeditor__richtextbrowser_super_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperSizeHint((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnSizeHint((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__RichTextBrowser_SetupViewport((TextCustomEditor__RichTextBrowser*)self, (QWidget*)viewport);
}

void k_textcustomeditor__richtextbrowser_super_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__RichTextBrowser_SuperSetupViewport((TextCustomEditor__RichTextBrowser*)self, (QWidget*)viewport);
}

void k_textcustomeditor__richtextbrowser_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnSetupViewport((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__RichTextBrowser_EventFilter((TextCustomEditor__RichTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textcustomeditor__richtextbrowser_super_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__RichTextBrowser_SuperEventFilter((TextCustomEditor__RichTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textcustomeditor__richtextbrowser_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnEventFilter((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_viewport_event(void* self, void* param1) {
    return TextCustomEditor__RichTextBrowser_ViewportEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)param1);
}

bool k_textcustomeditor__richtextbrowser_super_viewport_event(void* self, void* param1) {
    return TextCustomEditor__RichTextBrowser_SuperViewportEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)param1);
}

void k_textcustomeditor__richtextbrowser_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnViewportEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtextbrowser_viewport_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_ViewportSizeHint((TextCustomEditor__RichTextBrowser*)self);
}

QSize* k_textcustomeditor__richtextbrowser_super_viewport_size_hint(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperViewportSizeHint((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnViewportSizeHint((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_init_style_option(void* self, void* option) {
    TextCustomEditor__RichTextBrowser_InitStyleOption((TextCustomEditor__RichTextBrowser*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__richtextbrowser_super_init_style_option(void* self, void* option) {
    TextCustomEditor__RichTextBrowser_SuperInitStyleOption((TextCustomEditor__RichTextBrowser*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__richtextbrowser_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnInitStyleOption((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_dev_type(void* self) {
    return TextCustomEditor__RichTextBrowser_DevType((TextCustomEditor__RichTextBrowser*)self);
}

int32_t k_textcustomeditor__richtextbrowser_super_dev_type(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperDevType((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_dev_type(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnDevType((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextBrowser_SetVisible((TextCustomEditor__RichTextBrowser*)self, visible);
}

void k_textcustomeditor__richtextbrowser_super_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextBrowser_SuperSetVisible((TextCustomEditor__RichTextBrowser*)self, visible);
}

void k_textcustomeditor__richtextbrowser_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextBrowser_OnSetVisible((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextBrowser_HeightForWidth((TextCustomEditor__RichTextBrowser*)self, param1);
}

int32_t k_textcustomeditor__richtextbrowser_super_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextBrowser_SuperHeightForWidth((TextCustomEditor__RichTextBrowser*)self, param1);
}

void k_textcustomeditor__richtextbrowser_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextCustomEditor__RichTextBrowser_OnHeightForWidth((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextBrowser_HasHeightForWidth((TextCustomEditor__RichTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_super_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperHasHeightForWidth((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_has_height_for_width(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnHasHeightForWidth((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QPaintEngine* k_textcustomeditor__richtextbrowser_paint_engine(void* self) {
    return TextCustomEditor__RichTextBrowser_PaintEngine((TextCustomEditor__RichTextBrowser*)self);
}

QPaintEngine* k_textcustomeditor__richtextbrowser_super_paint_engine(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperPaintEngine((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnPaintEngine((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_EnterEvent((TextCustomEditor__RichTextBrowser*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperEnterEvent((TextCustomEditor__RichTextBrowser*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnEnterEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_LeaveEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperLeaveEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnLeaveEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_move_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_MoveEvent((TextCustomEditor__RichTextBrowser*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_move_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperMoveEvent((TextCustomEditor__RichTextBrowser*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnMoveEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_close_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_CloseEvent((TextCustomEditor__RichTextBrowser*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_close_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperCloseEvent((TextCustomEditor__RichTextBrowser*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnCloseEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_TabletEvent((TextCustomEditor__RichTextBrowser*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperTabletEvent((TextCustomEditor__RichTextBrowser*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnTabletEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_action_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_ActionEvent((TextCustomEditor__RichTextBrowser*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_action_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperActionEvent((TextCustomEditor__RichTextBrowser*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnActionEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_HideEvent((TextCustomEditor__RichTextBrowser*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperHideEvent((TextCustomEditor__RichTextBrowser*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnHideEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextBrowser_NativeEvent((TextCustomEditor__RichTextBrowser*)self, qstring(eventType), message, result);
}

bool k_textcustomeditor__richtextbrowser_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextBrowser_SuperNativeEvent((TextCustomEditor__RichTextBrowser*)self, qstring(eventType), message, result);
}

void k_textcustomeditor__richtextbrowser_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextCustomEditor__RichTextBrowser_OnNativeEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextBrowser_Metric((TextCustomEditor__RichTextBrowser*)self, param1);
}

int32_t k_textcustomeditor__richtextbrowser_super_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextBrowser_SuperMetric((TextCustomEditor__RichTextBrowser*)self, param1);
}

void k_textcustomeditor__richtextbrowser_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextBrowser_OnMetric((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextBrowser_InitPainter((TextCustomEditor__RichTextBrowser*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtextbrowser_super_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextBrowser_SuperInitPainter((TextCustomEditor__RichTextBrowser*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtextbrowser_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnInitPainter((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QPaintDevice* k_textcustomeditor__richtextbrowser_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextBrowser_Redirected((TextCustomEditor__RichTextBrowser*)self, (QPoint*)offset);
}

QPaintDevice* k_textcustomeditor__richtextbrowser_super_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextBrowser_SuperRedirected((TextCustomEditor__RichTextBrowser*)self, (QPoint*)offset);
}

void k_textcustomeditor__richtextbrowser_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnRedirected((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QPainter* k_textcustomeditor__richtextbrowser_shared_painter(void* self) {
    return TextCustomEditor__RichTextBrowser_SharedPainter((TextCustomEditor__RichTextBrowser*)self);
}

QPainter* k_textcustomeditor__richtextbrowser_super_shared_painter(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperSharedPainter((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnSharedPainter((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_child_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_ChildEvent((TextCustomEditor__RichTextBrowser*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_child_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperChildEvent((TextCustomEditor__RichTextBrowser*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnChildEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_CustomEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)event);
}

void k_textcustomeditor__richtextbrowser_super_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextBrowser_SuperCustomEvent((TextCustomEditor__RichTextBrowser*)self, (QEvent*)event);
}

void k_textcustomeditor__richtextbrowser_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnCustomEvent((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextBrowser_ConnectNotify((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtextbrowser_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextBrowser_SuperConnectNotify((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtextbrowser_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnConnectNotify((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextBrowser_DisconnectNotify((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtextbrowser_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextBrowser_SuperDisconnectNotify((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtextbrowser_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDisconnectNotify((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_zoom_in_f(void* self, float range) {
    TextCustomEditor__RichTextBrowser_ZoomInF((TextCustomEditor__RichTextBrowser*)self, range);
}

void k_textcustomeditor__richtextbrowser_super_zoom_in_f(void* self, float range) {
    TextCustomEditor__RichTextBrowser_SuperZoomInF((TextCustomEditor__RichTextBrowser*)self, range);
}

void k_textcustomeditor__richtextbrowser_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextCustomEditor__RichTextBrowser_OnZoomInF((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__RichTextBrowser_SetViewportMargins((TextCustomEditor__RichTextBrowser*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtextbrowser_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__RichTextBrowser_SuperSetViewportMargins((TextCustomEditor__RichTextBrowser*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtextbrowser_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextCustomEditor__RichTextBrowser_OnSetViewportMargins((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QMargins* k_textcustomeditor__richtextbrowser_viewport_margins(void* self) {
    return TextCustomEditor__RichTextBrowser_ViewportMargins((TextCustomEditor__RichTextBrowser*)self);
}

QMargins* k_textcustomeditor__richtextbrowser_super_viewport_margins(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperViewportMargins((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnViewportMargins((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_draw_frame(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_DrawFrame((TextCustomEditor__RichTextBrowser*)self, (QPainter*)param1);
}

void k_textcustomeditor__richtextbrowser_super_draw_frame(void* self, void* param1) {
    TextCustomEditor__RichTextBrowser_SuperDrawFrame((TextCustomEditor__RichTextBrowser*)self, (QPainter*)param1);
}

void k_textcustomeditor__richtextbrowser_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnDrawFrame((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_update_micro_focus(void* self) {
    TextCustomEditor__RichTextBrowser_UpdateMicroFocus((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_update_micro_focus(void* self) {
    TextCustomEditor__RichTextBrowser_SuperUpdateMicroFocus((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_update_micro_focus(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnUpdateMicroFocus((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_create(void* self) {
    TextCustomEditor__RichTextBrowser_Create((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_create(void* self) {
    TextCustomEditor__RichTextBrowser_SuperCreate((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_create(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnCreate((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_destroy(void* self) {
    TextCustomEditor__RichTextBrowser_Destroy((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_super_destroy(void* self) {
    TextCustomEditor__RichTextBrowser_SuperDestroy((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_destroy(void* self, void (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnDestroy((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_focus_next_child(void* self) {
    return TextCustomEditor__RichTextBrowser_FocusNextChild((TextCustomEditor__RichTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_super_focus_next_child(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperFocusNextChild((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_focus_next_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnFocusNextChild((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextBrowser_FocusPreviousChild((TextCustomEditor__RichTextBrowser*)self);
}

bool k_textcustomeditor__richtextbrowser_super_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperFocusPreviousChild((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_focus_previous_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnFocusPreviousChild((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtextbrowser_sender(void* self) {
    return TextCustomEditor__RichTextBrowser_Sender((TextCustomEditor__RichTextBrowser*)self);
}

QObject* k_textcustomeditor__richtextbrowser_super_sender(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperSender((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnSender((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextBrowser_SenderSignalIndex((TextCustomEditor__RichTextBrowser*)self);
}

int32_t k_textcustomeditor__richtextbrowser_super_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextBrowser_SuperSenderSignalIndex((TextCustomEditor__RichTextBrowser*)self);
}

void k_textcustomeditor__richtextbrowser_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextBrowser_OnSenderSignalIndex((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtextbrowser_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextBrowser_Receivers((TextCustomEditor__RichTextBrowser*)self, signal);
}

int32_t k_textcustomeditor__richtextbrowser_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextBrowser_SuperReceivers((TextCustomEditor__RichTextBrowser*)self, signal);
}

void k_textcustomeditor__richtextbrowser_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextBrowser_OnReceivers((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtextbrowser_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextBrowser_IsSignalConnected((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__richtextbrowser_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextBrowser_SuperIsSignalConnected((TextCustomEditor__RichTextBrowser*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtextbrowser_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextBrowser_OnIsSignalConnected((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

double k_textcustomeditor__richtextbrowser_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextBrowser_GetDecodedMetricF((TextCustomEditor__RichTextBrowser*)self, metricA, metricB);
}

double k_textcustomeditor__richtextbrowser_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextBrowser_SuperGetDecodedMetricF((TextCustomEditor__RichTextBrowser*)self, metricA, metricB);
}

void k_textcustomeditor__richtextbrowser_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextCustomEditor__RichTextBrowser_OnGetDecodedMetricF((TextCustomEditor__RichTextBrowser*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtextbrowser_delete(void* self) {
    TextCustomEditor__RichTextBrowser_Delete((TextCustomEditor__RichTextBrowser*)(self));
}
