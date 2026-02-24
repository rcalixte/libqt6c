#include "libqabstractscrollarea.hpp"
#include "libqabstracttextdocumentlayout.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqmargins.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextedit.hpp"
#include "libqtextlayout.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqplaintextedit.hpp"
#include "libqplaintextedit.h"

QPlainTextEdit* q_plaintextedit_new(void* parent) {
    return QPlainTextEdit_new((QWidget*)parent);
}

QPlainTextEdit* q_plaintextedit_new2() {
    return QPlainTextEdit_new2();
}

QPlainTextEdit* q_plaintextedit_new3(const char* text) {
    return QPlainTextEdit_new3(qstring(text));
}

QPlainTextEdit* q_plaintextedit_new4(const char* text, void* parent) {
    return QPlainTextEdit_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* q_plaintextedit_meta_object(void* self) {
    return QPlainTextEdit_MetaObject((QPlainTextEdit*)self);
}

void q_plaintextedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlainTextEdit_OnMetaObject((QPlainTextEdit*)self, (intptr_t)callback);
}

const QMetaObject* q_plaintextedit_super_meta_object(void* self) {
    return QPlainTextEdit_SuperMetaObject((QPlainTextEdit*)self);
}

void* q_plaintextedit_metacast(void* self, const char* param1) {
    return QPlainTextEdit_Metacast((QPlainTextEdit*)self, param1);
}

void q_plaintextedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlainTextEdit_OnMetacast((QPlainTextEdit*)self, (intptr_t)callback);
}

void* q_plaintextedit_super_metacast(void* self, const char* param1) {
    return QPlainTextEdit_SuperMetacast((QPlainTextEdit*)self, param1);
}

int32_t q_plaintextedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlainTextEdit_Metacall((QPlainTextEdit*)self, param1, param2, param3);
}

