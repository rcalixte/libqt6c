#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../extras-ksyntaxhighlighting/libtheme.hpp"
#include "libabstractannotationitemdelegate.hpp"
#include "libannotationinterface.hpp"
#include "libattribute.hpp"
#include "libcodecompletionmodel.hpp"
#include "libcursor.hpp"
#include "libdocument.hpp"
#include "libinlinenoteprovider.hpp"
#include "libmainwindow_1.hpp"
#include "librange.hpp"
#include "libtexthintinterface.hpp"
#include "../extras-kxmlgui/libkxmlguiclient.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqscrollbar.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libview.hpp"
#include "libview.h"

const QMetaObject* k_texteditor__view_meta_object(void* self) {
    return KTextEditor__View_MetaObject((KTextEditor__View*)self);
}

void* k_texteditor__view_metacast(void* self, const char* param1) {
    return KTextEditor__View_Metacast((KTextEditor__View*)self, param1);
}

int32_t k_texteditor__view_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__View_Metacall((KTextEditor__View*)self, param1, param2, param3);
}

const char* k_texteditor__view_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__Document* k_texteditor__view_document(void* self) {
    return KTextEditor__View_Document((KTextEditor__View*)self);
}

int32_t k_texteditor__view_view_mode(void* self) {
    return KTextEditor__View_ViewMode((KTextEditor__View*)self);
}

