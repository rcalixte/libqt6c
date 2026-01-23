#include "libktextedit.hpp"
#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
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
#include "libkrichtextedit.hpp"
#include "libkrichtextedit.h"

KRichTextEdit* k_richtextedit_new(void* parent) {
    return KRichTextEdit_new((QWidget*)parent);
}

KRichTextEdit* k_richtextedit_new2(const char* text) {
    return KRichTextEdit_new2(qstring(text));
}

KRichTextEdit* k_richtextedit_new3() {
    return KRichTextEdit_new3();
}

KRichTextEdit* k_richtextedit_new4(const char* text, void* parent) {
    return KRichTextEdit_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* k_richtextedit_meta_object(void* self) {
    return KRichTextEdit_MetaObject((KRichTextEdit*)self);
}

void* k_richtextedit_metacast(void* self, const char* param1) {
    return KRichTextEdit_Metacast((KRichTextEdit*)self, param1);
}

int32_t k_richtextedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRichTextEdit_Metacall((KRichTextEdit*)self, param1, param2, param3);
}

void k_richtextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRichTextEdit_OnMetacall((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRichTextEdit_QBaseMetacall((KRichTextEdit*)self, param1, param2, param3);
}

const char* k_richtextedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_enable_rich_text_mode(void* self) {
    KRichTextEdit_EnableRichTextMode((KRichTextEdit*)self);
}

int32_t k_richtextedit_text_mode(void* self) {
    return KRichTextEdit_TextMode((KRichTextEdit*)self);
}

const char* k_richtextedit_text_or_html(void* self) {
    libqt_string _str = KRichTextEdit_TextOrHtml((KRichTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_text_or_html(void* self, const char* text) {
    KRichTextEdit_SetTextOrHtml((KRichTextEdit*)self, qstring(text));
}

const char* k_richtextedit_current_link_text(void* self) {
    libqt_string _str = KRichTextEdit_CurrentLinkText((KRichTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_current_link_url(void* self) {
    libqt_string _str = KRichTextEdit_CurrentLinkUrl((KRichTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_select_link_text(void* self, void* cursor) {
    KRichTextEdit_SelectLinkText((KRichTextEdit*)self, (QTextCursor*)cursor);
}

void k_richtextedit_select_link_text2(void* self) {
    KRichTextEdit_SelectLinkText2((KRichTextEdit*)self);
}

void k_richtextedit_update_link(void* self, const char* linkUrl, const char* linkText) {
    KRichTextEdit_UpdateLink((KRichTextEdit*)self, qstring(linkUrl), qstring(linkText));
}

bool k_richtextedit_can_indent_list(void* self) {
    return KRichTextEdit_CanIndentList((KRichTextEdit*)self);
}

bool k_richtextedit_can_dedent_list(void* self) {
    return KRichTextEdit_CanDedentList((KRichTextEdit*)self);
}

void k_richtextedit_align_left(void* self) {
    KRichTextEdit_AlignLeft((KRichTextEdit*)self);
}

void k_richtextedit_align_center(void* self) {
    KRichTextEdit_AlignCenter((KRichTextEdit*)self);
}

void k_richtextedit_align_right(void* self) {
    KRichTextEdit_AlignRight((KRichTextEdit*)self);
}

void k_richtextedit_align_justify(void* self) {
    KRichTextEdit_AlignJustify((KRichTextEdit*)self);
}

void k_richtextedit_make_right_to_left(void* self) {
    KRichTextEdit_MakeRightToLeft((KRichTextEdit*)self);
}

void k_richtextedit_make_left_to_right(void* self) {
    KRichTextEdit_MakeLeftToRight((KRichTextEdit*)self);
}

void k_richtextedit_set_list_style(void* self, int _styleIndex) {
    KRichTextEdit_SetListStyle((KRichTextEdit*)self, _styleIndex);
}

void k_richtextedit_indent_list_more(void* self) {
    KRichTextEdit_IndentListMore((KRichTextEdit*)self);
}

void k_richtextedit_indent_list_less(void* self) {
    KRichTextEdit_IndentListLess((KRichTextEdit*)self);
}

void k_richtextedit_set_font_family(void* self, const char* fontFamily) {
    KRichTextEdit_SetFontFamily((KRichTextEdit*)self, qstring(fontFamily));
}

void k_richtextedit_set_font_size(void* self, int size) {
    KRichTextEdit_SetFontSize((KRichTextEdit*)self, size);
}

void k_richtextedit_set_font(void* self, void* font) {
    KRichTextEdit_SetFont((KRichTextEdit*)self, (QFont*)font);
}

void k_richtextedit_set_text_bold(void* self, bool bold) {
    KRichTextEdit_SetTextBold((KRichTextEdit*)self, bold);
}

void k_richtextedit_set_text_italic(void* self, bool italic) {
    KRichTextEdit_SetTextItalic((KRichTextEdit*)self, italic);
}

void k_richtextedit_set_text_underline(void* self, bool underline) {
    KRichTextEdit_SetTextUnderline((KRichTextEdit*)self, underline);
}

void k_richtextedit_set_text_strike_out(void* self, bool strikeOut) {
    KRichTextEdit_SetTextStrikeOut((KRichTextEdit*)self, strikeOut);
}

void k_richtextedit_set_text_foreground_color(void* self, void* color) {
    KRichTextEdit_SetTextForegroundColor((KRichTextEdit*)self, (QColor*)color);
}

void k_richtextedit_set_text_background_color(void* self, void* color) {
    KRichTextEdit_SetTextBackgroundColor((KRichTextEdit*)self, (QColor*)color);
}

void k_richtextedit_insert_horizontal_rule(void* self) {
    KRichTextEdit_InsertHorizontalRule((KRichTextEdit*)self);
}

void k_richtextedit_switch_to_plain_text(void* self) {
    KRichTextEdit_SwitchToPlainText((KRichTextEdit*)self);
}

const char* k_richtextedit_to_clean_html(void* self) {
    libqt_string _str = KRichTextEdit_ToCleanHtml((KRichTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_text_super_script(void* self, bool superscript) {
    KRichTextEdit_SetTextSuperScript((KRichTextEdit*)self, superscript);
}

void k_richtextedit_set_text_sub_script(void* self, bool subscript) {
    KRichTextEdit_SetTextSubScript((KRichTextEdit*)self, subscript);
}

void k_richtextedit_set_heading_level(void* self, int level) {
    KRichTextEdit_SetHeadingLevel((KRichTextEdit*)self, level);
}

void k_richtextedit_insert_plain_text_implementation(void* self) {
    KRichTextEdit_InsertPlainTextImplementation((KRichTextEdit*)self);
}

void k_richtextedit_text_mode_changed(void* self, int32_t mode) {
    KRichTextEdit_TextModeChanged((KRichTextEdit*)self, mode);
}

void k_richtextedit_on_text_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    KRichTextEdit_Connect_TextModeChanged((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_key_press_event(void* self, void* event) {
    KRichTextEdit_KeyPressEvent((KRichTextEdit*)self, (QKeyEvent*)event);
}

void k_richtextedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnKeyPressEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_qbase_key_press_event(void* self, void* event) {
    KRichTextEdit_QBaseKeyPressEvent((KRichTextEdit*)self, (QKeyEvent*)event);
}

const char* k_richtextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_highlight_word(void* self, int length, int pos) {
    KTextEdit_HighlightWord((KTextEdit*)self, length, pos);
}

Sonnet__Highlighter* k_richtextedit_highlighter(void* self) {
    return KTextEdit_Highlighter((KTextEdit*)self);
}

void k_richtextedit_set_highlighter(void* self, void* _highLighter) {
    KTextEdit_SetHighlighter((KTextEdit*)self, (Sonnet__Highlighter*)_highLighter);
}

void k_richtextedit_enable_find_replace(void* self, bool enabled) {
    KTextEdit_EnableFindReplace((KTextEdit*)self, enabled);
}

const char* k_richtextedit_spell_checking_language(void* self) {
    libqt_string _str = KTextEdit_SpellCheckingLanguage((KTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_show_tab_action(void* self, bool show) {
    KTextEdit_ShowTabAction((KTextEdit*)self, show);
}

void k_richtextedit_show_auto_correct_button(void* self, bool show) {
    KTextEdit_ShowAutoCorrectButton((KTextEdit*)self, show);
}

void k_richtextedit_force_spell_checking(void* self) {
    KTextEdit_ForceSpellChecking((KTextEdit*)self);
}

void k_richtextedit_check_spelling_changed(void* self, bool param1) {
    KTextEdit_CheckSpellingChanged((KTextEdit*)self, param1);
}

void k_richtextedit_on_check_spelling_changed(void* self, void (*callback)(void*, bool)) {
    KTextEdit_Connect_CheckSpellingChanged((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_spell_check_status(void* self, const char* param1) {
    KTextEdit_SpellCheckStatus((KTextEdit*)self, qstring(param1));
}

void k_richtextedit_on_spell_check_status(void* self, void (*callback)(void*, const char*)) {
    KTextEdit_Connect_SpellCheckStatus((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_language_changed(void* self, const char* language) {
    KTextEdit_LanguageChanged((KTextEdit*)self, qstring(language));
}

void k_richtextedit_on_language_changed(void* self, void (*callback)(void*, const char*)) {
    KTextEdit_Connect_LanguageChanged((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_about_to_show_context_menu(void* self, void* menu) {
    KTextEdit_AboutToShowContextMenu((KTextEdit*)self, (QMenu*)menu);
}

void k_richtextedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*)) {
    KTextEdit_Connect_AboutToShowContextMenu((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord) {
    KTextEdit_SpellCheckerAutoCorrect((KTextEdit*)self, qstring(currentWord), qstring(autoCorrectWord));
}

void k_richtextedit_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*)) {
    KTextEdit_Connect_SpellCheckerAutoCorrect((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_spell_checking_finished(void* self) {
    KTextEdit_SpellCheckingFinished((KTextEdit*)self);
}

void k_richtextedit_on_spell_checking_finished(void* self, void (*callback)(void*)) {
    KTextEdit_Connect_SpellCheckingFinished((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_spell_checking_canceled(void* self) {
    KTextEdit_SpellCheckingCanceled((KTextEdit*)self);
}

void k_richtextedit_on_spell_checking_canceled(void* self, void (*callback)(void*)) {
    KTextEdit_Connect_SpellCheckingCanceled((KTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_set_spell_checking_language(void* self, const char* language) {
    KTextEdit_SetSpellCheckingLanguage((KTextEdit*)self, qstring(language));
}

void k_richtextedit_check_spelling(void* self) {
    KTextEdit_CheckSpelling((KTextEdit*)self);
}

void k_richtextedit_show_spell_config_dialog(void* self) {
    KTextEdit_ShowSpellConfigDialog((KTextEdit*)self);
}

void k_richtextedit_replace(void* self) {
    KTextEdit_Replace((KTextEdit*)self);
}

void k_richtextedit_add_text_decorator(void* self, void* decorator) {
    KTextEdit_AddTextDecorator((KTextEdit*)self, (Sonnet__SpellCheckDecorator*)decorator);
}

void k_richtextedit_clear_decorator(void* self) {
    KTextEdit_ClearDecorator((KTextEdit*)self);
}

void k_richtextedit_show_spell_config_dialog1(void* self, const char* windowIcon) {
    KTextEdit_ShowSpellConfigDialog1((KTextEdit*)self, qstring(windowIcon));
}

void k_richtextedit_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_richtextedit_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_richtextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_richtextedit_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_richtextedit_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_richtextedit_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_richtextedit_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_richtextedit_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_richtextedit_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_richtextedit_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_richtextedit_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_richtextedit_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_richtextedit_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_richtextedit_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_richtextedit_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_richtextedit_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_richtextedit_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_richtextedit_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_richtextedit_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_richtextedit_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_richtextedit_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_richtextedit_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_richtextedit_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_richtextedit_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_richtextedit_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_richtextedit_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_richtextedit_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_richtextedit_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_richtextedit_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_richtextedit_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_richtextedit_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_richtextedit_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_richtextedit_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_richtextedit_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_richtextedit_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_richtextedit_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_richtextedit_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_richtextedit_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_richtextedit_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_richtextedit_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_richtextedit_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_richtextedit_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_richtextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_richtextedit_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_richtextedit_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_richtextedit_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_richtextedit_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_richtextedit_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_richtextedit_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_richtextedit_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_richtextedit_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_richtextedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_richtextedit_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_richtextedit_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_richtextedit_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_richtextedit_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_richtextedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_richtextedit_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_richtextedit_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_richtextedit_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_richtextedit_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_richtextedit_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_richtextedit_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_richtextedit_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_richtextedit_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_richtextedit_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_richtextedit_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_richtextedit_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_richtextedit_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_richtextedit_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_richtextedit_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_richtextedit_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_richtextedit_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_richtextedit_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_richtextedit_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_richtextedit_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_richtextedit_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_richtextedit_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_richtextedit_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_richtextedit_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_richtextedit_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_richtextedit_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_richtextedit_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_richtextedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_richtextedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_richtextedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_richtextedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_richtextedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_richtextedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_richtextedit_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_richtextedit_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_richtextedit_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_richtextedit_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_richtextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_richtextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_richtextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_richtextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_richtextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_richtextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_richtextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_richtextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_richtextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_richtextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_richtextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_richtextedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_richtextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_richtextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_richtextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_richtextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_richtextedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_richtextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_richtextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_richtextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_richtextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_richtextedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_richtextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_richtextedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_richtextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_richtextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_richtextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_richtextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_richtextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_richtextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_richtextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_richtextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_richtextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_richtextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_richtextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_richtextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_richtextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_richtextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_richtextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_richtextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_richtextedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_richtextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_richtextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_richtextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_richtextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_richtextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_richtextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_richtextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_richtextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_richtextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_richtextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_richtextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_richtextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_richtextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_richtextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_richtextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_richtextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_richtextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_richtextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_richtextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_richtextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_richtextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_richtextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_richtextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_richtextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_richtextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_richtextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_richtextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_richtextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_richtextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_richtextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_richtextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_richtextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_richtextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_richtextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_richtextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_richtextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_richtextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_richtextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_richtextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_richtextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_richtextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_richtextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_richtextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_richtextedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_richtextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_richtextedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_richtextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_richtextedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_richtextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_richtextedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_richtextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_richtextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_richtextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_richtextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_richtextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_richtextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_richtextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_richtextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_richtextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_richtextedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_richtextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_richtextedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_richtextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_richtextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

QFontMetrics* k_richtextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_richtextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_richtextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_richtextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_richtextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_richtextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_richtextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_richtextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_richtextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_richtextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_richtextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_richtextedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_richtextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_richtextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_richtextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_richtextedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_richtextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_richtextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_richtextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_richtextedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_richtextedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_richtextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_richtextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_richtextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_richtextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_richtextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_richtextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_richtextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_richtextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_richtextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_richtextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_richtextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_richtextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_richtextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_richtextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_richtextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_richtextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_richtextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_richtextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_richtextedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_richtextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_richtextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_richtextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_richtextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_richtextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_richtextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_richtextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_richtextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_richtextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_richtextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_richtextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_richtextedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_richtextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_richtextedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_richtextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_richtextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_richtextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_richtextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_richtextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_richtextedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_richtextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_richtextedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_richtextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_richtextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_richtextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_richtextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_richtextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_richtextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_richtextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_richtextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_richtextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_richtextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_richtextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_richtextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_richtextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_richtextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_richtextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_richtextedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_richtextedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_richtextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_richtextedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_richtextedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_richtextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_richtextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_richtextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_richtextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_richtextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_richtextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_richtextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_richtextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_richtextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_richtextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_richtextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_richtextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_richtextedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_richtextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_richtextedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_richtextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_richtextedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_richtextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_richtextedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_richtextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_richtextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_richtextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_richtextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_richtextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_richtextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_richtextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_richtextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_richtextedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_richtextedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_richtextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_richtextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_richtextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_richtextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_richtextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_richtextedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_richtextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_richtextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_richtextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_richtextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_richtextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_richtextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_richtextedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_richtextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_richtextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_richtextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_richtextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_richtextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_richtextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_richtextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_richtextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_richtextedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_richtextedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_richtextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_richtextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_richtextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_richtextedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_richtextedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_richtextedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_richtextedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_richtextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_richtextedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_richtextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_richtextedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_richtextedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_richtextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_richtextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_richtextedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_richtextedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_richtextedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_richtextedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_richtextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_richtextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_richtextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_richtextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_richtextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_richtextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_richtextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_richtextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_richtextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_richtextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_richtextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_richtextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_richtextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_richtextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_richtextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_richtextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_richtextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_richtextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_richtextedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_richtextedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_richtextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_richtextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_richtextedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_richtextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_richtextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_richtextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_richtextedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_richtextedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_richtextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_richtextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_richtextedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_richtextedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_richtextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_richtextedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_richtextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_richtextedit_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_richtextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_richtextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_richtextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_richtextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_richtextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_richtextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_richtextedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_richtextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_richtextedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_richtextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_richtextedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_richtextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_richtextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_richtextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_richtextedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_richtextedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_richtextedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_richtextedit_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_richtextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_richtextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_richtextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_richtextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_richtextedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_richtextedit_dynamic_property_names\n");
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

QBindingStorage* k_richtextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_richtextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_richtextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_richtextedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_richtextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_richtextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_richtextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_richtextedit_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_richtextedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_richtextedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_richtextedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_richtextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_richtextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_richtextedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_richtextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_richtextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_richtextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_richtextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_richtextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_richtextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_richtextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_richtextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_richtextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_richtextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_richtextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_richtextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_richtextedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_richtextedit_set_read_only(void* self, bool readOnly) {
    KRichTextEdit_SetReadOnly((KRichTextEdit*)self, readOnly);
}

void k_richtextedit_qbase_set_read_only(void* self, bool readOnly) {
    KRichTextEdit_QBaseSetReadOnly((KRichTextEdit*)self, readOnly);
}

void k_richtextedit_on_set_read_only(void* self, void (*callback)(void*, bool)) {
    KRichTextEdit_OnSetReadOnly((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_set_check_spelling_enabled(void* self, bool check) {
    KRichTextEdit_SetCheckSpellingEnabled((KRichTextEdit*)self, check);
}

void k_richtextedit_qbase_set_check_spelling_enabled(void* self, bool check) {
    KRichTextEdit_QBaseSetCheckSpellingEnabled((KRichTextEdit*)self, check);
}

void k_richtextedit_on_set_check_spelling_enabled(void* self, void (*callback)(void*, bool)) {
    KRichTextEdit_OnSetCheckSpellingEnabled((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_check_spelling_enabled(void* self) {
    return KRichTextEdit_CheckSpellingEnabled((KRichTextEdit*)self);
}

bool k_richtextedit_qbase_check_spelling_enabled(void* self) {
    return KRichTextEdit_QBaseCheckSpellingEnabled((KRichTextEdit*)self);
}

void k_richtextedit_on_check_spelling_enabled(void* self, bool (*callback)()) {
    KRichTextEdit_OnCheckSpellingEnabled((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_should_block_be_spell_checked(void* self, const char* block) {
    return KRichTextEdit_ShouldBlockBeSpellChecked((KRichTextEdit*)self, qstring(block));
}

bool k_richtextedit_qbase_should_block_be_spell_checked(void* self, const char* block) {
    return KRichTextEdit_QBaseShouldBlockBeSpellChecked((KRichTextEdit*)self, qstring(block));
}

void k_richtextedit_on_should_block_be_spell_checked(void* self, bool (*callback)(void*, const char*)) {
    KRichTextEdit_OnShouldBlockBeSpellChecked((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_create_highlighter(void* self) {
    KRichTextEdit_CreateHighlighter((KRichTextEdit*)self);
}

void k_richtextedit_qbase_create_highlighter(void* self) {
    KRichTextEdit_QBaseCreateHighlighter((KRichTextEdit*)self);
}

void k_richtextedit_on_create_highlighter(void* self, void (*callback)()) {
    KRichTextEdit_OnCreateHighlighter((KRichTextEdit*)self, (intptr_t)callback);
}

QMenu* k_richtextedit_mouse_popup_menu(void* self) {
    return KRichTextEdit_MousePopupMenu((KRichTextEdit*)self);
}

QMenu* k_richtextedit_qbase_mouse_popup_menu(void* self) {
    return KRichTextEdit_QBaseMousePopupMenu((KRichTextEdit*)self);
}

void k_richtextedit_on_mouse_popup_menu(void* self, QMenu* (*callback)()) {
    KRichTextEdit_OnMousePopupMenu((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_event(void* self, void* param1) {
    return KRichTextEdit_Event((KRichTextEdit*)self, (QEvent*)param1);
}

bool k_richtextedit_qbase_event(void* self, void* param1) {
    return KRichTextEdit_QBaseEvent((KRichTextEdit*)self, (QEvent*)param1);
}

void k_richtextedit_on_event(void* self, bool (*callback)(void*, void*)) {
    KRichTextEdit_OnEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_focus_in_event(void* self, void* param1) {
    KRichTextEdit_FocusInEvent((KRichTextEdit*)self, (QFocusEvent*)param1);
}

void k_richtextedit_qbase_focus_in_event(void* self, void* param1) {
    KRichTextEdit_QBaseFocusInEvent((KRichTextEdit*)self, (QFocusEvent*)param1);
}

void k_richtextedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnFocusInEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_delete_word_back(void* self) {
    KRichTextEdit_DeleteWordBack((KRichTextEdit*)self);
}

void k_richtextedit_qbase_delete_word_back(void* self) {
    KRichTextEdit_QBaseDeleteWordBack((KRichTextEdit*)self);
}

void k_richtextedit_on_delete_word_back(void* self, void (*callback)()) {
    KRichTextEdit_OnDeleteWordBack((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_delete_word_forward(void* self) {
    KRichTextEdit_DeleteWordForward((KRichTextEdit*)self);
}

void k_richtextedit_qbase_delete_word_forward(void* self) {
    KRichTextEdit_QBaseDeleteWordForward((KRichTextEdit*)self);
}

void k_richtextedit_on_delete_word_forward(void* self, void (*callback)()) {
    KRichTextEdit_OnDeleteWordForward((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_context_menu_event(void* self, void* param1) {
    KRichTextEdit_ContextMenuEvent((KRichTextEdit*)self, (QContextMenuEvent*)param1);
}

void k_richtextedit_qbase_context_menu_event(void* self, void* param1) {
    KRichTextEdit_QBaseContextMenuEvent((KRichTextEdit*)self, (QContextMenuEvent*)param1);
}

void k_richtextedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnContextMenuEvent((KRichTextEdit*)self, (intptr_t)callback);
}

QVariant* k_richtextedit_load_resource(void* self, int type, void* name) {
    return KRichTextEdit_LoadResource((KRichTextEdit*)self, type, (QUrl*)name);
}

QVariant* k_richtextedit_qbase_load_resource(void* self, int type, void* name) {
    return KRichTextEdit_QBaseLoadResource((KRichTextEdit*)self, type, (QUrl*)name);
}

void k_richtextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    KRichTextEdit_OnLoadResource((KRichTextEdit*)self, (intptr_t)callback);
}

QVariant* k_richtextedit_input_method_query(void* self, int32_t property) {
    return KRichTextEdit_InputMethodQuery((KRichTextEdit*)self, property);
}

QVariant* k_richtextedit_qbase_input_method_query(void* self, int32_t property) {
    return KRichTextEdit_QBaseInputMethodQuery((KRichTextEdit*)self, property);
}

void k_richtextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KRichTextEdit_OnInputMethodQuery((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_timer_event(void* self, void* e) {
    KRichTextEdit_TimerEvent((KRichTextEdit*)self, (QTimerEvent*)e);
}

void k_richtextedit_qbase_timer_event(void* self, void* e) {
    KRichTextEdit_QBaseTimerEvent((KRichTextEdit*)self, (QTimerEvent*)e);
}

void k_richtextedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnTimerEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_key_release_event(void* self, void* e) {
    KRichTextEdit_KeyReleaseEvent((KRichTextEdit*)self, (QKeyEvent*)e);
}

void k_richtextedit_qbase_key_release_event(void* self, void* e) {
    KRichTextEdit_QBaseKeyReleaseEvent((KRichTextEdit*)self, (QKeyEvent*)e);
}

void k_richtextedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnKeyReleaseEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_resize_event(void* self, void* e) {
    KRichTextEdit_ResizeEvent((KRichTextEdit*)self, (QResizeEvent*)e);
}

void k_richtextedit_qbase_resize_event(void* self, void* e) {
    KRichTextEdit_QBaseResizeEvent((KRichTextEdit*)self, (QResizeEvent*)e);
}

void k_richtextedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnResizeEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_paint_event(void* self, void* e) {
    KRichTextEdit_PaintEvent((KRichTextEdit*)self, (QPaintEvent*)e);
}

void k_richtextedit_qbase_paint_event(void* self, void* e) {
    KRichTextEdit_QBasePaintEvent((KRichTextEdit*)self, (QPaintEvent*)e);
}

void k_richtextedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnPaintEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_mouse_press_event(void* self, void* e) {
    KRichTextEdit_MousePressEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_qbase_mouse_press_event(void* self, void* e) {
    KRichTextEdit_QBaseMousePressEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnMousePressEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_mouse_move_event(void* self, void* e) {
    KRichTextEdit_MouseMoveEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_qbase_mouse_move_event(void* self, void* e) {
    KRichTextEdit_QBaseMouseMoveEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnMouseMoveEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_mouse_release_event(void* self, void* e) {
    KRichTextEdit_MouseReleaseEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_qbase_mouse_release_event(void* self, void* e) {
    KRichTextEdit_QBaseMouseReleaseEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnMouseReleaseEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_mouse_double_click_event(void* self, void* e) {
    KRichTextEdit_MouseDoubleClickEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_qbase_mouse_double_click_event(void* self, void* e) {
    KRichTextEdit_QBaseMouseDoubleClickEvent((KRichTextEdit*)self, (QMouseEvent*)e);
}

void k_richtextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnMouseDoubleClickEvent((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_focus_next_prev_child(void* self, bool next) {
    return KRichTextEdit_FocusNextPrevChild((KRichTextEdit*)self, next);
}

bool k_richtextedit_qbase_focus_next_prev_child(void* self, bool next) {
    return KRichTextEdit_QBaseFocusNextPrevChild((KRichTextEdit*)self, next);
}

void k_richtextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KRichTextEdit_OnFocusNextPrevChild((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_drag_enter_event(void* self, void* e) {
    KRichTextEdit_DragEnterEvent((KRichTextEdit*)self, (QDragEnterEvent*)e);
}

void k_richtextedit_qbase_drag_enter_event(void* self, void* e) {
    KRichTextEdit_QBaseDragEnterEvent((KRichTextEdit*)self, (QDragEnterEvent*)e);
}

void k_richtextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDragEnterEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_drag_leave_event(void* self, void* e) {
    KRichTextEdit_DragLeaveEvent((KRichTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_richtextedit_qbase_drag_leave_event(void* self, void* e) {
    KRichTextEdit_QBaseDragLeaveEvent((KRichTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_richtextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDragLeaveEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_drag_move_event(void* self, void* e) {
    KRichTextEdit_DragMoveEvent((KRichTextEdit*)self, (QDragMoveEvent*)e);
}

void k_richtextedit_qbase_drag_move_event(void* self, void* e) {
    KRichTextEdit_QBaseDragMoveEvent((KRichTextEdit*)self, (QDragMoveEvent*)e);
}

void k_richtextedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDragMoveEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_drop_event(void* self, void* e) {
    KRichTextEdit_DropEvent((KRichTextEdit*)self, (QDropEvent*)e);
}

void k_richtextedit_qbase_drop_event(void* self, void* e) {
    KRichTextEdit_QBaseDropEvent((KRichTextEdit*)self, (QDropEvent*)e);
}

void k_richtextedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDropEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_focus_out_event(void* self, void* e) {
    KRichTextEdit_FocusOutEvent((KRichTextEdit*)self, (QFocusEvent*)e);
}

void k_richtextedit_qbase_focus_out_event(void* self, void* e) {
    KRichTextEdit_QBaseFocusOutEvent((KRichTextEdit*)self, (QFocusEvent*)e);
}

void k_richtextedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnFocusOutEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_show_event(void* self, void* param1) {
    KRichTextEdit_ShowEvent((KRichTextEdit*)self, (QShowEvent*)param1);
}

void k_richtextedit_qbase_show_event(void* self, void* param1) {
    KRichTextEdit_QBaseShowEvent((KRichTextEdit*)self, (QShowEvent*)param1);
}

void k_richtextedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnShowEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_change_event(void* self, void* e) {
    KRichTextEdit_ChangeEvent((KRichTextEdit*)self, (QEvent*)e);
}

void k_richtextedit_qbase_change_event(void* self, void* e) {
    KRichTextEdit_QBaseChangeEvent((KRichTextEdit*)self, (QEvent*)e);
}

void k_richtextedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnChangeEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_wheel_event(void* self, void* e) {
    KRichTextEdit_WheelEvent((KRichTextEdit*)self, (QWheelEvent*)e);
}

void k_richtextedit_qbase_wheel_event(void* self, void* e) {
    KRichTextEdit_QBaseWheelEvent((KRichTextEdit*)self, (QWheelEvent*)e);
}

void k_richtextedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnWheelEvent((KRichTextEdit*)self, (intptr_t)callback);
}

QMimeData* k_richtextedit_create_mime_data_from_selection(void* self) {
    return KRichTextEdit_CreateMimeDataFromSelection((KRichTextEdit*)self);
}

QMimeData* k_richtextedit_qbase_create_mime_data_from_selection(void* self) {
    return KRichTextEdit_QBaseCreateMimeDataFromSelection((KRichTextEdit*)self);
}

void k_richtextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    KRichTextEdit_OnCreateMimeDataFromSelection((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_can_insert_from_mime_data(void* self, void* source) {
    return KRichTextEdit_CanInsertFromMimeData((KRichTextEdit*)self, (QMimeData*)source);
}

bool k_richtextedit_qbase_can_insert_from_mime_data(void* self, void* source) {
    return KRichTextEdit_QBaseCanInsertFromMimeData((KRichTextEdit*)self, (QMimeData*)source);
}

void k_richtextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    KRichTextEdit_OnCanInsertFromMimeData((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_insert_from_mime_data(void* self, void* source) {
    KRichTextEdit_InsertFromMimeData((KRichTextEdit*)self, (QMimeData*)source);
}

void k_richtextedit_qbase_insert_from_mime_data(void* self, void* source) {
    KRichTextEdit_QBaseInsertFromMimeData((KRichTextEdit*)self, (QMimeData*)source);
}

void k_richtextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnInsertFromMimeData((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_input_method_event(void* self, void* param1) {
    KRichTextEdit_InputMethodEvent((KRichTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_richtextedit_qbase_input_method_event(void* self, void* param1) {
    KRichTextEdit_QBaseInputMethodEvent((KRichTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_richtextedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnInputMethodEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_scroll_contents_by(void* self, int dx, int dy) {
    KRichTextEdit_ScrollContentsBy((KRichTextEdit*)self, dx, dy);
}

void k_richtextedit_qbase_scroll_contents_by(void* self, int dx, int dy) {
    KRichTextEdit_QBaseScrollContentsBy((KRichTextEdit*)self, dx, dy);
}

void k_richtextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KRichTextEdit_OnScrollContentsBy((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_do_set_text_cursor(void* self, void* cursor) {
    KRichTextEdit_DoSetTextCursor((KRichTextEdit*)self, (QTextCursor*)cursor);
}

void k_richtextedit_qbase_do_set_text_cursor(void* self, void* cursor) {
    KRichTextEdit_QBaseDoSetTextCursor((KRichTextEdit*)self, (QTextCursor*)cursor);
}

void k_richtextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDoSetTextCursor((KRichTextEdit*)self, (intptr_t)callback);
}

QSize* k_richtextedit_minimum_size_hint(void* self) {
    return KRichTextEdit_MinimumSizeHint((KRichTextEdit*)self);
}

QSize* k_richtextedit_qbase_minimum_size_hint(void* self) {
    return KRichTextEdit_QBaseMinimumSizeHint((KRichTextEdit*)self);
}

void k_richtextedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KRichTextEdit_OnMinimumSizeHint((KRichTextEdit*)self, (intptr_t)callback);
}

QSize* k_richtextedit_size_hint(void* self) {
    return KRichTextEdit_SizeHint((KRichTextEdit*)self);
}

QSize* k_richtextedit_qbase_size_hint(void* self) {
    return KRichTextEdit_QBaseSizeHint((KRichTextEdit*)self);
}

void k_richtextedit_on_size_hint(void* self, QSize* (*callback)()) {
    KRichTextEdit_OnSizeHint((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_setup_viewport(void* self, void* viewport) {
    KRichTextEdit_SetupViewport((KRichTextEdit*)self, (QWidget*)viewport);
}

void k_richtextedit_qbase_setup_viewport(void* self, void* viewport) {
    KRichTextEdit_QBaseSetupViewport((KRichTextEdit*)self, (QWidget*)viewport);
}

void k_richtextedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnSetupViewport((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_event_filter(void* self, void* param1, void* param2) {
    return KRichTextEdit_EventFilter((KRichTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_richtextedit_qbase_event_filter(void* self, void* param1, void* param2) {
    return KRichTextEdit_QBaseEventFilter((KRichTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void k_richtextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRichTextEdit_OnEventFilter((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_viewport_event(void* self, void* param1) {
    return KRichTextEdit_ViewportEvent((KRichTextEdit*)self, (QEvent*)param1);
}

bool k_richtextedit_qbase_viewport_event(void* self, void* param1) {
    return KRichTextEdit_QBaseViewportEvent((KRichTextEdit*)self, (QEvent*)param1);
}

void k_richtextedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KRichTextEdit_OnViewportEvent((KRichTextEdit*)self, (intptr_t)callback);
}

QSize* k_richtextedit_viewport_size_hint(void* self) {
    return KRichTextEdit_ViewportSizeHint((KRichTextEdit*)self);
}

QSize* k_richtextedit_qbase_viewport_size_hint(void* self) {
    return KRichTextEdit_QBaseViewportSizeHint((KRichTextEdit*)self);
}

void k_richtextedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KRichTextEdit_OnViewportSizeHint((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_init_style_option(void* self, void* option) {
    KRichTextEdit_InitStyleOption((KRichTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_richtextedit_qbase_init_style_option(void* self, void* option) {
    KRichTextEdit_QBaseInitStyleOption((KRichTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_richtextedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnInitStyleOption((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_dev_type(void* self) {
    return KRichTextEdit_DevType((KRichTextEdit*)self);
}

int32_t k_richtextedit_qbase_dev_type(void* self) {
    return KRichTextEdit_QBaseDevType((KRichTextEdit*)self);
}

void k_richtextedit_on_dev_type(void* self, int32_t (*callback)()) {
    KRichTextEdit_OnDevType((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_set_visible(void* self, bool visible) {
    KRichTextEdit_SetVisible((KRichTextEdit*)self, visible);
}

void k_richtextedit_qbase_set_visible(void* self, bool visible) {
    KRichTextEdit_QBaseSetVisible((KRichTextEdit*)self, visible);
}

void k_richtextedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KRichTextEdit_OnSetVisible((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_height_for_width(void* self, int param1) {
    return KRichTextEdit_HeightForWidth((KRichTextEdit*)self, param1);
}

int32_t k_richtextedit_qbase_height_for_width(void* self, int param1) {
    return KRichTextEdit_QBaseHeightForWidth((KRichTextEdit*)self, param1);
}

void k_richtextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KRichTextEdit_OnHeightForWidth((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_has_height_for_width(void* self) {
    return KRichTextEdit_HasHeightForWidth((KRichTextEdit*)self);
}

bool k_richtextedit_qbase_has_height_for_width(void* self) {
    return KRichTextEdit_QBaseHasHeightForWidth((KRichTextEdit*)self);
}

void k_richtextedit_on_has_height_for_width(void* self, bool (*callback)()) {
    KRichTextEdit_OnHasHeightForWidth((KRichTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_richtextedit_paint_engine(void* self) {
    return KRichTextEdit_PaintEngine((KRichTextEdit*)self);
}

QPaintEngine* k_richtextedit_qbase_paint_engine(void* self) {
    return KRichTextEdit_QBasePaintEngine((KRichTextEdit*)self);
}

void k_richtextedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KRichTextEdit_OnPaintEngine((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_enter_event(void* self, void* event) {
    KRichTextEdit_EnterEvent((KRichTextEdit*)self, (QEnterEvent*)event);
}

void k_richtextedit_qbase_enter_event(void* self, void* event) {
    KRichTextEdit_QBaseEnterEvent((KRichTextEdit*)self, (QEnterEvent*)event);
}

void k_richtextedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnEnterEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_leave_event(void* self, void* event) {
    KRichTextEdit_LeaveEvent((KRichTextEdit*)self, (QEvent*)event);
}

void k_richtextedit_qbase_leave_event(void* self, void* event) {
    KRichTextEdit_QBaseLeaveEvent((KRichTextEdit*)self, (QEvent*)event);
}

void k_richtextedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnLeaveEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_move_event(void* self, void* event) {
    KRichTextEdit_MoveEvent((KRichTextEdit*)self, (QMoveEvent*)event);
}

void k_richtextedit_qbase_move_event(void* self, void* event) {
    KRichTextEdit_QBaseMoveEvent((KRichTextEdit*)self, (QMoveEvent*)event);
}

void k_richtextedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnMoveEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_close_event(void* self, void* event) {
    KRichTextEdit_CloseEvent((KRichTextEdit*)self, (QCloseEvent*)event);
}

void k_richtextedit_qbase_close_event(void* self, void* event) {
    KRichTextEdit_QBaseCloseEvent((KRichTextEdit*)self, (QCloseEvent*)event);
}

void k_richtextedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnCloseEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_tablet_event(void* self, void* event) {
    KRichTextEdit_TabletEvent((KRichTextEdit*)self, (QTabletEvent*)event);
}

void k_richtextedit_qbase_tablet_event(void* self, void* event) {
    KRichTextEdit_QBaseTabletEvent((KRichTextEdit*)self, (QTabletEvent*)event);
}

void k_richtextedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnTabletEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_action_event(void* self, void* event) {
    KRichTextEdit_ActionEvent((KRichTextEdit*)self, (QActionEvent*)event);
}

void k_richtextedit_qbase_action_event(void* self, void* event) {
    KRichTextEdit_QBaseActionEvent((KRichTextEdit*)self, (QActionEvent*)event);
}

void k_richtextedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnActionEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_hide_event(void* self, void* event) {
    KRichTextEdit_HideEvent((KRichTextEdit*)self, (QHideEvent*)event);
}

void k_richtextedit_qbase_hide_event(void* self, void* event) {
    KRichTextEdit_QBaseHideEvent((KRichTextEdit*)self, (QHideEvent*)event);
}

void k_richtextedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnHideEvent((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KRichTextEdit_NativeEvent((KRichTextEdit*)self, qstring(eventType), message, result);
}

bool k_richtextedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KRichTextEdit_QBaseNativeEvent((KRichTextEdit*)self, qstring(eventType), message, result);
}

void k_richtextedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KRichTextEdit_OnNativeEvent((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_metric(void* self, int32_t param1) {
    return KRichTextEdit_Metric((KRichTextEdit*)self, param1);
}

int32_t k_richtextedit_qbase_metric(void* self, int32_t param1) {
    return KRichTextEdit_QBaseMetric((KRichTextEdit*)self, param1);
}

void k_richtextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KRichTextEdit_OnMetric((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_init_painter(void* self, void* painter) {
    KRichTextEdit_InitPainter((KRichTextEdit*)self, (QPainter*)painter);
}

void k_richtextedit_qbase_init_painter(void* self, void* painter) {
    KRichTextEdit_QBaseInitPainter((KRichTextEdit*)self, (QPainter*)painter);
}

void k_richtextedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnInitPainter((KRichTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_richtextedit_redirected(void* self, void* offset) {
    return KRichTextEdit_Redirected((KRichTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_richtextedit_qbase_redirected(void* self, void* offset) {
    return KRichTextEdit_QBaseRedirected((KRichTextEdit*)self, (QPoint*)offset);
}

void k_richtextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KRichTextEdit_OnRedirected((KRichTextEdit*)self, (intptr_t)callback);
}

QPainter* k_richtextedit_shared_painter(void* self) {
    return KRichTextEdit_SharedPainter((KRichTextEdit*)self);
}

QPainter* k_richtextedit_qbase_shared_painter(void* self) {
    return KRichTextEdit_QBaseSharedPainter((KRichTextEdit*)self);
}

void k_richtextedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    KRichTextEdit_OnSharedPainter((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_child_event(void* self, void* event) {
    KRichTextEdit_ChildEvent((KRichTextEdit*)self, (QChildEvent*)event);
}

void k_richtextedit_qbase_child_event(void* self, void* event) {
    KRichTextEdit_QBaseChildEvent((KRichTextEdit*)self, (QChildEvent*)event);
}

void k_richtextedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnChildEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_custom_event(void* self, void* event) {
    KRichTextEdit_CustomEvent((KRichTextEdit*)self, (QEvent*)event);
}

void k_richtextedit_qbase_custom_event(void* self, void* event) {
    KRichTextEdit_QBaseCustomEvent((KRichTextEdit*)self, (QEvent*)event);
}

void k_richtextedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnCustomEvent((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_connect_notify(void* self, void* signal) {
    KRichTextEdit_ConnectNotify((KRichTextEdit*)self, (QMetaMethod*)signal);
}

void k_richtextedit_qbase_connect_notify(void* self, void* signal) {
    KRichTextEdit_QBaseConnectNotify((KRichTextEdit*)self, (QMetaMethod*)signal);
}

void k_richtextedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnConnectNotify((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_disconnect_notify(void* self, void* signal) {
    KRichTextEdit_DisconnectNotify((KRichTextEdit*)self, (QMetaMethod*)signal);
}

void k_richtextedit_qbase_disconnect_notify(void* self, void* signal) {
    KRichTextEdit_QBaseDisconnectNotify((KRichTextEdit*)self, (QMetaMethod*)signal);
}

void k_richtextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDisconnectNotify((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_do_replace(void* self) {
    KRichTextEdit_SlotDoReplace((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_do_replace(void* self) {
    KRichTextEdit_QBaseSlotDoReplace((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_do_replace(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotDoReplace((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_replace_next(void* self) {
    KRichTextEdit_SlotReplaceNext((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_replace_next(void* self) {
    KRichTextEdit_QBaseSlotReplaceNext((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_replace_next(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotReplaceNext((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_do_find(void* self) {
    KRichTextEdit_SlotDoFind((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_do_find(void* self) {
    KRichTextEdit_QBaseSlotDoFind((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_do_find(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotDoFind((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_find(void* self) {
    KRichTextEdit_SlotFind((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_find(void* self) {
    KRichTextEdit_QBaseSlotFind((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_find(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotFind((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_find_next(void* self) {
    KRichTextEdit_SlotFindNext((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_find_next(void* self) {
    KRichTextEdit_QBaseSlotFindNext((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_find_next(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotFindNext((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_find_previous(void* self) {
    KRichTextEdit_SlotFindPrevious((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_find_previous(void* self) {
    KRichTextEdit_QBaseSlotFindPrevious((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_find_previous(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotFindPrevious((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_replace(void* self) {
    KRichTextEdit_SlotReplace((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_replace(void* self) {
    KRichTextEdit_QBaseSlotReplace((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_replace(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotReplace((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_slot_speak_text(void* self) {
    KRichTextEdit_SlotSpeakText((KRichTextEdit*)self);
}

void k_richtextedit_qbase_slot_speak_text(void* self) {
    KRichTextEdit_QBaseSlotSpeakText((KRichTextEdit*)self);
}

void k_richtextedit_on_slot_speak_text(void* self, void (*callback)()) {
    KRichTextEdit_OnSlotSpeakText((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_zoom_in_f(void* self, float range) {
    KRichTextEdit_ZoomInF((KRichTextEdit*)self, range);
}

void k_richtextedit_qbase_zoom_in_f(void* self, float range) {
    KRichTextEdit_QBaseZoomInF((KRichTextEdit*)self, range);
}

void k_richtextedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    KRichTextEdit_OnZoomInF((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KRichTextEdit_SetViewportMargins((KRichTextEdit*)self, left, top, right, bottom);
}

void k_richtextedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KRichTextEdit_QBaseSetViewportMargins((KRichTextEdit*)self, left, top, right, bottom);
}

void k_richtextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KRichTextEdit_OnSetViewportMargins((KRichTextEdit*)self, (intptr_t)callback);
}

QMargins* k_richtextedit_viewport_margins(void* self) {
    return KRichTextEdit_ViewportMargins((KRichTextEdit*)self);
}

QMargins* k_richtextedit_qbase_viewport_margins(void* self) {
    return KRichTextEdit_QBaseViewportMargins((KRichTextEdit*)self);
}

void k_richtextedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KRichTextEdit_OnViewportMargins((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_draw_frame(void* self, void* param1) {
    KRichTextEdit_DrawFrame((KRichTextEdit*)self, (QPainter*)param1);
}

void k_richtextedit_qbase_draw_frame(void* self, void* param1) {
    KRichTextEdit_QBaseDrawFrame((KRichTextEdit*)self, (QPainter*)param1);
}

void k_richtextedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KRichTextEdit_OnDrawFrame((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_update_micro_focus(void* self) {
    KRichTextEdit_UpdateMicroFocus((KRichTextEdit*)self);
}

void k_richtextedit_qbase_update_micro_focus(void* self) {
    KRichTextEdit_QBaseUpdateMicroFocus((KRichTextEdit*)self);
}

void k_richtextedit_on_update_micro_focus(void* self, void (*callback)()) {
    KRichTextEdit_OnUpdateMicroFocus((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_create(void* self) {
    KRichTextEdit_Create((KRichTextEdit*)self);
}

void k_richtextedit_qbase_create(void* self) {
    KRichTextEdit_QBaseCreate((KRichTextEdit*)self);
}

void k_richtextedit_on_create(void* self, void (*callback)()) {
    KRichTextEdit_OnCreate((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_destroy(void* self) {
    KRichTextEdit_Destroy((KRichTextEdit*)self);
}

void k_richtextedit_qbase_destroy(void* self) {
    KRichTextEdit_QBaseDestroy((KRichTextEdit*)self);
}

void k_richtextedit_on_destroy(void* self, void (*callback)()) {
    KRichTextEdit_OnDestroy((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_focus_next_child(void* self) {
    return KRichTextEdit_FocusNextChild((KRichTextEdit*)self);
}

bool k_richtextedit_qbase_focus_next_child(void* self) {
    return KRichTextEdit_QBaseFocusNextChild((KRichTextEdit*)self);
}

void k_richtextedit_on_focus_next_child(void* self, bool (*callback)()) {
    KRichTextEdit_OnFocusNextChild((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_focus_previous_child(void* self) {
    return KRichTextEdit_FocusPreviousChild((KRichTextEdit*)self);
}

bool k_richtextedit_qbase_focus_previous_child(void* self) {
    return KRichTextEdit_QBaseFocusPreviousChild((KRichTextEdit*)self);
}

void k_richtextedit_on_focus_previous_child(void* self, bool (*callback)()) {
    KRichTextEdit_OnFocusPreviousChild((KRichTextEdit*)self, (intptr_t)callback);
}

QObject* k_richtextedit_sender(void* self) {
    return KRichTextEdit_Sender((KRichTextEdit*)self);
}

QObject* k_richtextedit_qbase_sender(void* self) {
    return KRichTextEdit_QBaseSender((KRichTextEdit*)self);
}

void k_richtextedit_on_sender(void* self, QObject* (*callback)()) {
    KRichTextEdit_OnSender((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_sender_signal_index(void* self) {
    return KRichTextEdit_SenderSignalIndex((KRichTextEdit*)self);
}

int32_t k_richtextedit_qbase_sender_signal_index(void* self) {
    return KRichTextEdit_QBaseSenderSignalIndex((KRichTextEdit*)self);
}

void k_richtextedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KRichTextEdit_OnSenderSignalIndex((KRichTextEdit*)self, (intptr_t)callback);
}

int32_t k_richtextedit_receivers(void* self, const char* signal) {
    return KRichTextEdit_Receivers((KRichTextEdit*)self, signal);
}

int32_t k_richtextedit_qbase_receivers(void* self, const char* signal) {
    return KRichTextEdit_QBaseReceivers((KRichTextEdit*)self, signal);
}

void k_richtextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KRichTextEdit_OnReceivers((KRichTextEdit*)self, (intptr_t)callback);
}

bool k_richtextedit_is_signal_connected(void* self, void* signal) {
    return KRichTextEdit_IsSignalConnected((KRichTextEdit*)self, (QMetaMethod*)signal);
}

bool k_richtextedit_qbase_is_signal_connected(void* self, void* signal) {
    return KRichTextEdit_QBaseIsSignalConnected((KRichTextEdit*)self, (QMetaMethod*)signal);
}

void k_richtextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KRichTextEdit_OnIsSignalConnected((KRichTextEdit*)self, (intptr_t)callback);
}

double k_richtextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRichTextEdit_GetDecodedMetricF((KRichTextEdit*)self, metricA, metricB);
}

double k_richtextedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRichTextEdit_QBaseGetDecodedMetricF((KRichTextEdit*)self, metricA, metricB);
}

void k_richtextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KRichTextEdit_OnGetDecodedMetricF((KRichTextEdit*)self, (intptr_t)callback);
}

void k_richtextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_richtextedit_delete(void* self) {
    KRichTextEdit_Delete((KRichTextEdit*)(self));
}
