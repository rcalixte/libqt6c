#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqcompleter.hpp"
#include "libqicon.hpp"
#include "libqmargins.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvalidator.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqlineedit.hpp"
#include "libqlineedit.h"

QLineEdit* q_lineedit_new(void* parent) {
    return QLineEdit_new((QWidget*)parent);
}

QLineEdit* q_lineedit_new2() {
    return QLineEdit_new2();
}

QLineEdit* q_lineedit_new3(const char* param1) {
    return QLineEdit_new3(qstring(param1));
}

QLineEdit* q_lineedit_new4(const char* param1, void* parent) {
    return QLineEdit_new4(qstring(param1), (QWidget*)parent);
}

const QMetaObject* q_lineedit_meta_object(void* self) {
    return QLineEdit_MetaObject((QLineEdit*)self);
}

void q_lineedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QLineEdit_OnMetaObject((QLineEdit*)self, (intptr_t)callback);
}

const QMetaObject* q_lineedit_qbase_meta_object(void* self) {
    return QLineEdit_QBaseMetaObject((QLineEdit*)self);
}

void* q_lineedit_metacast(void* self, const char* param1) {
    return QLineEdit_Metacast((QLineEdit*)self, param1);
}

void q_lineedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QLineEdit_OnMetacast((QLineEdit*)self, (intptr_t)callback);
}

void* q_lineedit_qbase_metacast(void* self, const char* param1) {
    return QLineEdit_QBaseMetacast((QLineEdit*)self, param1);
}

int32_t q_lineedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLineEdit_Metacall((QLineEdit*)self, param1, param2, param3);
}

void q_lineedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QLineEdit_OnMetacall((QLineEdit*)self, (intptr_t)callback);
}

int32_t q_lineedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLineEdit_QBaseMetacall((QLineEdit*)self, param1, param2, param3);
}

