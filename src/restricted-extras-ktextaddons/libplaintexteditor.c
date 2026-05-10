#include "../libqabstractscrollarea.hpp"
#include "../libqabstracttextdocumentlayout.hpp"
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
#include "../libqplaintextedit.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtextobject.hpp"
#include "../libqtextcursor.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../extras-sonnet/libhighlighter.hpp"
#include "../extras-sonnet/libspellcheckdecorator.hpp"
#include "libplaintexteditor.hpp"
#include "libplaintexteditor.h"

TextCustomEditor__PlainTextEditor* k_textcustomeditor__plaintexteditor_new(void* parent) {
    return TextCustomEditor__PlainTextEditor_new((QWidget*)parent);
}

TextCustomEditor__PlainTextEditor* k_textcustomeditor__plaintexteditor_new2() {
    return TextCustomEditor__PlainTextEditor_new2();
}

const QMetaObject* k_textcustomeditor__plaintexteditor_meta_object(void* self) {
    return TextCustomEditor__PlainTextEditor_MetaObject((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnMetaObject((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__plaintexteditor_super_meta_object(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperMetaObject((TextCustomEditor__PlainTextEditor*)self);
}

void* k_textcustomeditor__plaintexteditor_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextEditor_Metacast((TextCustomEditor__PlainTextEditor*)self, param1);
}

void k_textcustomeditor__plaintexteditor_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditor_OnMetacast((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void* k_textcustomeditor__plaintexteditor_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextEditor_SuperMetacast((TextCustomEditor__PlainTextEditor*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditor_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextEditor_Metacall((TextCustomEditor__PlainTextEditor*)self, param1, param2, param3);
}

void k_textcustomeditor__plaintexteditor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__PlainTextEditor_OnMetacall((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextEditor_SuperMetacall((TextCustomEditor__PlainTextEditor*)self, param1, param2, param3);
}

const char* k_textcustomeditor__plaintexteditor_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_search_support(void* self, bool b) {
    TextCustomEditor__PlainTextEditor_SetSearchSupport((TextCustomEditor__PlainTextEditor*)self, b);
}

bool k_textcustomeditor__plaintexteditor_search_support(void* self) {
    return TextCustomEditor__PlainTextEditor_SearchSupport((TextCustomEditor__PlainTextEditor*)self);
}

bool k_textcustomeditor__plaintexteditor_spell_checking_support(void* self) {
    return TextCustomEditor__PlainTextEditor_SpellCheckingSupport((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_set_spell_checking_support(void* self, bool check) {
    TextCustomEditor__PlainTextEditor_SetSpellCheckingSupport((TextCustomEditor__PlainTextEditor*)self, check);
}

void k_textcustomeditor__plaintexteditor_set_read_only(void* self, bool readOnly) {
    TextCustomEditor__PlainTextEditor_SetReadOnly((TextCustomEditor__PlainTextEditor*)self, readOnly);
}

void k_textcustomeditor__plaintexteditor_on_set_read_only(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditor_OnSetReadOnly((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_set_read_only(void* self, bool readOnly) {
    TextCustomEditor__PlainTextEditor_SuperSetReadOnly((TextCustomEditor__PlainTextEditor*)self, readOnly);
}

void k_textcustomeditor__plaintexteditor_set_text_to_speech_support(void* self, bool b) {
    TextCustomEditor__PlainTextEditor_SetTextToSpeechSupport((TextCustomEditor__PlainTextEditor*)self, b);
}

bool k_textcustomeditor__plaintexteditor_text_to_speech_support(void* self) {
    return TextCustomEditor__PlainTextEditor_TextToSpeechSupport((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_set_web_shortcut_support(void* self, bool b) {
    TextCustomEditor__PlainTextEditor_SetWebShortcutSupport((TextCustomEditor__PlainTextEditor*)self, b);
}

bool k_textcustomeditor__plaintexteditor_web_shortcut_support(void* self) {
    return TextCustomEditor__PlainTextEditor_WebShortcutSupport((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_create_highlighter(void* self) {
    TextCustomEditor__PlainTextEditor_CreateHighlighter((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_create_highlighter(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnCreateHighlighter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_create_highlighter(void* self) {
    TextCustomEditor__PlainTextEditor_SuperCreateHighlighter((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_add_ignore_words(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintexteditor_add_ignore_words\n");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    TextCustomEditor__PlainTextEditor_AddIgnoreWords((TextCustomEditor__PlainTextEditor*)self, lst_list);
    free(lst_qstr);
}

bool k_textcustomeditor__plaintexteditor_activate_language_menu(void* self) {
    return TextCustomEditor__PlainTextEditor_ActivateLanguageMenu((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_set_activate_language_menu(void* self, bool activate) {
    TextCustomEditor__PlainTextEditor_SetActivateLanguageMenu((TextCustomEditor__PlainTextEditor*)self, activate);
}

Sonnet__Highlighter* k_textcustomeditor__plaintexteditor_highlighter(void* self) {
    return TextCustomEditor__PlainTextEditor_Highlighter((TextCustomEditor__PlainTextEditor*)self);
}

bool k_textcustomeditor__plaintexteditor_check_spelling_enabled(void* self) {
    return TextCustomEditor__PlainTextEditor_CheckSpellingEnabled((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_set_check_spelling_enabled(void* self, bool check) {
    TextCustomEditor__PlainTextEditor_SetCheckSpellingEnabled((TextCustomEditor__PlainTextEditor*)self, check);
}

void k_textcustomeditor__plaintexteditor_set_spell_checking_config_file_name(void* self, const char* _fileName) {
    TextCustomEditor__PlainTextEditor_SetSpellCheckingConfigFileName((TextCustomEditor__PlainTextEditor*)self, qstring(_fileName));
}

const char* k_textcustomeditor__plaintexteditor_spell_checking_config_file_name(void* self) {
    libqt_string _str = TextCustomEditor__PlainTextEditor_SpellCheckingConfigFileName((TextCustomEditor__PlainTextEditor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditor_spell_checking_language(void* self) {
    libqt_string _str = TextCustomEditor__PlainTextEditor_SpellCheckingLanguage((TextCustomEditor__PlainTextEditor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_spell_checking_language(void* self, const char* _language) {
    TextCustomEditor__PlainTextEditor_SetSpellCheckingLanguage((TextCustomEditor__PlainTextEditor*)self, qstring(_language));
}

void k_textcustomeditor__plaintexteditor_set_emoji_support(void* self, bool b) {
    TextCustomEditor__PlainTextEditor_SetEmojiSupport((TextCustomEditor__PlainTextEditor*)self, b);
}

bool k_textcustomeditor__plaintexteditor_emoji_support(void* self) {
    return TextCustomEditor__PlainTextEditor_EmojiSupport((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_slot_display_message_indicator(void* self, const char* message) {
    TextCustomEditor__PlainTextEditor_SlotDisplayMessageIndicator((TextCustomEditor__PlainTextEditor*)self, qstring(message));
}

void k_textcustomeditor__plaintexteditor_slot_check_spelling(void* self) {
    TextCustomEditor__PlainTextEditor_SlotCheckSpelling((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_slot_speak_text(void* self) {
    TextCustomEditor__PlainTextEditor_SlotSpeakText((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_slot_zoom_reset(void* self) {
    TextCustomEditor__PlainTextEditor_SlotZoomReset((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__PlainTextEditor_AddExtraMenuEntry((TextCustomEditor__PlainTextEditor*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__plaintexteditor_on_add_extra_menu_entry(void* self, void (*callback)(void*, void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnAddExtraMenuEntry((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry((TextCustomEditor__PlainTextEditor*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__plaintexteditor_context_menu_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_ContextMenuEvent((TextCustomEditor__PlainTextEditor*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnContextMenuEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_context_menu_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperContextMenuEvent((TextCustomEditor__PlainTextEditor*)self, (QContextMenuEvent*)event);
}

bool k_textcustomeditor__plaintexteditor_event(void* self, void* ev) {
    return TextCustomEditor__PlainTextEditor_Event((TextCustomEditor__PlainTextEditor*)self, (QEvent*)ev);
}

void k_textcustomeditor__plaintexteditor_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_super_event(void* self, void* ev) {
    return TextCustomEditor__PlainTextEditor_SuperEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)ev);
}

void k_textcustomeditor__plaintexteditor_key_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_KeyPressEvent((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnKeyPressEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_key_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperKeyPressEvent((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

bool k_textcustomeditor__plaintexteditor_override_shortcut(void* self, void* event) {
    return TextCustomEditor__PlainTextEditor_OverrideShortcut((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_override_shortcut(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnOverrideShortcut((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_super_override_shortcut(void* self, void* event) {
    return TextCustomEditor__PlainTextEditor_SuperOverrideShortcut((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

bool k_textcustomeditor__plaintexteditor_handle_shortcut(void* self, void* event) {
    return TextCustomEditor__PlainTextEditor_HandleShortcut((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_handle_shortcut(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnHandleShortcut((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_super_handle_shortcut(void* self, void* event) {
    return TextCustomEditor__PlainTextEditor_SuperHandleShortcut((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditor_wheel_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_WheelEvent((TextCustomEditor__PlainTextEditor*)self, (QWheelEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnWheelEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_wheel_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperWheelEvent((TextCustomEditor__PlainTextEditor*)self, (QWheelEvent*)event);
}

Sonnet__SpellCheckDecorator* k_textcustomeditor__plaintexteditor_create_spell_check_decorator(void* self) {
    return TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_create_spell_check_decorator(void* self, Sonnet__SpellCheckDecorator* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnCreateSpellCheckDecorator((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

Sonnet__SpellCheckDecorator* k_textcustomeditor__plaintexteditor_super_create_spell_check_decorator(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_set_highlighter(void* self, void* _highLighter) {
    TextCustomEditor__PlainTextEditor_SetHighlighter((TextCustomEditor__PlainTextEditor*)self, (Sonnet__Highlighter*)_highLighter);
}

void k_textcustomeditor__plaintexteditor_on_set_highlighter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnSetHighlighter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_set_highlighter(void* self, void* _highLighter) {
    TextCustomEditor__PlainTextEditor_SuperSetHighlighter((TextCustomEditor__PlainTextEditor*)self, (Sonnet__Highlighter*)_highLighter);
}

void k_textcustomeditor__plaintexteditor_focus_in_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_FocusInEvent((TextCustomEditor__PlainTextEditor*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnFocusInEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_focus_in_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperFocusInEvent((TextCustomEditor__PlainTextEditor*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditor_update_high_lighter(void* self) {
    TextCustomEditor__PlainTextEditor_UpdateHighLighter((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_update_high_lighter(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnUpdateHighLighter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_update_high_lighter(void* self) {
    TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_clear_decorator(void* self) {
    TextCustomEditor__PlainTextEditor_ClearDecorator((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_clear_decorator(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnClearDecorator((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_super_clear_decorator(void* self) {
    TextCustomEditor__PlainTextEditor_SuperClearDecorator((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_find_text(void* self) {
    TextCustomEditor__PlainTextEditor_FindText((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_find_text(void* self, void (*callback)(void*)) {
    TextCustomEditor__PlainTextEditor_Connect_FindText((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_replace_text(void* self) {
    TextCustomEditor__PlainTextEditor_ReplaceText((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_replace_text(void* self, void (*callback)(void*)) {
    TextCustomEditor__PlainTextEditor_Connect_ReplaceText((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord) {
    TextCustomEditor__PlainTextEditor_SpellCheckerAutoCorrect((TextCustomEditor__PlainTextEditor*)self, qstring(currentWord), qstring(autoCorrectWord));
}

void k_textcustomeditor__plaintexteditor_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*)) {
    TextCustomEditor__PlainTextEditor_Connect_SpellCheckerAutoCorrect((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_check_spelling_changed(void* self, bool param1) {
    TextCustomEditor__PlainTextEditor_CheckSpellingChanged((TextCustomEditor__PlainTextEditor*)self, param1);
}

void k_textcustomeditor__plaintexteditor_on_check_spelling_changed(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditor_Connect_CheckSpellingChanged((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_language_changed(void* self, const char* param1) {
    TextCustomEditor__PlainTextEditor_LanguageChanged((TextCustomEditor__PlainTextEditor*)self, qstring(param1));
}

void k_textcustomeditor__plaintexteditor_on_language_changed(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditor_Connect_LanguageChanged((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_spell_check_status(void* self, const char* param1) {
    TextCustomEditor__PlainTextEditor_SpellCheckStatus((TextCustomEditor__PlainTextEditor*)self, qstring(param1));
}

void k_textcustomeditor__plaintexteditor_on_spell_check_status(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditor_Connect_SpellCheckStatus((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_say(void* self, const char* text) {
    TextCustomEditor__PlainTextEditor_Say((TextCustomEditor__PlainTextEditor*)self, qstring(text));
}

void k_textcustomeditor__plaintexteditor_on_say(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditor_Connect_Say((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

const char* k_textcustomeditor__plaintexteditor_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_document(void* self, void* document) {
    QPlainTextEdit_SetDocument((QPlainTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textcustomeditor__plaintexteditor_document(void* self) {
    return QPlainTextEdit_Document((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_placeholder_text(void* self, const char* placeholderText) {
    QPlainTextEdit_SetPlaceholderText((QPlainTextEdit*)self, qstring(placeholderText));
}

const char* k_textcustomeditor__plaintexteditor_placeholder_text(void* self) {
    libqt_string _str = QPlainTextEdit_PlaceholderText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_SetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textcustomeditor__plaintexteditor_text_cursor(void* self) {
    return QPlainTextEdit_TextCursor((QPlainTextEdit*)self);
}

bool k_textcustomeditor__plaintexteditor_is_read_only(void* self) {
    return QPlainTextEdit_IsReadOnly((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_text_interaction_flags(void* self, int32_t flags) {
    QPlainTextEdit_SetTextInteractionFlags((QPlainTextEdit*)self, flags);
}

int32_t k_textcustomeditor__plaintexteditor_text_interaction_flags(void* self) {
    return QPlainTextEdit_TextInteractionFlags((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_merge_current_char_format(void* self, void* modifier) {
    QPlainTextEdit_MergeCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textcustomeditor__plaintexteditor_set_current_char_format(void* self, void* format) {
    QPlainTextEdit_SetCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textcustomeditor__plaintexteditor_current_char_format(void* self) {
    return QPlainTextEdit_CurrentCharFormat((QPlainTextEdit*)self);
}

bool k_textcustomeditor__plaintexteditor_tab_changes_focus(void* self) {
    return QPlainTextEdit_TabChangesFocus((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_tab_changes_focus(void* self, bool b) {
    QPlainTextEdit_SetTabChangesFocus((QPlainTextEdit*)self, b);
}

void k_textcustomeditor__plaintexteditor_set_document_title(void* self, const char* title) {
    QPlainTextEdit_SetDocumentTitle((QPlainTextEdit*)self, qstring(title));
}

const char* k_textcustomeditor__plaintexteditor_document_title(void* self) {
    libqt_string _str = QPlainTextEdit_DocumentTitle((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintexteditor_is_undo_redo_enabled(void* self) {
    return QPlainTextEdit_IsUndoRedoEnabled((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_undo_redo_enabled(void* self, bool enable) {
    QPlainTextEdit_SetUndoRedoEnabled((QPlainTextEdit*)self, enable);
}

void k_textcustomeditor__plaintexteditor_set_maximum_block_count(void* self, int maximum) {
    QPlainTextEdit_SetMaximumBlockCount((QPlainTextEdit*)self, maximum);
}

int32_t k_textcustomeditor__plaintexteditor_maximum_block_count(void* self) {
    return QPlainTextEdit_MaximumBlockCount((QPlainTextEdit*)self);
}

int32_t k_textcustomeditor__plaintexteditor_line_wrap_mode(void* self) {
    return QPlainTextEdit_LineWrapMode((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_line_wrap_mode(void* self, int32_t mode) {
    QPlainTextEdit_SetLineWrapMode((QPlainTextEdit*)self, mode);
}

int32_t k_textcustomeditor__plaintexteditor_word_wrap_mode(void* self) {
    return QPlainTextEdit_WordWrapMode((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_word_wrap_mode(void* self, int32_t policy) {
    QPlainTextEdit_SetWordWrapMode((QPlainTextEdit*)self, policy);
}

void k_textcustomeditor__plaintexteditor_set_background_visible(void* self, bool visible) {
    QPlainTextEdit_SetBackgroundVisible((QPlainTextEdit*)self, visible);
}

bool k_textcustomeditor__plaintexteditor_background_visible(void* self) {
    return QPlainTextEdit_BackgroundVisible((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_center_on_scroll(void* self, bool enabled) {
    QPlainTextEdit_SetCenterOnScroll((QPlainTextEdit*)self, enabled);
}

bool k_textcustomeditor__plaintexteditor_center_on_scroll(void* self) {
    return QPlainTextEdit_CenterOnScroll((QPlainTextEdit*)self);
}

bool k_textcustomeditor__plaintexteditor_find(void* self, const char* exp) {
    return QPlainTextEdit_Find((QPlainTextEdit*)self, qstring(exp));
}

bool k_textcustomeditor__plaintexteditor_find2(void* self, void* exp) {
    return QPlainTextEdit_Find2((QPlainTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textcustomeditor__plaintexteditor_to_plain_text(void* self) {
    libqt_string _str = QPlainTextEdit_ToPlainText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_ensure_cursor_visible(void* self) {
    QPlainTextEdit_EnsureCursorVisible((QPlainTextEdit*)self);
}

QMenu* k_textcustomeditor__plaintexteditor_create_standard_context_menu(void* self) {
    return QPlainTextEdit_CreateStandardContextMenu((QPlainTextEdit*)self);
}

QMenu* k_textcustomeditor__plaintexteditor_create_standard_context_menu2(void* self, void* position) {
    return QPlainTextEdit_CreateStandardContextMenu2((QPlainTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textcustomeditor__plaintexteditor_cursor_for_position(void* self, void* pos) {
    return QPlainTextEdit_CursorForPosition((QPlainTextEdit*)self, (QPoint*)pos);
}

QRect* k_textcustomeditor__plaintexteditor_cursor_rect(void* self, void* cursor) {
    return QPlainTextEdit_CursorRect((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textcustomeditor__plaintexteditor_cursor_rect2(void* self) {
    return QPlainTextEdit_CursorRect2((QPlainTextEdit*)self);
}

const char* k_textcustomeditor__plaintexteditor_anchor_at(void* self, void* pos) {
    libqt_string _str = QPlainTextEdit_AnchorAt((QPlainTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintexteditor_overwrite_mode(void* self) {
    return QPlainTextEdit_OverwriteMode((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_overwrite_mode(void* self, bool overwrite) {
    QPlainTextEdit_SetOverwriteMode((QPlainTextEdit*)self, overwrite);
}

double k_textcustomeditor__plaintexteditor_tab_stop_distance(void* self) {
    return QPlainTextEdit_TabStopDistance((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_tab_stop_distance(void* self, double distance) {
    QPlainTextEdit_SetTabStopDistance((QPlainTextEdit*)self, distance);
}

int32_t k_textcustomeditor__plaintexteditor_cursor_width(void* self) {
    return QPlainTextEdit_CursorWidth((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_set_cursor_width(void* self, int width) {
    QPlainTextEdit_SetCursorWidth((QPlainTextEdit*)self, width);
}

void k_textcustomeditor__plaintexteditor_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QPlainTextEdit_SetExtraSelections((QPlainTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textcustomeditor__plaintexteditor_extra_selections(void* self) {
    libqt_list _arr = QPlainTextEdit_ExtraSelections((QPlainTextEdit*)self);
    return _arr;
}

void k_textcustomeditor__plaintexteditor_move_cursor(void* self, int32_t operation) {
    QPlainTextEdit_MoveCursor((QPlainTextEdit*)self, operation);
}

bool k_textcustomeditor__plaintexteditor_can_paste(void* self) {
    return QPlainTextEdit_CanPaste((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_print(void* self, void* printer) {
    QPlainTextEdit_Print((QPlainTextEdit*)self, (QPagedPaintDevice*)printer);
}

int32_t k_textcustomeditor__plaintexteditor_block_count(void* self) {
    return QPlainTextEdit_BlockCount((QPlainTextEdit*)self);
}

QVariant* k_textcustomeditor__plaintexteditor_input_method_query2(void* self, int32_t query, void* argument) {
    return QPlainTextEdit_InputMethodQuery2((QPlainTextEdit*)self, query, (QVariant*)argument);
}

void k_textcustomeditor__plaintexteditor_set_plain_text(void* self, const char* text) {
    QPlainTextEdit_SetPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_textcustomeditor__plaintexteditor_cut(void* self) {
    QPlainTextEdit_Cut((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_copy(void* self) {
    QPlainTextEdit_Copy((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_paste(void* self) {
    QPlainTextEdit_Paste((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_undo(void* self) {
    QPlainTextEdit_Undo((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_redo(void* self) {
    QPlainTextEdit_Redo((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_clear(void* self) {
    QPlainTextEdit_Clear((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_select_all(void* self) {
    QPlainTextEdit_SelectAll((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_insert_plain_text(void* self, const char* text) {
    QPlainTextEdit_InsertPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_textcustomeditor__plaintexteditor_append_plain_text(void* self, const char* text) {
    QPlainTextEdit_AppendPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_textcustomeditor__plaintexteditor_append_html(void* self, const char* html) {
    QPlainTextEdit_AppendHtml((QPlainTextEdit*)self, qstring(html));
}

void k_textcustomeditor__plaintexteditor_center_cursor(void* self) {
    QPlainTextEdit_CenterCursor((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_zoom_in(void* self) {
    QPlainTextEdit_ZoomIn((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_zoom_out(void* self) {
    QPlainTextEdit_ZoomOut((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_text_changed(void* self) {
    QPlainTextEdit_TextChanged((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_on_text_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_TextChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_undo_available(void* self, bool b) {
    QPlainTextEdit_UndoAvailable((QPlainTextEdit*)self, b);
}

void k_textcustomeditor__plaintexteditor_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_UndoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_redo_available(void* self, bool b) {
    QPlainTextEdit_RedoAvailable((QPlainTextEdit*)self, b);
}

void k_textcustomeditor__plaintexteditor_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_RedoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_copy_available(void* self, bool b) {
    QPlainTextEdit_CopyAvailable((QPlainTextEdit*)self, b);
}

void k_textcustomeditor__plaintexteditor_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_CopyAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_selection_changed(void* self) {
    QPlainTextEdit_SelectionChanged((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_on_selection_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_SelectionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_cursor_position_changed(void* self) {
    QPlainTextEdit_CursorPositionChanged((QPlainTextEdit*)self);
}

void k_textcustomeditor__plaintexteditor_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_CursorPositionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_update_request(void* self, void* rect, int dy) {
    QPlainTextEdit_UpdateRequest((QPlainTextEdit*)self, (QRect*)rect, dy);
}

void k_textcustomeditor__plaintexteditor_on_update_request(void* self, void (*callback)(void*, void*, int)) {
    QPlainTextEdit_Connect_UpdateRequest((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_block_count_changed(void* self, int newBlockCount) {
    QPlainTextEdit_BlockCountChanged((QPlainTextEdit*)self, newBlockCount);
}

void k_textcustomeditor__plaintexteditor_on_block_count_changed(void* self, void (*callback)(void*, int)) {
    QPlainTextEdit_Connect_BlockCountChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_modification_changed(void* self, bool param1) {
    QPlainTextEdit_ModificationChanged((QPlainTextEdit*)self, param1);
}

void k_textcustomeditor__plaintexteditor_on_modification_changed(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_ModificationChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_find22(void* self, const char* exp, int32_t options) {
    return QPlainTextEdit_Find22((QPlainTextEdit*)self, qstring(exp), options);
}

bool k_textcustomeditor__plaintexteditor_find23(void* self, void* exp, int32_t options) {
    return QPlainTextEdit_Find23((QPlainTextEdit*)self, (QRegularExpression*)exp, options);
}

void k_textcustomeditor__plaintexteditor_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QPlainTextEdit_MoveCursor2((QPlainTextEdit*)self, operation, mode);
}

void k_textcustomeditor__plaintexteditor_zoom_in1(void* self, int range) {
    QPlainTextEdit_ZoomIn1((QPlainTextEdit*)self, range);
}

void k_textcustomeditor__plaintexteditor_zoom_out1(void* self, int range) {
    QPlainTextEdit_ZoomOut1((QPlainTextEdit*)self, range);
}

int32_t k_textcustomeditor__plaintexteditor_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__plaintexteditor_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textcustomeditor__plaintexteditor_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__plaintexteditor_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textcustomeditor__plaintexteditor_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textcustomeditor__plaintexteditor_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textcustomeditor__plaintexteditor_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textcustomeditor__plaintexteditor_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textcustomeditor__plaintexteditor_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textcustomeditor__plaintexteditor_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__plaintexteditor_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textcustomeditor__plaintexteditor_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textcustomeditor__plaintexteditor_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textcustomeditor__plaintexteditor_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textcustomeditor__plaintexteditor_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textcustomeditor__plaintexteditor_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textcustomeditor__plaintexteditor_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textcustomeditor__plaintexteditor_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textcustomeditor__plaintexteditor_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textcustomeditor__plaintexteditor_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__plaintexteditor_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__plaintexteditor_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textcustomeditor__plaintexteditor_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textcustomeditor__plaintexteditor_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textcustomeditor__plaintexteditor_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__plaintexteditor_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textcustomeditor__plaintexteditor_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textcustomeditor__plaintexteditor_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textcustomeditor__plaintexteditor_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textcustomeditor__plaintexteditor_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditor_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textcustomeditor__plaintexteditor_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditor_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditor_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditor_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditor_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textcustomeditor__plaintexteditor_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditor_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditor_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textcustomeditor__plaintexteditor_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textcustomeditor__plaintexteditor_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textcustomeditor__plaintexteditor_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textcustomeditor__plaintexteditor_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textcustomeditor__plaintexteditor_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textcustomeditor__plaintexteditor_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textcustomeditor__plaintexteditor_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textcustomeditor__plaintexteditor_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textcustomeditor__plaintexteditor_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textcustomeditor__plaintexteditor_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textcustomeditor__plaintexteditor_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textcustomeditor__plaintexteditor_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textcustomeditor__plaintexteditor_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textcustomeditor__plaintexteditor_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textcustomeditor__plaintexteditor_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textcustomeditor__plaintexteditor_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditor_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditor_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditor_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditor_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditor_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditor_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditor_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditor_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__plaintexteditor_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textcustomeditor__plaintexteditor_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__plaintexteditor_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textcustomeditor__plaintexteditor_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditor_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditor_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textcustomeditor__plaintexteditor_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textcustomeditor__plaintexteditor_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textcustomeditor__plaintexteditor_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textcustomeditor__plaintexteditor_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textcustomeditor__plaintexteditor_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textcustomeditor__plaintexteditor_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textcustomeditor__plaintexteditor_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textcustomeditor__plaintexteditor_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textcustomeditor__plaintexteditor_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__plaintexteditor_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__plaintexteditor_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textcustomeditor__plaintexteditor_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textcustomeditor__plaintexteditor_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textcustomeditor__plaintexteditor_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textcustomeditor__plaintexteditor_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textcustomeditor__plaintexteditor_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textcustomeditor__plaintexteditor_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__plaintexteditor_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__plaintexteditor_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textcustomeditor__plaintexteditor_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textcustomeditor__plaintexteditor_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditor_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textcustomeditor__plaintexteditor_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textcustomeditor__plaintexteditor_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textcustomeditor__plaintexteditor_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textcustomeditor__plaintexteditor_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textcustomeditor__plaintexteditor_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textcustomeditor__plaintexteditor_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textcustomeditor__plaintexteditor_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textcustomeditor__plaintexteditor_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textcustomeditor__plaintexteditor_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditor_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textcustomeditor__plaintexteditor_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textcustomeditor__plaintexteditor_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textcustomeditor__plaintexteditor_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textcustomeditor__plaintexteditor_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textcustomeditor__plaintexteditor_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textcustomeditor__plaintexteditor_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textcustomeditor__plaintexteditor_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textcustomeditor__plaintexteditor_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textcustomeditor__plaintexteditor_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textcustomeditor__plaintexteditor_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textcustomeditor__plaintexteditor_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textcustomeditor__plaintexteditor_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textcustomeditor__plaintexteditor_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textcustomeditor__plaintexteditor_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textcustomeditor__plaintexteditor_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textcustomeditor__plaintexteditor_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textcustomeditor__plaintexteditor_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditor_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__plaintexteditor_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__plaintexteditor_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditor_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__plaintexteditor_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__plaintexteditor_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textcustomeditor__plaintexteditor_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__plaintexteditor_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textcustomeditor__plaintexteditor_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textcustomeditor__plaintexteditor_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textcustomeditor__plaintexteditor_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textcustomeditor__plaintexteditor_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditor_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textcustomeditor__plaintexteditor_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintexteditor_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textcustomeditor__plaintexteditor_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textcustomeditor__plaintexteditor_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditor_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textcustomeditor__plaintexteditor_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textcustomeditor__plaintexteditor_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textcustomeditor__plaintexteditor_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textcustomeditor__plaintexteditor_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textcustomeditor__plaintexteditor_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textcustomeditor__plaintexteditor_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditor_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textcustomeditor__plaintexteditor_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textcustomeditor__plaintexteditor_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textcustomeditor__plaintexteditor_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textcustomeditor__plaintexteditor_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textcustomeditor__plaintexteditor_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textcustomeditor__plaintexteditor_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditor_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditor_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textcustomeditor__plaintexteditor_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textcustomeditor__plaintexteditor_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textcustomeditor__plaintexteditor_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textcustomeditor__plaintexteditor_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textcustomeditor__plaintexteditor_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textcustomeditor__plaintexteditor_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textcustomeditor__plaintexteditor_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textcustomeditor__plaintexteditor_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textcustomeditor__plaintexteditor_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textcustomeditor__plaintexteditor_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textcustomeditor__plaintexteditor_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__plaintexteditor_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textcustomeditor__plaintexteditor_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__plaintexteditor_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditor_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textcustomeditor__plaintexteditor_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textcustomeditor__plaintexteditor_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textcustomeditor__plaintexteditor_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textcustomeditor__plaintexteditor_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textcustomeditor__plaintexteditor_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditor_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textcustomeditor__plaintexteditor_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textcustomeditor__plaintexteditor_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textcustomeditor__plaintexteditor_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textcustomeditor__plaintexteditor_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textcustomeditor__plaintexteditor_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textcustomeditor__plaintexteditor_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textcustomeditor__plaintexteditor_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textcustomeditor__plaintexteditor_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textcustomeditor__plaintexteditor_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textcustomeditor__plaintexteditor_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textcustomeditor__plaintexteditor_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textcustomeditor__plaintexteditor_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textcustomeditor__plaintexteditor_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__plaintexteditor_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textcustomeditor__plaintexteditor_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textcustomeditor__plaintexteditor_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__plaintexteditor_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textcustomeditor__plaintexteditor_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textcustomeditor__plaintexteditor_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textcustomeditor__plaintexteditor_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textcustomeditor__plaintexteditor_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textcustomeditor__plaintexteditor_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textcustomeditor__plaintexteditor_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textcustomeditor__plaintexteditor_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textcustomeditor__plaintexteditor_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textcustomeditor__plaintexteditor_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textcustomeditor__plaintexteditor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditor_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__plaintexteditor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__plaintexteditor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__plaintexteditor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__plaintexteditor_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__plaintexteditor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__plaintexteditor_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__plaintexteditor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__plaintexteditor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__plaintexteditor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__plaintexteditor_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintexteditor_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__plaintexteditor_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__plaintexteditor_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__plaintexteditor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__plaintexteditor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__plaintexteditor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__plaintexteditor_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintexteditor_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__plaintexteditor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__plaintexteditor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__plaintexteditor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__plaintexteditor_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintexteditor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__plaintexteditor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__plaintexteditor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__plaintexteditor_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__plaintexteditor_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__plaintexteditor_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__plaintexteditor_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__plaintexteditor_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintexteditor_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__plaintexteditor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__plaintexteditor_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditor_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditor_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditor_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditor_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textcustomeditor__plaintexteditor_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textcustomeditor__plaintexteditor_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__PlainTextEditor_LoadResource((TextCustomEditor__PlainTextEditor*)self, type, (QUrl*)name);
}

QVariant* k_textcustomeditor__plaintexteditor_super_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__PlainTextEditor_SuperLoadResource((TextCustomEditor__PlainTextEditor*)self, type, (QUrl*)name);
}

void k_textcustomeditor__plaintexteditor_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextCustomEditor__PlainTextEditor_OnLoadResource((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QVariant* k_textcustomeditor__plaintexteditor_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__PlainTextEditor_InputMethodQuery((TextCustomEditor__PlainTextEditor*)self, property);
}

QVariant* k_textcustomeditor__plaintexteditor_super_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__PlainTextEditor_SuperInputMethodQuery((TextCustomEditor__PlainTextEditor*)self, property);
}

void k_textcustomeditor__plaintexteditor_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextCustomEditor__PlainTextEditor_OnInputMethodQuery((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_timer_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_TimerEvent((TextCustomEditor__PlainTextEditor*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_timer_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperTimerEvent((TextCustomEditor__PlainTextEditor*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnTimerEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_key_release_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_KeyReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_key_release_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnKeyReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_resize_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_ResizeEvent((TextCustomEditor__PlainTextEditor*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_resize_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperResizeEvent((TextCustomEditor__PlainTextEditor*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnResizeEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_paint_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_PaintEvent((TextCustomEditor__PlainTextEditor*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_paint_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperPaintEvent((TextCustomEditor__PlainTextEditor*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnPaintEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_mouse_press_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_MousePressEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_mouse_press_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperMousePressEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnMousePressEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_mouse_move_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_MouseMoveEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_mouse_move_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnMouseMoveEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_mouse_release_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_MouseReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_mouse_release_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnMouseReleaseEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent((TextCustomEditor__PlainTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnMouseDoubleClickEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__PlainTextEditor_FocusNextPrevChild((TextCustomEditor__PlainTextEditor*)self, next);
}

bool k_textcustomeditor__plaintexteditor_super_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild((TextCustomEditor__PlainTextEditor*)self, next);
}

void k_textcustomeditor__plaintexteditor_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditor_OnFocusNextPrevChild((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_drag_enter_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_DragEnterEvent((TextCustomEditor__PlainTextEditor*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_drag_enter_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperDragEnterEvent((TextCustomEditor__PlainTextEditor*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDragEnterEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_drag_leave_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_DragLeaveEvent((TextCustomEditor__PlainTextEditor*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_drag_leave_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent((TextCustomEditor__PlainTextEditor*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDragLeaveEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_drag_move_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_DragMoveEvent((TextCustomEditor__PlainTextEditor*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_drag_move_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperDragMoveEvent((TextCustomEditor__PlainTextEditor*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDragMoveEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_drop_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_DropEvent((TextCustomEditor__PlainTextEditor*)self, (QDropEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_drop_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperDropEvent((TextCustomEditor__PlainTextEditor*)self, (QDropEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDropEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_focus_out_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_FocusOutEvent((TextCustomEditor__PlainTextEditor*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_focus_out_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperFocusOutEvent((TextCustomEditor__PlainTextEditor*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnFocusOutEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_show_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_ShowEvent((TextCustomEditor__PlainTextEditor*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__plaintexteditor_super_show_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_SuperShowEvent((TextCustomEditor__PlainTextEditor*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__plaintexteditor_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnShowEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_change_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_ChangeEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)e);
}

void k_textcustomeditor__plaintexteditor_super_change_event(void* self, void* e) {
    TextCustomEditor__PlainTextEditor_SuperChangeEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)e);
}

void k_textcustomeditor__plaintexteditor_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnChangeEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QMimeData* k_textcustomeditor__plaintexteditor_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection((TextCustomEditor__PlainTextEditor*)self);
}

QMimeData* k_textcustomeditor__plaintexteditor_super_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnCreateMimeDataFromSelection((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__PlainTextEditor_CanInsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (QMimeData*)source);
}

bool k_textcustomeditor__plaintexteditor_super_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__plaintexteditor_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnCanInsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__PlainTextEditor_InsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__plaintexteditor_super_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__plaintexteditor_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnInsertFromMimeData((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_input_method_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_InputMethodEvent((TextCustomEditor__PlainTextEditor*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__plaintexteditor_super_input_method_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_SuperInputMethodEvent((TextCustomEditor__PlainTextEditor*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__plaintexteditor_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnInputMethodEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__PlainTextEditor_ScrollContentsBy((TextCustomEditor__PlainTextEditor*)self, dx, dy);
}

void k_textcustomeditor__plaintexteditor_super_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__PlainTextEditor_SuperScrollContentsBy((TextCustomEditor__PlainTextEditor*)self, dx, dy);
}

void k_textcustomeditor__plaintexteditor_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextCustomEditor__PlainTextEditor_OnScrollContentsBy((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__PlainTextEditor_DoSetTextCursor((TextCustomEditor__PlainTextEditor*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__plaintexteditor_super_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor((TextCustomEditor__PlainTextEditor*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__plaintexteditor_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDoSetTextCursor((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__plaintexteditor_minimum_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_MinimumSizeHint((TextCustomEditor__PlainTextEditor*)self);
}

QSize* k_textcustomeditor__plaintexteditor_super_minimum_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperMinimumSizeHint((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnMinimumSizeHint((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__plaintexteditor_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_SizeHint((TextCustomEditor__PlainTextEditor*)self);
}

QSize* k_textcustomeditor__plaintexteditor_super_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperSizeHint((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnSizeHint((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__PlainTextEditor_SetupViewport((TextCustomEditor__PlainTextEditor*)self, (QWidget*)viewport);
}

void k_textcustomeditor__plaintexteditor_super_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__PlainTextEditor_SuperSetupViewport((TextCustomEditor__PlainTextEditor*)self, (QWidget*)viewport);
}

void k_textcustomeditor__plaintexteditor_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnSetupViewport((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__PlainTextEditor_EventFilter((TextCustomEditor__PlainTextEditor*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textcustomeditor__plaintexteditor_super_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__PlainTextEditor_SuperEventFilter((TextCustomEditor__PlainTextEditor*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textcustomeditor__plaintexteditor_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnEventFilter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_viewport_event(void* self, void* param1) {
    return TextCustomEditor__PlainTextEditor_ViewportEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)param1);
}

bool k_textcustomeditor__plaintexteditor_super_viewport_event(void* self, void* param1) {
    return TextCustomEditor__PlainTextEditor_SuperViewportEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)param1);
}

void k_textcustomeditor__plaintexteditor_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnViewportEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__plaintexteditor_viewport_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_ViewportSizeHint((TextCustomEditor__PlainTextEditor*)self);
}

QSize* k_textcustomeditor__plaintexteditor_super_viewport_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperViewportSizeHint((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnViewportSizeHint((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_init_style_option(void* self, void* option) {
    TextCustomEditor__PlainTextEditor_InitStyleOption((TextCustomEditor__PlainTextEditor*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__plaintexteditor_super_init_style_option(void* self, void* option) {
    TextCustomEditor__PlainTextEditor_SuperInitStyleOption((TextCustomEditor__PlainTextEditor*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__plaintexteditor_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnInitStyleOption((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_dev_type(void* self) {
    return TextCustomEditor__PlainTextEditor_DevType((TextCustomEditor__PlainTextEditor*)self);
}

int32_t k_textcustomeditor__plaintexteditor_super_dev_type(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperDevType((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_dev_type(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnDevType((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_set_visible(void* self, bool visible) {
    TextCustomEditor__PlainTextEditor_SetVisible((TextCustomEditor__PlainTextEditor*)self, visible);
}

void k_textcustomeditor__plaintexteditor_super_set_visible(void* self, bool visible) {
    TextCustomEditor__PlainTextEditor_SuperSetVisible((TextCustomEditor__PlainTextEditor*)self, visible);
}

void k_textcustomeditor__plaintexteditor_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditor_OnSetVisible((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_height_for_width(void* self, int param1) {
    return TextCustomEditor__PlainTextEditor_HeightForWidth((TextCustomEditor__PlainTextEditor*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditor_super_height_for_width(void* self, int param1) {
    return TextCustomEditor__PlainTextEditor_SuperHeightForWidth((TextCustomEditor__PlainTextEditor*)self, param1);
}

void k_textcustomeditor__plaintexteditor_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextCustomEditor__PlainTextEditor_OnHeightForWidth((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_has_height_for_width(void* self) {
    return TextCustomEditor__PlainTextEditor_HasHeightForWidth((TextCustomEditor__PlainTextEditor*)self);
}

bool k_textcustomeditor__plaintexteditor_super_has_height_for_width(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperHasHeightForWidth((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_has_height_for_width(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnHasHeightForWidth((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QPaintEngine* k_textcustomeditor__plaintexteditor_paint_engine(void* self) {
    return TextCustomEditor__PlainTextEditor_PaintEngine((TextCustomEditor__PlainTextEditor*)self);
}

QPaintEngine* k_textcustomeditor__plaintexteditor_super_paint_engine(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperPaintEngine((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnPaintEngine((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_EnterEvent((TextCustomEditor__PlainTextEditor*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperEnterEvent((TextCustomEditor__PlainTextEditor*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnEnterEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_LeaveEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperLeaveEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnLeaveEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_MoveEvent((TextCustomEditor__PlainTextEditor*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperMoveEvent((TextCustomEditor__PlainTextEditor*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnMoveEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_close_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_CloseEvent((TextCustomEditor__PlainTextEditor*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_close_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperCloseEvent((TextCustomEditor__PlainTextEditor*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnCloseEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_tablet_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_TabletEvent((TextCustomEditor__PlainTextEditor*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_tablet_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperTabletEvent((TextCustomEditor__PlainTextEditor*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnTabletEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_action_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_ActionEvent((TextCustomEditor__PlainTextEditor*)self, (QActionEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_action_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperActionEvent((TextCustomEditor__PlainTextEditor*)self, (QActionEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnActionEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_hide_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_HideEvent((TextCustomEditor__PlainTextEditor*)self, (QHideEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_hide_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperHideEvent((TextCustomEditor__PlainTextEditor*)self, (QHideEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnHideEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__PlainTextEditor_NativeEvent((TextCustomEditor__PlainTextEditor*)self, qstring(eventType), message, result);
}

bool k_textcustomeditor__plaintexteditor_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__PlainTextEditor_SuperNativeEvent((TextCustomEditor__PlainTextEditor*)self, qstring(eventType), message, result);
}

void k_textcustomeditor__plaintexteditor_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextCustomEditor__PlainTextEditor_OnNativeEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_metric(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditor_Metric((TextCustomEditor__PlainTextEditor*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditor_super_metric(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditor_SuperMetric((TextCustomEditor__PlainTextEditor*)self, param1);
}

void k_textcustomeditor__plaintexteditor_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextCustomEditor__PlainTextEditor_OnMetric((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_init_painter(void* self, void* painter) {
    TextCustomEditor__PlainTextEditor_InitPainter((TextCustomEditor__PlainTextEditor*)self, (QPainter*)painter);
}

void k_textcustomeditor__plaintexteditor_super_init_painter(void* self, void* painter) {
    TextCustomEditor__PlainTextEditor_SuperInitPainter((TextCustomEditor__PlainTextEditor*)self, (QPainter*)painter);
}

void k_textcustomeditor__plaintexteditor_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnInitPainter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QPaintDevice* k_textcustomeditor__plaintexteditor_redirected(void* self, void* offset) {
    return TextCustomEditor__PlainTextEditor_Redirected((TextCustomEditor__PlainTextEditor*)self, (QPoint*)offset);
}

QPaintDevice* k_textcustomeditor__plaintexteditor_super_redirected(void* self, void* offset) {
    return TextCustomEditor__PlainTextEditor_SuperRedirected((TextCustomEditor__PlainTextEditor*)self, (QPoint*)offset);
}

void k_textcustomeditor__plaintexteditor_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnRedirected((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QPainter* k_textcustomeditor__plaintexteditor_shared_painter(void* self) {
    return TextCustomEditor__PlainTextEditor_SharedPainter((TextCustomEditor__PlainTextEditor*)self);
}

QPainter* k_textcustomeditor__plaintexteditor_super_shared_painter(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperSharedPainter((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnSharedPainter((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_ChildEvent((TextCustomEditor__PlainTextEditor*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperChildEvent((TextCustomEditor__PlainTextEditor*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnChildEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_CustomEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditor_super_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditor_SuperCustomEvent((TextCustomEditor__PlainTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditor_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnCustomEvent((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditor_ConnectNotify((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditor_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditor_SuperConnectNotify((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditor_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnConnectNotify((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditor_DisconnectNotify((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditor_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditor_SuperDisconnectNotify((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditor_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDisconnectNotify((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QTextBlock* k_textcustomeditor__plaintexteditor_first_visible_block(void* self) {
    return TextCustomEditor__PlainTextEditor_FirstVisibleBlock((TextCustomEditor__PlainTextEditor*)self);
}

QTextBlock* k_textcustomeditor__plaintexteditor_super_first_visible_block(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperFirstVisibleBlock((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_first_visible_block(void* self, QTextBlock* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnFirstVisibleBlock((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QPointF* k_textcustomeditor__plaintexteditor_content_offset(void* self) {
    return TextCustomEditor__PlainTextEditor_ContentOffset((TextCustomEditor__PlainTextEditor*)self);
}

QPointF* k_textcustomeditor__plaintexteditor_super_content_offset(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperContentOffset((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_content_offset(void* self, QPointF* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnContentOffset((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QRectF* k_textcustomeditor__plaintexteditor_block_bounding_rect(void* self, void* block) {
    return TextCustomEditor__PlainTextEditor_BlockBoundingRect((TextCustomEditor__PlainTextEditor*)self, (QTextBlock*)block);
}

QRectF* k_textcustomeditor__plaintexteditor_super_block_bounding_rect(void* self, void* block) {
    return TextCustomEditor__PlainTextEditor_SuperBlockBoundingRect((TextCustomEditor__PlainTextEditor*)self, (QTextBlock*)block);
}

void k_textcustomeditor__plaintexteditor_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnBlockBoundingRect((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QRectF* k_textcustomeditor__plaintexteditor_block_bounding_geometry(void* self, void* block) {
    return TextCustomEditor__PlainTextEditor_BlockBoundingGeometry((TextCustomEditor__PlainTextEditor*)self, (QTextBlock*)block);
}

QRectF* k_textcustomeditor__plaintexteditor_super_block_bounding_geometry(void* self, void* block) {
    return TextCustomEditor__PlainTextEditor_SuperBlockBoundingGeometry((TextCustomEditor__PlainTextEditor*)self, (QTextBlock*)block);
}

void k_textcustomeditor__plaintexteditor_on_block_bounding_geometry(void* self, QRectF* (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnBlockBoundingGeometry((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QAbstractTextDocumentLayout__PaintContext* k_textcustomeditor__plaintexteditor_get_paint_context(void* self) {
    return TextCustomEditor__PlainTextEditor_GetPaintContext((TextCustomEditor__PlainTextEditor*)self);
}

QAbstractTextDocumentLayout__PaintContext* k_textcustomeditor__plaintexteditor_super_get_paint_context(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperGetPaintContext((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnGetPaintContext((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_zoom_in_f(void* self, float range) {
    TextCustomEditor__PlainTextEditor_ZoomInF((TextCustomEditor__PlainTextEditor*)self, range);
}

void k_textcustomeditor__plaintexteditor_super_zoom_in_f(void* self, float range) {
    TextCustomEditor__PlainTextEditor_SuperZoomInF((TextCustomEditor__PlainTextEditor*)self, range);
}

void k_textcustomeditor__plaintexteditor_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextCustomEditor__PlainTextEditor_OnZoomInF((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__PlainTextEditor_SetViewportMargins((TextCustomEditor__PlainTextEditor*)self, left, top, right, bottom);
}

void k_textcustomeditor__plaintexteditor_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__PlainTextEditor_SuperSetViewportMargins((TextCustomEditor__PlainTextEditor*)self, left, top, right, bottom);
}

void k_textcustomeditor__plaintexteditor_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextCustomEditor__PlainTextEditor_OnSetViewportMargins((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QMargins* k_textcustomeditor__plaintexteditor_viewport_margins(void* self) {
    return TextCustomEditor__PlainTextEditor_ViewportMargins((TextCustomEditor__PlainTextEditor*)self);
}

QMargins* k_textcustomeditor__plaintexteditor_super_viewport_margins(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperViewportMargins((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnViewportMargins((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_draw_frame(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_DrawFrame((TextCustomEditor__PlainTextEditor*)self, (QPainter*)param1);
}

void k_textcustomeditor__plaintexteditor_super_draw_frame(void* self, void* param1) {
    TextCustomEditor__PlainTextEditor_SuperDrawFrame((TextCustomEditor__PlainTextEditor*)self, (QPainter*)param1);
}

void k_textcustomeditor__plaintexteditor_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnDrawFrame((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_update_micro_focus(void* self) {
    TextCustomEditor__PlainTextEditor_UpdateMicroFocus((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_super_update_micro_focus(void* self) {
    TextCustomEditor__PlainTextEditor_SuperUpdateMicroFocus((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_update_micro_focus(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnUpdateMicroFocus((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_create(void* self) {
    TextCustomEditor__PlainTextEditor_Create((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_super_create(void* self) {
    TextCustomEditor__PlainTextEditor_SuperCreate((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_create(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnCreate((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_destroy(void* self) {
    TextCustomEditor__PlainTextEditor_Destroy((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_super_destroy(void* self) {
    TextCustomEditor__PlainTextEditor_SuperDestroy((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_destroy(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnDestroy((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_focus_next_child(void* self) {
    return TextCustomEditor__PlainTextEditor_FocusNextChild((TextCustomEditor__PlainTextEditor*)self);
}

bool k_textcustomeditor__plaintexteditor_super_focus_next_child(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperFocusNextChild((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_focus_next_child(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnFocusNextChild((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_focus_previous_child(void* self) {
    return TextCustomEditor__PlainTextEditor_FocusPreviousChild((TextCustomEditor__PlainTextEditor*)self);
}

bool k_textcustomeditor__plaintexteditor_super_focus_previous_child(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperFocusPreviousChild((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_focus_previous_child(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnFocusPreviousChild((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintexteditor_sender(void* self) {
    return TextCustomEditor__PlainTextEditor_Sender((TextCustomEditor__PlainTextEditor*)self);
}

QObject* k_textcustomeditor__plaintexteditor_super_sender(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperSender((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnSender((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextEditor_SenderSignalIndex((TextCustomEditor__PlainTextEditor*)self);
}

int32_t k_textcustomeditor__plaintexteditor_super_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextEditor_SuperSenderSignalIndex((TextCustomEditor__PlainTextEditor*)self);
}

void k_textcustomeditor__plaintexteditor_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextEditor_OnSenderSignalIndex((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditor_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextEditor_Receivers((TextCustomEditor__PlainTextEditor*)self, signal);
}

int32_t k_textcustomeditor__plaintexteditor_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextEditor_SuperReceivers((TextCustomEditor__PlainTextEditor*)self, signal);
}

void k_textcustomeditor__plaintexteditor_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditor_OnReceivers((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditor_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextEditor_IsSignalConnected((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__plaintexteditor_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextEditor_SuperIsSignalConnected((TextCustomEditor__PlainTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditor_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditor_OnIsSignalConnected((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

double k_textcustomeditor__plaintexteditor_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__PlainTextEditor_GetDecodedMetricF((TextCustomEditor__PlainTextEditor*)self, metricA, metricB);
}

double k_textcustomeditor__plaintexteditor_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__PlainTextEditor_SuperGetDecodedMetricF((TextCustomEditor__PlainTextEditor*)self, metricA, metricB);
}

void k_textcustomeditor__plaintexteditor_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextCustomEditor__PlainTextEditor_OnGetDecodedMetricF((TextCustomEditor__PlainTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditor_delete(void* self) {
    TextCustomEditor__PlainTextEditor_Delete((TextCustomEditor__PlainTextEditor*)(self));
}
