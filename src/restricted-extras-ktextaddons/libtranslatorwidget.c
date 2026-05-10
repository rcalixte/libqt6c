#include "../libqabstractscrollarea.hpp"
#include "../libqabstracttextdocumentlayout.hpp"
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
#include "libtranslatorwidget.hpp"
#include "libtranslatorwidget.h"

TextTranslator__TranslatorTextEdit* k_texttranslator__translatortextedit_new(void* parent) {
    return TextTranslator__TranslatorTextEdit_new((QWidget*)parent);
}

TextTranslator__TranslatorTextEdit* k_texttranslator__translatortextedit_new2() {
    return TextTranslator__TranslatorTextEdit_new2();
}

const QMetaObject* k_texttranslator__translatortextedit_meta_object(void* self) {
    return TextTranslator__TranslatorTextEdit_MetaObject((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnMetaObject((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatortextedit_super_meta_object(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperMetaObject((TextTranslator__TranslatorTextEdit*)self);
}

void* k_texttranslator__translatortextedit_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorTextEdit_Metacast((TextTranslator__TranslatorTextEdit*)self, param1);
}

void k_texttranslator__translatortextedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorTextEdit_OnMetacast((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void* k_texttranslator__translatortextedit_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorTextEdit_SuperMetacast((TextTranslator__TranslatorTextEdit*)self, param1);
}

int32_t k_texttranslator__translatortextedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorTextEdit_Metacall((TextTranslator__TranslatorTextEdit*)self, param1, param2, param3);
}

void k_texttranslator__translatortextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorTextEdit_OnMetacall((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorTextEdit_SuperMetacall((TextTranslator__TranslatorTextEdit*)self, param1, param2, param3);
}

const char* k_texttranslator__translatortextedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_translate_text(void* self) {
    TextTranslator__TranslatorTextEdit_TranslateText((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_translate_text(void* self, void (*callback)(void*)) {
    TextTranslator__TranslatorTextEdit_Connect_TranslateText((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_drop_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_DropEvent((TextTranslator__TranslatorTextEdit*)self, (QDropEvent*)param1);
}

void k_texttranslator__translatortextedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDropEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_super_drop_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_SuperDropEvent((TextTranslator__TranslatorTextEdit*)self, (QDropEvent*)param1);
}

const char* k_texttranslator__translatortextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatortextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_document(void* self, void* document) {
    QPlainTextEdit_SetDocument((QPlainTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* k_texttranslator__translatortextedit_document(void* self) {
    return QPlainTextEdit_Document((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QPlainTextEdit_SetPlaceholderText((QPlainTextEdit*)self, qstring(placeholderText));
}

const char* k_texttranslator__translatortextedit_placeholder_text(void* self) {
    libqt_string _str = QPlainTextEdit_PlaceholderText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_SetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* k_texttranslator__translatortextedit_text_cursor(void* self) {
    return QPlainTextEdit_TextCursor((QPlainTextEdit*)self);
}

bool k_texttranslator__translatortextedit_is_read_only(void* self) {
    return QPlainTextEdit_IsReadOnly((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_read_only(void* self, bool ro) {
    QPlainTextEdit_SetReadOnly((QPlainTextEdit*)self, ro);
}

void k_texttranslator__translatortextedit_set_text_interaction_flags(void* self, int32_t flags) {
    QPlainTextEdit_SetTextInteractionFlags((QPlainTextEdit*)self, flags);
}

int32_t k_texttranslator__translatortextedit_text_interaction_flags(void* self) {
    return QPlainTextEdit_TextInteractionFlags((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_merge_current_char_format(void* self, void* modifier) {
    QPlainTextEdit_MergeCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)modifier);
}

void k_texttranslator__translatortextedit_set_current_char_format(void* self, void* format) {
    QPlainTextEdit_SetCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* k_texttranslator__translatortextedit_current_char_format(void* self) {
    return QPlainTextEdit_CurrentCharFormat((QPlainTextEdit*)self);
}

bool k_texttranslator__translatortextedit_tab_changes_focus(void* self) {
    return QPlainTextEdit_TabChangesFocus((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_tab_changes_focus(void* self, bool b) {
    QPlainTextEdit_SetTabChangesFocus((QPlainTextEdit*)self, b);
}

void k_texttranslator__translatortextedit_set_document_title(void* self, const char* title) {
    QPlainTextEdit_SetDocumentTitle((QPlainTextEdit*)self, qstring(title));
}

const char* k_texttranslator__translatortextedit_document_title(void* self) {
    libqt_string _str = QPlainTextEdit_DocumentTitle((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatortextedit_is_undo_redo_enabled(void* self) {
    return QPlainTextEdit_IsUndoRedoEnabled((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_undo_redo_enabled(void* self, bool enable) {
    QPlainTextEdit_SetUndoRedoEnabled((QPlainTextEdit*)self, enable);
}

void k_texttranslator__translatortextedit_set_maximum_block_count(void* self, int maximum) {
    QPlainTextEdit_SetMaximumBlockCount((QPlainTextEdit*)self, maximum);
}

int32_t k_texttranslator__translatortextedit_maximum_block_count(void* self) {
    return QPlainTextEdit_MaximumBlockCount((QPlainTextEdit*)self);
}

int32_t k_texttranslator__translatortextedit_line_wrap_mode(void* self) {
    return QPlainTextEdit_LineWrapMode((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_line_wrap_mode(void* self, int32_t mode) {
    QPlainTextEdit_SetLineWrapMode((QPlainTextEdit*)self, mode);
}

int32_t k_texttranslator__translatortextedit_word_wrap_mode(void* self) {
    return QPlainTextEdit_WordWrapMode((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_word_wrap_mode(void* self, int32_t policy) {
    QPlainTextEdit_SetWordWrapMode((QPlainTextEdit*)self, policy);
}

void k_texttranslator__translatortextedit_set_background_visible(void* self, bool visible) {
    QPlainTextEdit_SetBackgroundVisible((QPlainTextEdit*)self, visible);
}

bool k_texttranslator__translatortextedit_background_visible(void* self) {
    return QPlainTextEdit_BackgroundVisible((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_center_on_scroll(void* self, bool enabled) {
    QPlainTextEdit_SetCenterOnScroll((QPlainTextEdit*)self, enabled);
}

bool k_texttranslator__translatortextedit_center_on_scroll(void* self) {
    return QPlainTextEdit_CenterOnScroll((QPlainTextEdit*)self);
}

bool k_texttranslator__translatortextedit_find(void* self, const char* exp) {
    return QPlainTextEdit_Find((QPlainTextEdit*)self, qstring(exp));
}

bool k_texttranslator__translatortextedit_find2(void* self, void* exp) {
    return QPlainTextEdit_Find2((QPlainTextEdit*)self, (QRegularExpression*)exp);
}

const char* k_texttranslator__translatortextedit_to_plain_text(void* self) {
    libqt_string _str = QPlainTextEdit_ToPlainText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_ensure_cursor_visible(void* self) {
    QPlainTextEdit_EnsureCursorVisible((QPlainTextEdit*)self);
}

QMenu* k_texttranslator__translatortextedit_create_standard_context_menu(void* self) {
    return QPlainTextEdit_CreateStandardContextMenu((QPlainTextEdit*)self);
}

QMenu* k_texttranslator__translatortextedit_create_standard_context_menu2(void* self, void* position) {
    return QPlainTextEdit_CreateStandardContextMenu2((QPlainTextEdit*)self, (QPoint*)position);
}

QTextCursor* k_texttranslator__translatortextedit_cursor_for_position(void* self, void* pos) {
    return QPlainTextEdit_CursorForPosition((QPlainTextEdit*)self, (QPoint*)pos);
}

QRect* k_texttranslator__translatortextedit_cursor_rect(void* self, void* cursor) {
    return QPlainTextEdit_CursorRect((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QRect* k_texttranslator__translatortextedit_cursor_rect2(void* self) {
    return QPlainTextEdit_CursorRect2((QPlainTextEdit*)self);
}

const char* k_texttranslator__translatortextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QPlainTextEdit_AnchorAt((QPlainTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatortextedit_overwrite_mode(void* self) {
    return QPlainTextEdit_OverwriteMode((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_overwrite_mode(void* self, bool overwrite) {
    QPlainTextEdit_SetOverwriteMode((QPlainTextEdit*)self, overwrite);
}

double k_texttranslator__translatortextedit_tab_stop_distance(void* self) {
    return QPlainTextEdit_TabStopDistance((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_tab_stop_distance(void* self, double distance) {
    QPlainTextEdit_SetTabStopDistance((QPlainTextEdit*)self, distance);
}

int32_t k_texttranslator__translatortextedit_cursor_width(void* self) {
    return QPlainTextEdit_CursorWidth((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_set_cursor_width(void* self, int width) {
    QPlainTextEdit_SetCursorWidth((QPlainTextEdit*)self, width);
}

void k_texttranslator__translatortextedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QPlainTextEdit_SetExtraSelections((QPlainTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ k_texttranslator__translatortextedit_extra_selections(void* self) {
    libqt_list _arr = QPlainTextEdit_ExtraSelections((QPlainTextEdit*)self);
    return _arr;
}

void k_texttranslator__translatortextedit_move_cursor(void* self, int32_t operation) {
    QPlainTextEdit_MoveCursor((QPlainTextEdit*)self, operation);
}

bool k_texttranslator__translatortextedit_can_paste(void* self) {
    return QPlainTextEdit_CanPaste((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_print(void* self, void* printer) {
    QPlainTextEdit_Print((QPlainTextEdit*)self, (QPagedPaintDevice*)printer);
}

int32_t k_texttranslator__translatortextedit_block_count(void* self) {
    return QPlainTextEdit_BlockCount((QPlainTextEdit*)self);
}

QVariant* k_texttranslator__translatortextedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QPlainTextEdit_InputMethodQuery2((QPlainTextEdit*)self, query, (QVariant*)argument);
}

void k_texttranslator__translatortextedit_set_plain_text(void* self, const char* text) {
    QPlainTextEdit_SetPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_texttranslator__translatortextedit_cut(void* self) {
    QPlainTextEdit_Cut((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_copy(void* self) {
    QPlainTextEdit_Copy((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_paste(void* self) {
    QPlainTextEdit_Paste((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_undo(void* self) {
    QPlainTextEdit_Undo((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_redo(void* self) {
    QPlainTextEdit_Redo((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_clear(void* self) {
    QPlainTextEdit_Clear((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_select_all(void* self) {
    QPlainTextEdit_SelectAll((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_insert_plain_text(void* self, const char* text) {
    QPlainTextEdit_InsertPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_texttranslator__translatortextedit_append_plain_text(void* self, const char* text) {
    QPlainTextEdit_AppendPlainText((QPlainTextEdit*)self, qstring(text));
}

void k_texttranslator__translatortextedit_append_html(void* self, const char* html) {
    QPlainTextEdit_AppendHtml((QPlainTextEdit*)self, qstring(html));
}

void k_texttranslator__translatortextedit_center_cursor(void* self) {
    QPlainTextEdit_CenterCursor((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_zoom_in(void* self) {
    QPlainTextEdit_ZoomIn((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_zoom_out(void* self) {
    QPlainTextEdit_ZoomOut((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_text_changed(void* self) {
    QPlainTextEdit_TextChanged((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_text_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_TextChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_undo_available(void* self, bool b) {
    QPlainTextEdit_UndoAvailable((QPlainTextEdit*)self, b);
}

void k_texttranslator__translatortextedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_UndoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_redo_available(void* self, bool b) {
    QPlainTextEdit_RedoAvailable((QPlainTextEdit*)self, b);
}

void k_texttranslator__translatortextedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_RedoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_copy_available(void* self, bool b) {
    QPlainTextEdit_CopyAvailable((QPlainTextEdit*)self, b);
}

void k_texttranslator__translatortextedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_CopyAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_selection_changed(void* self) {
    QPlainTextEdit_SelectionChanged((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_SelectionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_cursor_position_changed(void* self) {
    QPlainTextEdit_CursorPositionChanged((QPlainTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_CursorPositionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_update_request(void* self, void* rect, int dy) {
    QPlainTextEdit_UpdateRequest((QPlainTextEdit*)self, (QRect*)rect, dy);
}

void k_texttranslator__translatortextedit_on_update_request(void* self, void (*callback)(void*, void*, int)) {
    QPlainTextEdit_Connect_UpdateRequest((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_block_count_changed(void* self, int newBlockCount) {
    QPlainTextEdit_BlockCountChanged((QPlainTextEdit*)self, newBlockCount);
}

void k_texttranslator__translatortextedit_on_block_count_changed(void* self, void (*callback)(void*, int)) {
    QPlainTextEdit_Connect_BlockCountChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_modification_changed(void* self, bool param1) {
    QPlainTextEdit_ModificationChanged((QPlainTextEdit*)self, param1);
}

void k_texttranslator__translatortextedit_on_modification_changed(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_ModificationChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_find22(void* self, const char* exp, int32_t options) {
    return QPlainTextEdit_Find22((QPlainTextEdit*)self, qstring(exp), options);
}

bool k_texttranslator__translatortextedit_find23(void* self, void* exp, int32_t options) {
    return QPlainTextEdit_Find23((QPlainTextEdit*)self, (QRegularExpression*)exp, options);
}

void k_texttranslator__translatortextedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QPlainTextEdit_MoveCursor2((QPlainTextEdit*)self, operation, mode);
}

void k_texttranslator__translatortextedit_zoom_in1(void* self, int range) {
    QPlainTextEdit_ZoomIn1((QPlainTextEdit*)self, range);
}

void k_texttranslator__translatortextedit_zoom_out1(void* self, int range) {
    QPlainTextEdit_ZoomOut1((QPlainTextEdit*)self, range);
}

int32_t k_texttranslator__translatortextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_texttranslator__translatortextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_texttranslator__translatortextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_texttranslator__translatortextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_texttranslator__translatortextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_texttranslator__translatortextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_texttranslator__translatortextedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_texttranslator__translatortextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_texttranslator__translatortextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_texttranslator__translatortextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_texttranslator__translatortextedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_texttranslator__translatortextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_texttranslator__translatortextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_texttranslator__translatortextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_texttranslator__translatortextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_texttranslator__translatortextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_texttranslator__translatortextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_texttranslator__translatortextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_texttranslator__translatortextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_texttranslator__translatortextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_texttranslator__translatortextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatortextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatortextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_texttranslator__translatortextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_texttranslator__translatortextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_texttranslator__translatortextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatortextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_texttranslator__translatortextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_texttranslator__translatortextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_texttranslator__translatortextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_texttranslator__translatortextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_texttranslator__translatortextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_texttranslator__translatortextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_texttranslator__translatortextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_texttranslator__translatortextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_texttranslator__translatortextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_texttranslator__translatortextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_texttranslator__translatortextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_texttranslator__translatortextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_texttranslator__translatortextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_texttranslator__translatortextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_texttranslator__translatortextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_texttranslator__translatortextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_texttranslator__translatortextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_texttranslator__translatortextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_texttranslator__translatortextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_texttranslator__translatortextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_texttranslator__translatortextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_texttranslator__translatortextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_texttranslator__translatortextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_texttranslator__translatortextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_texttranslator__translatortextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_texttranslator__translatortextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_texttranslator__translatortextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_texttranslator__translatortextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_texttranslator__translatortextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatortextedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatortextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatortextedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatortextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatortextedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatortextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatortextedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatortextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatortextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_texttranslator__translatortextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatortextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_texttranslator__translatortextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_texttranslator__translatortextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatortextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_texttranslator__translatortextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_texttranslator__translatortextedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_texttranslator__translatortextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_texttranslator__translatortextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_texttranslator__translatortextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_texttranslator__translatortextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_texttranslator__translatortextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_texttranslator__translatortextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_texttranslator__translatortextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatortextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_texttranslator__translatortextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatortextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_texttranslator__translatortextedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_texttranslator__translatortextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_texttranslator__translatortextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_texttranslator__translatortextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_texttranslator__translatortextedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_texttranslator__translatortextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_texttranslator__translatortextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_texttranslator__translatortextedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatortextedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatortextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_texttranslator__translatortextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_texttranslator__translatortextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatortextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_texttranslator__translatortextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_texttranslator__translatortextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_texttranslator__translatortextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_texttranslator__translatortextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_texttranslator__translatortextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_texttranslator__translatortextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_texttranslator__translatortextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_texttranslator__translatortextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_texttranslator__translatortextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatortextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_texttranslator__translatortextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_texttranslator__translatortextedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_texttranslator__translatortextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_texttranslator__translatortextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_texttranslator__translatortextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_texttranslator__translatortextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_texttranslator__translatortextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_texttranslator__translatortextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_texttranslator__translatortextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_texttranslator__translatortextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_texttranslator__translatortextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_texttranslator__translatortextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_texttranslator__translatortextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_texttranslator__translatortextedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_texttranslator__translatortextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_texttranslator__translatortextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_texttranslator__translatortextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_texttranslator__translatortextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_texttranslator__translatortextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_texttranslator__translatortextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_texttranslator__translatortextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_texttranslator__translatortextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_texttranslator__translatortextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_texttranslator__translatortextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_texttranslator__translatortextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_texttranslator__translatortextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_texttranslator__translatortextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatortextedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatortextedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatortextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatortextedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatortextedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatortextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_texttranslator__translatortextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_texttranslator__translatortextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_texttranslator__translatortextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_texttranslator__translatortextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_texttranslator__translatortextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_texttranslator__translatortextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_texttranslator__translatortextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_texttranslator__translatortextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_texttranslator__translatortextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_texttranslator__translatortextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatortextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_texttranslator__translatortextedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_texttranslator__translatortextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_texttranslator__translatortextedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_texttranslator__translatortextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatortextedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_texttranslator__translatortextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatortextedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_texttranslator__translatortextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_texttranslator__translatortextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_texttranslator__translatortextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_texttranslator__translatortextedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_texttranslator__translatortextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_texttranslator__translatortextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_texttranslator__translatortextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_texttranslator__translatortextedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_texttranslator__translatortextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_texttranslator__translatortextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_texttranslator__translatortextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_texttranslator__translatortextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_texttranslator__translatortextedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_texttranslator__translatortextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_texttranslator__translatortextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_texttranslator__translatortextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatortextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_texttranslator__translatortextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_texttranslator__translatortextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_texttranslator__translatortextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_texttranslator__translatortextedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_texttranslator__translatortextedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_texttranslator__translatortextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_texttranslator__translatortextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texttranslator__translatortextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_texttranslator__translatortextedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_texttranslator__translatortextedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_texttranslator__translatortextedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_texttranslator__translatortextedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_texttranslator__translatortextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatortextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_texttranslator__translatortextedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatortextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_texttranslator__translatortextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_texttranslator__translatortextedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_texttranslator__translatortextedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_texttranslator__translatortextedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_texttranslator__translatortextedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_texttranslator__translatortextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_texttranslator__translatortextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_texttranslator__translatortextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_texttranslator__translatortextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_texttranslator__translatortextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_texttranslator__translatortextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_texttranslator__translatortextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_texttranslator__translatortextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_texttranslator__translatortextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_texttranslator__translatortextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_texttranslator__translatortextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_texttranslator__translatortextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_texttranslator__translatortextedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_texttranslator__translatortextedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_texttranslator__translatortextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatortextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_texttranslator__translatortextedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_texttranslator__translatortextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatortextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_texttranslator__translatortextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_texttranslator__translatortextedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_texttranslator__translatortextedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_texttranslator__translatortextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_texttranslator__translatortextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_texttranslator__translatortextedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_texttranslator__translatortextedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_texttranslator__translatortextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_texttranslator__translatortextedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_texttranslator__translatortextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatortextedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatortextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatortextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatortextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatortextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatortextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatortextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatortextedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatortextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatortextedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatortextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatortextedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatortextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatortextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatortextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatortextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatortextedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatortextedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatortextedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatortextedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatortextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatortextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatortextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatortextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatortextedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatortextedit_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatortextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatortextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatortextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatortextedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatortextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatortextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatortextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatortextedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatortextedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatortextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatortextedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatortextedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatortextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatortextedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatortextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatortextedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_texttranslator__translatortextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_texttranslator__translatortextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_texttranslator__translatortextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_texttranslator__translatortextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_texttranslator__translatortextedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QVariant* k_texttranslator__translatortextedit_load_resource(void* self, int type, void* name) {
    return TextTranslator__TranslatorTextEdit_LoadResource((TextTranslator__TranslatorTextEdit*)self, type, (QUrl*)name);
}

QVariant* k_texttranslator__translatortextedit_super_load_resource(void* self, int type, void* name) {
    return TextTranslator__TranslatorTextEdit_SuperLoadResource((TextTranslator__TranslatorTextEdit*)self, type, (QUrl*)name);
}

void k_texttranslator__translatortextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    TextTranslator__TranslatorTextEdit_OnLoadResource((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QVariant* k_texttranslator__translatortextedit_input_method_query(void* self, int32_t property) {
    return TextTranslator__TranslatorTextEdit_InputMethodQuery((TextTranslator__TranslatorTextEdit*)self, property);
}

QVariant* k_texttranslator__translatortextedit_super_input_method_query(void* self, int32_t property) {
    return TextTranslator__TranslatorTextEdit_SuperInputMethodQuery((TextTranslator__TranslatorTextEdit*)self, property);
}

void k_texttranslator__translatortextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorTextEdit_OnInputMethodQuery((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_event(void* self, void* e) {
    return TextTranslator__TranslatorTextEdit_Event((TextTranslator__TranslatorTextEdit*)self, (QEvent*)e);
}

bool k_texttranslator__translatortextedit_super_event(void* self, void* e) {
    return TextTranslator__TranslatorTextEdit_SuperEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)e);
}

void k_texttranslator__translatortextedit_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_timer_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_TimerEvent((TextTranslator__TranslatorTextEdit*)self, (QTimerEvent*)e);
}

void k_texttranslator__translatortextedit_super_timer_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperTimerEvent((TextTranslator__TranslatorTextEdit*)self, (QTimerEvent*)e);
}

void k_texttranslator__translatortextedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnTimerEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_key_press_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_KeyPressEvent((TextTranslator__TranslatorTextEdit*)self, (QKeyEvent*)e);
}

void k_texttranslator__translatortextedit_super_key_press_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperKeyPressEvent((TextTranslator__TranslatorTextEdit*)self, (QKeyEvent*)e);
}

void k_texttranslator__translatortextedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnKeyPressEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_key_release_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_KeyReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (QKeyEvent*)e);
}

void k_texttranslator__translatortextedit_super_key_release_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (QKeyEvent*)e);
}

void k_texttranslator__translatortextedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnKeyReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_resize_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_ResizeEvent((TextTranslator__TranslatorTextEdit*)self, (QResizeEvent*)e);
}

void k_texttranslator__translatortextedit_super_resize_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperResizeEvent((TextTranslator__TranslatorTextEdit*)self, (QResizeEvent*)e);
}

void k_texttranslator__translatortextedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnResizeEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_paint_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_PaintEvent((TextTranslator__TranslatorTextEdit*)self, (QPaintEvent*)e);
}

void k_texttranslator__translatortextedit_super_paint_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperPaintEvent((TextTranslator__TranslatorTextEdit*)self, (QPaintEvent*)e);
}

void k_texttranslator__translatortextedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnPaintEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_mouse_press_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_MousePressEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_super_mouse_press_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperMousePressEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnMousePressEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_mouse_move_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_MouseMoveEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_super_mouse_move_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnMouseMoveEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_mouse_release_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_MouseReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_super_mouse_release_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnMouseReleaseEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_mouse_double_click_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_super_mouse_double_click_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent((TextTranslator__TranslatorTextEdit*)self, (QMouseEvent*)e);
}

void k_texttranslator__translatortextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnMouseDoubleClickEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorTextEdit_FocusNextPrevChild((TextTranslator__TranslatorTextEdit*)self, next);
}

bool k_texttranslator__translatortextedit_super_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild((TextTranslator__TranslatorTextEdit*)self, next);
}

void k_texttranslator__translatortextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextTranslator__TranslatorTextEdit_OnFocusNextPrevChild((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_context_menu_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_ContextMenuEvent((TextTranslator__TranslatorTextEdit*)self, (QContextMenuEvent*)e);
}

void k_texttranslator__translatortextedit_super_context_menu_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperContextMenuEvent((TextTranslator__TranslatorTextEdit*)self, (QContextMenuEvent*)e);
}

void k_texttranslator__translatortextedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnContextMenuEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_drag_enter_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_DragEnterEvent((TextTranslator__TranslatorTextEdit*)self, (QDragEnterEvent*)e);
}

void k_texttranslator__translatortextedit_super_drag_enter_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperDragEnterEvent((TextTranslator__TranslatorTextEdit*)self, (QDragEnterEvent*)e);
}

void k_texttranslator__translatortextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDragEnterEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_drag_leave_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_DragLeaveEvent((TextTranslator__TranslatorTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_texttranslator__translatortextedit_super_drag_leave_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent((TextTranslator__TranslatorTextEdit*)self, (QDragLeaveEvent*)e);
}

void k_texttranslator__translatortextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDragLeaveEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_drag_move_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_DragMoveEvent((TextTranslator__TranslatorTextEdit*)self, (QDragMoveEvent*)e);
}

void k_texttranslator__translatortextedit_super_drag_move_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperDragMoveEvent((TextTranslator__TranslatorTextEdit*)self, (QDragMoveEvent*)e);
}

void k_texttranslator__translatortextedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDragMoveEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_focus_in_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_FocusInEvent((TextTranslator__TranslatorTextEdit*)self, (QFocusEvent*)e);
}

void k_texttranslator__translatortextedit_super_focus_in_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperFocusInEvent((TextTranslator__TranslatorTextEdit*)self, (QFocusEvent*)e);
}

void k_texttranslator__translatortextedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnFocusInEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_focus_out_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_FocusOutEvent((TextTranslator__TranslatorTextEdit*)self, (QFocusEvent*)e);
}

void k_texttranslator__translatortextedit_super_focus_out_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperFocusOutEvent((TextTranslator__TranslatorTextEdit*)self, (QFocusEvent*)e);
}

void k_texttranslator__translatortextedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnFocusOutEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_show_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_ShowEvent((TextTranslator__TranslatorTextEdit*)self, (QShowEvent*)param1);
}

void k_texttranslator__translatortextedit_super_show_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_SuperShowEvent((TextTranslator__TranslatorTextEdit*)self, (QShowEvent*)param1);
}

void k_texttranslator__translatortextedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnShowEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_change_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_ChangeEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)e);
}

void k_texttranslator__translatortextedit_super_change_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperChangeEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)e);
}

void k_texttranslator__translatortextedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnChangeEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_wheel_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_WheelEvent((TextTranslator__TranslatorTextEdit*)self, (QWheelEvent*)e);
}

void k_texttranslator__translatortextedit_super_wheel_event(void* self, void* e) {
    TextTranslator__TranslatorTextEdit_SuperWheelEvent((TextTranslator__TranslatorTextEdit*)self, (QWheelEvent*)e);
}

void k_texttranslator__translatortextedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnWheelEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QMimeData* k_texttranslator__translatortextedit_create_mime_data_from_selection(void* self) {
    return TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection((TextTranslator__TranslatorTextEdit*)self);
}

QMimeData* k_texttranslator__translatortextedit_super_create_mime_data_from_selection(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnCreateMimeDataFromSelection((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_can_insert_from_mime_data(void* self, void* source) {
    return TextTranslator__TranslatorTextEdit_CanInsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (QMimeData*)source);
}

bool k_texttranslator__translatortextedit_super_can_insert_from_mime_data(void* self, void* source) {
    return TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (QMimeData*)source);
}

void k_texttranslator__translatortextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnCanInsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_insert_from_mime_data(void* self, void* source) {
    TextTranslator__TranslatorTextEdit_InsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (QMimeData*)source);
}

void k_texttranslator__translatortextedit_super_insert_from_mime_data(void* self, void* source) {
    TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (QMimeData*)source);
}

void k_texttranslator__translatortextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnInsertFromMimeData((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_InputMethodEvent((TextTranslator__TranslatorTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatortextedit_super_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_SuperInputMethodEvent((TextTranslator__TranslatorTextEdit*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatortextedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnInputMethodEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_scroll_contents_by(void* self, int dx, int dy) {
    TextTranslator__TranslatorTextEdit_ScrollContentsBy((TextTranslator__TranslatorTextEdit*)self, dx, dy);
}

void k_texttranslator__translatortextedit_super_scroll_contents_by(void* self, int dx, int dy) {
    TextTranslator__TranslatorTextEdit_SuperScrollContentsBy((TextTranslator__TranslatorTextEdit*)self, dx, dy);
}

void k_texttranslator__translatortextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    TextTranslator__TranslatorTextEdit_OnScrollContentsBy((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_do_set_text_cursor(void* self, void* cursor) {
    TextTranslator__TranslatorTextEdit_DoSetTextCursor((TextTranslator__TranslatorTextEdit*)self, (QTextCursor*)cursor);
}

void k_texttranslator__translatortextedit_super_do_set_text_cursor(void* self, void* cursor) {
    TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor((TextTranslator__TranslatorTextEdit*)self, (QTextCursor*)cursor);
}

void k_texttranslator__translatortextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDoSetTextCursor((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatortextedit_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_MinimumSizeHint((TextTranslator__TranslatorTextEdit*)self);
}

QSize* k_texttranslator__translatortextedit_super_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperMinimumSizeHint((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnMinimumSizeHint((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatortextedit_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_SizeHint((TextTranslator__TranslatorTextEdit*)self);
}

QSize* k_texttranslator__translatortextedit_super_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperSizeHint((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnSizeHint((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_setup_viewport(void* self, void* viewport) {
    TextTranslator__TranslatorTextEdit_SetupViewport((TextTranslator__TranslatorTextEdit*)self, (QWidget*)viewport);
}

void k_texttranslator__translatortextedit_super_setup_viewport(void* self, void* viewport) {
    TextTranslator__TranslatorTextEdit_SuperSetupViewport((TextTranslator__TranslatorTextEdit*)self, (QWidget*)viewport);
}

void k_texttranslator__translatortextedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnSetupViewport((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_event_filter(void* self, void* param1, void* param2) {
    return TextTranslator__TranslatorTextEdit_EventFilter((TextTranslator__TranslatorTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_texttranslator__translatortextedit_super_event_filter(void* self, void* param1, void* param2) {
    return TextTranslator__TranslatorTextEdit_SuperEventFilter((TextTranslator__TranslatorTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void k_texttranslator__translatortextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnEventFilter((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_viewport_event(void* self, void* param1) {
    return TextTranslator__TranslatorTextEdit_ViewportEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)param1);
}

bool k_texttranslator__translatortextedit_super_viewport_event(void* self, void* param1) {
    return TextTranslator__TranslatorTextEdit_SuperViewportEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)param1);
}

void k_texttranslator__translatortextedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnViewportEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatortextedit_viewport_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_ViewportSizeHint((TextTranslator__TranslatorTextEdit*)self);
}

QSize* k_texttranslator__translatortextedit_super_viewport_size_hint(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperViewportSizeHint((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnViewportSizeHint((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_init_style_option(void* self, void* option) {
    TextTranslator__TranslatorTextEdit_InitStyleOption((TextTranslator__TranslatorTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_texttranslator__translatortextedit_super_init_style_option(void* self, void* option) {
    TextTranslator__TranslatorTextEdit_SuperInitStyleOption((TextTranslator__TranslatorTextEdit*)self, (QStyleOptionFrame*)option);
}

void k_texttranslator__translatortextedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnInitStyleOption((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_dev_type(void* self) {
    return TextTranslator__TranslatorTextEdit_DevType((TextTranslator__TranslatorTextEdit*)self);
}

int32_t k_texttranslator__translatortextedit_super_dev_type(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperDevType((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_dev_type(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnDevType((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorTextEdit_SetVisible((TextTranslator__TranslatorTextEdit*)self, visible);
}

void k_texttranslator__translatortextedit_super_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorTextEdit_SuperSetVisible((TextTranslator__TranslatorTextEdit*)self, visible);
}

void k_texttranslator__translatortextedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextTranslator__TranslatorTextEdit_OnSetVisible((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorTextEdit_HeightForWidth((TextTranslator__TranslatorTextEdit*)self, param1);
}

int32_t k_texttranslator__translatortextedit_super_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorTextEdit_SuperHeightForWidth((TextTranslator__TranslatorTextEdit*)self, param1);
}

void k_texttranslator__translatortextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextTranslator__TranslatorTextEdit_OnHeightForWidth((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_has_height_for_width(void* self) {
    return TextTranslator__TranslatorTextEdit_HasHeightForWidth((TextTranslator__TranslatorTextEdit*)self);
}

bool k_texttranslator__translatortextedit_super_has_height_for_width(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperHasHeightForWidth((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_has_height_for_width(void* self, bool (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnHasHeightForWidth((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_texttranslator__translatortextedit_paint_engine(void* self) {
    return TextTranslator__TranslatorTextEdit_PaintEngine((TextTranslator__TranslatorTextEdit*)self);
}

QPaintEngine* k_texttranslator__translatortextedit_super_paint_engine(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperPaintEngine((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnPaintEngine((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_enter_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_EnterEvent((TextTranslator__TranslatorTextEdit*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatortextedit_super_enter_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperEnterEvent((TextTranslator__TranslatorTextEdit*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatortextedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnEnterEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_leave_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_LeaveEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)event);
}

void k_texttranslator__translatortextedit_super_leave_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperLeaveEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)event);
}

void k_texttranslator__translatortextedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnLeaveEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_move_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_MoveEvent((TextTranslator__TranslatorTextEdit*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatortextedit_super_move_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperMoveEvent((TextTranslator__TranslatorTextEdit*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatortextedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnMoveEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_close_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_CloseEvent((TextTranslator__TranslatorTextEdit*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatortextedit_super_close_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperCloseEvent((TextTranslator__TranslatorTextEdit*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatortextedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnCloseEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_TabletEvent((TextTranslator__TranslatorTextEdit*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatortextedit_super_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperTabletEvent((TextTranslator__TranslatorTextEdit*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatortextedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnTabletEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_action_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_ActionEvent((TextTranslator__TranslatorTextEdit*)self, (QActionEvent*)event);
}

void k_texttranslator__translatortextedit_super_action_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperActionEvent((TextTranslator__TranslatorTextEdit*)self, (QActionEvent*)event);
}

void k_texttranslator__translatortextedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnActionEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_hide_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_HideEvent((TextTranslator__TranslatorTextEdit*)self, (QHideEvent*)event);
}

void k_texttranslator__translatortextedit_super_hide_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperHideEvent((TextTranslator__TranslatorTextEdit*)self, (QHideEvent*)event);
}

void k_texttranslator__translatortextedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnHideEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorTextEdit_NativeEvent((TextTranslator__TranslatorTextEdit*)self, qstring(eventType), message, result);
}

bool k_texttranslator__translatortextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorTextEdit_SuperNativeEvent((TextTranslator__TranslatorTextEdit*)self, qstring(eventType), message, result);
}

void k_texttranslator__translatortextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextTranslator__TranslatorTextEdit_OnNativeEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorTextEdit_Metric((TextTranslator__TranslatorTextEdit*)self, param1);
}

int32_t k_texttranslator__translatortextedit_super_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorTextEdit_SuperMetric((TextTranslator__TranslatorTextEdit*)self, param1);
}

void k_texttranslator__translatortextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorTextEdit_OnMetric((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorTextEdit_InitPainter((TextTranslator__TranslatorTextEdit*)self, (QPainter*)painter);
}

void k_texttranslator__translatortextedit_super_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorTextEdit_SuperInitPainter((TextTranslator__TranslatorTextEdit*)self, (QPainter*)painter);
}

void k_texttranslator__translatortextedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnInitPainter((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_texttranslator__translatortextedit_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorTextEdit_Redirected((TextTranslator__TranslatorTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_texttranslator__translatortextedit_super_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorTextEdit_SuperRedirected((TextTranslator__TranslatorTextEdit*)self, (QPoint*)offset);
}

void k_texttranslator__translatortextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnRedirected((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QPainter* k_texttranslator__translatortextedit_shared_painter(void* self) {
    return TextTranslator__TranslatorTextEdit_SharedPainter((TextTranslator__TranslatorTextEdit*)self);
}

QPainter* k_texttranslator__translatortextedit_super_shared_painter(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperSharedPainter((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnSharedPainter((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_child_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_ChildEvent((TextTranslator__TranslatorTextEdit*)self, (QChildEvent*)event);
}

void k_texttranslator__translatortextedit_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperChildEvent((TextTranslator__TranslatorTextEdit*)self, (QChildEvent*)event);
}

void k_texttranslator__translatortextedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnChildEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_custom_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_CustomEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)event);
}

void k_texttranslator__translatortextedit_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorTextEdit_SuperCustomEvent((TextTranslator__TranslatorTextEdit*)self, (QEvent*)event);
}

void k_texttranslator__translatortextedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnCustomEvent((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorTextEdit_ConnectNotify((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatortextedit_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorTextEdit_SuperConnectNotify((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatortextedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnConnectNotify((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorTextEdit_DisconnectNotify((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatortextedit_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorTextEdit_SuperDisconnectNotify((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatortextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDisconnectNotify((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QTextBlock* k_texttranslator__translatortextedit_first_visible_block(void* self) {
    return TextTranslator__TranslatorTextEdit_FirstVisibleBlock((TextTranslator__TranslatorTextEdit*)self);
}

QTextBlock* k_texttranslator__translatortextedit_super_first_visible_block(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperFirstVisibleBlock((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_first_visible_block(void* self, QTextBlock* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnFirstVisibleBlock((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QPointF* k_texttranslator__translatortextedit_content_offset(void* self) {
    return TextTranslator__TranslatorTextEdit_ContentOffset((TextTranslator__TranslatorTextEdit*)self);
}

QPointF* k_texttranslator__translatortextedit_super_content_offset(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperContentOffset((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_content_offset(void* self, QPointF* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnContentOffset((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QRectF* k_texttranslator__translatortextedit_block_bounding_rect(void* self, void* block) {
    return TextTranslator__TranslatorTextEdit_BlockBoundingRect((TextTranslator__TranslatorTextEdit*)self, (QTextBlock*)block);
}

QRectF* k_texttranslator__translatortextedit_super_block_bounding_rect(void* self, void* block) {
    return TextTranslator__TranslatorTextEdit_SuperBlockBoundingRect((TextTranslator__TranslatorTextEdit*)self, (QTextBlock*)block);
}

void k_texttranslator__translatortextedit_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnBlockBoundingRect((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QRectF* k_texttranslator__translatortextedit_block_bounding_geometry(void* self, void* block) {
    return TextTranslator__TranslatorTextEdit_BlockBoundingGeometry((TextTranslator__TranslatorTextEdit*)self, (QTextBlock*)block);
}

QRectF* k_texttranslator__translatortextedit_super_block_bounding_geometry(void* self, void* block) {
    return TextTranslator__TranslatorTextEdit_SuperBlockBoundingGeometry((TextTranslator__TranslatorTextEdit*)self, (QTextBlock*)block);
}

void k_texttranslator__translatortextedit_on_block_bounding_geometry(void* self, QRectF* (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnBlockBoundingGeometry((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QAbstractTextDocumentLayout__PaintContext* k_texttranslator__translatortextedit_get_paint_context(void* self) {
    return TextTranslator__TranslatorTextEdit_GetPaintContext((TextTranslator__TranslatorTextEdit*)self);
}

QAbstractTextDocumentLayout__PaintContext* k_texttranslator__translatortextedit_super_get_paint_context(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperGetPaintContext((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnGetPaintContext((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_zoom_in_f(void* self, float range) {
    TextTranslator__TranslatorTextEdit_ZoomInF((TextTranslator__TranslatorTextEdit*)self, range);
}

void k_texttranslator__translatortextedit_super_zoom_in_f(void* self, float range) {
    TextTranslator__TranslatorTextEdit_SuperZoomInF((TextTranslator__TranslatorTextEdit*)self, range);
}

void k_texttranslator__translatortextedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    TextTranslator__TranslatorTextEdit_OnZoomInF((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextTranslator__TranslatorTextEdit_SetViewportMargins((TextTranslator__TranslatorTextEdit*)self, left, top, right, bottom);
}

void k_texttranslator__translatortextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    TextTranslator__TranslatorTextEdit_SuperSetViewportMargins((TextTranslator__TranslatorTextEdit*)self, left, top, right, bottom);
}

void k_texttranslator__translatortextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    TextTranslator__TranslatorTextEdit_OnSetViewportMargins((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QMargins* k_texttranslator__translatortextedit_viewport_margins(void* self) {
    return TextTranslator__TranslatorTextEdit_ViewportMargins((TextTranslator__TranslatorTextEdit*)self);
}

QMargins* k_texttranslator__translatortextedit_super_viewport_margins(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperViewportMargins((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnViewportMargins((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_draw_frame(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_DrawFrame((TextTranslator__TranslatorTextEdit*)self, (QPainter*)param1);
}

void k_texttranslator__translatortextedit_super_draw_frame(void* self, void* param1) {
    TextTranslator__TranslatorTextEdit_SuperDrawFrame((TextTranslator__TranslatorTextEdit*)self, (QPainter*)param1);
}

void k_texttranslator__translatortextedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnDrawFrame((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_update_micro_focus(void* self) {
    TextTranslator__TranslatorTextEdit_UpdateMicroFocus((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_super_update_micro_focus(void* self) {
    TextTranslator__TranslatorTextEdit_SuperUpdateMicroFocus((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_update_micro_focus(void* self, void (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnUpdateMicroFocus((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_create(void* self) {
    TextTranslator__TranslatorTextEdit_Create((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_super_create(void* self) {
    TextTranslator__TranslatorTextEdit_SuperCreate((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_create(void* self, void (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnCreate((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_destroy(void* self) {
    TextTranslator__TranslatorTextEdit_Destroy((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_super_destroy(void* self) {
    TextTranslator__TranslatorTextEdit_SuperDestroy((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_destroy(void* self, void (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnDestroy((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_focus_next_child(void* self) {
    return TextTranslator__TranslatorTextEdit_FocusNextChild((TextTranslator__TranslatorTextEdit*)self);
}

bool k_texttranslator__translatortextedit_super_focus_next_child(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperFocusNextChild((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_focus_next_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnFocusNextChild((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_focus_previous_child(void* self) {
    return TextTranslator__TranslatorTextEdit_FocusPreviousChild((TextTranslator__TranslatorTextEdit*)self);
}

bool k_texttranslator__translatortextedit_super_focus_previous_child(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperFocusPreviousChild((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_focus_previous_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnFocusPreviousChild((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatortextedit_sender(void* self) {
    return TextTranslator__TranslatorTextEdit_Sender((TextTranslator__TranslatorTextEdit*)self);
}

QObject* k_texttranslator__translatortextedit_super_sender(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperSender((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnSender((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_sender_signal_index(void* self) {
    return TextTranslator__TranslatorTextEdit_SenderSignalIndex((TextTranslator__TranslatorTextEdit*)self);
}

int32_t k_texttranslator__translatortextedit_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorTextEdit_SuperSenderSignalIndex((TextTranslator__TranslatorTextEdit*)self);
}

void k_texttranslator__translatortextedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorTextEdit_OnSenderSignalIndex((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatortextedit_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorTextEdit_Receivers((TextTranslator__TranslatorTextEdit*)self, signal);
}

int32_t k_texttranslator__translatortextedit_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorTextEdit_SuperReceivers((TextTranslator__TranslatorTextEdit*)self, signal);
}

void k_texttranslator__translatortextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorTextEdit_OnReceivers((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

bool k_texttranslator__translatortextedit_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorTextEdit_IsSignalConnected((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatortextedit_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorTextEdit_SuperIsSignalConnected((TextTranslator__TranslatorTextEdit*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatortextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorTextEdit_OnIsSignalConnected((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

double k_texttranslator__translatortextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorTextEdit_GetDecodedMetricF((TextTranslator__TranslatorTextEdit*)self, metricA, metricB);
}

double k_texttranslator__translatortextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorTextEdit_SuperGetDecodedMetricF((TextTranslator__TranslatorTextEdit*)self, metricA, metricB);
}

void k_texttranslator__translatortextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextTranslator__TranslatorTextEdit_OnGetDecodedMetricF((TextTranslator__TranslatorTextEdit*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatortextedit_delete(void* self) {
    TextTranslator__TranslatorTextEdit_Delete((TextTranslator__TranslatorTextEdit*)(self));
}

TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new(void* parent) {
    return TextTranslator__TranslatorWidget_new((QWidget*)parent);
}

TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new2() {
    return TextTranslator__TranslatorWidget_new2();
}

TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new3(const char* text) {
    return TextTranslator__TranslatorWidget_new3(qstring(text));
}

TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new4(const char* text, void* parent) {
    return TextTranslator__TranslatorWidget_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* k_texttranslator__translatorwidget_meta_object(void* self) {
    return TextTranslator__TranslatorWidget_MetaObject((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorWidget_OnMetaObject((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorwidget_super_meta_object(void* self) {
    return TextTranslator__TranslatorWidget_SuperMetaObject((TextTranslator__TranslatorWidget*)self);
}

void* k_texttranslator__translatorwidget_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorWidget_Metacast((TextTranslator__TranslatorWidget*)self, param1);
}

void k_texttranslator__translatorwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorWidget_OnMetacast((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorwidget_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorWidget_SuperMetacast((TextTranslator__TranslatorWidget*)self, param1);
}

int32_t k_texttranslator__translatorwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorWidget_Metacall((TextTranslator__TranslatorWidget*)self, param1, param2, param3);
}

void k_texttranslator__translatorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorWidget_OnMetacall((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorWidget_SuperMetacall((TextTranslator__TranslatorWidget*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_text_to_translate(void* self, const char* textToTranslate) {
    TextTranslator__TranslatorWidget_SetTextToTranslate((TextTranslator__TranslatorWidget*)self, qstring(textToTranslate));
}

void k_texttranslator__translatorwidget_write_config(void* self) {
    TextTranslator__TranslatorWidget_WriteConfig((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_read_config(void* self) {
    TextTranslator__TranslatorWidget_ReadConfig((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_set_standalone(void* self, bool b) {
    TextTranslator__TranslatorWidget_SetStandalone((TextTranslator__TranslatorWidget*)self, b);
}

void k_texttranslator__translatorwidget_slot_translate(void* self) {
    TextTranslator__TranslatorWidget_SlotTranslate((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_slot_close_widget(void* self) {
    TextTranslator__TranslatorWidget_SlotCloseWidget((TextTranslator__TranslatorWidget*)self);
}

bool k_texttranslator__translatorwidget_event(void* self, void* e) {
    return TextTranslator__TranslatorWidget_Event((TextTranslator__TranslatorWidget*)self, (QEvent*)e);
}

void k_texttranslator__translatorwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_super_event(void* self, void* e) {
    return TextTranslator__TranslatorWidget_SuperEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)e);
}

void k_texttranslator__translatorwidget_tools_was_closed(void* self) {
    TextTranslator__TranslatorWidget_ToolsWasClosed((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_tools_was_closed(void* self, void (*callback)(void*)) {
    TextTranslator__TranslatorWidget_Connect_ToolsWasClosed((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

const char* k_texttranslator__translatorwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_texttranslator__translatorwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_texttranslator__translatorwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_texttranslator__translatorwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_texttranslator__translatorwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_texttranslator__translatorwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_texttranslator__translatorwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_texttranslator__translatorwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_texttranslator__translatorwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_texttranslator__translatorwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_texttranslator__translatorwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_texttranslator__translatorwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_texttranslator__translatorwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_texttranslator__translatorwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_texttranslator__translatorwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_texttranslator__translatorwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_texttranslator__translatorwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_texttranslator__translatorwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_texttranslator__translatorwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_texttranslator__translatorwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_texttranslator__translatorwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_texttranslator__translatorwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_texttranslator__translatorwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_texttranslator__translatorwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_texttranslator__translatorwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_texttranslator__translatorwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_texttranslator__translatorwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_texttranslator__translatorwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_texttranslator__translatorwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_texttranslator__translatorwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_texttranslator__translatorwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_texttranslator__translatorwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_texttranslator__translatorwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_texttranslator__translatorwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_texttranslator__translatorwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_texttranslator__translatorwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_texttranslator__translatorwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_texttranslator__translatorwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_texttranslator__translatorwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_texttranslator__translatorwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_texttranslator__translatorwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_texttranslator__translatorwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_texttranslator__translatorwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_texttranslator__translatorwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_texttranslator__translatorwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_texttranslator__translatorwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_texttranslator__translatorwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_texttranslator__translatorwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_texttranslator__translatorwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_texttranslator__translatorwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_texttranslator__translatorwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_texttranslator__translatorwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_texttranslator__translatorwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_texttranslator__translatorwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_texttranslator__translatorwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_texttranslator__translatorwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_texttranslator__translatorwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_texttranslator__translatorwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_texttranslator__translatorwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_texttranslator__translatorwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_texttranslator__translatorwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_texttranslator__translatorwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_texttranslator__translatorwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_texttranslator__translatorwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_texttranslator__translatorwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_texttranslator__translatorwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_texttranslator__translatorwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_texttranslator__translatorwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_texttranslator__translatorwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_texttranslator__translatorwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_texttranslator__translatorwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_texttranslator__translatorwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_texttranslator__translatorwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_texttranslator__translatorwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_texttranslator__translatorwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_texttranslator__translatorwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_texttranslator__translatorwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_texttranslator__translatorwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_texttranslator__translatorwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_texttranslator__translatorwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_texttranslator__translatorwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_texttranslator__translatorwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_texttranslator__translatorwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_texttranslator__translatorwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_texttranslator__translatorwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_texttranslator__translatorwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_texttranslator__translatorwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_texttranslator__translatorwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_texttranslator__translatorwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_texttranslator__translatorwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_texttranslator__translatorwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_texttranslator__translatorwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_texttranslator__translatorwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_texttranslator__translatorwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_texttranslator__translatorwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_texttranslator__translatorwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_texttranslator__translatorwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_texttranslator__translatorwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_texttranslator__translatorwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_texttranslator__translatorwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_texttranslator__translatorwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_texttranslator__translatorwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_texttranslator__translatorwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_texttranslator__translatorwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_texttranslator__translatorwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_texttranslator__translatorwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_texttranslator__translatorwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_texttranslator__translatorwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatorwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_texttranslator__translatorwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_texttranslator__translatorwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_texttranslator__translatorwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_texttranslator__translatorwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_texttranslator__translatorwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_texttranslator__translatorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_texttranslator__translatorwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_texttranslator__translatorwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_texttranslator__translatorwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_texttranslator__translatorwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_texttranslator__translatorwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_texttranslator__translatorwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_texttranslator__translatorwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_texttranslator__translatorwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_texttranslator__translatorwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_texttranslator__translatorwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_texttranslator__translatorwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_texttranslator__translatorwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_texttranslator__translatorwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_texttranslator__translatorwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_texttranslator__translatorwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_texttranslator__translatorwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_texttranslator__translatorwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texttranslator__translatorwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_texttranslator__translatorwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_texttranslator__translatorwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_texttranslator__translatorwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_texttranslator__translatorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_texttranslator__translatorwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_texttranslator__translatorwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_texttranslator__translatorwidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_texttranslator__translatorwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_texttranslator__translatorwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_texttranslator__translatorwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_texttranslator__translatorwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_texttranslator__translatorwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_texttranslator__translatorwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_texttranslator__translatorwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_texttranslator__translatorwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_texttranslator__translatorwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_texttranslator__translatorwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_texttranslator__translatorwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_texttranslator__translatorwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_texttranslator__translatorwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_texttranslator__translatorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_texttranslator__translatorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_texttranslator__translatorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_texttranslator__translatorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_texttranslator__translatorwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_texttranslator__translatorwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_texttranslator__translatorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_texttranslator__translatorwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_texttranslator__translatorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_texttranslator__translatorwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_texttranslator__translatorwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_texttranslator__translatorwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_texttranslator__translatorwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_texttranslator__translatorwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_texttranslator__translatorwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_texttranslator__translatorwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_texttranslator__translatorwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorwidget_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatorwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_texttranslator__translatorwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_texttranslator__translatorwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_texttranslator__translatorwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_texttranslator__translatorwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_texttranslator__translatorwidget_dev_type(void* self) {
    return TextTranslator__TranslatorWidget_DevType((TextTranslator__TranslatorWidget*)self);
}

int32_t k_texttranslator__translatorwidget_super_dev_type(void* self) {
    return TextTranslator__TranslatorWidget_SuperDevType((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_dev_type(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorWidget_OnDevType((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorWidget_SetVisible((TextTranslator__TranslatorWidget*)self, visible);
}

void k_texttranslator__translatorwidget_super_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorWidget_SuperSetVisible((TextTranslator__TranslatorWidget*)self, visible);
}

void k_texttranslator__translatorwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextTranslator__TranslatorWidget_OnSetVisible((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorwidget_size_hint(void* self) {
    return TextTranslator__TranslatorWidget_SizeHint((TextTranslator__TranslatorWidget*)self);
}

QSize* k_texttranslator__translatorwidget_super_size_hint(void* self) {
    return TextTranslator__TranslatorWidget_SuperSizeHint((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorWidget_OnSizeHint((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorwidget_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorWidget_MinimumSizeHint((TextTranslator__TranslatorWidget*)self);
}

QSize* k_texttranslator__translatorwidget_super_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorWidget_SuperMinimumSizeHint((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorWidget_OnMinimumSizeHint((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorWidget_HeightForWidth((TextTranslator__TranslatorWidget*)self, param1);
}

int32_t k_texttranslator__translatorwidget_super_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorWidget_SuperHeightForWidth((TextTranslator__TranslatorWidget*)self, param1);
}

void k_texttranslator__translatorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextTranslator__TranslatorWidget_OnHeightForWidth((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_has_height_for_width(void* self) {
    return TextTranslator__TranslatorWidget_HasHeightForWidth((TextTranslator__TranslatorWidget*)self);
}

bool k_texttranslator__translatorwidget_super_has_height_for_width(void* self) {
    return TextTranslator__TranslatorWidget_SuperHasHeightForWidth((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    TextTranslator__TranslatorWidget_OnHasHeightForWidth((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_texttranslator__translatorwidget_paint_engine(void* self) {
    return TextTranslator__TranslatorWidget_PaintEngine((TextTranslator__TranslatorWidget*)self);
}

QPaintEngine* k_texttranslator__translatorwidget_super_paint_engine(void* self) {
    return TextTranslator__TranslatorWidget_SuperPaintEngine((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextTranslator__TranslatorWidget_OnPaintEngine((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_MousePressEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_super_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperMousePressEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnMousePressEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_MouseReleaseEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_super_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperMouseReleaseEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnMouseReleaseEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_MouseDoubleClickEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_super_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnMouseDoubleClickEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_MouseMoveEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_super_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperMouseMoveEvent((TextTranslator__TranslatorWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnMouseMoveEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_WheelEvent((TextTranslator__TranslatorWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorwidget_super_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperWheelEvent((TextTranslator__TranslatorWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnWheelEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_KeyPressEvent((TextTranslator__TranslatorWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorwidget_super_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperKeyPressEvent((TextTranslator__TranslatorWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnKeyPressEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_KeyReleaseEvent((TextTranslator__TranslatorWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorwidget_super_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperKeyReleaseEvent((TextTranslator__TranslatorWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnKeyReleaseEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_FocusInEvent((TextTranslator__TranslatorWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorwidget_super_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperFocusInEvent((TextTranslator__TranslatorWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnFocusInEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_FocusOutEvent((TextTranslator__TranslatorWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorwidget_super_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperFocusOutEvent((TextTranslator__TranslatorWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnFocusOutEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_enter_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_EnterEvent((TextTranslator__TranslatorWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorwidget_super_enter_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperEnterEvent((TextTranslator__TranslatorWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnEnterEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_leave_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_LeaveEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorwidget_super_leave_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperLeaveEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnLeaveEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_paint_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_PaintEvent((TextTranslator__TranslatorWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorwidget_super_paint_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperPaintEvent((TextTranslator__TranslatorWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnPaintEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_MoveEvent((TextTranslator__TranslatorWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorwidget_super_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperMoveEvent((TextTranslator__TranslatorWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnMoveEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_resize_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_ResizeEvent((TextTranslator__TranslatorWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorwidget_super_resize_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperResizeEvent((TextTranslator__TranslatorWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnResizeEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_close_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_CloseEvent((TextTranslator__TranslatorWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorwidget_super_close_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperCloseEvent((TextTranslator__TranslatorWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnCloseEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_ContextMenuEvent((TextTranslator__TranslatorWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorwidget_super_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperContextMenuEvent((TextTranslator__TranslatorWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnContextMenuEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_TabletEvent((TextTranslator__TranslatorWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorwidget_super_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperTabletEvent((TextTranslator__TranslatorWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnTabletEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_action_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_ActionEvent((TextTranslator__TranslatorWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorwidget_super_action_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperActionEvent((TextTranslator__TranslatorWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnActionEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_DragEnterEvent((TextTranslator__TranslatorWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorwidget_super_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperDragEnterEvent((TextTranslator__TranslatorWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnDragEnterEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_DragMoveEvent((TextTranslator__TranslatorWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorwidget_super_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperDragMoveEvent((TextTranslator__TranslatorWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnDragMoveEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_DragLeaveEvent((TextTranslator__TranslatorWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorwidget_super_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperDragLeaveEvent((TextTranslator__TranslatorWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnDragLeaveEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_drop_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_DropEvent((TextTranslator__TranslatorWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorwidget_super_drop_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperDropEvent((TextTranslator__TranslatorWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnDropEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_show_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_ShowEvent((TextTranslator__TranslatorWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorwidget_super_show_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperShowEvent((TextTranslator__TranslatorWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnShowEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_hide_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_HideEvent((TextTranslator__TranslatorWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorwidget_super_hide_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperHideEvent((TextTranslator__TranslatorWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnHideEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorWidget_NativeEvent((TextTranslator__TranslatorWidget*)self, qstring(eventType), message, result);
}

bool k_texttranslator__translatorwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorWidget_SuperNativeEvent((TextTranslator__TranslatorWidget*)self, qstring(eventType), message, result);
}

void k_texttranslator__translatorwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextTranslator__TranslatorWidget_OnNativeEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_change_event(void* self, void* param1) {
    TextTranslator__TranslatorWidget_ChangeEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorwidget_super_change_event(void* self, void* param1) {
    TextTranslator__TranslatorWidget_SuperChangeEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnChangeEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorWidget_Metric((TextTranslator__TranslatorWidget*)self, param1);
}

int32_t k_texttranslator__translatorwidget_super_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorWidget_SuperMetric((TextTranslator__TranslatorWidget*)self, param1);
}

void k_texttranslator__translatorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorWidget_OnMetric((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorWidget_InitPainter((TextTranslator__TranslatorWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorwidget_super_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorWidget_SuperInitPainter((TextTranslator__TranslatorWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnInitPainter((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_texttranslator__translatorwidget_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorWidget_Redirected((TextTranslator__TranslatorWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_texttranslator__translatorwidget_super_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorWidget_SuperRedirected((TextTranslator__TranslatorWidget*)self, (QPoint*)offset);
}

void k_texttranslator__translatorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnRedirected((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QPainter* k_texttranslator__translatorwidget_shared_painter(void* self) {
    return TextTranslator__TranslatorWidget_SharedPainter((TextTranslator__TranslatorWidget*)self);
}

QPainter* k_texttranslator__translatorwidget_super_shared_painter(void* self) {
    return TextTranslator__TranslatorWidget_SuperSharedPainter((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextTranslator__TranslatorWidget_OnSharedPainter((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorWidget_InputMethodEvent((TextTranslator__TranslatorWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorwidget_super_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorWidget_SuperInputMethodEvent((TextTranslator__TranslatorWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnInputMethodEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QVariant* k_texttranslator__translatorwidget_input_method_query(void* self, int32_t param1) {
    return TextTranslator__TranslatorWidget_InputMethodQuery((TextTranslator__TranslatorWidget*)self, param1);
}

QVariant* k_texttranslator__translatorwidget_super_input_method_query(void* self, int32_t param1) {
    return TextTranslator__TranslatorWidget_SuperInputMethodQuery((TextTranslator__TranslatorWidget*)self, param1);
}

void k_texttranslator__translatorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorWidget_OnInputMethodQuery((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorWidget_FocusNextPrevChild((TextTranslator__TranslatorWidget*)self, next);
}

bool k_texttranslator__translatorwidget_super_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorWidget_SuperFocusNextPrevChild((TextTranslator__TranslatorWidget*)self, next);
}

void k_texttranslator__translatorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextTranslator__TranslatorWidget_OnFocusNextPrevChild((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorWidget_EventFilter((TextTranslator__TranslatorWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorwidget_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorWidget_SuperEventFilter((TextTranslator__TranslatorWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorWidget_OnEventFilter((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_timer_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_TimerEvent((TextTranslator__TranslatorWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorwidget_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperTimerEvent((TextTranslator__TranslatorWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnTimerEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_child_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_ChildEvent((TextTranslator__TranslatorWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorwidget_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperChildEvent((TextTranslator__TranslatorWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnChildEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_custom_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_CustomEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorwidget_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorWidget_SuperCustomEvent((TextTranslator__TranslatorWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnCustomEvent((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorWidget_ConnectNotify((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorwidget_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorWidget_SuperConnectNotify((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnConnectNotify((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorWidget_DisconnectNotify((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorwidget_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorWidget_SuperDisconnectNotify((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnDisconnectNotify((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_update_micro_focus(void* self) {
    TextTranslator__TranslatorWidget_UpdateMicroFocus((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_super_update_micro_focus(void* self) {
    TextTranslator__TranslatorWidget_SuperUpdateMicroFocus((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_update_micro_focus(void* self, void (*callback)()) {
    TextTranslator__TranslatorWidget_OnUpdateMicroFocus((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_create(void* self) {
    TextTranslator__TranslatorWidget_Create((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_super_create(void* self) {
    TextTranslator__TranslatorWidget_SuperCreate((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_create(void* self, void (*callback)()) {
    TextTranslator__TranslatorWidget_OnCreate((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_destroy(void* self) {
    TextTranslator__TranslatorWidget_Destroy((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_super_destroy(void* self) {
    TextTranslator__TranslatorWidget_SuperDestroy((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_destroy(void* self, void (*callback)()) {
    TextTranslator__TranslatorWidget_OnDestroy((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_focus_next_child(void* self) {
    return TextTranslator__TranslatorWidget_FocusNextChild((TextTranslator__TranslatorWidget*)self);
}

bool k_texttranslator__translatorwidget_super_focus_next_child(void* self) {
    return TextTranslator__TranslatorWidget_SuperFocusNextChild((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_focus_next_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorWidget_OnFocusNextChild((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_focus_previous_child(void* self) {
    return TextTranslator__TranslatorWidget_FocusPreviousChild((TextTranslator__TranslatorWidget*)self);
}

bool k_texttranslator__translatorwidget_super_focus_previous_child(void* self) {
    return TextTranslator__TranslatorWidget_SuperFocusPreviousChild((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorWidget_OnFocusPreviousChild((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorwidget_sender(void* self) {
    return TextTranslator__TranslatorWidget_Sender((TextTranslator__TranslatorWidget*)self);
}

QObject* k_texttranslator__translatorwidget_super_sender(void* self) {
    return TextTranslator__TranslatorWidget_SuperSender((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorWidget_OnSender((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_sender_signal_index(void* self) {
    return TextTranslator__TranslatorWidget_SenderSignalIndex((TextTranslator__TranslatorWidget*)self);
}

int32_t k_texttranslator__translatorwidget_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorWidget_SuperSenderSignalIndex((TextTranslator__TranslatorWidget*)self);
}

void k_texttranslator__translatorwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorWidget_OnSenderSignalIndex((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorwidget_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorWidget_Receivers((TextTranslator__TranslatorWidget*)self, signal);
}

int32_t k_texttranslator__translatorwidget_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorWidget_SuperReceivers((TextTranslator__TranslatorWidget*)self, signal);
}

void k_texttranslator__translatorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorWidget_OnReceivers((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorwidget_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorWidget_IsSignalConnected((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatorwidget_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorWidget_SuperIsSignalConnected((TextTranslator__TranslatorWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorWidget_OnIsSignalConnected((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

double k_texttranslator__translatorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorWidget_GetDecodedMetricF((TextTranslator__TranslatorWidget*)self, metricA, metricB);
}

double k_texttranslator__translatorwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorWidget_SuperGetDecodedMetricF((TextTranslator__TranslatorWidget*)self, metricA, metricB);
}

void k_texttranslator__translatorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextTranslator__TranslatorWidget_OnGetDecodedMetricF((TextTranslator__TranslatorWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorwidget_delete(void* self) {
    TextTranslator__TranslatorWidget_Delete((TextTranslator__TranslatorWidget*)(self));
}