const char* q_lineedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_text(void* self) {
    libqt_string _str = QLineEdit_Text((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_display_text(void* self) {
    libqt_string _str = QLineEdit_DisplayText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_placeholder_text(void* self) {
    libqt_string _str = QLineEdit_PlaceholderText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_placeholder_text(void* self, const char* placeholderText) {
    QLineEdit_SetPlaceholderText((QLineEdit*)self, qstring(placeholderText));
}

int32_t q_lineedit_max_length(void* self) {
    return QLineEdit_MaxLength((QLineEdit*)self);
}

void q_lineedit_set_max_length(void* self, int maxLength) {
    QLineEdit_SetMaxLength((QLineEdit*)self, maxLength);
}

void q_lineedit_set_frame(void* self, bool frame) {
    QLineEdit_SetFrame((QLineEdit*)self, frame);
}

bool q_lineedit_has_frame(void* self) {
    return QLineEdit_HasFrame((QLineEdit*)self);
}

void q_lineedit_set_clear_button_enabled(void* self, bool enable) {
    QLineEdit_SetClearButtonEnabled((QLineEdit*)self, enable);
}

bool q_lineedit_is_clear_button_enabled(void* self) {
    return QLineEdit_IsClearButtonEnabled((QLineEdit*)self);
}

int32_t q_lineedit_echo_mode(void* self) {
    return QLineEdit_EchoMode((QLineEdit*)self);
}

void q_lineedit_set_echo_mode(void* self, int32_t echoMode) {
    QLineEdit_SetEchoMode((QLineEdit*)self, echoMode);
}

bool q_lineedit_is_read_only(void* self) {
    return QLineEdit_IsReadOnly((QLineEdit*)self);
}

void q_lineedit_set_read_only(void* self, bool readOnly) {
    QLineEdit_SetReadOnly((QLineEdit*)self, readOnly);
}

void q_lineedit_set_validator(void* self, void* validator) {
    QLineEdit_SetValidator((QLineEdit*)self, (QValidator*)validator);
}

const QValidator* q_lineedit_validator(void* self) {
    return QLineEdit_Validator((QLineEdit*)self);
}

void q_lineedit_set_completer(void* self, void* completer) {
    QLineEdit_SetCompleter((QLineEdit*)self, (QCompleter*)completer);
}

QCompleter* q_lineedit_completer(void* self) {
    return QLineEdit_Completer((QLineEdit*)self);
}

QSize* q_lineedit_size_hint(void* self) {
    return QLineEdit_SizeHint((QLineEdit*)self);
}

void q_lineedit_on_size_hint(void* self, QSize* (*callback)()) {
    QLineEdit_OnSizeHint((QLineEdit*)self, (intptr_t)callback);
}

QSize* q_lineedit_qbase_size_hint(void* self) {
    return QLineEdit_QBaseSizeHint((QLineEdit*)self);
}

QSize* q_lineedit_minimum_size_hint(void* self) {
    return QLineEdit_MinimumSizeHint((QLineEdit*)self);
}

void q_lineedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QLineEdit_OnMinimumSizeHint((QLineEdit*)self, (intptr_t)callback);
}

QSize* q_lineedit_qbase_minimum_size_hint(void* self) {
    return QLineEdit_QBaseMinimumSizeHint((QLineEdit*)self);
}

int32_t q_lineedit_cursor_position(void* self) {
    return QLineEdit_CursorPosition((QLineEdit*)self);
}

void q_lineedit_set_cursor_position(void* self, int cursorPosition) {
    QLineEdit_SetCursorPosition((QLineEdit*)self, cursorPosition);
}

int32_t q_lineedit_cursor_position_at(void* self, void* pos) {
    return QLineEdit_CursorPositionAt((QLineEdit*)self, (QPoint*)pos);
}

void q_lineedit_set_alignment(void* self, int32_t flag) {
    QLineEdit_SetAlignment((QLineEdit*)self, flag);
}

int32_t q_lineedit_alignment(void* self) {
    return QLineEdit_Alignment((QLineEdit*)self);
}

void q_lineedit_cursor_forward(void* self, bool mark) {
    QLineEdit_CursorForward((QLineEdit*)self, mark);
}

void q_lineedit_cursor_backward(void* self, bool mark) {
    QLineEdit_CursorBackward((QLineEdit*)self, mark);
}

void q_lineedit_cursor_word_forward(void* self, bool mark) {
    QLineEdit_CursorWordForward((QLineEdit*)self, mark);
}

void q_lineedit_cursor_word_backward(void* self, bool mark) {
    QLineEdit_CursorWordBackward((QLineEdit*)self, mark);
}

void q_lineedit_backspace(void* self) {
    QLineEdit_Backspace((QLineEdit*)self);
}

void q_lineedit_del(void* self) {
    QLineEdit_Del((QLineEdit*)self);
}

void q_lineedit_home(void* self, bool mark) {
    QLineEdit_Home((QLineEdit*)self, mark);
}

void q_lineedit_end(void* self, bool mark) {
    QLineEdit_End((QLineEdit*)self, mark);
}

bool q_lineedit_is_modified(void* self) {
    return QLineEdit_IsModified((QLineEdit*)self);
}

void q_lineedit_set_modified(void* self, bool modified) {
    QLineEdit_SetModified((QLineEdit*)self, modified);
}

void q_lineedit_set_selection(void* self, int param1, int param2) {
    QLineEdit_SetSelection((QLineEdit*)self, param1, param2);
}

bool q_lineedit_has_selected_text(void* self) {
    return QLineEdit_HasSelectedText((QLineEdit*)self);
}

const char* q_lineedit_selected_text(void* self) {
    libqt_string _str = QLineEdit_SelectedText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lineedit_selection_start(void* self) {
    return QLineEdit_SelectionStart((QLineEdit*)self);
}

int32_t q_lineedit_selection_end(void* self) {
    return QLineEdit_SelectionEnd((QLineEdit*)self);
}

int32_t q_lineedit_selection_length(void* self) {
    return QLineEdit_SelectionLength((QLineEdit*)self);
}

bool q_lineedit_is_undo_available(void* self) {
    return QLineEdit_IsUndoAvailable((QLineEdit*)self);
}

bool q_lineedit_is_redo_available(void* self) {
    return QLineEdit_IsRedoAvailable((QLineEdit*)self);
}

void q_lineedit_set_drag_enabled(void* self, bool b) {
    QLineEdit_SetDragEnabled((QLineEdit*)self, b);
}

bool q_lineedit_drag_enabled(void* self) {
    return QLineEdit_DragEnabled((QLineEdit*)self);
}

void q_lineedit_set_cursor_move_style(void* self, int32_t style) {
    QLineEdit_SetCursorMoveStyle((QLineEdit*)self, style);
}

int32_t q_lineedit_cursor_move_style(void* self) {
    return QLineEdit_CursorMoveStyle((QLineEdit*)self);
}

const char* q_lineedit_input_mask(void* self) {
    libqt_string _str = QLineEdit_InputMask((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_input_mask(void* self, const char* inputMask) {
    QLineEdit_SetInputMask((QLineEdit*)self, qstring(inputMask));
}

bool q_lineedit_has_acceptable_input(void* self) {
    return QLineEdit_HasAcceptableInput((QLineEdit*)self);
}

void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom) {
    QLineEdit_SetTextMargins((QLineEdit*)self, left, top, right, bottom);
}

void q_lineedit_set_text_margins2(void* self, void* margins) {
    QLineEdit_SetTextMargins2((QLineEdit*)self, (QMargins*)margins);
}

QMargins* q_lineedit_text_margins(void* self) {
    return QLineEdit_TextMargins((QLineEdit*)self);
}

void q_lineedit_add_action(void* self, void* action, int32_t position) {
    QLineEdit_AddAction((QLineEdit*)self, (QAction*)action, position);
}

QAction* q_lineedit_add_action2(void* self, void* icon, int32_t position) {
    return QLineEdit_AddAction2((QLineEdit*)self, (QIcon*)icon, position);
}

void q_lineedit_set_text(void* self, const char* text) {
    QLineEdit_SetText((QLineEdit*)self, qstring(text));
}

void q_lineedit_clear(void* self) {
    QLineEdit_Clear((QLineEdit*)self);
}

void q_lineedit_select_all(void* self) {
    QLineEdit_SelectAll((QLineEdit*)self);
}

void q_lineedit_undo(void* self) {
    QLineEdit_Undo((QLineEdit*)self);
}

void q_lineedit_redo(void* self) {
    QLineEdit_Redo((QLineEdit*)self);
}

void q_lineedit_cut(void* self) {
    QLineEdit_Cut((QLineEdit*)self);
}

void q_lineedit_copy(void* self) {
    QLineEdit_Copy((QLineEdit*)self);
}

void q_lineedit_paste(void* self) {
    QLineEdit_Paste((QLineEdit*)self);
}

void q_lineedit_deselect(void* self) {
    QLineEdit_Deselect((QLineEdit*)self);
}

void q_lineedit_insert(void* self, const char* param1) {
    QLineEdit_Insert((QLineEdit*)self, qstring(param1));
}

QMenu* q_lineedit_create_standard_context_menu(void* self) {
    return QLineEdit_CreateStandardContextMenu((QLineEdit*)self);
}

void q_lineedit_text_changed(void* self, const char* param1) {
    QLineEdit_TextChanged((QLineEdit*)self, qstring(param1));
}

void q_lineedit_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextChanged((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_text_edited(void* self, const char* param1) {
    QLineEdit_TextEdited((QLineEdit*)self, qstring(param1));
}

void q_lineedit_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextEdited((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_cursor_position_changed(void* self, int param1, int param2) {
    QLineEdit_CursorPositionChanged((QLineEdit*)self, param1, param2);
}

void q_lineedit_on_cursor_position_changed(void* self, void (*callback)(void*, int, int)) {
    QLineEdit_Connect_CursorPositionChanged((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_return_pressed(void* self) {
    QLineEdit_ReturnPressed((QLineEdit*)self);
}

void q_lineedit_on_return_pressed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_ReturnPressed((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_editing_finished(void* self) {
    QLineEdit_EditingFinished((QLineEdit*)self);
}

void q_lineedit_on_editing_finished(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_EditingFinished((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_selection_changed(void* self) {
    QLineEdit_SelectionChanged((QLineEdit*)self);
}

void q_lineedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_SelectionChanged((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_input_rejected(void* self) {
    QLineEdit_InputRejected((QLineEdit*)self);
}

void q_lineedit_on_input_rejected(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_InputRejected((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_mouse_press_event(void* self, void* param1) {
    QLineEdit_MousePressEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnMousePressEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_mouse_press_event(void* self, void* param1) {
    QLineEdit_QBaseMousePressEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_mouse_move_event(void* self, void* param1) {
    QLineEdit_MouseMoveEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnMouseMoveEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_mouse_move_event(void* self, void* param1) {
    QLineEdit_QBaseMouseMoveEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_mouse_release_event(void* self, void* param1) {
    QLineEdit_MouseReleaseEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnMouseReleaseEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_mouse_release_event(void* self, void* param1) {
    QLineEdit_QBaseMouseReleaseEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_mouse_double_click_event(void* self, void* param1) {
    QLineEdit_MouseDoubleClickEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnMouseDoubleClickEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_mouse_double_click_event(void* self, void* param1) {
    QLineEdit_QBaseMouseDoubleClickEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

void q_lineedit_key_press_event(void* self, void* param1) {
    QLineEdit_KeyPressEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

void q_lineedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnKeyPressEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_key_press_event(void* self, void* param1) {
    QLineEdit_QBaseKeyPressEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

void q_lineedit_key_release_event(void* self, void* param1) {
    QLineEdit_KeyReleaseEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

void q_lineedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnKeyReleaseEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_key_release_event(void* self, void* param1) {
    QLineEdit_QBaseKeyReleaseEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

void q_lineedit_focus_in_event(void* self, void* param1) {
    QLineEdit_FocusInEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

void q_lineedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnFocusInEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_focus_in_event(void* self, void* param1) {
    QLineEdit_QBaseFocusInEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

void q_lineedit_focus_out_event(void* self, void* param1) {
    QLineEdit_FocusOutEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

void q_lineedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnFocusOutEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_focus_out_event(void* self, void* param1) {
    QLineEdit_QBaseFocusOutEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

void q_lineedit_paint_event(void* self, void* param1) {
    QLineEdit_PaintEvent((QLineEdit*)self, (QPaintEvent*)param1);
}

void q_lineedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnPaintEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_paint_event(void* self, void* param1) {
    QLineEdit_QBasePaintEvent((QLineEdit*)self, (QPaintEvent*)param1);
}

void q_lineedit_drag_enter_event(void* self, void* param1) {
    QLineEdit_DragEnterEvent((QLineEdit*)self, (QDragEnterEvent*)param1);
}

void q_lineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnDragEnterEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_drag_enter_event(void* self, void* param1) {
    QLineEdit_QBaseDragEnterEvent((QLineEdit*)self, (QDragEnterEvent*)param1);
}

void q_lineedit_drag_move_event(void* self, void* e) {
    QLineEdit_DragMoveEvent((QLineEdit*)self, (QDragMoveEvent*)e);
}

void q_lineedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnDragMoveEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_drag_move_event(void* self, void* e) {
    QLineEdit_QBaseDragMoveEvent((QLineEdit*)self, (QDragMoveEvent*)e);
}

void q_lineedit_drag_leave_event(void* self, void* e) {
    QLineEdit_DragLeaveEvent((QLineEdit*)self, (QDragLeaveEvent*)e);
}

void q_lineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnDragLeaveEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_drag_leave_event(void* self, void* e) {
    QLineEdit_QBaseDragLeaveEvent((QLineEdit*)self, (QDragLeaveEvent*)e);
}

void q_lineedit_drop_event(void* self, void* param1) {
    QLineEdit_DropEvent((QLineEdit*)self, (QDropEvent*)param1);
}

void q_lineedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnDropEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_drop_event(void* self, void* param1) {
    QLineEdit_QBaseDropEvent((QLineEdit*)self, (QDropEvent*)param1);
}

void q_lineedit_change_event(void* self, void* param1) {
    QLineEdit_ChangeEvent((QLineEdit*)self, (QEvent*)param1);
}

void q_lineedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnChangeEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_change_event(void* self, void* param1) {
    QLineEdit_QBaseChangeEvent((QLineEdit*)self, (QEvent*)param1);
}

void q_lineedit_context_menu_event(void* self, void* param1) {
    QLineEdit_ContextMenuEvent((QLineEdit*)self, (QContextMenuEvent*)param1);
}

void q_lineedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnContextMenuEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_context_menu_event(void* self, void* param1) {
    QLineEdit_QBaseContextMenuEvent((QLineEdit*)self, (QContextMenuEvent*)param1);
}

void q_lineedit_input_method_event(void* self, void* param1) {
    QLineEdit_InputMethodEvent((QLineEdit*)self, (QInputMethodEvent*)param1);
}

void q_lineedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnInputMethodEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_input_method_event(void* self, void* param1) {
    QLineEdit_QBaseInputMethodEvent((QLineEdit*)self, (QInputMethodEvent*)param1);
}

void q_lineedit_init_style_option(void* self, void* option) {
    QLineEdit_InitStyleOption((QLineEdit*)self, (QStyleOptionFrame*)option);
}

void q_lineedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnInitStyleOption((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_init_style_option(void* self, void* option) {
    QLineEdit_QBaseInitStyleOption((QLineEdit*)self, (QStyleOptionFrame*)option);
}

QVariant* q_lineedit_input_method_query(void* self, int32_t param1) {
    return QLineEdit_InputMethodQuery((QLineEdit*)self, param1);
}

void q_lineedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QLineEdit_OnInputMethodQuery((QLineEdit*)self, (intptr_t)callback);
}

QVariant* q_lineedit_qbase_input_method_query(void* self, int32_t param1) {
    return QLineEdit_QBaseInputMethodQuery((QLineEdit*)self, param1);
}

QVariant* q_lineedit_input_method_query2(void* self, int32_t property, void* argument) {
    return QLineEdit_InputMethodQuery2((QLineEdit*)self, property, (QVariant*)argument);
}

void q_lineedit_timer_event(void* self, void* param1) {
    QLineEdit_TimerEvent((QLineEdit*)self, (QTimerEvent*)param1);
}

void q_lineedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnTimerEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_qbase_timer_event(void* self, void* param1) {
    QLineEdit_QBaseTimerEvent((QLineEdit*)self, (QTimerEvent*)param1);
}

bool q_lineedit_event(void* self, void* param1) {
    return QLineEdit_Event((QLineEdit*)self, (QEvent*)param1);
}

void q_lineedit_on_event(void* self, bool (*callback)(void*, void*)) {
    QLineEdit_OnEvent((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_qbase_event(void* self, void* param1) {
    return QLineEdit_QBaseEvent((QLineEdit*)self, (QEvent*)param1);
}

QRect* q_lineedit_cursor_rect(void* self) {
    return QLineEdit_CursorRect((QLineEdit*)self);
}

void q_lineedit_on_cursor_rect(void* self, QRect* (*callback)()) {
    QLineEdit_OnCursorRect((QLineEdit*)self, (intptr_t)callback);
}

QRect* q_lineedit_qbase_cursor_rect(void* self) {
    return QLineEdit_QBaseCursorRect((QLineEdit*)self);
}

const char* q_lineedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_cursor_forward2(void* self, bool mark, int steps) {
    QLineEdit_CursorForward2((QLineEdit*)self, mark, steps);
}

void q_lineedit_cursor_backward2(void* self, bool mark, int steps) {
    QLineEdit_CursorBackward2((QLineEdit*)self, mark, steps);
}

uintptr_t q_lineedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_lineedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_lineedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_lineedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_lineedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_lineedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_lineedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_lineedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_lineedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_lineedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_lineedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_lineedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_lineedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_lineedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_lineedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_lineedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_lineedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_lineedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_lineedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_lineedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_lineedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_lineedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_lineedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_lineedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_lineedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_lineedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_lineedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_lineedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_lineedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_lineedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_lineedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_lineedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_lineedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_lineedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_lineedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_lineedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_lineedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_lineedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_lineedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_lineedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_lineedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_lineedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_lineedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_lineedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_lineedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_lineedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_lineedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_lineedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_lineedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_lineedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_lineedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_lineedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_lineedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lineedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lineedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lineedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lineedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lineedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lineedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lineedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lineedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_lineedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_lineedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_lineedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_lineedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_lineedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_lineedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_lineedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_lineedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_lineedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_lineedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_lineedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_lineedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_lineedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_lineedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_lineedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_lineedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_lineedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_lineedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_lineedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_lineedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_lineedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_lineedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_lineedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_lineedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_lineedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_lineedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_lineedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_lineedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_lineedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_lineedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_lineedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_lineedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_lineedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_lineedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_lineedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_lineedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_lineedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_lineedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_lineedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_lineedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_lineedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_lineedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_lineedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_lineedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_lineedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_lineedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_lineedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_lineedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_lineedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_lineedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_lineedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lineedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_lineedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_lineedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_lineedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_lineedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_lineedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_lineedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_lineedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_lineedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_lineedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_lineedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_lineedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_lineedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_lineedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_lineedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_lineedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_lineedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_lineedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_lineedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_lineedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_lineedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_lineedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_lineedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_lineedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_lineedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_lineedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_lineedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_lineedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_lineedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_lineedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_lineedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_lineedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_lineedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_lineedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_lineedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_lineedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_lineedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_lineedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_lineedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_lineedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_lineedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_lineedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_lineedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_lineedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_lineedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_lineedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_lineedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_lineedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_lineedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_lineedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_lineedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_lineedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_lineedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_lineedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_lineedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_lineedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_lineedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_lineedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_lineedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_lineedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_lineedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_lineedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_lineedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_lineedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_lineedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_lineedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_lineedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_lineedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_lineedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_lineedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_lineedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_lineedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_lineedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_lineedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_lineedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_lineedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_lineedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_lineedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_lineedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_lineedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_lineedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_lineedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_lineedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_lineedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_lineedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_lineedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_lineedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_lineedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_lineedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_lineedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_lineedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_lineedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_lineedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_lineedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_lineedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_lineedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_lineedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_lineedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_lineedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_lineedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_lineedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_lineedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_lineedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_lineedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_lineedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_lineedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_lineedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_lineedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_lineedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_lineedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_lineedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_lineedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_lineedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_lineedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_lineedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_lineedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_lineedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_lineedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_lineedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_lineedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_lineedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_lineedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_lineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_lineedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_lineedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_lineedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_lineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_lineedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_lineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_lineedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_lineedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_lineedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_lineedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_lineedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_lineedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_lineedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_lineedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_lineedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_lineedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_lineedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_lineedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lineedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_lineedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_lineedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_lineedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_lineedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_lineedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_lineedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_lineedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_lineedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_lineedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_lineedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_lineedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_lineedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_lineedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_lineedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_lineedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_lineedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_lineedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_lineedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_lineedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_lineedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_lineedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_lineedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_lineedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_lineedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_lineedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_lineedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_lineedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_lineedit_dynamic_property_names\n");
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

QBindingStorage* q_lineedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_lineedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_lineedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_lineedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_lineedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_lineedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_lineedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_lineedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_lineedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_lineedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_lineedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_lineedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_lineedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_lineedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_lineedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_lineedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_lineedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_lineedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_lineedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_lineedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_lineedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_lineedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_lineedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_lineedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_lineedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_lineedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_lineedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_lineedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_lineedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_lineedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_lineedit_dev_type(void* self) {
    return QLineEdit_DevType((QLineEdit*)self);
}

int32_t q_lineedit_qbase_dev_type(void* self) {
    return QLineEdit_QBaseDevType((QLineEdit*)self);
}

void q_lineedit_on_dev_type(void* self, int32_t (*callback)()) {
    QLineEdit_OnDevType((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_set_visible(void* self, bool visible) {
    QLineEdit_SetVisible((QLineEdit*)self, visible);
}

void q_lineedit_qbase_set_visible(void* self, bool visible) {
    QLineEdit_QBaseSetVisible((QLineEdit*)self, visible);
}

void q_lineedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QLineEdit_OnSetVisible((QLineEdit*)self, (intptr_t)callback);
}

int32_t q_lineedit_height_for_width(void* self, int param1) {
    return QLineEdit_HeightForWidth((QLineEdit*)self, param1);
}

int32_t q_lineedit_qbase_height_for_width(void* self, int param1) {
    return QLineEdit_QBaseHeightForWidth((QLineEdit*)self, param1);
}

void q_lineedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QLineEdit_OnHeightForWidth((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_has_height_for_width(void* self) {
    return QLineEdit_HasHeightForWidth((QLineEdit*)self);
}

bool q_lineedit_qbase_has_height_for_width(void* self) {
    return QLineEdit_QBaseHasHeightForWidth((QLineEdit*)self);
}

void q_lineedit_on_has_height_for_width(void* self, bool (*callback)()) {
    QLineEdit_OnHasHeightForWidth((QLineEdit*)self, (intptr_t)callback);
}

QPaintEngine* q_lineedit_paint_engine(void* self) {
    return QLineEdit_PaintEngine((QLineEdit*)self);
}

QPaintEngine* q_lineedit_qbase_paint_engine(void* self) {
    return QLineEdit_QBasePaintEngine((QLineEdit*)self);
}

void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QLineEdit_OnPaintEngine((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_wheel_event(void* self, void* event) {
    QLineEdit_WheelEvent((QLineEdit*)self, (QWheelEvent*)event);
}

void q_lineedit_qbase_wheel_event(void* self, void* event) {
    QLineEdit_QBaseWheelEvent((QLineEdit*)self, (QWheelEvent*)event);
}

void q_lineedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnWheelEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_enter_event(void* self, void* event) {
    QLineEdit_EnterEvent((QLineEdit*)self, (QEnterEvent*)event);
}

void q_lineedit_qbase_enter_event(void* self, void* event) {
    QLineEdit_QBaseEnterEvent((QLineEdit*)self, (QEnterEvent*)event);
}

void q_lineedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnEnterEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_leave_event(void* self, void* event) {
    QLineEdit_LeaveEvent((QLineEdit*)self, (QEvent*)event);
}

void q_lineedit_qbase_leave_event(void* self, void* event) {
    QLineEdit_QBaseLeaveEvent((QLineEdit*)self, (QEvent*)event);
}

void q_lineedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnLeaveEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_move_event(void* self, void* event) {
    QLineEdit_MoveEvent((QLineEdit*)self, (QMoveEvent*)event);
}

void q_lineedit_qbase_move_event(void* self, void* event) {
    QLineEdit_QBaseMoveEvent((QLineEdit*)self, (QMoveEvent*)event);
}

void q_lineedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnMoveEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_resize_event(void* self, void* event) {
    QLineEdit_ResizeEvent((QLineEdit*)self, (QResizeEvent*)event);
}

void q_lineedit_qbase_resize_event(void* self, void* event) {
    QLineEdit_QBaseResizeEvent((QLineEdit*)self, (QResizeEvent*)event);
}

void q_lineedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnResizeEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_close_event(void* self, void* event) {
    QLineEdit_CloseEvent((QLineEdit*)self, (QCloseEvent*)event);
}

void q_lineedit_qbase_close_event(void* self, void* event) {
    QLineEdit_QBaseCloseEvent((QLineEdit*)self, (QCloseEvent*)event);
}

void q_lineedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnCloseEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_tablet_event(void* self, void* event) {
    QLineEdit_TabletEvent((QLineEdit*)self, (QTabletEvent*)event);
}

void q_lineedit_qbase_tablet_event(void* self, void* event) {
    QLineEdit_QBaseTabletEvent((QLineEdit*)self, (QTabletEvent*)event);
}

void q_lineedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnTabletEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_action_event(void* self, void* event) {
    QLineEdit_ActionEvent((QLineEdit*)self, (QActionEvent*)event);
}

void q_lineedit_qbase_action_event(void* self, void* event) {
    QLineEdit_QBaseActionEvent((QLineEdit*)self, (QActionEvent*)event);
}

void q_lineedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnActionEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_show_event(void* self, void* event) {
    QLineEdit_ShowEvent((QLineEdit*)self, (QShowEvent*)event);
}

void q_lineedit_qbase_show_event(void* self, void* event) {
    QLineEdit_QBaseShowEvent((QLineEdit*)self, (QShowEvent*)event);
}

void q_lineedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnShowEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_hide_event(void* self, void* event) {
    QLineEdit_HideEvent((QLineEdit*)self, (QHideEvent*)event);
}

void q_lineedit_qbase_hide_event(void* self, void* event) {
    QLineEdit_QBaseHideEvent((QLineEdit*)self, (QHideEvent*)event);
}

void q_lineedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnHideEvent((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QLineEdit_NativeEvent((QLineEdit*)self, qstring(eventType), message, result);
}

bool q_lineedit_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QLineEdit_QBaseNativeEvent((QLineEdit*)self, qstring(eventType), message, result);
}

void q_lineedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QLineEdit_OnNativeEvent((QLineEdit*)self, (intptr_t)callback);
}

int32_t q_lineedit_metric(void* self, int32_t param1) {
    return QLineEdit_Metric((QLineEdit*)self, param1);
}

int32_t q_lineedit_qbase_metric(void* self, int32_t param1) {
    return QLineEdit_QBaseMetric((QLineEdit*)self, param1);
}

void q_lineedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QLineEdit_OnMetric((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_init_painter(void* self, void* painter) {
    QLineEdit_InitPainter((QLineEdit*)self, (QPainter*)painter);
}

void q_lineedit_qbase_init_painter(void* self, void* painter) {
    QLineEdit_QBaseInitPainter((QLineEdit*)self, (QPainter*)painter);
}

void q_lineedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnInitPainter((QLineEdit*)self, (intptr_t)callback);
}

QPaintDevice* q_lineedit_redirected(void* self, void* offset) {
    return QLineEdit_Redirected((QLineEdit*)self, (QPoint*)offset);
}

QPaintDevice* q_lineedit_qbase_redirected(void* self, void* offset) {
    return QLineEdit_QBaseRedirected((QLineEdit*)self, (QPoint*)offset);
}

void q_lineedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QLineEdit_OnRedirected((QLineEdit*)self, (intptr_t)callback);
}

QPainter* q_lineedit_shared_painter(void* self) {
    return QLineEdit_SharedPainter((QLineEdit*)self);
}

QPainter* q_lineedit_qbase_shared_painter(void* self) {
    return QLineEdit_QBaseSharedPainter((QLineEdit*)self);
}

void q_lineedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    QLineEdit_OnSharedPainter((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_focus_next_prev_child(void* self, bool next) {
    return QLineEdit_FocusNextPrevChild((QLineEdit*)self, next);
}

bool q_lineedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QLineEdit_QBaseFocusNextPrevChild((QLineEdit*)self, next);
}

void q_lineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QLineEdit_OnFocusNextPrevChild((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_event_filter(void* self, void* watched, void* event) {
    return QLineEdit_EventFilter((QLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool q_lineedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QLineEdit_QBaseEventFilter((QLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

void q_lineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QLineEdit_OnEventFilter((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_child_event(void* self, void* event) {
    QLineEdit_ChildEvent((QLineEdit*)self, (QChildEvent*)event);
}

void q_lineedit_qbase_child_event(void* self, void* event) {
    QLineEdit_QBaseChildEvent((QLineEdit*)self, (QChildEvent*)event);
}

void q_lineedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnChildEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_custom_event(void* self, void* event) {
    QLineEdit_CustomEvent((QLineEdit*)self, (QEvent*)event);
}

void q_lineedit_qbase_custom_event(void* self, void* event) {
    QLineEdit_QBaseCustomEvent((QLineEdit*)self, (QEvent*)event);
}

void q_lineedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnCustomEvent((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_connect_notify(void* self, void* signal) {
    QLineEdit_ConnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

void q_lineedit_qbase_connect_notify(void* self, void* signal) {
    QLineEdit_QBaseConnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

void q_lineedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnConnectNotify((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_disconnect_notify(void* self, void* signal) {
    QLineEdit_DisconnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

void q_lineedit_qbase_disconnect_notify(void* self, void* signal) {
    QLineEdit_QBaseDisconnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

void q_lineedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QLineEdit_OnDisconnectNotify((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_update_micro_focus(void* self) {
    QLineEdit_UpdateMicroFocus((QLineEdit*)self);
}

void q_lineedit_qbase_update_micro_focus(void* self) {
    QLineEdit_QBaseUpdateMicroFocus((QLineEdit*)self);
}

void q_lineedit_on_update_micro_focus(void* self, void (*callback)()) {
    QLineEdit_OnUpdateMicroFocus((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_create(void* self) {
    QLineEdit_Create((QLineEdit*)self);
}

void q_lineedit_qbase_create(void* self) {
    QLineEdit_QBaseCreate((QLineEdit*)self);
}

void q_lineedit_on_create(void* self, void (*callback)()) {
    QLineEdit_OnCreate((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_destroy(void* self) {
    QLineEdit_Destroy((QLineEdit*)self);
}

void q_lineedit_qbase_destroy(void* self) {
    QLineEdit_QBaseDestroy((QLineEdit*)self);
}

void q_lineedit_on_destroy(void* self, void (*callback)()) {
    QLineEdit_OnDestroy((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_focus_next_child(void* self) {
    return QLineEdit_FocusNextChild((QLineEdit*)self);
}

bool q_lineedit_qbase_focus_next_child(void* self) {
    return QLineEdit_QBaseFocusNextChild((QLineEdit*)self);
}

void q_lineedit_on_focus_next_child(void* self, bool (*callback)()) {
    QLineEdit_OnFocusNextChild((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_focus_previous_child(void* self) {
    return QLineEdit_FocusPreviousChild((QLineEdit*)self);
}

bool q_lineedit_qbase_focus_previous_child(void* self) {
    return QLineEdit_QBaseFocusPreviousChild((QLineEdit*)self);
}

void q_lineedit_on_focus_previous_child(void* self, bool (*callback)()) {
    QLineEdit_OnFocusPreviousChild((QLineEdit*)self, (intptr_t)callback);
}

QObject* q_lineedit_sender(void* self) {
    return QLineEdit_Sender((QLineEdit*)self);
}

QObject* q_lineedit_qbase_sender(void* self) {
    return QLineEdit_QBaseSender((QLineEdit*)self);
}

void q_lineedit_on_sender(void* self, QObject* (*callback)()) {
    QLineEdit_OnSender((QLineEdit*)self, (intptr_t)callback);
}

int32_t q_lineedit_sender_signal_index(void* self) {
    return QLineEdit_SenderSignalIndex((QLineEdit*)self);
}

int32_t q_lineedit_qbase_sender_signal_index(void* self) {
    return QLineEdit_QBaseSenderSignalIndex((QLineEdit*)self);
}

void q_lineedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QLineEdit_OnSenderSignalIndex((QLineEdit*)self, (intptr_t)callback);
}

int32_t q_lineedit_receivers(void* self, const char* signal) {
    return QLineEdit_Receivers((QLineEdit*)self, signal);
}

int32_t q_lineedit_qbase_receivers(void* self, const char* signal) {
    return QLineEdit_QBaseReceivers((QLineEdit*)self, signal);
}

void q_lineedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QLineEdit_OnReceivers((QLineEdit*)self, (intptr_t)callback);
}

bool q_lineedit_is_signal_connected(void* self, void* signal) {
    return QLineEdit_IsSignalConnected((QLineEdit*)self, (QMetaMethod*)signal);
}

bool q_lineedit_qbase_is_signal_connected(void* self, void* signal) {
    return QLineEdit_QBaseIsSignalConnected((QLineEdit*)self, (QMetaMethod*)signal);
}

void q_lineedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QLineEdit_OnIsSignalConnected((QLineEdit*)self, (intptr_t)callback);
}

double q_lineedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QLineEdit_GetDecodedMetricF((QLineEdit*)self, metricA, metricB);
}

double q_lineedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QLineEdit_QBaseGetDecodedMetricF((QLineEdit*)self, metricA, metricB);
}

void q_lineedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QLineEdit_OnGetDecodedMetricF((QLineEdit*)self, (intptr_t)callback);
}

void q_lineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_lineedit_delete(void* self) {
    QLineEdit_Delete((QLineEdit*)(self));
}