void q_plaintextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlainTextEdit_OnMetacall((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlainTextEdit_SuperMetacall((QPlainTextEdit*)self, param1, param2, param3);
}

const char* q_plaintextedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_document(void* self, void* document) {
    QPlainTextEdit_SetDocument((QPlainTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* q_plaintextedit_document(void* self) {
    return QPlainTextEdit_Document((QPlainTextEdit*)self);
}

void q_plaintextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QPlainTextEdit_SetPlaceholderText((QPlainTextEdit*)self, qstring(placeholderText));
}

const char* q_plaintextedit_placeholder_text(void* self) {
    libqt_string _str = QPlainTextEdit_PlaceholderText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_SetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* q_plaintextedit_text_cursor(void* self) {
    return QPlainTextEdit_TextCursor((QPlainTextEdit*)self);
}

bool q_plaintextedit_is_read_only(void* self) {
    return QPlainTextEdit_IsReadOnly((QPlainTextEdit*)self);
}

void q_plaintextedit_set_read_only(void* self, bool ro) {
    QPlainTextEdit_SetReadOnly((QPlainTextEdit*)self, ro);
}

void q_plaintextedit_set_text_interaction_flags(void* self, int32_t flags) {
    QPlainTextEdit_SetTextInteractionFlags((QPlainTextEdit*)self, flags);
}

int32_t q_plaintextedit_text_interaction_flags(void* self) {
    return QPlainTextEdit_TextInteractionFlags((QPlainTextEdit*)self);
}

void q_plaintextedit_merge_current_char_format(void* self, void* modifier) {
    QPlainTextEdit_MergeCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)modifier);
}

void q_plaintextedit_set_current_char_format(void* self, void* format) {
    QPlainTextEdit_SetCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* q_plaintextedit_current_char_format(void* self) {
    return QPlainTextEdit_CurrentCharFormat((QPlainTextEdit*)self);
}

bool q_plaintextedit_tab_changes_focus(void* self) {
    return QPlainTextEdit_TabChangesFocus((QPlainTextEdit*)self);
}

void q_plaintextedit_set_tab_changes_focus(void* self, bool b) {
    QPlainTextEdit_SetTabChangesFocus((QPlainTextEdit*)self, b);
}

void q_plaintextedit_set_document_title(void* self, const char* title) {
    QPlainTextEdit_SetDocumentTitle((QPlainTextEdit*)self, qstring(title));
}

const char* q_plaintextedit_document_title(void* self) {
    libqt_string _str = QPlainTextEdit_DocumentTitle((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_plaintextedit_is_undo_redo_enabled(void* self) {
    return QPlainTextEdit_IsUndoRedoEnabled((QPlainTextEdit*)self);
}

void q_plaintextedit_set_undo_redo_enabled(void* self, bool enable) {
    QPlainTextEdit_SetUndoRedoEnabled((QPlainTextEdit*)self, enable);
}

void q_plaintextedit_set_maximum_block_count(void* self, int maximum) {
    QPlainTextEdit_SetMaximumBlockCount((QPlainTextEdit*)self, maximum);
}

int32_t q_plaintextedit_maximum_block_count(void* self) {
    return QPlainTextEdit_MaximumBlockCount((QPlainTextEdit*)self);
}

int32_t q_plaintextedit_line_wrap_mode(void* self) {
    return QPlainTextEdit_LineWrapMode((QPlainTextEdit*)self);
}

void q_plaintextedit_set_line_wrap_mode(void* self, int32_t mode) {
    QPlainTextEdit_SetLineWrapMode((QPlainTextEdit*)self, mode);
}

int32_t q_plaintextedit_word_wrap_mode(void* self) {
    return QPlainTextEdit_WordWrapMode((QPlainTextEdit*)self);
}

void q_plaintextedit_set_word_wrap_mode(void* self, int32_t policy) {
    QPlainTextEdit_SetWordWrapMode((QPlainTextEdit*)self, policy);
}

void q_plaintextedit_set_background_visible(void* self, bool visible) {
    QPlainTextEdit_SetBackgroundVisible((QPlainTextEdit*)self, visible);
}

bool q_plaintextedit_background_visible(void* self) {
    return QPlainTextEdit_BackgroundVisible((QPlainTextEdit*)self);
}

void q_plaintextedit_set_center_on_scroll(void* self, bool enabled) {
    QPlainTextEdit_SetCenterOnScroll((QPlainTextEdit*)self, enabled);
}

bool q_plaintextedit_center_on_scroll(void* self) {
    return QPlainTextEdit_CenterOnScroll((QPlainTextEdit*)self);
}

bool q_plaintextedit_find(void* self, const char* exp) {
    return QPlainTextEdit_Find((QPlainTextEdit*)self, qstring(exp));
}

bool q_plaintextedit_find2(void* self, void* exp) {
    return QPlainTextEdit_Find2((QPlainTextEdit*)self, (QRegularExpression*)exp);
}

const char* q_plaintextedit_to_plain_text(void* self) {
    libqt_string _str = QPlainTextEdit_ToPlainText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_ensure_cursor_visible(void* self) {
    QPlainTextEdit_EnsureCursorVisible((QPlainTextEdit*)self);
}

QVariant* q_plaintextedit_load_resource(void* self, int type, void* name) {
    return QPlainTextEdit_LoadResource((QPlainTextEdit*)self, type, (QUrl*)name);
}

void q_plaintextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*)) {
    QPlainTextEdit_OnLoadResource((QPlainTextEdit*)self, (intptr_t)callback);
}

QVariant* q_plaintextedit_super_load_resource(void* self, int type, void* name) {
    return QPlainTextEdit_SuperLoadResource((QPlainTextEdit*)self, type, (QUrl*)name);
}

QMenu* q_plaintextedit_create_standard_context_menu(void* self) {
    return QPlainTextEdit_CreateStandardContextMenu((QPlainTextEdit*)self);
}

QMenu* q_plaintextedit_create_standard_context_menu2(void* self, void* position) {
    return QPlainTextEdit_CreateStandardContextMenu2((QPlainTextEdit*)self, (QPoint*)position);
}

QTextCursor* q_plaintextedit_cursor_for_position(void* self, void* pos) {
    return QPlainTextEdit_CursorForPosition((QPlainTextEdit*)self, (QPoint*)pos);
}

QRect* q_plaintextedit_cursor_rect(void* self, void* cursor) {
    return QPlainTextEdit_CursorRect((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QRect* q_plaintextedit_cursor_rect2(void* self) {
    return QPlainTextEdit_CursorRect2((QPlainTextEdit*)self);
}

const char* q_plaintextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QPlainTextEdit_AnchorAt((QPlainTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_plaintextedit_overwrite_mode(void* self) {
    return QPlainTextEdit_OverwriteMode((QPlainTextEdit*)self);
}

void q_plaintextedit_set_overwrite_mode(void* self, bool overwrite) {
    QPlainTextEdit_SetOverwriteMode((QPlainTextEdit*)self, overwrite);
}

double q_plaintextedit_tab_stop_distance(void* self) {
    return QPlainTextEdit_TabStopDistance((QPlainTextEdit*)self);
}

void q_plaintextedit_set_tab_stop_distance(void* self, double distance) {
    QPlainTextEdit_SetTabStopDistance((QPlainTextEdit*)self, distance);
}

int32_t q_plaintextedit_cursor_width(void* self) {
    return QPlainTextEdit_CursorWidth((QPlainTextEdit*)self);
}

void q_plaintextedit_set_cursor_width(void* self, int width) {
    QPlainTextEdit_SetCursorWidth((QPlainTextEdit*)self, width);
}

void q_plaintextedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QPlainTextEdit_SetExtraSelections((QPlainTextEdit*)self, selections);
}

libqt_list /* of QTextEdit__ExtraSelection* */ q_plaintextedit_extra_selections(void* self) {
    libqt_list _arr = QPlainTextEdit_ExtraSelections((QPlainTextEdit*)self);
    return _arr;
}

void q_plaintextedit_move_cursor(void* self, int32_t operation) {
    QPlainTextEdit_MoveCursor((QPlainTextEdit*)self, operation);
}

bool q_plaintextedit_can_paste(void* self) {
    return QPlainTextEdit_CanPaste((QPlainTextEdit*)self);
}

void q_plaintextedit_print(void* self, void* printer) {
    QPlainTextEdit_Print((QPlainTextEdit*)self, (QPagedPaintDevice*)printer);
}

int32_t q_plaintextedit_block_count(void* self) {
    return QPlainTextEdit_BlockCount((QPlainTextEdit*)self);
}

QVariant* q_plaintextedit_input_method_query(void* self, int32_t property) {
    return QPlainTextEdit_InputMethodQuery((QPlainTextEdit*)self, property);
}

void q_plaintextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QPlainTextEdit_OnInputMethodQuery((QPlainTextEdit*)self, (intptr_t)callback);
}

QVariant* q_plaintextedit_super_input_method_query(void* self, int32_t property) {
    return QPlainTextEdit_SuperInputMethodQuery((QPlainTextEdit*)self, property);
}

QVariant* q_plaintextedit_input_method_query2(void* self, int32_t query, void* argument) {
    return QPlainTextEdit_InputMethodQuery2((QPlainTextEdit*)self, query, (QVariant*)argument);
}

void q_plaintextedit_set_plain_text(void* self, const char* text) {
    QPlainTextEdit_SetPlainText((QPlainTextEdit*)self, qstring(text));
}

void q_plaintextedit_cut(void* self) {
    QPlainTextEdit_Cut((QPlainTextEdit*)self);
}

void q_plaintextedit_copy(void* self) {
    QPlainTextEdit_Copy((QPlainTextEdit*)self);
}

void q_plaintextedit_paste(void* self) {
    QPlainTextEdit_Paste((QPlainTextEdit*)self);
}

void q_plaintextedit_undo(void* self) {
    QPlainTextEdit_Undo((QPlainTextEdit*)self);
}

void q_plaintextedit_redo(void* self) {
    QPlainTextEdit_Redo((QPlainTextEdit*)self);
}

void q_plaintextedit_clear(void* self) {
    QPlainTextEdit_Clear((QPlainTextEdit*)self);
}

void q_plaintextedit_select_all(void* self) {
    QPlainTextEdit_SelectAll((QPlainTextEdit*)self);
}

void q_plaintextedit_insert_plain_text(void* self, const char* text) {
    QPlainTextEdit_InsertPlainText((QPlainTextEdit*)self, qstring(text));
}

void q_plaintextedit_append_plain_text(void* self, const char* text) {
    QPlainTextEdit_AppendPlainText((QPlainTextEdit*)self, qstring(text));
}

void q_plaintextedit_append_html(void* self, const char* html) {
    QPlainTextEdit_AppendHtml((QPlainTextEdit*)self, qstring(html));
}

void q_plaintextedit_center_cursor(void* self) {
    QPlainTextEdit_CenterCursor((QPlainTextEdit*)self);
}

void q_plaintextedit_zoom_in(void* self) {
    QPlainTextEdit_ZoomIn((QPlainTextEdit*)self);
}

void q_plaintextedit_zoom_out(void* self) {
    QPlainTextEdit_ZoomOut((QPlainTextEdit*)self);
}

void q_plaintextedit_text_changed(void* self) {
    QPlainTextEdit_TextChanged((QPlainTextEdit*)self);
}

void q_plaintextedit_on_text_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_TextChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_undo_available(void* self, bool b) {
    QPlainTextEdit_UndoAvailable((QPlainTextEdit*)self, b);
}

void q_plaintextedit_on_undo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_UndoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_redo_available(void* self, bool b) {
    QPlainTextEdit_RedoAvailable((QPlainTextEdit*)self, b);
}

void q_plaintextedit_on_redo_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_RedoAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_copy_available(void* self, bool b) {
    QPlainTextEdit_CopyAvailable((QPlainTextEdit*)self, b);
}

void q_plaintextedit_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_CopyAvailable((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_selection_changed(void* self) {
    QPlainTextEdit_SelectionChanged((QPlainTextEdit*)self);
}

void q_plaintextedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_SelectionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_cursor_position_changed(void* self) {
    QPlainTextEdit_CursorPositionChanged((QPlainTextEdit*)self);
}

void q_plaintextedit_on_cursor_position_changed(void* self, void (*callback)(void*)) {
    QPlainTextEdit_Connect_CursorPositionChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_update_request(void* self, void* rect, int dy) {
    QPlainTextEdit_UpdateRequest((QPlainTextEdit*)self, (QRect*)rect, dy);
}

void q_plaintextedit_on_update_request(void* self, void (*callback)(void*, void*, int)) {
    QPlainTextEdit_Connect_UpdateRequest((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_block_count_changed(void* self, int newBlockCount) {
    QPlainTextEdit_BlockCountChanged((QPlainTextEdit*)self, newBlockCount);
}

void q_plaintextedit_on_block_count_changed(void* self, void (*callback)(void*, int)) {
    QPlainTextEdit_Connect_BlockCountChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_modification_changed(void* self, bool param1) {
    QPlainTextEdit_ModificationChanged((QPlainTextEdit*)self, param1);
}

void q_plaintextedit_on_modification_changed(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_Connect_ModificationChanged((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_event(void* self, void* e) {
    return QPlainTextEdit_Event((QPlainTextEdit*)self, (QEvent*)e);
}

void q_plaintextedit_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlainTextEdit_OnEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_super_event(void* self, void* e) {
    return QPlainTextEdit_SuperEvent((QPlainTextEdit*)self, (QEvent*)e);
}

void q_plaintextedit_timer_event(void* self, void* e) {
    QPlainTextEdit_TimerEvent((QPlainTextEdit*)self, (QTimerEvent*)e);
}

void q_plaintextedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnTimerEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_timer_event(void* self, void* e) {
    QPlainTextEdit_SuperTimerEvent((QPlainTextEdit*)self, (QTimerEvent*)e);
}

void q_plaintextedit_key_press_event(void* self, void* e) {
    QPlainTextEdit_KeyPressEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

void q_plaintextedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnKeyPressEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_key_press_event(void* self, void* e) {
    QPlainTextEdit_SuperKeyPressEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

void q_plaintextedit_key_release_event(void* self, void* e) {
    QPlainTextEdit_KeyReleaseEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

void q_plaintextedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnKeyReleaseEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_key_release_event(void* self, void* e) {
    QPlainTextEdit_SuperKeyReleaseEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

void q_plaintextedit_resize_event(void* self, void* e) {
    QPlainTextEdit_ResizeEvent((QPlainTextEdit*)self, (QResizeEvent*)e);
}

void q_plaintextedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnResizeEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_resize_event(void* self, void* e) {
    QPlainTextEdit_SuperResizeEvent((QPlainTextEdit*)self, (QResizeEvent*)e);
}

void q_plaintextedit_paint_event(void* self, void* e) {
    QPlainTextEdit_PaintEvent((QPlainTextEdit*)self, (QPaintEvent*)e);
}

void q_plaintextedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnPaintEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_paint_event(void* self, void* e) {
    QPlainTextEdit_SuperPaintEvent((QPlainTextEdit*)self, (QPaintEvent*)e);
}

void q_plaintextedit_mouse_press_event(void* self, void* e) {
    QPlainTextEdit_MousePressEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnMousePressEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_mouse_press_event(void* self, void* e) {
    QPlainTextEdit_SuperMousePressEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_mouse_move_event(void* self, void* e) {
    QPlainTextEdit_MouseMoveEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnMouseMoveEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_mouse_move_event(void* self, void* e) {
    QPlainTextEdit_SuperMouseMoveEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_mouse_release_event(void* self, void* e) {
    QPlainTextEdit_MouseReleaseEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnMouseReleaseEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_mouse_release_event(void* self, void* e) {
    QPlainTextEdit_SuperMouseReleaseEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_mouse_double_click_event(void* self, void* e) {
    QPlainTextEdit_MouseDoubleClickEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

void q_plaintextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnMouseDoubleClickEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_mouse_double_click_event(void* self, void* e) {
    QPlainTextEdit_SuperMouseDoubleClickEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

bool q_plaintextedit_focus_next_prev_child(void* self, bool next) {
    return QPlainTextEdit_FocusNextPrevChild((QPlainTextEdit*)self, next);
}

void q_plaintextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPlainTextEdit_OnFocusNextPrevChild((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_super_focus_next_prev_child(void* self, bool next) {
    return QPlainTextEdit_SuperFocusNextPrevChild((QPlainTextEdit*)self, next);
}

void q_plaintextedit_context_menu_event(void* self, void* e) {
    QPlainTextEdit_ContextMenuEvent((QPlainTextEdit*)self, (QContextMenuEvent*)e);
}

void q_plaintextedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnContextMenuEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_context_menu_event(void* self, void* e) {
    QPlainTextEdit_SuperContextMenuEvent((QPlainTextEdit*)self, (QContextMenuEvent*)e);
}

void q_plaintextedit_drag_enter_event(void* self, void* e) {
    QPlainTextEdit_DragEnterEvent((QPlainTextEdit*)self, (QDragEnterEvent*)e);
}

void q_plaintextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDragEnterEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_drag_enter_event(void* self, void* e) {
    QPlainTextEdit_SuperDragEnterEvent((QPlainTextEdit*)self, (QDragEnterEvent*)e);
}

void q_plaintextedit_drag_leave_event(void* self, void* e) {
    QPlainTextEdit_DragLeaveEvent((QPlainTextEdit*)self, (QDragLeaveEvent*)e);
}

void q_plaintextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDragLeaveEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_drag_leave_event(void* self, void* e) {
    QPlainTextEdit_SuperDragLeaveEvent((QPlainTextEdit*)self, (QDragLeaveEvent*)e);
}

void q_plaintextedit_drag_move_event(void* self, void* e) {
    QPlainTextEdit_DragMoveEvent((QPlainTextEdit*)self, (QDragMoveEvent*)e);
}

void q_plaintextedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDragMoveEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_drag_move_event(void* self, void* e) {
    QPlainTextEdit_SuperDragMoveEvent((QPlainTextEdit*)self, (QDragMoveEvent*)e);
}

void q_plaintextedit_drop_event(void* self, void* e) {
    QPlainTextEdit_DropEvent((QPlainTextEdit*)self, (QDropEvent*)e);
}

void q_plaintextedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDropEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_drop_event(void* self, void* e) {
    QPlainTextEdit_SuperDropEvent((QPlainTextEdit*)self, (QDropEvent*)e);
}

void q_plaintextedit_focus_in_event(void* self, void* e) {
    QPlainTextEdit_FocusInEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

void q_plaintextedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnFocusInEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_focus_in_event(void* self, void* e) {
    QPlainTextEdit_SuperFocusInEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

void q_plaintextedit_focus_out_event(void* self, void* e) {
    QPlainTextEdit_FocusOutEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

void q_plaintextedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnFocusOutEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_focus_out_event(void* self, void* e) {
    QPlainTextEdit_SuperFocusOutEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

void q_plaintextedit_show_event(void* self, void* param1) {
    QPlainTextEdit_ShowEvent((QPlainTextEdit*)self, (QShowEvent*)param1);
}

void q_plaintextedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnShowEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_show_event(void* self, void* param1) {
    QPlainTextEdit_SuperShowEvent((QPlainTextEdit*)self, (QShowEvent*)param1);
}

void q_plaintextedit_change_event(void* self, void* e) {
    QPlainTextEdit_ChangeEvent((QPlainTextEdit*)self, (QEvent*)e);
}

void q_plaintextedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnChangeEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_change_event(void* self, void* e) {
    QPlainTextEdit_SuperChangeEvent((QPlainTextEdit*)self, (QEvent*)e);
}

void q_plaintextedit_wheel_event(void* self, void* e) {
    QPlainTextEdit_WheelEvent((QPlainTextEdit*)self, (QWheelEvent*)e);
}

void q_plaintextedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnWheelEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_wheel_event(void* self, void* e) {
    QPlainTextEdit_SuperWheelEvent((QPlainTextEdit*)self, (QWheelEvent*)e);
}

QMimeData* q_plaintextedit_create_mime_data_from_selection(void* self) {
    return QPlainTextEdit_CreateMimeDataFromSelection((QPlainTextEdit*)self);
}

void q_plaintextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)()) {
    QPlainTextEdit_OnCreateMimeDataFromSelection((QPlainTextEdit*)self, (intptr_t)callback);
}

QMimeData* q_plaintextedit_super_create_mime_data_from_selection(void* self) {
    return QPlainTextEdit_SuperCreateMimeDataFromSelection((QPlainTextEdit*)self);
}

bool q_plaintextedit_can_insert_from_mime_data(void* self, void* source) {
    return QPlainTextEdit_CanInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

void q_plaintextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*)) {
    QPlainTextEdit_OnCanInsertFromMimeData((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_super_can_insert_from_mime_data(void* self, void* source) {
    return QPlainTextEdit_SuperCanInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

void q_plaintextedit_insert_from_mime_data(void* self, void* source) {
    QPlainTextEdit_InsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

void q_plaintextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnInsertFromMimeData((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_insert_from_mime_data(void* self, void* source) {
    QPlainTextEdit_SuperInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

void q_plaintextedit_input_method_event(void* self, void* param1) {
    QPlainTextEdit_InputMethodEvent((QPlainTextEdit*)self, (QInputMethodEvent*)param1);
}

void q_plaintextedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnInputMethodEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_input_method_event(void* self, void* param1) {
    QPlainTextEdit_SuperInputMethodEvent((QPlainTextEdit*)self, (QInputMethodEvent*)param1);
}

void q_plaintextedit_scroll_contents_by(void* self, int dx, int dy) {
    QPlainTextEdit_ScrollContentsBy((QPlainTextEdit*)self, dx, dy);
}

void q_plaintextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QPlainTextEdit_OnScrollContentsBy((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_scroll_contents_by(void* self, int dx, int dy) {
    QPlainTextEdit_SuperScrollContentsBy((QPlainTextEdit*)self, dx, dy);
}

void q_plaintextedit_do_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_DoSetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

void q_plaintextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDoSetTextCursor((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_do_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_SuperDoSetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

QTextBlock* q_plaintextedit_first_visible_block(void* self) {
    return QPlainTextEdit_FirstVisibleBlock((QPlainTextEdit*)self);
}

void q_plaintextedit_on_first_visible_block(void* self, QTextBlock* (*callback)()) {
    QPlainTextEdit_OnFirstVisibleBlock((QPlainTextEdit*)self, (intptr_t)callback);
}

QTextBlock* q_plaintextedit_super_first_visible_block(void* self) {
    return QPlainTextEdit_SuperFirstVisibleBlock((QPlainTextEdit*)self);
}

QPointF* q_plaintextedit_content_offset(void* self) {
    return QPlainTextEdit_ContentOffset((QPlainTextEdit*)self);
}

void q_plaintextedit_on_content_offset(void* self, QPointF* (*callback)()) {
    QPlainTextEdit_OnContentOffset((QPlainTextEdit*)self, (intptr_t)callback);
}

QPointF* q_plaintextedit_super_content_offset(void* self) {
    return QPlainTextEdit_SuperContentOffset((QPlainTextEdit*)self);
}

QRectF* q_plaintextedit_block_bounding_rect(void* self, void* block) {
    return QPlainTextEdit_BlockBoundingRect((QPlainTextEdit*)self, (QTextBlock*)block);
}

void q_plaintextedit_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    QPlainTextEdit_OnBlockBoundingRect((QPlainTextEdit*)self, (intptr_t)callback);
}

QRectF* q_plaintextedit_super_block_bounding_rect(void* self, void* block) {
    return QPlainTextEdit_SuperBlockBoundingRect((QPlainTextEdit*)self, (QTextBlock*)block);
}

QRectF* q_plaintextedit_block_bounding_geometry(void* self, void* block) {
    return QPlainTextEdit_BlockBoundingGeometry((QPlainTextEdit*)self, (QTextBlock*)block);
}

void q_plaintextedit_on_block_bounding_geometry(void* self, QRectF* (*callback)(void*, void*)) {
    QPlainTextEdit_OnBlockBoundingGeometry((QPlainTextEdit*)self, (intptr_t)callback);
}

QRectF* q_plaintextedit_super_block_bounding_geometry(void* self, void* block) {
    return QPlainTextEdit_SuperBlockBoundingGeometry((QPlainTextEdit*)self, (QTextBlock*)block);
}

QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_get_paint_context(void* self) {
    return QPlainTextEdit_GetPaintContext((QPlainTextEdit*)self);
}

void q_plaintextedit_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*callback)()) {
    QPlainTextEdit_OnGetPaintContext((QPlainTextEdit*)self, (intptr_t)callback);
}

QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_super_get_paint_context(void* self) {
    return QPlainTextEdit_SuperGetPaintContext((QPlainTextEdit*)self);
}

void q_plaintextedit_zoom_in_f(void* self, float range) {
    QPlainTextEdit_ZoomInF((QPlainTextEdit*)self, range);
}

void q_plaintextedit_on_zoom_in_f(void* self, void (*callback)(void*, float)) {
    QPlainTextEdit_OnZoomInF((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_super_zoom_in_f(void* self, float range) {
    QPlainTextEdit_SuperZoomInF((QPlainTextEdit*)self, range);
}

const char* q_plaintextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_plaintextedit_find22(void* self, const char* exp, int32_t options) {
    return QPlainTextEdit_Find22((QPlainTextEdit*)self, qstring(exp), options);
}

bool q_plaintextedit_find23(void* self, void* exp, int32_t options) {
    return QPlainTextEdit_Find23((QPlainTextEdit*)self, (QRegularExpression*)exp, options);
}

void q_plaintextedit_move_cursor2(void* self, int32_t operation, int32_t mode) {
    QPlainTextEdit_MoveCursor2((QPlainTextEdit*)self, operation, mode);
}

void q_plaintextedit_zoom_in1(void* self, int range) {
    QPlainTextEdit_ZoomIn1((QPlainTextEdit*)self, range);
}

void q_plaintextedit_zoom_out1(void* self, int range) {
    QPlainTextEdit_ZoomOut1((QPlainTextEdit*)self, range);
}

int32_t q_plaintextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_plaintextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_plaintextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_plaintextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_plaintextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_plaintextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_plaintextedit_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_plaintextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_plaintextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_plaintextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_plaintextedit_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_plaintextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_plaintextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_plaintextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_plaintextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_plaintextedit_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_plaintextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_plaintextedit_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_plaintextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_plaintextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_plaintextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_plaintextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_plaintextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_plaintextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_plaintextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_plaintextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_plaintextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_plaintextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_plaintextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_plaintextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_plaintextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_plaintextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_plaintextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_plaintextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_plaintextedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_plaintextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_plaintextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_plaintextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_plaintextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_plaintextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_plaintextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_plaintextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_plaintextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_plaintextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_plaintextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_plaintextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_plaintextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_plaintextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_plaintextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_plaintextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_plaintextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_plaintextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_plaintextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_plaintextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_plaintextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_plaintextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_plaintextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_plaintextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_plaintextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_plaintextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_plaintextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_plaintextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_plaintextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_plaintextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_plaintextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_plaintextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_plaintextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_plaintextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_plaintextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_plaintextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_plaintextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_plaintextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_plaintextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_plaintextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_plaintextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_plaintextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_plaintextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_plaintextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_plaintextedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_plaintextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_plaintextedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_plaintextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_plaintextedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_plaintextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_plaintextedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_plaintextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_plaintextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_plaintextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_plaintextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_plaintextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_plaintextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_plaintextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_plaintextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_plaintextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_plaintextedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_plaintextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_plaintextedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_plaintextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_plaintextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_plaintextedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_plaintextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_plaintextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_plaintextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_plaintextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_plaintextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_plaintextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_plaintextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_plaintextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_plaintextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_plaintextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_plaintextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_plaintextedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_plaintextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_plaintextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_plaintextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_plaintextedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_plaintextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_plaintextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_plaintextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_plaintextedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_plaintextedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_plaintextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_plaintextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_plaintextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_plaintextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_plaintextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_plaintextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_plaintextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_plaintextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_plaintextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_plaintextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_plaintextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_plaintextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_plaintextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_plaintextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_plaintextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_plaintextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_plaintextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_plaintextedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_plaintextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_plaintextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_plaintextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_plaintextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_plaintextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_plaintextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_plaintextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_plaintextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_plaintextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_plaintextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_plaintextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_plaintextedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_plaintextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_plaintextedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_plaintextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_plaintextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_plaintextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_plaintextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_plaintextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_plaintextedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_plaintextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_plaintextedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_plaintextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_plaintextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_plaintextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_plaintextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_plaintextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_plaintextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_plaintextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_plaintextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_plaintextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_plaintextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_plaintextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_plaintextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_plaintextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_plaintextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_plaintextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_plaintextedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_plaintextedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_plaintextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_plaintextedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_plaintextedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_plaintextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_plaintextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_plaintextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_plaintextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_plaintextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_plaintextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_plaintextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_plaintextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_plaintextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_plaintextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_plaintextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_plaintextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_plaintextedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_plaintextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_plaintextedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_plaintextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_plaintextedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_plaintextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_plaintextedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_plaintextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_plaintextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_plaintextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_plaintextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_plaintextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_plaintextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_plaintextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_plaintextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_plaintextedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_plaintextedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_plaintextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_plaintextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_plaintextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_plaintextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_plaintextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_plaintextedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_plaintextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_plaintextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_plaintextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_plaintextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_plaintextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_plaintextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_plaintextedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_plaintextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_plaintextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_plaintextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_plaintextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_plaintextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_plaintextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_plaintextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_plaintextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_plaintextedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_plaintextedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_plaintextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_plaintextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_plaintextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_plaintextedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_plaintextedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_plaintextedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_plaintextedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_plaintextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_plaintextedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_plaintextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_plaintextedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_plaintextedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_plaintextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_plaintextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_plaintextedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_plaintextedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_plaintextedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_plaintextedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_plaintextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_plaintextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_plaintextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_plaintextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_plaintextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_plaintextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_plaintextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_plaintextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_plaintextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_plaintextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_plaintextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_plaintextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_plaintextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_plaintextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_plaintextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_plaintextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_plaintextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_plaintextedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_plaintextedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_plaintextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_plaintextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_plaintextedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_plaintextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_plaintextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_plaintextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_plaintextedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_plaintextedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_plaintextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_plaintextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_plaintextedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_plaintextedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_plaintextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_plaintextedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_plaintextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_plaintextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_plaintextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_plaintextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_plaintextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_plaintextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_plaintextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_plaintextedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_plaintextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_plaintextedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_plaintextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_plaintextedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_plaintextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_plaintextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_plaintextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_plaintextedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_plaintextedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_plaintextedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_plaintextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_plaintextedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_plaintextedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_plaintextedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_plaintextedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_plaintextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_plaintextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_plaintextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_plaintextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_plaintextedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_plaintextedit_dynamic_property_names\n");
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

QBindingStorage* q_plaintextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_plaintextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_plaintextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_plaintextedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_plaintextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_plaintextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_plaintextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_plaintextedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_plaintextedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_plaintextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_plaintextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_plaintextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_plaintextedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_plaintextedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_plaintextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_plaintextedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_plaintextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_plaintextedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_plaintextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_plaintextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_plaintextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_plaintextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_plaintextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_plaintextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_plaintextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_plaintextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_plaintextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_plaintextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_plaintextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_plaintextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_plaintextedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_plaintextedit_minimum_size_hint(void* self) {
    return QPlainTextEdit_MinimumSizeHint((QPlainTextEdit*)self);
}

QSize* q_plaintextedit_super_minimum_size_hint(void* self) {
    return QPlainTextEdit_SuperMinimumSizeHint((QPlainTextEdit*)self);
}

void q_plaintextedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QPlainTextEdit_OnMinimumSizeHint((QPlainTextEdit*)self, (intptr_t)callback);
}

QSize* q_plaintextedit_size_hint(void* self) {
    return QPlainTextEdit_SizeHint((QPlainTextEdit*)self);
}

QSize* q_plaintextedit_super_size_hint(void* self) {
    return QPlainTextEdit_SuperSizeHint((QPlainTextEdit*)self);
}

void q_plaintextedit_on_size_hint(void* self, QSize* (*callback)()) {
    QPlainTextEdit_OnSizeHint((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_setup_viewport(void* self, void* viewport) {
    QPlainTextEdit_SetupViewport((QPlainTextEdit*)self, (QWidget*)viewport);
}

void q_plaintextedit_super_setup_viewport(void* self, void* viewport) {
    QPlainTextEdit_SuperSetupViewport((QPlainTextEdit*)self, (QWidget*)viewport);
}

void q_plaintextedit_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnSetupViewport((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_event_filter(void* self, void* param1, void* param2) {
    return QPlainTextEdit_EventFilter((QPlainTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_plaintextedit_super_event_filter(void* self, void* param1, void* param2) {
    return QPlainTextEdit_SuperEventFilter((QPlainTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

void q_plaintextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlainTextEdit_OnEventFilter((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_viewport_event(void* self, void* param1) {
    return QPlainTextEdit_ViewportEvent((QPlainTextEdit*)self, (QEvent*)param1);
}

bool q_plaintextedit_super_viewport_event(void* self, void* param1) {
    return QPlainTextEdit_SuperViewportEvent((QPlainTextEdit*)self, (QEvent*)param1);
}

void q_plaintextedit_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QPlainTextEdit_OnViewportEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

QSize* q_plaintextedit_viewport_size_hint(void* self) {
    return QPlainTextEdit_ViewportSizeHint((QPlainTextEdit*)self);
}

QSize* q_plaintextedit_super_viewport_size_hint(void* self) {
    return QPlainTextEdit_SuperViewportSizeHint((QPlainTextEdit*)self);
}

void q_plaintextedit_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QPlainTextEdit_OnViewportSizeHint((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_init_style_option(void* self, void* option) {
    QPlainTextEdit_InitStyleOption((QPlainTextEdit*)self, (QStyleOptionFrame*)option);
}

void q_plaintextedit_super_init_style_option(void* self, void* option) {
    QPlainTextEdit_SuperInitStyleOption((QPlainTextEdit*)self, (QStyleOptionFrame*)option);
}

void q_plaintextedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnInitStyleOption((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_dev_type(void* self) {
    return QPlainTextEdit_DevType((QPlainTextEdit*)self);
}

int32_t q_plaintextedit_super_dev_type(void* self) {
    return QPlainTextEdit_SuperDevType((QPlainTextEdit*)self);
}

void q_plaintextedit_on_dev_type(void* self, int32_t (*callback)()) {
    QPlainTextEdit_OnDevType((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_set_visible(void* self, bool visible) {
    QPlainTextEdit_SetVisible((QPlainTextEdit*)self, visible);
}

void q_plaintextedit_super_set_visible(void* self, bool visible) {
    QPlainTextEdit_SuperSetVisible((QPlainTextEdit*)self, visible);
}

void q_plaintextedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QPlainTextEdit_OnSetVisible((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_height_for_width(void* self, int param1) {
    return QPlainTextEdit_HeightForWidth((QPlainTextEdit*)self, param1);
}

int32_t q_plaintextedit_super_height_for_width(void* self, int param1) {
    return QPlainTextEdit_SuperHeightForWidth((QPlainTextEdit*)self, param1);
}

void q_plaintextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QPlainTextEdit_OnHeightForWidth((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_has_height_for_width(void* self) {
    return QPlainTextEdit_HasHeightForWidth((QPlainTextEdit*)self);
}

bool q_plaintextedit_super_has_height_for_width(void* self) {
    return QPlainTextEdit_SuperHasHeightForWidth((QPlainTextEdit*)self);
}

void q_plaintextedit_on_has_height_for_width(void* self, bool (*callback)()) {
    QPlainTextEdit_OnHasHeightForWidth((QPlainTextEdit*)self, (intptr_t)callback);
}

QPaintEngine* q_plaintextedit_paint_engine(void* self) {
    return QPlainTextEdit_PaintEngine((QPlainTextEdit*)self);
}

QPaintEngine* q_plaintextedit_super_paint_engine(void* self) {
    return QPlainTextEdit_SuperPaintEngine((QPlainTextEdit*)self);
}

void q_plaintextedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPlainTextEdit_OnPaintEngine((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_enter_event(void* self, void* event) {
    QPlainTextEdit_EnterEvent((QPlainTextEdit*)self, (QEnterEvent*)event);
}

void q_plaintextedit_super_enter_event(void* self, void* event) {
    QPlainTextEdit_SuperEnterEvent((QPlainTextEdit*)self, (QEnterEvent*)event);
}

void q_plaintextedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnEnterEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_leave_event(void* self, void* event) {
    QPlainTextEdit_LeaveEvent((QPlainTextEdit*)self, (QEvent*)event);
}

void q_plaintextedit_super_leave_event(void* self, void* event) {
    QPlainTextEdit_SuperLeaveEvent((QPlainTextEdit*)self, (QEvent*)event);
}

void q_plaintextedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnLeaveEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_move_event(void* self, void* event) {
    QPlainTextEdit_MoveEvent((QPlainTextEdit*)self, (QMoveEvent*)event);
}

void q_plaintextedit_super_move_event(void* self, void* event) {
    QPlainTextEdit_SuperMoveEvent((QPlainTextEdit*)self, (QMoveEvent*)event);
}

void q_plaintextedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnMoveEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_close_event(void* self, void* event) {
    QPlainTextEdit_CloseEvent((QPlainTextEdit*)self, (QCloseEvent*)event);
}

void q_plaintextedit_super_close_event(void* self, void* event) {
    QPlainTextEdit_SuperCloseEvent((QPlainTextEdit*)self, (QCloseEvent*)event);
}

void q_plaintextedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnCloseEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_tablet_event(void* self, void* event) {
    QPlainTextEdit_TabletEvent((QPlainTextEdit*)self, (QTabletEvent*)event);
}

void q_plaintextedit_super_tablet_event(void* self, void* event) {
    QPlainTextEdit_SuperTabletEvent((QPlainTextEdit*)self, (QTabletEvent*)event);
}

void q_plaintextedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnTabletEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_action_event(void* self, void* event) {
    QPlainTextEdit_ActionEvent((QPlainTextEdit*)self, (QActionEvent*)event);
}

void q_plaintextedit_super_action_event(void* self, void* event) {
    QPlainTextEdit_SuperActionEvent((QPlainTextEdit*)self, (QActionEvent*)event);
}

void q_plaintextedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnActionEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_hide_event(void* self, void* event) {
    QPlainTextEdit_HideEvent((QPlainTextEdit*)self, (QHideEvent*)event);
}

void q_plaintextedit_super_hide_event(void* self, void* event) {
    QPlainTextEdit_SuperHideEvent((QPlainTextEdit*)self, (QHideEvent*)event);
}

void q_plaintextedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnHideEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QPlainTextEdit_NativeEvent((QPlainTextEdit*)self, qstring(eventType), message, result);
}

bool q_plaintextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QPlainTextEdit_SuperNativeEvent((QPlainTextEdit*)self, qstring(eventType), message, result);
}

void q_plaintextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QPlainTextEdit_OnNativeEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_metric(void* self, int32_t param1) {
    return QPlainTextEdit_Metric((QPlainTextEdit*)self, param1);
}

int32_t q_plaintextedit_super_metric(void* self, int32_t param1) {
    return QPlainTextEdit_SuperMetric((QPlainTextEdit*)self, param1);
}

void q_plaintextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPlainTextEdit_OnMetric((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_init_painter(void* self, void* painter) {
    QPlainTextEdit_InitPainter((QPlainTextEdit*)self, (QPainter*)painter);
}

void q_plaintextedit_super_init_painter(void* self, void* painter) {
    QPlainTextEdit_SuperInitPainter((QPlainTextEdit*)self, (QPainter*)painter);
}

void q_plaintextedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnInitPainter((QPlainTextEdit*)self, (intptr_t)callback);
}

QPaintDevice* q_plaintextedit_redirected(void* self, void* offset) {
    return QPlainTextEdit_Redirected((QPlainTextEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_plaintextedit_super_redirected(void* self, void* offset) {
    return QPlainTextEdit_SuperRedirected((QPlainTextEdit*)self, (QPoint*)offset);
}

void q_plaintextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPlainTextEdit_OnRedirected((QPlainTextEdit*)self, (intptr_t)callback);
}

QPainter* q_plaintextedit_shared_painter(void* self) {
    return QPlainTextEdit_SharedPainter((QPlainTextEdit*)self);
}

QPainter* q_plaintextedit_super_shared_painter(void* self) {
    return QPlainTextEdit_SuperSharedPainter((QPlainTextEdit*)self);
}

void q_plaintextedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPlainTextEdit_OnSharedPainter((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_child_event(void* self, void* event) {
    QPlainTextEdit_ChildEvent((QPlainTextEdit*)self, (QChildEvent*)event);
}

void q_plaintextedit_super_child_event(void* self, void* event) {
    QPlainTextEdit_SuperChildEvent((QPlainTextEdit*)self, (QChildEvent*)event);
}

void q_plaintextedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnChildEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_custom_event(void* self, void* event) {
    QPlainTextEdit_CustomEvent((QPlainTextEdit*)self, (QEvent*)event);
}

void q_plaintextedit_super_custom_event(void* self, void* event) {
    QPlainTextEdit_SuperCustomEvent((QPlainTextEdit*)self, (QEvent*)event);
}

void q_plaintextedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnCustomEvent((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_connect_notify(void* self, void* signal) {
    QPlainTextEdit_ConnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

void q_plaintextedit_super_connect_notify(void* self, void* signal) {
    QPlainTextEdit_SuperConnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

void q_plaintextedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnConnectNotify((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_disconnect_notify(void* self, void* signal) {
    QPlainTextEdit_DisconnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

void q_plaintextedit_super_disconnect_notify(void* self, void* signal) {
    QPlainTextEdit_SuperDisconnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

void q_plaintextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDisconnectNotify((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPlainTextEdit_SetViewportMargins((QPlainTextEdit*)self, left, top, right, bottom);
}

void q_plaintextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPlainTextEdit_SuperSetViewportMargins((QPlainTextEdit*)self, left, top, right, bottom);
}

void q_plaintextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QPlainTextEdit_OnSetViewportMargins((QPlainTextEdit*)self, (intptr_t)callback);
}

QMargins* q_plaintextedit_viewport_margins(void* self) {
    return QPlainTextEdit_ViewportMargins((QPlainTextEdit*)self);
}

QMargins* q_plaintextedit_super_viewport_margins(void* self) {
    return QPlainTextEdit_SuperViewportMargins((QPlainTextEdit*)self);
}

void q_plaintextedit_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QPlainTextEdit_OnViewportMargins((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_draw_frame(void* self, void* param1) {
    QPlainTextEdit_DrawFrame((QPlainTextEdit*)self, (QPainter*)param1);
}

void q_plaintextedit_super_draw_frame(void* self, void* param1) {
    QPlainTextEdit_SuperDrawFrame((QPlainTextEdit*)self, (QPainter*)param1);
}

void q_plaintextedit_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QPlainTextEdit_OnDrawFrame((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_update_micro_focus(void* self) {
    QPlainTextEdit_UpdateMicroFocus((QPlainTextEdit*)self);
}

void q_plaintextedit_super_update_micro_focus(void* self) {
    QPlainTextEdit_SuperUpdateMicroFocus((QPlainTextEdit*)self);
}

void q_plaintextedit_on_update_micro_focus(void* self, void (*callback)()) {
    QPlainTextEdit_OnUpdateMicroFocus((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_create(void* self) {
    QPlainTextEdit_Create((QPlainTextEdit*)self);
}

void q_plaintextedit_super_create(void* self) {
    QPlainTextEdit_SuperCreate((QPlainTextEdit*)self);
}

void q_plaintextedit_on_create(void* self, void (*callback)()) {
    QPlainTextEdit_OnCreate((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_destroy(void* self) {
    QPlainTextEdit_Destroy((QPlainTextEdit*)self);
}

void q_plaintextedit_super_destroy(void* self) {
    QPlainTextEdit_SuperDestroy((QPlainTextEdit*)self);
}

void q_plaintextedit_on_destroy(void* self, void (*callback)()) {
    QPlainTextEdit_OnDestroy((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_focus_next_child(void* self) {
    return QPlainTextEdit_FocusNextChild((QPlainTextEdit*)self);
}

bool q_plaintextedit_super_focus_next_child(void* self) {
    return QPlainTextEdit_SuperFocusNextChild((QPlainTextEdit*)self);
}

void q_plaintextedit_on_focus_next_child(void* self, bool (*callback)()) {
    QPlainTextEdit_OnFocusNextChild((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_focus_previous_child(void* self) {
    return QPlainTextEdit_FocusPreviousChild((QPlainTextEdit*)self);
}

bool q_plaintextedit_super_focus_previous_child(void* self) {
    return QPlainTextEdit_SuperFocusPreviousChild((QPlainTextEdit*)self);
}

void q_plaintextedit_on_focus_previous_child(void* self, bool (*callback)()) {
    QPlainTextEdit_OnFocusPreviousChild((QPlainTextEdit*)self, (intptr_t)callback);
}

QObject* q_plaintextedit_sender(void* self) {
    return QPlainTextEdit_Sender((QPlainTextEdit*)self);
}

QObject* q_plaintextedit_super_sender(void* self) {
    return QPlainTextEdit_SuperSender((QPlainTextEdit*)self);
}

void q_plaintextedit_on_sender(void* self, QObject* (*callback)()) {
    QPlainTextEdit_OnSender((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_sender_signal_index(void* self) {
    return QPlainTextEdit_SenderSignalIndex((QPlainTextEdit*)self);
}

int32_t q_plaintextedit_super_sender_signal_index(void* self) {
    return QPlainTextEdit_SuperSenderSignalIndex((QPlainTextEdit*)self);
}

void q_plaintextedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlainTextEdit_OnSenderSignalIndex((QPlainTextEdit*)self, (intptr_t)callback);
}

int32_t q_plaintextedit_receivers(void* self, const char* signal) {
    return QPlainTextEdit_Receivers((QPlainTextEdit*)self, signal);
}

int32_t q_plaintextedit_super_receivers(void* self, const char* signal) {
    return QPlainTextEdit_SuperReceivers((QPlainTextEdit*)self, signal);
}

void q_plaintextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlainTextEdit_OnReceivers((QPlainTextEdit*)self, (intptr_t)callback);
}

bool q_plaintextedit_is_signal_connected(void* self, void* signal) {
    return QPlainTextEdit_IsSignalConnected((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

bool q_plaintextedit_super_is_signal_connected(void* self, void* signal) {
    return QPlainTextEdit_SuperIsSignalConnected((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

void q_plaintextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlainTextEdit_OnIsSignalConnected((QPlainTextEdit*)self, (intptr_t)callback);
}

double q_plaintextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPlainTextEdit_GetDecodedMetricF((QPlainTextEdit*)self, metricA, metricB);
}

double q_plaintextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPlainTextEdit_SuperGetDecodedMetricF((QPlainTextEdit*)self, metricA, metricB);
}

void q_plaintextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPlainTextEdit_OnGetDecodedMetricF((QPlainTextEdit*)self, (intptr_t)callback);
}

void q_plaintextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_plaintextedit_delete(void* self) {
    QPlainTextEdit_Delete((QPlainTextEdit*)(self));
}

QPlainTextDocumentLayout* q_plaintextdocumentlayout_new(void* document) {
    return QPlainTextDocumentLayout_new((QTextDocument*)document);
}

const QMetaObject* q_plaintextdocumentlayout_meta_object(void* self) {
    return QPlainTextDocumentLayout_MetaObject((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlainTextDocumentLayout_OnMetaObject((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_plaintextdocumentlayout_super_meta_object(void* self) {
    return QPlainTextDocumentLayout_SuperMetaObject((QPlainTextDocumentLayout*)self);
}

void* q_plaintextdocumentlayout_metacast(void* self, const char* param1) {
    return QPlainTextDocumentLayout_Metacast((QPlainTextDocumentLayout*)self, param1);
}

void q_plaintextdocumentlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlainTextDocumentLayout_OnMetacast((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void* q_plaintextdocumentlayout_super_metacast(void* self, const char* param1) {
    return QPlainTextDocumentLayout_SuperMetacast((QPlainTextDocumentLayout*)self, param1);
}

int32_t q_plaintextdocumentlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlainTextDocumentLayout_Metacall((QPlainTextDocumentLayout*)self, param1, param2, param3);
}

void q_plaintextdocumentlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlainTextDocumentLayout_OnMetacall((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlainTextDocumentLayout_SuperMetacall((QPlainTextDocumentLayout*)self, param1, param2, param3);
}

const char* q_plaintextdocumentlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextdocumentlayout_draw(void* self, void* param1, void* param2) {
    QPlainTextDocumentLayout_Draw((QPlainTextDocumentLayout*)self, (QPainter*)param1, (QAbstractTextDocumentLayout__PaintContext*)param2);
}

void q_plaintextdocumentlayout_on_draw(void* self, void (*callback)(void*, void*, void*)) {
    QPlainTextDocumentLayout_OnDraw((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_super_draw(void* self, void* param1, void* param2) {
    QPlainTextDocumentLayout_SuperDraw((QPlainTextDocumentLayout*)self, (QPainter*)param1, (QAbstractTextDocumentLayout__PaintContext*)param2);
}

int32_t q_plaintextdocumentlayout_hit_test(void* self, void* param1, int32_t param2) {
    return QPlainTextDocumentLayout_HitTest((QPlainTextDocumentLayout*)self, (QPointF*)param1, param2);
}

void q_plaintextdocumentlayout_on_hit_test(void* self, int32_t (*callback)(void*, void*, int32_t)) {
    QPlainTextDocumentLayout_OnHitTest((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_super_hit_test(void* self, void* param1, int32_t param2) {
    return QPlainTextDocumentLayout_SuperHitTest((QPlainTextDocumentLayout*)self, (QPointF*)param1, param2);
}

int32_t q_plaintextdocumentlayout_page_count(void* self) {
    return QPlainTextDocumentLayout_PageCount((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_page_count(void* self, int32_t (*callback)()) {
    QPlainTextDocumentLayout_OnPageCount((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_super_page_count(void* self) {
    return QPlainTextDocumentLayout_SuperPageCount((QPlainTextDocumentLayout*)self);
}

QSizeF* q_plaintextdocumentlayout_document_size(void* self) {
    return QPlainTextDocumentLayout_DocumentSize((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_document_size(void* self, QSizeF* (*callback)()) {
    QPlainTextDocumentLayout_OnDocumentSize((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

QSizeF* q_plaintextdocumentlayout_super_document_size(void* self) {
    return QPlainTextDocumentLayout_SuperDocumentSize((QPlainTextDocumentLayout*)self);
}

QRectF* q_plaintextdocumentlayout_frame_bounding_rect(void* self, void* param1) {
    return QPlainTextDocumentLayout_FrameBoundingRect((QPlainTextDocumentLayout*)self, (QTextFrame*)param1);
}

void q_plaintextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnFrameBoundingRect((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

QRectF* q_plaintextdocumentlayout_super_frame_bounding_rect(void* self, void* param1) {
    return QPlainTextDocumentLayout_SuperFrameBoundingRect((QPlainTextDocumentLayout*)self, (QTextFrame*)param1);
}

QRectF* q_plaintextdocumentlayout_block_bounding_rect(void* self, void* block) {
    return QPlainTextDocumentLayout_BlockBoundingRect((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_plaintextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnBlockBoundingRect((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

QRectF* q_plaintextdocumentlayout_super_block_bounding_rect(void* self, void* block) {
    return QPlainTextDocumentLayout_SuperBlockBoundingRect((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_plaintextdocumentlayout_ensure_block_layout(void* self, void* block) {
    QPlainTextDocumentLayout_EnsureBlockLayout((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_plaintextdocumentlayout_set_cursor_width(void* self, int width) {
    QPlainTextDocumentLayout_SetCursorWidth((QPlainTextDocumentLayout*)self, width);
}

int32_t q_plaintextdocumentlayout_cursor_width(void* self) {
    return QPlainTextDocumentLayout_CursorWidth((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_request_update(void* self) {
    QPlainTextDocumentLayout_RequestUpdate((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_document_changed(void* self, int from, int param2, int charsAdded) {
    QPlainTextDocumentLayout_DocumentChanged((QPlainTextDocumentLayout*)self, from, param2, charsAdded);
}

void q_plaintextdocumentlayout_on_document_changed(void* self, void (*callback)(void*, int, int, int)) {
    QPlainTextDocumentLayout_OnDocumentChanged((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_super_document_changed(void* self, int from, int param2, int charsAdded) {
    QPlainTextDocumentLayout_SuperDocumentChanged((QPlainTextDocumentLayout*)self, from, param2, charsAdded);
}

const char* q_plaintextdocumentlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextdocumentlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextdocumentlayout_anchor_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_AnchorAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_plaintextdocumentlayout_image_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_ImageAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextFormat* q_plaintextdocumentlayout_format_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_FormatAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

QTextBlock* q_plaintextdocumentlayout_block_with_marker_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_BlockWithMarkerAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

void q_plaintextdocumentlayout_set_paint_device(void* self, void* device) {
    QAbstractTextDocumentLayout_SetPaintDevice((QAbstractTextDocumentLayout*)self, (QPaintDevice*)device);
}

QPaintDevice* q_plaintextdocumentlayout_paint_device(void* self) {
    return QAbstractTextDocumentLayout_PaintDevice((QAbstractTextDocumentLayout*)self);
}

QTextDocument* q_plaintextdocumentlayout_document(void* self) {
    return QAbstractTextDocumentLayout_Document((QAbstractTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_register_handler(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_RegisterHandler((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

void q_plaintextdocumentlayout_unregister_handler(void* self, int objectType) {
    QAbstractTextDocumentLayout_UnregisterHandler((QAbstractTextDocumentLayout*)self, objectType);
}

QTextObjectInterface* q_plaintextdocumentlayout_handler_for_object(void* self, int objectType) {
    return QAbstractTextDocumentLayout_HandlerForObject((QAbstractTextDocumentLayout*)self, objectType);
}

void q_plaintextdocumentlayout_update(void* self) {
    QAbstractTextDocumentLayout_Update((QAbstractTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_update(void* self, void (*callback)(void*)) {
    QAbstractTextDocumentLayout_Connect_Update((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_update_block(void* self, void* block) {
    QAbstractTextDocumentLayout_UpdateBlock((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_plaintextdocumentlayout_on_update_block(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_UpdateBlock((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_document_size_changed(void* self, void* newSize) {
    QAbstractTextDocumentLayout_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (QSizeF*)newSize);
}

void q_plaintextdocumentlayout_on_document_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_page_count_changed(void* self, int newPages) {
    QAbstractTextDocumentLayout_PageCountChanged((QAbstractTextDocumentLayout*)self, newPages);
}

void q_plaintextdocumentlayout_on_page_count_changed(void* self, void (*callback)(void*, int)) {
    QAbstractTextDocumentLayout_Connect_PageCountChanged((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_unregister_handler2(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_UnregisterHandler2((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

void q_plaintextdocumentlayout_update1(void* self, void* param1) {
    QAbstractTextDocumentLayout_Update1((QAbstractTextDocumentLayout*)self, (QRectF*)param1);
}

void q_plaintextdocumentlayout_on_update1(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_Update1((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

const char* q_plaintextdocumentlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_plaintextdocumentlayout_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_plaintextdocumentlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_plaintextdocumentlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_plaintextdocumentlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_plaintextdocumentlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_plaintextdocumentlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_plaintextdocumentlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_plaintextdocumentlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_plaintextdocumentlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_plaintextdocumentlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_plaintextdocumentlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_plaintextdocumentlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_plaintextdocumentlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_plaintextdocumentlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_plaintextdocumentlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_plaintextdocumentlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_plaintextdocumentlayout_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_plaintextdocumentlayout_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_plaintextdocumentlayout_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_plaintextdocumentlayout_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_plaintextdocumentlayout_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_plaintextdocumentlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_plaintextdocumentlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_plaintextdocumentlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_plaintextdocumentlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_plaintextdocumentlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_plaintextdocumentlayout_dynamic_property_names\n");
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

QBindingStorage* q_plaintextdocumentlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_plaintextdocumentlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_plaintextdocumentlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_plaintextdocumentlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_plaintextdocumentlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_plaintextdocumentlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_plaintextdocumentlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_plaintextdocumentlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_plaintextdocumentlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_plaintextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_plaintextdocumentlayout_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_plaintextdocumentlayout_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_plaintextdocumentlayout_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_plaintextdocumentlayout_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_plaintextdocumentlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_plaintextdocumentlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_ResizeInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_super_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_SuperResizeInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_on_resize_inline_object(void* self, void (*callback)(void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnResizeInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_PositionInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_super_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_SuperPositionInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_on_position_inline_object(void* self, void (*callback)(void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnPositionInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QPlainTextDocumentLayout_DrawInlineObject((QPlainTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_super_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QPlainTextDocumentLayout_SuperDrawInlineObject((QPlainTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

void q_plaintextdocumentlayout_on_draw_inline_object(void* self, void (*callback)(void*, void*, void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnDrawInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

bool q_plaintextdocumentlayout_event(void* self, void* event) {
    return QPlainTextDocumentLayout_Event((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

bool q_plaintextdocumentlayout_super_event(void* self, void* event) {
    return QPlainTextDocumentLayout_SuperEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

void q_plaintextdocumentlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnEvent((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

bool q_plaintextdocumentlayout_event_filter(void* self, void* watched, void* event) {
    return QPlainTextDocumentLayout_EventFilter((QPlainTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_plaintextdocumentlayout_super_event_filter(void* self, void* watched, void* event) {
    return QPlainTextDocumentLayout_SuperEventFilter((QPlainTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_plaintextdocumentlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlainTextDocumentLayout_OnEventFilter((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_timer_event(void* self, void* event) {
    QPlainTextDocumentLayout_TimerEvent((QPlainTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_plaintextdocumentlayout_super_timer_event(void* self, void* event) {
    QPlainTextDocumentLayout_SuperTimerEvent((QPlainTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_plaintextdocumentlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnTimerEvent((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_child_event(void* self, void* event) {
    QPlainTextDocumentLayout_ChildEvent((QPlainTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_plaintextdocumentlayout_super_child_event(void* self, void* event) {
    QPlainTextDocumentLayout_SuperChildEvent((QPlainTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_plaintextdocumentlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnChildEvent((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_custom_event(void* self, void* event) {
    QPlainTextDocumentLayout_CustomEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

void q_plaintextdocumentlayout_super_custom_event(void* self, void* event) {
    QPlainTextDocumentLayout_SuperCustomEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

void q_plaintextdocumentlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnCustomEvent((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_connect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_ConnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_plaintextdocumentlayout_super_connect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_SuperConnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_plaintextdocumentlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnConnectNotify((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_disconnect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_DisconnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_plaintextdocumentlayout_super_disconnect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_SuperDisconnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_plaintextdocumentlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnDisconnectNotify((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_format_index(void* self, int pos) {
    return QPlainTextDocumentLayout_FormatIndex((QPlainTextDocumentLayout*)self, pos);
}

int32_t q_plaintextdocumentlayout_super_format_index(void* self, int pos) {
    return QPlainTextDocumentLayout_SuperFormatIndex((QPlainTextDocumentLayout*)self, pos);
}

void q_plaintextdocumentlayout_on_format_index(void* self, int32_t (*callback)(void*, int)) {
    QPlainTextDocumentLayout_OnFormatIndex((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

QTextCharFormat* q_plaintextdocumentlayout_format(void* self, int pos) {
    return QPlainTextDocumentLayout_Format((QPlainTextDocumentLayout*)self, pos);
}

QTextCharFormat* q_plaintextdocumentlayout_super_format(void* self, int pos) {
    return QPlainTextDocumentLayout_SuperFormat((QPlainTextDocumentLayout*)self, pos);
}

void q_plaintextdocumentlayout_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    QPlainTextDocumentLayout_OnFormat((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

QObject* q_plaintextdocumentlayout_sender(void* self) {
    return QPlainTextDocumentLayout_Sender((QPlainTextDocumentLayout*)self);
}

QObject* q_plaintextdocumentlayout_super_sender(void* self) {
    return QPlainTextDocumentLayout_SuperSender((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_sender(void* self, QObject* (*callback)()) {
    QPlainTextDocumentLayout_OnSender((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_sender_signal_index(void* self) {
    return QPlainTextDocumentLayout_SenderSignalIndex((QPlainTextDocumentLayout*)self);
}

int32_t q_plaintextdocumentlayout_super_sender_signal_index(void* self) {
    return QPlainTextDocumentLayout_SuperSenderSignalIndex((QPlainTextDocumentLayout*)self);
}

void q_plaintextdocumentlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlainTextDocumentLayout_OnSenderSignalIndex((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_plaintextdocumentlayout_receivers(void* self, const char* signal) {
    return QPlainTextDocumentLayout_Receivers((QPlainTextDocumentLayout*)self, signal);
}

int32_t q_plaintextdocumentlayout_super_receivers(void* self, const char* signal) {
    return QPlainTextDocumentLayout_SuperReceivers((QPlainTextDocumentLayout*)self, signal);
}

void q_plaintextdocumentlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlainTextDocumentLayout_OnReceivers((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

bool q_plaintextdocumentlayout_is_signal_connected(void* self, void* signal) {
    return QPlainTextDocumentLayout_IsSignalConnected((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

bool q_plaintextdocumentlayout_super_is_signal_connected(void* self, void* signal) {
    return QPlainTextDocumentLayout_SuperIsSignalConnected((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_plaintextdocumentlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlainTextDocumentLayout_OnIsSignalConnected((QPlainTextDocumentLayout*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_plaintextdocumentlayout_delete(void* self) {
    QPlainTextDocumentLayout_Delete((QPlainTextDocumentLayout*)(self));
}
