#include "libkcompletion.hpp"
#include "libkcompletionbase.hpp"
#include "libkcompletionbox.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlineedit.hpp"
#include "../libqmenu.hpp"
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
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libklineedit.hpp"
#include "libklineedit.h"

KLineEdit* k_lineedit_new(void* parent) {
    return KLineEdit_new((QWidget*)parent);
}

KLineEdit* k_lineedit_new2(const char* stringVal) {
    return KLineEdit_new2(qstring(stringVal));
}

KLineEdit* k_lineedit_new3() {
    return KLineEdit_new3();
}

KLineEdit* k_lineedit_new4(const char* stringVal, void* parent) {
    return KLineEdit_new4(qstring(stringVal), (QWidget*)parent);
}

const QMetaObject* k_lineedit_meta_object(void* self) {
    return KLineEdit_MetaObject((KLineEdit*)self);
}

void k_lineedit_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KLineEdit_OnMetaObject((KLineEdit*)self, (intptr_t)callback);
}

const QMetaObject* k_lineedit_super_meta_object(void* self) {
    return KLineEdit_SuperMetaObject((KLineEdit*)self);
}

void* k_lineedit_metacast(void* self, const char* param1) {
    return KLineEdit_Metacast((KLineEdit*)self, param1);
}

void k_lineedit_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KLineEdit_OnMetacast((KLineEdit*)self, (intptr_t)callback);
}

void* k_lineedit_super_metacast(void* self, const char* param1) {
    return KLineEdit_SuperMetacast((KLineEdit*)self, param1);
}

int32_t k_lineedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLineEdit_Metacall((KLineEdit*)self, param1, param2, param3);
}

