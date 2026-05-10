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
#include "libautocorrection.hpp"
#include "libautocorrectiontextedit.hpp"
#include "libautocorrectiontextedit.h"

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* k_textautocorrectionwidgets__autocorrectiontextedit_new(void* parent) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new((QWidget*)parent);
}

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* k_textautocorrectionwidgets__autocorrectiontextedit_new2() {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new2();
}

const QMetaObject* k_textautocorrectionwidgets__autocorrectiontextedit_meta_object(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetaObject((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_textautocorrectionwidgets__autocorrectiontextedit_super_meta_object(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetaObject((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void* k_textautocorrectionwidgets__autocorrectiontextedit_metacast(void* self, const char* param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacast((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void* k_textautocorrectionwidgets__autocorrectiontextedit_super_metacast(void* self, const char* param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacast((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1, param2, param3);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacall((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacall((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1, param2, param3);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextAutoCorrectionCore__AutoCorrection* k_textautocorrectionwidgets__autocorrectiontextedit_autocorrection(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Autocorrection((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_autocorrection(void* self, void* autocorrect) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrection((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (TextAutoCorrectionCore__AutoCorrection*)autocorrect);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_autocorrection_language(void* self, const char* language) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrectionLanguage((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, qstring(language));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_key_press_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QKeyEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyPressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_key_press_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyPressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QKeyEvent*)e);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_textautocorrectionwidgets__autocorrectiontextedit_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_textautocorrectionwidgets__autocorrectiontextedit_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_interaction_flags(void* self, int32_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* k_textautocorrectionwidgets__autocorrectiontextedit_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* k_textautocorrectionwidgets__autocorrectiontextedit_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* k_textautocorrectionwidgets__autocorrectiontextedit_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_textautocorrectionwidgets__autocorrectiontextedit_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_auto_formatting(void* self, int32_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_wrap_mode(void* self, int32_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_word_wrap_mode(void* self, int32_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_find2(void* self, void* exp) {
    return QTextEdit_Find2((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* k_textautocorrectionwidgets__autocorrectiontextedit_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* k_textautocorrectionwidgets__autocorrectiontextedit_create_standard_context_menu2(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenu2((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_textautocorrectionwidgets__autocorrectiontextedit_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_move_cursor(void* self, int32_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_alignment(void* self, int32_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_text_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_find22(void* self, const char* exp, int32_t options) {
    return QTextEdit_Find22((QTextEdit*)self, qstring(exp), options);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_find23(void* self, void* exp, int32_t options) {
    return QTextEdit_Find23((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_textautocorrectionwidgets__autocorrectiontextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_textautocorrectionwidgets__autocorrectiontextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_textautocorrectionwidgets__autocorrectiontextedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textautocorrectionwidgets__autocorrectiontextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textautocorrectionwidgets__autocorrectiontextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textautocorrectionwidgets__autocorrectiontextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textautocorrectionwidgets__autocorrectiontextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textautocorrectionwidgets__autocorrectiontextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textautocorrectionwidgets__autocorrectiontextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textautocorrectionwidgets__autocorrectiontextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textautocorrectionwidgets__autocorrectiontextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textautocorrectionwidgets__autocorrectiontextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textautocorrectionwidgets__autocorrectiontextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textautocorrectionwidgets__autocorrectiontextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textautocorrectionwidgets__autocorrectiontextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textautocorrectionwidgets__autocorrectiontextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textautocorrectionwidgets__autocorrectiontextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textautocorrectionwidgets__autocorrectiontextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textautocorrectionwidgets__autocorrectiontextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textautocorrectionwidgets__autocorrectiontextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textautocorrectionwidgets__autocorrectiontextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textautocorrectionwidgets__autocorrectiontextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textautocorrectionwidgets__autocorrectiontextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textautocorrectionwidgets__autocorrectiontextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textautocorrectionwidgets__autocorrectiontextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textautocorrectionwidgets__autocorrectiontextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textautocorrectionwidgets__autocorrectiontextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textautocorrectionwidgets__autocorrectiontextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textautocorrectionwidgets__autocorrectiontextedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectionwidgets__autocorrectiontextedit_dynamic_property_names\n");
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

QBindingStorage* k_textautocorrectionwidgets__autocorrectiontextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textautocorrectionwidgets__autocorrectiontextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textautocorrectionwidgets__autocorrectiontextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_load_resource(void* self, int type, void* name) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, type, (QUrl*)name);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_super_load_resource(void* self, int type, void* name) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLoadResource((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, type, (QUrl*)name);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLoadResource((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_input_method_query(void* self, int32_t property) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, property);
}

QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_query(void* self, int32_t property) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodQuery((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, property);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodQuery((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_event(void* self, void* e) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)e);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_event(void* self, void* e) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_event(void* self, bool (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_timer_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTimerEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_timer_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTimerEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTimerEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTimerEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_key_release_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QKeyEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_key_release_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QKeyEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_resize_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QResizeEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_resize_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperResizeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QResizeEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnResizeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_paint_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPaintEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPaintEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_press_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_press_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMousePressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMousePressEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_move_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_move_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_release_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_release_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseReleaseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_double_click_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_double_click_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseDoubleClickEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMouseEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseDoubleClickEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_next_prev_child(void* self, bool next) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, next);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_prev_child(void* self, bool next) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextPrevChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, next);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusNextPrevChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_context_menu_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QContextMenuEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_context_menu_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperContextMenuEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QContextMenuEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnContextMenuEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_drag_enter_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_enter_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragEnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragEnterEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragEnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_drag_leave_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_leave_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragLeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragLeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_drag_move_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_move_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDragMoveEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_drop_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDropEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_drop_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDropEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QDropEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDropEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_focus_in_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QFocusEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_in_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusInEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QFocusEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusInEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_focus_out_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QFocusEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_out_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusOutEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QFocusEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusOutEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_show_event(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QShowEvent*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_show_event(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperShowEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QShowEvent*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnShowEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_change_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_change_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChangeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChangeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_wheel_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QWheelEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_wheel_event(void* self, void* e) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperWheelEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QWheelEvent*)e);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnWheelEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QMimeData* k_textautocorrectionwidgets__autocorrectiontextedit_create_mime_data_from_selection(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QMimeData* k_textautocorrectionwidgets__autocorrectiontextedit_super_create_mime_data_from_selection(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreateMimeDataFromSelection((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCreateMimeDataFromSelection((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_can_insert_from_mime_data(void* self, void* source) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMimeData*)source);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_can_insert_from_mime_data(void* self, void* source) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCanInsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMimeData*)source);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCanInsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_insert_from_mime_data(void* self, void* source) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMimeData*)source);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_insert_from_mime_data(void* self, void* source) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMimeData*)source);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInsertFromMimeData((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_input_method_event(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_event(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_scroll_contents_by(void* self, int dx, int dy) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, dx, dy);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_scroll_contents_by(void* self, int dx, int dy) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperScrollContentsBy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, dx, dy);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnScrollContentsBy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_do_set_text_cursor(void* self, void* cursor) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTextCursor*)cursor);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_do_set_text_cursor(void* self, void* cursor) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDoSetTextCursor((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTextCursor*)cursor);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDoSetTextCursor((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_minimum_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_minimum_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMinimumSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMinimumSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_size_hint(void* self, QSize* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_setup_viewport(void* self, void* viewport) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QWidget*)viewport);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_setup_viewport(void* self, void* viewport) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetupViewport((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QWidget*)viewport);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetupViewport((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_event_filter(void* self, void* param1, void* param2) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_event_filter(void* self, void* param1, void* param2) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEventFilter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEventFilter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_viewport_event(void* self, void* param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)param1);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_event(void* self, void* param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_viewport_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_size_hint(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportSizeHint((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_init_style_option(void* self, void* option) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_init_style_option(void* self, void* option) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitStyleOption((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitStyleOption((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_dev_type(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_dev_type(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDevType((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_dev_type(void* self, int32_t (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDevType((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_visible(void* self, bool visible) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, visible);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_set_visible(void* self, bool visible) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetVisible((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, visible);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetVisible((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height_for_width(void* self, int param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_height_for_width(void* self, int param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_has_height_for_width(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_has_height_for_width(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHasHeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_has_height_for_width(void* self, bool (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHasHeightForWidth((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_textautocorrectionwidgets__autocorrectiontextedit_paint_engine(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QPaintEngine* k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_engine(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEngine((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEngine((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_enter_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEnterEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_enter_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEnterEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEnterEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_leave_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_leave_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLeaveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_move_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMoveEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_move_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMoveEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMoveEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_close_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QCloseEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_close_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCloseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QCloseEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCloseEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_tablet_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTabletEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_tablet_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTabletEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QTabletEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTabletEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_action_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QActionEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_action_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperActionEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QActionEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnActionEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_hide_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QHideEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_hide_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHideEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QHideEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHideEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, qstring(eventType), message, result);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperNativeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, qstring(eventType), message, result);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnNativeEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_metric(void* self, int32_t param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_metric(void* self, int32_t param1) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetric((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetric((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_init_painter(void* self, void* painter) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPainter*)painter);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_init_painter(void* self, void* painter) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPainter*)painter);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_textautocorrectionwidgets__autocorrectiontextedit_redirected(void* self, void* offset) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_textautocorrectionwidgets__autocorrectiontextedit_super_redirected(void* self, void* offset) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperRedirected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPoint*)offset);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnRedirected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QPainter* k_textautocorrectionwidgets__autocorrectiontextedit_shared_painter(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QPainter* k_textautocorrectionwidgets__autocorrectiontextedit_super_shared_painter(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSharedPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSharedPainter((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_child_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QChildEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_child_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChildEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QChildEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChildEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_custom_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_custom_event(void* self, void* event) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCustomEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QEvent*)event);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCustomEvent((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_connect_notify(void* self, void* signal) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_connect_notify(void* self, void* signal) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperConnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnConnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_disconnect_notify(void* self, void* signal) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_disconnect_notify(void* self, void* signal) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDisconnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDisconnectNotify((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in_f(void* self, float range) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, range);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_zoom_in_f(void* self, float range) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperZoomInF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, range);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnZoomInF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, left, top, right, bottom);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, left, top, right, bottom);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_viewport_margins(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_margins(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportMargins((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_draw_frame(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPainter*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_draw_frame(void* self, void* param1) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDrawFrame((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QPainter*)param1);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDrawFrame((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_update_micro_focus(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_update_micro_focus(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperUpdateMicroFocus((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_update_micro_focus(void* self, void (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnUpdateMicroFocus((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_create(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_create(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreate((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_create(void* self, void (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCreate((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_destroy(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_super_destroy(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDestroy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroy(void* self, void (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDestroy((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_next_child(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_child(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_next_child(void* self, bool (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusNextChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_previous_child(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_previous_child(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusPreviousChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_previous_child(void* self, bool (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusPreviousChild((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

QObject* k_textautocorrectionwidgets__autocorrectiontextedit_sender(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

QObject* k_textautocorrectionwidgets__autocorrectiontextedit_super_sender(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSender((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_sender(void* self, QObject* (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSender((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_sender_signal_index(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_sender_signal_index(void* self) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSenderSignalIndex((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSenderSignalIndex((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_receivers(void* self, const char* signal) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, signal);
}

int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_receivers(void* self, const char* signal) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperReceivers((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnReceivers((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_is_signal_connected(void* self, void* signal) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

bool k_textautocorrectionwidgets__autocorrectiontextedit_super_is_signal_connected(void* self, void* signal) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperIsSignalConnected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (QMetaMethod*)signal);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnIsSignalConnected((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, metricA, metricB);
}

double k_textautocorrectionwidgets__autocorrectiontextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperGetDecodedMetricF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, metricA, metricB);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnGetDecodedMetricF((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textautocorrectionwidgets__autocorrectiontextedit_delete(void* self) {
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Delete((TextAutoCorrectionWidgets__AutoCorrectionTextEdit*)(self));
}
