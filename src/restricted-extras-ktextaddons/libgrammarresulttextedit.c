#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqmargins.hpp"
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
#include "libgrammaraction.hpp"
#include "libgrammarerror.hpp"
#include "libgrammarresulttextedit.hpp"
#include "libgrammarresulttextedit.h"

TextGrammarCheck__GrammarResultTextEdit* k_textgrammarcheck__grammarresulttextedit_new(void* parent) {
    return TextGrammarCheck__GrammarResultTextEdit_new((QWidget*)parent);
}

TextGrammarCheck__GrammarResultTextEdit* k_textgrammarcheck__grammarresulttextedit_new2() {
    return TextGrammarCheck__GrammarResultTextEdit_new2();
}

const QMetaObject* k_textgrammarcheck__grammarresulttextedit_meta_object(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_MetaObject((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnMetaObject((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__grammarresulttextedit_super_meta_object(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperMetaObject((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void* k_textgrammarcheck__grammarresulttextedit_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammarResultTextEdit_Metacast((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMetacast((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__grammarresulttextedit_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperMetacast((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

int32_t k_textgrammarcheck__grammarresulttextedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammarResultTextEdit_Metacall((TextGrammarCheck__GrammarResultTextEdit*)self, param1, param2, param3);
}

void k_textgrammarcheck__grammarresulttextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMetacall((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperMetacall((TextGrammarCheck__GrammarResultTextEdit*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__grammarresulttextedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_apply_grammar_result(void* self, libqt_list /* of TextGrammarCheck__GrammarError* */ infos) {
    TextGrammarCheck__GrammarResultTextEdit_ApplyGrammarResult((TextGrammarCheck__GrammarResultTextEdit*)self, infos);
}

void k_textgrammarcheck__grammarresulttextedit_context_menu_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QContextMenuEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnContextMenuEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_super_context_menu_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QContextMenuEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_paint_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_PaintEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QPaintEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnPaintEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_super_paint_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QPaintEvent*)event);
}

bool k_textgrammarcheck__grammarresulttextedit_event(void* self, void* ev) {
    return TextGrammarCheck__GrammarResultTextEdit_Event((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)ev);
}

void k_textgrammarcheck__grammarresulttextedit_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_super_event(void* self, void* ev) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)ev);
}

void k_textgrammarcheck__grammarresulttextedit_replace_text(void* self, void* act) {
    TextGrammarCheck__GrammarResultTextEdit_ReplaceText((TextGrammarCheck__GrammarResultTextEdit*)self, (TextGrammarCheck__GrammarAction*)act);
}

void k_textgrammarcheck__grammarresulttextedit_on_replace_text(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_Connect_ReplaceText((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_check_again(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_CheckAgain((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_check_again(void* self, void (*callback)(void*)) {
    TextGrammarCheck__GrammarResultTextEdit_Connect_CheckAgain((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_close_checker(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_CloseChecker((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_close_checker(void* self, void (*callback)(void*)) {
    TextGrammarCheck__GrammarResultTextEdit_Connect_CloseChecker((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_configure(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_Configure((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_configure(void* self, void (*callback)(void*)) {
    TextGrammarCheck__GrammarResultTextEdit_Connect_Configure((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

const char* k_textgrammarcheck__grammarresulttextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammarresulttextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textgrammarcheck__grammarresulttextedit_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_textgrammarcheck__grammarresulttextedit_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textgrammarcheck__grammarresulttextedit_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

void k_textgrammarcheck__grammarresulttextedit_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_textgrammarcheck__grammarresulttextedit_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_textgrammarcheck__grammarresulttextedit_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_textgrammarcheck__grammarresulttextedit_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textgrammarcheck__grammarresulttextedit_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_textgrammarcheck__grammarresulttextedit_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_textgrammarcheck__grammarresulttextedit_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_textgrammarcheck__grammarresulttextedit_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textgrammarcheck__grammarresulttextedit_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textgrammarcheck__grammarresulttextedit_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_textgrammarcheck__grammarresulttextedit_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_textgrammarcheck__grammarresulttextedit_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__grammarresulttextedit_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_textgrammarcheck__grammarresulttextedit_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_textgrammarcheck__grammarresulttextedit_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_textgrammarcheck__grammarresulttextedit_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_textgrammarcheck__grammarresulttextedit_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_textgrammarcheck__grammarresulttextedit_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textgrammarcheck__grammarresulttextedit_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammarresulttextedit_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammarresulttextedit_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_textgrammarcheck__grammarresulttextedit_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_textgrammarcheck__grammarresulttextedit_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textgrammarcheck__grammarresulttextedit_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_textgrammarcheck__grammarresulttextedit_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textgrammarcheck__grammarresulttextedit_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_textgrammarcheck__grammarresulttextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__grammarresulttextedit_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_textgrammarcheck__grammarresulttextedit_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_textgrammarcheck__grammarresulttextedit_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_textgrammarcheck__grammarresulttextedit_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_textgrammarcheck__grammarresulttextedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textgrammarcheck__grammarresulttextedit_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_textgrammarcheck__grammarresulttextedit_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_textgrammarcheck__grammarresulttextedit_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_textgrammarcheck__grammarresulttextedit_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_textgrammarcheck__grammarresulttextedit_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void k_textgrammarcheck__grammarresulttextedit_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_textgrammarcheck__grammarresulttextedit_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_textgrammarcheck__grammarresulttextedit_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void k_textgrammarcheck__grammarresulttextedit_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_textgrammarcheck__grammarresulttextedit_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_textgrammarcheck__grammarresulttextedit_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_textgrammarcheck__grammarresulttextedit_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_textgrammarcheck__grammarresulttextedit_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_textgrammarcheck__grammarresulttextedit_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_textgrammarcheck__grammarresulttextedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_textgrammarcheck__grammarresulttextedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_textgrammarcheck__grammarresulttextedit_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_textgrammarcheck__grammarresulttextedit_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_textgrammarcheck__grammarresulttextedit_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_textgrammarcheck__grammarresulttextedit_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_textgrammarcheck__grammarresulttextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textgrammarcheck__grammarresulttextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textgrammarcheck__grammarresulttextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textgrammarcheck__grammarresulttextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textgrammarcheck__grammarresulttextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textgrammarcheck__grammarresulttextedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textgrammarcheck__grammarresulttextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textgrammarcheck__grammarresulttextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textgrammarcheck__grammarresulttextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textgrammarcheck__grammarresulttextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textgrammarcheck__grammarresulttextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textgrammarcheck__grammarresulttextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textgrammarcheck__grammarresulttextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textgrammarcheck__grammarresulttextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textgrammarcheck__grammarresulttextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__grammarresulttextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__grammarresulttextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textgrammarcheck__grammarresulttextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textgrammarcheck__grammarresulttextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textgrammarcheck__grammarresulttextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textgrammarcheck__grammarresulttextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textgrammarcheck__grammarresulttextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textgrammarcheck__grammarresulttextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textgrammarcheck__grammarresulttextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textgrammarcheck__grammarresulttextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textgrammarcheck__grammarresulttextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textgrammarcheck__grammarresulttextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textgrammarcheck__grammarresulttextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textgrammarcheck__grammarresulttextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textgrammarcheck__grammarresulttextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textgrammarcheck__grammarresulttextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textgrammarcheck__grammarresulttextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textgrammarcheck__grammarresulttextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textgrammarcheck__grammarresulttextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textgrammarcheck__grammarresulttextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textgrammarcheck__grammarresulttextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textgrammarcheck__grammarresulttextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textgrammarcheck__grammarresulttextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textgrammarcheck__grammarresulttextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textgrammarcheck__grammarresulttextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textgrammarcheck__grammarresulttextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textgrammarcheck__grammarresulttextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textgrammarcheck__grammarresulttextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__grammarresulttextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textgrammarcheck__grammarresulttextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textgrammarcheck__grammarresulttextedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textgrammarcheck__grammarresulttextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textgrammarcheck__grammarresulttextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textgrammarcheck__grammarresulttextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textgrammarcheck__grammarresulttextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textgrammarcheck__grammarresulttextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textgrammarcheck__grammarresulttextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textgrammarcheck__grammarresulttextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__grammarresulttextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__grammarresulttextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textgrammarcheck__grammarresulttextedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textgrammarcheck__grammarresulttextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textgrammarcheck__grammarresulttextedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textgrammarcheck__grammarresulttextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textgrammarcheck__grammarresulttextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textgrammarcheck__grammarresulttextedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__grammarresulttextedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textgrammarcheck__grammarresulttextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textgrammarcheck__grammarresulttextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammarresulttextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textgrammarcheck__grammarresulttextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textgrammarcheck__grammarresulttextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textgrammarcheck__grammarresulttextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textgrammarcheck__grammarresulttextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textgrammarcheck__grammarresulttextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textgrammarcheck__grammarresulttextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textgrammarcheck__grammarresulttextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textgrammarcheck__grammarresulttextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textgrammarcheck__grammarresulttextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammarresulttextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textgrammarcheck__grammarresulttextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textgrammarcheck__grammarresulttextedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textgrammarcheck__grammarresulttextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textgrammarcheck__grammarresulttextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textgrammarcheck__grammarresulttextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textgrammarcheck__grammarresulttextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textgrammarcheck__grammarresulttextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textgrammarcheck__grammarresulttextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textgrammarcheck__grammarresulttextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textgrammarcheck__grammarresulttextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textgrammarcheck__grammarresulttextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textgrammarcheck__grammarresulttextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textgrammarcheck__grammarresulttextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textgrammarcheck__grammarresulttextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammarresulttextedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammarresulttextedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textgrammarcheck__grammarresulttextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textgrammarcheck__grammarresulttextedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textgrammarcheck__grammarresulttextedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammarresulttextedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textgrammarcheck__grammarresulttextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__grammarresulttextedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textgrammarcheck__grammarresulttextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textgrammarcheck__grammarresulttextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textgrammarcheck__grammarresulttextedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textgrammarcheck__grammarresulttextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textgrammarcheck__grammarresulttextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textgrammarcheck__grammarresulttextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textgrammarcheck__grammarresulttextedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textgrammarcheck__grammarresulttextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textgrammarcheck__grammarresulttextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textgrammarcheck__grammarresulttextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textgrammarcheck__grammarresulttextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textgrammarcheck__grammarresulttextedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textgrammarcheck__grammarresulttextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textgrammarcheck__grammarresulttextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textgrammarcheck__grammarresulttextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textgrammarcheck__grammarresulttextedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textgrammarcheck__grammarresulttextedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textgrammarcheck__grammarresulttextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textgrammarcheck__grammarresulttextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textgrammarcheck__grammarresulttextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textgrammarcheck__grammarresulttextedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textgrammarcheck__grammarresulttextedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textgrammarcheck__grammarresulttextedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textgrammarcheck__grammarresulttextedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__grammarresulttextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textgrammarcheck__grammarresulttextedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__grammarresulttextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textgrammarcheck__grammarresulttextedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textgrammarcheck__grammarresulttextedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textgrammarcheck__grammarresulttextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textgrammarcheck__grammarresulttextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textgrammarcheck__grammarresulttextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textgrammarcheck__grammarresulttextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textgrammarcheck__grammarresulttextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textgrammarcheck__grammarresulttextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textgrammarcheck__grammarresulttextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textgrammarcheck__grammarresulttextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textgrammarcheck__grammarresulttextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textgrammarcheck__grammarresulttextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textgrammarcheck__grammarresulttextedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textgrammarcheck__grammarresulttextedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textgrammarcheck__grammarresulttextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__grammarresulttextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textgrammarcheck__grammarresulttextedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textgrammarcheck__grammarresulttextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__grammarresulttextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textgrammarcheck__grammarresulttextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textgrammarcheck__grammarresulttextedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textgrammarcheck__grammarresulttextedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textgrammarcheck__grammarresulttextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__grammarresulttextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__grammarresulttextedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textgrammarcheck__grammarresulttextedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textgrammarcheck__grammarresulttextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarresulttextedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__grammarresulttextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__grammarresulttextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__grammarresulttextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__grammarresulttextedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__grammarresulttextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__grammarresulttextedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__grammarresulttextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__grammarresulttextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__grammarresulttextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__grammarresulttextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__grammarresulttextedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammarresulttextedit_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__grammarresulttextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__grammarresulttextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__grammarresulttextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammarresulttextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__grammarresulttextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__grammarresulttextedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammarresulttextedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__grammarresulttextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textgrammarcheck__grammarresulttextedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_load_resource(void* self, int type, void* name) {
    return TextGrammarCheck__GrammarResultTextEdit_LoadResource((TextGrammarCheck__GrammarResultTextEdit*)self, type, (QUrl*)name);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_super_load_resource(void* self, int type, void* name) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperLoadResource((TextGrammarCheck__GrammarResultTextEdit*)self, type, (QUrl*)name);
}

void k_textgrammarcheck__grammarresulttextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnLoadResource((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_input_method_query(void* self, int32_t property) {
    return TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery((TextGrammarCheck__GrammarResultTextEdit*)self, property);
}

QVariant* k_textgrammarcheck__grammarresulttextedit_super_input_method_query(void* self, int32_t property) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodQuery((TextGrammarCheck__GrammarResultTextEdit*)self, property);
}

void k_textgrammarcheck__grammarresulttextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextGrammarCheck__GrammarResultTextEdit_OnInputMethodQuery((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_timer_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_TimerEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QTimerEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_timer_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QTimerEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnTimerEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_key_press_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QKeyEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_key_press_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QKeyEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnKeyPressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_key_release_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QKeyEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_key_release_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QKeyEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnKeyReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_resize_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_ResizeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QResizeEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_resize_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QResizeEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnResizeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_mouse_press_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_MousePressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_mouse_press_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMousePressEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_mouse_move_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_mouse_move_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMouseMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_mouse_release_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_mouse_release_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMouseReleaseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_mouse_double_click_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_mouse_double_click_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMouseEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMouseDoubleClickEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild((TextGrammarCheck__GrammarResultTextEdit*)self, next);
}

bool k_textgrammarcheck__grammarresulttextedit_super_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild((TextGrammarCheck__GrammarResultTextEdit*)self, next);
}

void k_textgrammarcheck__grammarresulttextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextGrammarCheck__GrammarResultTextEdit_OnFocusNextPrevChild((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_drag_enter_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_drag_enter_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDragEnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_drag_leave_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_drag_leave_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDragLeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_drag_move_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_drag_move_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDragMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_drop_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_DropEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDropEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_drop_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QDropEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDropEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_focus_in_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_FocusInEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QFocusEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_focus_in_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QFocusEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnFocusInEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_focus_out_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QFocusEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_focus_out_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QFocusEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnFocusOutEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_show_event(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_ShowEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_super_show_event(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnShowEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_change_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_ChangeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_change_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnChangeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_wheel_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_WheelEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QWheelEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_super_wheel_event(void* self, void* e) {
    TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QWheelEvent*)e);
}

void k_textgrammarcheck__grammarresulttextedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnWheelEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QMimeData* k_textgrammarcheck__grammarresulttextedit_create_mime_data_from_selection(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QMimeData* k_textgrammarcheck__grammarresulttextedit_super_create_mime_data_from_selection(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnCreateMimeDataFromSelection((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_can_insert_from_mime_data(void* self, void* source) {
    return TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (QMimeData*)source);
}

bool k_textgrammarcheck__grammarresulttextedit_super_can_insert_from_mime_data(void* self, void* source) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (QMimeData*)source);
}

void k_textgrammarcheck__grammarresulttextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnCanInsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_insert_from_mime_data(void* self, void* source) {
    TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (QMimeData*)source);
}

void k_textgrammarcheck__grammarresulttextedit_super_insert_from_mime_data(void* self, void* source) {
    TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (QMimeData*)source);
}

void k_textgrammarcheck__grammarresulttextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnInsertFromMimeData((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_input_method_event(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_super_input_method_event(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnInputMethodEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_scroll_contents_by(void* self, int dx, int dy) {
    TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy((TextGrammarCheck__GrammarResultTextEdit*)self, dx, dy);
}

void k_textgrammarcheck__grammarresulttextedit_super_scroll_contents_by(void* self, int dx, int dy) {
    TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy((TextGrammarCheck__GrammarResultTextEdit*)self, dx, dy);
}

void k_textgrammarcheck__grammarresulttextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextGrammarCheck__GrammarResultTextEdit_OnScrollContentsBy((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_do_set_text_cursor(void* self, void* cursor) {
    TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor((TextGrammarCheck__GrammarResultTextEdit*)self, (QTextCursor*)cursor);
}

void k_textgrammarcheck__grammarresulttextedit_super_do_set_text_cursor(void* self, void* cursor) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor((TextGrammarCheck__GrammarResultTextEdit*)self, (QTextCursor*)cursor);
}

void k_textgrammarcheck__grammarresulttextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDoSetTextCursor((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__grammarresulttextedit_minimum_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_super_minimum_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperMinimumSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnMinimumSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__grammarresulttextedit_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_super_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_setup_viewport(void* self, void* viewport) {
    TextGrammarCheck__GrammarResultTextEdit_SetupViewport((TextGrammarCheck__GrammarResultTextEdit*)self, (QWidget*)viewport);
}

void k_textgrammarcheck__grammarresulttextedit_super_setup_viewport(void* self, void* viewport) {
    TextGrammarCheck__GrammarResultTextEdit_SuperSetupViewport((TextGrammarCheck__GrammarResultTextEdit*)self, (QWidget*)viewport);
}

void k_textgrammarcheck__grammarresulttextedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnSetupViewport((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__GrammarResultTextEdit_EventFilter((TextGrammarCheck__GrammarResultTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textgrammarcheck__grammarresulttextedit_super_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter((TextGrammarCheck__GrammarResultTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textgrammarcheck__grammarresulttextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnEventFilter((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_viewport_event(void* self, void* param1) {
    return TextGrammarCheck__GrammarResultTextEdit_ViewportEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)param1);
}

bool k_textgrammarcheck__grammarresulttextedit_super_viewport_event(void* self, void* param1) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnViewportEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__grammarresulttextedit_viewport_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QSize* k_textgrammarcheck__grammarresulttextedit_super_viewport_size_hint(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnViewportSizeHint((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_init_style_option(void* self, void* option) {
    TextGrammarCheck__GrammarResultTextEdit_InitStyleOption((TextGrammarCheck__GrammarResultTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textgrammarcheck__grammarresulttextedit_super_init_style_option(void* self, void* option) {
    TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption((TextGrammarCheck__GrammarResultTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textgrammarcheck__grammarresulttextedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnInitStyleOption((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_dev_type(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_DevType((TextGrammarCheck__GrammarResultTextEdit*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_dev_type(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperDevType((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_dev_type(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnDevType((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_set_visible(void* self, bool visible) {
    TextGrammarCheck__GrammarResultTextEdit_SetVisible((TextGrammarCheck__GrammarResultTextEdit*)self, visible);
}

void k_textgrammarcheck__grammarresulttextedit_super_set_visible(void* self, bool visible) {
    TextGrammarCheck__GrammarResultTextEdit_SuperSetVisible((TextGrammarCheck__GrammarResultTextEdit*)self, visible);
}

void k_textgrammarcheck__grammarresulttextedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextGrammarCheck__GrammarResultTextEdit_OnSetVisible((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_height_for_width(void* self, int param1) {
    return TextGrammarCheck__GrammarResultTextEdit_HeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_height_for_width(void* self, int param1) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperHeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextGrammarCheck__GrammarResultTextEdit_OnHeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_has_height_for_width(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_super_has_height_for_width(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperHasHeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_has_height_for_width(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnHasHeightForWidth((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_textgrammarcheck__grammarresulttextedit_paint_engine(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_PaintEngine((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QPaintEngine* k_textgrammarcheck__grammarresulttextedit_super_paint_engine(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperPaintEngine((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnPaintEngine((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_EnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnEnterEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_LeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnLeaveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_move_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_MoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_move_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMoveEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_close_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_CloseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QCloseEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_close_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QCloseEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnCloseEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_tablet_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_TabletEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_tablet_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnTabletEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_action_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_ActionEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_action_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnActionEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_hide_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_HideEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_hide_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnHideEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__GrammarResultTextEdit_NativeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, qstring(eventType), message, result);
}

bool k_textgrammarcheck__grammarresulttextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, qstring(eventType), message, result);
}

void k_textgrammarcheck__grammarresulttextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnNativeEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_metric(void* self, int32_t param1) {
    return TextGrammarCheck__GrammarResultTextEdit_Metric((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_metric(void* self, int32_t param1) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperMetric((TextGrammarCheck__GrammarResultTextEdit*)self, param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextGrammarCheck__GrammarResultTextEdit_OnMetric((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_init_painter(void* self, void* painter) {
    TextGrammarCheck__GrammarResultTextEdit_InitPainter((TextGrammarCheck__GrammarResultTextEdit*)self, (QPainter*)painter);
}

void k_textgrammarcheck__grammarresulttextedit_super_init_painter(void* self, void* painter) {
    TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter((TextGrammarCheck__GrammarResultTextEdit*)self, (QPainter*)painter);
}

void k_textgrammarcheck__grammarresulttextedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnInitPainter((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_textgrammarcheck__grammarresulttextedit_redirected(void* self, void* offset) {
    return TextGrammarCheck__GrammarResultTextEdit_Redirected((TextGrammarCheck__GrammarResultTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_textgrammarcheck__grammarresulttextedit_super_redirected(void* self, void* offset) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperRedirected((TextGrammarCheck__GrammarResultTextEdit*)self, (QPoint*)offset);
}

void k_textgrammarcheck__grammarresulttextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnRedirected((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QPainter* k_textgrammarcheck__grammarresulttextedit_shared_painter(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SharedPainter((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QPainter* k_textgrammarcheck__grammarresulttextedit_super_shared_painter(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnSharedPainter((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_child_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_ChildEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_child_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnChildEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_CustomEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_super_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammarresulttextedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnCustomEvent((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammarResultTextEdit_ConnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammarresulttextedit_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammarresulttextedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnConnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammarresulttextedit_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammarresulttextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDisconnectNotify((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_zoom_in_f(void* self, float range) {
    TextGrammarCheck__GrammarResultTextEdit_ZoomInF((TextGrammarCheck__GrammarResultTextEdit*)self, range);
}

void k_textgrammarcheck__grammarresulttextedit_super_zoom_in_f(void* self, float range) {
    TextGrammarCheck__GrammarResultTextEdit_SuperZoomInF((TextGrammarCheck__GrammarResultTextEdit*)self, range);
}

void k_textgrammarcheck__grammarresulttextedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextGrammarCheck__GrammarResultTextEdit_OnZoomInF((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self, left, top, right, bottom);
}

void k_textgrammarcheck__grammarresulttextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextGrammarCheck__GrammarResultTextEdit_SuperSetViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self, left, top, right, bottom);
}

void k_textgrammarcheck__grammarresulttextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextGrammarCheck__GrammarResultTextEdit_OnSetViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QMargins* k_textgrammarcheck__grammarresulttextedit_viewport_margins(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_ViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QMargins* k_textgrammarcheck__grammarresulttextedit_super_viewport_margins(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnViewportMargins((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_draw_frame(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_DrawFrame((TextGrammarCheck__GrammarResultTextEdit*)self, (QPainter*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_super_draw_frame(void* self, void* param1) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDrawFrame((TextGrammarCheck__GrammarResultTextEdit*)self, (QPainter*)param1);
}

void k_textgrammarcheck__grammarresulttextedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnDrawFrame((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_update_micro_focus(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_super_update_micro_focus(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_SuperUpdateMicroFocus((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_update_micro_focus(void* self, void (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnUpdateMicroFocus((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_create(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_Create((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_super_create(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_SuperCreate((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_create(void* self, void (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnCreate((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_destroy(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_Destroy((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_super_destroy(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_SuperDestroy((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_destroy(void* self, void (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnDestroy((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_focus_next_child(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_FocusNextChild((TextGrammarCheck__GrammarResultTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_super_focus_next_child(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextChild((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_focus_next_child(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnFocusNextChild((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_focus_previous_child(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild((TextGrammarCheck__GrammarResultTextEdit*)self);
}

bool k_textgrammarcheck__grammarresulttextedit_super_focus_previous_child(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperFocusPreviousChild((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_focus_previous_child(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnFocusPreviousChild((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammarresulttextedit_sender(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_Sender((TextGrammarCheck__GrammarResultTextEdit*)self);
}

QObject* k_textgrammarcheck__grammarresulttextedit_super_sender(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperSender((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnSender((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex((TextGrammarCheck__GrammarResultTextEdit*)self);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperSenderSignalIndex((TextGrammarCheck__GrammarResultTextEdit*)self);
}

void k_textgrammarcheck__grammarresulttextedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammarResultTextEdit_OnSenderSignalIndex((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammarresulttextedit_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammarResultTextEdit_Receivers((TextGrammarCheck__GrammarResultTextEdit*)self, signal);
}

int32_t k_textgrammarcheck__grammarresulttextedit_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperReceivers((TextGrammarCheck__GrammarResultTextEdit*)self, signal);
}

void k_textgrammarcheck__grammarresulttextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnReceivers((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammarresulttextedit_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__grammarresulttextedit_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperIsSignalConnected((TextGrammarCheck__GrammarResultTextEdit*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammarresulttextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarResultTextEdit_OnIsSignalConnected((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

double k_textgrammarcheck__grammarresulttextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF((TextGrammarCheck__GrammarResultTextEdit*)self, metricA, metricB);
}

double k_textgrammarcheck__grammarresulttextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__GrammarResultTextEdit_SuperGetDecodedMetricF((TextGrammarCheck__GrammarResultTextEdit*)self, metricA, metricB);
}

void k_textgrammarcheck__grammarresulttextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextGrammarCheck__GrammarResultTextEdit_OnGetDecodedMetricF((TextGrammarCheck__GrammarResultTextEdit*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarresulttextedit_delete(void* self) {
    TextGrammarCheck__GrammarResultTextEdit_Delete((TextGrammarCheck__GrammarResultTextEdit*)(self));
}
