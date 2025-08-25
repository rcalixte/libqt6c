#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqlineedit.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtreewidget.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libktreewidgetsearchline.hpp"
#include "libktreewidgetsearchline.h"

KTreeWidgetSearchLine* k_treewidgetsearchline_new(void* parent) {
    return KTreeWidgetSearchLine_new((QWidget*)parent);
}

KTreeWidgetSearchLine* k_treewidgetsearchline_new2() {
    return KTreeWidgetSearchLine_new2();
}

KTreeWidgetSearchLine* k_treewidgetsearchline_new3(void* parent, libqt_list treeWidgets) {
    return KTreeWidgetSearchLine_new3((QWidget*)parent, treeWidgets);
}

KTreeWidgetSearchLine* k_treewidgetsearchline_new4(void* parent, void* treeWidget) {
    return KTreeWidgetSearchLine_new4((QWidget*)parent, (QTreeWidget*)treeWidget);
}

const QMetaObject* k_treewidgetsearchline_meta_object(void* self) {
    return KTreeWidgetSearchLine_MetaObject((KTreeWidgetSearchLine*)self);
}

void* k_treewidgetsearchline_metacast(void* self, const char* param1) {
    return KTreeWidgetSearchLine_Metacast((KTreeWidgetSearchLine*)self, param1);
}

int32_t k_treewidgetsearchline_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTreeWidgetSearchLine_Metacall((KTreeWidgetSearchLine*)self, param1, param2, param3);
}