const char* k_texteditor__view_view_mode_human(void* self) {
    libqt_string _str = KTextEditor__View_ViewModeHuman((KTextEditor__View*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_view_input_mode(void* self, int32_t inputMode) {
    KTextEditor__View_SetViewInputMode((KTextEditor__View*)self, inputMode);
}

int32_t k_texteditor__view_view_input_mode(void* self) {
    return KTextEditor__View_ViewInputMode((KTextEditor__View*)self);
}

const char* k_texteditor__view_view_input_mode_human(void* self) {
    libqt_string _str = KTextEditor__View_ViewInputModeHuman((KTextEditor__View*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__MainWindow* k_texteditor__view_main_window(void* self) {
    return KTextEditor__View_MainWindow((KTextEditor__View*)self);
}

void k_texteditor__view_focus_in(void* self, void* view) {
    KTextEditor__View_FocusIn((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_focus_in(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_FocusIn((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_focus_out(void* self, void* view) {
    KTextEditor__View_FocusOut((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_focus_out(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_FocusOut((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_view_mode_changed(void* self, void* view, int32_t mode) {
    KTextEditor__View_ViewModeChanged((KTextEditor__View*)self, (KTextEditor__View*)view, mode);
}

void k_texteditor__view_on_view_mode_changed(void* self, void (*callback)(void*, void*, int32_t)) {
    KTextEditor__View_Connect_ViewModeChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_view_input_mode_changed(void* self, void* view, int32_t mode) {
    KTextEditor__View_ViewInputModeChanged((KTextEditor__View*)self, (KTextEditor__View*)view, mode);
}

void k_texteditor__view_on_view_input_mode_changed(void* self, void (*callback)(void*, void*, int32_t)) {
    KTextEditor__View_Connect_ViewInputModeChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_text_inserted(void* self, void* view, void* position, const char* text) {
    KTextEditor__View_TextInserted((KTextEditor__View*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)position, qstring(text));
}

void k_texteditor__view_on_text_inserted(void* self, void (*callback)(void*, void*, void*, const char*)) {
    KTextEditor__View_Connect_TextInserted((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_set_context_menu(void* self, void* menu) {
    KTextEditor__View_SetContextMenu((KTextEditor__View*)self, (QMenu*)menu);
}

QMenu* k_texteditor__view_context_menu(void* self) {
    return KTextEditor__View_ContextMenu((KTextEditor__View*)self);
}

QMenu* k_texteditor__view_default_context_menu(void* self, void* menu) {
    return KTextEditor__View_DefaultContextMenu((KTextEditor__View*)self, (QMenu*)menu);
}

void k_texteditor__view_context_menu_about_to_show(void* self, void* view, void* menu) {
    KTextEditor__View_ContextMenuAboutToShow((KTextEditor__View*)self, (KTextEditor__View*)view, (QMenu*)menu);
}

void k_texteditor__view_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__View_Connect_ContextMenuAboutToShow((KTextEditor__View*)self, (intptr_t)callback);
}

bool k_texteditor__view_set_cursor_position(void* self, void* position) {
    return KTextEditor__View_SetCursorPosition((KTextEditor__View*)self, (KTextEditor__Cursor*)position);
}

void k_texteditor__view_set_cursor_positions(void* self, libqt_list /* of KTextEditor__Cursor* */ positions) {
    KTextEditor__View_SetCursorPositions((KTextEditor__View*)self, positions);
}

KTextEditor__Cursor* k_texteditor__view_cursor_position(void* self) {
    return KTextEditor__View_CursorPosition((KTextEditor__View*)self);
}

libqt_list /* of KTextEditor__Cursor* */ k_texteditor__view_cursor_positions(void* self) {
    libqt_list _arr = KTextEditor__View_CursorPositions((KTextEditor__View*)self);
    return _arr;
}

KTextEditor__Cursor* k_texteditor__view_cursor_position_virtual(void* self) {
    return KTextEditor__View_CursorPositionVirtual((KTextEditor__View*)self);
}

QPoint* k_texteditor__view_cursor_to_coordinate(void* self, void* cursor) {
    return KTextEditor__View_CursorToCoordinate((KTextEditor__View*)self, (KTextEditor__Cursor*)cursor);
}

QPoint* k_texteditor__view_cursor_position_coordinates(void* self) {
    return KTextEditor__View_CursorPositionCoordinates((KTextEditor__View*)self);
}

KTextEditor__Cursor* k_texteditor__view_coordinates_to_cursor(void* self, void* coord) {
    return KTextEditor__View_CoordinatesToCursor((KTextEditor__View*)self, (QPoint*)coord);
}

void k_texteditor__view_cursor_position_changed(void* self, void* view, void* newPosition) {
    KTextEditor__View_CursorPositionChanged((KTextEditor__View*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)newPosition);
}

void k_texteditor__view_on_cursor_position_changed(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__View_Connect_CursorPositionChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_vertical_scroll_position_changed(void* self, void* view, void* newPos) {
    KTextEditor__View_VerticalScrollPositionChanged((KTextEditor__View*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)newPos);
}

void k_texteditor__view_on_vertical_scroll_position_changed(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__View_Connect_VerticalScrollPositionChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_horizontal_scroll_position_changed(void* self, void* view) {
    KTextEditor__View_HorizontalScrollPositionChanged((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_horizontal_scroll_position_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_HorizontalScrollPositionChanged((KTextEditor__View*)self, (intptr_t)callback);
}

bool k_texteditor__view_mouse_tracking_enabled(void* self) {
    return KTextEditor__View_MouseTrackingEnabled((KTextEditor__View*)self);
}

bool k_texteditor__view_set_mouse_tracking_enabled(void* self, bool enable) {
    return KTextEditor__View_SetMouseTrackingEnabled((KTextEditor__View*)self, enable);
}

void k_texteditor__view_mouse_position_changed(void* self, void* view, void* newPosition) {
    KTextEditor__View_MousePositionChanged((KTextEditor__View*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)newPosition);
}

void k_texteditor__view_on_mouse_position_changed(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__View_Connect_MousePositionChanged((KTextEditor__View*)self, (intptr_t)callback);
}

bool k_texteditor__view_set_selection(void* self, void* range) {
    return KTextEditor__View_SetSelection((KTextEditor__View*)self, (KTextEditor__Range*)range);
}

void k_texteditor__view_set_selections(void* self, libqt_list /* of KTextEditor__Range* */ ranges) {
    KTextEditor__View_SetSelections((KTextEditor__View*)self, ranges);
}

bool k_texteditor__view_selection(void* self) {
    return KTextEditor__View_Selection((KTextEditor__View*)self);
}

KTextEditor__Range* k_texteditor__view_selection_range(void* self) {
    return KTextEditor__View_SelectionRange((KTextEditor__View*)self);
}

libqt_list /* of KTextEditor__Range* */ k_texteditor__view_selection_ranges(void* self) {
    libqt_list _arr = KTextEditor__View_SelectionRanges((KTextEditor__View*)self);
    return _arr;
}

const char* k_texteditor__view_selection_text(void* self) {
    libqt_string _str = KTextEditor__View_SelectionText((KTextEditor__View*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__view_remove_selection(void* self) {
    return KTextEditor__View_RemoveSelection((KTextEditor__View*)self);
}

bool k_texteditor__view_remove_selection_text(void* self) {
    return KTextEditor__View_RemoveSelectionText((KTextEditor__View*)self);
}

bool k_texteditor__view_set_block_selection(void* self, bool on) {
    return KTextEditor__View_SetBlockSelection((KTextEditor__View*)self, on);
}

bool k_texteditor__view_block_selection(void* self) {
    return KTextEditor__View_BlockSelection((KTextEditor__View*)self);
}

void k_texteditor__view_selection_changed(void* self, void* view) {
    KTextEditor__View_SelectionChanged((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_selection_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_SelectionChanged((KTextEditor__View*)self, (intptr_t)callback);
}

bool k_texteditor__view_insert_text(void* self, const char* text) {
    return KTextEditor__View_InsertText((KTextEditor__View*)self, qstring(text));
}

bool k_texteditor__view_insert_template(void* self, void* insertPosition, const char* templateString) {
    return KTextEditor__View_InsertTemplate((KTextEditor__View*)self, (KTextEditor__Cursor*)insertPosition, qstring(templateString));
}

void k_texteditor__view_set_scroll_position(void* self, void* cursor) {
    KTextEditor__View_SetScrollPosition((KTextEditor__View*)self, (KTextEditor__Cursor*)cursor);
}

void k_texteditor__view_set_horizontal_scroll_position(void* self, int x) {
    KTextEditor__View_SetHorizontalScrollPosition((KTextEditor__View*)self, x);
}

KTextEditor__Cursor* k_texteditor__view_max_scroll_position(void* self) {
    return KTextEditor__View_MaxScrollPosition((KTextEditor__View*)self);
}

int32_t k_texteditor__view_first_displayed_line(void* self) {
    return KTextEditor__View_FirstDisplayedLine((KTextEditor__View*)self);
}

int32_t k_texteditor__view_last_displayed_line(void* self) {
    return KTextEditor__View_LastDisplayedLine((KTextEditor__View*)self);
}

QRect* k_texteditor__view_text_area_rect(void* self) {
    return KTextEditor__View_TextAreaRect((KTextEditor__View*)self);
}

QScrollBar* k_texteditor__view_vertical_scroll_bar(void* self) {
    return KTextEditor__View_VerticalScrollBar((KTextEditor__View*)self);
}

QScrollBar* k_texteditor__view_horizontal_scroll_bar(void* self) {
    return KTextEditor__View_HorizontalScrollBar((KTextEditor__View*)self);
}

void k_texteditor__view_display_range_changed(void* self, void* view) {
    KTextEditor__View_DisplayRangeChanged((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_display_range_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_DisplayRangeChanged((KTextEditor__View*)self, (intptr_t)callback);
}

bool k_texteditor__view_print(void* self) {
    return KTextEditor__View_Print((KTextEditor__View*)self);
}

void k_texteditor__view_print_preview(void* self) {
    KTextEditor__View_PrintPreview((KTextEditor__View*)self);
}

bool k_texteditor__view_is_status_bar_enabled(void* self) {
    return KTextEditor__View_IsStatusBarEnabled((KTextEditor__View*)self);
}

void k_texteditor__view_set_status_bar_enabled(void* self, bool enable) {
    KTextEditor__View_SetStatusBarEnabled((KTextEditor__View*)self, enable);
}

void k_texteditor__view_status_bar_enabled_changed(void* self, void* view, bool enabled) {
    KTextEditor__View_StatusBarEnabledChanged((KTextEditor__View*)self, (KTextEditor__View*)view, enabled);
}

void k_texteditor__view_on_status_bar_enabled_changed(void* self, void (*callback)(void*, void*, bool)) {
    KTextEditor__View_Connect_StatusBarEnabledChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_read_session_config(void* self, void* config, libqt_list /* set of const char* */ flags) {
    KTextEditor__View_ReadSessionConfig((KTextEditor__View*)self, (KConfigGroup*)config, flags);
}

void k_texteditor__view_write_session_config(void* self, void* config, libqt_list /* set of const char* */ flags) {
    KTextEditor__View_WriteSessionConfig((KTextEditor__View*)self, (KConfigGroup*)config, flags);
}

libqt_list /* of KTextEditor__AttributeBlock* */ k_texteditor__view_line_attributes(void* self, int line) {
    libqt_list _arr = KTextEditor__View_LineAttributes((KTextEditor__View*)self, line);
    return _arr;
}

void k_texteditor__view_config_changed(void* self, void* view) {
    KTextEditor__View_ConfigChanged((KTextEditor__View*)self, (KTextEditor__View*)view);
}

void k_texteditor__view_on_config_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__View_Connect_ConfigChanged((KTextEditor__View*)self, (intptr_t)callback);
}

const char** k_texteditor__view_config_keys(void* self) {
    libqt_list _arr = KTextEditor__View_ConfigKeys((KTextEditor__View*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__view_config_keys\n");
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

QVariant* k_texteditor__view_config_value(void* self, const char* key) {
    return KTextEditor__View_ConfigValue((KTextEditor__View*)self, qstring(key));
}

void k_texteditor__view_set_config_value(void* self, const char* key, void* value) {
    KTextEditor__View_SetConfigValue((KTextEditor__View*)self, qstring(key), (QVariant*)value);
}

void k_texteditor__view_set_annotation_model(void* self, void* model) {
    KTextEditor__View_SetAnnotationModel((KTextEditor__View*)self, (KTextEditor__AnnotationModel*)model);
}

KTextEditor__AnnotationModel* k_texteditor__view_annotation_model(void* self) {
    return KTextEditor__View_AnnotationModel((KTextEditor__View*)self);
}

void k_texteditor__view_set_annotation_border_visible(void* self, bool visible) {
    KTextEditor__View_SetAnnotationBorderVisible((KTextEditor__View*)self, visible);
}

bool k_texteditor__view_is_annotation_border_visible(void* self) {
    return KTextEditor__View_IsAnnotationBorderVisible((KTextEditor__View*)self);
}

void k_texteditor__view_set_annotation_item_delegate(void* self, void* delegate) {
    KTextEditor__View_SetAnnotationItemDelegate((KTextEditor__View*)self, (KTextEditor__AbstractAnnotationItemDelegate*)delegate);
}

KTextEditor__AbstractAnnotationItemDelegate* k_texteditor__view_annotation_item_delegate(void* self) {
    return KTextEditor__View_AnnotationItemDelegate((KTextEditor__View*)self);
}

void k_texteditor__view_set_annotation_uniform_item_sizes(void* self, bool uniformItemSizes) {
    KTextEditor__View_SetAnnotationUniformItemSizes((KTextEditor__View*)self, uniformItemSizes);
}

bool k_texteditor__view_uniform_annotation_item_sizes(void* self) {
    return KTextEditor__View_UniformAnnotationItemSizes((KTextEditor__View*)self);
}

void k_texteditor__view_annotation_context_menu_about_to_show(void* self, void* view, void* menu, int line) {
    KTextEditor__View_AnnotationContextMenuAboutToShow((KTextEditor__View*)self, (KTextEditor__View*)view, (QMenu*)menu, line);
}

void k_texteditor__view_on_annotation_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*, int)) {
    KTextEditor__View_Connect_AnnotationContextMenuAboutToShow((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_annotation_activated(void* self, void* view, int line) {
    KTextEditor__View_AnnotationActivated((KTextEditor__View*)self, (KTextEditor__View*)view, line);
}

void k_texteditor__view_on_annotation_activated(void* self, void (*callback)(void*, void*, int)) {
    KTextEditor__View_Connect_AnnotationActivated((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_annotation_border_visibility_changed(void* self, void* view, bool visible) {
    KTextEditor__View_AnnotationBorderVisibilityChanged((KTextEditor__View*)self, (KTextEditor__View*)view, visible);
}

void k_texteditor__view_on_annotation_border_visibility_changed(void* self, void (*callback)(void*, void*, bool)) {
    KTextEditor__View_Connect_AnnotationBorderVisibilityChanged((KTextEditor__View*)self, (intptr_t)callback);
}

void k_texteditor__view_register_inline_note_provider(void* self, void* provider) {
    KTextEditor__View_RegisterInlineNoteProvider((KTextEditor__View*)self, (KTextEditor__InlineNoteProvider*)provider);
}

void k_texteditor__view_unregister_inline_note_provider(void* self, void* provider) {
    KTextEditor__View_UnregisterInlineNoteProvider((KTextEditor__View*)self, (KTextEditor__InlineNoteProvider*)provider);
}

void k_texteditor__view_register_text_hint_provider(void* self, void* provider) {
    KTextEditor__View_RegisterTextHintProvider((KTextEditor__View*)self, (KTextEditor__TextHintProvider*)provider);
}

void k_texteditor__view_unregister_text_hint_provider(void* self, void* provider) {
    KTextEditor__View_UnregisterTextHintProvider((KTextEditor__View*)self, (KTextEditor__TextHintProvider*)provider);
}

void k_texteditor__view_set_text_hint_delay(void* self, int delay) {
    KTextEditor__View_SetTextHintDelay((KTextEditor__View*)self, delay);
}

int32_t k_texteditor__view_text_hint_delay(void* self) {
    return KTextEditor__View_TextHintDelay((KTextEditor__View*)self);
}

bool k_texteditor__view_is_completion_active(void* self) {
    return KTextEditor__View_IsCompletionActive((KTextEditor__View*)self);
}

void k_texteditor__view_start_completion(void* self, void* word, void* model) {
    KTextEditor__View_StartCompletion((KTextEditor__View*)self, (KTextEditor__Range*)word, (KTextEditor__CodeCompletionModel*)model);
}

void k_texteditor__view_abort_completion(void* self) {
    KTextEditor__View_AbortCompletion((KTextEditor__View*)self);
}

void k_texteditor__view_force_completion(void* self) {
    KTextEditor__View_ForceCompletion((KTextEditor__View*)self);
}

void k_texteditor__view_register_completion_model(void* self, void* model) {
    KTextEditor__View_RegisterCompletionModel((KTextEditor__View*)self, (KTextEditor__CodeCompletionModel*)model);
}

void k_texteditor__view_unregister_completion_model(void* self, void* model) {
    KTextEditor__View_UnregisterCompletionModel((KTextEditor__View*)self, (KTextEditor__CodeCompletionModel*)model);
}

bool k_texteditor__view_is_automatic_invocation_enabled(void* self) {
    return KTextEditor__View_IsAutomaticInvocationEnabled((KTextEditor__View*)self);
}

void k_texteditor__view_set_automatic_invocation_enabled(void* self, bool enabled) {
    KTextEditor__View_SetAutomaticInvocationEnabled((KTextEditor__View*)self, enabled);
}

void k_texteditor__view_start_completion2(void* self, void* word, libqt_list /* of KTextEditor__CodeCompletionModel* */ models, int32_t invocationType) {
    KTextEditor__View_StartCompletion2((KTextEditor__View*)self, (KTextEditor__Range*)word, models, invocationType);
}

libqt_list /* of KTextEditor__CodeCompletionModel* */ k_texteditor__view_code_completion_models(void* self) {
    libqt_list _arr = KTextEditor__View_CodeCompletionModels((KTextEditor__View*)self);
    return _arr;
}

KSyntaxHighlighting__Theme* k_texteditor__view_theme(void* self) {
    return KTextEditor__View_Theme((KTextEditor__View*)self);
}

const char* k_texteditor__view_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__view_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__view_insert_template3(void* self, void* insertPosition, const char* templateString, const char* script) {
    return KTextEditor__View_InsertTemplate3((KTextEditor__View*)self, (KTextEditor__Cursor*)insertPosition, qstring(templateString), qstring(script));
}

int32_t k_texteditor__view_first_displayed_line1(void* self, int32_t lineType) {
    return KTextEditor__View_FirstDisplayedLine1((KTextEditor__View*)self, lineType);
}

int32_t k_texteditor__view_last_displayed_line1(void* self, int32_t lineType) {
    return KTextEditor__View_LastDisplayedLine1((KTextEditor__View*)self, lineType);
}

int32_t k_texteditor__view_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

uintptr_t k_texteditor__view_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_texteditor__view_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_texteditor__view_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_texteditor__view_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_texteditor__view_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_texteditor__view_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_texteditor__view_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_texteditor__view_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_texteditor__view_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_texteditor__view_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_texteditor__view_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_texteditor__view_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_texteditor__view_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_texteditor__view_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_texteditor__view_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_texteditor__view_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_texteditor__view_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_texteditor__view_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_texteditor__view_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_texteditor__view_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_texteditor__view_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_texteditor__view_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_texteditor__view_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_texteditor__view_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_texteditor__view_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_texteditor__view_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_texteditor__view_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_texteditor__view_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_texteditor__view_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_texteditor__view_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_texteditor__view_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_texteditor__view_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_texteditor__view_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_texteditor__view_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_texteditor__view_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_texteditor__view_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_texteditor__view_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_texteditor__view_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_texteditor__view_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_texteditor__view_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_texteditor__view_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_texteditor__view_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_texteditor__view_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_texteditor__view_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_texteditor__view_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_texteditor__view_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_texteditor__view_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_texteditor__view_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_texteditor__view_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_texteditor__view_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_texteditor__view_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_texteditor__view_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_texteditor__view_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_texteditor__view_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texteditor__view_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texteditor__view_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texteditor__view_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texteditor__view_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texteditor__view_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texteditor__view_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texteditor__view_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texteditor__view_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texteditor__view_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_texteditor__view_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texteditor__view_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_texteditor__view_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_texteditor__view_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_texteditor__view_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_texteditor__view_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_texteditor__view_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_texteditor__view_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_texteditor__view_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_texteditor__view_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_texteditor__view_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_texteditor__view_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_texteditor__view_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_texteditor__view_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_texteditor__view_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_texteditor__view_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_texteditor__view_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_texteditor__view_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_texteditor__view_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_texteditor__view_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_texteditor__view_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_texteditor__view_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_texteditor__view_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_texteditor__view_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_texteditor__view_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_texteditor__view_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_texteditor__view_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_texteditor__view_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_texteditor__view_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_texteditor__view_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_texteditor__view_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_texteditor__view_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_texteditor__view_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_texteditor__view_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_texteditor__view_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_texteditor__view_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_texteditor__view_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__view_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_texteditor__view_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_texteditor__view_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_texteditor__view_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_texteditor__view_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_texteditor__view_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_texteditor__view_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_texteditor__view_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_texteditor__view_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_texteditor__view_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_texteditor__view_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_texteditor__view_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_texteditor__view_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_texteditor__view_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__view_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_texteditor__view_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_texteditor__view_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_texteditor__view_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_texteditor__view_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_texteditor__view_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_texteditor__view_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_texteditor__view_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_texteditor__view_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_texteditor__view_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_texteditor__view_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_texteditor__view_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_texteditor__view_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_texteditor__view_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_texteditor__view_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_texteditor__view_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_texteditor__view_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_texteditor__view_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_texteditor__view_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_texteditor__view_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_texteditor__view_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_texteditor__view_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_texteditor__view_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_texteditor__view_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_texteditor__view_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_texteditor__view_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_texteditor__view_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_texteditor__view_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_texteditor__view_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_texteditor__view_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_texteditor__view_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_texteditor__view_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_texteditor__view_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_texteditor__view_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_texteditor__view_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_texteditor__view_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_texteditor__view_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_texteditor__view_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_texteditor__view_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_texteditor__view_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_texteditor__view_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_texteditor__view_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_texteditor__view_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_texteditor__view_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_texteditor__view_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_texteditor__view_set_visible(void* self, bool visible) {
    QWidget_SetVisible((QWidget*)self, visible);
}

void k_texteditor__view_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_texteditor__view_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_texteditor__view_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_texteditor__view_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_texteditor__view_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_texteditor__view_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_texteditor__view_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_texteditor__view_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_texteditor__view_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_texteditor__view_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_texteditor__view_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_texteditor__view_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_texteditor__view_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_texteditor__view_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_texteditor__view_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_texteditor__view_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_texteditor__view_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_texteditor__view_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__view_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_texteditor__view_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_texteditor__view_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_texteditor__view_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_texteditor__view_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_texteditor__view_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_texteditor__view_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_texteditor__view_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_texteditor__view_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_texteditor__view_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_texteditor__view_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSize* k_texteditor__view_size_hint(void* self) {
    return QWidget_SizeHint((QWidget*)self);
}

QSize* k_texteditor__view_minimum_size_hint(void* self) {
    return QWidget_MinimumSizeHint((QWidget*)self);
}

QSizePolicy* k_texteditor__view_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_texteditor__view_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_texteditor__view_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

int32_t k_texteditor__view_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

bool k_texteditor__view_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

QRegion* k_texteditor__view_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_texteditor__view_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_texteditor__view_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_texteditor__view_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_texteditor__view_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_texteditor__view_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_texteditor__view_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_texteditor__view_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_texteditor__view_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_texteditor__view_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_texteditor__view_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_texteditor__view_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_texteditor__view_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_texteditor__view_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_texteditor__view_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_texteditor__view_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_texteditor__view_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_texteditor__view_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_texteditor__view_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_texteditor__view_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_texteditor__view_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_texteditor__view_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texteditor__view_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_texteditor__view_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_texteditor__view_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_texteditor__view_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_texteditor__view_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_texteditor__view_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_texteditor__view_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_texteditor__view_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_texteditor__view_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_texteditor__view_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_texteditor__view_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_texteditor__view_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_texteditor__view_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_texteditor__view_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_texteditor__view_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_texteditor__view_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_texteditor__view_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

QPaintEngine* k_texteditor__view_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

void k_texteditor__view_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_texteditor__view_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_texteditor__view_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_texteditor__view_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_texteditor__view_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_texteditor__view_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_texteditor__view_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_texteditor__view_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_texteditor__view_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_texteditor__view_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_texteditor__view_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_texteditor__view_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_texteditor__view_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_texteditor__view_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_texteditor__view_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_texteditor__view_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_texteditor__view_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

QVariant* k_texteditor__view_input_method_query(void* self, int32_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

int32_t k_texteditor__view_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_texteditor__view_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_texteditor__view_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_texteditor__view_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texteditor__view_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_texteditor__view_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_texteditor__view_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texteditor__view_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_texteditor__view_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_texteditor__view_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_texteditor__view_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_texteditor__view_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_texteditor__view_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_texteditor__view_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_texteditor__view_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_texteditor__view_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_texteditor__view_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

bool k_texteditor__view_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_texteditor__view_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__view_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__view_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__view_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__view_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__view_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__view_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__view_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__view_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__view_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__view_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__view_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__view_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__view_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__view_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__view_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texteditor__view_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__view_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__view_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texteditor__view_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__view_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texteditor__view_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texteditor__view_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texteditor__view_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__view_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__view_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__view_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__view_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__view_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__view_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__view_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__view_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__view_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__view_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__view_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__view_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texteditor__view_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__view_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__view_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texteditor__view_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__view_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texteditor__view_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texteditor__view_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texteditor__view_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texteditor__view_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texteditor__view_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__view_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__view_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_texteditor__view_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_texteditor__view_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_texteditor__view_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_texteditor__view_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_texteditor__view_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_texteditor__view_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_texteditor__view_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_texteditor__view_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_texteditor__view_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_texteditor__view_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_texteditor__view_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_texteditor__view_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QAction* k_texteditor__view_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

QAction* k_texteditor__view_action2(void* self, void* element) {
    return KXMLGUIClient_Action2((KXMLGUIClient*)self, (QDomElement*)element);
}

KActionCollection* k_texteditor__view_action_collection(void* self) {
    return KXMLGUIClient_ActionCollection((KXMLGUIClient*)self);
}

const char* k_texteditor__view_component_name(void* self) {
    libqt_string _str = KXMLGUIClient_ComponentName((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomDocument* k_texteditor__view_dom_document(void* self) {
    return KXMLGUIClient_DomDocument((KXMLGUIClient*)self);
}

const char* k_texteditor__view_xml_file(void* self) {
    libqt_string _str = KXMLGUIClient_XmlFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__view_local_x_m_l_file(void* self) {
    libqt_string _str = KXMLGUIClient_LocalXMLFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_texteditor__view_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_texteditor__view_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_texteditor__view_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_texteditor__view_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_texteditor__view_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_texteditor__view_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_texteditor__view_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_texteditor__view_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_texteditor__view_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_texteditor__view_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_texteditor__view_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_texteditor__view_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_texteditor__view_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__view_find_most_recent_x_m_l_file\n");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    libqt_string _str = KXMLGUIClient_FindMostRecentXMLFile(files_list, qstring(doc));
    free(files_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_texteditor__view_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_texteditor__view_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_texteditor__view_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_texteditor__view_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_texteditor__view_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_texteditor__view_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_texteditor__view_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__view_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

void k_texteditor__view_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__view_delete(void* self) {
    KTextEditor__View_Delete((KTextEditor__View*)(self));
}