void k_lineedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLineEdit_OnMetacall((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLineEdit_SuperMetacall((KLineEdit*)self, param1, param2, param3);
}

const char* k_lineedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_url(void* self, void* url) {
    KLineEdit_SetUrl((KLineEdit*)self, (QUrl*)url);
}

void k_lineedit_set_completion_mode(void* self, int32_t mode) {
    KLineEdit_SetCompletionMode((KLineEdit*)self, mode);
}

void k_lineedit_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KLineEdit_OnSetCompletionMode((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_completion_mode(void* self, int32_t mode) {
    KLineEdit_SuperSetCompletionMode((KLineEdit*)self, mode);
}

void k_lineedit_set_completion_mode_disabled(void* self, int32_t mode) {
    KLineEdit_SetCompletionModeDisabled((KLineEdit*)self, mode);
}

bool k_lineedit_url_drops_enabled(void* self) {
    return KLineEdit_UrlDropsEnabled((KLineEdit*)self);
}

void k_lineedit_set_trap_return_key(void* self, bool trap) {
    KLineEdit_SetTrapReturnKey((KLineEdit*)self, trap);
}

bool k_lineedit_trap_return_key(void* self) {
    return KLineEdit_TrapReturnKey((KLineEdit*)self);
}

KCompletionBox* k_lineedit_completion_box(void* self, bool create) {
    return KLineEdit_CompletionBox((KLineEdit*)self, create);
}

void k_lineedit_on_completion_box(void* self, KCompletionBox* (*callback)(void*, bool)) {
    KLineEdit_OnCompletionBox((KLineEdit*)self, (intptr_t)callback);
}

KCompletionBox* k_lineedit_super_completion_box(void* self, bool create) {
    return KLineEdit_SuperCompletionBox((KLineEdit*)self, create);
}

void k_lineedit_set_completion_object(void* self, void* param1, bool handle) {
    KLineEdit_SetCompletionObject((KLineEdit*)self, (KCompletion*)param1, handle);
}

void k_lineedit_on_set_completion_object(void* self, void (*callback)(void*, void*, bool)) {
    KLineEdit_OnSetCompletionObject((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_completion_object(void* self, void* param1, bool handle) {
    KLineEdit_SuperSetCompletionObject((KLineEdit*)self, (KCompletion*)param1, handle);
}

void k_lineedit_copy(void* self) {
    KLineEdit_Copy((KLineEdit*)self);
}

void k_lineedit_on_copy(void* self, void (*callback)()) {
    KLineEdit_OnCopy((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_copy(void* self) {
    KLineEdit_SuperCopy((KLineEdit*)self);
}

void k_lineedit_set_squeezed_text_enabled(void* self, bool enable) {
    KLineEdit_SetSqueezedTextEnabled((KLineEdit*)self, enable);
}

bool k_lineedit_is_squeezed_text_enabled(void* self) {
    return KLineEdit_IsSqueezedTextEnabled((KLineEdit*)self);
}

const char* k_lineedit_original_text(void* self) {
    libqt_string _str = KLineEdit_OriginalText((KLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_user_text(void* self) {
    libqt_string _str = KLineEdit_UserText((KLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_completion_box(void* self, void* box) {
    KLineEdit_SetCompletionBox((KLineEdit*)self, (KCompletionBox*)box);
}

QSize* k_lineedit_clear_button_used_size(void* self) {
    return KLineEdit_ClearButtonUsedSize((KLineEdit*)self);
}

void k_lineedit_do_completion(void* self, const char* text) {
    KLineEdit_DoCompletion((KLineEdit*)self, qstring(text));
}

void k_lineedit_completion_box_activated(void* self, const char* param1) {
    KLineEdit_CompletionBoxActivated((KLineEdit*)self, qstring(param1));
}

void k_lineedit_on_completion_box_activated(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_Connect_CompletionBoxActivated((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_return_key_pressed(void* self, const char* text) {
    KLineEdit_ReturnKeyPressed((KLineEdit*)self, qstring(text));
}

void k_lineedit_on_return_key_pressed(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_Connect_ReturnKeyPressed((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_completion(void* self, const char* param1) {
    KLineEdit_Completion((KLineEdit*)self, qstring(param1));
}

void k_lineedit_on_completion(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_Connect_Completion((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_substring_completion(void* self, const char* param1) {
    KLineEdit_SubstringCompletion((KLineEdit*)self, qstring(param1));
}

void k_lineedit_on_substring_completion(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_Connect_SubstringCompletion((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_text_rotation(void* self, int32_t param1) {
    KLineEdit_TextRotation((KLineEdit*)self, param1);
}

void k_lineedit_on_text_rotation(void* self, void (*callback)(void*, int32_t)) {
    KLineEdit_Connect_TextRotation((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_completion_mode_changed(void* self, int32_t param1) {
    KLineEdit_CompletionModeChanged((KLineEdit*)self, param1);
}

void k_lineedit_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    KLineEdit_Connect_CompletionModeChanged((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_about_to_show_context_menu(void* self, void* contextMenu) {
    KLineEdit_AboutToShowContextMenu((KLineEdit*)self, (QMenu*)contextMenu);
}

void k_lineedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*)) {
    KLineEdit_Connect_AboutToShowContextMenu((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_clear_button_clicked(void* self) {
    KLineEdit_ClearButtonClicked((KLineEdit*)self);
}

void k_lineedit_on_clear_button_clicked(void* self, void (*callback)(void*)) {
    KLineEdit_Connect_ClearButtonClicked((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_set_read_only(void* self, bool readOnly) {
    KLineEdit_SetReadOnly((KLineEdit*)self, readOnly);
}

void k_lineedit_on_set_read_only(void* self, void (*callback)(void*, bool)) {
    KLineEdit_OnSetReadOnly((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_read_only(void* self, bool readOnly) {
    KLineEdit_SuperSetReadOnly((KLineEdit*)self, readOnly);
}

void k_lineedit_rotate_text(void* self, int32_t type) {
    KLineEdit_RotateText((KLineEdit*)self, type);
}

void k_lineedit_set_completed_text(void* self, const char* completedText) {
    KLineEdit_SetCompletedText((KLineEdit*)self, qstring(completedText));
}

void k_lineedit_on_set_completed_text(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_OnSetCompletedText((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_completed_text(void* self, const char* completedText) {
    KLineEdit_SuperSetCompletedText((KLineEdit*)self, qstring(completedText));
}

void k_lineedit_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lineedit_set_completed_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KLineEdit_SetCompletedItems((KLineEdit*)self, items_list, autoSuggest);
    free(items_qstr);
}

void k_lineedit_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool)) {
    KLineEdit_OnSetCompletedItems((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lineedit_set_completed_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KLineEdit_SuperSetCompletedItems((KLineEdit*)self, items_list, autoSuggest);
}

void k_lineedit_set_squeezed_text(void* self, const char* text) {
    KLineEdit_SetSqueezedText((KLineEdit*)self, qstring(text));
}

void k_lineedit_set_text(void* self, const char* text) {
    KLineEdit_SetText((KLineEdit*)self, qstring(text));
}

void k_lineedit_on_set_text(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_OnSetText((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_text(void* self, const char* text) {
    KLineEdit_SuperSetText((KLineEdit*)self, qstring(text));
}

void k_lineedit_make_completion(void* self, const char* param1) {
    KLineEdit_MakeCompletion((KLineEdit*)self, qstring(param1));
}

void k_lineedit_on_make_completion(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_OnMakeCompletion((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_make_completion(void* self, const char* param1) {
    KLineEdit_SuperMakeCompletion((KLineEdit*)self, qstring(param1));
}

void k_lineedit_user_cancelled(void* self, const char* cancelText) {
    KLineEdit_UserCancelled((KLineEdit*)self, qstring(cancelText));
}

void k_lineedit_on_user_cancelled(void* self, void (*callback)(void*, const char*)) {
    KLineEdit_OnUserCancelled((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_user_cancelled(void* self, const char* cancelText) {
    KLineEdit_SuperUserCancelled((KLineEdit*)self, qstring(cancelText));
}

bool k_lineedit_event(void* self, void* param1) {
    return KLineEdit_Event((KLineEdit*)self, (QEvent*)param1);
}

void k_lineedit_on_event(void* self, bool (*callback)(void*, void*)) {
    KLineEdit_OnEvent((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_super_event(void* self, void* param1) {
    return KLineEdit_SuperEvent((KLineEdit*)self, (QEvent*)param1);
}

void k_lineedit_resize_event(void* self, void* param1) {
    KLineEdit_ResizeEvent((KLineEdit*)self, (QResizeEvent*)param1);
}

void k_lineedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnResizeEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_resize_event(void* self, void* param1) {
    KLineEdit_SuperResizeEvent((KLineEdit*)self, (QResizeEvent*)param1);
}

void k_lineedit_key_press_event(void* self, void* param1) {
    KLineEdit_KeyPressEvent((KLineEdit*)self, (QKeyEvent*)param1);
}

void k_lineedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnKeyPressEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_key_press_event(void* self, void* param1) {
    KLineEdit_SuperKeyPressEvent((KLineEdit*)self, (QKeyEvent*)param1);
}

void k_lineedit_mouse_press_event(void* self, void* param1) {
    KLineEdit_MousePressEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnMousePressEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_mouse_press_event(void* self, void* param1) {
    KLineEdit_SuperMousePressEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_mouse_release_event(void* self, void* param1) {
    KLineEdit_MouseReleaseEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnMouseReleaseEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_mouse_release_event(void* self, void* param1) {
    KLineEdit_SuperMouseReleaseEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_mouse_double_click_event(void* self, void* param1) {
    KLineEdit_MouseDoubleClickEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnMouseDoubleClickEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_mouse_double_click_event(void* self, void* param1) {
    KLineEdit_SuperMouseDoubleClickEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_context_menu_event(void* self, void* param1) {
    KLineEdit_ContextMenuEvent((KLineEdit*)self, (QContextMenuEvent*)param1);
}

void k_lineedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnContextMenuEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_context_menu_event(void* self, void* param1) {
    KLineEdit_SuperContextMenuEvent((KLineEdit*)self, (QContextMenuEvent*)param1);
}

QMenu* k_lineedit_create_standard_context_menu(void* self) {
    return KLineEdit_CreateStandardContextMenu((KLineEdit*)self);
}

void k_lineedit_on_create_standard_context_menu(void* self, QMenu* (*callback)()) {
    KLineEdit_OnCreateStandardContextMenu((KLineEdit*)self, (intptr_t)callback);
}

QMenu* k_lineedit_super_create_standard_context_menu(void* self) {
    return KLineEdit_SuperCreateStandardContextMenu((KLineEdit*)self);
}

void k_lineedit_set_completed_text2(void* self, const char* param1, bool param2) {
    KLineEdit_SetCompletedText2((KLineEdit*)self, qstring(param1), param2);
}

void k_lineedit_on_set_completed_text2(void* self, void (*callback)(void*, const char*, bool)) {
    KLineEdit_OnSetCompletedText2((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_completed_text2(void* self, const char* param1, bool param2) {
    KLineEdit_SuperSetCompletedText2((KLineEdit*)self, qstring(param1), param2);
}

void k_lineedit_set_user_selection(void* self, bool userSelection) {
    KLineEdit_SetUserSelection((KLineEdit*)self, userSelection);
}

void k_lineedit_on_set_user_selection(void* self, void (*callback)(void*, bool)) {
    KLineEdit_OnSetUserSelection((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_set_user_selection(void* self, bool userSelection) {
    KLineEdit_SuperSetUserSelection((KLineEdit*)self, userSelection);
}

bool k_lineedit_auto_suggest(void* self) {
    return KLineEdit_AutoSuggest((KLineEdit*)self);
}

void k_lineedit_on_auto_suggest(void* self, bool (*callback)()) {
    KLineEdit_OnAutoSuggest((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_super_auto_suggest(void* self) {
    return KLineEdit_SuperAutoSuggest((KLineEdit*)self);
}

void k_lineedit_paint_event(void* self, void* ev) {
    KLineEdit_PaintEvent((KLineEdit*)self, (QPaintEvent*)ev);
}

void k_lineedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnPaintEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_super_paint_event(void* self, void* ev) {
    KLineEdit_SuperPaintEvent((KLineEdit*)self, (QPaintEvent*)ev);
}

const char* k_lineedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_completion_mode_disabled2(void* self, int32_t mode, bool disable) {
    KLineEdit_SetCompletionModeDisabled2((KLineEdit*)self, mode, disable);
}

const char* k_lineedit_text(void* self) {
    libqt_string _str = QLineEdit_Text((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_display_text(void* self) {
    libqt_string _str = QLineEdit_DisplayText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_placeholder_text(void* self) {
    libqt_string _str = QLineEdit_PlaceholderText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_placeholder_text(void* self, const char* placeholderText) {
    QLineEdit_SetPlaceholderText((QLineEdit*)self, qstring(placeholderText));
}

int32_t k_lineedit_max_length(void* self) {
    return QLineEdit_MaxLength((QLineEdit*)self);
}

void k_lineedit_set_max_length(void* self, int maxLength) {
    QLineEdit_SetMaxLength((QLineEdit*)self, maxLength);
}

void k_lineedit_set_frame(void* self, bool frame) {
    QLineEdit_SetFrame((QLineEdit*)self, frame);
}

bool k_lineedit_has_frame(void* self) {
    return QLineEdit_HasFrame((QLineEdit*)self);
}

void k_lineedit_set_clear_button_enabled(void* self, bool enable) {
    QLineEdit_SetClearButtonEnabled((QLineEdit*)self, enable);
}

bool k_lineedit_is_clear_button_enabled(void* self) {
    return QLineEdit_IsClearButtonEnabled((QLineEdit*)self);
}

int32_t k_lineedit_echo_mode(void* self) {
    return QLineEdit_EchoMode((QLineEdit*)self);
}

void k_lineedit_set_echo_mode(void* self, int32_t echoMode) {
    QLineEdit_SetEchoMode((QLineEdit*)self, echoMode);
}

bool k_lineedit_is_read_only(void* self) {
    return QLineEdit_IsReadOnly((QLineEdit*)self);
}

void k_lineedit_set_validator(void* self, void* validator) {
    QLineEdit_SetValidator((QLineEdit*)self, (QValidator*)validator);
}

const QValidator* k_lineedit_validator(void* self) {
    return QLineEdit_Validator((QLineEdit*)self);
}

void k_lineedit_set_completer(void* self, void* completer) {
    QLineEdit_SetCompleter((QLineEdit*)self, (QCompleter*)completer);
}

QCompleter* k_lineedit_completer(void* self) {
    return QLineEdit_Completer((QLineEdit*)self);
}

int32_t k_lineedit_cursor_position(void* self) {
    return QLineEdit_CursorPosition((QLineEdit*)self);
}

void k_lineedit_set_cursor_position(void* self, int cursorPosition) {
    QLineEdit_SetCursorPosition((QLineEdit*)self, cursorPosition);
}

int32_t k_lineedit_cursor_position_at(void* self, void* pos) {
    return QLineEdit_CursorPositionAt((QLineEdit*)self, (QPoint*)pos);
}

void k_lineedit_set_alignment(void* self, int32_t flag) {
    QLineEdit_SetAlignment((QLineEdit*)self, flag);
}

int32_t k_lineedit_alignment(void* self) {
    return QLineEdit_Alignment((QLineEdit*)self);
}

void k_lineedit_cursor_forward(void* self, bool mark) {
    QLineEdit_CursorForward((QLineEdit*)self, mark);
}

void k_lineedit_cursor_backward(void* self, bool mark) {
    QLineEdit_CursorBackward((QLineEdit*)self, mark);
}

void k_lineedit_cursor_word_forward(void* self, bool mark) {
    QLineEdit_CursorWordForward((QLineEdit*)self, mark);
}

void k_lineedit_cursor_word_backward(void* self, bool mark) {
    QLineEdit_CursorWordBackward((QLineEdit*)self, mark);
}

void k_lineedit_backspace(void* self) {
    QLineEdit_Backspace((QLineEdit*)self);
}

void k_lineedit_del(void* self) {
    QLineEdit_Del((QLineEdit*)self);
}

void k_lineedit_home(void* self, bool mark) {
    QLineEdit_Home((QLineEdit*)self, mark);
}

void k_lineedit_end(void* self, bool mark) {
    QLineEdit_End((QLineEdit*)self, mark);
}

bool k_lineedit_is_modified(void* self) {
    return QLineEdit_IsModified((QLineEdit*)self);
}

void k_lineedit_set_modified(void* self, bool modified) {
    QLineEdit_SetModified((QLineEdit*)self, modified);
}

void k_lineedit_set_selection(void* self, int param1, int param2) {
    QLineEdit_SetSelection((QLineEdit*)self, param1, param2);
}

bool k_lineedit_has_selected_text(void* self) {
    return QLineEdit_HasSelectedText((QLineEdit*)self);
}

const char* k_lineedit_selected_text(void* self) {
    libqt_string _str = QLineEdit_SelectedText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_lineedit_selection_start(void* self) {
    return QLineEdit_SelectionStart((QLineEdit*)self);
}

int32_t k_lineedit_selection_end(void* self) {
    return QLineEdit_SelectionEnd((QLineEdit*)self);
}

int32_t k_lineedit_selection_length(void* self) {
    return QLineEdit_SelectionLength((QLineEdit*)self);
}

bool k_lineedit_is_undo_available(void* self) {
    return QLineEdit_IsUndoAvailable((QLineEdit*)self);
}

bool k_lineedit_is_redo_available(void* self) {
    return QLineEdit_IsRedoAvailable((QLineEdit*)self);
}

void k_lineedit_set_drag_enabled(void* self, bool b) {
    QLineEdit_SetDragEnabled((QLineEdit*)self, b);
}

bool k_lineedit_drag_enabled(void* self) {
    return QLineEdit_DragEnabled((QLineEdit*)self);
}

void k_lineedit_set_cursor_move_style(void* self, int32_t style) {
    QLineEdit_SetCursorMoveStyle((QLineEdit*)self, style);
}

int32_t k_lineedit_cursor_move_style(void* self) {
    return QLineEdit_CursorMoveStyle((QLineEdit*)self);
}

const char* k_lineedit_input_mask(void* self) {
    libqt_string _str = QLineEdit_InputMask((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_input_mask(void* self, const char* inputMask) {
    QLineEdit_SetInputMask((QLineEdit*)self, qstring(inputMask));
}

bool k_lineedit_has_acceptable_input(void* self) {
    return QLineEdit_HasAcceptableInput((QLineEdit*)self);
}

void k_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom) {
    QLineEdit_SetTextMargins((QLineEdit*)self, left, top, right, bottom);
}

void k_lineedit_set_text_margins2(void* self, void* margins) {
    QLineEdit_SetTextMargins2((QLineEdit*)self, (QMargins*)margins);
}

QMargins* k_lineedit_text_margins(void* self) {
    return QLineEdit_TextMargins((QLineEdit*)self);
}

void k_lineedit_add_action(void* self, void* action, int32_t position) {
    QLineEdit_AddAction((QLineEdit*)self, (QAction*)action, position);
}

QAction* k_lineedit_add_action2(void* self, void* icon, int32_t position) {
    return QLineEdit_AddAction2((QLineEdit*)self, (QIcon*)icon, position);
}

void k_lineedit_clear(void* self) {
    QLineEdit_Clear((QLineEdit*)self);
}

void k_lineedit_select_all(void* self) {
    QLineEdit_SelectAll((QLineEdit*)self);
}

void k_lineedit_undo(void* self) {
    QLineEdit_Undo((QLineEdit*)self);
}

void k_lineedit_redo(void* self) {
    QLineEdit_Redo((QLineEdit*)self);
}

void k_lineedit_cut(void* self) {
    QLineEdit_Cut((QLineEdit*)self);
}

void k_lineedit_paste(void* self) {
    QLineEdit_Paste((QLineEdit*)self);
}

void k_lineedit_deselect(void* self) {
    QLineEdit_Deselect((QLineEdit*)self);
}

void k_lineedit_insert(void* self, const char* param1) {
    QLineEdit_Insert((QLineEdit*)self, qstring(param1));
}

void k_lineedit_text_changed(void* self, const char* param1) {
    QLineEdit_TextChanged((QLineEdit*)self, qstring(param1));
}

void k_lineedit_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_text_edited(void* self, const char* param1) {
    QLineEdit_TextEdited((QLineEdit*)self, qstring(param1));
}

void k_lineedit_on_text_edited(void* self, void (*callback)(void*, const char*)) {
    QLineEdit_Connect_TextEdited((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_cursor_position_changed(void* self, int param1, int param2) {
    QLineEdit_CursorPositionChanged((QLineEdit*)self, param1, param2);
}

void k_lineedit_on_cursor_position_changed(void* self, void (*callback)(void*, int, int)) {
    QLineEdit_Connect_CursorPositionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_return_pressed(void* self) {
    QLineEdit_ReturnPressed((QLineEdit*)self);
}

void k_lineedit_on_return_pressed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_ReturnPressed((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_editing_finished(void* self) {
    QLineEdit_EditingFinished((QLineEdit*)self);
}

void k_lineedit_on_editing_finished(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_EditingFinished((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_selection_changed(void* self) {
    QLineEdit_SelectionChanged((QLineEdit*)self);
}

void k_lineedit_on_selection_changed(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_SelectionChanged((QLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_input_rejected(void* self) {
    QLineEdit_InputRejected((QLineEdit*)self);
}

void k_lineedit_on_input_rejected(void* self, void (*callback)(void*)) {
    QLineEdit_Connect_InputRejected((QLineEdit*)self, (intptr_t)callback);
}

QVariant* k_lineedit_input_method_query2(void* self, int32_t property, void* argument) {
    return QLineEdit_InputMethodQuery2((QLineEdit*)self, property, (QVariant*)argument);
}

void k_lineedit_cursor_forward2(void* self, bool mark, int steps) {
    QLineEdit_CursorForward2((QLineEdit*)self, mark, steps);
}

void k_lineedit_cursor_backward2(void* self, bool mark, int steps) {
    QLineEdit_CursorBackward2((QLineEdit*)self, mark, steps);
}

uintptr_t k_lineedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_lineedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_lineedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_lineedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_lineedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_lineedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_lineedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_lineedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_lineedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_lineedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_lineedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_lineedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_lineedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_lineedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_lineedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_lineedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_lineedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_lineedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_lineedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_lineedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_lineedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_lineedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_lineedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_lineedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_lineedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_lineedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_lineedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_lineedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_lineedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_lineedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_lineedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_lineedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_lineedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_lineedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_lineedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_lineedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_lineedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_lineedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_lineedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_lineedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_lineedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_lineedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_lineedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_lineedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_lineedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_lineedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_lineedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_lineedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_lineedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_lineedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_lineedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_lineedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_lineedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_lineedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_lineedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_lineedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_lineedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_lineedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_lineedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_lineedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_lineedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_lineedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_lineedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_lineedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_lineedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_lineedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_lineedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_lineedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_lineedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_lineedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_lineedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_lineedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_lineedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_lineedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_lineedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_lineedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_lineedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_lineedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_lineedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_lineedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_lineedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_lineedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_lineedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_lineedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_lineedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_lineedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_lineedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_lineedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_lineedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_lineedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_lineedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_lineedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_lineedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_lineedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_lineedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_lineedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_lineedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_lineedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_lineedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_lineedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_lineedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_lineedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_lineedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_lineedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_lineedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_lineedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_lineedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_lineedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_lineedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_lineedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_lineedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_lineedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_lineedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_lineedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_lineedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_lineedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_lineedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_lineedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_lineedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_lineedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_lineedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_lineedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_lineedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_lineedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_lineedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_lineedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_lineedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_lineedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_lineedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_lineedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_lineedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_lineedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_lineedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_lineedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_lineedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_lineedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_lineedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_lineedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_lineedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_lineedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_lineedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_lineedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_lineedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_lineedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_lineedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_lineedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_lineedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_lineedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_lineedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_lineedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_lineedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_lineedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_lineedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_lineedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_lineedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_lineedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_lineedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_lineedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_lineedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_lineedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_lineedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_lineedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_lineedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_lineedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_lineedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_lineedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_lineedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_lineedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_lineedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_lineedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_lineedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_lineedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_lineedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_lineedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_lineedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_lineedit_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_lineedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_lineedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_lineedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_lineedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_lineedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_lineedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_lineedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_lineedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_lineedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_lineedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_lineedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_lineedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_lineedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_lineedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_lineedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_lineedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_lineedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_lineedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_lineedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_lineedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_lineedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_lineedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_lineedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_lineedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_lineedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_lineedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_lineedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_lineedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_lineedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_lineedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_lineedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_lineedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_lineedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_lineedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_lineedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_lineedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_lineedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_lineedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_lineedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_lineedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_lineedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_lineedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_lineedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_lineedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_lineedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_lineedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_lineedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_lineedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_lineedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_lineedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_lineedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_lineedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_lineedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_lineedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_lineedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_lineedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_lineedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_lineedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_lineedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_lineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_lineedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_lineedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_lineedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_lineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_lineedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_lineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_lineedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_lineedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_lineedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_lineedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_lineedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_lineedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_lineedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_lineedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_lineedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_lineedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_lineedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_lineedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_lineedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineedit_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_lineedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_lineedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_lineedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_lineedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_lineedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_lineedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_lineedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_lineedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_lineedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_lineedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_lineedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_lineedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_lineedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_lineedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_lineedit_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_lineedit_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_lineedit_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_lineedit_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_lineedit_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_lineedit_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_lineedit_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_lineedit_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_lineedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_lineedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_lineedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_lineedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_lineedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lineedit_dynamic_property_names\n");
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

QBindingStorage* k_lineedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_lineedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_lineedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_lineedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_lineedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_lineedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_lineedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_lineedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_lineedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_lineedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_lineedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_lineedit_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_lineedit_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_lineedit_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_lineedit_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_lineedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_lineedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_lineedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_lineedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_lineedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_lineedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_lineedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_lineedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_lineedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_lineedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_lineedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_lineedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_lineedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_lineedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_lineedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

KCompletion* k_lineedit_completion_object(void* self) {
    return KCompletionBase_CompletionObject((KCompletionBase*)self);
}

bool k_lineedit_is_completion_object_auto_deleted(void* self) {
    return KCompletionBase_IsCompletionObjectAutoDeleted((KCompletionBase*)self);
}

void k_lineedit_set_auto_delete_completion_object(void* self, bool autoDelete) {
    KCompletionBase_SetAutoDeleteCompletionObject((KCompletionBase*)self, autoDelete);
}

void k_lineedit_set_enable_signals(void* self, bool enable) {
    KCompletionBase_SetEnableSignals((KCompletionBase*)self, enable);
}

bool k_lineedit_handle_signals(void* self) {
    return KCompletionBase_HandleSignals((KCompletionBase*)self);
}

bool k_lineedit_emit_signals(void* self) {
    return KCompletionBase_EmitSignals((KCompletionBase*)self);
}

void k_lineedit_set_emit_signals(void* self, bool emitRotationSignals) {
    KCompletionBase_SetEmitSignals((KCompletionBase*)self, emitRotationSignals);
}

int32_t k_lineedit_completion_mode(void* self) {
    return KCompletionBase_CompletionMode((KCompletionBase*)self);
}

bool k_lineedit_set_key_binding(void* self, int32_t item, libqt_list /* of QKeySequence* */ key) {
    return KCompletionBase_SetKeyBinding((KCompletionBase*)self, item, key);
}

libqt_list /* of QKeySequence* */ k_lineedit_key_binding(void* self, int32_t item) {
    libqt_list _arr = KCompletionBase_KeyBinding((KCompletionBase*)self, item);
    return _arr;
}

void k_lineedit_use_global_key_bindings(void* self) {
    KCompletionBase_UseGlobalKeyBindings((KCompletionBase*)self);
}

KCompletion* k_lineedit_comp_obj(void* self) {
    return KCompletionBase_CompObj((KCompletionBase*)self);
}

KCompletion* k_lineedit_completion_object1(void* self, bool handleSignals) {
    return KCompletionBase_CompletionObject1((KCompletionBase*)self, handleSignals);
}

QSize* k_lineedit_size_hint(void* self) {
    return KLineEdit_SizeHint((KLineEdit*)self);
}

QSize* k_lineedit_super_size_hint(void* self) {
    return KLineEdit_SuperSizeHint((KLineEdit*)self);
}

void k_lineedit_on_size_hint(void* self, QSize* (*callback)()) {
    KLineEdit_OnSizeHint((KLineEdit*)self, (intptr_t)callback);
}

QSize* k_lineedit_minimum_size_hint(void* self) {
    return KLineEdit_MinimumSizeHint((KLineEdit*)self);
}

QSize* k_lineedit_super_minimum_size_hint(void* self) {
    return KLineEdit_SuperMinimumSizeHint((KLineEdit*)self);
}

void k_lineedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KLineEdit_OnMinimumSizeHint((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_mouse_move_event(void* self, void* param1) {
    KLineEdit_MouseMoveEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_super_mouse_move_event(void* self, void* param1) {
    KLineEdit_SuperMouseMoveEvent((KLineEdit*)self, (QMouseEvent*)param1);
}

void k_lineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnMouseMoveEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_key_release_event(void* self, void* param1) {
    KLineEdit_KeyReleaseEvent((KLineEdit*)self, (QKeyEvent*)param1);
}

void k_lineedit_super_key_release_event(void* self, void* param1) {
    KLineEdit_SuperKeyReleaseEvent((KLineEdit*)self, (QKeyEvent*)param1);
}

void k_lineedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnKeyReleaseEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_focus_in_event(void* self, void* param1) {
    KLineEdit_FocusInEvent((KLineEdit*)self, (QFocusEvent*)param1);
}

void k_lineedit_super_focus_in_event(void* self, void* param1) {
    KLineEdit_SuperFocusInEvent((KLineEdit*)self, (QFocusEvent*)param1);
}

void k_lineedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnFocusInEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_focus_out_event(void* self, void* param1) {
    KLineEdit_FocusOutEvent((KLineEdit*)self, (QFocusEvent*)param1);
}

void k_lineedit_super_focus_out_event(void* self, void* param1) {
    KLineEdit_SuperFocusOutEvent((KLineEdit*)self, (QFocusEvent*)param1);
}

void k_lineedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnFocusOutEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_drag_enter_event(void* self, void* param1) {
    KLineEdit_DragEnterEvent((KLineEdit*)self, (QDragEnterEvent*)param1);
}

void k_lineedit_super_drag_enter_event(void* self, void* param1) {
    KLineEdit_SuperDragEnterEvent((KLineEdit*)self, (QDragEnterEvent*)param1);
}

void k_lineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnDragEnterEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_drag_move_event(void* self, void* e) {
    KLineEdit_DragMoveEvent((KLineEdit*)self, (QDragMoveEvent*)e);
}

void k_lineedit_super_drag_move_event(void* self, void* e) {
    KLineEdit_SuperDragMoveEvent((KLineEdit*)self, (QDragMoveEvent*)e);
}

void k_lineedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnDragMoveEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_drag_leave_event(void* self, void* e) {
    KLineEdit_DragLeaveEvent((KLineEdit*)self, (QDragLeaveEvent*)e);
}

void k_lineedit_super_drag_leave_event(void* self, void* e) {
    KLineEdit_SuperDragLeaveEvent((KLineEdit*)self, (QDragLeaveEvent*)e);
}

void k_lineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnDragLeaveEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_drop_event(void* self, void* param1) {
    KLineEdit_DropEvent((KLineEdit*)self, (QDropEvent*)param1);
}

void k_lineedit_super_drop_event(void* self, void* param1) {
    KLineEdit_SuperDropEvent((KLineEdit*)self, (QDropEvent*)param1);
}

void k_lineedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnDropEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_change_event(void* self, void* param1) {
    KLineEdit_ChangeEvent((KLineEdit*)self, (QEvent*)param1);
}

void k_lineedit_super_change_event(void* self, void* param1) {
    KLineEdit_SuperChangeEvent((KLineEdit*)self, (QEvent*)param1);
}

void k_lineedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnChangeEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_input_method_event(void* self, void* param1) {
    KLineEdit_InputMethodEvent((KLineEdit*)self, (QInputMethodEvent*)param1);
}

void k_lineedit_super_input_method_event(void* self, void* param1) {
    KLineEdit_SuperInputMethodEvent((KLineEdit*)self, (QInputMethodEvent*)param1);
}

void k_lineedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnInputMethodEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_init_style_option(void* self, void* option) {
    KLineEdit_InitStyleOption((KLineEdit*)self, (QStyleOptionFrame*)option);
}

void k_lineedit_super_init_style_option(void* self, void* option) {
    KLineEdit_SuperInitStyleOption((KLineEdit*)self, (QStyleOptionFrame*)option);
}

void k_lineedit_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnInitStyleOption((KLineEdit*)self, (intptr_t)callback);
}

QVariant* k_lineedit_input_method_query(void* self, int32_t param1) {
    return KLineEdit_InputMethodQuery((KLineEdit*)self, param1);
}

QVariant* k_lineedit_super_input_method_query(void* self, int32_t param1) {
    return KLineEdit_SuperInputMethodQuery((KLineEdit*)self, param1);
}

void k_lineedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KLineEdit_OnInputMethodQuery((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_timer_event(void* self, void* param1) {
    KLineEdit_TimerEvent((KLineEdit*)self, (QTimerEvent*)param1);
}

void k_lineedit_super_timer_event(void* self, void* param1) {
    KLineEdit_SuperTimerEvent((KLineEdit*)self, (QTimerEvent*)param1);
}

void k_lineedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnTimerEvent((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_dev_type(void* self) {
    return KLineEdit_DevType((KLineEdit*)self);
}

int32_t k_lineedit_super_dev_type(void* self) {
    return KLineEdit_SuperDevType((KLineEdit*)self);
}

void k_lineedit_on_dev_type(void* self, int32_t (*callback)()) {
    KLineEdit_OnDevType((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_set_visible(void* self, bool visible) {
    KLineEdit_SetVisible((KLineEdit*)self, visible);
}

void k_lineedit_super_set_visible(void* self, bool visible) {
    KLineEdit_SuperSetVisible((KLineEdit*)self, visible);
}

void k_lineedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KLineEdit_OnSetVisible((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_height_for_width(void* self, int param1) {
    return KLineEdit_HeightForWidth((KLineEdit*)self, param1);
}

int32_t k_lineedit_super_height_for_width(void* self, int param1) {
    return KLineEdit_SuperHeightForWidth((KLineEdit*)self, param1);
}

void k_lineedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KLineEdit_OnHeightForWidth((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_has_height_for_width(void* self) {
    return KLineEdit_HasHeightForWidth((KLineEdit*)self);
}

bool k_lineedit_super_has_height_for_width(void* self) {
    return KLineEdit_SuperHasHeightForWidth((KLineEdit*)self);
}

void k_lineedit_on_has_height_for_width(void* self, bool (*callback)()) {
    KLineEdit_OnHasHeightForWidth((KLineEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_lineedit_paint_engine(void* self) {
    return KLineEdit_PaintEngine((KLineEdit*)self);
}

QPaintEngine* k_lineedit_super_paint_engine(void* self) {
    return KLineEdit_SuperPaintEngine((KLineEdit*)self);
}

void k_lineedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KLineEdit_OnPaintEngine((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_wheel_event(void* self, void* event) {
    KLineEdit_WheelEvent((KLineEdit*)self, (QWheelEvent*)event);
}

void k_lineedit_super_wheel_event(void* self, void* event) {
    KLineEdit_SuperWheelEvent((KLineEdit*)self, (QWheelEvent*)event);
}

void k_lineedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnWheelEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_enter_event(void* self, void* event) {
    KLineEdit_EnterEvent((KLineEdit*)self, (QEnterEvent*)event);
}

void k_lineedit_super_enter_event(void* self, void* event) {
    KLineEdit_SuperEnterEvent((KLineEdit*)self, (QEnterEvent*)event);
}

void k_lineedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnEnterEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_leave_event(void* self, void* event) {
    KLineEdit_LeaveEvent((KLineEdit*)self, (QEvent*)event);
}

void k_lineedit_super_leave_event(void* self, void* event) {
    KLineEdit_SuperLeaveEvent((KLineEdit*)self, (QEvent*)event);
}

void k_lineedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnLeaveEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_move_event(void* self, void* event) {
    KLineEdit_MoveEvent((KLineEdit*)self, (QMoveEvent*)event);
}

void k_lineedit_super_move_event(void* self, void* event) {
    KLineEdit_SuperMoveEvent((KLineEdit*)self, (QMoveEvent*)event);
}

void k_lineedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnMoveEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_close_event(void* self, void* event) {
    KLineEdit_CloseEvent((KLineEdit*)self, (QCloseEvent*)event);
}

void k_lineedit_super_close_event(void* self, void* event) {
    KLineEdit_SuperCloseEvent((KLineEdit*)self, (QCloseEvent*)event);
}

void k_lineedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnCloseEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_tablet_event(void* self, void* event) {
    KLineEdit_TabletEvent((KLineEdit*)self, (QTabletEvent*)event);
}

void k_lineedit_super_tablet_event(void* self, void* event) {
    KLineEdit_SuperTabletEvent((KLineEdit*)self, (QTabletEvent*)event);
}

void k_lineedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnTabletEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_action_event(void* self, void* event) {
    KLineEdit_ActionEvent((KLineEdit*)self, (QActionEvent*)event);
}

void k_lineedit_super_action_event(void* self, void* event) {
    KLineEdit_SuperActionEvent((KLineEdit*)self, (QActionEvent*)event);
}

void k_lineedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnActionEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_show_event(void* self, void* event) {
    KLineEdit_ShowEvent((KLineEdit*)self, (QShowEvent*)event);
}

void k_lineedit_super_show_event(void* self, void* event) {
    KLineEdit_SuperShowEvent((KLineEdit*)self, (QShowEvent*)event);
}

void k_lineedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnShowEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_hide_event(void* self, void* event) {
    KLineEdit_HideEvent((KLineEdit*)self, (QHideEvent*)event);
}

void k_lineedit_super_hide_event(void* self, void* event) {
    KLineEdit_SuperHideEvent((KLineEdit*)self, (QHideEvent*)event);
}

void k_lineedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnHideEvent((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KLineEdit_NativeEvent((KLineEdit*)self, qstring(eventType), message, result);
}

bool k_lineedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KLineEdit_SuperNativeEvent((KLineEdit*)self, qstring(eventType), message, result);
}

void k_lineedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KLineEdit_OnNativeEvent((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_metric(void* self, int32_t param1) {
    return KLineEdit_Metric((KLineEdit*)self, param1);
}

int32_t k_lineedit_super_metric(void* self, int32_t param1) {
    return KLineEdit_SuperMetric((KLineEdit*)self, param1);
}

void k_lineedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KLineEdit_OnMetric((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_init_painter(void* self, void* painter) {
    KLineEdit_InitPainter((KLineEdit*)self, (QPainter*)painter);
}

void k_lineedit_super_init_painter(void* self, void* painter) {
    KLineEdit_SuperInitPainter((KLineEdit*)self, (QPainter*)painter);
}

void k_lineedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnInitPainter((KLineEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_lineedit_redirected(void* self, void* offset) {
    return KLineEdit_Redirected((KLineEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_lineedit_super_redirected(void* self, void* offset) {
    return KLineEdit_SuperRedirected((KLineEdit*)self, (QPoint*)offset);
}

void k_lineedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KLineEdit_OnRedirected((KLineEdit*)self, (intptr_t)callback);
}

QPainter* k_lineedit_shared_painter(void* self) {
    return KLineEdit_SharedPainter((KLineEdit*)self);
}

QPainter* k_lineedit_super_shared_painter(void* self) {
    return KLineEdit_SuperSharedPainter((KLineEdit*)self);
}

void k_lineedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    KLineEdit_OnSharedPainter((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_focus_next_prev_child(void* self, bool next) {
    return KLineEdit_FocusNextPrevChild((KLineEdit*)self, next);
}

bool k_lineedit_super_focus_next_prev_child(void* self, bool next) {
    return KLineEdit_SuperFocusNextPrevChild((KLineEdit*)self, next);
}

void k_lineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KLineEdit_OnFocusNextPrevChild((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_event_filter(void* self, void* watched, void* event) {
    return KLineEdit_EventFilter((KLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool k_lineedit_super_event_filter(void* self, void* watched, void* event) {
    return KLineEdit_SuperEventFilter((KLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

void k_lineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLineEdit_OnEventFilter((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_child_event(void* self, void* event) {
    KLineEdit_ChildEvent((KLineEdit*)self, (QChildEvent*)event);
}

void k_lineedit_super_child_event(void* self, void* event) {
    KLineEdit_SuperChildEvent((KLineEdit*)self, (QChildEvent*)event);
}

void k_lineedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnChildEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_custom_event(void* self, void* event) {
    KLineEdit_CustomEvent((KLineEdit*)self, (QEvent*)event);
}

void k_lineedit_super_custom_event(void* self, void* event) {
    KLineEdit_SuperCustomEvent((KLineEdit*)self, (QEvent*)event);
}

void k_lineedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnCustomEvent((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_connect_notify(void* self, void* signal) {
    KLineEdit_ConnectNotify((KLineEdit*)self, (QMetaMethod*)signal);
}

void k_lineedit_super_connect_notify(void* self, void* signal) {
    KLineEdit_SuperConnectNotify((KLineEdit*)self, (QMetaMethod*)signal);
}

void k_lineedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnConnectNotify((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_disconnect_notify(void* self, void* signal) {
    KLineEdit_DisconnectNotify((KLineEdit*)self, (QMetaMethod*)signal);
}

void k_lineedit_super_disconnect_notify(void* self, void* signal) {
    KLineEdit_SuperDisconnectNotify((KLineEdit*)self, (QMetaMethod*)signal);
}

void k_lineedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnDisconnectNotify((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_set_handle_signals(void* self, bool handle) {
    KLineEdit_SetHandleSignals((KLineEdit*)self, handle);
}

void k_lineedit_super_set_handle_signals(void* self, bool handle) {
    KLineEdit_SuperSetHandleSignals((KLineEdit*)self, handle);
}

void k_lineedit_on_set_handle_signals(void* self, void (*callback)(void*, bool)) {
    KLineEdit_OnSetHandleSignals((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_virtual_hook(void* self, int id, void* data) {
    KLineEdit_VirtualHook((KLineEdit*)self, id, data);
}

void k_lineedit_super_virtual_hook(void* self, int id, void* data) {
    KLineEdit_SuperVirtualHook((KLineEdit*)self, id, data);
}

void k_lineedit_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KLineEdit_OnVirtualHook((KLineEdit*)self, (intptr_t)callback);
}

QRect* k_lineedit_cursor_rect(void* self) {
    return KLineEdit_CursorRect((KLineEdit*)self);
}

QRect* k_lineedit_super_cursor_rect(void* self) {
    return KLineEdit_SuperCursorRect((KLineEdit*)self);
}

void k_lineedit_on_cursor_rect(void* self, QRect* (*callback)()) {
    KLineEdit_OnCursorRect((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_update_micro_focus(void* self) {
    KLineEdit_UpdateMicroFocus((KLineEdit*)self);
}

void k_lineedit_super_update_micro_focus(void* self) {
    KLineEdit_SuperUpdateMicroFocus((KLineEdit*)self);
}

void k_lineedit_on_update_micro_focus(void* self, void (*callback)()) {
    KLineEdit_OnUpdateMicroFocus((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_create(void* self) {
    KLineEdit_Create((KLineEdit*)self);
}

void k_lineedit_super_create(void* self) {
    KLineEdit_SuperCreate((KLineEdit*)self);
}

void k_lineedit_on_create(void* self, void (*callback)()) {
    KLineEdit_OnCreate((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_destroy(void* self) {
    KLineEdit_Destroy((KLineEdit*)self);
}

void k_lineedit_super_destroy(void* self) {
    KLineEdit_SuperDestroy((KLineEdit*)self);
}

void k_lineedit_on_destroy(void* self, void (*callback)()) {
    KLineEdit_OnDestroy((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_focus_next_child(void* self) {
    return KLineEdit_FocusNextChild((KLineEdit*)self);
}

bool k_lineedit_super_focus_next_child(void* self) {
    return KLineEdit_SuperFocusNextChild((KLineEdit*)self);
}

void k_lineedit_on_focus_next_child(void* self, bool (*callback)()) {
    KLineEdit_OnFocusNextChild((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_focus_previous_child(void* self) {
    return KLineEdit_FocusPreviousChild((KLineEdit*)self);
}

bool k_lineedit_super_focus_previous_child(void* self) {
    return KLineEdit_SuperFocusPreviousChild((KLineEdit*)self);
}

void k_lineedit_on_focus_previous_child(void* self, bool (*callback)()) {
    KLineEdit_OnFocusPreviousChild((KLineEdit*)self, (intptr_t)callback);
}

QObject* k_lineedit_sender(void* self) {
    return KLineEdit_Sender((KLineEdit*)self);
}

QObject* k_lineedit_super_sender(void* self) {
    return KLineEdit_SuperSender((KLineEdit*)self);
}

void k_lineedit_on_sender(void* self, QObject* (*callback)()) {
    KLineEdit_OnSender((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_sender_signal_index(void* self) {
    return KLineEdit_SenderSignalIndex((KLineEdit*)self);
}

int32_t k_lineedit_super_sender_signal_index(void* self) {
    return KLineEdit_SuperSenderSignalIndex((KLineEdit*)self);
}

void k_lineedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLineEdit_OnSenderSignalIndex((KLineEdit*)self, (intptr_t)callback);
}

int32_t k_lineedit_receivers(void* self, const char* signal) {
    return KLineEdit_Receivers((KLineEdit*)self, signal);
}

int32_t k_lineedit_super_receivers(void* self, const char* signal) {
    return KLineEdit_SuperReceivers((KLineEdit*)self, signal);
}

void k_lineedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLineEdit_OnReceivers((KLineEdit*)self, (intptr_t)callback);
}

bool k_lineedit_is_signal_connected(void* self, void* signal) {
    return KLineEdit_IsSignalConnected((KLineEdit*)self, (QMetaMethod*)signal);
}

bool k_lineedit_super_is_signal_connected(void* self, void* signal) {
    return KLineEdit_SuperIsSignalConnected((KLineEdit*)self, (QMetaMethod*)signal);
}

void k_lineedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLineEdit_OnIsSignalConnected((KLineEdit*)self, (intptr_t)callback);
}

double k_lineedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLineEdit_GetDecodedMetricF((KLineEdit*)self, metricA, metricB);
}

double k_lineedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLineEdit_SuperGetDecodedMetricF((KLineEdit*)self, metricA, metricB);
}

void k_lineedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KLineEdit_OnGetDecodedMetricF((KLineEdit*)self, (intptr_t)callback);
}

libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_lineedit_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KLineEdit_KeyBindingMap((KLineEdit*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QKeySequence*** _ret_values = (QKeySequence***)malloc(_ret.len * sizeof(QKeySequence**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_lineedit_key_binding_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        QKeySequence** _ret_arr = (QKeySequence**)malloc((_value_list.len + 1) * sizeof(QKeySequence*));
        if (_ret_arr == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in k_lineedit_key_binding_map\n");
            abort();
        }
        memcpy(_ret_arr, _value_list.data.ptr, _value_list.len * sizeof(QKeySequence*));
        _ret_arr[_value_list.len] = NULL;
        _ret_values[i] = _ret_arr;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        free((QKeySequence**)_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_lineedit_super_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KLineEdit_SuperKeyBindingMap((KLineEdit*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QKeySequence*** _ret_values = (QKeySequence***)malloc(_ret.len * sizeof(QKeySequence**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_lineedit_key_binding_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        QKeySequence** _ret_arr = (QKeySequence**)malloc((_value_list.len + 1) * sizeof(QKeySequence*));
        if (_ret_arr == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in k_lineedit_key_binding_map\n");
            abort();
        }
        memcpy(_ret_arr, _value_list.data.ptr, _value_list.len * sizeof(QKeySequence*));
        _ret_arr[_value_list.len] = NULL;
        _ret_values[i] = _ret_arr;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        free((QKeySequence**)_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

void k_lineedit_on_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ (*callback)()) {
    KLineEdit_OnKeyBindingMap((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = (int32_t*)malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_lineedit_set_key_binding_map\n");
        abort();
    }
    keyBindingMap_ret.values = (libqt_list*)malloc(keyBindingMap_ret.len * sizeof(libqt_list));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_lineedit_set_key_binding_map\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence*** keyBindingMap_varr = (QKeySequence***)keyBindingMap.values;
    libqt_list* keyBindingMap_vdest = (libqt_list*)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        size_t keyBindingMap_value_count = 0;
        while (keyBindingMap_varr[i][keyBindingMap_value_count] != NULL) {
            keyBindingMap_value_count++;
        }
        keyBindingMap_vdest[i].len = keyBindingMap_value_count;
        keyBindingMap_vdest[i].data.ptr = (void*)keyBindingMap_varr[i];
    }
    KLineEdit_SetKeyBindingMap((KLineEdit*)self, keyBindingMap_ret);
    free(keyBindingMap_ret.keys);
    free(keyBindingMap_ret.values);
}

void k_lineedit_super_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = (int32_t*)malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_lineedit_set_key_binding_map\n");
        abort();
    }
    keyBindingMap_ret.values = (libqt_list*)malloc(keyBindingMap_ret.len * sizeof(libqt_list));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_lineedit_set_key_binding_map\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence*** keyBindingMap_varr = (QKeySequence***)keyBindingMap.values;
    libqt_list* keyBindingMap_vdest = (libqt_list*)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        size_t keyBindingMap_value_count = 0;
        while (keyBindingMap_varr[i][keyBindingMap_value_count] != NULL) {
            keyBindingMap_value_count++;
        }
        keyBindingMap_vdest[i].len = keyBindingMap_value_count;
        keyBindingMap_vdest[i].data.ptr = (void*)keyBindingMap_varr[i];
    }
    KLineEdit_SuperSetKeyBindingMap((KLineEdit*)self, keyBindingMap_ret);
    free(keyBindingMap_ret.keys);
    free(keyBindingMap_ret.values);
}

void k_lineedit_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */)) {
    KLineEdit_OnSetKeyBindingMap((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_set_delegate(void* self, void* delegate) {
    KLineEdit_SetDelegate((KLineEdit*)self, (KCompletionBase*)delegate);
}

void k_lineedit_super_set_delegate(void* self, void* delegate) {
    KLineEdit_SuperSetDelegate((KLineEdit*)self, (KCompletionBase*)delegate);
}

void k_lineedit_on_set_delegate(void* self, void (*callback)(void*, void*)) {
    KLineEdit_OnSetDelegate((KLineEdit*)self, (intptr_t)callback);
}

KCompletionBase* k_lineedit_delegate(void* self) {
    return KLineEdit_Delegate((KLineEdit*)self);
}

KCompletionBase* k_lineedit_super_delegate(void* self) {
    return KLineEdit_SuperDelegate((KLineEdit*)self);
}

void k_lineedit_on_delegate(void* self, KCompletionBase* (*callback)()) {
    KLineEdit_OnDelegate((KLineEdit*)self, (intptr_t)callback);
}

void k_lineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_lineedit_delete(void* self) {
    KLineEdit_Delete((KLineEdit*)(self));
}