void k_treewidgetsearchline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTreeWidgetSearchLine_OnMetacall((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTreeWidgetSearchLine_QBaseMetacall((KTreeWidgetSearchLine*)self, param1, param2, param3);
}

const char* k_treewidgetsearchline_tr(const char* s) {
    libqt_string _str = KTreeWidgetSearchLine_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_treewidgetsearchline_case_sensitivity(void* self) {
    return KTreeWidgetSearchLine_CaseSensitivity((KTreeWidgetSearchLine*)self);
}

libqt_list /* of int */ k_treewidgetsearchline_search_columns(void* self) {
    libqt_list _arr = KTreeWidgetSearchLine_SearchColumns((KTreeWidgetSearchLine*)self);
    return _arr;
}

bool k_treewidgetsearchline_keep_parents_visible(void* self) {
    return KTreeWidgetSearchLine_KeepParentsVisible((KTreeWidgetSearchLine*)self);
}

QTreeWidget* k_treewidgetsearchline_tree_widget(void* self) {
    return KTreeWidgetSearchLine_TreeWidget((KTreeWidgetSearchLine*)self);
}

libqt_list /* of QTreeWidget* */ k_treewidgetsearchline_tree_widgets(void* self) {
    libqt_list _arr = KTreeWidgetSearchLine_TreeWidgets((KTreeWidgetSearchLine*)self);
    return _arr;
}

void k_treewidgetsearchline_hidden_changed(void* self, void* param1, bool param2) {
    KTreeWidgetSearchLine_HiddenChanged((KTreeWidgetSearchLine*)self, (QTreeWidgetItem*)param1, param2);
}

void k_treewidgetsearchline_on_hidden_changed(void* self, void (*callback)(void*, void*, bool)) {
    KTreeWidgetSearchLine_Connect_HiddenChanged((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_search_updated(void* self, const char* searchString) {
    KTreeWidgetSearchLine_SearchUpdated((KTreeWidgetSearchLine*)self, qstring(searchString));
}

void k_treewidgetsearchline_on_search_updated(void* self, void (*callback)(void*, const char*)) {
    KTreeWidgetSearchLine_Connect_SearchUpdated((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_case_sensitivity_changed(void* self, int32_t caseSensitivity) {
    KTreeWidgetSearchLine_CaseSensitivityChanged((KTreeWidgetSearchLine*)self, caseSensitivity);
}

void k_treewidgetsearchline_on_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    KTreeWidgetSearchLine_Connect_CaseSensitivityChanged((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_keep_parents_visible_changed(void* self, bool keepParentsVisible) {
    KTreeWidgetSearchLine_KeepParentsVisibleChanged((KTreeWidgetSearchLine*)self, keepParentsVisible);
}

void k_treewidgetsearchline_on_keep_parents_visible_changed(void* self, void (*callback)(void*, bool)) {
    KTreeWidgetSearchLine_Connect_KeepParentsVisibleChanged((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_add_tree_widget(void* self, void* treeWidget) {
    KTreeWidgetSearchLine_AddTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)treeWidget);
}

void k_treewidgetsearchline_remove_tree_widget(void* self, void* treeWidget) {
    KTreeWidgetSearchLine_RemoveTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)treeWidget);
}

void k_treewidgetsearchline_update_search(void* self, const char* pattern) {
    KTreeWidgetSearchLine_UpdateSearch((KTreeWidgetSearchLine*)self, qstring(pattern));
}

void k_treewidgetsearchline_on_update_search(void* self, void (*callback)(void*, const char*)) {
    KTreeWidgetSearchLine_OnUpdateSearch((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_qbase_update_search(void* self, const char* pattern) {
    KTreeWidgetSearchLine_QBaseUpdateSearch((KTreeWidgetSearchLine*)self, qstring(pattern));
}

void k_treewidgetsearchline_set_case_sensitivity(void* self, int32_t caseSensitivity) {
    KTreeWidgetSearchLine_SetCaseSensitivity((KTreeWidgetSearchLine*)self, caseSensitivity);
}

void k_treewidgetsearchline_set_keep_parents_visible(void* self, bool value) {
    KTreeWidgetSearchLine_SetKeepParentsVisible((KTreeWidgetSearchLine*)self, value);
}

void k_treewidgetsearchline_set_search_columns(void* self, libqt_list columns) {
    KTreeWidgetSearchLine_SetSearchColumns((KTreeWidgetSearchLine*)self, columns);
}

void k_treewidgetsearchline_set_tree_widget(void* self, void* treeWidget) {
    KTreeWidgetSearchLine_SetTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)treeWidget);
}

void k_treewidgetsearchline_set_tree_widgets(void* self, libqt_list treeWidgets) {
    KTreeWidgetSearchLine_SetTreeWidgets((KTreeWidgetSearchLine*)self, treeWidgets);
}

bool k_treewidgetsearchline_item_matches(void* self, void* item, const char* pattern) {
    return KTreeWidgetSearchLine_ItemMatches((KTreeWidgetSearchLine*)self, (QTreeWidgetItem*)item, qstring(pattern));
}

void k_treewidgetsearchline_on_item_matches(void* self, bool (*callback)(void*, void*, const char*)) {
    KTreeWidgetSearchLine_OnItemMatches((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_qbase_item_matches(void* self, void* item, const char* pattern) {
    return KTreeWidgetSearchLine_QBaseItemMatches((KTreeWidgetSearchLine*)self, (QTreeWidgetItem*)item, qstring(pattern));
}

void k_treewidgetsearchline_context_menu_event(void* self, void* param1) {
    KTreeWidgetSearchLine_ContextMenuEvent((KTreeWidgetSearchLine*)self, (QContextMenuEvent*)param1);
}

void k_treewidgetsearchline_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnContextMenuEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_qbase_context_menu_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseContextMenuEvent((KTreeWidgetSearchLine*)self, (QContextMenuEvent*)param1);
}

void k_treewidgetsearchline_update_search2(void* self, void* treeWidget) {
    KTreeWidgetSearchLine_UpdateSearch2((KTreeWidgetSearchLine*)self, (QTreeWidget*)treeWidget);
}

void k_treewidgetsearchline_on_update_search2(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnUpdateSearch2((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_qbase_update_search2(void* self, void* treeWidget) {
    KTreeWidgetSearchLine_QBaseUpdateSearch2((KTreeWidgetSearchLine*)self, (QTreeWidget*)treeWidget);
}

void k_treewidgetsearchline_connect_tree_widget(void* self, void* param1) {
    KTreeWidgetSearchLine_ConnectTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)param1);
}

void k_treewidgetsearchline_on_connect_tree_widget(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnConnectTreeWidget((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_qbase_connect_tree_widget(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseConnectTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)param1);
}

void k_treewidgetsearchline_disconnect_tree_widget(void* self, void* param1) {
    KTreeWidgetSearchLine_DisconnectTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)param1);
}

void k_treewidgetsearchline_on_disconnect_tree_widget(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDisconnectTreeWidget((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_qbase_disconnect_tree_widget(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseDisconnectTreeWidget((KTreeWidgetSearchLine*)self, (QTreeWidget*)param1);
}

bool k_treewidgetsearchline_can_choose_columns_check(void* self) {
    return KTreeWidgetSearchLine_CanChooseColumnsCheck((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_can_choose_columns_check(void* self, bool (*callback)()) {
    KTreeWidgetSearchLine_OnCanChooseColumnsCheck((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_qbase_can_choose_columns_check(void* self) {
    return KTreeWidgetSearchLine_QBaseCanChooseColumnsCheck((KTreeWidgetSearchLine*)self);
}

bool k_treewidgetsearchline_event(void* self, void* event) {
    return KTreeWidgetSearchLine_Event((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

void k_treewidgetsearchline_on_event(void* self, bool (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_qbase_event(void* self, void* event) {
    return KTreeWidgetSearchLine_QBaseEvent((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

const char* k_treewidgetsearchline_tr2(const char* s, const char* c) {
    libqt_string _str = KTreeWidgetSearchLine_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KTreeWidgetSearchLine_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_text(void* self) {
    libqt_string _str = QLineEdit_Text((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_display_text(void* self) {
    libqt_string _str = QLineEdit_DisplayText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_placeholder_text(void* self) {
    libqt_string _str = QLineEdit_PlaceholderText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_placeholder_text(void* self, const char* placeholderText) {
    QLineEdit_SetPlaceholderText((QLineEdit*)self, qstring(placeholderText));
}

int32_t k_treewidgetsearchline_max_length(void* self) {
    return QLineEdit_MaxLength((QLineEdit*)self);
}

void k_treewidgetsearchline_set_max_length(void* self, int maxLength) {
    QLineEdit_SetMaxLength((QLineEdit*)self, maxLength);
}

void k_treewidgetsearchline_set_frame(void* self, bool frame) {
    QLineEdit_SetFrame((QLineEdit*)self, frame);
}

bool k_treewidgetsearchline_has_frame(void* self) {
    return QLineEdit_HasFrame((QLineEdit*)self);
}

void k_treewidgetsearchline_set_clear_button_enabled(void* self, bool enable) {
    QLineEdit_SetClearButtonEnabled((QLineEdit*)self, enable);
}

bool k_treewidgetsearchline_is_clear_button_enabled(void* self) {
    return QLineEdit_IsClearButtonEnabled((QLineEdit*)self);
}

int32_t k_treewidgetsearchline_echo_mode(void* self) {
    return QLineEdit_EchoMode((QLineEdit*)self);
}

void k_treewidgetsearchline_set_echo_mode(void* self, int32_t echoMode) {
    QLineEdit_SetEchoMode((QLineEdit*)self, echoMode);
}

bool k_treewidgetsearchline_is_read_only(void* self) {
    return QLineEdit_IsReadOnly((QLineEdit*)self);
}

void k_treewidgetsearchline_set_read_only(void* self, bool readOnly) {
    QLineEdit_SetReadOnly((QLineEdit*)self, readOnly);
}

void k_treewidgetsearchline_set_validator(void* self, void* validator) {
    QLineEdit_SetValidator((QLineEdit*)self, (QValidator*)validator);
}

const QValidator* k_treewidgetsearchline_validator(void* self) {
    return QLineEdit_Validator((QLineEdit*)self);
}

void k_treewidgetsearchline_set_completer(void* self, void* completer) {
    QLineEdit_SetCompleter((QLineEdit*)self, (QCompleter*)completer);
}

QCompleter* k_treewidgetsearchline_completer(void* self) {
    return QLineEdit_Completer((QLineEdit*)self);
}

int32_t k_treewidgetsearchline_cursor_position(void* self) {
    return QLineEdit_CursorPosition((QLineEdit*)self);
}

void k_treewidgetsearchline_set_cursor_position(void* self, int cursorPosition) {
    QLineEdit_SetCursorPosition((QLineEdit*)self, cursorPosition);
}

int32_t k_treewidgetsearchline_cursor_position_at(void* self, void* pos) {
    return QLineEdit_CursorPositionAt((QLineEdit*)self, (QPoint*)pos);
}

void k_treewidgetsearchline_set_alignment(void* self, int64_t flag) {
    QLineEdit_SetAlignment((QLineEdit*)self, flag);
}

int64_t k_treewidgetsearchline_alignment(void* self) {
    return QLineEdit_Alignment((QLineEdit*)self);
}

void k_treewidgetsearchline_cursor_forward(void* self, bool mark) {
    QLineEdit_CursorForward((QLineEdit*)self, mark);
}

void k_treewidgetsearchline_cursor_backward(void* self, bool mark) {
    QLineEdit_CursorBackward((QLineEdit*)self, mark);
}

void k_treewidgetsearchline_cursor_word_forward(void* self, bool mark) {
    QLineEdit_CursorWordForward((QLineEdit*)self, mark);
}

void k_treewidgetsearchline_cursor_word_backward(void* self, bool mark) {
    QLineEdit_CursorWordBackward((QLineEdit*)self, mark);
}

void k_treewidgetsearchline_backspace(void* self) {
    QLineEdit_Backspace((QLineEdit*)self);
}

void k_treewidgetsearchline_del(void* self) {
    QLineEdit_Del((QLineEdit*)self);
}

void k_treewidgetsearchline_home(void* self, bool mark) {
    QLineEdit_Home((QLineEdit*)self, mark);
}

void k_treewidgetsearchline_end(void* self, bool mark) {
    QLineEdit_End((QLineEdit*)self, mark);
}

bool k_treewidgetsearchline_is_modified(void* self) {
    return QLineEdit_IsModified((QLineEdit*)self);
}

void k_treewidgetsearchline_set_modified(void* self, bool modified) {
    QLineEdit_SetModified((QLineEdit*)self, modified);
}

void k_treewidgetsearchline_set_selection(void* self, int param1, int param2) {
    QLineEdit_SetSelection((QLineEdit*)self, param1, param2);
}

bool k_treewidgetsearchline_has_selected_text(void* self) {
    return QLineEdit_HasSelectedText((QLineEdit*)self);
}

const char* k_treewidgetsearchline_selected_text(void* self) {
    libqt_string _str = QLineEdit_SelectedText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_treewidgetsearchline_selection_start(void* self) {
    return QLineEdit_SelectionStart((QLineEdit*)self);
}

int32_t k_treewidgetsearchline_selection_end(void* self) {
    return QLineEdit_SelectionEnd((QLineEdit*)self);
}

int32_t k_treewidgetsearchline_selection_length(void* self) {
    return QLineEdit_SelectionLength((QLineEdit*)self);
}

bool k_treewidgetsearchline_is_undo_available(void* self) {
    return QLineEdit_IsUndoAvailable((QLineEdit*)self);
}

bool k_treewidgetsearchline_is_redo_available(void* self) {
    return QLineEdit_IsRedoAvailable((QLineEdit*)self);
}

void k_treewidgetsearchline_set_drag_enabled(void* self, bool b) {
    QLineEdit_SetDragEnabled((QLineEdit*)self, b);
}

bool k_treewidgetsearchline_drag_enabled(void* self) {
    return QLineEdit_DragEnabled((QLineEdit*)self);
}

void k_treewidgetsearchline_set_cursor_move_style(void* self, int32_t style) {
    QLineEdit_SetCursorMoveStyle((QLineEdit*)self, style);
}

int32_t k_treewidgetsearchline_cursor_move_style(void* self) {
    return QLineEdit_CursorMoveStyle((QLineEdit*)self);
}

const char* k_treewidgetsearchline_input_mask(void* self) {
    libqt_string _str = QLineEdit_InputMask((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_input_mask(void* self, const char* inputMask) {
    QLineEdit_SetInputMask((QLineEdit*)self, qstring(inputMask));
}

bool k_treewidgetsearchline_has_acceptable_input(void* self) {
    return QLineEdit_HasAcceptableInput((QLineEdit*)self);
}

void k_treewidgetsearchline_set_text_margins(void* self, int left, int top, int right, int bottom) {
    QLineEdit_SetTextMargins((QLineEdit*)self, left, top, right, bottom);
}

void k_treewidgetsearchline_set_text_margins2(void* self, void* margins) {
    QLineEdit_SetTextMargins2((QLineEdit*)self, (QMargins*)margins);
}

QMargins* k_treewidgetsearchline_text_margins(void* self) {
    return QLineEdit_TextMargins((QLineEdit*)self);
}

void k_treewidgetsearchline_add_action(void* self, void* action, int32_t position) {
    QLineEdit_AddAction((QLineEdit*)self, (QAction*)action, position);
}

QAction* k_treewidgetsearchline_add_action2(void* self, void* icon, int32_t position) {
    return QLineEdit_AddAction2((QLineEdit*)self, (QIcon*)icon, position);
}

void k_treewidgetsearchline_set_text(void* self, const char* text) {
    QLineEdit_SetText((QLineEdit*)self, qstring(text));
}

void k_treewidgetsearchline_clear(void* self) {
    QLineEdit_Clear((QLineEdit*)self);
}

void k_treewidgetsearchline_select_all(void* self) {
    QLineEdit_SelectAll((QLineEdit*)self);
}

void k_treewidgetsearchline_undo(void* self) {
    QLineEdit_Undo((QLineEdit*)self);
}

void k_treewidgetsearchline_redo(void* self) {
    QLineEdit_Redo((QLineEdit*)self);
}

void k_treewidgetsearchline_cut(void* self) {
    QLineEdit_Cut((QLineEdit*)self);
}

void k_treewidgetsearchline_copy(void* self) {
    QLineEdit_Copy((QLineEdit*)self);
}

void k_treewidgetsearchline_paste(void* self) {
    QLineEdit_Paste((QLineEdit*)self);
}

void k_treewidgetsearchline_deselect(void* self) {
    QLineEdit_Deselect((QLineEdit*)self);
}

void k_treewidgetsearchline_insert(void* self, const char* param1) {
    QLineEdit_Insert((QLineEdit*)self, qstring(param1));
}

QMenu* k_treewidgetsearchline_create_standard_context_menu(void* self) {
    return QLineEdit_CreateStandardContextMenu((QLineEdit*)self);
}

void k_treewidgetsearchline_text_changed(void* self, const char* param1) {
    QLineEdit_TextChanged((QLineEdit*)self, qstring(param1));
}

void k_treewidgetsearchline_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_text_edited(void* self, const char* param1) {
    QLineEdit_TextEdited((QLineEdit*)self, qstring(param1));
}

void k_treewidgetsearchline_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextEdited((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_cursor_position_changed(void* self, int param1, int param2) {
    QLineEdit_CursorPositionChanged((QLineEdit*)self, param1, param2);
}

void k_treewidgetsearchline_on_cursor_position_changed(void* self, void (*callback)(void*, int, int)) {
    QLineEdit_Connect_CursorPositionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_return_pressed(void* self) {
    QLineEdit_ReturnPressed((QLineEdit*)self);
}

void k_treewidgetsearchline_on_return_pressed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_ReturnPressed((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_editing_finished(void* self) {
    QLineEdit_EditingFinished((QLineEdit*)self);
}

void k_treewidgetsearchline_on_editing_finished(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_EditingFinished((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_selection_changed(void* self) {
    QLineEdit_SelectionChanged((QLineEdit*)self);
}

void k_treewidgetsearchline_on_selection_changed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_SelectionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_input_rejected(void* self) {
    QLineEdit_InputRejected((QLineEdit*)self);
}

void k_treewidgetsearchline_on_input_rejected(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_InputRejected((QLineEdit*)self, (intptr_t)callback);
}

QVariant* k_treewidgetsearchline_input_method_query2(void* self, int64_t property, void* argument) {
    return QLineEdit_InputMethodQuery2((QLineEdit*)self, property, (QVariant*)argument);
}

void k_treewidgetsearchline_cursor_forward2(void* self, bool mark, int steps) {
    QLineEdit_CursorForward2((QLineEdit*)self, mark, steps);
}

void k_treewidgetsearchline_cursor_backward2(void* self, bool mark, int steps) {
    QLineEdit_CursorBackward2((QLineEdit*)self, mark, steps);
}

uintptr_t k_treewidgetsearchline_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_treewidgetsearchline_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_treewidgetsearchline_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_treewidgetsearchline_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_treewidgetsearchline_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_treewidgetsearchline_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_treewidgetsearchline_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_treewidgetsearchline_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_treewidgetsearchline_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_treewidgetsearchline_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_treewidgetsearchline_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_treewidgetsearchline_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_treewidgetsearchline_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_treewidgetsearchline_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_treewidgetsearchline_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_treewidgetsearchline_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_treewidgetsearchline_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_treewidgetsearchline_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_treewidgetsearchline_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_treewidgetsearchline_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_treewidgetsearchline_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_treewidgetsearchline_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_treewidgetsearchline_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_treewidgetsearchline_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_treewidgetsearchline_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_treewidgetsearchline_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_treewidgetsearchline_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_treewidgetsearchline_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_treewidgetsearchline_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_treewidgetsearchline_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_treewidgetsearchline_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_treewidgetsearchline_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_treewidgetsearchline_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_treewidgetsearchline_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_treewidgetsearchline_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_treewidgetsearchline_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_treewidgetsearchline_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_treewidgetsearchline_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_treewidgetsearchline_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_treewidgetsearchline_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_treewidgetsearchline_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_treewidgetsearchline_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_treewidgetsearchline_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_treewidgetsearchline_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_treewidgetsearchline_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_treewidgetsearchline_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_treewidgetsearchline_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_treewidgetsearchline_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_treewidgetsearchline_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_treewidgetsearchline_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_treewidgetsearchline_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_treewidgetsearchline_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_treewidgetsearchline_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_treewidgetsearchline_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_treewidgetsearchline_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_treewidgetsearchline_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_treewidgetsearchline_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_treewidgetsearchline_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_treewidgetsearchline_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_treewidgetsearchline_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_treewidgetsearchline_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_treewidgetsearchline_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_treewidgetsearchline_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_treewidgetsearchline_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_treewidgetsearchline_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_treewidgetsearchline_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_treewidgetsearchline_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_treewidgetsearchline_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_treewidgetsearchline_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_treewidgetsearchline_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_treewidgetsearchline_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_treewidgetsearchline_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_treewidgetsearchline_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_treewidgetsearchline_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_treewidgetsearchline_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_treewidgetsearchline_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_treewidgetsearchline_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_treewidgetsearchline_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_treewidgetsearchline_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_treewidgetsearchline_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_treewidgetsearchline_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_treewidgetsearchline_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_treewidgetsearchline_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_treewidgetsearchline_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_treewidgetsearchline_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_treewidgetsearchline_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_treewidgetsearchline_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_treewidgetsearchline_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_treewidgetsearchline_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_treewidgetsearchline_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_treewidgetsearchline_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_treewidgetsearchline_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_treewidgetsearchline_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_treewidgetsearchline_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_treewidgetsearchline_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_treewidgetsearchline_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_treewidgetsearchline_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_treewidgetsearchline_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_treewidgetsearchline_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_treewidgetsearchline_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_treewidgetsearchline_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_treewidgetsearchline_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_treewidgetsearchline_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_treewidgetsearchline_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_treewidgetsearchline_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_treewidgetsearchline_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_treewidgetsearchline_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_treewidgetsearchline_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_treewidgetsearchline_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_treewidgetsearchline_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_treewidgetsearchline_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_treewidgetsearchline_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_treewidgetsearchline_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_treewidgetsearchline_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_treewidgetsearchline_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_treewidgetsearchline_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_treewidgetsearchline_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_treewidgetsearchline_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_treewidgetsearchline_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_treewidgetsearchline_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_treewidgetsearchline_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_treewidgetsearchline_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_treewidgetsearchline_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_treewidgetsearchline_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_treewidgetsearchline_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_treewidgetsearchline_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_treewidgetsearchline_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_treewidgetsearchline_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_treewidgetsearchline_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_treewidgetsearchline_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_treewidgetsearchline_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_treewidgetsearchline_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_treewidgetsearchline_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_treewidgetsearchline_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_treewidgetsearchline_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_treewidgetsearchline_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_treewidgetsearchline_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_treewidgetsearchline_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_treewidgetsearchline_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_treewidgetsearchline_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_treewidgetsearchline_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_treewidgetsearchline_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_treewidgetsearchline_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_treewidgetsearchline_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_treewidgetsearchline_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_treewidgetsearchline_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_treewidgetsearchline_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_treewidgetsearchline_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_treewidgetsearchline_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_treewidgetsearchline_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_treewidgetsearchline_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_treewidgetsearchline_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_treewidgetsearchline_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_treewidgetsearchline_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_treewidgetsearchline_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_treewidgetsearchline_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_treewidgetsearchline_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_treewidgetsearchline_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_treewidgetsearchline_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_treewidgetsearchline_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_treewidgetsearchline_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_treewidgetsearchline_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_treewidgetsearchline_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_treewidgetsearchline_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_treewidgetsearchline_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_treewidgetsearchline_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_treewidgetsearchline_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_treewidgetsearchline_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_treewidgetsearchline_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_treewidgetsearchline_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_treewidgetsearchline_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_treewidgetsearchline_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_treewidgetsearchline_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_treewidgetsearchline_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_treewidgetsearchline_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_treewidgetsearchline_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_treewidgetsearchline_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_treewidgetsearchline_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_treewidgetsearchline_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_treewidgetsearchline_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_treewidgetsearchline_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_treewidgetsearchline_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_treewidgetsearchline_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_treewidgetsearchline_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t k_treewidgetsearchline_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_treewidgetsearchline_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_treewidgetsearchline_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_treewidgetsearchline_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_treewidgetsearchline_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_treewidgetsearchline_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_treewidgetsearchline_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_treewidgetsearchline_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_treewidgetsearchline_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_treewidgetsearchline_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_treewidgetsearchline_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_treewidgetsearchline_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_treewidgetsearchline_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_treewidgetsearchline_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_treewidgetsearchline_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_treewidgetsearchline_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_treewidgetsearchline_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_treewidgetsearchline_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_treewidgetsearchline_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_treewidgetsearchline_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_treewidgetsearchline_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_treewidgetsearchline_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_treewidgetsearchline_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_treewidgetsearchline_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_treewidgetsearchline_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_treewidgetsearchline_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_treewidgetsearchline_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_treewidgetsearchline_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_treewidgetsearchline_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_treewidgetsearchline_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_treewidgetsearchline_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_treewidgetsearchline_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_treewidgetsearchline_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_treewidgetsearchline_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_treewidgetsearchline_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_treewidgetsearchline_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_treewidgetsearchline_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_treewidgetsearchline_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_treewidgetsearchline_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_treewidgetsearchline_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_treewidgetsearchline_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_treewidgetsearchline_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_treewidgetsearchline_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_treewidgetsearchline_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_treewidgetsearchline_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_treewidgetsearchline_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_treewidgetsearchline_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_treewidgetsearchline_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_treewidgetsearchline_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_treewidgetsearchline_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_treewidgetsearchline_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_treewidgetsearchline_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_treewidgetsearchline_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_treewidgetsearchline_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_treewidgetsearchline_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_treewidgetsearchline_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_treewidgetsearchline_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_treewidgetsearchline_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_treewidgetsearchline_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_treewidgetsearchline_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_treewidgetsearchline_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_treewidgetsearchline_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_treewidgetsearchline_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_treewidgetsearchline_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_treewidgetsearchline_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_treewidgetsearchline_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_treewidgetsearchline_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_treewidgetsearchline_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_treewidgetsearchline_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_treewidgetsearchline_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_treewidgetsearchline_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_treewidgetsearchline_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_treewidgetsearchline_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_treewidgetsearchline_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_treewidgetsearchline_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_treewidgetsearchline_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_treewidgetsearchline_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_treewidgetsearchline_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_treewidgetsearchline_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_treewidgetsearchline_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_treewidgetsearchline_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_treewidgetsearchline_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_treewidgetsearchline_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_treewidgetsearchline_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_treewidgetsearchline_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_treewidgetsearchline_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_treewidgetsearchline_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_treewidgetsearchline_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_treewidgetsearchline_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_treewidgetsearchline_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_treewidgetsearchline_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_treewidgetsearchline_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_treewidgetsearchline_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_treewidgetsearchline_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_treewidgetsearchline_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_treewidgetsearchline_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_treewidgetsearchline_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_treewidgetsearchline_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_treewidgetsearchline_dynamic_property_names");
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

QBindingStorage* k_treewidgetsearchline_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_treewidgetsearchline_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_treewidgetsearchline_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_treewidgetsearchline_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_treewidgetsearchline_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_treewidgetsearchline_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_treewidgetsearchline_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_treewidgetsearchline_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_treewidgetsearchline_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_treewidgetsearchline_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_treewidgetsearchline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_treewidgetsearchline_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_treewidgetsearchline_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_treewidgetsearchline_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_treewidgetsearchline_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_treewidgetsearchline_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_treewidgetsearchline_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_treewidgetsearchline_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_treewidgetsearchline_size_hint(void* self) {
    return KTreeWidgetSearchLine_SizeHint((KTreeWidgetSearchLine*)self);
}

QSize* k_treewidgetsearchline_qbase_size_hint(void* self) {
    return KTreeWidgetSearchLine_QBaseSizeHint((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_size_hint(void* self, QSize* (*callback)()) {
    KTreeWidgetSearchLine_OnSizeHint((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QSize* k_treewidgetsearchline_minimum_size_hint(void* self) {
    return KTreeWidgetSearchLine_MinimumSizeHint((KTreeWidgetSearchLine*)self);
}

QSize* k_treewidgetsearchline_qbase_minimum_size_hint(void* self) {
    return KTreeWidgetSearchLine_QBaseMinimumSizeHint((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KTreeWidgetSearchLine_OnMinimumSizeHint((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_mouse_press_event(void* self, void* param1) {
    KTreeWidgetSearchLine_MousePressEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_qbase_mouse_press_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseMousePressEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnMousePressEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_mouse_move_event(void* self, void* param1) {
    KTreeWidgetSearchLine_MouseMoveEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_qbase_mouse_move_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseMouseMoveEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnMouseMoveEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_mouse_release_event(void* self, void* param1) {
    KTreeWidgetSearchLine_MouseReleaseEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_qbase_mouse_release_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseMouseReleaseEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnMouseReleaseEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_mouse_double_click_event(void* self, void* param1) {
    KTreeWidgetSearchLine_MouseDoubleClickEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_qbase_mouse_double_click_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseMouseDoubleClickEvent((KTreeWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_treewidgetsearchline_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnMouseDoubleClickEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_key_press_event(void* self, void* param1) {
    KTreeWidgetSearchLine_KeyPressEvent((KTreeWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_treewidgetsearchline_qbase_key_press_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseKeyPressEvent((KTreeWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_treewidgetsearchline_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnKeyPressEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_key_release_event(void* self, void* param1) {
    KTreeWidgetSearchLine_KeyReleaseEvent((KTreeWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_treewidgetsearchline_qbase_key_release_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseKeyReleaseEvent((KTreeWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_treewidgetsearchline_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnKeyReleaseEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_focus_in_event(void* self, void* param1) {
    KTreeWidgetSearchLine_FocusInEvent((KTreeWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_treewidgetsearchline_qbase_focus_in_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseFocusInEvent((KTreeWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_treewidgetsearchline_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnFocusInEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_focus_out_event(void* self, void* param1) {
    KTreeWidgetSearchLine_FocusOutEvent((KTreeWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_treewidgetsearchline_qbase_focus_out_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseFocusOutEvent((KTreeWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_treewidgetsearchline_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnFocusOutEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_paint_event(void* self, void* param1) {
    KTreeWidgetSearchLine_PaintEvent((KTreeWidgetSearchLine*)self, (QPaintEvent*)param1);
}

void k_treewidgetsearchline_qbase_paint_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBasePaintEvent((KTreeWidgetSearchLine*)self, (QPaintEvent*)param1);
}

void k_treewidgetsearchline_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnPaintEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_drag_enter_event(void* self, void* param1) {
    KTreeWidgetSearchLine_DragEnterEvent((KTreeWidgetSearchLine*)self, (QDragEnterEvent*)param1);
}

void k_treewidgetsearchline_qbase_drag_enter_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseDragEnterEvent((KTreeWidgetSearchLine*)self, (QDragEnterEvent*)param1);
}

void k_treewidgetsearchline_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDragEnterEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_drag_move_event(void* self, void* e) {
    KTreeWidgetSearchLine_DragMoveEvent((KTreeWidgetSearchLine*)self, (QDragMoveEvent*)e);
}

void k_treewidgetsearchline_qbase_drag_move_event(void* self, void* e) {
    KTreeWidgetSearchLine_QBaseDragMoveEvent((KTreeWidgetSearchLine*)self, (QDragMoveEvent*)e);
}

void k_treewidgetsearchline_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDragMoveEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_drag_leave_event(void* self, void* e) {
    KTreeWidgetSearchLine_DragLeaveEvent((KTreeWidgetSearchLine*)self, (QDragLeaveEvent*)e);
}

void k_treewidgetsearchline_qbase_drag_leave_event(void* self, void* e) {
    KTreeWidgetSearchLine_QBaseDragLeaveEvent((KTreeWidgetSearchLine*)self, (QDragLeaveEvent*)e);
}

void k_treewidgetsearchline_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDragLeaveEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_drop_event(void* self, void* param1) {
    KTreeWidgetSearchLine_DropEvent((KTreeWidgetSearchLine*)self, (QDropEvent*)param1);
}

void k_treewidgetsearchline_qbase_drop_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseDropEvent((KTreeWidgetSearchLine*)self, (QDropEvent*)param1);
}

void k_treewidgetsearchline_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDropEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_change_event(void* self, void* param1) {
    KTreeWidgetSearchLine_ChangeEvent((KTreeWidgetSearchLine*)self, (QEvent*)param1);
}

void k_treewidgetsearchline_qbase_change_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseChangeEvent((KTreeWidgetSearchLine*)self, (QEvent*)param1);
}

void k_treewidgetsearchline_on_change_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnChangeEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_input_method_event(void* self, void* param1) {
    KTreeWidgetSearchLine_InputMethodEvent((KTreeWidgetSearchLine*)self, (QInputMethodEvent*)param1);
}

void k_treewidgetsearchline_qbase_input_method_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseInputMethodEvent((KTreeWidgetSearchLine*)self, (QInputMethodEvent*)param1);
}

void k_treewidgetsearchline_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnInputMethodEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_init_style_option(void* self, void* option) {
    KTreeWidgetSearchLine_InitStyleOption((KTreeWidgetSearchLine*)self, (QStyleOptionFrame*)option);
}

void k_treewidgetsearchline_qbase_init_style_option(void* self, void* option) {
    KTreeWidgetSearchLine_QBaseInitStyleOption((KTreeWidgetSearchLine*)self, (QStyleOptionFrame*)option);
}

void k_treewidgetsearchline_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnInitStyleOption((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QVariant* k_treewidgetsearchline_input_method_query(void* self, int64_t param1) {
    return KTreeWidgetSearchLine_InputMethodQuery((KTreeWidgetSearchLine*)self, param1);
}

QVariant* k_treewidgetsearchline_qbase_input_method_query(void* self, int64_t param1) {
    return KTreeWidgetSearchLine_QBaseInputMethodQuery((KTreeWidgetSearchLine*)self, param1);
}

void k_treewidgetsearchline_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KTreeWidgetSearchLine_OnInputMethodQuery((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_timer_event(void* self, void* param1) {
    KTreeWidgetSearchLine_TimerEvent((KTreeWidgetSearchLine*)self, (QTimerEvent*)param1);
}

void k_treewidgetsearchline_qbase_timer_event(void* self, void* param1) {
    KTreeWidgetSearchLine_QBaseTimerEvent((KTreeWidgetSearchLine*)self, (QTimerEvent*)param1);
}

void k_treewidgetsearchline_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnTimerEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_dev_type(void* self) {
    return KTreeWidgetSearchLine_DevType((KTreeWidgetSearchLine*)self);
}

int32_t k_treewidgetsearchline_qbase_dev_type(void* self) {
    return KTreeWidgetSearchLine_QBaseDevType((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_dev_type(void* self, int32_t (*callback)()) {
    KTreeWidgetSearchLine_OnDevType((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_set_visible(void* self, bool visible) {
    KTreeWidgetSearchLine_SetVisible((KTreeWidgetSearchLine*)self, visible);
}

void k_treewidgetsearchline_qbase_set_visible(void* self, bool visible) {
    KTreeWidgetSearchLine_QBaseSetVisible((KTreeWidgetSearchLine*)self, visible);
}

void k_treewidgetsearchline_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KTreeWidgetSearchLine_OnSetVisible((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_height_for_width(void* self, int param1) {
    return KTreeWidgetSearchLine_HeightForWidth((KTreeWidgetSearchLine*)self, param1);
}

int32_t k_treewidgetsearchline_qbase_height_for_width(void* self, int param1) {
    return KTreeWidgetSearchLine_QBaseHeightForWidth((KTreeWidgetSearchLine*)self, param1);
}

void k_treewidgetsearchline_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KTreeWidgetSearchLine_OnHeightForWidth((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_has_height_for_width(void* self) {
    return KTreeWidgetSearchLine_HasHeightForWidth((KTreeWidgetSearchLine*)self);
}

bool k_treewidgetsearchline_qbase_has_height_for_width(void* self) {
    return KTreeWidgetSearchLine_QBaseHasHeightForWidth((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_has_height_for_width(void* self, bool (*callback)()) {
    KTreeWidgetSearchLine_OnHasHeightForWidth((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QPaintEngine* k_treewidgetsearchline_paint_engine(void* self) {
    return KTreeWidgetSearchLine_PaintEngine((KTreeWidgetSearchLine*)self);
}

QPaintEngine* k_treewidgetsearchline_qbase_paint_engine(void* self) {
    return KTreeWidgetSearchLine_QBasePaintEngine((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KTreeWidgetSearchLine_OnPaintEngine((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_wheel_event(void* self, void* event) {
    KTreeWidgetSearchLine_WheelEvent((KTreeWidgetSearchLine*)self, (QWheelEvent*)event);
}

void k_treewidgetsearchline_qbase_wheel_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseWheelEvent((KTreeWidgetSearchLine*)self, (QWheelEvent*)event);
}

void k_treewidgetsearchline_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnWheelEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_enter_event(void* self, void* event) {
    KTreeWidgetSearchLine_EnterEvent((KTreeWidgetSearchLine*)self, (QEnterEvent*)event);
}

void k_treewidgetsearchline_qbase_enter_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseEnterEvent((KTreeWidgetSearchLine*)self, (QEnterEvent*)event);
}

void k_treewidgetsearchline_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnEnterEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_leave_event(void* self, void* event) {
    KTreeWidgetSearchLine_LeaveEvent((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

void k_treewidgetsearchline_qbase_leave_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseLeaveEvent((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

void k_treewidgetsearchline_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnLeaveEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_move_event(void* self, void* event) {
    KTreeWidgetSearchLine_MoveEvent((KTreeWidgetSearchLine*)self, (QMoveEvent*)event);
}

void k_treewidgetsearchline_qbase_move_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseMoveEvent((KTreeWidgetSearchLine*)self, (QMoveEvent*)event);
}

void k_treewidgetsearchline_on_move_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnMoveEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_resize_event(void* self, void* event) {
    KTreeWidgetSearchLine_ResizeEvent((KTreeWidgetSearchLine*)self, (QResizeEvent*)event);
}

void k_treewidgetsearchline_qbase_resize_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseResizeEvent((KTreeWidgetSearchLine*)self, (QResizeEvent*)event);
}

void k_treewidgetsearchline_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnResizeEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_close_event(void* self, void* event) {
    KTreeWidgetSearchLine_CloseEvent((KTreeWidgetSearchLine*)self, (QCloseEvent*)event);
}

void k_treewidgetsearchline_qbase_close_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseCloseEvent((KTreeWidgetSearchLine*)self, (QCloseEvent*)event);
}

void k_treewidgetsearchline_on_close_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnCloseEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_tablet_event(void* self, void* event) {
    KTreeWidgetSearchLine_TabletEvent((KTreeWidgetSearchLine*)self, (QTabletEvent*)event);
}

void k_treewidgetsearchline_qbase_tablet_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseTabletEvent((KTreeWidgetSearchLine*)self, (QTabletEvent*)event);
}

void k_treewidgetsearchline_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnTabletEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_action_event(void* self, void* event) {
    KTreeWidgetSearchLine_ActionEvent((KTreeWidgetSearchLine*)self, (QActionEvent*)event);
}

void k_treewidgetsearchline_qbase_action_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseActionEvent((KTreeWidgetSearchLine*)self, (QActionEvent*)event);
}

void k_treewidgetsearchline_on_action_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnActionEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_show_event(void* self, void* event) {
    KTreeWidgetSearchLine_ShowEvent((KTreeWidgetSearchLine*)self, (QShowEvent*)event);
}

void k_treewidgetsearchline_qbase_show_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseShowEvent((KTreeWidgetSearchLine*)self, (QShowEvent*)event);
}

void k_treewidgetsearchline_on_show_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnShowEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_hide_event(void* self, void* event) {
    KTreeWidgetSearchLine_HideEvent((KTreeWidgetSearchLine*)self, (QHideEvent*)event);
}

void k_treewidgetsearchline_qbase_hide_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseHideEvent((KTreeWidgetSearchLine*)self, (QHideEvent*)event);
}

void k_treewidgetsearchline_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnHideEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KTreeWidgetSearchLine_NativeEvent((KTreeWidgetSearchLine*)self, qstring(eventType), message, result);
}

bool k_treewidgetsearchline_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KTreeWidgetSearchLine_QBaseNativeEvent((KTreeWidgetSearchLine*)self, qstring(eventType), message, result);
}

void k_treewidgetsearchline_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KTreeWidgetSearchLine_OnNativeEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_metric(void* self, int32_t param1) {
    return KTreeWidgetSearchLine_Metric((KTreeWidgetSearchLine*)self, param1);
}

int32_t k_treewidgetsearchline_qbase_metric(void* self, int32_t param1) {
    return KTreeWidgetSearchLine_QBaseMetric((KTreeWidgetSearchLine*)self, param1);
}

void k_treewidgetsearchline_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KTreeWidgetSearchLine_OnMetric((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_init_painter(void* self, void* painter) {
    KTreeWidgetSearchLine_InitPainter((KTreeWidgetSearchLine*)self, (QPainter*)painter);
}

void k_treewidgetsearchline_qbase_init_painter(void* self, void* painter) {
    KTreeWidgetSearchLine_QBaseInitPainter((KTreeWidgetSearchLine*)self, (QPainter*)painter);
}

void k_treewidgetsearchline_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnInitPainter((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QPaintDevice* k_treewidgetsearchline_redirected(void* self, void* offset) {
    return KTreeWidgetSearchLine_Redirected((KTreeWidgetSearchLine*)self, (QPoint*)offset);
}

QPaintDevice* k_treewidgetsearchline_qbase_redirected(void* self, void* offset) {
    return KTreeWidgetSearchLine_QBaseRedirected((KTreeWidgetSearchLine*)self, (QPoint*)offset);
}

void k_treewidgetsearchline_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnRedirected((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QPainter* k_treewidgetsearchline_shared_painter(void* self) {
    return KTreeWidgetSearchLine_SharedPainter((KTreeWidgetSearchLine*)self);
}

QPainter* k_treewidgetsearchline_qbase_shared_painter(void* self) {
    return KTreeWidgetSearchLine_QBaseSharedPainter((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_shared_painter(void* self, QPainter* (*callback)()) {
    KTreeWidgetSearchLine_OnSharedPainter((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_focus_next_prev_child(void* self, bool next) {
    return KTreeWidgetSearchLine_FocusNextPrevChild((KTreeWidgetSearchLine*)self, next);
}

bool k_treewidgetsearchline_qbase_focus_next_prev_child(void* self, bool next) {
    return KTreeWidgetSearchLine_QBaseFocusNextPrevChild((KTreeWidgetSearchLine*)self, next);
}

void k_treewidgetsearchline_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KTreeWidgetSearchLine_OnFocusNextPrevChild((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_event_filter(void* self, void* watched, void* event) {
    return KTreeWidgetSearchLine_EventFilter((KTreeWidgetSearchLine*)self, (QObject*)watched, (QEvent*)event);
}

bool k_treewidgetsearchline_qbase_event_filter(void* self, void* watched, void* event) {
    return KTreeWidgetSearchLine_QBaseEventFilter((KTreeWidgetSearchLine*)self, (QObject*)watched, (QEvent*)event);
}

void k_treewidgetsearchline_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTreeWidgetSearchLine_OnEventFilter((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_child_event(void* self, void* event) {
    KTreeWidgetSearchLine_ChildEvent((KTreeWidgetSearchLine*)self, (QChildEvent*)event);
}

void k_treewidgetsearchline_qbase_child_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseChildEvent((KTreeWidgetSearchLine*)self, (QChildEvent*)event);
}

void k_treewidgetsearchline_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnChildEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_custom_event(void* self, void* event) {
    KTreeWidgetSearchLine_CustomEvent((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

void k_treewidgetsearchline_qbase_custom_event(void* self, void* event) {
    KTreeWidgetSearchLine_QBaseCustomEvent((KTreeWidgetSearchLine*)self, (QEvent*)event);
}

void k_treewidgetsearchline_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnCustomEvent((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_connect_notify(void* self, void* signal) {
    KTreeWidgetSearchLine_ConnectNotify((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_treewidgetsearchline_qbase_connect_notify(void* self, void* signal) {
    KTreeWidgetSearchLine_QBaseConnectNotify((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_treewidgetsearchline_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnConnectNotify((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_disconnect_notify(void* self, void* signal) {
    KTreeWidgetSearchLine_DisconnectNotify((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_treewidgetsearchline_qbase_disconnect_notify(void* self, void* signal) {
    KTreeWidgetSearchLine_QBaseDisconnectNotify((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_treewidgetsearchline_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnDisconnectNotify((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QRect* k_treewidgetsearchline_cursor_rect(void* self) {
    return KTreeWidgetSearchLine_CursorRect((KTreeWidgetSearchLine*)self);
}

QRect* k_treewidgetsearchline_qbase_cursor_rect(void* self) {
    return KTreeWidgetSearchLine_QBaseCursorRect((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_cursor_rect(void* self, QRect* (*callback)()) {
    KTreeWidgetSearchLine_OnCursorRect((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_update_micro_focus(void* self) {
    KTreeWidgetSearchLine_UpdateMicroFocus((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_qbase_update_micro_focus(void* self) {
    KTreeWidgetSearchLine_QBaseUpdateMicroFocus((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_update_micro_focus(void* self, void (*callback)()) {
    KTreeWidgetSearchLine_OnUpdateMicroFocus((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_create(void* self) {
    KTreeWidgetSearchLine_Create((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_qbase_create(void* self) {
    KTreeWidgetSearchLine_QBaseCreate((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_create(void* self, void (*callback)()) {
    KTreeWidgetSearchLine_OnCreate((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_destroy(void* self) {
    KTreeWidgetSearchLine_Destroy((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_qbase_destroy(void* self) {
    KTreeWidgetSearchLine_QBaseDestroy((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_destroy(void* self, void (*callback)()) {
    KTreeWidgetSearchLine_OnDestroy((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_focus_next_child(void* self) {
    return KTreeWidgetSearchLine_FocusNextChild((KTreeWidgetSearchLine*)self);
}

bool k_treewidgetsearchline_qbase_focus_next_child(void* self) {
    return KTreeWidgetSearchLine_QBaseFocusNextChild((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_focus_next_child(void* self, bool (*callback)()) {
    KTreeWidgetSearchLine_OnFocusNextChild((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_focus_previous_child(void* self) {
    return KTreeWidgetSearchLine_FocusPreviousChild((KTreeWidgetSearchLine*)self);
}

bool k_treewidgetsearchline_qbase_focus_previous_child(void* self) {
    return KTreeWidgetSearchLine_QBaseFocusPreviousChild((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_focus_previous_child(void* self, bool (*callback)()) {
    KTreeWidgetSearchLine_OnFocusPreviousChild((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

QObject* k_treewidgetsearchline_sender(void* self) {
    return KTreeWidgetSearchLine_Sender((KTreeWidgetSearchLine*)self);
}

QObject* k_treewidgetsearchline_qbase_sender(void* self) {
    return KTreeWidgetSearchLine_QBaseSender((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_sender(void* self, QObject* (*callback)()) {
    KTreeWidgetSearchLine_OnSender((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_sender_signal_index(void* self) {
    return KTreeWidgetSearchLine_SenderSignalIndex((KTreeWidgetSearchLine*)self);
}

int32_t k_treewidgetsearchline_qbase_sender_signal_index(void* self) {
    return KTreeWidgetSearchLine_QBaseSenderSignalIndex((KTreeWidgetSearchLine*)self);
}

void k_treewidgetsearchline_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTreeWidgetSearchLine_OnSenderSignalIndex((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_treewidgetsearchline_receivers(void* self, const char* signal) {
    return KTreeWidgetSearchLine_Receivers((KTreeWidgetSearchLine*)self, signal);
}

int32_t k_treewidgetsearchline_qbase_receivers(void* self, const char* signal) {
    return KTreeWidgetSearchLine_QBaseReceivers((KTreeWidgetSearchLine*)self, signal);
}

void k_treewidgetsearchline_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTreeWidgetSearchLine_OnReceivers((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_treewidgetsearchline_is_signal_connected(void* self, void* signal) {
    return KTreeWidgetSearchLine_IsSignalConnected((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

bool k_treewidgetsearchline_qbase_is_signal_connected(void* self, void* signal) {
    return KTreeWidgetSearchLine_QBaseIsSignalConnected((KTreeWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_treewidgetsearchline_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTreeWidgetSearchLine_OnIsSignalConnected((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

double k_treewidgetsearchline_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTreeWidgetSearchLine_GetDecodedMetricF((KTreeWidgetSearchLine*)self, metricA, metricB);
}

double k_treewidgetsearchline_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTreeWidgetSearchLine_QBaseGetDecodedMetricF((KTreeWidgetSearchLine*)self, metricA, metricB);
}

void k_treewidgetsearchline_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KTreeWidgetSearchLine_OnGetDecodedMetricF((KTreeWidgetSearchLine*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_treewidgetsearchline_delete(void* self) {
    KTreeWidgetSearchLine_Delete((KTreeWidgetSearchLine*)(self));
}
