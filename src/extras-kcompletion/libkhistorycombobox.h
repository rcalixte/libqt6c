#pragma once
#ifndef SRC_EXTRAS_KCOMPLETION_QT6C_LIBKHISTORYCOMBOBOX_H
#define SRC_EXTRAS_KCOMPLETION_QT6C_LIBKHISTORYCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/khistorycombobox.html)

/// k_historycombobox_new constructs a new KHistoryComboBox object.
///
/// @param parent QWidget*
///
KHistoryComboBox* k_historycombobox_new(void* parent);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html)

/// k_historycombobox_new2 constructs a new KHistoryComboBox object.
///
KHistoryComboBox* k_historycombobox_new2();

/// [Upstream resources](https://api.kde.org/khistorycombobox.html)

/// k_historycombobox_new3 constructs a new KHistoryComboBox object.
///
/// @param useCompletion bool
///
KHistoryComboBox* k_historycombobox_new3(bool useCompletion);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html)

/// k_historycombobox_new4 constructs a new KHistoryComboBox object.
///
/// @param useCompletion bool
/// @param parent QWidget*
///
KHistoryComboBox* k_historycombobox_new4(bool useCompletion, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KHistoryComboBox*
///
const QMetaObject* k_historycombobox_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback const QMetaObject* func()
///
void k_historycombobox_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KHistoryComboBox*
///
const QMetaObject* k_historycombobox_qbase_meta_object(void* self);

/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void* k_historycombobox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback void* func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void* k_historycombobox_qbase_metacast(void* self, const char* param1);

/// @param self KHistoryComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_historycombobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func(KHistoryComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_historycombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KHistoryComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_historycombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_historycombobox_tr(const char* s);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#setHistoryItems)
///
/// @param self KHistoryComboBox*
/// @param items const char**
///
void k_historycombobox_set_history_items(void* self, const char* items[static 1]);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#setHistoryItems)
///
/// @param self KHistoryComboBox*
/// @param items const char**
/// @param setCompletionList bool
///
void k_historycombobox_set_history_items2(void* self, const char* items[static 1], bool setCompletionList);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#historyItems)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KHistoryComboBox*
///
const char** k_historycombobox_history_items(void* self);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#removeFromHistory)
///
/// @param self KHistoryComboBox*
/// @param item const char*
///
bool k_historycombobox_remove_from_history(void* self, const char* item);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#addToHistory)
///
/// @param self KHistoryComboBox*
/// @param item const char*
///
void k_historycombobox_add_to_history(void* self, const char* item);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#clearHistory)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_clear_history(void* self);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#reset)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_reset(void* self);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#cleared)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_cleared(void* self);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#cleared)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self)
///
void k_historycombobox_on_cleared(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#keyPressEvent)
///
/// @param self KHistoryComboBox*
/// @param param1 QKeyEvent*
///
void k_historycombobox_key_press_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QKeyEvent* param1)
///
void k_historycombobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KHistoryComboBox*
/// @param param1 QKeyEvent*
///
void k_historycombobox_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#wheelEvent)
///
/// @param self KHistoryComboBox*
/// @param ev QWheelEvent*
///
void k_historycombobox_wheel_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QWheelEvent* ev)
///
void k_historycombobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self KHistoryComboBox*
/// @param ev QWheelEvent*
///
void k_historycombobox_qbase_wheel_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#insertItems)
///
/// @param self KHistoryComboBox*
/// @param items const char**
///
void k_historycombobox_insert_items(void* self, const char* items[static 1]);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#insertItems)
///
/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char** items)
///
void k_historycombobox_on_insert_items(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#insertItems)
///
/// Base class method implementation
///
/// @param self KHistoryComboBox*
/// @param items const char**
///
void k_historycombobox_qbase_insert_items(void* self, const char* items[static 1]);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#useCompletion)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_use_completion(void* self);

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#useCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KHistoryComboBox*
/// @param callback bool func()
///
void k_historycombobox_on_use_completion(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#useCompletion)
///
/// Base class method implementation
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_qbase_use_completion(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_historycombobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_historycombobox_tr3(const char* s, const char* c, int n);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditUrl)
///
/// @param self KHistoryComboBox*
/// @param url QUrl*
///
void k_historycombobox_set_edit_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KHistoryComboBox*
/// @param url QUrl*
///
void k_historycombobox_add_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
/// @param url QUrl*
///
void k_historycombobox_add_url2(void* self, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param url QUrl*
///
void k_historycombobox_insert_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_historycombobox_insert_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param url QUrl*
///
void k_historycombobox_change_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_historycombobox_change_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#cursorPosition)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_cursor_position(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#autoCompletion)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_auto_completion(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#urlDropsEnabled)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_url_drops_enabled(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contains)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
bool k_historycombobox_contains(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setTrapReturnKey)
///
/// @param self KHistoryComboBox*
/// @param trap bool
///
void k_historycombobox_set_trap_return_key(void* self, bool trap);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#trapReturnKey)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_trap_return_key(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KHistoryComboBox*
///
KCompletionBox* k_historycombobox_completion_box(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditable)
///
/// @param self KHistoryComboBox*
/// @param editable bool
///
void k_historycombobox_set_editable(void* self, bool editable);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contextMenu)
///
/// @param self KHistoryComboBox*
///
QMenu* k_historycombobox_context_menu(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
void k_historycombobox_return_pressed(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* text)
///
void k_historycombobox_on_return_pressed(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_substring_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_substring_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KHistoryComboBox*
/// @param param1 enum KCompletionBase__KeyBindingType
///
void k_historycombobox_text_rotation(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, enum KCompletionBase__KeyBindingType param1)
///
void k_historycombobox_on_text_rotation(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KHistoryComboBox*
/// @param param1 enum KCompletion__CompletionMode
///
void k_historycombobox_completion_mode_changed(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, enum KCompletion__CompletionMode param1)
///
void k_historycombobox_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KHistoryComboBox*
/// @param contextMenu QMenu*
///
void k_historycombobox_about_to_show_context_menu(void* self, void* contextMenu);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMenu* contextMenu)
///
void k_historycombobox_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#rotateText)
///
/// @param self KHistoryComboBox*
/// @param type enum KCompletionBase__KeyBindingType
///
void k_historycombobox_rotate_text(void* self, int32_t type);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KHistoryComboBox*
/// @param item const char*
///
void k_historycombobox_set_current_item(void* self, const char* item);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KHistoryComboBox*
/// @param create bool
///
KCompletionBox* k_historycombobox_completion_box1(void* self, bool create);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KHistoryComboBox*
/// @param item const char*
/// @param insert bool
///
void k_historycombobox_set_current_item2(void* self, const char* item, bool insert);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KHistoryComboBox*
/// @param item const char*
/// @param insert bool
/// @param index int
///
void k_historycombobox_set_current_item3(void* self, const char* item, bool insert, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self KHistoryComboBox*
/// @param maxItems int
///
void k_historycombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self KHistoryComboBox*
/// @param max int
///
void k_historycombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self KHistoryComboBox*
/// @param enable bool
///
void k_historycombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self KHistoryComboBox*
/// @param frame bool
///
void k_historycombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
int32_t k_historycombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KHistoryComboBox*
/// @param data QVariant*
///
int32_t k_historycombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self KHistoryComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t k_historycombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self KHistoryComboBox*
/// @param policy enum QComboBox__InsertPolicy
///
void k_historycombobox_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self KHistoryComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t k_historycombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self KHistoryComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void k_historycombobox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self KHistoryComboBox*
/// @param characters int
///
void k_historycombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self KHistoryComboBox*
/// @param size QSize*
///
void k_historycombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self KHistoryComboBox*
/// @param placeholderText const char*
///
void k_historycombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self KHistoryComboBox*
///
QLineEdit* k_historycombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self KHistoryComboBox*
/// @param v QValidator*
///
void k_historycombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self KHistoryComboBox*
///
const QValidator* k_historycombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self KHistoryComboBox*
/// @param c QCompleter*
///
void k_historycombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self KHistoryComboBox*
///
QCompleter* k_historycombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self KHistoryComboBox*
///
QAbstractItemDelegate* k_historycombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self KHistoryComboBox*
/// @param delegate QAbstractItemDelegate*
///
void k_historycombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self KHistoryComboBox*
///
QAbstractItemModel* k_historycombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self KHistoryComboBox*
///
QModelIndex* k_historycombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self KHistoryComboBox*
/// @param index QModelIndex*
///
void k_historycombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self KHistoryComboBox*
/// @param visibleColumn int
///
void k_historycombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KHistoryComboBox*
///
QVariant* k_historycombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
/// @param index int
///
const char* k_historycombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self KHistoryComboBox*
/// @param index int
///
QIcon* k_historycombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KHistoryComboBox*
/// @param index int
///
QVariant* k_historycombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
void k_historycombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
/// @param text const char*
///
void k_historycombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self KHistoryComboBox*
/// @param texts const char**
///
void k_historycombobox_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param text const char*
///
void k_historycombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void k_historycombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param text const char*
///
void k_historycombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param icon QIcon*
///
void k_historycombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param value QVariant*
///
void k_historycombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self KHistoryComboBox*
///
QAbstractItemView* k_historycombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self KHistoryComboBox*
/// @param itemView QAbstractItemView*
///
void k_historycombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self KHistoryComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_historycombobox_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
void k_historycombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
void k_historycombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, int index)
///
void k_historycombobox_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, int index)
///
void k_historycombobox_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KHistoryComboBox*
/// @param index int
///
void k_historycombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, int index)
///
void k_historycombobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KHistoryComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_historycombobox_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KHistoryComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t k_historycombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KHistoryComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_historycombobox_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KHistoryComboBox*
/// @param role int
///
QVariant* k_historycombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param role int
///
QVariant* k_historycombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KHistoryComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void k_historycombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_historycombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void k_historycombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_historycombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KHistoryComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void k_historycombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KHistoryComboBox*
///
uintptr_t k_historycombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KHistoryComboBox*
///
uintptr_t k_historycombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KHistoryComboBox*
///
uintptr_t k_historycombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KHistoryComboBox*
///
QStyle* k_historycombobox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KHistoryComboBox*
/// @param style QStyle*
///
void k_historycombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KHistoryComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t k_historycombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KHistoryComboBox*
/// @param windowModality enum Qt__WindowModality
///
void k_historycombobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
///
bool k_historycombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KHistoryComboBox*
/// @param enabled bool
///
void k_historycombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KHistoryComboBox*
/// @param disabled bool
///
void k_historycombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KHistoryComboBox*
/// @param windowModified bool
///
void k_historycombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KHistoryComboBox*
///
QRect* k_historycombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KHistoryComboBox*
///
const QRect* k_historycombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KHistoryComboBox*
///
QRect* k_historycombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KHistoryComboBox*
///
QPoint* k_historycombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KHistoryComboBox*
///
QRect* k_historycombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KHistoryComboBox*
///
QRect* k_historycombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KHistoryComboBox*
///
QRegion* k_historycombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KHistoryComboBox*
/// @param minimumSize QSize*
///
void k_historycombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KHistoryComboBox*
/// @param minw int
/// @param minh int
///
void k_historycombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KHistoryComboBox*
/// @param maximumSize QSize*
///
void k_historycombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KHistoryComboBox*
/// @param maxw int
/// @param maxh int
///
void k_historycombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KHistoryComboBox*
/// @param minw int
///
void k_historycombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KHistoryComboBox*
/// @param minh int
///
void k_historycombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KHistoryComboBox*
/// @param maxw int
///
void k_historycombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KHistoryComboBox*
/// @param maxh int
///
void k_historycombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KHistoryComboBox*
/// @param sizeIncrement QSize*
///
void k_historycombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KHistoryComboBox*
/// @param w int
/// @param h int
///
void k_historycombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KHistoryComboBox*
/// @param baseSize QSize*
///
void k_historycombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KHistoryComboBox*
/// @param basew int
/// @param baseh int
///
void k_historycombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KHistoryComboBox*
/// @param fixedSize QSize*
///
void k_historycombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KHistoryComboBox*
/// @param w int
/// @param h int
///
void k_historycombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KHistoryComboBox*
/// @param w int
///
void k_historycombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KHistoryComboBox*
/// @param h int
///
void k_historycombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KHistoryComboBox*
/// @param param1 QPointF*
///
QPointF* k_historycombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KHistoryComboBox*
/// @param param1 QPoint*
///
QPoint* k_historycombobox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KHistoryComboBox*
/// @param param1 QPointF*
///
QPointF* k_historycombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KHistoryComboBox*
/// @param param1 QPoint*
///
QPoint* k_historycombobox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KHistoryComboBox*
/// @param param1 QPointF*
///
QPointF* k_historycombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KHistoryComboBox*
/// @param param1 QPoint*
///
QPoint* k_historycombobox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KHistoryComboBox*
/// @param param1 QPointF*
///
QPointF* k_historycombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KHistoryComboBox*
/// @param param1 QPoint*
///
QPoint* k_historycombobox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_historycombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_historycombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_historycombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_historycombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KHistoryComboBox*
///
const QPalette* k_historycombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KHistoryComboBox*
/// @param palette QPalette*
///
void k_historycombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KHistoryComboBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_historycombobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KHistoryComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_historycombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KHistoryComboBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_historycombobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KHistoryComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_historycombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KHistoryComboBox*
///
const QFont* k_historycombobox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KHistoryComboBox*
/// @param font QFont*
///
void k_historycombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KHistoryComboBox*
///
QFontMetrics* k_historycombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KHistoryComboBox*
///
QFontInfo* k_historycombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KHistoryComboBox*
///
QCursor* k_historycombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KHistoryComboBox*
/// @param cursor QCursor*
///
void k_historycombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KHistoryComboBox*
/// @param enable bool
///
void k_historycombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KHistoryComboBox*
/// @param enable bool
///
void k_historycombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KHistoryComboBox*
/// @param mask QBitmap*
///
void k_historycombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KHistoryComboBox*
/// @param mask QRegion*
///
void k_historycombobox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KHistoryComboBox*
///
QRegion* k_historycombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param target QPaintDevice*
///
void k_historycombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
///
void k_historycombobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KHistoryComboBox*
///
QPixmap* k_historycombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KHistoryComboBox*
///
QGraphicsEffect* k_historycombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KHistoryComboBox*
/// @param effect QGraphicsEffect*
///
void k_historycombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KHistoryComboBox*
/// @param type enum Qt__GestureType
///
void k_historycombobox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KHistoryComboBox*
/// @param type enum Qt__GestureType
///
void k_historycombobox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KHistoryComboBox*
/// @param windowTitle const char*
///
void k_historycombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KHistoryComboBox*
/// @param styleSheet const char*
///
void k_historycombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
///
void k_historycombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KHistoryComboBox*
///
QIcon* k_historycombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KHistoryComboBox*
/// @param windowIconText const char*
///
void k_historycombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KHistoryComboBox*
/// @param windowRole const char*
///
void k_historycombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KHistoryComboBox*
/// @param filePath const char*
///
void k_historycombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KHistoryComboBox*
/// @param level double
///
void k_historycombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KHistoryComboBox*
///
double k_historycombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KHistoryComboBox*
/// @param toolTip const char*
///
void k_historycombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KHistoryComboBox*
/// @param msec int
///
void k_historycombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KHistoryComboBox*
/// @param statusTip const char*
///
void k_historycombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KHistoryComboBox*
/// @param whatsThis const char*
///
void k_historycombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KHistoryComboBox*
/// @param name const char*
///
void k_historycombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KHistoryComboBox*
/// @param description const char*
///
void k_historycombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KHistoryComboBox*
/// @param direction enum Qt__LayoutDirection
///
void k_historycombobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KHistoryComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_historycombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KHistoryComboBox*
/// @param locale QLocale*
///
void k_historycombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KHistoryComboBox*
///
QLocale* k_historycombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KHistoryComboBox*
/// @param reason enum Qt__FocusReason
///
void k_historycombobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KHistoryComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_historycombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KHistoryComboBox*
/// @param policy enum Qt__FocusPolicy
///
void k_historycombobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_historycombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KHistoryComboBox*
/// @param focusProxy QWidget*
///
void k_historycombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KHistoryComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_historycombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KHistoryComboBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_historycombobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KHistoryComboBox*
/// @param param1 QCursor*
///
void k_historycombobox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KHistoryComboBox*
/// @param key QKeySequence*
///
int32_t k_historycombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KHistoryComboBox*
/// @param id int
///
void k_historycombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KHistoryComboBox*
/// @param id int
///
void k_historycombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KHistoryComboBox*
/// @param id int
///
void k_historycombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_historycombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_historycombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KHistoryComboBox*
/// @param enable bool
///
void k_historycombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KHistoryComboBox*
///
QGraphicsProxyWidget* k_historycombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KHistoryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_historycombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KHistoryComboBox*
/// @param param1 QRect*
///
void k_historycombobox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KHistoryComboBox*
/// @param param1 QRegion*
///
void k_historycombobox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KHistoryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_historycombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KHistoryComboBox*
/// @param param1 QRect*
///
void k_historycombobox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KHistoryComboBox*
/// @param param1 QRegion*
///
void k_historycombobox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KHistoryComboBox*
/// @param hidden bool
///
void k_historycombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
///
void k_historycombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KHistoryComboBox*
/// @param x int
/// @param y int
///
void k_historycombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KHistoryComboBox*
/// @param param1 QPoint*
///
void k_historycombobox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KHistoryComboBox*
/// @param w int
/// @param h int
///
void k_historycombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KHistoryComboBox*
/// @param param1 QSize*
///
void k_historycombobox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KHistoryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_historycombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KHistoryComboBox*
/// @param geometry QRect*
///
void k_historycombobox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KHistoryComboBox*
///
char* k_historycombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KHistoryComboBox*
/// @param geometry char*
///
bool k_historycombobox_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KHistoryComboBox*
/// @param param1 QWidget*
///
bool k_historycombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KHistoryComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_historycombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KHistoryComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_historycombobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KHistoryComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_historycombobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KHistoryComboBox*
///
QSizePolicy* k_historycombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KHistoryComboBox*
/// @param sizePolicy QSizePolicy*
///
void k_historycombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KHistoryComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_historycombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KHistoryComboBox*
///
QRegion* k_historycombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KHistoryComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_historycombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KHistoryComboBox*
/// @param margins QMargins*
///
void k_historycombobox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KHistoryComboBox*
///
QMargins* k_historycombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KHistoryComboBox*
///
QRect* k_historycombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KHistoryComboBox*
///
QLayout* k_historycombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KHistoryComboBox*
/// @param layout QLayout*
///
void k_historycombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KHistoryComboBox*
/// @param parent QWidget*
///
void k_historycombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KHistoryComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_historycombobox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KHistoryComboBox*
/// @param dx int
/// @param dy int
///
void k_historycombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KHistoryComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_historycombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KHistoryComboBox*
/// @param on bool
///
void k_historycombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KHistoryComboBox*
/// @param action QAction*
///
void k_historycombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KHistoryComboBox*
/// @param actions libqt_list of QAction*
///
void k_historycombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KHistoryComboBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_historycombobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KHistoryComboBox*
/// @param before QAction*
/// @param action QAction*
///
void k_historycombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KHistoryComboBox*
/// @param action QAction*
///
void k_historycombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KHistoryComboBox*
///
/// @return libqt_list of QAction*
///
libqt_list k_historycombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KHistoryComboBox*
/// @param text const char*
///
QAction* k_historycombobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_historycombobox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KHistoryComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_historycombobox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_historycombobox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KHistoryComboBox*
///
QWidget* k_historycombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KHistoryComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_historycombobox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KHistoryComboBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_historycombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__WindowType
///
void k_historycombobox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KHistoryComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_historycombobox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KHistoryComboBox*
///
/// @return enum Qt__WindowType
///
int32_t k_historycombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_historycombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KHistoryComboBox*
/// @param x int
/// @param y int
///
QWidget* k_historycombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KHistoryComboBox*
/// @param p QPoint*
///
QWidget* k_historycombobox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KHistoryComboBox*
/// @param p QPointF*
///
QWidget* k_historycombobox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
void k_historycombobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_historycombobox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KHistoryComboBox*
/// @param child QWidget*
///
bool k_historycombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KHistoryComboBox*
/// @param enabled bool
///
void k_historycombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KHistoryComboBox*
///
QBackingStore* k_historycombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KHistoryComboBox*
///
QWindow* k_historycombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KHistoryComboBox*
///
QScreen* k_historycombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KHistoryComboBox*
/// @param screen QScreen*
///
void k_historycombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_historycombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KHistoryComboBox*
/// @param title const char*
///
void k_historycombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* title)
///
void k_historycombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KHistoryComboBox*
/// @param icon QIcon*
///
void k_historycombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QIcon* icon)
///
void k_historycombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KHistoryComboBox*
/// @param iconText const char*
///
void k_historycombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* iconText)
///
void k_historycombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KHistoryComboBox*
/// @param pos QPoint*
///
void k_historycombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QPoint* pos)
///
void k_historycombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KHistoryComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_historycombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KHistoryComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_historycombobox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_historycombobox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_historycombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_historycombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_historycombobox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_historycombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_historycombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KHistoryComboBox*
/// @param rectangle QRect*
///
QPixmap* k_historycombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KHistoryComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_historycombobox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KHistoryComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_historycombobox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KHistoryComboBox*
/// @param id int
/// @param enable bool
///
void k_historycombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KHistoryComboBox*
/// @param id int
/// @param enable bool
///
void k_historycombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_historycombobox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_historycombobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_historycombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_historycombobox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KHistoryComboBox*
///
const char* k_historycombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KHistoryComboBox*
/// @param name const char*
///
void k_historycombobox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KHistoryComboBox*
/// @param b bool
///
bool k_historycombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KHistoryComboBox*
///
QThread* k_historycombobox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KHistoryComboBox*
/// @param thread QThread*
///
bool k_historycombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHistoryComboBox*
/// @param interval int
///
int32_t k_historycombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHistoryComboBox*
/// @param time int64_t of nanoseconds
///
int32_t k_historycombobox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHistoryComboBox*
/// @param id int
///
void k_historycombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHistoryComboBox*
/// @param id enum Qt__TimerId
///
void k_historycombobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KHistoryComboBox*
///
/// @return libqt_list of QObject*
///
libqt_list k_historycombobox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KHistoryComboBox*
/// @param filterObj QObject*
///
void k_historycombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KHistoryComboBox*
/// @param obj QObject*
///
void k_historycombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_historycombobox_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_historycombobox_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KHistoryComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_historycombobox_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_historycombobox_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_historycombobox_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
/// @param receiver QObject*
///
bool k_historycombobox_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_historycombobox_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KHistoryComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool k_historycombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KHistoryComboBox*
/// @param name const char*
///
QVariant* k_historycombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KHistoryComboBox*
///
const char** k_historycombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KHistoryComboBox*
///
QBindingStorage* k_historycombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KHistoryComboBox*
///
const QBindingStorage* k_historycombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self)
///
void k_historycombobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KHistoryComboBox*
///
QObject* k_historycombobox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KHistoryComboBox*
/// @param classname const char*
///
bool k_historycombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHistoryComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_historycombobox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHistoryComboBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_historycombobox_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_historycombobox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_historycombobox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KHistoryComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_historycombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
/// @param signal const char*
///
bool k_historycombobox_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_historycombobox_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_historycombobox_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KHistoryComboBox*
/// @param receiver QObject*
/// @param member const char*
///
bool k_historycombobox_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHistoryComboBox*
/// @param param1 QObject*
///
void k_historycombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QObject* param1)
///
void k_historycombobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KHistoryComboBox*
///
double k_historycombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KHistoryComboBox*
///
double k_historycombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_historycombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_historycombobox_encode_metric_f(int32_t metric, double value);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KHistoryComboBox*
///
KCompletion* k_historycombobox_completion_object(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_is_completion_object_auto_deleted(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
///
/// @param self KHistoryComboBox*
/// @param autoDelete bool
///
void k_historycombobox_set_auto_delete_completion_object(void* self, bool autoDelete);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
///
/// @param self KHistoryComboBox*
/// @param enable bool
///
void k_historycombobox_set_enable_signals(void* self, bool enable);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_handle_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_emit_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
///
/// @param self KHistoryComboBox*
/// @param emitRotationSignals bool
///
void k_historycombobox_set_emit_signals(void* self, bool emitRotationSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
///
/// @param self KHistoryComboBox*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_historycombobox_completion_mode(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
///
/// @param self KHistoryComboBox*
/// @param item enum KCompletionBase__KeyBindingType
/// @param key libqt_list of QKeySequence*
///
bool k_historycombobox_set_key_binding(void* self, int32_t item, libqt_list key);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
///
/// @param self KHistoryComboBox*
/// @param item enum KCompletionBase__KeyBindingType
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_historycombobox_key_binding(void* self, int32_t item);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_use_global_key_bindings(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
///
/// @param self KHistoryComboBox*
///
KCompletion* k_historycombobox_comp_obj(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KHistoryComboBox*
/// @param handleSignals bool
///
KCompletion* k_historycombobox_completion_object1(void* self, bool handleSignals);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param autocomplete bool
///
void k_historycombobox_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param autocomplete bool
///
void k_historycombobox_qbase_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, bool autocomplete)
///
void k_historycombobox_on_set_auto_completion(void* self, void (*callback)(void*, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param lineEdit QLineEdit*
///
void k_historycombobox_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param lineEdit QLineEdit*
///
void k_historycombobox_qbase_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QLineEdit* lineEdit)
///
void k_historycombobox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_qbase_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QSize* func()
///
void k_historycombobox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param completedText const char*
///
void k_historycombobox_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param completedText const char*
///
void k_historycombobox_qbase_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* completedText)
///
void k_historycombobox_on_set_completed_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param items const char**
/// @param autoSuggest bool
///
void k_historycombobox_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param items const char**
/// @param autoSuggest bool
///
void k_historycombobox_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char** items, bool autoSuggest)
///
void k_historycombobox_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 const char*
///
void k_historycombobox_qbase_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* param1)
///
void k_historycombobox_on_make_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param model QAbstractItemModel*
///
void k_historycombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param model QAbstractItemModel*
///
void k_historycombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QAbstractItemModel* model)
///
void k_historycombobox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
QSize* k_historycombobox_qbase_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QSize* func()
///
void k_historycombobox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func()
///
void k_historycombobox_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func()
///
void k_historycombobox_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
bool k_historycombobox_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
bool k_historycombobox_qbase_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func(KHistoryComboBox* self, QEvent* event)
///
void k_historycombobox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_historycombobox_input_method_query(void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_historycombobox_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QVariant* func(KHistoryComboBox* self, enum Qt__InputMethodQuery param1)
///
void k_historycombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QFocusEvent*
///
void k_historycombobox_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QFocusEvent*
///
void k_historycombobox_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QFocusEvent* e)
///
void k_historycombobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QFocusEvent*
///
void k_historycombobox_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QFocusEvent*
///
void k_historycombobox_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QFocusEvent* e)
///
void k_historycombobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QEvent*
///
void k_historycombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QEvent*
///
void k_historycombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QEvent* e)
///
void k_historycombobox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QResizeEvent*
///
void k_historycombobox_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QResizeEvent*
///
void k_historycombobox_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QResizeEvent* e)
///
void k_historycombobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QPaintEvent*
///
void k_historycombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QPaintEvent*
///
void k_historycombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QPaintEvent* e)
///
void k_historycombobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QShowEvent*
///
void k_historycombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QShowEvent*
///
void k_historycombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QShowEvent* e)
///
void k_historycombobox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QHideEvent*
///
void k_historycombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QHideEvent*
///
void k_historycombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QHideEvent* e)
///
void k_historycombobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QMouseEvent*
///
void k_historycombobox_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QMouseEvent*
///
void k_historycombobox_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMouseEvent* e)
///
void k_historycombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QMouseEvent*
///
void k_historycombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QMouseEvent*
///
void k_historycombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMouseEvent* e)
///
void k_historycombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QKeyEvent*
///
void k_historycombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QKeyEvent*
///
void k_historycombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QKeyEvent* e)
///
void k_historycombobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QContextMenuEvent*
///
void k_historycombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param e QContextMenuEvent*
///
void k_historycombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QContextMenuEvent* e)
///
void k_historycombobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 QInputMethodEvent*
///
void k_historycombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 QInputMethodEvent*
///
void k_historycombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QInputMethodEvent* param1)
///
void k_historycombobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param option QStyleOptionComboBox*
///
void k_historycombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param option QStyleOptionComboBox*
///
void k_historycombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QStyleOptionComboBox* option)
///
void k_historycombobox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func()
///
void k_historycombobox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param visible bool
///
void k_historycombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param visible bool
///
void k_historycombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, bool visible)
///
void k_historycombobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 int
///
int32_t k_historycombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 int
///
int32_t k_historycombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func(KHistoryComboBox* self, int param1)
///
void k_historycombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func()
///
void k_historycombobox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
QPaintEngine* k_historycombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
QPaintEngine* k_historycombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QPaintEngine* func()
///
void k_historycombobox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMouseEvent*
///
void k_historycombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMouseEvent*
///
void k_historycombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMouseEvent* event)
///
void k_historycombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMouseEvent*
///
void k_historycombobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMouseEvent*
///
void k_historycombobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMouseEvent* event)
///
void k_historycombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEnterEvent*
///
void k_historycombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEnterEvent*
///
void k_historycombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QEnterEvent* event)
///
void k_historycombobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
void k_historycombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
void k_historycombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QEvent* event)
///
void k_historycombobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMoveEvent*
///
void k_historycombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QMoveEvent*
///
void k_historycombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMoveEvent* event)
///
void k_historycombobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QCloseEvent*
///
void k_historycombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QCloseEvent*
///
void k_historycombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QCloseEvent* event)
///
void k_historycombobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QTabletEvent*
///
void k_historycombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QTabletEvent*
///
void k_historycombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QTabletEvent* event)
///
void k_historycombobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QActionEvent*
///
void k_historycombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QActionEvent*
///
void k_historycombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QActionEvent* event)
///
void k_historycombobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragEnterEvent*
///
void k_historycombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragEnterEvent*
///
void k_historycombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QDragEnterEvent* event)
///
void k_historycombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragMoveEvent*
///
void k_historycombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragMoveEvent*
///
void k_historycombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QDragMoveEvent* event)
///
void k_historycombobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragLeaveEvent*
///
void k_historycombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDragLeaveEvent*
///
void k_historycombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QDragLeaveEvent* event)
///
void k_historycombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDropEvent*
///
void k_historycombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QDropEvent*
///
void k_historycombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QDropEvent* event)
///
void k_historycombobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_historycombobox_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_historycombobox_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func(KHistoryComboBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_historycombobox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_historycombobox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_historycombobox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func(KHistoryComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_historycombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
///
void k_historycombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param painter QPainter*
///
void k_historycombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QPainter* painter)
///
void k_historycombobox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_historycombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_historycombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QPaintDevice* func(KHistoryComboBox* self, QPoint* offset)
///
void k_historycombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
QPainter* k_historycombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
QPainter* k_historycombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QPainter* func()
///
void k_historycombobox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param next bool
///
bool k_historycombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param next bool
///
bool k_historycombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func(KHistoryComboBox* self, bool next)
///
void k_historycombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_historycombobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_historycombobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func(KHistoryComboBox* self, QObject* watched, QEvent* event)
///
void k_historycombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QTimerEvent*
///
void k_historycombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QTimerEvent*
///
void k_historycombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QTimerEvent* event)
///
void k_historycombobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QChildEvent*
///
void k_historycombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QChildEvent*
///
void k_historycombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QChildEvent* event)
///
void k_historycombobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
void k_historycombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param event QEvent*
///
void k_historycombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QEvent* event)
///
void k_historycombobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
void k_historycombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
void k_historycombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMetaMethod* signal)
///
void k_historycombobox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
void k_historycombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
void k_historycombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, QMetaMethod* signal)
///
void k_historycombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param completionObject KCompletion*
/// @param handleSignals bool
///
void k_historycombobox_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param completionObject KCompletion*
/// @param handleSignals bool
///
void k_historycombobox_qbase_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, KCompletion* completionObject, bool handleSignals)
///
void k_historycombobox_on_set_completion_object(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param handle bool
///
void k_historycombobox_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param handle bool
///
void k_historycombobox_qbase_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, bool handle)
///
void k_historycombobox_on_set_handle_signals(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param mode enum KCompletion__CompletionMode
///
void k_historycombobox_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param mode enum KCompletion__CompletionMode
///
void k_historycombobox_qbase_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, enum KCompletion__CompletionMode mode)
///
void k_historycombobox_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param id int
/// @param data void*
///
void k_historycombobox_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param id int
/// @param data void*
///
void k_historycombobox_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, int id, void* data)
///
void k_historycombobox_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func()
///
void k_historycombobox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func()
///
void k_historycombobox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func()
///
void k_historycombobox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func()
///
void k_historycombobox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
bool k_historycombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func()
///
void k_historycombobox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
QObject* k_historycombobox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
QObject* k_historycombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback QObject* func()
///
void k_historycombobox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
int32_t k_historycombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func()
///
void k_historycombobox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal const char*
///
int32_t k_historycombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal const char*
///
int32_t k_historycombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback int32_t func(KHistoryComboBox* self, const char* signal)
///
void k_historycombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
bool k_historycombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param signal QMetaMethod*
///
bool k_historycombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback bool func(KHistoryComboBox* self, QMetaMethod* signal)
///
void k_historycombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_historycombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_historycombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback double func(KHistoryComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_historycombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence*
/// for (size_t i = 0; i < map.len; ++i) {
///     for (size_t j = 0; ((QKeySequence**)map.values)[i][j] != NULL; j++) {
///         free(((QKeySequence**)map.values)[i][j]);
///     }
///     free(((QKeySequence*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
/// @return libqt_map of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence*
///
libqt_map k_historycombobox_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence*
/// for (size_t i = 0; i < map.len; ++i) {
///     for (size_t j = 0; ((QKeySequence**)map.values)[i][j] != NULL; j++) {
///         free(((QKeySequence**)map.values)[i][j]);
///     }
///     free(((QKeySequence*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
/// @return libqt_map of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence*
///
libqt_map k_historycombobox_qbase_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback libqt_map of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* func()
///
void k_historycombobox_on_key_binding_map(void* self, libqt_map (*callback)());

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param keyBindingMap libqt_map of enum KCompletionBase__KeyBindingType to QKeySequence**
///
void k_historycombobox_set_key_binding_map(void* self, libqt_map keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param keyBindingMap libqt_map of enum KCompletionBase__KeyBindingType to QKeySequence**
///
void k_historycombobox_qbase_set_key_binding_map(void* self, libqt_map keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, libqt_map of enum KCompletionBase__KeyBindingType to QKeySequence** keyBindingMap)
///
void k_historycombobox_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param delegate KCompletionBase*
///
void k_historycombobox_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param delegate KCompletionBase*
///
void k_historycombobox_qbase_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, KCompletionBase* delegate)
///
void k_historycombobox_on_set_delegate(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHistoryComboBox*
///
KCompletionBase* k_historycombobox_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHistoryComboBox*
///
KCompletionBase* k_historycombobox_qbase_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHistoryComboBox*
/// @param callback KCompletionBase* func()
///
void k_historycombobox_on_delegate(void* self, KCompletionBase* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KHistoryComboBox*
/// @param callback void func(KHistoryComboBox* self, const char* objectName)
///
void k_historycombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/khistorycombobox.html#dtor.KHistoryComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self KHistoryComboBox*
///
void k_historycombobox_delete(void* self);

#endif
