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
#include "libktextedit.hpp"
#include "libktextedit.h"

KTextEdit* k_textedit_new(void* parent) {
    return KTextEdit_new((QWidget*)parent);
}

KTextEdit* k_textedit_new2(const char* text) {
    return KTextEdit_new2(qstring(text));
}

KTextEdit* k_textedit_new3() {
    return KTextEdit_new3();
}

KTextEdit* k_textedit_new4(const char* text, void* parent) {
    return KTextEdit_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* k_textedit_meta_object(void* self) {
    return KTextEdit_MetaObject((KTextEdit*)self);
}

void k_textedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTextEdit_OnMetaObject((KTextEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_textedit_super_meta_object(void* self) {
    return KTextEdit_SuperMetaObject((KTextEdit*)self);
}

void* k_textedit_metacast(void* self, const char* param1) {
    return KTextEdit_Metacast((KTextEdit*)self, param1);
}

void k_textedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTextEdit_OnMetacast((KTextEdit*)self, (intptr_t)callback);
}

void* k_textedit_super_metacast(void* self, const char* param1) {
    return KTextEdit_SuperMetacast((KTextEdit*)self, param1);
}

int32_t k_textedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEdit_Metacall((KTextEdit*)self, param1, param2, param3);
}

void k_textedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEdit_OnMetacall((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEdit_SuperMetacall((KTextEdit*)self, param1, param2, param3);
}

const char* k_textedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_read_only(void* self, bool readOnly) {
    KTextEdit_SetReadOnly((KTextEdit*)self, readOnly);
}

void k_textedit_on_set_read_only(void* self, void (*callback)(void*, bool)) {
    KTextEdit_OnSetReadOnly((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_set_read_only(void* self, bool readOnly) {
    KTextEdit_SuperSetReadOnly((KTextEdit*)self, readOnly);
}

void k_textedit_set_check_spelling_enabled(void* self, bool check) {
    KTextEdit_SetCheckSpellingEnabled((KTextEdit*)self, check);
}

void k_textedit_on_set_check_spelling_enabled(void* self, void (*callback)(void*, bool)) {
    KTextEdit_OnSetCheckSpellingEnabled((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_set_check_spelling_enabled(void* self, bool check) {
    KTextEdit_SuperSetCheckSpellingEnabled((KTextEdit*)self, check);
}

bool k_textedit_check_spelling_enabled(void* self) {
    return KTextEdit_CheckSpellingEnabled((KTextEdit*)self);
}

void k_textedit_on_check_spelling_enabled(void* self, bool (*callback)()) {
    KTextEdit_OnCheckSpellingEnabled((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_super_check_spelling_enabled(void* self) {
    return KTextEdit_SuperCheckSpellingEnabled((KTextEdit*)self);
}

bool k_textedit_should_block_be_spell_checked(void* self, const char* block) {
    return KTextEdit_ShouldBlockBeSpellChecked((KTextEdit*)self, qstring(block));
}

void k_textedit_on_should_block_be_spell_checked(void* self, bool (*callback)(void*, const char*)) {
    KTextEdit_OnShouldBlockBeSpellChecked((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_super_should_block_be_spell_checked(void* self, const char* block) {
    return KTextEdit_SuperShouldBlockBeSpellChecked((KTextEdit*)self, qstring(block));
}

void k_textedit_highlight_word(void* self, int length, int pos) {
    KTextEdit_HighlightWord((KTextEdit*)self, length, pos);
}

void k_textedit_create_highlighter(void* self) {
    KTextEdit_CreateHighlighter((KTextEdit*)self);
}

void k_textedit_on_create_highlighter(void* self, void (*callback)()) {
    KTextEdit_OnCreateHighlighter((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_create_highlighter(void* self) {
    KTextEdit_SuperCreateHighlighter((KTextEdit*)self);
}

Sonnet__Highlighter* k_textedit_highlighter(void* self) {
    return KTextEdit_Highlighter((KTextEdit*)self);
}

void k_textedit_set_highlighter(void* self, void* _highLighter) {
    KTextEdit_SetHighlighter((KTextEdit*)self, (Sonnet__Highlighter*)_highLighter);
}

QMenu* k_textedit_mouse_popup_menu(void* self) {
    return KTextEdit_MousePopupMenu((KTextEdit*)self);
}

void k_textedit_on_mouse_popup_menu(void* self, QMenu* (*callback)()) {
    KTextEdit_OnMousePopupMenu((KTextEdit*)self, (intptr_t)callback);
}

QMenu* k_textedit_super_mouse_popup_menu(void* self) {
    return KTextEdit_SuperMousePopupMenu((KTextEdit*)self);
}

void k_textedit_enable_find_replace(void* self, bool enabled) {
    KTextEdit_EnableFindReplace((KTextEdit*)self, enabled);
}

const char* k_textedit_spell_checking_language(void* self) {
    libqt_string _str = KTextEdit_SpellCheckingLanguage((KTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_show_tab_action(void* self, bool show) {
    KTextEdit_ShowTabAction((KTextEdit*)self, show);
}

void k_textedit_show_auto_correct_button(void* self, bool show) {
    KTextEdit_ShowAutoCorrectButton((KTextEdit*)self, show);
}

void k_textedit_force_spell_checking(void* self) {
    KTextEdit_ForceSpellChecking((KTextEdit*)self);
}

void k_textedit_check_spelling_changed(void* self, bool param1) {
    KTextEdit_CheckSpellingChanged((KTextEdit*)self, param1);
}

void k_textedit_on_check_spelling_changed(void* self, void (*callback)(void*, bool)) {
    KTextEdit_Connect_CheckSpellingChanged((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_spell_check_status(void* self, const char* param1) {
    KTextEdit_SpellCheckStatus((KTextEdit*)self, qstring(param1));
}

void k_textedit_on_spell_check_status(void* self, void (*callback)(void*, const char*)) {
    KTextEdit_Connect_SpellCheckStatus((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_language_changed(void* self, const char* language) {
    KTextEdit_LanguageChanged((KTextEdit*)self, qstring(language));
}

void k_textedit_on_language_changed(void* self, void (*callback)(void*, const char*)) {
    KTextEdit_Connect_LanguageChanged((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_about_to_show_context_menu(void* self, void* menu) {
    KTextEdit_AboutToShowContextMenu((KTextEdit*)self, (QMenu*)menu);
}

void k_textedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*)) {
    KTextEdit_Connect_AboutToShowContextMenu((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord) {
    KTextEdit_SpellCheckerAutoCorrect((KTextEdit*)self, qstring(currentWord), qstring(autoCorrectWord));
}

void k_textedit_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*)) {
    KTextEdit_Connect_SpellCheckerAutoCorrect((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_spell_checking_finished(void* self) {
    KTextEdit_SpellCheckingFinished((KTextEdit*)self);
}

void k_textedit_on_spell_checking_finished(void* self, void (*callback)(void*)) {
    KTextEdit_Connect_SpellCheckingFinished((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_spell_checking_canceled(void* self) {
    KTextEdit_SpellCheckingCanceled((KTextEdit*)self);
}

void k_textedit_on_spell_checking_canceled(void* self, void (*callback)(void*)) {
    KTextEdit_Connect_SpellCheckingCanceled((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_set_spell_checking_language(void* self, const char* language) {
    KTextEdit_SetSpellCheckingLanguage((KTextEdit*)self, qstring(language));
}

void k_textedit_check_spelling(void* self) {
    KTextEdit_CheckSpelling((KTextEdit*)self);
}

void k_textedit_show_spell_config_dialog(void* self) {
    KTextEdit_ShowSpellConfigDialog((KTextEdit*)self);
}

void k_textedit_replace(void* self) {
    KTextEdit_Replace((KTextEdit*)self);
}

void k_textedit_add_text_decorator(void* self, void* decorator) {
    KTextEdit_AddTextDecorator((KTextEdit*)self, (Sonnet__SpellCheckDecorator*)decorator);
}

void k_textedit_clear_decorator(void* self) {
    KTextEdit_ClearDecorator((KTextEdit*)self);
}

void k_textedit_slot_do_replace(void* self) {
    KTextEdit_SlotDoReplace((KTextEdit*)self);
}

void k_textedit_on_slot_do_replace(void* self, void (*callback)()) {
    KTextEdit_OnSlotDoReplace((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_do_replace(void* self) {
    KTextEdit_SuperSlotDoReplace((KTextEdit*)self);
}

void k_textedit_slot_replace_next(void* self) {
    KTextEdit_SlotReplaceNext((KTextEdit*)self);
}

void k_textedit_on_slot_replace_next(void* self, void (*callback)()) {
    KTextEdit_OnSlotReplaceNext((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_replace_next(void* self) {
    KTextEdit_SuperSlotReplaceNext((KTextEdit*)self);
}

void k_textedit_slot_do_find(void* self) {
    KTextEdit_SlotDoFind((KTextEdit*)self);
}

void k_textedit_on_slot_do_find(void* self, void (*callback)()) {
    KTextEdit_OnSlotDoFind((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_do_find(void* self) {
    KTextEdit_SuperSlotDoFind((KTextEdit*)self);
}

void k_textedit_slot_find(void* self) {
    KTextEdit_SlotFind((KTextEdit*)self);
}

void k_textedit_on_slot_find(void* self, void (*callback)()) {
    KTextEdit_OnSlotFind((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_find(void* self) {
    KTextEdit_SuperSlotFind((KTextEdit*)self);
}

void k_textedit_slot_find_next(void* self) {
    KTextEdit_SlotFindNext((KTextEdit*)self);
}

void k_textedit_on_slot_find_next(void* self, void (*callback)()) {
    KTextEdit_OnSlotFindNext((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_find_next(void* self) {
    KTextEdit_SuperSlotFindNext((KTextEdit*)self);
}

void k_textedit_slot_find_previous(void* self) {
    KTextEdit_SlotFindPrevious((KTextEdit*)self);
}

void k_textedit_on_slot_find_previous(void* self, void (*callback)()) {
    KTextEdit_OnSlotFindPrevious((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_find_previous(void* self) {
    KTextEdit_SuperSlotFindPrevious((KTextEdit*)self);
}

void k_textedit_slot_replace(void* self) {
    KTextEdit_SlotReplace((KTextEdit*)self);
}

void k_textedit_on_slot_replace(void* self, void (*callback)()) {
    KTextEdit_OnSlotReplace((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_replace(void* self) {
    KTextEdit_SuperSlotReplace((KTextEdit*)self);
}

void k_textedit_slot_speak_text(void* self) {
    KTextEdit_SlotSpeakText((KTextEdit*)self);
}

void k_textedit_on_slot_speak_text(void* self, void (*callback)()) {
    KTextEdit_OnSlotSpeakText((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_slot_speak_text(void* self) {
    KTextEdit_SuperSlotSpeakText((KTextEdit*)self);
}

bool k_textedit_event(void* self, void* param1) {
    return KTextEdit_Event((KTextEdit*)self, (QEvent*)param1);
}

void k_textedit_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEdit_OnEvent((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_super_event(void* self, void* param1) {
    return KTextEdit_SuperEvent((KTextEdit*)self, (QEvent*)param1);
}

void k_textedit_key_press_event(void* self, void* param1) {
    KTextEdit_KeyPressEvent((KTextEdit*)self, (QKeyEvent*)param1);
}

void k_textedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnKeyPressEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_key_press_event(void* self, void* param1) {
    KTextEdit_SuperKeyPressEvent((KTextEdit*)self, (QKeyEvent*)param1);
}

void k_textedit_focus_in_event(void* self, void* param1) {
    KTextEdit_FocusInEvent((KTextEdit*)self, (QFocusEvent*)param1);
}

void k_textedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnFocusInEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_focus_in_event(void* self, void* param1) {
    KTextEdit_SuperFocusInEvent((KTextEdit*)self, (QFocusEvent*)param1);
}

void k_textedit_delete_word_back(void* self) {
    KTextEdit_DeleteWordBack((KTextEdit*)self);
}

void k_textedit_on_delete_word_back(void* self, void (*callback)()) {
    KTextEdit_OnDeleteWordBack((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_delete_word_back(void* self) {
    KTextEdit_SuperDeleteWordBack((KTextEdit*)self);
}

void k_textedit_delete_word_forward(void* self) {
    KTextEdit_DeleteWordForward((KTextEdit*)self);
}

void k_textedit_on_delete_word_forward(void* self, void (*callback)()) {
    KTextEdit_OnDeleteWordForward((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_delete_word_forward(void* self) {
    KTextEdit_SuperDeleteWordForward((KTextEdit*)self);
}

void k_textedit_context_menu_event(void* self, void* param1) {
    KTextEdit_ContextMenuEvent((KTextEdit*)self, (QContextMenuEvent*)param1);
}

void k_textedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnContextMenuEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_super_context_menu_event(void* self, void* param1) {
    KTextEdit_SuperContextMenuEvent((KTextEdit*)self, (QContextMenuEvent*)param1);
}

const char* k_textedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_show_spell_config_dialog1(void* self, const char* windowIcon) {
    KTextEdit_ShowSpellConfigDialog1((KTextEdit*)self, qstring(windowIcon));
}

void k_textedit_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textedit_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_textedit_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_textedit_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textedit_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_textedit_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_textedit_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_textedit_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_textedit_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_textedit_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textedit_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_textedit_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_textedit_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_textedit_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_textedit_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_textedit_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_textedit_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_textedit_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textedit_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textedit_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_textedit_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_textedit_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_textedit_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_textedit_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_textedit_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_textedit_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedit_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_textedit_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_textedit_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_textedit_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_textedit_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_textedit_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_textedit_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_textedit_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_textedit_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_textedit_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textedit_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedit_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedit_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_textedit_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_textedit_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textedit_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_textedit_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textedit_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_textedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedit_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_textedit_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_textedit_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_textedit_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_textedit_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_textedit_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_textedit_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_textedit_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_textedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textedit_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_textedit_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_textedit_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_textedit_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_textedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_textedit_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_textedit_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void k_textedit_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_textedit_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_textedit_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_textedit_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_textedit_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void k_textedit_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_textedit_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_textedit_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_textedit_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_textedit_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_textedit_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_textedit_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_textedit_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_textedit_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_textedit_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_textedit_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_textedit_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_textedit_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_textedit_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_textedit_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_textedit_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_textedit_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_textedit_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_textedit_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_textedit_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_textedit_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_textedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_textedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_textedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_textedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_textedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textedit_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_textedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_textedit_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_textedit_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_textedit_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_textedit_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_textedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textedit_dynamic_property_names\n");
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

QBindingStorage* k_textedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textedit_load_resource(void* self, int type, void* name) {
    return KTextEdit_LoadResource((KTextEdit*)self, type, (QUrl*)name);
}

QVariant* k_textedit_super_load_resource(void* self, int type, void* name) {
    return KTextEdit_SuperLoadResource((KTextEdit*)self, type, (QUrl*)name);
}

void k_textedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    KTextEdit_OnLoadResource((KTextEdit*)self, (intptr_t)callback);
}

QVariant* k_textedit_input_method_query(void* self, int32_t property) {
    return KTextEdit_InputMethodQuery((KTextEdit*)self, property);
}

QVariant* k_textedit_super_input_method_query(void* self, int32_t property) {
    return KTextEdit_SuperInputMethodQuery((KTextEdit*)self, property);
}

void k_textedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KTextEdit_OnInputMethodQuery((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_timer_event(void* self, void* e) {
    KTextEdit_TimerEvent((KTextEdit*)self, (QTimerEvent*)e);
}

void k_textedit_super_timer_event(void* self, void* e) {
    KTextEdit_SuperTimerEvent((KTextEdit*)self, (QTimerEvent*)e);
}

void k_textedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnTimerEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_key_release_event(void* self, void* e) {
    KTextEdit_KeyReleaseEvent((KTextEdit*)self, (QKeyEvent*)e);
}

void k_textedit_super_key_release_event(void* self, void* e) {
    KTextEdit_SuperKeyReleaseEvent((KTextEdit*)self, (QKeyEvent*)e);
}

void k_textedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnKeyReleaseEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_resize_event(void* self, void* e) {
    KTextEdit_ResizeEvent((KTextEdit*)self, (QResizeEvent*)e);
}

void k_textedit_super_resize_event(void* self, void* e) {
    KTextEdit_SuperResizeEvent((KTextEdit*)self, (QResizeEvent*)e);
}

void k_textedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnResizeEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_paint_event(void* self, void* e) {
    KTextEdit_PaintEvent((KTextEdit*)self, (QPaintEvent*)e);
}

void k_textedit_super_paint_event(void* self, void* e) {
    KTextEdit_SuperPaintEvent((KTextEdit*)self, (QPaintEvent*)e);
}

void k_textedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnPaintEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_mouse_press_event(void* self, void* e) {
    KTextEdit_MousePressEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_super_mouse_press_event(void* self, void* e) {
    KTextEdit_SuperMousePressEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnMousePressEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_mouse_move_event(void* self, void* e) {
    KTextEdit_MouseMoveEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_super_mouse_move_event(void* self, void* e) {
    KTextEdit_SuperMouseMoveEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnMouseMoveEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_mouse_release_event(void* self, void* e) {
    KTextEdit_MouseReleaseEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_super_mouse_release_event(void* self, void* e) {
    KTextEdit_SuperMouseReleaseEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnMouseReleaseEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_mouse_double_click_event(void* self, void* e) {
    KTextEdit_MouseDoubleClickEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_super_mouse_double_click_event(void* self, void* e) {
    KTextEdit_SuperMouseDoubleClickEvent((KTextEdit*)self, (QMouseEvent*)e);
}

void k_textedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnMouseDoubleClickEvent((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_focus_next_prev_child(void* self, bool next) {
    return KTextEdit_FocusNextPrevChild((KTextEdit*)self, next);
}

bool k_textedit_super_focus_next_prev_child(void* self, bool next) {
    return KTextEdit_SuperFocusNextPrevChild((KTextEdit*)self, next);
}

void k_textedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KTextEdit_OnFocusNextPrevChild((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_drag_enter_event(void* self, void* e) {
    KTextEdit_DragEnterEvent((KTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textedit_super_drag_enter_event(void* self, void* e) {
    KTextEdit_SuperDragEnterEvent((KTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDragEnterEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_drag_leave_event(void* self, void* e) {
    KTextEdit_DragLeaveEvent((KTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textedit_super_drag_leave_event(void* self, void* e) {
    KTextEdit_SuperDragLeaveEvent((KTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDragLeaveEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_drag_move_event(void* self, void* e) {
    KTextEdit_DragMoveEvent((KTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textedit_super_drag_move_event(void* self, void* e) {
    KTextEdit_SuperDragMoveEvent((KTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDragMoveEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_drop_event(void* self, void* e) {
    KTextEdit_DropEvent((KTextEdit*)self, (QDropEvent*)e);
}

void k_textedit_super_drop_event(void* self, void* e) {
    KTextEdit_SuperDropEvent((KTextEdit*)self, (QDropEvent*)e);
}

void k_textedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDropEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_focus_out_event(void* self, void* e) {
    KTextEdit_FocusOutEvent((KTextEdit*)self, (QFocusEvent*)e);
}

void k_textedit_super_focus_out_event(void* self, void* e) {
    KTextEdit_SuperFocusOutEvent((KTextEdit*)self, (QFocusEvent*)e);
}

void k_textedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnFocusOutEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_show_event(void* self, void* param1) {
    KTextEdit_ShowEvent((KTextEdit*)self, (QShowEvent*)param1);
}

void k_textedit_super_show_event(void* self, void* param1) {
    KTextEdit_SuperShowEvent((KTextEdit*)self, (QShowEvent*)param1);
}

void k_textedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnShowEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_change_event(void* self, void* e) {
    KTextEdit_ChangeEvent((KTextEdit*)self, (QEvent*)e);
}

void k_textedit_super_change_event(void* self, void* e) {
    KTextEdit_SuperChangeEvent((KTextEdit*)self, (QEvent*)e);
}

void k_textedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnChangeEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_wheel_event(void* self, void* e) {
    KTextEdit_WheelEvent((KTextEdit*)self, (QWheelEvent*)e);
}

void k_textedit_super_wheel_event(void* self, void* e) {
    KTextEdit_SuperWheelEvent((KTextEdit*)self, (QWheelEvent*)e);
}

void k_textedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnWheelEvent((KTextEdit*)self, (intptr_t)callback);
}

QMimeData* k_textedit_create_mime_data_from_selection(void* self) {
    return KTextEdit_CreateMimeDataFromSelection((KTextEdit*)self);
}

QMimeData* k_textedit_super_create_mime_data_from_selection(void* self) {
    return KTextEdit_SuperCreateMimeDataFromSelection((KTextEdit*)self);
}

void k_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    KTextEdit_OnCreateMimeDataFromSelection((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_can_insert_from_mime_data(void* self, void* source) {
    return KTextEdit_CanInsertFromMimeData((KTextEdit*)self, (QMimeData*)source);
}

bool k_textedit_super_can_insert_from_mime_data(void* self, void* source) {
    return KTextEdit_SuperCanInsertFromMimeData((KTextEdit*)self, (QMimeData*)source);
}

void k_textedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    KTextEdit_OnCanInsertFromMimeData((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_insert_from_mime_data(void* self, void* source) {
    KTextEdit_InsertFromMimeData((KTextEdit*)self, (QMimeData*)source);
}

void k_textedit_super_insert_from_mime_data(void* self, void* source) {
    KTextEdit_SuperInsertFromMimeData((KTextEdit*)self, (QMimeData*)source);
}

void k_textedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnInsertFromMimeData((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_input_method_event(void* self, void* param1) {
    KTextEdit_InputMethodEvent((KTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textedit_super_input_method_event(void* self, void* param1) {
    KTextEdit_SuperInputMethodEvent((KTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnInputMethodEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_scroll_contents_by(void* self, int dx, int dy) {
    KTextEdit_ScrollContentsBy((KTextEdit*)self, dx, dy);
}

void k_textedit_super_scroll_contents_by(void* self, int dx, int dy) {
    KTextEdit_SuperScrollContentsBy((KTextEdit*)self, dx, dy);
}

void k_textedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KTextEdit_OnScrollContentsBy((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_do_set_text_cursor(void* self, void* cursor) {
    KTextEdit_DoSetTextCursor((KTextEdit*)self, (QTextCursor*)cursor);
}

void k_textedit_super_do_set_text_cursor(void* self, void* cursor) {
    KTextEdit_SuperDoSetTextCursor((KTextEdit*)self, (QTextCursor*)cursor);
}

void k_textedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDoSetTextCursor((KTextEdit*)self, (intptr_t)callback);
}

QSize* k_textedit_minimum_size_hint(void* self) {
    return KTextEdit_MinimumSizeHint((KTextEdit*)self);
}

QSize* k_textedit_super_minimum_size_hint(void* self) {
    return KTextEdit_SuperMinimumSizeHint((KTextEdit*)self);
}

void k_textedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KTextEdit_OnMinimumSizeHint((KTextEdit*)self, (intptr_t)callback);
}

QSize* k_textedit_size_hint(void* self) {
    return KTextEdit_SizeHint((KTextEdit*)self);
}

QSize* k_textedit_super_size_hint(void* self) {
    return KTextEdit_SuperSizeHint((KTextEdit*)self);
}

void k_textedit_on_size_hint(void* self, QSize* (*callback)()) {
    KTextEdit_OnSizeHint((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_setup_viewport(void* self, void* viewport) {
    KTextEdit_SetupViewport((KTextEdit*)self, (QWidget*)viewport);
}

void k_textedit_super_setup_viewport(void* self, void* viewport) {
    KTextEdit_SuperSetupViewport((KTextEdit*)self, (QWidget*)viewport);
}

void k_textedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnSetupViewport((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_event_filter(void* self, void* param1, void* param2) {
    return KTextEdit_EventFilter((KTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textedit_super_event_filter(void* self, void* param1, void* param2) {
    return KTextEdit_SuperEventFilter((KTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEdit_OnEventFilter((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_viewport_event(void* self, void* param1) {
    return KTextEdit_ViewportEvent((KTextEdit*)self, (QEvent*)param1);
}

bool k_textedit_super_viewport_event(void* self, void* param1) {
    return KTextEdit_SuperViewportEvent((KTextEdit*)self, (QEvent*)param1);
}

void k_textedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KTextEdit_OnViewportEvent((KTextEdit*)self, (intptr_t)callback);
}

QSize* k_textedit_viewport_size_hint(void* self) {
    return KTextEdit_ViewportSizeHint((KTextEdit*)self);
}

QSize* k_textedit_super_viewport_size_hint(void* self) {
    return KTextEdit_SuperViewportSizeHint((KTextEdit*)self);
}

void k_textedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KTextEdit_OnViewportSizeHint((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_init_style_option(void* self, void* option) {
    KTextEdit_InitStyleOption((KTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textedit_super_init_style_option(void* self, void* option) {
    KTextEdit_SuperInitStyleOption((KTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnInitStyleOption((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_dev_type(void* self) {
    return KTextEdit_DevType((KTextEdit*)self);
}

int32_t k_textedit_super_dev_type(void* self) {
    return KTextEdit_SuperDevType((KTextEdit*)self);
}

void k_textedit_on_dev_type(void* self, int32_t (*callback)()) {
    KTextEdit_OnDevType((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_set_visible(void* self, bool visible) {
    KTextEdit_SetVisible((KTextEdit*)self, visible);
}

void k_textedit_super_set_visible(void* self, bool visible) {
    KTextEdit_SuperSetVisible((KTextEdit*)self, visible);
}

void k_textedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KTextEdit_OnSetVisible((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_height_for_width(void* self, int param1) {
    return KTextEdit_HeightForWidth((KTextEdit*)self, param1);
}

int32_t k_textedit_super_height_for_width(void* self, int param1) {
    return KTextEdit_SuperHeightForWidth((KTextEdit*)self, param1);
}

void k_textedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KTextEdit_OnHeightForWidth((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_has_height_for_width(void* self) {
    return KTextEdit_HasHeightForWidth((KTextEdit*)self);
}

bool k_textedit_super_has_height_for_width(void* self) {
    return KTextEdit_SuperHasHeightForWidth((KTextEdit*)self);
}

void k_textedit_on_has_height_for_width(void* self, bool (*callback)()) {
    KTextEdit_OnHasHeightForWidth((KTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_textedit_paint_engine(void* self) {
    return KTextEdit_PaintEngine((KTextEdit*)self);
}

QPaintEngine* k_textedit_super_paint_engine(void* self) {
    return KTextEdit_SuperPaintEngine((KTextEdit*)self);
}

void k_textedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KTextEdit_OnPaintEngine((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_enter_event(void* self, void* event) {
    KTextEdit_EnterEvent((KTextEdit*)self, (QEnterEvent*)event);
}

void k_textedit_super_enter_event(void* self, void* event) {
    KTextEdit_SuperEnterEvent((KTextEdit*)self, (QEnterEvent*)event);
}

void k_textedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnEnterEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_leave_event(void* self, void* event) {
    KTextEdit_LeaveEvent((KTextEdit*)self, (QEvent*)event);
}

void k_textedit_super_leave_event(void* self, void* event) {
    KTextEdit_SuperLeaveEvent((KTextEdit*)self, (QEvent*)event);
}

void k_textedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnLeaveEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_move_event(void* self, void* event) {
    KTextEdit_MoveEvent((KTextEdit*)self, (QMoveEvent*)event);
}

void k_textedit_super_move_event(void* self, void* event) {
    KTextEdit_SuperMoveEvent((KTextEdit*)self, (QMoveEvent*)event);
}

void k_textedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnMoveEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_close_event(void* self, void* event) {
    KTextEdit_CloseEvent((KTextEdit*)self, (QCloseEvent*)event);
}

void k_textedit_super_close_event(void* self, void* event) {
    KTextEdit_SuperCloseEvent((KTextEdit*)self, (QCloseEvent*)event);
}

void k_textedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnCloseEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_tablet_event(void* self, void* event) {
    KTextEdit_TabletEvent((KTextEdit*)self, (QTabletEvent*)event);
}

void k_textedit_super_tablet_event(void* self, void* event) {
    KTextEdit_SuperTabletEvent((KTextEdit*)self, (QTabletEvent*)event);
}

void k_textedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnTabletEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_action_event(void* self, void* event) {
    KTextEdit_ActionEvent((KTextEdit*)self, (QActionEvent*)event);
}

void k_textedit_super_action_event(void* self, void* event) {
    KTextEdit_SuperActionEvent((KTextEdit*)self, (QActionEvent*)event);
}

void k_textedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnActionEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_hide_event(void* self, void* event) {
    KTextEdit_HideEvent((KTextEdit*)self, (QHideEvent*)event);
}

void k_textedit_super_hide_event(void* self, void* event) {
    KTextEdit_SuperHideEvent((KTextEdit*)self, (QHideEvent*)event);
}

void k_textedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnHideEvent((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KTextEdit_NativeEvent((KTextEdit*)self, qstring(eventType), message, result);
}

bool k_textedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KTextEdit_SuperNativeEvent((KTextEdit*)self, qstring(eventType), message, result);
}

void k_textedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KTextEdit_OnNativeEvent((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_metric(void* self, int32_t param1) {
    return KTextEdit_Metric((KTextEdit*)self, param1);
}

int32_t k_textedit_super_metric(void* self, int32_t param1) {
    return KTextEdit_SuperMetric((KTextEdit*)self, param1);
}

void k_textedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KTextEdit_OnMetric((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_init_painter(void* self, void* painter) {
    KTextEdit_InitPainter((KTextEdit*)self, (QPainter*)painter);
}

void k_textedit_super_init_painter(void* self, void* painter) {
    KTextEdit_SuperInitPainter((KTextEdit*)self, (QPainter*)painter);
}

void k_textedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnInitPainter((KTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_textedit_redirected(void* self, void* offset) {
    return KTextEdit_Redirected((KTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_textedit_super_redirected(void* self, void* offset) {
    return KTextEdit_SuperRedirected((KTextEdit*)self, (QPoint*)offset);
}

void k_textedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KTextEdit_OnRedirected((KTextEdit*)self, (intptr_t)callback);
}

QPainter* k_textedit_shared_painter(void* self) {
    return KTextEdit_SharedPainter((KTextEdit*)self);
}

QPainter* k_textedit_super_shared_painter(void* self) {
    return KTextEdit_SuperSharedPainter((KTextEdit*)self);
}

void k_textedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    KTextEdit_OnSharedPainter((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_child_event(void* self, void* event) {
    KTextEdit_ChildEvent((KTextEdit*)self, (QChildEvent*)event);
}

void k_textedit_super_child_event(void* self, void* event) {
    KTextEdit_SuperChildEvent((KTextEdit*)self, (QChildEvent*)event);
}

void k_textedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnChildEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_custom_event(void* self, void* event) {
    KTextEdit_CustomEvent((KTextEdit*)self, (QEvent*)event);
}

void k_textedit_super_custom_event(void* self, void* event) {
    KTextEdit_SuperCustomEvent((KTextEdit*)self, (QEvent*)event);
}

void k_textedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnCustomEvent((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_connect_notify(void* self, void* signal) {
    KTextEdit_ConnectNotify((KTextEdit*)self, (QMetaMethod*)signal);
}

void k_textedit_super_connect_notify(void* self, void* signal) {
    KTextEdit_SuperConnectNotify((KTextEdit*)self, (QMetaMethod*)signal);
}

void k_textedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnConnectNotify((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_disconnect_notify(void* self, void* signal) {
    KTextEdit_DisconnectNotify((KTextEdit*)self, (QMetaMethod*)signal);
}

void k_textedit_super_disconnect_notify(void* self, void* signal) {
    KTextEdit_SuperDisconnectNotify((KTextEdit*)self, (QMetaMethod*)signal);
}

void k_textedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDisconnectNotify((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_zoom_in_f(void* self, float range) {
    KTextEdit_ZoomInF((KTextEdit*)self, range);
}

void k_textedit_super_zoom_in_f(void* self, float range) {
    KTextEdit_SuperZoomInF((KTextEdit*)self, range);
}

void k_textedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    KTextEdit_OnZoomInF((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KTextEdit_SetViewportMargins((KTextEdit*)self, left, top, right, bottom);
}

void k_textedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KTextEdit_SuperSetViewportMargins((KTextEdit*)self, left, top, right, bottom);
}

void k_textedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KTextEdit_OnSetViewportMargins((KTextEdit*)self, (intptr_t)callback);
}

QMargins* k_textedit_viewport_margins(void* self) {
    return KTextEdit_ViewportMargins((KTextEdit*)self);
}

QMargins* k_textedit_super_viewport_margins(void* self) {
    return KTextEdit_SuperViewportMargins((KTextEdit*)self);
}

void k_textedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KTextEdit_OnViewportMargins((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_draw_frame(void* self, void* param1) {
    KTextEdit_DrawFrame((KTextEdit*)self, (QPainter*)param1);
}

void k_textedit_super_draw_frame(void* self, void* param1) {
    KTextEdit_SuperDrawFrame((KTextEdit*)self, (QPainter*)param1);
}

void k_textedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KTextEdit_OnDrawFrame((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_update_micro_focus(void* self) {
    KTextEdit_UpdateMicroFocus((KTextEdit*)self);
}

void k_textedit_super_update_micro_focus(void* self) {
    KTextEdit_SuperUpdateMicroFocus((KTextEdit*)self);
}

void k_textedit_on_update_micro_focus(void* self, void (*callback)()) {
    KTextEdit_OnUpdateMicroFocus((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_create(void* self) {
    KTextEdit_Create((KTextEdit*)self);
}

void k_textedit_super_create(void* self) {
    KTextEdit_SuperCreate((KTextEdit*)self);
}

void k_textedit_on_create(void* self, void (*callback)()) {
    KTextEdit_OnCreate((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_destroy(void* self) {
    KTextEdit_Destroy((KTextEdit*)self);
}

void k_textedit_super_destroy(void* self) {
    KTextEdit_SuperDestroy((KTextEdit*)self);
}

void k_textedit_on_destroy(void* self, void (*callback)()) {
    KTextEdit_OnDestroy((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_focus_next_child(void* self) {
    return KTextEdit_FocusNextChild((KTextEdit*)self);
}

bool k_textedit_super_focus_next_child(void* self) {
    return KTextEdit_SuperFocusNextChild((KTextEdit*)self);
}

void k_textedit_on_focus_next_child(void* self, bool (*callback)()) {
    KTextEdit_OnFocusNextChild((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_focus_previous_child(void* self) {
    return KTextEdit_FocusPreviousChild((KTextEdit*)self);
}

bool k_textedit_super_focus_previous_child(void* self) {
    return KTextEdit_SuperFocusPreviousChild((KTextEdit*)self);
}

void k_textedit_on_focus_previous_child(void* self, bool (*callback)()) {
    KTextEdit_OnFocusPreviousChild((KTextEdit*)self, (intptr_t)callback);
}

QObject* k_textedit_sender(void* self) {
    return KTextEdit_Sender((KTextEdit*)self);
}

QObject* k_textedit_super_sender(void* self) {
    return KTextEdit_SuperSender((KTextEdit*)self);
}

void k_textedit_on_sender(void* self, QObject* (*callback)()) {
    KTextEdit_OnSender((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_sender_signal_index(void* self) {
    return KTextEdit_SenderSignalIndex((KTextEdit*)self);
}

int32_t k_textedit_super_sender_signal_index(void* self) {
    return KTextEdit_SuperSenderSignalIndex((KTextEdit*)self);
}

void k_textedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEdit_OnSenderSignalIndex((KTextEdit*)self, (intptr_t)callback);
}

int32_t k_textedit_receivers(void* self, const char* signal) {
    return KTextEdit_Receivers((KTextEdit*)self, signal);
}

int32_t k_textedit_super_receivers(void* self, const char* signal) {
    return KTextEdit_SuperReceivers((KTextEdit*)self, signal);
}

void k_textedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEdit_OnReceivers((KTextEdit*)self, (intptr_t)callback);
}

bool k_textedit_is_signal_connected(void* self, void* signal) {
    return KTextEdit_IsSignalConnected((KTextEdit*)self, (QMetaMethod*)signal);
}

bool k_textedit_super_is_signal_connected(void* self, void* signal) {
    return KTextEdit_SuperIsSignalConnected((KTextEdit*)self, (QMetaMethod*)signal);
}

void k_textedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEdit_OnIsSignalConnected((KTextEdit*)self, (intptr_t)callback);
}

double k_textedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTextEdit_GetDecodedMetricF((KTextEdit*)self, metricA, metricB);
}

double k_textedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTextEdit_SuperGetDecodedMetricF((KTextEdit*)self, metricA, metricB);
}

void k_textedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KTextEdit_OnGetDecodedMetricF((KTextEdit*)self, (intptr_t)callback);
}

void k_textedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textedit_delete(void* self) {
    KTextEdit_Delete((KTextEdit*)(self));
}
