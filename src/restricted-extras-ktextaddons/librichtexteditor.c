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
#include "../libqtextcursor.hpp"
#include "../libqtextedit.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../extras-sonnet/libhighlighter.hpp"
#include "../extras-sonnet/libspellcheckdecorator.hpp"
#include "librichtexteditor.hpp"
#include "librichtexteditor.h"

TextCustomEditor__RichTextEditor* k_textcustomeditor__richtexteditor_new(void* parent) {
    return TextCustomEditor__RichTextEditor_new((QWidget*)parent);
}

TextCustomEditor__RichTextEditor* k_textcustomeditor__richtexteditor_new2() {
    return TextCustomEditor__RichTextEditor_new2();
}

const QMetaObject* k_textcustomeditor__richtexteditor_meta_object(void* self) {
    return TextCustomEditor__RichTextEditor_MetaObject((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnMetaObject((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__richtexteditor_super_meta_object(void* self) {
    return TextCustomEditor__RichTextEditor_SuperMetaObject((TextCustomEditor__RichTextEditor*)self);
}

void* k_textcustomeditor__richtexteditor_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextEditor_Metacast((TextCustomEditor__RichTextEditor*)self, param1);
}

void k_textcustomeditor__richtexteditor_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditor_OnMetacast((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void* k_textcustomeditor__richtexteditor_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextEditor_SuperMetacast((TextCustomEditor__RichTextEditor*)self, param1);
}

int32_t k_textcustomeditor__richtexteditor_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextEditor_Metacall((TextCustomEditor__RichTextEditor*)self, param1, param2, param3);
}

void k_textcustomeditor__richtexteditor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__RichTextEditor_OnMetacall((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextEditor_SuperMetacall((TextCustomEditor__RichTextEditor*)self, param1, param2, param3);
}

const char* k_textcustomeditor__richtexteditor_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_search_support(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetSearchSupport((TextCustomEditor__RichTextEditor*)self, b);
}

bool k_textcustomeditor__richtexteditor_search_support(void* self) {
    return TextCustomEditor__RichTextEditor_SearchSupport((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_spell_checking_support(void* self) {
    return TextCustomEditor__RichTextEditor_SpellCheckingSupport((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_spell_checking_support(void* self, bool check) {
    TextCustomEditor__RichTextEditor_SetSpellCheckingSupport((TextCustomEditor__RichTextEditor*)self, check);
}

void k_textcustomeditor__richtexteditor_set_spell_checking_config_file_name(void* self, const char* _fileName) {
    TextCustomEditor__RichTextEditor_SetSpellCheckingConfigFileName((TextCustomEditor__RichTextEditor*)self, qstring(_fileName));
}

bool k_textcustomeditor__richtexteditor_check_spelling_enabled(void* self) {
    return TextCustomEditor__RichTextEditor_CheckSpellingEnabled((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_check_spelling_enabled(void* self, bool check) {
    TextCustomEditor__RichTextEditor_SetCheckSpellingEnabled((TextCustomEditor__RichTextEditor*)self, check);
}

void k_textcustomeditor__richtexteditor_set_spell_checking_language(void* self, const char* _language) {
    TextCustomEditor__RichTextEditor_SetSpellCheckingLanguage((TextCustomEditor__RichTextEditor*)self, qstring(_language));
}

const char* k_textcustomeditor__richtexteditor_spell_checking_language(void* self) {
    libqt_string _str = TextCustomEditor__RichTextEditor_SpellCheckingLanguage((TextCustomEditor__RichTextEditor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_read_only(void* self, bool readOnly) {
    TextCustomEditor__RichTextEditor_SetReadOnly((TextCustomEditor__RichTextEditor*)self, readOnly);
}

void k_textcustomeditor__richtexteditor_on_set_read_only(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditor_OnSetReadOnly((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_set_read_only(void* self, bool readOnly) {
    TextCustomEditor__RichTextEditor_SuperSetReadOnly((TextCustomEditor__RichTextEditor*)self, readOnly);
}

void k_textcustomeditor__richtexteditor_create_highlighter(void* self) {
    TextCustomEditor__RichTextEditor_CreateHighlighter((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_create_highlighter(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnCreateHighlighter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_create_highlighter(void* self) {
    TextCustomEditor__RichTextEditor_SuperCreateHighlighter((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_text_to_speech_support(void* self) {
    return TextCustomEditor__RichTextEditor_TextToSpeechSupport((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_text_to_speech_support(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetTextToSpeechSupport((TextCustomEditor__RichTextEditor*)self, b);
}

Sonnet__Highlighter* k_textcustomeditor__richtexteditor_highlighter(void* self) {
    return TextCustomEditor__RichTextEditor_Highlighter((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_activate_language_menu(void* self) {
    return TextCustomEditor__RichTextEditor_ActivateLanguageMenu((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_activate_language_menu(void* self, bool activate) {
    TextCustomEditor__RichTextEditor_SetActivateLanguageMenu((TextCustomEditor__RichTextEditor*)self, activate);
}

void k_textcustomeditor__richtexteditor_set_allow_tab_support(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetAllowTabSupport((TextCustomEditor__RichTextEditor*)self, b);
}

bool k_textcustomeditor__richtexteditor_allow_tab_support(void* self) {
    return TextCustomEditor__RichTextEditor_AllowTabSupport((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_show_auto_correct_button(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetShowAutoCorrectButton((TextCustomEditor__RichTextEditor*)self, b);
}

bool k_textcustomeditor__richtexteditor_show_auto_correct_button(void* self) {
    return TextCustomEditor__RichTextEditor_ShowAutoCorrectButton((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_force_spell_checking(void* self) {
    TextCustomEditor__RichTextEditor_ForceSpellChecking((TextCustomEditor__RichTextEditor*)self);
}

const char* k_textcustomeditor__richtexteditor_spell_checking_config_file_name(void* self) {
    libqt_string _str = TextCustomEditor__RichTextEditor_SpellCheckingConfigFileName((TextCustomEditor__RichTextEditor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_web_shortcut_support(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetWebShortcutSupport((TextCustomEditor__RichTextEditor*)self, b);
}

bool k_textcustomeditor__richtexteditor_web_shortcut_support(void* self) {
    return TextCustomEditor__RichTextEditor_WebShortcutSupport((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_add_ignore_words(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtexteditor_add_ignore_words\n");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    TextCustomEditor__RichTextEditor_AddIgnoreWords((TextCustomEditor__RichTextEditor*)self, lst_list);
    free(lst_qstr);
}

void k_textcustomeditor__richtexteditor_force_auto_correction(void* self, bool selectedText) {
    TextCustomEditor__RichTextEditor_ForceAutoCorrection((TextCustomEditor__RichTextEditor*)self, selectedText);
}

void k_textcustomeditor__richtexteditor_on_force_auto_correction(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditor_OnForceAutoCorrection((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_force_auto_correction(void* self, bool selectedText) {
    TextCustomEditor__RichTextEditor_SuperForceAutoCorrection((TextCustomEditor__RichTextEditor*)self, selectedText);
}

void k_textcustomeditor__richtexteditor_set_default_font_size(void* self, int val) {
    TextCustomEditor__RichTextEditor_SetDefaultFontSize((TextCustomEditor__RichTextEditor*)self, val);
}

int32_t k_textcustomeditor__richtexteditor_zoom_factor(void* self) {
    return TextCustomEditor__RichTextEditor_ZoomFactor((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_emoji_support(void* self, bool b) {
    TextCustomEditor__RichTextEditor_SetEmojiSupport((TextCustomEditor__RichTextEditor*)self, b);
}

bool k_textcustomeditor__richtexteditor_emoji_support(void* self) {
    return TextCustomEditor__RichTextEditor_EmojiSupport((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_slot_display_message_indicator(void* self, const char* message) {
    TextCustomEditor__RichTextEditor_SlotDisplayMessageIndicator((TextCustomEditor__RichTextEditor*)self, qstring(message));
}

void k_textcustomeditor__richtexteditor_slot_speak_text(void* self) {
    TextCustomEditor__RichTextEditor_SlotSpeakText((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_slot_check_spelling(void* self) {
    TextCustomEditor__RichTextEditor_SlotCheckSpelling((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_slot_zoom_reset(void* self) {
    TextCustomEditor__RichTextEditor_SlotZoomReset((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__RichTextEditor_AddExtraMenuEntry((TextCustomEditor__RichTextEditor*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__richtexteditor_on_add_extra_menu_entry(void* self, void (*callback)(void*, void*, void*)) {
    TextCustomEditor__RichTextEditor_OnAddExtraMenuEntry((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_add_extra_menu_entry(void* self, void* menu, void* pos) {
    TextCustomEditor__RichTextEditor_SuperAddExtraMenuEntry((TextCustomEditor__RichTextEditor*)self, (QMenu*)menu, (QPoint*)pos);
}

void k_textcustomeditor__richtexteditor_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_ContextMenuEvent((TextCustomEditor__RichTextEditor*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnContextMenuEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperContextMenuEvent((TextCustomEditor__RichTextEditor*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__richtexteditor_focus_in_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_FocusInEvent((TextCustomEditor__RichTextEditor*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnFocusInEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_focus_in_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperFocusInEvent((TextCustomEditor__RichTextEditor*)self, (QFocusEvent*)event);
}

bool k_textcustomeditor__richtexteditor_event(void* self, void* ev) {
    return TextCustomEditor__RichTextEditor_Event((TextCustomEditor__RichTextEditor*)self, (QEvent*)ev);
}

void k_textcustomeditor__richtexteditor_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_super_event(void* self, void* ev) {
    return TextCustomEditor__RichTextEditor_SuperEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)ev);
}

void k_textcustomeditor__richtexteditor_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_KeyPressEvent((TextCustomEditor__RichTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnKeyPressEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperKeyPressEvent((TextCustomEditor__RichTextEditor*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditor_wheel_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_WheelEvent((TextCustomEditor__RichTextEditor*)self, (QWheelEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnWheelEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_wheel_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperWheelEvent((TextCustomEditor__RichTextEditor*)self, (QWheelEvent*)e);
}

QMenu* k_textcustomeditor__richtexteditor_mouse_popup_menu(void* self, void* pos) {
    return TextCustomEditor__RichTextEditor_MousePopupMenu((TextCustomEditor__RichTextEditor*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtexteditor_on_mouse_popup_menu(void* self, QMenu* (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMousePopupMenu((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QMenu* k_textcustomeditor__richtexteditor_super_mouse_popup_menu(void* self, void* pos) {
    return TextCustomEditor__RichTextEditor_SuperMousePopupMenu((TextCustomEditor__RichTextEditor*)self, (QPoint*)pos);
}

Sonnet__SpellCheckDecorator* k_textcustomeditor__richtexteditor_create_spell_check_decorator(void* self) {
    return TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_create_spell_check_decorator(void* self, Sonnet__SpellCheckDecorator* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnCreateSpellCheckDecorator((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

Sonnet__SpellCheckDecorator* k_textcustomeditor__richtexteditor_super_create_spell_check_decorator(void* self) {
    return TextCustomEditor__RichTextEditor_SuperCreateSpellCheckDecorator((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_set_highlighter(void* self, void* _highLighter) {
    TextCustomEditor__RichTextEditor_SetHighlighter((TextCustomEditor__RichTextEditor*)self, (Sonnet__Highlighter*)_highLighter);
}

void k_textcustomeditor__richtexteditor_on_set_highlighter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnSetHighlighter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_set_highlighter(void* self, void* _highLighter) {
    TextCustomEditor__RichTextEditor_SuperSetHighlighter((TextCustomEditor__RichTextEditor*)self, (Sonnet__Highlighter*)_highLighter);
}

void k_textcustomeditor__richtexteditor_update_high_lighter(void* self) {
    TextCustomEditor__RichTextEditor_UpdateHighLighter((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_update_high_lighter(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnUpdateHighLighter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_update_high_lighter(void* self) {
    TextCustomEditor__RichTextEditor_SuperUpdateHighLighter((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_clear_decorator(void* self) {
    TextCustomEditor__RichTextEditor_ClearDecorator((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_clear_decorator(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnClearDecorator((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_super_clear_decorator(void* self) {
    TextCustomEditor__RichTextEditor_SuperClearDecorator((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_say(void* self, const char* text) {
    TextCustomEditor__RichTextEditor_Say((TextCustomEditor__RichTextEditor*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_on_say(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditor_Connect_Say((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_find_text(void* self) {
    TextCustomEditor__RichTextEditor_FindText((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_find_text(void* self, void (*callback)(void*)) {
    TextCustomEditor__RichTextEditor_Connect_FindText((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_replace_text(void* self) {
    TextCustomEditor__RichTextEditor_ReplaceText((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_replace_text(void* self, void (*callback)(void*)) {
    TextCustomEditor__RichTextEditor_Connect_ReplaceText((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord) {
    TextCustomEditor__RichTextEditor_SpellCheckerAutoCorrect((TextCustomEditor__RichTextEditor*)self, qstring(currentWord), qstring(autoCorrectWord));
}

void k_textcustomeditor__richtexteditor_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*)) {
    TextCustomEditor__RichTextEditor_Connect_SpellCheckerAutoCorrect((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_check_spelling_changed(void* self, bool param1) {
    TextCustomEditor__RichTextEditor_CheckSpellingChanged((TextCustomEditor__RichTextEditor*)self, param1);
}

void k_textcustomeditor__richtexteditor_on_check_spelling_changed(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditor_Connect_CheckSpellingChanged((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_language_changed(void* self, const char* param1) {
    TextCustomEditor__RichTextEditor_LanguageChanged((TextCustomEditor__RichTextEditor*)self, qstring(param1));
}

void k_textcustomeditor__richtexteditor_on_language_changed(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditor_Connect_LanguageChanged((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_spell_check_status(void* self, const char* param1) {
    TextCustomEditor__RichTextEditor_SpellCheckStatus((TextCustomEditor__RichTextEditor*)self, qstring(param1));
}

void k_textcustomeditor__richtexteditor_on_spell_check_status(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditor_Connect_SpellCheckStatus((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_spell_checking_finished(void* self) {
    TextCustomEditor__RichTextEditor_SpellCheckingFinished((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_spell_checking_finished(void* self, void (*callback)(void*)) {
    TextCustomEditor__RichTextEditor_Connect_SpellCheckingFinished((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_spell_checking_canceled(void* self) {
    TextCustomEditor__RichTextEditor_SpellCheckingCanceled((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_spell_checking_canceled(void* self, void (*callback)(void*)) {
    TextCustomEditor__RichTextEditor_Connect_SpellCheckingCanceled((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

const char* k_textcustomeditor__richtexteditor_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textcustomeditor__richtexteditor_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_textcustomeditor__richtexteditor_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textcustomeditor__richtexteditor_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_textcustomeditor__richtexteditor_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_textcustomeditor__richtexteditor_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_textcustomeditor__richtexteditor_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_textcustomeditor__richtexteditor_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textcustomeditor__richtexteditor_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_textcustomeditor__richtexteditor_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_textcustomeditor__richtexteditor_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_textcustomeditor__richtexteditor_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_textcustomeditor__richtexteditor_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_textcustomeditor__richtexteditor_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_textcustomeditor__richtexteditor_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textcustomeditor__richtexteditor_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textcustomeditor__richtexteditor_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_textcustomeditor__richtexteditor_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_textcustomeditor__richtexteditor_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_textcustomeditor__richtexteditor_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtexteditor_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_textcustomeditor__richtexteditor_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_textcustomeditor__richtexteditor_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_textcustomeditor__richtexteditor_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_textcustomeditor__richtexteditor_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_textcustomeditor__richtexteditor_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textcustomeditor__richtexteditor_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditor_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditor_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_textcustomeditor__richtexteditor_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_textcustomeditor__richtexteditor_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textcustomeditor__richtexteditor_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_textcustomeditor__richtexteditor_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textcustomeditor__richtexteditor_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_textcustomeditor__richtexteditor_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtexteditor_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_textcustomeditor__richtexteditor_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_textcustomeditor__richtexteditor_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_textcustomeditor__richtexteditor_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_textcustomeditor__richtexteditor_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textcustomeditor__richtexteditor_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_textcustomeditor__richtexteditor_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_textcustomeditor__richtexteditor_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_textcustomeditor__richtexteditor_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_textcustomeditor__richtexteditor_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_textcustomeditor__richtexteditor_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void k_textcustomeditor__richtexteditor_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_textcustomeditor__richtexteditor_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_textcustomeditor__richtexteditor_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void k_textcustomeditor__richtexteditor_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_textcustomeditor__richtexteditor_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_textcustomeditor__richtexteditor_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_textcustomeditor__richtexteditor_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_textcustomeditor__richtexteditor_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_textcustomeditor__richtexteditor_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_textcustomeditor__richtexteditor_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_textcustomeditor__richtexteditor_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_textcustomeditor__richtexteditor_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_textcustomeditor__richtexteditor_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_textcustomeditor__richtexteditor_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_textcustomeditor__richtexteditor_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_textcustomeditor__richtexteditor_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_textcustomeditor__richtexteditor_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__richtexteditor_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textcustomeditor__richtexteditor_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textcustomeditor__richtexteditor_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textcustomeditor__richtexteditor_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textcustomeditor__richtexteditor_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textcustomeditor__richtexteditor_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textcustomeditor__richtexteditor_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textcustomeditor__richtexteditor_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textcustomeditor__richtexteditor_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textcustomeditor__richtexteditor_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textcustomeditor__richtexteditor_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textcustomeditor__richtexteditor_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textcustomeditor__richtexteditor_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textcustomeditor__richtexteditor_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textcustomeditor__richtexteditor_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textcustomeditor__richtexteditor_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textcustomeditor__richtexteditor_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textcustomeditor__richtexteditor_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textcustomeditor__richtexteditor_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtexteditor_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtexteditor_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textcustomeditor__richtexteditor_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textcustomeditor__richtexteditor_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textcustomeditor__richtexteditor_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtexteditor_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textcustomeditor__richtexteditor_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textcustomeditor__richtexteditor_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textcustomeditor__richtexteditor_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textcustomeditor__richtexteditor_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditor_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textcustomeditor__richtexteditor_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditor_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditor_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditor_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditor_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textcustomeditor__richtexteditor_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditor_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditor_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textcustomeditor__richtexteditor_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textcustomeditor__richtexteditor_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textcustomeditor__richtexteditor_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textcustomeditor__richtexteditor_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textcustomeditor__richtexteditor_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textcustomeditor__richtexteditor_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textcustomeditor__richtexteditor_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textcustomeditor__richtexteditor_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textcustomeditor__richtexteditor_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textcustomeditor__richtexteditor_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textcustomeditor__richtexteditor_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textcustomeditor__richtexteditor_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textcustomeditor__richtexteditor_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textcustomeditor__richtexteditor_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textcustomeditor__richtexteditor_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textcustomeditor__richtexteditor_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditor_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditor_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditor_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditor_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditor_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditor_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditor_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditor_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtexteditor_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textcustomeditor__richtexteditor_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtexteditor_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textcustomeditor__richtexteditor_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditor_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditor_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textcustomeditor__richtexteditor_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textcustomeditor__richtexteditor_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textcustomeditor__richtexteditor_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textcustomeditor__richtexteditor_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textcustomeditor__richtexteditor_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textcustomeditor__richtexteditor_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textcustomeditor__richtexteditor_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textcustomeditor__richtexteditor_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textcustomeditor__richtexteditor_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtexteditor_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtexteditor_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textcustomeditor__richtexteditor_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textcustomeditor__richtexteditor_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textcustomeditor__richtexteditor_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textcustomeditor__richtexteditor_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textcustomeditor__richtexteditor_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textcustomeditor__richtexteditor_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtexteditor_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtexteditor_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textcustomeditor__richtexteditor_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textcustomeditor__richtexteditor_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditor_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textcustomeditor__richtexteditor_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textcustomeditor__richtexteditor_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textcustomeditor__richtexteditor_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textcustomeditor__richtexteditor_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textcustomeditor__richtexteditor_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textcustomeditor__richtexteditor_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textcustomeditor__richtexteditor_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textcustomeditor__richtexteditor_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textcustomeditor__richtexteditor_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditor_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textcustomeditor__richtexteditor_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textcustomeditor__richtexteditor_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textcustomeditor__richtexteditor_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textcustomeditor__richtexteditor_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textcustomeditor__richtexteditor_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textcustomeditor__richtexteditor_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textcustomeditor__richtexteditor_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textcustomeditor__richtexteditor_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textcustomeditor__richtexteditor_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textcustomeditor__richtexteditor_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textcustomeditor__richtexteditor_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textcustomeditor__richtexteditor_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textcustomeditor__richtexteditor_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textcustomeditor__richtexteditor_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textcustomeditor__richtexteditor_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textcustomeditor__richtexteditor_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textcustomeditor__richtexteditor_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditor_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtexteditor_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtexteditor_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditor_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtexteditor_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtexteditor_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textcustomeditor__richtexteditor_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtexteditor_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textcustomeditor__richtexteditor_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textcustomeditor__richtexteditor_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textcustomeditor__richtexteditor_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textcustomeditor__richtexteditor_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditor_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textcustomeditor__richtexteditor_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtexteditor_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textcustomeditor__richtexteditor_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textcustomeditor__richtexteditor_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditor_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textcustomeditor__richtexteditor_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textcustomeditor__richtexteditor_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textcustomeditor__richtexteditor_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textcustomeditor__richtexteditor_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtexteditor_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textcustomeditor__richtexteditor_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditor_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textcustomeditor__richtexteditor_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textcustomeditor__richtexteditor_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textcustomeditor__richtexteditor_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textcustomeditor__richtexteditor_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textcustomeditor__richtexteditor_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textcustomeditor__richtexteditor_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditor_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditor_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textcustomeditor__richtexteditor_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textcustomeditor__richtexteditor_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textcustomeditor__richtexteditor_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textcustomeditor__richtexteditor_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textcustomeditor__richtexteditor_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textcustomeditor__richtexteditor_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textcustomeditor__richtexteditor_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textcustomeditor__richtexteditor_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textcustomeditor__richtexteditor_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textcustomeditor__richtexteditor_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textcustomeditor__richtexteditor_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtexteditor_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textcustomeditor__richtexteditor_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtexteditor_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditor_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textcustomeditor__richtexteditor_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textcustomeditor__richtexteditor_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textcustomeditor__richtexteditor_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textcustomeditor__richtexteditor_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textcustomeditor__richtexteditor_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textcustomeditor__richtexteditor_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textcustomeditor__richtexteditor_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textcustomeditor__richtexteditor_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textcustomeditor__richtexteditor_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textcustomeditor__richtexteditor_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textcustomeditor__richtexteditor_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textcustomeditor__richtexteditor_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textcustomeditor__richtexteditor_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textcustomeditor__richtexteditor_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textcustomeditor__richtexteditor_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtexteditor_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textcustomeditor__richtexteditor_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textcustomeditor__richtexteditor_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtexteditor_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtexteditor_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textcustomeditor__richtexteditor_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtexteditor_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtexteditor_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textcustomeditor__richtexteditor_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textcustomeditor__richtexteditor_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textcustomeditor__richtexteditor_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textcustomeditor__richtexteditor_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtexteditor_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtexteditor_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textcustomeditor__richtexteditor_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textcustomeditor__richtexteditor_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textcustomeditor__richtexteditor_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textcustomeditor__richtexteditor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditor_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__richtexteditor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__richtexteditor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__richtexteditor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__richtexteditor_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__richtexteditor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__richtexteditor_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__richtexteditor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__richtexteditor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__richtexteditor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__richtexteditor_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtexteditor_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__richtexteditor_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__richtexteditor_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__richtexteditor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__richtexteditor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__richtexteditor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__richtexteditor_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtexteditor_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__richtexteditor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__richtexteditor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__richtexteditor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__richtexteditor_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtexteditor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__richtexteditor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__richtexteditor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__richtexteditor_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__richtexteditor_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__richtexteditor_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__richtexteditor_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__richtexteditor_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtexteditor_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__richtexteditor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__richtexteditor_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditor_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditor_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditor_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditor_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textcustomeditor__richtexteditor_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textcustomeditor__richtexteditor_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__RichTextEditor_LoadResource((TextCustomEditor__RichTextEditor*)self, type, (QUrl*)name);
}

QVariant* k_textcustomeditor__richtexteditor_super_load_resource(void* self, int type, void* name) {
    return TextCustomEditor__RichTextEditor_SuperLoadResource((TextCustomEditor__RichTextEditor*)self, type, (QUrl*)name);
}

void k_textcustomeditor__richtexteditor_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextCustomEditor__RichTextEditor_OnLoadResource((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QVariant* k_textcustomeditor__richtexteditor_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__RichTextEditor_InputMethodQuery((TextCustomEditor__RichTextEditor*)self, property);
}

QVariant* k_textcustomeditor__richtexteditor_super_input_method_query(void* self, int32_t property) {
    return TextCustomEditor__RichTextEditor_SuperInputMethodQuery((TextCustomEditor__RichTextEditor*)self, property);
}

void k_textcustomeditor__richtexteditor_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextEditor_OnInputMethodQuery((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_timer_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_TimerEvent((TextCustomEditor__RichTextEditor*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_timer_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperTimerEvent((TextCustomEditor__RichTextEditor*)self, (QTimerEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnTimerEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_key_release_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_KeyReleaseEvent((TextCustomEditor__RichTextEditor*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_key_release_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperKeyReleaseEvent((TextCustomEditor__RichTextEditor*)self, (QKeyEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnKeyReleaseEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_resize_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_ResizeEvent((TextCustomEditor__RichTextEditor*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_resize_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperResizeEvent((TextCustomEditor__RichTextEditor*)self, (QResizeEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnResizeEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_paint_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_PaintEvent((TextCustomEditor__RichTextEditor*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_paint_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperPaintEvent((TextCustomEditor__RichTextEditor*)self, (QPaintEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnPaintEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_mouse_press_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_MousePressEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_mouse_press_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperMousePressEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMousePressEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_mouse_move_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_MouseMoveEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_mouse_move_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperMouseMoveEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMouseMoveEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_mouse_release_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_MouseReleaseEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_mouse_release_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperMouseReleaseEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMouseReleaseEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_MouseDoubleClickEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_mouse_double_click_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperMouseDoubleClickEvent((TextCustomEditor__RichTextEditor*)self, (QMouseEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMouseDoubleClickEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextEditor_FocusNextPrevChild((TextCustomEditor__RichTextEditor*)self, next);
}

bool k_textcustomeditor__richtexteditor_super_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextEditor_SuperFocusNextPrevChild((TextCustomEditor__RichTextEditor*)self, next);
}

void k_textcustomeditor__richtexteditor_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditor_OnFocusNextPrevChild((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_drag_enter_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_DragEnterEvent((TextCustomEditor__RichTextEditor*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_drag_enter_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperDragEnterEvent((TextCustomEditor__RichTextEditor*)self, (QDragEnterEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDragEnterEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_drag_leave_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_DragLeaveEvent((TextCustomEditor__RichTextEditor*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_drag_leave_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperDragLeaveEvent((TextCustomEditor__RichTextEditor*)self, (QDragLeaveEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDragLeaveEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_drag_move_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_DragMoveEvent((TextCustomEditor__RichTextEditor*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_drag_move_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperDragMoveEvent((TextCustomEditor__RichTextEditor*)self, (QDragMoveEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDragMoveEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_drop_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_DropEvent((TextCustomEditor__RichTextEditor*)self, (QDropEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_drop_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperDropEvent((TextCustomEditor__RichTextEditor*)self, (QDropEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDropEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_focus_out_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_FocusOutEvent((TextCustomEditor__RichTextEditor*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_focus_out_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperFocusOutEvent((TextCustomEditor__RichTextEditor*)self, (QFocusEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnFocusOutEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_show_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_ShowEvent((TextCustomEditor__RichTextEditor*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__richtexteditor_super_show_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_SuperShowEvent((TextCustomEditor__RichTextEditor*)self, (QShowEvent*)param1);
}

void k_textcustomeditor__richtexteditor_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnShowEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_change_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_ChangeEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)e);
}

void k_textcustomeditor__richtexteditor_super_change_event(void* self, void* e) {
    TextCustomEditor__RichTextEditor_SuperChangeEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)e);
}

void k_textcustomeditor__richtexteditor_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnChangeEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QMimeData* k_textcustomeditor__richtexteditor_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection((TextCustomEditor__RichTextEditor*)self);
}

QMimeData* k_textcustomeditor__richtexteditor_super_create_mime_data_from_selection(void* self) {
    return TextCustomEditor__RichTextEditor_SuperCreateMimeDataFromSelection((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnCreateMimeDataFromSelection((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__RichTextEditor_CanInsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (QMimeData*)source);
}

bool k_textcustomeditor__richtexteditor_super_can_insert_from_mime_data(void* self, void* source) {
    return TextCustomEditor__RichTextEditor_SuperCanInsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtexteditor_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnCanInsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__RichTextEditor_InsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtexteditor_super_insert_from_mime_data(void* self, void* source) {
    TextCustomEditor__RichTextEditor_SuperInsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (QMimeData*)source);
}

void k_textcustomeditor__richtexteditor_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnInsertFromMimeData((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_InputMethodEvent((TextCustomEditor__RichTextEditor*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtexteditor_super_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_SuperInputMethodEvent((TextCustomEditor__RichTextEditor*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtexteditor_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnInputMethodEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__RichTextEditor_ScrollContentsBy((TextCustomEditor__RichTextEditor*)self, dx, dy);
}

void k_textcustomeditor__richtexteditor_super_scroll_contents_by(void* self, int dx, int dy) {
    TextCustomEditor__RichTextEditor_SuperScrollContentsBy((TextCustomEditor__RichTextEditor*)self, dx, dy);
}

void k_textcustomeditor__richtexteditor_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextCustomEditor__RichTextEditor_OnScrollContentsBy((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__RichTextEditor_DoSetTextCursor((TextCustomEditor__RichTextEditor*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__richtexteditor_super_do_set_text_cursor(void* self, void* cursor) {
    TextCustomEditor__RichTextEditor_SuperDoSetTextCursor((TextCustomEditor__RichTextEditor*)self, (QTextCursor*)cursor);
}

void k_textcustomeditor__richtexteditor_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDoSetTextCursor((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtexteditor_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_MinimumSizeHint((TextCustomEditor__RichTextEditor*)self);
}

QSize* k_textcustomeditor__richtexteditor_super_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_SuperMinimumSizeHint((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnMinimumSizeHint((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtexteditor_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_SizeHint((TextCustomEditor__RichTextEditor*)self);
}

QSize* k_textcustomeditor__richtexteditor_super_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_SuperSizeHint((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnSizeHint((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__RichTextEditor_SetupViewport((TextCustomEditor__RichTextEditor*)self, (QWidget*)viewport);
}

void k_textcustomeditor__richtexteditor_super_setup_viewport(void* self, void* viewport) {
    TextCustomEditor__RichTextEditor_SuperSetupViewport((TextCustomEditor__RichTextEditor*)self, (QWidget*)viewport);
}

void k_textcustomeditor__richtexteditor_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnSetupViewport((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__RichTextEditor_EventFilter((TextCustomEditor__RichTextEditor*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textcustomeditor__richtexteditor_super_event_filter(void* self, void* param1, void* param2) {
    return TextCustomEditor__RichTextEditor_SuperEventFilter((TextCustomEditor__RichTextEditor*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textcustomeditor__richtexteditor_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__RichTextEditor_OnEventFilter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_viewport_event(void* self, void* param1) {
    return TextCustomEditor__RichTextEditor_ViewportEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)param1);
}

bool k_textcustomeditor__richtexteditor_super_viewport_event(void* self, void* param1) {
    return TextCustomEditor__RichTextEditor_SuperViewportEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)param1);
}

void k_textcustomeditor__richtexteditor_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnViewportEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtexteditor_viewport_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_ViewportSizeHint((TextCustomEditor__RichTextEditor*)self);
}

QSize* k_textcustomeditor__richtexteditor_super_viewport_size_hint(void* self) {
    return TextCustomEditor__RichTextEditor_SuperViewportSizeHint((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnViewportSizeHint((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_init_style_option(void* self, void* option) {
    TextCustomEditor__RichTextEditor_InitStyleOption((TextCustomEditor__RichTextEditor*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__richtexteditor_super_init_style_option(void* self, void* option) {
    TextCustomEditor__RichTextEditor_SuperInitStyleOption((TextCustomEditor__RichTextEditor*)self, (QStyleOptionFrame*)option);
}

void k_textcustomeditor__richtexteditor_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnInitStyleOption((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_dev_type(void* self) {
    return TextCustomEditor__RichTextEditor_DevType((TextCustomEditor__RichTextEditor*)self);
}

int32_t k_textcustomeditor__richtexteditor_super_dev_type(void* self) {
    return TextCustomEditor__RichTextEditor_SuperDevType((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_dev_type(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextEditor_OnDevType((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextEditor_SetVisible((TextCustomEditor__RichTextEditor*)self, visible);
}

void k_textcustomeditor__richtexteditor_super_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextEditor_SuperSetVisible((TextCustomEditor__RichTextEditor*)self, visible);
}

void k_textcustomeditor__richtexteditor_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditor_OnSetVisible((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextEditor_HeightForWidth((TextCustomEditor__RichTextEditor*)self, param1);
}

int32_t k_textcustomeditor__richtexteditor_super_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextEditor_SuperHeightForWidth((TextCustomEditor__RichTextEditor*)self, param1);
}

void k_textcustomeditor__richtexteditor_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextCustomEditor__RichTextEditor_OnHeightForWidth((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextEditor_HasHeightForWidth((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_super_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextEditor_SuperHasHeightForWidth((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_has_height_for_width(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditor_OnHasHeightForWidth((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QPaintEngine* k_textcustomeditor__richtexteditor_paint_engine(void* self) {
    return TextCustomEditor__RichTextEditor_PaintEngine((TextCustomEditor__RichTextEditor*)self);
}

QPaintEngine* k_textcustomeditor__richtexteditor_super_paint_engine(void* self) {
    return TextCustomEditor__RichTextEditor_SuperPaintEngine((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnPaintEngine((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_EnterEvent((TextCustomEditor__RichTextEditor*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperEnterEvent((TextCustomEditor__RichTextEditor*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnEnterEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_LeaveEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperLeaveEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnLeaveEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_MoveEvent((TextCustomEditor__RichTextEditor*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperMoveEvent((TextCustomEditor__RichTextEditor*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnMoveEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_close_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_CloseEvent((TextCustomEditor__RichTextEditor*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_close_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperCloseEvent((TextCustomEditor__RichTextEditor*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnCloseEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_TabletEvent((TextCustomEditor__RichTextEditor*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperTabletEvent((TextCustomEditor__RichTextEditor*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnTabletEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_action_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_ActionEvent((TextCustomEditor__RichTextEditor*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_action_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperActionEvent((TextCustomEditor__RichTextEditor*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnActionEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_HideEvent((TextCustomEditor__RichTextEditor*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperHideEvent((TextCustomEditor__RichTextEditor*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnHideEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextEditor_NativeEvent((TextCustomEditor__RichTextEditor*)self, qstring(eventType), message, result);
}

bool k_textcustomeditor__richtexteditor_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextEditor_SuperNativeEvent((TextCustomEditor__RichTextEditor*)self, qstring(eventType), message, result);
}

void k_textcustomeditor__richtexteditor_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextCustomEditor__RichTextEditor_OnNativeEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditor_Metric((TextCustomEditor__RichTextEditor*)self, param1);
}

int32_t k_textcustomeditor__richtexteditor_super_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditor_SuperMetric((TextCustomEditor__RichTextEditor*)self, param1);
}

void k_textcustomeditor__richtexteditor_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextEditor_OnMetric((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextEditor_InitPainter((TextCustomEditor__RichTextEditor*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtexteditor_super_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextEditor_SuperInitPainter((TextCustomEditor__RichTextEditor*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtexteditor_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnInitPainter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QPaintDevice* k_textcustomeditor__richtexteditor_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextEditor_Redirected((TextCustomEditor__RichTextEditor*)self, (QPoint*)offset);
}

QPaintDevice* k_textcustomeditor__richtexteditor_super_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextEditor_SuperRedirected((TextCustomEditor__RichTextEditor*)self, (QPoint*)offset);
}

void k_textcustomeditor__richtexteditor_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnRedirected((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QPainter* k_textcustomeditor__richtexteditor_shared_painter(void* self) {
    return TextCustomEditor__RichTextEditor_SharedPainter((TextCustomEditor__RichTextEditor*)self);
}

QPainter* k_textcustomeditor__richtexteditor_super_shared_painter(void* self) {
    return TextCustomEditor__RichTextEditor_SuperSharedPainter((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnSharedPainter((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_child_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_ChildEvent((TextCustomEditor__RichTextEditor*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_child_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperChildEvent((TextCustomEditor__RichTextEditor*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnChildEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_CustomEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditor_super_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextEditor_SuperCustomEvent((TextCustomEditor__RichTextEditor*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditor_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnCustomEvent((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditor_ConnectNotify((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditor_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditor_SuperConnectNotify((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditor_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnConnectNotify((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditor_DisconnectNotify((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditor_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditor_SuperDisconnectNotify((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditor_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDisconnectNotify((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_zoom_in_f(void* self, float range) {
    TextCustomEditor__RichTextEditor_ZoomInF((TextCustomEditor__RichTextEditor*)self, range);
}

void k_textcustomeditor__richtexteditor_super_zoom_in_f(void* self, float range) {
    TextCustomEditor__RichTextEditor_SuperZoomInF((TextCustomEditor__RichTextEditor*)self, range);
}

void k_textcustomeditor__richtexteditor_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextCustomEditor__RichTextEditor_OnZoomInF((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__RichTextEditor_SetViewportMargins((TextCustomEditor__RichTextEditor*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtexteditor_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextCustomEditor__RichTextEditor_SuperSetViewportMargins((TextCustomEditor__RichTextEditor*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtexteditor_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextCustomEditor__RichTextEditor_OnSetViewportMargins((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QMargins* k_textcustomeditor__richtexteditor_viewport_margins(void* self) {
    return TextCustomEditor__RichTextEditor_ViewportMargins((TextCustomEditor__RichTextEditor*)self);
}

QMargins* k_textcustomeditor__richtexteditor_super_viewport_margins(void* self) {
    return TextCustomEditor__RichTextEditor_SuperViewportMargins((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnViewportMargins((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_draw_frame(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_DrawFrame((TextCustomEditor__RichTextEditor*)self, (QPainter*)param1);
}

void k_textcustomeditor__richtexteditor_super_draw_frame(void* self, void* param1) {
    TextCustomEditor__RichTextEditor_SuperDrawFrame((TextCustomEditor__RichTextEditor*)self, (QPainter*)param1);
}

void k_textcustomeditor__richtexteditor_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnDrawFrame((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_update_micro_focus(void* self) {
    TextCustomEditor__RichTextEditor_UpdateMicroFocus((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_super_update_micro_focus(void* self) {
    TextCustomEditor__RichTextEditor_SuperUpdateMicroFocus((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_update_micro_focus(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnUpdateMicroFocus((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_create(void* self) {
    TextCustomEditor__RichTextEditor_Create((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_super_create(void* self) {
    TextCustomEditor__RichTextEditor_SuperCreate((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_create(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnCreate((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_destroy(void* self) {
    TextCustomEditor__RichTextEditor_Destroy((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_super_destroy(void* self) {
    TextCustomEditor__RichTextEditor_SuperDestroy((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_destroy(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditor_OnDestroy((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_focus_next_child(void* self) {
    return TextCustomEditor__RichTextEditor_FocusNextChild((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_super_focus_next_child(void* self) {
    return TextCustomEditor__RichTextEditor_SuperFocusNextChild((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_focus_next_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditor_OnFocusNextChild((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextEditor_FocusPreviousChild((TextCustomEditor__RichTextEditor*)self);
}

bool k_textcustomeditor__richtexteditor_super_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextEditor_SuperFocusPreviousChild((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_focus_previous_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditor_OnFocusPreviousChild((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtexteditor_sender(void* self) {
    return TextCustomEditor__RichTextEditor_Sender((TextCustomEditor__RichTextEditor*)self);
}

QObject* k_textcustomeditor__richtexteditor_super_sender(void* self) {
    return TextCustomEditor__RichTextEditor_SuperSender((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__RichTextEditor_OnSender((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextEditor_SenderSignalIndex((TextCustomEditor__RichTextEditor*)self);
}

int32_t k_textcustomeditor__richtexteditor_super_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextEditor_SuperSenderSignalIndex((TextCustomEditor__RichTextEditor*)self);
}

void k_textcustomeditor__richtexteditor_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextEditor_OnSenderSignalIndex((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditor_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextEditor_Receivers((TextCustomEditor__RichTextEditor*)self, signal);
}

int32_t k_textcustomeditor__richtexteditor_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextEditor_SuperReceivers((TextCustomEditor__RichTextEditor*)self, signal);
}

void k_textcustomeditor__richtexteditor_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditor_OnReceivers((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditor_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextEditor_IsSignalConnected((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__richtexteditor_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextEditor_SuperIsSignalConnected((TextCustomEditor__RichTextEditor*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditor_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditor_OnIsSignalConnected((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

double k_textcustomeditor__richtexteditor_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextEditor_GetDecodedMetricF((TextCustomEditor__RichTextEditor*)self, metricA, metricB);
}

double k_textcustomeditor__richtexteditor_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextEditor_SuperGetDecodedMetricF((TextCustomEditor__RichTextEditor*)self, metricA, metricB);
}

void k_textcustomeditor__richtexteditor_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextCustomEditor__RichTextEditor_OnGetDecodedMetricF((TextCustomEditor__RichTextEditor*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditor_delete(void* self) {
    TextCustomEditor__RichTextEditor_Delete((TextCustomEditor__RichTextEditor*)(self));
}
