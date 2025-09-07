#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONQT6C_LIBKLINEEDIT_H
#define SRC_EXTRAS_KCOMPLETIONQT6C_LIBKLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/klineedit.html

/// k_lineedit_new constructs a new KLineEdit object.
///
/// @param parent QWidget*
KLineEdit* k_lineedit_new(void* parent);

/// k_lineedit_new2 constructs a new KLineEdit object.
///
/// @param stringVal const char*
KLineEdit* k_lineedit_new2(const char* stringVal);

/// k_lineedit_new3 constructs a new KLineEdit object.
///
KLineEdit* k_lineedit_new3();

/// k_lineedit_new4 constructs a new KLineEdit object.
///
/// @param stringVal const char*
/// @param parent QWidget*
KLineEdit* k_lineedit_new4(const char* stringVal, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KLineEdit*
const QMetaObject* k_lineedit_meta_object(void* self);

/// @param self KLineEdit*
/// @param param1 const char*
void* k_lineedit_metacast(void* self, const char* param1);

/// @param self KLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_lineedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback int32_t func(KLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_lineedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_lineedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_lineedit_tr(const char* s);

/// [Qt documentation](https://api.kde.org/klineedit.html#setUrl)
///
/// @param self KLineEdit*
/// @param url QUrl*
void k_lineedit_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionMode)
///
/// @param self KLineEdit*
/// @param mode enum KCompletion__CompletionMode
void k_lineedit_set_completion_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionMode)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, enum KCompletion__CompletionMode mode)
void k_lineedit_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionMode)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param mode enum KCompletion__CompletionMode
void k_lineedit_qbase_set_completion_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionModeDisabled)
///
/// @param self KLineEdit*
/// @param mode enum KCompletion__CompletionMode
void k_lineedit_set_completion_mode_disabled(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/klineedit.html#urlDropsEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_url_drops_enabled(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#setTrapReturnKey)
///
/// @param self KLineEdit*
/// @param trap bool
void k_lineedit_set_trap_return_key(void* self, bool trap);

/// [Qt documentation](https://api.kde.org/klineedit.html#trapReturnKey)
///
/// @param self KLineEdit*
bool k_lineedit_trap_return_key(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#completionBox)
///
/// @param self KLineEdit*
/// @param create bool
KCompletionBox* k_lineedit_completion_box(void* self, bool create);

/// [Qt documentation](https://api.kde.org/klineedit.html#completionBox)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback KCompletionBox* func(KLineEdit* self, bool create)
void k_lineedit_on_completion_box(void* self, KCompletionBox* (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#completionBox)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param create bool
KCompletionBox* k_lineedit_qbase_completion_box(void* self, bool create);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionObject)
///
/// @param self KLineEdit*
/// @param param1 KCompletion*
/// @param handle bool
void k_lineedit_set_completion_object(void* self, void* param1, bool handle);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionObject)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, KCompletion* param1, bool handle)
void k_lineedit_on_set_completion_object(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionObject)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 KCompletion*
/// @param handle bool
void k_lineedit_qbase_set_completion_object(void* self, void* param1, bool handle);

/// [Qt documentation](https://api.kde.org/klineedit.html#copy)
///
/// @param self KLineEdit*
void k_lineedit_copy(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#copy)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func()
void k_lineedit_on_copy(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/klineedit.html#copy)
///
/// Base class method implementation
///
/// @param self KLineEdit*
void k_lineedit_qbase_copy(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#setSqueezedTextEnabled)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_squeezed_text_enabled(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/klineedit.html#isSqueezedTextEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_is_squeezed_text_enabled(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#originalText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_original_text(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#userText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_user_text(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionBox)
///
/// @param self KLineEdit*
/// @param box KCompletionBox*
void k_lineedit_set_completion_box(void* self, void* box);

/// [Qt documentation](https://api.kde.org/klineedit.html#clearButtonUsedSize)
///
/// @param self KLineEdit*
QSize* k_lineedit_clear_button_used_size(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#doCompletion)
///
/// @param self KLineEdit*
/// @param text const char*
void k_lineedit_do_completion(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/klineedit.html#completionBoxActivated)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_completion_box_activated(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#completionBoxActivated)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_completion_box_activated(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#returnKeyPressed)
///
/// @param self KLineEdit*
/// @param text const char*
void k_lineedit_return_key_pressed(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/klineedit.html#returnKeyPressed)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* text)
void k_lineedit_on_return_key_pressed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#completion)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#completion)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_completion(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#substringCompletion)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_substring_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#substringCompletion)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_substring_completion(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#textRotation)
///
/// @param self KLineEdit*
/// @param param1 enum KCompletionBase__KeyBindingType
void k_lineedit_text_rotation(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#textRotation)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, enum KCompletionBase__KeyBindingType param1)
void k_lineedit_on_text_rotation(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/klineedit.html#completionModeChanged)
///
/// @param self KLineEdit*
/// @param param1 enum KCompletion__CompletionMode
void k_lineedit_completion_mode_changed(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#completionModeChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, enum KCompletion__CompletionMode param1)
void k_lineedit_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/klineedit.html#aboutToShowContextMenu)
///
/// @param self KLineEdit*
/// @param contextMenu QMenu*
void k_lineedit_about_to_show_context_menu(void* self, void* contextMenu);

/// [Qt documentation](https://api.kde.org/klineedit.html#aboutToShowContextMenu)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMenu* contextMenu)
void k_lineedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#clearButtonClicked)
///
/// @param self KLineEdit*
void k_lineedit_clear_button_clicked(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#clearButtonClicked)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_clear_button_clicked(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#setReadOnly)
///
/// @param self KLineEdit*
/// @param readOnly bool
void k_lineedit_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://api.kde.org/klineedit.html#setReadOnly)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, bool readOnly)
void k_lineedit_on_set_read_only(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#setReadOnly)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param readOnly bool
void k_lineedit_qbase_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://api.kde.org/klineedit.html#rotateText)
///
/// @param self KLineEdit*
/// @param typeVal enum KCompletionBase__KeyBindingType
void k_lineedit_rotate_text(void* self, int32_t typeVal);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// @param self KLineEdit*
/// @param completedText const char*
void k_lineedit_set_completed_text(void* self, const char* completedText);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* completedText)
void k_lineedit_on_set_completed_text(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param completedText const char*
void k_lineedit_qbase_set_completed_text(void* self, const char* completedText);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedItems)
///
/// @param self KLineEdit*
/// @param items const char**
/// @param autoSuggest bool
void k_lineedit_set_completed_items(void* self, const char* items[], bool autoSuggest);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedItems)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char** items, bool autoSuggest)
void k_lineedit_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedItems)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param items const char**
/// @param autoSuggest bool
void k_lineedit_qbase_set_completed_items(void* self, const char* items[], bool autoSuggest);

/// [Qt documentation](https://api.kde.org/klineedit.html#setSqueezedText)
///
/// @param self KLineEdit*
/// @param text const char*
void k_lineedit_set_squeezed_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/klineedit.html#setText)
///
/// @param self KLineEdit*
/// @param text const char*
void k_lineedit_set_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/klineedit.html#setText)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* text)
void k_lineedit_on_set_text(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#setText)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param text const char*
void k_lineedit_qbase_set_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/klineedit.html#makeCompletion)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_make_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#makeCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_make_completion(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#makeCompletion)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_qbase_make_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#userCancelled)
///
/// @param self KLineEdit*
/// @param cancelText const char*
void k_lineedit_user_cancelled(void* self, const char* cancelText);

/// [Qt documentation](https://api.kde.org/klineedit.html#userCancelled)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* cancelText)
void k_lineedit_on_user_cancelled(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#userCancelled)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param cancelText const char*
void k_lineedit_qbase_user_cancelled(void* self, const char* cancelText);

/// [Qt documentation](https://api.kde.org/klineedit.html#event)
///
/// @param self KLineEdit*
/// @param param1 QEvent*
bool k_lineedit_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback bool func(KLineEdit* self, QEvent* param1)
void k_lineedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#event)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QEvent*
bool k_lineedit_qbase_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#resizeEvent)
///
/// @param self KLineEdit*
/// @param param1 QResizeEvent*
void k_lineedit_resize_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QResizeEvent* param1)
void k_lineedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QResizeEvent*
void k_lineedit_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#keyPressEvent)
///
/// @param self KLineEdit*
/// @param param1 QKeyEvent*
void k_lineedit_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QKeyEvent* param1)
void k_lineedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QKeyEvent*
void k_lineedit_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mousePressEvent)
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMouseEvent* param1)
void k_lineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseReleaseEvent)
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMouseEvent* param1)
void k_lineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMouseEvent* param1)
void k_lineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#contextMenuEvent)
///
/// @param self KLineEdit*
/// @param param1 QContextMenuEvent*
void k_lineedit_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QContextMenuEvent* param1)
void k_lineedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 QContextMenuEvent*
void k_lineedit_qbase_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/klineedit.html#createStandardContextMenu)
///
/// @param self KLineEdit*
QMenu* k_lineedit_create_standard_context_menu(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#createStandardContextMenu)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback QMenu* func()
void k_lineedit_on_create_standard_context_menu(void* self, QMenu* (*callback)());

/// [Qt documentation](https://api.kde.org/klineedit.html#createStandardContextMenu)
///
/// Base class method implementation
///
/// @param self KLineEdit*
QMenu* k_lineedit_qbase_create_standard_context_menu(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// @param self KLineEdit*
/// @param param1 const char*
/// @param param2 bool
void k_lineedit_set_completed_text2(void* self, const char* param1, bool param2);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1, bool param2)
void k_lineedit_on_set_completed_text2(void* self, void (*callback)(void*, const char*, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletedText)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param param1 const char*
/// @param param2 bool
void k_lineedit_qbase_set_completed_text2(void* self, const char* param1, bool param2);

/// [Qt documentation](https://api.kde.org/klineedit.html#setUserSelection)
///
/// @param self KLineEdit*
/// @param userSelection bool
void k_lineedit_set_user_selection(void* self, bool userSelection);

/// [Qt documentation](https://api.kde.org/klineedit.html#setUserSelection)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, bool userSelection)
void k_lineedit_on_set_user_selection(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/klineedit.html#setUserSelection)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param userSelection bool
void k_lineedit_qbase_set_user_selection(void* self, bool userSelection);

/// [Qt documentation](https://api.kde.org/klineedit.html#autoSuggest)
///
/// @param self KLineEdit*
bool k_lineedit_auto_suggest(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#autoSuggest)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback bool func()
void k_lineedit_on_auto_suggest(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/klineedit.html#autoSuggest)
///
/// Base class method implementation
///
/// @param self KLineEdit*
bool k_lineedit_qbase_auto_suggest(void* self);

/// [Qt documentation](https://api.kde.org/klineedit.html#paintEvent)
///
/// @param self KLineEdit*
/// @param ev QPaintEvent*
void k_lineedit_paint_event(void* self, void* ev);

/// [Qt documentation](https://api.kde.org/klineedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QPaintEvent* ev)
void k_lineedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/klineedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KLineEdit*
/// @param ev QPaintEvent*
void k_lineedit_qbase_paint_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_lineedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_lineedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/klineedit.html#setCompletionModeDisabled)
///
/// @param self KLineEdit*
/// @param mode enum KCompletion__CompletionMode
/// @param disable bool
void k_lineedit_set_completion_mode_disabled2(void* self, int32_t mode, bool disable);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_text(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_display_text(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_placeholder_text(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// @param self KLineEdit*
/// @param placeholderText const char*
void k_lineedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// @param self KLineEdit*
int32_t k_lineedit_max_length(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// @param self KLineEdit*
/// @param maxLength int
void k_lineedit_set_max_length(void* self, int maxLength);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// @param self KLineEdit*
/// @param frame bool
void k_lineedit_set_frame(void* self, bool frame);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// @param self KLineEdit*
bool k_lineedit_has_frame(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_clear_button_enabled(void* self, bool enable);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_is_clear_button_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// @param self KLineEdit*
///
/// @return enum QLineEdit__EchoMode
int32_t k_lineedit_echo_mode(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// @param self KLineEdit*
/// @param echoMode enum QLineEdit__EchoMode
void k_lineedit_set_echo_mode(void* self, int32_t echoMode);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// @param self KLineEdit*
bool k_lineedit_is_read_only(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// @param self KLineEdit*
/// @param validator QValidator*
void k_lineedit_set_validator(void* self, void* validator);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// @param self KLineEdit*
const QValidator* k_lineedit_validator(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// @param self KLineEdit*
/// @param completer QCompleter*
void k_lineedit_set_completer(void* self, void* completer);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// @param self KLineEdit*
QCompleter* k_lineedit_completer(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// @param self KLineEdit*
int32_t k_lineedit_cursor_position(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// @param self KLineEdit*
/// @param cursorPosition int
void k_lineedit_set_cursor_position(void* self, int cursorPosition);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// @param self KLineEdit*
/// @param pos QPoint*
int32_t k_lineedit_cursor_position_at(void* self, void* pos);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// @param self KLineEdit*
/// @param flag flag of enum Qt__AlignmentFlag
void k_lineedit_set_alignment(void* self, int32_t flag);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// @param self KLineEdit*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t k_lineedit_alignment(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_cursor_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_cursor_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_cursor_word_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_cursor_word_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// @param self KLineEdit*
void k_lineedit_backspace(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// @param self KLineEdit*
void k_lineedit_del(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_home(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// @param self KLineEdit*
/// @param mark bool
void k_lineedit_end(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// @param self KLineEdit*
bool k_lineedit_is_modified(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// @param self KLineEdit*
/// @param modified bool
void k_lineedit_set_modified(void* self, bool modified);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// @param self KLineEdit*
/// @param param1 int
/// @param param2 int
void k_lineedit_set_selection(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// @param self KLineEdit*
bool k_lineedit_has_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// @param self KLineEdit*
int32_t k_lineedit_selection_start(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// @param self KLineEdit*
int32_t k_lineedit_selection_end(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// @param self KLineEdit*
int32_t k_lineedit_selection_length(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// @param self KLineEdit*
bool k_lineedit_is_undo_available(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// @param self KLineEdit*
bool k_lineedit_is_redo_available(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// @param self KLineEdit*
/// @param b bool
void k_lineedit_set_drag_enabled(void* self, bool b);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_drag_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// @param self KLineEdit*
/// @param style enum Qt__CursorMoveStyle
void k_lineedit_set_cursor_move_style(void* self, int32_t style);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// @param self KLineEdit*
///
/// @return enum Qt__CursorMoveStyle
int32_t k_lineedit_cursor_move_style(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_input_mask(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// @param self KLineEdit*
/// @param inputMask const char*
void k_lineedit_set_input_mask(void* self, const char* inputMask);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// @param self KLineEdit*
bool k_lineedit_has_acceptable_input(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KLineEdit*
/// @param margins QMargins*
void k_lineedit_set_text_margins2(void* self, void* margins);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// @param self KLineEdit*
QMargins* k_lineedit_text_margins(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KLineEdit*
/// @param action QAction*
/// @param position enum QLineEdit__ActionPosition
void k_lineedit_add_action(void* self, void* action, int32_t position);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KLineEdit*
/// @param icon QIcon*
/// @param position enum QLineEdit__ActionPosition
QAction* k_lineedit_add_action2(void* self, void* icon, int32_t position);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// @param self KLineEdit*
void k_lineedit_clear(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// @param self KLineEdit*
void k_lineedit_select_all(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// @param self KLineEdit*
void k_lineedit_undo(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// @param self KLineEdit*
void k_lineedit_redo(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// @param self KLineEdit*
void k_lineedit_cut(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// @param self KLineEdit*
void k_lineedit_paste(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// @param self KLineEdit*
void k_lineedit_deselect(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_insert(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_text_changed(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KLineEdit*
/// @param param1 const char*
void k_lineedit_text_edited(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* param1)
void k_lineedit_on_text_edited(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KLineEdit*
/// @param param1 int
/// @param param2 int
void k_lineedit_cursor_position_changed(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, int param1, int param2)
void k_lineedit_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KLineEdit*
void k_lineedit_return_pressed(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_return_pressed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KLineEdit*
void k_lineedit_editing_finished(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KLineEdit*
void k_lineedit_selection_changed(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KLineEdit*
void k_lineedit_input_rejected(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_input_rejected(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self KLineEdit*
/// @param property enum Qt__InputMethodQuery
/// @param argument QVariant*
QVariant* k_lineedit_input_method_query2(void* self, int64_t property, void* argument);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KLineEdit*
/// @param mark bool
/// @param steps int
void k_lineedit_cursor_forward2(void* self, bool mark, int steps);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KLineEdit*
/// @param mark bool
/// @param steps int
void k_lineedit_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KLineEdit*
uintptr_t k_lineedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KLineEdit*
void k_lineedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KLineEdit*
uintptr_t k_lineedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KLineEdit*
uintptr_t k_lineedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KLineEdit*
QStyle* k_lineedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KLineEdit*
/// @param style QStyle*
void k_lineedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KLineEdit*
bool k_lineedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KLineEdit*
bool k_lineedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KLineEdit*
bool k_lineedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KLineEdit*
///
/// @return enum Qt__WindowModality
int32_t k_lineedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KLineEdit*
/// @param windowModality enum Qt__WindowModality
void k_lineedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
bool k_lineedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KLineEdit*
/// @param enabled bool
void k_lineedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KLineEdit*
/// @param disabled bool
void k_lineedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KLineEdit*
/// @param windowModified bool
void k_lineedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KLineEdit*
QRect* k_lineedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KLineEdit*
const QRect* k_lineedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KLineEdit*
QRect* k_lineedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KLineEdit*
int32_t k_lineedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KLineEdit*
int32_t k_lineedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KLineEdit*
QPoint* k_lineedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KLineEdit*
QSize* k_lineedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KLineEdit*
QSize* k_lineedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KLineEdit*
int32_t k_lineedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KLineEdit*
int32_t k_lineedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KLineEdit*
QRect* k_lineedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KLineEdit*
QRect* k_lineedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KLineEdit*
QRegion* k_lineedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KLineEdit*
QSize* k_lineedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KLineEdit*
QSize* k_lineedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KLineEdit*
int32_t k_lineedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KLineEdit*
int32_t k_lineedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KLineEdit*
int32_t k_lineedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KLineEdit*
int32_t k_lineedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KLineEdit*
/// @param minimumSize QSize*
void k_lineedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KLineEdit*
/// @param minw int
/// @param minh int
void k_lineedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KLineEdit*
/// @param maximumSize QSize*
void k_lineedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KLineEdit*
/// @param maxw int
/// @param maxh int
void k_lineedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KLineEdit*
/// @param minw int
void k_lineedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KLineEdit*
/// @param minh int
void k_lineedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KLineEdit*
/// @param maxw int
void k_lineedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KLineEdit*
/// @param maxh int
void k_lineedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KLineEdit*
QSize* k_lineedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KLineEdit*
/// @param sizeIncrement QSize*
void k_lineedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KLineEdit*
/// @param w int
/// @param h int
void k_lineedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KLineEdit*
QSize* k_lineedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KLineEdit*
/// @param baseSize QSize*
void k_lineedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KLineEdit*
/// @param basew int
/// @param baseh int
void k_lineedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KLineEdit*
/// @param fixedSize QSize*
void k_lineedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KLineEdit*
/// @param w int
/// @param h int
void k_lineedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KLineEdit*
/// @param w int
void k_lineedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KLineEdit*
/// @param h int
void k_lineedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KLineEdit*
/// @param param1 QPointF*
QPointF* k_lineedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KLineEdit*
/// @param param1 QPoint*
QPoint* k_lineedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KLineEdit*
/// @param param1 QPointF*
QPointF* k_lineedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KLineEdit*
/// @param param1 QPoint*
QPoint* k_lineedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KLineEdit*
/// @param param1 QPointF*
QPointF* k_lineedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KLineEdit*
/// @param param1 QPoint*
QPoint* k_lineedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KLineEdit*
/// @param param1 QPointF*
QPointF* k_lineedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KLineEdit*
/// @param param1 QPoint*
QPoint* k_lineedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_lineedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_lineedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_lineedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_lineedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KLineEdit*
QWidget* k_lineedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KLineEdit*
QWidget* k_lineedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KLineEdit*
QWidget* k_lineedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KLineEdit*
const QPalette* k_lineedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KLineEdit*
/// @param palette QPalette*
void k_lineedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KLineEdit*
/// @param backgroundRole enum QPalette__ColorRole
void k_lineedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KLineEdit*
///
/// @return enum QPalette__ColorRole
int32_t k_lineedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KLineEdit*
/// @param foregroundRole enum QPalette__ColorRole
void k_lineedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KLineEdit*
///
/// @return enum QPalette__ColorRole
int32_t k_lineedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KLineEdit*
const QFont* k_lineedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KLineEdit*
/// @param font QFont*
void k_lineedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KLineEdit*
QFontMetrics* k_lineedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KLineEdit*
QFontInfo* k_lineedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KLineEdit*
QCursor* k_lineedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KLineEdit*
/// @param cursor QCursor*
void k_lineedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KLineEdit*
void k_lineedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KLineEdit*
bool k_lineedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KLineEdit*
bool k_lineedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KLineEdit*
bool k_lineedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KLineEdit*
/// @param mask QBitmap*
void k_lineedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KLineEdit*
/// @param mask QRegion*
void k_lineedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KLineEdit*
QRegion* k_lineedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KLineEdit*
void k_lineedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param target QPaintDevice*
void k_lineedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param painter QPainter*
void k_lineedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KLineEdit*
QPixmap* k_lineedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KLineEdit*
QGraphicsEffect* k_lineedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KLineEdit*
/// @param effect QGraphicsEffect*
void k_lineedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KLineEdit*
/// @param typeVal enum Qt__GestureType
void k_lineedit_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KLineEdit*
/// @param typeVal enum Qt__GestureType
void k_lineedit_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KLineEdit*
/// @param windowTitle const char*
void k_lineedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KLineEdit*
/// @param styleSheet const char*
void k_lineedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KLineEdit*
/// @param icon QIcon*
void k_lineedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KLineEdit*
QIcon* k_lineedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KLineEdit*
/// @param windowIconText const char*
void k_lineedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KLineEdit*
/// @param windowRole const char*
void k_lineedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KLineEdit*
/// @param filePath const char*
void k_lineedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KLineEdit*
/// @param level double
void k_lineedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KLineEdit*
double k_lineedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KLineEdit*
bool k_lineedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KLineEdit*
/// @param toolTip const char*
void k_lineedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KLineEdit*
/// @param msec int
void k_lineedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KLineEdit*
int32_t k_lineedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KLineEdit*
/// @param statusTip const char*
void k_lineedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KLineEdit*
/// @param whatsThis const char*
void k_lineedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KLineEdit*
/// @param name const char*
void k_lineedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KLineEdit*
/// @param description const char*
void k_lineedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KLineEdit*
/// @param direction enum Qt__LayoutDirection
void k_lineedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KLineEdit*
///
/// @return enum Qt__LayoutDirection
int32_t k_lineedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KLineEdit*
void k_lineedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KLineEdit*
/// @param locale QLocale*
void k_lineedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KLineEdit*
QLocale* k_lineedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KLineEdit*
void k_lineedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KLineEdit*
bool k_lineedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KLineEdit*
bool k_lineedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KLineEdit*
void k_lineedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KLineEdit*
bool k_lineedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KLineEdit*
void k_lineedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KLineEdit*
void k_lineedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KLineEdit*
/// @param reason enum Qt__FocusReason
void k_lineedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KLineEdit*
///
/// @return enum Qt__FocusPolicy
int32_t k_lineedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KLineEdit*
/// @param policy enum Qt__FocusPolicy
void k_lineedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KLineEdit*
bool k_lineedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_lineedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KLineEdit*
/// @param focusProxy QWidget*
void k_lineedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KLineEdit*
QWidget* k_lineedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KLineEdit*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_lineedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KLineEdit*
/// @param policy enum Qt__ContextMenuPolicy
void k_lineedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KLineEdit*
void k_lineedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KLineEdit*
/// @param param1 QCursor*
void k_lineedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KLineEdit*
void k_lineedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KLineEdit*
void k_lineedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KLineEdit*
void k_lineedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KLineEdit*
/// @param key QKeySequence*
int32_t k_lineedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KLineEdit*
/// @param id int
void k_lineedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KLineEdit*
/// @param id int
void k_lineedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KLineEdit*
/// @param id int
void k_lineedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_lineedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_lineedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KLineEdit*
bool k_lineedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KLineEdit*
QGraphicsProxyWidget* k_lineedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KLineEdit*
void k_lineedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KLineEdit*
void k_lineedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_lineedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KLineEdit*
/// @param param1 QRect*
void k_lineedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KLineEdit*
/// @param param1 QRegion*
void k_lineedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_lineedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KLineEdit*
/// @param param1 QRect*
void k_lineedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KLineEdit*
/// @param param1 QRegion*
void k_lineedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KLineEdit*
/// @param hidden bool
void k_lineedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KLineEdit*
void k_lineedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KLineEdit*
void k_lineedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KLineEdit*
void k_lineedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KLineEdit*
void k_lineedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KLineEdit*
void k_lineedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KLineEdit*
void k_lineedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KLineEdit*
bool k_lineedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KLineEdit*
void k_lineedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KLineEdit*
void k_lineedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
void k_lineedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KLineEdit*
/// @param x int
/// @param y int
void k_lineedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KLineEdit*
/// @param param1 QPoint*
void k_lineedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KLineEdit*
/// @param w int
/// @param h int
void k_lineedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KLineEdit*
/// @param param1 QSize*
void k_lineedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_lineedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KLineEdit*
/// @param geometry QRect*
void k_lineedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
char* k_lineedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KLineEdit*
/// @param geometry const char*
bool k_lineedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KLineEdit*
void k_lineedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KLineEdit*
bool k_lineedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KLineEdit*
/// @param param1 QWidget*
bool k_lineedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KLineEdit*
bool k_lineedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KLineEdit*
bool k_lineedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KLineEdit*
bool k_lineedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KLineEdit*
bool k_lineedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KLineEdit*
///
/// @return flag of enum Qt__WindowState
int32_t k_lineedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KLineEdit*
/// @param state flag of enum Qt__WindowState
void k_lineedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KLineEdit*
/// @param state flag of enum Qt__WindowState
void k_lineedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KLineEdit*
QSizePolicy* k_lineedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KLineEdit*
/// @param sizePolicy QSizePolicy*
void k_lineedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KLineEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_lineedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KLineEdit*
QRegion* k_lineedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KLineEdit*
/// @param margins QMargins*
void k_lineedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KLineEdit*
QMargins* k_lineedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KLineEdit*
QRect* k_lineedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KLineEdit*
QLayout* k_lineedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KLineEdit*
/// @param layout QLayout*
void k_lineedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KLineEdit*
void k_lineedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KLineEdit*
/// @param parent QWidget*
void k_lineedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KLineEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_lineedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KLineEdit*
/// @param dx int
/// @param dy int
void k_lineedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KLineEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_lineedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KLineEdit*
QWidget* k_lineedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KLineEdit*
QWidget* k_lineedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KLineEdit*
QWidget* k_lineedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KLineEdit*
bool k_lineedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KLineEdit*
/// @param on bool
void k_lineedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KLineEdit*
/// @param actions libqt_list /* of QAction* */
void k_lineedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KLineEdit*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_lineedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KLineEdit*
/// @param before QAction*
/// @param action QAction*
void k_lineedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KLineEdit*
/// @param action QAction*
void k_lineedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KLineEdit*
libqt_list /* of QAction* */ k_lineedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KLineEdit*
/// @param icon QIcon*
/// @param text const char*
QAction* k_lineedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KLineEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_lineedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KLineEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_lineedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KLineEdit*
QWidget* k_lineedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KLineEdit*
/// @param typeVal flag of enum Qt__WindowType
void k_lineedit_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KLineEdit*
///
/// @return flag of enum Qt__WindowType
int64_t k_lineedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KLineEdit*
/// @param param1 enum Qt__WindowType
void k_lineedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KLineEdit*
/// @param typeVal flag of enum Qt__WindowType
void k_lineedit_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KLineEdit*
///
/// @return enum Qt__WindowType
int64_t k_lineedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_lineedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KLineEdit*
/// @param x int
/// @param y int
QWidget* k_lineedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KLineEdit*
/// @param p QPoint*
QWidget* k_lineedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KLineEdit*
/// @param p QPointF*
QWidget* k_lineedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KLineEdit*
/// @param param1 enum Qt__WidgetAttribute
void k_lineedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KLineEdit*
/// @param param1 enum Qt__WidgetAttribute
bool k_lineedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KLineEdit*
void k_lineedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KLineEdit*
/// @param child QWidget*
bool k_lineedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KLineEdit*
bool k_lineedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KLineEdit*
/// @param enabled bool
void k_lineedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KLineEdit*
QBackingStore* k_lineedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KLineEdit*
QWindow* k_lineedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KLineEdit*
QScreen* k_lineedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KLineEdit*
/// @param screen QScreen*
void k_lineedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_lineedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KLineEdit*
/// @param title const char*
void k_lineedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* title)
void k_lineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KLineEdit*
/// @param icon QIcon*
void k_lineedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QIcon* icon)
void k_lineedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KLineEdit*
/// @param iconText const char*
void k_lineedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* iconText)
void k_lineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KLineEdit*
/// @param pos QPoint*
void k_lineedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QPoint* pos)
void k_lineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KLineEdit*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_lineedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KLineEdit*
/// @param hints flag of enum Qt__InputMethodHint
void k_lineedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_lineedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_lineedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KLineEdit*
/// @param rectangle QRect*
QPixmap* k_lineedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KLineEdit*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_lineedit_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KLineEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_lineedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KLineEdit*
/// @param id int
/// @param enable bool
void k_lineedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KLineEdit*
/// @param id int
/// @param enable bool
void k_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KLineEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_lineedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KLineEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_lineedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_lineedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_lineedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char* k_lineedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KLineEdit*
/// @param name char*
void k_lineedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KLineEdit*
bool k_lineedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KLineEdit*
bool k_lineedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KLineEdit*
bool k_lineedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KLineEdit*
bool k_lineedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KLineEdit*
/// @param b bool
bool k_lineedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KLineEdit*
QThread* k_lineedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLineEdit*
/// @param thread QThread*
bool k_lineedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLineEdit*
/// @param interval int
int32_t k_lineedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLineEdit*
/// @param id int
void k_lineedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLineEdit*
/// @param id enum Qt__TimerId
void k_lineedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KLineEdit*
libqt_list /* of QObject* */ k_lineedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KLineEdit*
/// @param filterObj QObject*
void k_lineedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KLineEdit*
/// @param obj QObject*
void k_lineedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_lineedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_lineedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_lineedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_lineedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KLineEdit*
void k_lineedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KLineEdit*
void k_lineedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KLineEdit*
/// @param name const char*
/// @param value QVariant*
bool k_lineedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KLineEdit*
/// @param name const char*
QVariant* k_lineedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLineEdit*
const char** k_lineedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLineEdit*
QBindingStorage* k_lineedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLineEdit*
const QBindingStorage* k_lineedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLineEdit*
void k_lineedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self)
void k_lineedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KLineEdit*
QObject* k_lineedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KLineEdit*
/// @param classname const char*
bool k_lineedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KLineEdit*
void k_lineedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLineEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_lineedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLineEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_lineedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_lineedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLineEdit*
/// @param param1 QObject*
void k_lineedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QObject* param1)
void k_lineedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KLineEdit*
bool k_lineedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KLineEdit*
int32_t k_lineedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KLineEdit*
int32_t k_lineedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KLineEdit*
int32_t k_lineedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KLineEdit*
int32_t k_lineedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KLineEdit*
int32_t k_lineedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KLineEdit*
int32_t k_lineedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KLineEdit*
double k_lineedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KLineEdit*
double k_lineedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KLineEdit*
int32_t k_lineedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KLineEdit*
int32_t k_lineedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_lineedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_lineedit_encode_metric_f(int32_t metric, double value);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KLineEdit*
KCompletion* k_lineedit_completion_object(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
///
/// @param self KLineEdit*
bool k_lineedit_is_completion_object_auto_deleted(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
///
/// @param self KLineEdit*
/// @param autoDelete bool
void k_lineedit_set_auto_delete_completion_object(void* self, bool autoDelete);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEnableSignals)
///
/// @param self KLineEdit*
/// @param enable bool
void k_lineedit_set_enable_signals(void* self, bool enable);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#handleSignals)
///
/// @param self KLineEdit*
bool k_lineedit_handle_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#emitSignals)
///
/// @param self KLineEdit*
bool k_lineedit_emit_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEmitSignals)
///
/// @param self KLineEdit*
/// @param emitRotationSignals bool
void k_lineedit_set_emit_signals(void* self, bool emitRotationSignals);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionMode)
///
/// @param self KLineEdit*
///
/// @return enum KCompletion__CompletionMode
int32_t k_lineedit_completion_mode(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBinding)
///
/// @param self KLineEdit*
/// @param item enum KCompletionBase__KeyBindingType
/// @param key libqt_list /* of QKeySequence* */
bool k_lineedit_set_key_binding(void* self, int32_t item, libqt_list key);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBinding)
///
/// @param self KLineEdit*
/// @param item enum KCompletionBase__KeyBindingType
libqt_list /* of QKeySequence* */ k_lineedit_key_binding(void* self, int32_t item);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
///
/// @param self KLineEdit*
void k_lineedit_use_global_key_bindings(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#compObj)
///
/// @param self KLineEdit*
KCompletion* k_lineedit_comp_obj(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KLineEdit*
/// @param handleSignals bool
KCompletion* k_lineedit_completion_object1(void* self, bool handleSignals);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QSize* k_lineedit_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QSize* k_lineedit_qbase_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QSize* func()
void k_lineedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QSize* k_lineedit_minimum_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QSize* k_lineedit_qbase_minimum_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QSize* func()
void k_lineedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_mouse_move_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QMouseEvent*
void k_lineedit_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMouseEvent* param1)
void k_lineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QKeyEvent*
void k_lineedit_key_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QKeyEvent*
void k_lineedit_qbase_key_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QKeyEvent* param1)
void k_lineedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QFocusEvent*
void k_lineedit_focus_in_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QFocusEvent*
void k_lineedit_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QFocusEvent* param1)
void k_lineedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QFocusEvent*
void k_lineedit_focus_out_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QFocusEvent*
void k_lineedit_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QFocusEvent* param1)
void k_lineedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QDragEnterEvent*
void k_lineedit_drag_enter_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QDragEnterEvent*
void k_lineedit_qbase_drag_enter_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QDragEnterEvent* param1)
void k_lineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param e QDragMoveEvent*
void k_lineedit_drag_move_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param e QDragMoveEvent*
void k_lineedit_qbase_drag_move_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QDragMoveEvent* e)
void k_lineedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param e QDragLeaveEvent*
void k_lineedit_drag_leave_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param e QDragLeaveEvent*
void k_lineedit_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QDragLeaveEvent* e)
void k_lineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QDropEvent*
void k_lineedit_drop_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QDropEvent*
void k_lineedit_qbase_drop_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QDropEvent* param1)
void k_lineedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QEvent*
void k_lineedit_change_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QEvent*
void k_lineedit_qbase_change_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QEvent* param1)
void k_lineedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QInputMethodEvent*
void k_lineedit_input_method_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QInputMethodEvent*
void k_lineedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QInputMethodEvent* param1)
void k_lineedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param option QStyleOptionFrame*
void k_lineedit_init_style_option(void* self, void* option);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param option QStyleOptionFrame*
void k_lineedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QStyleOptionFrame* option)
void k_lineedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_lineedit_input_method_query(void* self, int64_t param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_lineedit_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QVariant* func(KLineEdit* self, enum Qt__InputMethodQuery param1)
void k_lineedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QTimerEvent*
void k_lineedit_timer_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 QTimerEvent*
void k_lineedit_qbase_timer_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QTimerEvent* param1)
void k_lineedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
int32_t k_lineedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
int32_t k_lineedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback int32_t func()
void k_lineedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param visible bool
void k_lineedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param visible bool
void k_lineedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, bool visible)
void k_lineedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 int
int32_t k_lineedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 int
int32_t k_lineedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback int32_t func(KLineEdit* self, int param1)
void k_lineedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func()
void k_lineedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QPaintEngine* k_lineedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QPaintEngine* k_lineedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QPaintEngine* func()
void k_lineedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QWheelEvent*
void k_lineedit_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QWheelEvent*
void k_lineedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QWheelEvent* event)
void k_lineedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEnterEvent*
void k_lineedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEnterEvent*
void k_lineedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QEnterEvent* event)
void k_lineedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEvent*
void k_lineedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEvent*
void k_lineedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QEvent* event)
void k_lineedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QMoveEvent*
void k_lineedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QMoveEvent*
void k_lineedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMoveEvent* event)
void k_lineedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QCloseEvent*
void k_lineedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QCloseEvent*
void k_lineedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QCloseEvent* event)
void k_lineedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QTabletEvent*
void k_lineedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QTabletEvent*
void k_lineedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QTabletEvent* event)
void k_lineedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QActionEvent*
void k_lineedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QActionEvent*
void k_lineedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QActionEvent* event)
void k_lineedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QShowEvent*
void k_lineedit_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QShowEvent*
void k_lineedit_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QShowEvent* event)
void k_lineedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QHideEvent*
void k_lineedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QHideEvent*
void k_lineedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QHideEvent* event)
void k_lineedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_lineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_lineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func(KLineEdit* self, const char* eventType, void* message, intptr_t* result)
void k_lineedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_lineedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_lineedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback int32_t func(KLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_lineedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param painter QPainter*
void k_lineedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param painter QPainter*
void k_lineedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QPainter* painter)
void k_lineedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param offset QPoint*
QPaintDevice* k_lineedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param offset QPoint*
QPaintDevice* k_lineedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QPaintDevice* func(KLineEdit* self, QPoint* offset)
void k_lineedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QPainter* k_lineedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QPainter* k_lineedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QPainter* func()
void k_lineedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param next bool
bool k_lineedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param next bool
bool k_lineedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func(KLineEdit* self, bool next)
void k_lineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param watched QObject*
/// @param event QEvent*
bool k_lineedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param watched QObject*
/// @param event QEvent*
bool k_lineedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func(KLineEdit* self, QObject* watched, QEvent* event)
void k_lineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QChildEvent*
void k_lineedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QChildEvent*
void k_lineedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QChildEvent* event)
void k_lineedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEvent*
void k_lineedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param event QEvent*
void k_lineedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QEvent* event)
void k_lineedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
void k_lineedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
void k_lineedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMetaMethod* signal)
void k_lineedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
void k_lineedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
void k_lineedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, QMetaMethod* signal)
void k_lineedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param handle bool
void k_lineedit_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param handle bool
void k_lineedit_qbase_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, bool handle)
void k_lineedit_on_set_handle_signals(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param id int
/// @param data void*
void k_lineedit_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param id int
/// @param data void*
void k_lineedit_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, int id, void* data)
void k_lineedit_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QRect* k_lineedit_cursor_rect(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QRect* k_lineedit_qbase_cursor_rect(void* self);

/// Inherited from QLineEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QRect* func()
void k_lineedit_on_cursor_rect(void* self, QRect* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func()
void k_lineedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func()
void k_lineedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
void k_lineedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func()
void k_lineedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func()
void k_lineedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
bool k_lineedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func()
void k_lineedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
QObject* k_lineedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
QObject* k_lineedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback QObject* func()
void k_lineedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
int32_t k_lineedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
int32_t k_lineedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback int32_t func()
void k_lineedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param signal const char*
int32_t k_lineedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param signal const char*
int32_t k_lineedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback int32_t func(KLineEdit* self, const char* signal)
void k_lineedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
bool k_lineedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param signal QMetaMethod*
bool k_lineedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback bool func(KLineEdit* self, QMetaMethod* signal)
void k_lineedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_lineedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_lineedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback double func(KLineEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_lineedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_lineedit_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_lineedit_qbase_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ func()
void k_lineedit_on_key_binding_map(void* self, libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ (*callback)());

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
void k_lineedit_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
void k_lineedit_qbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */ /* of enum KCompletionBase__KeyBindingType to QKeySequence* */)
void k_lineedit_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of int32_t to QKeySequence* */));

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
/// @param delegate KCompletionBase*
void k_lineedit_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
/// @param delegate KCompletionBase*
void k_lineedit_qbase_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, KCompletionBase* delegate)
void k_lineedit_on_set_delegate(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLineEdit*
KCompletionBase* k_lineedit_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLineEdit*
KCompletionBase* k_lineedit_qbase_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLineEdit*
/// @param callback KCompletionBase* func()
void k_lineedit_on_delegate(void* self, KCompletionBase* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KLineEdit*
/// @param callback void func(KLineEdit* self, const char* objectName)
void k_lineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/klineedit.html#dtor.KLineEdit)
///
/// Delete this object from C++ memory.
///
/// @param self KLineEdit*
void k_lineedit_delete(void* self);

#endif
