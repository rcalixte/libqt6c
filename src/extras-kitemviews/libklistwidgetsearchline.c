#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqlineedit.hpp"
#include "../libqlistwidget.hpp"
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
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libklistwidgetsearchline.hpp"
#include "libklistwidgetsearchline.h"

KListWidgetSearchLine* k_listwidgetsearchline_new(void* parent) {
    return KListWidgetSearchLine_new((QWidget*)parent);
}

KListWidgetSearchLine* k_listwidgetsearchline_new2() {
    return KListWidgetSearchLine_new2();
}

KListWidgetSearchLine* k_listwidgetsearchline_new3(void* parent, void* listWidget) {
    return KListWidgetSearchLine_new3((QWidget*)parent, (QListWidget*)listWidget);
}

const QMetaObject* k_listwidgetsearchline_meta_object(void* self) {
    return KListWidgetSearchLine_MetaObject((KListWidgetSearchLine*)self);
}

void* k_listwidgetsearchline_metacast(void* self, const char* param1) {
    return KListWidgetSearchLine_Metacast((KListWidgetSearchLine*)self, param1);
}

int32_t k_listwidgetsearchline_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListWidgetSearchLine_Metacall((KListWidgetSearchLine*)self, param1, param2, param3);
}

void k_listwidgetsearchline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KListWidgetSearchLine_OnMetacall((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListWidgetSearchLine_QBaseMetacall((KListWidgetSearchLine*)self, param1, param2, param3);
}

const char* k_listwidgetsearchline_tr(const char* s) {
    libqt_string _str = KListWidgetSearchLine_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_listwidgetsearchline_case_sensitive(void* self) {
    return KListWidgetSearchLine_CaseSensitive((KListWidgetSearchLine*)self);
}

QListWidget* k_listwidgetsearchline_list_widget(void* self) {
    return KListWidgetSearchLine_ListWidget((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_update_search(void* self, const char* s) {
    KListWidgetSearchLine_UpdateSearch((KListWidgetSearchLine*)self, qstring(s));
}

void k_listwidgetsearchline_on_update_search(void* self, void (*callback)(void*, const char*)) {
    KListWidgetSearchLine_OnUpdateSearch((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_qbase_update_search(void* self, const char* s) {
    KListWidgetSearchLine_QBaseUpdateSearch((KListWidgetSearchLine*)self, qstring(s));
}

void k_listwidgetsearchline_set_case_sensitivity(void* self, int32_t cs) {
    KListWidgetSearchLine_SetCaseSensitivity((KListWidgetSearchLine*)self, cs);
}

void k_listwidgetsearchline_set_list_widget(void* self, void* lv) {
    KListWidgetSearchLine_SetListWidget((KListWidgetSearchLine*)self, (QListWidget*)lv);
}

void k_listwidgetsearchline_clear(void* self) {
    KListWidgetSearchLine_Clear((KListWidgetSearchLine*)self);
}

bool k_listwidgetsearchline_item_matches(void* self, void* item, const char* s) {
    return KListWidgetSearchLine_ItemMatches((KListWidgetSearchLine*)self, (QListWidgetItem*)item, qstring(s));
}

void k_listwidgetsearchline_on_item_matches(void* self, bool (*callback)(void*, void*, const char*)) {
    KListWidgetSearchLine_OnItemMatches((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_qbase_item_matches(void* self, void* item, const char* s) {
    return KListWidgetSearchLine_QBaseItemMatches((KListWidgetSearchLine*)self, (QListWidgetItem*)item, qstring(s));
}

bool k_listwidgetsearchline_event(void* self, void* event) {
    return KListWidgetSearchLine_Event((KListWidgetSearchLine*)self, (QEvent*)event);
}

void k_listwidgetsearchline_on_event(void* self, bool (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_qbase_event(void* self, void* event) {
    return KListWidgetSearchLine_QBaseEvent((KListWidgetSearchLine*)self, (QEvent*)event);
}

const char* k_listwidgetsearchline_tr2(const char* s, const char* c) {
    libqt_string _str = KListWidgetSearchLine_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KListWidgetSearchLine_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_text(void* self) {
    libqt_string _str = QLineEdit_Text((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_display_text(void* self) {
    libqt_string _str = QLineEdit_DisplayText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_placeholder_text(void* self) {
    libqt_string _str = QLineEdit_PlaceholderText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_placeholder_text(void* self, const char* placeholderText) {
    QLineEdit_SetPlaceholderText((QLineEdit*)self, qstring(placeholderText));
}

int32_t k_listwidgetsearchline_max_length(void* self) {
    return QLineEdit_MaxLength((QLineEdit*)self);
}

void k_listwidgetsearchline_set_max_length(void* self, int maxLength) {
    QLineEdit_SetMaxLength((QLineEdit*)self, maxLength);
}

void k_listwidgetsearchline_set_frame(void* self, bool frame) {
    QLineEdit_SetFrame((QLineEdit*)self, frame);
}

bool k_listwidgetsearchline_has_frame(void* self) {
    return QLineEdit_HasFrame((QLineEdit*)self);
}

void k_listwidgetsearchline_set_clear_button_enabled(void* self, bool enable) {
    QLineEdit_SetClearButtonEnabled((QLineEdit*)self, enable);
}

bool k_listwidgetsearchline_is_clear_button_enabled(void* self) {
    return QLineEdit_IsClearButtonEnabled((QLineEdit*)self);
}

int32_t k_listwidgetsearchline_echo_mode(void* self) {
    return QLineEdit_EchoMode((QLineEdit*)self);
}

void k_listwidgetsearchline_set_echo_mode(void* self, int32_t echoMode) {
    QLineEdit_SetEchoMode((QLineEdit*)self, echoMode);
}

bool k_listwidgetsearchline_is_read_only(void* self) {
    return QLineEdit_IsReadOnly((QLineEdit*)self);
}

void k_listwidgetsearchline_set_read_only(void* self, bool readOnly) {
    QLineEdit_SetReadOnly((QLineEdit*)self, readOnly);
}

void k_listwidgetsearchline_set_validator(void* self, void* validator) {
    QLineEdit_SetValidator((QLineEdit*)self, (QValidator*)validator);
}

const QValidator* k_listwidgetsearchline_validator(void* self) {
    return QLineEdit_Validator((QLineEdit*)self);
}

void k_listwidgetsearchline_set_completer(void* self, void* completer) {
    QLineEdit_SetCompleter((QLineEdit*)self, (QCompleter*)completer);
}

QCompleter* k_listwidgetsearchline_completer(void* self) {
    return QLineEdit_Completer((QLineEdit*)self);
}

int32_t k_listwidgetsearchline_cursor_position(void* self) {
    return QLineEdit_CursorPosition((QLineEdit*)self);
}

void k_listwidgetsearchline_set_cursor_position(void* self, int cursorPosition) {
    QLineEdit_SetCursorPosition((QLineEdit*)self, cursorPosition);
}

int32_t k_listwidgetsearchline_cursor_position_at(void* self, void* pos) {
    return QLineEdit_CursorPositionAt((QLineEdit*)self, (QPoint*)pos);
}

void k_listwidgetsearchline_set_alignment(void* self, int32_t flag) {
    QLineEdit_SetAlignment((QLineEdit*)self, flag);
}

int32_t k_listwidgetsearchline_alignment(void* self) {
    return QLineEdit_Alignment((QLineEdit*)self);
}

void k_listwidgetsearchline_cursor_forward(void* self, bool mark) {
    QLineEdit_CursorForward((QLineEdit*)self, mark);
}

void k_listwidgetsearchline_cursor_backward(void* self, bool mark) {
    QLineEdit_CursorBackward((QLineEdit*)self, mark);
}

void k_listwidgetsearchline_cursor_word_forward(void* self, bool mark) {
    QLineEdit_CursorWordForward((QLineEdit*)self, mark);
}

void k_listwidgetsearchline_cursor_word_backward(void* self, bool mark) {
    QLineEdit_CursorWordBackward((QLineEdit*)self, mark);
}

void k_listwidgetsearchline_backspace(void* self) {
    QLineEdit_Backspace((QLineEdit*)self);
}

void k_listwidgetsearchline_del(void* self) {
    QLineEdit_Del((QLineEdit*)self);
}

void k_listwidgetsearchline_home(void* self, bool mark) {
    QLineEdit_Home((QLineEdit*)self, mark);
}

void k_listwidgetsearchline_end(void* self, bool mark) {
    QLineEdit_End((QLineEdit*)self, mark);
}

bool k_listwidgetsearchline_is_modified(void* self) {
    return QLineEdit_IsModified((QLineEdit*)self);
}

void k_listwidgetsearchline_set_modified(void* self, bool modified) {
    QLineEdit_SetModified((QLineEdit*)self, modified);
}

void k_listwidgetsearchline_set_selection(void* self, int param1, int param2) {
    QLineEdit_SetSelection((QLineEdit*)self, param1, param2);
}

bool k_listwidgetsearchline_has_selected_text(void* self) {
    return QLineEdit_HasSelectedText((QLineEdit*)self);
}

const char* k_listwidgetsearchline_selected_text(void* self) {
    libqt_string _str = QLineEdit_SelectedText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_listwidgetsearchline_selection_start(void* self) {
    return QLineEdit_SelectionStart((QLineEdit*)self);
}

int32_t k_listwidgetsearchline_selection_end(void* self) {
    return QLineEdit_SelectionEnd((QLineEdit*)self);
}

int32_t k_listwidgetsearchline_selection_length(void* self) {
    return QLineEdit_SelectionLength((QLineEdit*)self);
}

bool k_listwidgetsearchline_is_undo_available(void* self) {
    return QLineEdit_IsUndoAvailable((QLineEdit*)self);
}

bool k_listwidgetsearchline_is_redo_available(void* self) {
    return QLineEdit_IsRedoAvailable((QLineEdit*)self);
}

void k_listwidgetsearchline_set_drag_enabled(void* self, bool b) {
    QLineEdit_SetDragEnabled((QLineEdit*)self, b);
}

bool k_listwidgetsearchline_drag_enabled(void* self) {
    return QLineEdit_DragEnabled((QLineEdit*)self);
}

void k_listwidgetsearchline_set_cursor_move_style(void* self, int32_t style) {
    QLineEdit_SetCursorMoveStyle((QLineEdit*)self, style);
}

int32_t k_listwidgetsearchline_cursor_move_style(void* self) {
    return QLineEdit_CursorMoveStyle((QLineEdit*)self);
}

const char* k_listwidgetsearchline_input_mask(void* self) {
    libqt_string _str = QLineEdit_InputMask((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_input_mask(void* self, const char* inputMask) {
    QLineEdit_SetInputMask((QLineEdit*)self, qstring(inputMask));
}

bool k_listwidgetsearchline_has_acceptable_input(void* self) {
    return QLineEdit_HasAcceptableInput((QLineEdit*)self);
}

void k_listwidgetsearchline_set_text_margins(void* self, int left, int top, int right, int bottom) {
    QLineEdit_SetTextMargins((QLineEdit*)self, left, top, right, bottom);
}

void k_listwidgetsearchline_set_text_margins2(void* self, void* margins) {
    QLineEdit_SetTextMargins2((QLineEdit*)self, (QMargins*)margins);
}

QMargins* k_listwidgetsearchline_text_margins(void* self) {
    return QLineEdit_TextMargins((QLineEdit*)self);
}

void k_listwidgetsearchline_add_action(void* self, void* action, int32_t position) {
    QLineEdit_AddAction((QLineEdit*)self, (QAction*)action, position);
}

QAction* k_listwidgetsearchline_add_action2(void* self, void* icon, int32_t position) {
    return QLineEdit_AddAction2((QLineEdit*)self, (QIcon*)icon, position);
}

void k_listwidgetsearchline_set_text(void* self, const char* text) {
    QLineEdit_SetText((QLineEdit*)self, qstring(text));
}

void k_listwidgetsearchline_select_all(void* self) {
    QLineEdit_SelectAll((QLineEdit*)self);
}

void k_listwidgetsearchline_undo(void* self) {
    QLineEdit_Undo((QLineEdit*)self);
}

void k_listwidgetsearchline_redo(void* self) {
    QLineEdit_Redo((QLineEdit*)self);
}

void k_listwidgetsearchline_cut(void* self) {
    QLineEdit_Cut((QLineEdit*)self);
}

void k_listwidgetsearchline_copy(void* self) {
    QLineEdit_Copy((QLineEdit*)self);
}

void k_listwidgetsearchline_paste(void* self) {
    QLineEdit_Paste((QLineEdit*)self);
}

void k_listwidgetsearchline_deselect(void* self) {
    QLineEdit_Deselect((QLineEdit*)self);
}

void k_listwidgetsearchline_insert(void* self, const char* param1) {
    QLineEdit_Insert((QLineEdit*)self, qstring(param1));
}

QMenu* k_listwidgetsearchline_create_standard_context_menu(void* self) {
    return QLineEdit_CreateStandardContextMenu((QLineEdit*)self);
}

void k_listwidgetsearchline_text_changed(void* self, const char* param1) {
    QLineEdit_TextChanged((QLineEdit*)self, qstring(param1));
}

void k_listwidgetsearchline_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_text_edited(void* self, const char* param1) {
    QLineEdit_TextEdited((QLineEdit*)self, qstring(param1));
}

void k_listwidgetsearchline_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextEdited((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_cursor_position_changed(void* self, int param1, int param2) {
    QLineEdit_CursorPositionChanged((QLineEdit*)self, param1, param2);
}

void k_listwidgetsearchline_on_cursor_position_changed(void* self, void (*callback)(void*, int, int)) {
    QLineEdit_Connect_CursorPositionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_return_pressed(void* self) {
    QLineEdit_ReturnPressed((QLineEdit*)self);
}

void k_listwidgetsearchline_on_return_pressed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_ReturnPressed((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_editing_finished(void* self) {
    QLineEdit_EditingFinished((QLineEdit*)self);
}

void k_listwidgetsearchline_on_editing_finished(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_EditingFinished((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_selection_changed(void* self) {
    QLineEdit_SelectionChanged((QLineEdit*)self);
}

void k_listwidgetsearchline_on_selection_changed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_SelectionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_input_rejected(void* self) {
    QLineEdit_InputRejected((QLineEdit*)self);
}

void k_listwidgetsearchline_on_input_rejected(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_InputRejected((QLineEdit*)self, (intptr_t)callback);
}

QVariant* k_listwidgetsearchline_input_method_query2(void* self, int64_t property, void* argument) {
    return QLineEdit_InputMethodQuery2((QLineEdit*)self, property, (QVariant*)argument);
}

void k_listwidgetsearchline_cursor_forward2(void* self, bool mark, int steps) {
    QLineEdit_CursorForward2((QLineEdit*)self, mark, steps);
}

void k_listwidgetsearchline_cursor_backward2(void* self, bool mark, int steps) {
    QLineEdit_CursorBackward2((QLineEdit*)self, mark, steps);
}

uintptr_t k_listwidgetsearchline_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_listwidgetsearchline_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_listwidgetsearchline_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_listwidgetsearchline_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_listwidgetsearchline_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_listwidgetsearchline_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_listwidgetsearchline_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_listwidgetsearchline_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_listwidgetsearchline_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_listwidgetsearchline_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_listwidgetsearchline_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_listwidgetsearchline_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_listwidgetsearchline_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_listwidgetsearchline_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_listwidgetsearchline_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_listwidgetsearchline_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_listwidgetsearchline_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_listwidgetsearchline_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_listwidgetsearchline_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_listwidgetsearchline_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_listwidgetsearchline_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_listwidgetsearchline_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_listwidgetsearchline_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_listwidgetsearchline_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_listwidgetsearchline_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_listwidgetsearchline_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_listwidgetsearchline_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_listwidgetsearchline_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_listwidgetsearchline_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_listwidgetsearchline_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_listwidgetsearchline_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_listwidgetsearchline_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_listwidgetsearchline_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_listwidgetsearchline_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_listwidgetsearchline_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_listwidgetsearchline_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_listwidgetsearchline_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_listwidgetsearchline_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_listwidgetsearchline_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_listwidgetsearchline_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_listwidgetsearchline_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_listwidgetsearchline_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_listwidgetsearchline_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_listwidgetsearchline_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_listwidgetsearchline_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_listwidgetsearchline_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_listwidgetsearchline_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_listwidgetsearchline_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_listwidgetsearchline_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_listwidgetsearchline_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_listwidgetsearchline_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_listwidgetsearchline_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_listwidgetsearchline_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_listwidgetsearchline_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_listwidgetsearchline_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_listwidgetsearchline_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_listwidgetsearchline_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_listwidgetsearchline_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_listwidgetsearchline_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_listwidgetsearchline_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_listwidgetsearchline_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_listwidgetsearchline_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_listwidgetsearchline_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_listwidgetsearchline_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_listwidgetsearchline_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_listwidgetsearchline_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_listwidgetsearchline_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_listwidgetsearchline_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_listwidgetsearchline_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_listwidgetsearchline_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_listwidgetsearchline_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_listwidgetsearchline_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_listwidgetsearchline_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_listwidgetsearchline_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_listwidgetsearchline_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_listwidgetsearchline_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_listwidgetsearchline_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_listwidgetsearchline_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_listwidgetsearchline_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_listwidgetsearchline_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_listwidgetsearchline_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_listwidgetsearchline_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_listwidgetsearchline_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_listwidgetsearchline_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_listwidgetsearchline_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_listwidgetsearchline_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_listwidgetsearchline_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_listwidgetsearchline_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_listwidgetsearchline_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_listwidgetsearchline_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_listwidgetsearchline_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_listwidgetsearchline_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_listwidgetsearchline_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_listwidgetsearchline_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_listwidgetsearchline_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_listwidgetsearchline_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_listwidgetsearchline_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_listwidgetsearchline_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_listwidgetsearchline_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_listwidgetsearchline_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_listwidgetsearchline_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_listwidgetsearchline_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_listwidgetsearchline_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_listwidgetsearchline_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_listwidgetsearchline_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_listwidgetsearchline_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_listwidgetsearchline_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_listwidgetsearchline_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_listwidgetsearchline_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_listwidgetsearchline_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_listwidgetsearchline_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_listwidgetsearchline_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_listwidgetsearchline_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listwidgetsearchline_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_listwidgetsearchline_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_listwidgetsearchline_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_listwidgetsearchline_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_listwidgetsearchline_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_listwidgetsearchline_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_listwidgetsearchline_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_listwidgetsearchline_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_listwidgetsearchline_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_listwidgetsearchline_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_listwidgetsearchline_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_listwidgetsearchline_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_listwidgetsearchline_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_listwidgetsearchline_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_listwidgetsearchline_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_listwidgetsearchline_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_listwidgetsearchline_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_listwidgetsearchline_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_listwidgetsearchline_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_listwidgetsearchline_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_listwidgetsearchline_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_listwidgetsearchline_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_listwidgetsearchline_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_listwidgetsearchline_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_listwidgetsearchline_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_listwidgetsearchline_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_listwidgetsearchline_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_listwidgetsearchline_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_listwidgetsearchline_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_listwidgetsearchline_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_listwidgetsearchline_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_listwidgetsearchline_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_listwidgetsearchline_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_listwidgetsearchline_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_listwidgetsearchline_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_listwidgetsearchline_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_listwidgetsearchline_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_listwidgetsearchline_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_listwidgetsearchline_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_listwidgetsearchline_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_listwidgetsearchline_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_listwidgetsearchline_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_listwidgetsearchline_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_listwidgetsearchline_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_listwidgetsearchline_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_listwidgetsearchline_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_listwidgetsearchline_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_listwidgetsearchline_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_listwidgetsearchline_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_listwidgetsearchline_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_listwidgetsearchline_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_listwidgetsearchline_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_listwidgetsearchline_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_listwidgetsearchline_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_listwidgetsearchline_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_listwidgetsearchline_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_listwidgetsearchline_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_listwidgetsearchline_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_listwidgetsearchline_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_listwidgetsearchline_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_listwidgetsearchline_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_listwidgetsearchline_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_listwidgetsearchline_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_listwidgetsearchline_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_listwidgetsearchline_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_listwidgetsearchline_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_listwidgetsearchline_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_listwidgetsearchline_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_listwidgetsearchline_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_listwidgetsearchline_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_listwidgetsearchline_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_listwidgetsearchline_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_listwidgetsearchline_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_listwidgetsearchline_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_listwidgetsearchline_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_listwidgetsearchline_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_listwidgetsearchline_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_listwidgetsearchline_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_listwidgetsearchline_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_listwidgetsearchline_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_listwidgetsearchline_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_listwidgetsearchline_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_listwidgetsearchline_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_listwidgetsearchline_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_listwidgetsearchline_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_listwidgetsearchline_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_listwidgetsearchline_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_listwidgetsearchline_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_listwidgetsearchline_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_listwidgetsearchline_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_listwidgetsearchline_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_listwidgetsearchline_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_listwidgetsearchline_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_listwidgetsearchline_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_listwidgetsearchline_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_listwidgetsearchline_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_listwidgetsearchline_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_listwidgetsearchline_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_listwidgetsearchline_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_listwidgetsearchline_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_listwidgetsearchline_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_listwidgetsearchline_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_listwidgetsearchline_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_listwidgetsearchline_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_listwidgetsearchline_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_listwidgetsearchline_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_listwidgetsearchline_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_listwidgetsearchline_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_listwidgetsearchline_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_listwidgetsearchline_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_listwidgetsearchline_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_listwidgetsearchline_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_listwidgetsearchline_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_listwidgetsearchline_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_listwidgetsearchline_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_listwidgetsearchline_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_listwidgetsearchline_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_listwidgetsearchline_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_listwidgetsearchline_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_listwidgetsearchline_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_listwidgetsearchline_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_listwidgetsearchline_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_listwidgetsearchline_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_listwidgetsearchline_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_listwidgetsearchline_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_listwidgetsearchline_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_listwidgetsearchline_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_listwidgetsearchline_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_listwidgetsearchline_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_listwidgetsearchline_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_listwidgetsearchline_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_listwidgetsearchline_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_listwidgetsearchline_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_listwidgetsearchline_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_listwidgetsearchline_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_listwidgetsearchline_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_listwidgetsearchline_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_listwidgetsearchline_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_listwidgetsearchline_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_listwidgetsearchline_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_listwidgetsearchline_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_listwidgetsearchline_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_listwidgetsearchline_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_listwidgetsearchline_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_listwidgetsearchline_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_listwidgetsearchline_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listwidgetsearchline_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_listwidgetsearchline_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_listwidgetsearchline_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_listwidgetsearchline_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_listwidgetsearchline_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_listwidgetsearchline_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_listwidgetsearchline_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_listwidgetsearchline_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_listwidgetsearchline_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_listwidgetsearchline_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_listwidgetsearchline_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_listwidgetsearchline_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_listwidgetsearchline_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_listwidgetsearchline_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_listwidgetsearchline_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_listwidgetsearchline_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_listwidgetsearchline_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_listwidgetsearchline_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_listwidgetsearchline_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_listwidgetsearchline_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_listwidgetsearchline_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_listwidgetsearchline_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_listwidgetsearchline_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_listwidgetsearchline_dynamic_property_names");
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

QBindingStorage* k_listwidgetsearchline_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_listwidgetsearchline_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_listwidgetsearchline_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_listwidgetsearchline_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_listwidgetsearchline_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_listwidgetsearchline_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_listwidgetsearchline_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_listwidgetsearchline_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_listwidgetsearchline_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_listwidgetsearchline_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_listwidgetsearchline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_listwidgetsearchline_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_listwidgetsearchline_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_listwidgetsearchline_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_listwidgetsearchline_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_listwidgetsearchline_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_listwidgetsearchline_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_listwidgetsearchline_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_listwidgetsearchline_size_hint(void* self) {
    return KListWidgetSearchLine_SizeHint((KListWidgetSearchLine*)self);
}

QSize* k_listwidgetsearchline_qbase_size_hint(void* self) {
    return KListWidgetSearchLine_QBaseSizeHint((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_size_hint(void* self, QSize* (*callback)()) {
    KListWidgetSearchLine_OnSizeHint((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QSize* k_listwidgetsearchline_minimum_size_hint(void* self) {
    return KListWidgetSearchLine_MinimumSizeHint((KListWidgetSearchLine*)self);
}

QSize* k_listwidgetsearchline_qbase_minimum_size_hint(void* self) {
    return KListWidgetSearchLine_QBaseMinimumSizeHint((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KListWidgetSearchLine_OnMinimumSizeHint((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_mouse_press_event(void* self, void* param1) {
    KListWidgetSearchLine_MousePressEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_qbase_mouse_press_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseMousePressEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnMousePressEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_mouse_move_event(void* self, void* param1) {
    KListWidgetSearchLine_MouseMoveEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_qbase_mouse_move_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseMouseMoveEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnMouseMoveEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_mouse_release_event(void* self, void* param1) {
    KListWidgetSearchLine_MouseReleaseEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_qbase_mouse_release_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseMouseReleaseEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnMouseReleaseEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_mouse_double_click_event(void* self, void* param1) {
    KListWidgetSearchLine_MouseDoubleClickEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_qbase_mouse_double_click_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseMouseDoubleClickEvent((KListWidgetSearchLine*)self, (QMouseEvent*)param1);
}

void k_listwidgetsearchline_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnMouseDoubleClickEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_key_press_event(void* self, void* param1) {
    KListWidgetSearchLine_KeyPressEvent((KListWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_listwidgetsearchline_qbase_key_press_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseKeyPressEvent((KListWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_listwidgetsearchline_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnKeyPressEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_key_release_event(void* self, void* param1) {
    KListWidgetSearchLine_KeyReleaseEvent((KListWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_listwidgetsearchline_qbase_key_release_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseKeyReleaseEvent((KListWidgetSearchLine*)self, (QKeyEvent*)param1);
}

void k_listwidgetsearchline_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnKeyReleaseEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_focus_in_event(void* self, void* param1) {
    KListWidgetSearchLine_FocusInEvent((KListWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_listwidgetsearchline_qbase_focus_in_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseFocusInEvent((KListWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_listwidgetsearchline_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnFocusInEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_focus_out_event(void* self, void* param1) {
    KListWidgetSearchLine_FocusOutEvent((KListWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_listwidgetsearchline_qbase_focus_out_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseFocusOutEvent((KListWidgetSearchLine*)self, (QFocusEvent*)param1);
}

void k_listwidgetsearchline_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnFocusOutEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_paint_event(void* self, void* param1) {
    KListWidgetSearchLine_PaintEvent((KListWidgetSearchLine*)self, (QPaintEvent*)param1);
}

void k_listwidgetsearchline_qbase_paint_event(void* self, void* param1) {
    KListWidgetSearchLine_QBasePaintEvent((KListWidgetSearchLine*)self, (QPaintEvent*)param1);
}

void k_listwidgetsearchline_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnPaintEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_drag_enter_event(void* self, void* param1) {
    KListWidgetSearchLine_DragEnterEvent((KListWidgetSearchLine*)self, (QDragEnterEvent*)param1);
}

void k_listwidgetsearchline_qbase_drag_enter_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseDragEnterEvent((KListWidgetSearchLine*)self, (QDragEnterEvent*)param1);
}

void k_listwidgetsearchline_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnDragEnterEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_drag_move_event(void* self, void* e) {
    KListWidgetSearchLine_DragMoveEvent((KListWidgetSearchLine*)self, (QDragMoveEvent*)e);
}

void k_listwidgetsearchline_qbase_drag_move_event(void* self, void* e) {
    KListWidgetSearchLine_QBaseDragMoveEvent((KListWidgetSearchLine*)self, (QDragMoveEvent*)e);
}

void k_listwidgetsearchline_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnDragMoveEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_drag_leave_event(void* self, void* e) {
    KListWidgetSearchLine_DragLeaveEvent((KListWidgetSearchLine*)self, (QDragLeaveEvent*)e);
}

void k_listwidgetsearchline_qbase_drag_leave_event(void* self, void* e) {
    KListWidgetSearchLine_QBaseDragLeaveEvent((KListWidgetSearchLine*)self, (QDragLeaveEvent*)e);
}

void k_listwidgetsearchline_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnDragLeaveEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_drop_event(void* self, void* param1) {
    KListWidgetSearchLine_DropEvent((KListWidgetSearchLine*)self, (QDropEvent*)param1);
}

void k_listwidgetsearchline_qbase_drop_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseDropEvent((KListWidgetSearchLine*)self, (QDropEvent*)param1);
}

void k_listwidgetsearchline_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnDropEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_change_event(void* self, void* param1) {
    KListWidgetSearchLine_ChangeEvent((KListWidgetSearchLine*)self, (QEvent*)param1);
}

void k_listwidgetsearchline_qbase_change_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseChangeEvent((KListWidgetSearchLine*)self, (QEvent*)param1);
}

void k_listwidgetsearchline_on_change_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnChangeEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_context_menu_event(void* self, void* param1) {
    KListWidgetSearchLine_ContextMenuEvent((KListWidgetSearchLine*)self, (QContextMenuEvent*)param1);
}

void k_listwidgetsearchline_qbase_context_menu_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseContextMenuEvent((KListWidgetSearchLine*)self, (QContextMenuEvent*)param1);
}

void k_listwidgetsearchline_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnContextMenuEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_input_method_event(void* self, void* param1) {
    KListWidgetSearchLine_InputMethodEvent((KListWidgetSearchLine*)self, (QInputMethodEvent*)param1);
}

void k_listwidgetsearchline_qbase_input_method_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseInputMethodEvent((KListWidgetSearchLine*)self, (QInputMethodEvent*)param1);
}

void k_listwidgetsearchline_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnInputMethodEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_init_style_option(void* self, void* option) {
    KListWidgetSearchLine_InitStyleOption((KListWidgetSearchLine*)self, (QStyleOptionFrame*)option);
}

void k_listwidgetsearchline_qbase_init_style_option(void* self, void* option) {
    KListWidgetSearchLine_QBaseInitStyleOption((KListWidgetSearchLine*)self, (QStyleOptionFrame*)option);
}

void k_listwidgetsearchline_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnInitStyleOption((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QVariant* k_listwidgetsearchline_input_method_query(void* self, int64_t param1) {
    return KListWidgetSearchLine_InputMethodQuery((KListWidgetSearchLine*)self, param1);
}

QVariant* k_listwidgetsearchline_qbase_input_method_query(void* self, int64_t param1) {
    return KListWidgetSearchLine_QBaseInputMethodQuery((KListWidgetSearchLine*)self, param1);
}

void k_listwidgetsearchline_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KListWidgetSearchLine_OnInputMethodQuery((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_timer_event(void* self, void* param1) {
    KListWidgetSearchLine_TimerEvent((KListWidgetSearchLine*)self, (QTimerEvent*)param1);
}

void k_listwidgetsearchline_qbase_timer_event(void* self, void* param1) {
    KListWidgetSearchLine_QBaseTimerEvent((KListWidgetSearchLine*)self, (QTimerEvent*)param1);
}

void k_listwidgetsearchline_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnTimerEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_dev_type(void* self) {
    return KListWidgetSearchLine_DevType((KListWidgetSearchLine*)self);
}

int32_t k_listwidgetsearchline_qbase_dev_type(void* self) {
    return KListWidgetSearchLine_QBaseDevType((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_dev_type(void* self, int32_t (*callback)()) {
    KListWidgetSearchLine_OnDevType((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_set_visible(void* self, bool visible) {
    KListWidgetSearchLine_SetVisible((KListWidgetSearchLine*)self, visible);
}

void k_listwidgetsearchline_qbase_set_visible(void* self, bool visible) {
    KListWidgetSearchLine_QBaseSetVisible((KListWidgetSearchLine*)self, visible);
}

void k_listwidgetsearchline_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KListWidgetSearchLine_OnSetVisible((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_height_for_width(void* self, int param1) {
    return KListWidgetSearchLine_HeightForWidth((KListWidgetSearchLine*)self, param1);
}

int32_t k_listwidgetsearchline_qbase_height_for_width(void* self, int param1) {
    return KListWidgetSearchLine_QBaseHeightForWidth((KListWidgetSearchLine*)self, param1);
}

void k_listwidgetsearchline_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KListWidgetSearchLine_OnHeightForWidth((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_has_height_for_width(void* self) {
    return KListWidgetSearchLine_HasHeightForWidth((KListWidgetSearchLine*)self);
}

bool k_listwidgetsearchline_qbase_has_height_for_width(void* self) {
    return KListWidgetSearchLine_QBaseHasHeightForWidth((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_has_height_for_width(void* self, bool (*callback)()) {
    KListWidgetSearchLine_OnHasHeightForWidth((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QPaintEngine* k_listwidgetsearchline_paint_engine(void* self) {
    return KListWidgetSearchLine_PaintEngine((KListWidgetSearchLine*)self);
}

QPaintEngine* k_listwidgetsearchline_qbase_paint_engine(void* self) {
    return KListWidgetSearchLine_QBasePaintEngine((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KListWidgetSearchLine_OnPaintEngine((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_wheel_event(void* self, void* event) {
    KListWidgetSearchLine_WheelEvent((KListWidgetSearchLine*)self, (QWheelEvent*)event);
}

void k_listwidgetsearchline_qbase_wheel_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseWheelEvent((KListWidgetSearchLine*)self, (QWheelEvent*)event);
}

void k_listwidgetsearchline_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnWheelEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_enter_event(void* self, void* event) {
    KListWidgetSearchLine_EnterEvent((KListWidgetSearchLine*)self, (QEnterEvent*)event);
}

void k_listwidgetsearchline_qbase_enter_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseEnterEvent((KListWidgetSearchLine*)self, (QEnterEvent*)event);
}

void k_listwidgetsearchline_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnEnterEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_leave_event(void* self, void* event) {
    KListWidgetSearchLine_LeaveEvent((KListWidgetSearchLine*)self, (QEvent*)event);
}

void k_listwidgetsearchline_qbase_leave_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseLeaveEvent((KListWidgetSearchLine*)self, (QEvent*)event);
}

void k_listwidgetsearchline_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnLeaveEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_move_event(void* self, void* event) {
    KListWidgetSearchLine_MoveEvent((KListWidgetSearchLine*)self, (QMoveEvent*)event);
}

void k_listwidgetsearchline_qbase_move_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseMoveEvent((KListWidgetSearchLine*)self, (QMoveEvent*)event);
}

void k_listwidgetsearchline_on_move_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnMoveEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_resize_event(void* self, void* event) {
    KListWidgetSearchLine_ResizeEvent((KListWidgetSearchLine*)self, (QResizeEvent*)event);
}

void k_listwidgetsearchline_qbase_resize_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseResizeEvent((KListWidgetSearchLine*)self, (QResizeEvent*)event);
}

void k_listwidgetsearchline_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnResizeEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_close_event(void* self, void* event) {
    KListWidgetSearchLine_CloseEvent((KListWidgetSearchLine*)self, (QCloseEvent*)event);
}

void k_listwidgetsearchline_qbase_close_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseCloseEvent((KListWidgetSearchLine*)self, (QCloseEvent*)event);
}

void k_listwidgetsearchline_on_close_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnCloseEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_tablet_event(void* self, void* event) {
    KListWidgetSearchLine_TabletEvent((KListWidgetSearchLine*)self, (QTabletEvent*)event);
}

void k_listwidgetsearchline_qbase_tablet_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseTabletEvent((KListWidgetSearchLine*)self, (QTabletEvent*)event);
}

void k_listwidgetsearchline_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnTabletEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_action_event(void* self, void* event) {
    KListWidgetSearchLine_ActionEvent((KListWidgetSearchLine*)self, (QActionEvent*)event);
}

void k_listwidgetsearchline_qbase_action_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseActionEvent((KListWidgetSearchLine*)self, (QActionEvent*)event);
}

void k_listwidgetsearchline_on_action_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnActionEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_show_event(void* self, void* event) {
    KListWidgetSearchLine_ShowEvent((KListWidgetSearchLine*)self, (QShowEvent*)event);
}

void k_listwidgetsearchline_qbase_show_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseShowEvent((KListWidgetSearchLine*)self, (QShowEvent*)event);
}

void k_listwidgetsearchline_on_show_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnShowEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_hide_event(void* self, void* event) {
    KListWidgetSearchLine_HideEvent((KListWidgetSearchLine*)self, (QHideEvent*)event);
}

void k_listwidgetsearchline_qbase_hide_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseHideEvent((KListWidgetSearchLine*)self, (QHideEvent*)event);
}

void k_listwidgetsearchline_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnHideEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KListWidgetSearchLine_NativeEvent((KListWidgetSearchLine*)self, qstring(eventType), message, result);
}

bool k_listwidgetsearchline_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KListWidgetSearchLine_QBaseNativeEvent((KListWidgetSearchLine*)self, qstring(eventType), message, result);
}

void k_listwidgetsearchline_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KListWidgetSearchLine_OnNativeEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_metric(void* self, int32_t param1) {
    return KListWidgetSearchLine_Metric((KListWidgetSearchLine*)self, param1);
}

int32_t k_listwidgetsearchline_qbase_metric(void* self, int32_t param1) {
    return KListWidgetSearchLine_QBaseMetric((KListWidgetSearchLine*)self, param1);
}

void k_listwidgetsearchline_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KListWidgetSearchLine_OnMetric((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_init_painter(void* self, void* painter) {
    KListWidgetSearchLine_InitPainter((KListWidgetSearchLine*)self, (QPainter*)painter);
}

void k_listwidgetsearchline_qbase_init_painter(void* self, void* painter) {
    KListWidgetSearchLine_QBaseInitPainter((KListWidgetSearchLine*)self, (QPainter*)painter);
}

void k_listwidgetsearchline_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnInitPainter((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QPaintDevice* k_listwidgetsearchline_redirected(void* self, void* offset) {
    return KListWidgetSearchLine_Redirected((KListWidgetSearchLine*)self, (QPoint*)offset);
}

QPaintDevice* k_listwidgetsearchline_qbase_redirected(void* self, void* offset) {
    return KListWidgetSearchLine_QBaseRedirected((KListWidgetSearchLine*)self, (QPoint*)offset);
}

void k_listwidgetsearchline_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnRedirected((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QPainter* k_listwidgetsearchline_shared_painter(void* self) {
    return KListWidgetSearchLine_SharedPainter((KListWidgetSearchLine*)self);
}

QPainter* k_listwidgetsearchline_qbase_shared_painter(void* self) {
    return KListWidgetSearchLine_QBaseSharedPainter((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_shared_painter(void* self, QPainter* (*callback)()) {
    KListWidgetSearchLine_OnSharedPainter((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_focus_next_prev_child(void* self, bool next) {
    return KListWidgetSearchLine_FocusNextPrevChild((KListWidgetSearchLine*)self, next);
}

bool k_listwidgetsearchline_qbase_focus_next_prev_child(void* self, bool next) {
    return KListWidgetSearchLine_QBaseFocusNextPrevChild((KListWidgetSearchLine*)self, next);
}

void k_listwidgetsearchline_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KListWidgetSearchLine_OnFocusNextPrevChild((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_event_filter(void* self, void* watched, void* event) {
    return KListWidgetSearchLine_EventFilter((KListWidgetSearchLine*)self, (QObject*)watched, (QEvent*)event);
}

bool k_listwidgetsearchline_qbase_event_filter(void* self, void* watched, void* event) {
    return KListWidgetSearchLine_QBaseEventFilter((KListWidgetSearchLine*)self, (QObject*)watched, (QEvent*)event);
}

void k_listwidgetsearchline_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KListWidgetSearchLine_OnEventFilter((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_child_event(void* self, void* event) {
    KListWidgetSearchLine_ChildEvent((KListWidgetSearchLine*)self, (QChildEvent*)event);
}

void k_listwidgetsearchline_qbase_child_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseChildEvent((KListWidgetSearchLine*)self, (QChildEvent*)event);
}

void k_listwidgetsearchline_on_child_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnChildEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_custom_event(void* self, void* event) {
    KListWidgetSearchLine_CustomEvent((KListWidgetSearchLine*)self, (QEvent*)event);
}

void k_listwidgetsearchline_qbase_custom_event(void* self, void* event) {
    KListWidgetSearchLine_QBaseCustomEvent((KListWidgetSearchLine*)self, (QEvent*)event);
}

void k_listwidgetsearchline_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnCustomEvent((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_connect_notify(void* self, void* signal) {
    KListWidgetSearchLine_ConnectNotify((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_listwidgetsearchline_qbase_connect_notify(void* self, void* signal) {
    KListWidgetSearchLine_QBaseConnectNotify((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_listwidgetsearchline_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnConnectNotify((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_disconnect_notify(void* self, void* signal) {
    KListWidgetSearchLine_DisconnectNotify((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_listwidgetsearchline_qbase_disconnect_notify(void* self, void* signal) {
    KListWidgetSearchLine_QBaseDisconnectNotify((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_listwidgetsearchline_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnDisconnectNotify((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QRect* k_listwidgetsearchline_cursor_rect(void* self) {
    return KListWidgetSearchLine_CursorRect((KListWidgetSearchLine*)self);
}

QRect* k_listwidgetsearchline_qbase_cursor_rect(void* self) {
    return KListWidgetSearchLine_QBaseCursorRect((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_cursor_rect(void* self, QRect* (*callback)()) {
    KListWidgetSearchLine_OnCursorRect((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_update_micro_focus(void* self) {
    KListWidgetSearchLine_UpdateMicroFocus((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_qbase_update_micro_focus(void* self) {
    KListWidgetSearchLine_QBaseUpdateMicroFocus((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_update_micro_focus(void* self, void (*callback)()) {
    KListWidgetSearchLine_OnUpdateMicroFocus((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_create(void* self) {
    KListWidgetSearchLine_Create((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_qbase_create(void* self) {
    KListWidgetSearchLine_QBaseCreate((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_create(void* self, void (*callback)()) {
    KListWidgetSearchLine_OnCreate((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_destroy(void* self) {
    KListWidgetSearchLine_Destroy((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_qbase_destroy(void* self) {
    KListWidgetSearchLine_QBaseDestroy((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_destroy(void* self, void (*callback)()) {
    KListWidgetSearchLine_OnDestroy((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_focus_next_child(void* self) {
    return KListWidgetSearchLine_FocusNextChild((KListWidgetSearchLine*)self);
}

bool k_listwidgetsearchline_qbase_focus_next_child(void* self) {
    return KListWidgetSearchLine_QBaseFocusNextChild((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_focus_next_child(void* self, bool (*callback)()) {
    KListWidgetSearchLine_OnFocusNextChild((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_focus_previous_child(void* self) {
    return KListWidgetSearchLine_FocusPreviousChild((KListWidgetSearchLine*)self);
}

bool k_listwidgetsearchline_qbase_focus_previous_child(void* self) {
    return KListWidgetSearchLine_QBaseFocusPreviousChild((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_focus_previous_child(void* self, bool (*callback)()) {
    KListWidgetSearchLine_OnFocusPreviousChild((KListWidgetSearchLine*)self, (intptr_t)callback);
}

QObject* k_listwidgetsearchline_sender(void* self) {
    return KListWidgetSearchLine_Sender((KListWidgetSearchLine*)self);
}

QObject* k_listwidgetsearchline_qbase_sender(void* self) {
    return KListWidgetSearchLine_QBaseSender((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_sender(void* self, QObject* (*callback)()) {
    KListWidgetSearchLine_OnSender((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_sender_signal_index(void* self) {
    return KListWidgetSearchLine_SenderSignalIndex((KListWidgetSearchLine*)self);
}

int32_t k_listwidgetsearchline_qbase_sender_signal_index(void* self) {
    return KListWidgetSearchLine_QBaseSenderSignalIndex((KListWidgetSearchLine*)self);
}

void k_listwidgetsearchline_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KListWidgetSearchLine_OnSenderSignalIndex((KListWidgetSearchLine*)self, (intptr_t)callback);
}

int32_t k_listwidgetsearchline_receivers(void* self, const char* signal) {
    return KListWidgetSearchLine_Receivers((KListWidgetSearchLine*)self, signal);
}

int32_t k_listwidgetsearchline_qbase_receivers(void* self, const char* signal) {
    return KListWidgetSearchLine_QBaseReceivers((KListWidgetSearchLine*)self, signal);
}

void k_listwidgetsearchline_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KListWidgetSearchLine_OnReceivers((KListWidgetSearchLine*)self, (intptr_t)callback);
}

bool k_listwidgetsearchline_is_signal_connected(void* self, void* signal) {
    return KListWidgetSearchLine_IsSignalConnected((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

bool k_listwidgetsearchline_qbase_is_signal_connected(void* self, void* signal) {
    return KListWidgetSearchLine_QBaseIsSignalConnected((KListWidgetSearchLine*)self, (QMetaMethod*)signal);
}

void k_listwidgetsearchline_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KListWidgetSearchLine_OnIsSignalConnected((KListWidgetSearchLine*)self, (intptr_t)callback);
}

double k_listwidgetsearchline_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KListWidgetSearchLine_GetDecodedMetricF((KListWidgetSearchLine*)self, metricA, metricB);
}

double k_listwidgetsearchline_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KListWidgetSearchLine_QBaseGetDecodedMetricF((KListWidgetSearchLine*)self, metricA, metricB);
}

void k_listwidgetsearchline_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KListWidgetSearchLine_OnGetDecodedMetricF((KListWidgetSearchLine*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_listwidgetsearchline_delete(void* self) {
    KListWidgetSearchLine_Delete((KListWidgetSearchLine*)(self));
}
