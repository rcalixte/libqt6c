#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEFILTERCOMBO_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEFILTERCOMBO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html)

/// k_filefiltercombo_new constructs a new KFileFilterCombo object.
///
/// @param parent QWidget*
///
KFileFilterCombo* k_filefiltercombo_new(void* parent);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html)

/// k_filefiltercombo_new2 constructs a new KFileFilterCombo object.
///
KFileFilterCombo* k_filefiltercombo_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFileFilterCombo*
///
const QMetaObject* k_filefiltercombo_meta_object(void* self);

/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void* k_filefiltercombo_metacast(void* self, const char* param1);

/// @param self KFileFilterCombo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filefiltercombo_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func(KFileFilterCombo* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_filefiltercombo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFileFilterCombo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filefiltercombo_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_filefiltercombo_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setFilters)
///
/// @param self KFileFilterCombo*
/// @param filters libqt_list /* of KFileFilter* */
///
void k_filefiltercombo_set_filters(void* self, libqt_list filters);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#currentFilter)
///
/// @param self KFileFilterCombo*
///
KFileFilter* k_filefiltercombo_current_filter(void* self);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filters)
///
/// @param self KFileFilterCombo*
///
libqt_list /* of KFileFilter* */ k_filefiltercombo_filters(void* self);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setDefaultFilter)
///
/// @param self KFileFilterCombo*
/// @param filter KFileFilter*
///
void k_filefiltercombo_set_default_filter(void* self, void* filter);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#defaultFilter)
///
/// @param self KFileFilterCombo*
///
KFileFilter* k_filefiltercombo_default_filter(void* self);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setCurrentFilter)
///
/// @param self KFileFilterCombo*
/// @param filter KFileFilter*
///
void k_filefiltercombo_set_current_filter(void* self, void* filter);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#showsAllTypes)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_shows_all_types(void* self);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
///
/// @param self KFileFilterCombo*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_filefiltercombo_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KFileFilterCombo*
/// @param callback bool func(KFileFilterCombo* self, QObject* param1, QEvent* param2)
///
void k_filefiltercombo_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KFileFilterCombo*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_filefiltercombo_qbase_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filterChanged)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_filter_changed(void* self);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#filterChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self)
///
void k_filefiltercombo_on_filter_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_filefiltercombo_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_filefiltercombo_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#setFilters)
///
/// @param self KFileFilterCombo*
/// @param filters libqt_list /* of KFileFilter* */
/// @param defaultFilter KFileFilter*
///
void k_filefiltercombo_set_filters2(void* self, libqt_list filters, void* defaultFilter);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditUrl)
///
/// @param self KFileFilterCombo*
/// @param url QUrl*
///
void k_filefiltercombo_set_edit_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KFileFilterCombo*
/// @param url QUrl*
///
void k_filefiltercombo_add_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
/// @param url QUrl*
///
void k_filefiltercombo_add_url2(void* self, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param url QUrl*
///
void k_filefiltercombo_insert_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_filefiltercombo_insert_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param url QUrl*
///
void k_filefiltercombo_change_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_filefiltercombo_change_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#cursorPosition)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_cursor_position(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#autoCompletion)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_auto_completion(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#urlDropsEnabled)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_url_drops_enabled(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contains)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
bool k_filefiltercombo_contains(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setTrapReturnKey)
///
/// @param self KFileFilterCombo*
/// @param trap bool
///
void k_filefiltercombo_set_trap_return_key(void* self, bool trap);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#trapReturnKey)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_trap_return_key(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KFileFilterCombo*
///
KCompletionBox* k_filefiltercombo_completion_box(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditable)
///
/// @param self KFileFilterCombo*
/// @param editable bool
///
void k_filefiltercombo_set_editable(void* self, bool editable);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contextMenu)
///
/// @param self KFileFilterCombo*
///
QMenu* k_filefiltercombo_context_menu(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
void k_filefiltercombo_return_pressed(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* text)
///
void k_filefiltercombo_on_return_pressed(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_substring_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_substring_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KFileFilterCombo*
/// @param param1 enum KCompletionBase__KeyBindingType
///
void k_filefiltercombo_text_rotation(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, enum KCompletionBase__KeyBindingType param1)
///
void k_filefiltercombo_on_text_rotation(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KFileFilterCombo*
/// @param param1 enum KCompletion__CompletionMode
///
void k_filefiltercombo_completion_mode_changed(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, enum KCompletion__CompletionMode param1)
///
void k_filefiltercombo_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KFileFilterCombo*
/// @param contextMenu QMenu*
///
void k_filefiltercombo_about_to_show_context_menu(void* self, void* contextMenu);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMenu* contextMenu)
///
void k_filefiltercombo_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#rotateText)
///
/// @param self KFileFilterCombo*
/// @param type enum KCompletionBase__KeyBindingType
///
void k_filefiltercombo_rotate_text(void* self, int32_t type);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KFileFilterCombo*
/// @param item const char*
///
void k_filefiltercombo_set_current_item(void* self, const char* item);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KFileFilterCombo*
/// @param create bool
///
KCompletionBox* k_filefiltercombo_completion_box1(void* self, bool create);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KFileFilterCombo*
/// @param item const char*
/// @param insert bool
///
void k_filefiltercombo_set_current_item2(void* self, const char* item, bool insert);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KFileFilterCombo*
/// @param item const char*
/// @param insert bool
/// @param index int
///
void k_filefiltercombo_set_current_item3(void* self, const char* item, bool insert, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self KFileFilterCombo*
/// @param maxItems int
///
void k_filefiltercombo_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self KFileFilterCombo*
/// @param max int
///
void k_filefiltercombo_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self KFileFilterCombo*
/// @param enable bool
///
void k_filefiltercombo_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self KFileFilterCombo*
/// @param frame bool
///
void k_filefiltercombo_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
int32_t k_filefiltercombo_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KFileFilterCombo*
/// @param data QVariant*
///
int32_t k_filefiltercombo_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self KFileFilterCombo*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t k_filefiltercombo_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self KFileFilterCombo*
/// @param policy enum QComboBox__InsertPolicy
///
void k_filefiltercombo_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self KFileFilterCombo*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t k_filefiltercombo_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self KFileFilterCombo*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void k_filefiltercombo_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self KFileFilterCombo*
/// @param characters int
///
void k_filefiltercombo_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self KFileFilterCombo*
/// @param size QSize*
///
void k_filefiltercombo_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self KFileFilterCombo*
/// @param placeholderText const char*
///
void k_filefiltercombo_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self KFileFilterCombo*
///
QLineEdit* k_filefiltercombo_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self KFileFilterCombo*
/// @param v QValidator*
///
void k_filefiltercombo_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self KFileFilterCombo*
///
const QValidator* k_filefiltercombo_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self KFileFilterCombo*
/// @param c QCompleter*
///
void k_filefiltercombo_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self KFileFilterCombo*
///
QCompleter* k_filefiltercombo_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self KFileFilterCombo*
///
QAbstractItemDelegate* k_filefiltercombo_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self KFileFilterCombo*
/// @param delegate QAbstractItemDelegate*
///
void k_filefiltercombo_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self KFileFilterCombo*
///
QAbstractItemModel* k_filefiltercombo_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self KFileFilterCombo*
///
QModelIndex* k_filefiltercombo_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self KFileFilterCombo*
/// @param index QModelIndex*
///
void k_filefiltercombo_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self KFileFilterCombo*
/// @param visibleColumn int
///
void k_filefiltercombo_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KFileFilterCombo*
///
QVariant* k_filefiltercombo_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
/// @param index int
///
const char* k_filefiltercombo_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self KFileFilterCombo*
/// @param index int
///
QIcon* k_filefiltercombo_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KFileFilterCombo*
/// @param index int
///
QVariant* k_filefiltercombo_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
void k_filefiltercombo_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
/// @param text const char*
///
void k_filefiltercombo_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self KFileFilterCombo*
/// @param texts const char**
///
void k_filefiltercombo_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param text const char*
///
void k_filefiltercombo_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void k_filefiltercombo_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param texts const char**
///
void k_filefiltercombo_insert_items(void* self, int index, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param text const char*
///
void k_filefiltercombo_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param icon QIcon*
///
void k_filefiltercombo_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param value QVariant*
///
void k_filefiltercombo_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self KFileFilterCombo*
///
QAbstractItemView* k_filefiltercombo_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self KFileFilterCombo*
/// @param itemView QAbstractItemView*
///
void k_filefiltercombo_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self KFileFilterCombo*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_filefiltercombo_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
void k_filefiltercombo_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
void k_filefiltercombo_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, int index)
///
void k_filefiltercombo_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, int index)
///
void k_filefiltercombo_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KFileFilterCombo*
/// @param index int
///
void k_filefiltercombo_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, int index)
///
void k_filefiltercombo_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KFileFilterCombo*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_filefiltercombo_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KFileFilterCombo*
/// @param data QVariant*
/// @param role int
///
int32_t k_filefiltercombo_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KFileFilterCombo*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_filefiltercombo_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KFileFilterCombo*
/// @param role int
///
QVariant* k_filefiltercombo_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param role int
///
QVariant* k_filefiltercombo_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KFileFilterCombo*
/// @param text const char*
/// @param userData QVariant*
///
void k_filefiltercombo_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_filefiltercombo_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void k_filefiltercombo_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_filefiltercombo_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KFileFilterCombo*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void k_filefiltercombo_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KFileFilterCombo*
///
uintptr_t k_filefiltercombo_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KFileFilterCombo*
///
uintptr_t k_filefiltercombo_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KFileFilterCombo*
///
uintptr_t k_filefiltercombo_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KFileFilterCombo*
///
QStyle* k_filefiltercombo_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KFileFilterCombo*
/// @param style QStyle*
///
void k_filefiltercombo_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KFileFilterCombo*
///
/// @return enum Qt__WindowModality
///
int32_t k_filefiltercombo_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KFileFilterCombo*
/// @param windowModality enum Qt__WindowModality
///
void k_filefiltercombo_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
///
bool k_filefiltercombo_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KFileFilterCombo*
/// @param enabled bool
///
void k_filefiltercombo_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KFileFilterCombo*
/// @param disabled bool
///
void k_filefiltercombo_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KFileFilterCombo*
/// @param windowModified bool
///
void k_filefiltercombo_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KFileFilterCombo*
///
QRect* k_filefiltercombo_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KFileFilterCombo*
///
const QRect* k_filefiltercombo_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KFileFilterCombo*
///
QRect* k_filefiltercombo_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KFileFilterCombo*
///
QPoint* k_filefiltercombo_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KFileFilterCombo*
///
QRect* k_filefiltercombo_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KFileFilterCombo*
///
QRect* k_filefiltercombo_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KFileFilterCombo*
///
QRegion* k_filefiltercombo_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFileFilterCombo*
/// @param minimumSize QSize*
///
void k_filefiltercombo_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFileFilterCombo*
/// @param minw int
/// @param minh int
///
void k_filefiltercombo_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFileFilterCombo*
/// @param maximumSize QSize*
///
void k_filefiltercombo_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFileFilterCombo*
/// @param maxw int
/// @param maxh int
///
void k_filefiltercombo_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KFileFilterCombo*
/// @param minw int
///
void k_filefiltercombo_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KFileFilterCombo*
/// @param minh int
///
void k_filefiltercombo_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KFileFilterCombo*
/// @param maxw int
///
void k_filefiltercombo_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KFileFilterCombo*
/// @param maxh int
///
void k_filefiltercombo_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFileFilterCombo*
/// @param sizeIncrement QSize*
///
void k_filefiltercombo_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFileFilterCombo*
/// @param w int
/// @param h int
///
void k_filefiltercombo_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFileFilterCombo*
/// @param baseSize QSize*
///
void k_filefiltercombo_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFileFilterCombo*
/// @param basew int
/// @param baseh int
///
void k_filefiltercombo_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFileFilterCombo*
/// @param fixedSize QSize*
///
void k_filefiltercombo_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFileFilterCombo*
/// @param w int
/// @param h int
///
void k_filefiltercombo_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KFileFilterCombo*
/// @param w int
///
void k_filefiltercombo_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KFileFilterCombo*
/// @param h int
///
void k_filefiltercombo_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFileFilterCombo*
/// @param param1 QPointF*
///
QPointF* k_filefiltercombo_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFileFilterCombo*
/// @param param1 QPoint*
///
QPoint* k_filefiltercombo_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFileFilterCombo*
/// @param param1 QPointF*
///
QPointF* k_filefiltercombo_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFileFilterCombo*
/// @param param1 QPoint*
///
QPoint* k_filefiltercombo_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFileFilterCombo*
/// @param param1 QPointF*
///
QPointF* k_filefiltercombo_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFileFilterCombo*
/// @param param1 QPoint*
///
QPoint* k_filefiltercombo_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFileFilterCombo*
/// @param param1 QPointF*
///
QPointF* k_filefiltercombo_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFileFilterCombo*
/// @param param1 QPoint*
///
QPoint* k_filefiltercombo_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_filefiltercombo_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_filefiltercombo_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_filefiltercombo_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_filefiltercombo_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KFileFilterCombo*
///
const QPalette* k_filefiltercombo_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KFileFilterCombo*
/// @param palette QPalette*
///
void k_filefiltercombo_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KFileFilterCombo*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_filefiltercombo_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KFileFilterCombo*
///
/// @return enum QPalette__ColorRole
///
int32_t k_filefiltercombo_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KFileFilterCombo*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_filefiltercombo_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KFileFilterCombo*
///
/// @return enum QPalette__ColorRole
///
int32_t k_filefiltercombo_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KFileFilterCombo*
///
const QFont* k_filefiltercombo_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KFileFilterCombo*
/// @param font QFont*
///
void k_filefiltercombo_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KFileFilterCombo*
///
QFontMetrics* k_filefiltercombo_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KFileFilterCombo*
///
QFontInfo* k_filefiltercombo_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KFileFilterCombo*
///
QCursor* k_filefiltercombo_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KFileFilterCombo*
/// @param cursor QCursor*
///
void k_filefiltercombo_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KFileFilterCombo*
/// @param enable bool
///
void k_filefiltercombo_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KFileFilterCombo*
/// @param enable bool
///
void k_filefiltercombo_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFileFilterCombo*
/// @param mask QBitmap*
///
void k_filefiltercombo_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFileFilterCombo*
/// @param mask QRegion*
///
void k_filefiltercombo_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KFileFilterCombo*
///
QRegion* k_filefiltercombo_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param target QPaintDevice*
///
void k_filefiltercombo_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
///
void k_filefiltercombo_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFileFilterCombo*
///
QPixmap* k_filefiltercombo_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KFileFilterCombo*
///
QGraphicsEffect* k_filefiltercombo_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KFileFilterCombo*
/// @param effect QGraphicsEffect*
///
void k_filefiltercombo_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFileFilterCombo*
/// @param type enum Qt__GestureType
///
void k_filefiltercombo_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KFileFilterCombo*
/// @param type enum Qt__GestureType
///
void k_filefiltercombo_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KFileFilterCombo*
/// @param windowTitle const char*
///
void k_filefiltercombo_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KFileFilterCombo*
/// @param styleSheet const char*
///
void k_filefiltercombo_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
///
void k_filefiltercombo_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KFileFilterCombo*
///
QIcon* k_filefiltercombo_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KFileFilterCombo*
/// @param windowIconText const char*
///
void k_filefiltercombo_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KFileFilterCombo*
/// @param windowRole const char*
///
void k_filefiltercombo_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KFileFilterCombo*
/// @param filePath const char*
///
void k_filefiltercombo_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KFileFilterCombo*
/// @param level double
///
void k_filefiltercombo_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KFileFilterCombo*
///
double k_filefiltercombo_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KFileFilterCombo*
/// @param toolTip const char*
///
void k_filefiltercombo_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KFileFilterCombo*
/// @param msec int
///
void k_filefiltercombo_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KFileFilterCombo*
/// @param statusTip const char*
///
void k_filefiltercombo_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KFileFilterCombo*
/// @param whatsThis const char*
///
void k_filefiltercombo_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KFileFilterCombo*
/// @param name const char*
///
void k_filefiltercombo_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KFileFilterCombo*
/// @param description const char*
///
void k_filefiltercombo_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KFileFilterCombo*
/// @param direction enum Qt__LayoutDirection
///
void k_filefiltercombo_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KFileFilterCombo*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_filefiltercombo_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KFileFilterCombo*
/// @param locale QLocale*
///
void k_filefiltercombo_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KFileFilterCombo*
///
QLocale* k_filefiltercombo_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFileFilterCombo*
/// @param reason enum Qt__FocusReason
///
void k_filefiltercombo_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KFileFilterCombo*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_filefiltercombo_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KFileFilterCombo*
/// @param policy enum Qt__FocusPolicy
///
void k_filefiltercombo_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_filefiltercombo_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KFileFilterCombo*
/// @param focusProxy QWidget*
///
void k_filefiltercombo_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KFileFilterCombo*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_filefiltercombo_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KFileFilterCombo*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_filefiltercombo_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFileFilterCombo*
/// @param param1 QCursor*
///
void k_filefiltercombo_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFileFilterCombo*
/// @param key QKeySequence*
///
int32_t k_filefiltercombo_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KFileFilterCombo*
/// @param id int
///
void k_filefiltercombo_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFileFilterCombo*
/// @param id int
///
void k_filefiltercombo_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFileFilterCombo*
/// @param id int
///
void k_filefiltercombo_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_filefiltercombo_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_filefiltercombo_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KFileFilterCombo*
/// @param enable bool
///
void k_filefiltercombo_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KFileFilterCombo*
///
QGraphicsProxyWidget* k_filefiltercombo_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileFilterCombo*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_filefiltercombo_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileFilterCombo*
/// @param param1 QRect*
///
void k_filefiltercombo_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileFilterCombo*
/// @param param1 QRegion*
///
void k_filefiltercombo_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileFilterCombo*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_filefiltercombo_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileFilterCombo*
/// @param param1 QRect*
///
void k_filefiltercombo_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileFilterCombo*
/// @param param1 QRegion*
///
void k_filefiltercombo_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KFileFilterCombo*
/// @param hidden bool
///
void k_filefiltercombo_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
///
void k_filefiltercombo_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFileFilterCombo*
/// @param x int
/// @param y int
///
void k_filefiltercombo_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFileFilterCombo*
/// @param param1 QPoint*
///
void k_filefiltercombo_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFileFilterCombo*
/// @param w int
/// @param h int
///
void k_filefiltercombo_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFileFilterCombo*
/// @param param1 QSize*
///
void k_filefiltercombo_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFileFilterCombo*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_filefiltercombo_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFileFilterCombo*
/// @param geometry QRect*
///
void k_filefiltercombo_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileFilterCombo*
///
char* k_filefiltercombo_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KFileFilterCombo*
/// @param geometry const char*
///
bool k_filefiltercombo_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KFileFilterCombo*
/// @param param1 QWidget*
///
bool k_filefiltercombo_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KFileFilterCombo*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_filefiltercombo_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KFileFilterCombo*
/// @param state flag of enum Qt__WindowState
///
void k_filefiltercombo_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KFileFilterCombo*
/// @param state flag of enum Qt__WindowState
///
void k_filefiltercombo_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KFileFilterCombo*
///
QSizePolicy* k_filefiltercombo_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFileFilterCombo*
/// @param sizePolicy QSizePolicy*
///
void k_filefiltercombo_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFileFilterCombo*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_filefiltercombo_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KFileFilterCombo*
///
QRegion* k_filefiltercombo_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFileFilterCombo*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_filefiltercombo_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFileFilterCombo*
/// @param margins QMargins*
///
void k_filefiltercombo_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KFileFilterCombo*
///
QMargins* k_filefiltercombo_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KFileFilterCombo*
///
QRect* k_filefiltercombo_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KFileFilterCombo*
///
QLayout* k_filefiltercombo_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KFileFilterCombo*
/// @param layout QLayout*
///
void k_filefiltercombo_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFileFilterCombo*
/// @param parent QWidget*
///
void k_filefiltercombo_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFileFilterCombo*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_filefiltercombo_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFileFilterCombo*
/// @param dx int
/// @param dy int
///
void k_filefiltercombo_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFileFilterCombo*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_filefiltercombo_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KFileFilterCombo*
/// @param on bool
///
void k_filefiltercombo_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileFilterCombo*
/// @param action QAction*
///
void k_filefiltercombo_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KFileFilterCombo*
/// @param actions libqt_list /* of QAction* */
///
void k_filefiltercombo_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KFileFilterCombo*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_filefiltercombo_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KFileFilterCombo*
/// @param before QAction*
/// @param action QAction*
///
void k_filefiltercombo_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KFileFilterCombo*
/// @param action QAction*
///
void k_filefiltercombo_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KFileFilterCombo*
///
libqt_list /* of QAction* */ k_filefiltercombo_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileFilterCombo*
/// @param text const char*
///
QAction* k_filefiltercombo_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_filefiltercombo_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileFilterCombo*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_filefiltercombo_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_filefiltercombo_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KFileFilterCombo*
///
QWidget* k_filefiltercombo_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KFileFilterCombo*
/// @param type flag of enum Qt__WindowType
///
void k_filefiltercombo_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KFileFilterCombo*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_filefiltercombo_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__WindowType
///
void k_filefiltercombo_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KFileFilterCombo*
/// @param type flag of enum Qt__WindowType
///
void k_filefiltercombo_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KFileFilterCombo*
///
/// @return enum Qt__WindowType
///
int64_t k_filefiltercombo_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_filefiltercombo_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileFilterCombo*
/// @param x int
/// @param y int
///
QWidget* k_filefiltercombo_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileFilterCombo*
/// @param p QPoint*
///
QWidget* k_filefiltercombo_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileFilterCombo*
/// @param p QPointF*
///
QWidget* k_filefiltercombo_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__WidgetAttribute
///
void k_filefiltercombo_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_filefiltercombo_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KFileFilterCombo*
/// @param child QWidget*
///
bool k_filefiltercombo_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KFileFilterCombo*
/// @param enabled bool
///
void k_filefiltercombo_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KFileFilterCombo*
///
QBackingStore* k_filefiltercombo_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KFileFilterCombo*
///
QWindow* k_filefiltercombo_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KFileFilterCombo*
///
QScreen* k_filefiltercombo_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KFileFilterCombo*
/// @param screen QScreen*
///
void k_filefiltercombo_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_filefiltercombo_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFileFilterCombo*
/// @param title const char*
///
void k_filefiltercombo_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* title)
///
void k_filefiltercombo_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFileFilterCombo*
/// @param icon QIcon*
///
void k_filefiltercombo_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QIcon* icon)
///
void k_filefiltercombo_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFileFilterCombo*
/// @param iconText const char*
///
void k_filefiltercombo_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* iconText)
///
void k_filefiltercombo_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFileFilterCombo*
/// @param pos QPoint*
///
void k_filefiltercombo_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QPoint* pos)
///
void k_filefiltercombo_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KFileFilterCombo*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_filefiltercombo_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KFileFilterCombo*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_filefiltercombo_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_filefiltercombo_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_filefiltercombo_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_filefiltercombo_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_filefiltercombo_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_filefiltercombo_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_filefiltercombo_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFileFilterCombo*
/// @param rectangle QRect*
///
QPixmap* k_filefiltercombo_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFileFilterCombo*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_filefiltercombo_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFileFilterCombo*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_filefiltercombo_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFileFilterCombo*
/// @param id int
/// @param enable bool
///
void k_filefiltercombo_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFileFilterCombo*
/// @param id int
/// @param enable bool
///
void k_filefiltercombo_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_filefiltercombo_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_filefiltercombo_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_filefiltercombo_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_filefiltercombo_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileFilterCombo*
///
const char* k_filefiltercombo_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFileFilterCombo*
/// @param name char*
///
void k_filefiltercombo_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFileFilterCombo*
/// @param b bool
///
bool k_filefiltercombo_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFileFilterCombo*
///
QThread* k_filefiltercombo_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileFilterCombo*
/// @param thread QThread*
///
bool k_filefiltercombo_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileFilterCombo*
/// @param interval int
///
int32_t k_filefiltercombo_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileFilterCombo*
/// @param id int
///
void k_filefiltercombo_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileFilterCombo*
/// @param id enum Qt__TimerId
///
void k_filefiltercombo_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFileFilterCombo*
///
libqt_list /* of QObject* */ k_filefiltercombo_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFileFilterCombo*
/// @param filterObj QObject*
///
void k_filefiltercombo_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFileFilterCombo*
/// @param obj QObject*
///
void k_filefiltercombo_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_filefiltercombo_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileFilterCombo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_filefiltercombo_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_filefiltercombo_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_filefiltercombo_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFileFilterCombo*
/// @param name const char*
/// @param value QVariant*
///
bool k_filefiltercombo_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFileFilterCombo*
/// @param name const char*
///
QVariant* k_filefiltercombo_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileFilterCombo*
///
const char** k_filefiltercombo_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileFilterCombo*
///
QBindingStorage* k_filefiltercombo_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileFilterCombo*
///
const QBindingStorage* k_filefiltercombo_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self)
///
void k_filefiltercombo_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFileFilterCombo*
///
QObject* k_filefiltercombo_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFileFilterCombo*
/// @param classname const char*
///
bool k_filefiltercombo_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileFilterCombo*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_filefiltercombo_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileFilterCombo*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_filefiltercombo_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_filefiltercombo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileFilterCombo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_filefiltercombo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileFilterCombo*
/// @param param1 QObject*
///
void k_filefiltercombo_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QObject* param1)
///
void k_filefiltercombo_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KFileFilterCombo*
///
double k_filefiltercombo_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KFileFilterCombo*
///
double k_filefiltercombo_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_filefiltercombo_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_filefiltercombo_encode_metric_f(int32_t metric, double value);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KFileFilterCombo*
///
KCompletion* k_filefiltercombo_completion_object(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_is_completion_object_auto_deleted(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
///
/// @param self KFileFilterCombo*
/// @param autoDelete bool
///
void k_filefiltercombo_set_auto_delete_completion_object(void* self, bool autoDelete);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
///
/// @param self KFileFilterCombo*
/// @param enable bool
///
void k_filefiltercombo_set_enable_signals(void* self, bool enable);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_handle_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_emit_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
///
/// @param self KFileFilterCombo*
/// @param emitRotationSignals bool
///
void k_filefiltercombo_set_emit_signals(void* self, bool emitRotationSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
///
/// @param self KFileFilterCombo*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_filefiltercombo_completion_mode(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
///
/// @param self KFileFilterCombo*
/// @param item enum KCompletionBase__KeyBindingType
/// @param key libqt_list /* of QKeySequence* */
///
bool k_filefiltercombo_set_key_binding(void* self, int32_t item, libqt_list key);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
///
/// @param self KFileFilterCombo*
/// @param item enum KCompletionBase__KeyBindingType
///
libqt_list /* of QKeySequence* */ k_filefiltercombo_key_binding(void* self, int32_t item);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_use_global_key_bindings(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
///
/// @param self KFileFilterCombo*
///
KCompletion* k_filefiltercombo_comp_obj(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KFileFilterCombo*
/// @param handleSignals bool
///
KCompletion* k_filefiltercombo_completion_object1(void* self, bool handleSignals);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param autocomplete bool
///
void k_filefiltercombo_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param autocomplete bool
///
void k_filefiltercombo_qbase_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, bool autocomplete)
///
void k_filefiltercombo_on_set_auto_completion(void* self, void (*callback)(void*, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param lineEdit QLineEdit*
///
void k_filefiltercombo_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param lineEdit QLineEdit*
///
void k_filefiltercombo_qbase_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QLineEdit* lineEdit)
///
void k_filefiltercombo_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_qbase_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QSize* func()
///
void k_filefiltercombo_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param completedText const char*
///
void k_filefiltercombo_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param completedText const char*
///
void k_filefiltercombo_qbase_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* completedText)
///
void k_filefiltercombo_on_set_completed_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param items const char**
/// @param autoSuggest bool
///
void k_filefiltercombo_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param items const char**
/// @param autoSuggest bool
///
void k_filefiltercombo_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char** items, bool autoSuggest)
///
void k_filefiltercombo_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 const char*
///
void k_filefiltercombo_qbase_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* param1)
///
void k_filefiltercombo_on_make_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param model QAbstractItemModel*
///
void k_filefiltercombo_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param model QAbstractItemModel*
///
void k_filefiltercombo_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QAbstractItemModel* model)
///
void k_filefiltercombo_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
QSize* k_filefiltercombo_qbase_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QSize* func()
///
void k_filefiltercombo_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func()
///
void k_filefiltercombo_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func()
///
void k_filefiltercombo_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
bool k_filefiltercombo_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
bool k_filefiltercombo_qbase_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func(KFileFilterCombo* self, QEvent* event)
///
void k_filefiltercombo_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_filefiltercombo_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_filefiltercombo_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QVariant* func(KFileFilterCombo* self, enum Qt__InputMethodQuery param1)
///
void k_filefiltercombo_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QFocusEvent*
///
void k_filefiltercombo_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QFocusEvent*
///
void k_filefiltercombo_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QFocusEvent* e)
///
void k_filefiltercombo_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QFocusEvent*
///
void k_filefiltercombo_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QFocusEvent*
///
void k_filefiltercombo_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QFocusEvent* e)
///
void k_filefiltercombo_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QEvent*
///
void k_filefiltercombo_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QEvent*
///
void k_filefiltercombo_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QEvent* e)
///
void k_filefiltercombo_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QResizeEvent*
///
void k_filefiltercombo_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QResizeEvent*
///
void k_filefiltercombo_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QResizeEvent* e)
///
void k_filefiltercombo_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QPaintEvent*
///
void k_filefiltercombo_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QPaintEvent*
///
void k_filefiltercombo_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QPaintEvent* e)
///
void k_filefiltercombo_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QShowEvent*
///
void k_filefiltercombo_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QShowEvent*
///
void k_filefiltercombo_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QShowEvent* e)
///
void k_filefiltercombo_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QHideEvent*
///
void k_filefiltercombo_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QHideEvent*
///
void k_filefiltercombo_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QHideEvent* e)
///
void k_filefiltercombo_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QMouseEvent*
///
void k_filefiltercombo_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QMouseEvent*
///
void k_filefiltercombo_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMouseEvent* e)
///
void k_filefiltercombo_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QMouseEvent*
///
void k_filefiltercombo_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QMouseEvent*
///
void k_filefiltercombo_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMouseEvent* e)
///
void k_filefiltercombo_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QKeyEvent*
///
void k_filefiltercombo_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QKeyEvent*
///
void k_filefiltercombo_qbase_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QKeyEvent* e)
///
void k_filefiltercombo_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QKeyEvent*
///
void k_filefiltercombo_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QKeyEvent*
///
void k_filefiltercombo_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QKeyEvent* e)
///
void k_filefiltercombo_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QWheelEvent*
///
void k_filefiltercombo_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QWheelEvent*
///
void k_filefiltercombo_qbase_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QWheelEvent* e)
///
void k_filefiltercombo_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QContextMenuEvent*
///
void k_filefiltercombo_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param e QContextMenuEvent*
///
void k_filefiltercombo_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QContextMenuEvent* e)
///
void k_filefiltercombo_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 QInputMethodEvent*
///
void k_filefiltercombo_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 QInputMethodEvent*
///
void k_filefiltercombo_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QInputMethodEvent* param1)
///
void k_filefiltercombo_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param option QStyleOptionComboBox*
///
void k_filefiltercombo_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param option QStyleOptionComboBox*
///
void k_filefiltercombo_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QStyleOptionComboBox* option)
///
void k_filefiltercombo_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func()
///
void k_filefiltercombo_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param visible bool
///
void k_filefiltercombo_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param visible bool
///
void k_filefiltercombo_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, bool visible)
///
void k_filefiltercombo_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 int
///
int32_t k_filefiltercombo_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 int
///
int32_t k_filefiltercombo_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func(KFileFilterCombo* self, int param1)
///
void k_filefiltercombo_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func()
///
void k_filefiltercombo_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
QPaintEngine* k_filefiltercombo_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
QPaintEngine* k_filefiltercombo_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QPaintEngine* func()
///
void k_filefiltercombo_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMouseEvent*
///
void k_filefiltercombo_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMouseEvent*
///
void k_filefiltercombo_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMouseEvent* event)
///
void k_filefiltercombo_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMouseEvent*
///
void k_filefiltercombo_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMouseEvent*
///
void k_filefiltercombo_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMouseEvent* event)
///
void k_filefiltercombo_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEnterEvent*
///
void k_filefiltercombo_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEnterEvent*
///
void k_filefiltercombo_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QEnterEvent* event)
///
void k_filefiltercombo_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
void k_filefiltercombo_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
void k_filefiltercombo_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QEvent* event)
///
void k_filefiltercombo_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMoveEvent*
///
void k_filefiltercombo_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QMoveEvent*
///
void k_filefiltercombo_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMoveEvent* event)
///
void k_filefiltercombo_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QCloseEvent*
///
void k_filefiltercombo_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QCloseEvent*
///
void k_filefiltercombo_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QCloseEvent* event)
///
void k_filefiltercombo_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QTabletEvent*
///
void k_filefiltercombo_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QTabletEvent*
///
void k_filefiltercombo_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QTabletEvent* event)
///
void k_filefiltercombo_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QActionEvent*
///
void k_filefiltercombo_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QActionEvent*
///
void k_filefiltercombo_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QActionEvent* event)
///
void k_filefiltercombo_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragEnterEvent*
///
void k_filefiltercombo_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragEnterEvent*
///
void k_filefiltercombo_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QDragEnterEvent* event)
///
void k_filefiltercombo_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragMoveEvent*
///
void k_filefiltercombo_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragMoveEvent*
///
void k_filefiltercombo_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QDragMoveEvent* event)
///
void k_filefiltercombo_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragLeaveEvent*
///
void k_filefiltercombo_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDragLeaveEvent*
///
void k_filefiltercombo_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QDragLeaveEvent* event)
///
void k_filefiltercombo_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDropEvent*
///
void k_filefiltercombo_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QDropEvent*
///
void k_filefiltercombo_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QDropEvent* event)
///
void k_filefiltercombo_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_filefiltercombo_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_filefiltercombo_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func(KFileFilterCombo* self, const char* eventType, void* message, intptr_t* result)
///
void k_filefiltercombo_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_filefiltercombo_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_filefiltercombo_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func(KFileFilterCombo* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_filefiltercombo_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
///
void k_filefiltercombo_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param painter QPainter*
///
void k_filefiltercombo_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QPainter* painter)
///
void k_filefiltercombo_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param offset QPoint*
///
QPaintDevice* k_filefiltercombo_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param offset QPoint*
///
QPaintDevice* k_filefiltercombo_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QPaintDevice* func(KFileFilterCombo* self, QPoint* offset)
///
void k_filefiltercombo_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
QPainter* k_filefiltercombo_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
QPainter* k_filefiltercombo_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QPainter* func()
///
void k_filefiltercombo_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param next bool
///
bool k_filefiltercombo_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param next bool
///
bool k_filefiltercombo_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func(KFileFilterCombo* self, bool next)
///
void k_filefiltercombo_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QTimerEvent*
///
void k_filefiltercombo_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QTimerEvent*
///
void k_filefiltercombo_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QTimerEvent* event)
///
void k_filefiltercombo_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QChildEvent*
///
void k_filefiltercombo_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QChildEvent*
///
void k_filefiltercombo_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QChildEvent* event)
///
void k_filefiltercombo_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
void k_filefiltercombo_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param event QEvent*
///
void k_filefiltercombo_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QEvent* event)
///
void k_filefiltercombo_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
void k_filefiltercombo_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
void k_filefiltercombo_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMetaMethod* signal)
///
void k_filefiltercombo_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
void k_filefiltercombo_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
void k_filefiltercombo_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, QMetaMethod* signal)
///
void k_filefiltercombo_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param completionObject KCompletion*
/// @param handleSignals bool
///
void k_filefiltercombo_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param completionObject KCompletion*
/// @param handleSignals bool
///
void k_filefiltercombo_qbase_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, KCompletion* completionObject, bool handleSignals)
///
void k_filefiltercombo_on_set_completion_object(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param handle bool
///
void k_filefiltercombo_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param handle bool
///
void k_filefiltercombo_qbase_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, bool handle)
///
void k_filefiltercombo_on_set_handle_signals(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param mode enum KCompletion__CompletionMode
///
void k_filefiltercombo_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param mode enum KCompletion__CompletionMode
///
void k_filefiltercombo_qbase_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, enum KCompletion__CompletionMode mode)
///
void k_filefiltercombo_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param id int
/// @param data void*
///
void k_filefiltercombo_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param id int
/// @param data void*
///
void k_filefiltercombo_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, int id, void* data)
///
void k_filefiltercombo_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func()
///
void k_filefiltercombo_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func()
///
void k_filefiltercombo_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func()
///
void k_filefiltercombo_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func()
///
void k_filefiltercombo_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
bool k_filefiltercombo_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func()
///
void k_filefiltercombo_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
QObject* k_filefiltercombo_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
QObject* k_filefiltercombo_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback QObject* func()
///
void k_filefiltercombo_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
int32_t k_filefiltercombo_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func()
///
void k_filefiltercombo_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal const char*
///
int32_t k_filefiltercombo_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal const char*
///
int32_t k_filefiltercombo_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback int32_t func(KFileFilterCombo* self, const char* signal)
///
void k_filefiltercombo_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
bool k_filefiltercombo_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param signal QMetaMethod*
///
bool k_filefiltercombo_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback bool func(KFileFilterCombo* self, QMetaMethod* signal)
///
void k_filefiltercombo_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_filefiltercombo_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_filefiltercombo_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback double func(KFileFilterCombo* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_filefiltercombo_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
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
/// @param self KFileFilterCombo*
///
libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_filefiltercombo_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
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
/// @param self KFileFilterCombo*
///
libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_filefiltercombo_qbase_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ func()
///
void k_filefiltercombo_on_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ (*callback)());

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
///
void k_filefiltercombo_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
///
void k_filefiltercombo_qbase_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */ /* of enum KCompletionBase__KeyBindingType to QKeySequence* */)
///
void k_filefiltercombo_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param delegate KCompletionBase*
///
void k_filefiltercombo_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param delegate KCompletionBase*
///
void k_filefiltercombo_qbase_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, KCompletionBase* delegate)
///
void k_filefiltercombo_on_set_delegate(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileFilterCombo*
///
KCompletionBase* k_filefiltercombo_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileFilterCombo*
///
KCompletionBase* k_filefiltercombo_qbase_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileFilterCombo*
/// @param callback KCompletionBase* func()
///
void k_filefiltercombo_on_delegate(void* self, KCompletionBase* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFileFilterCombo*
/// @param callback void func(KFileFilterCombo* self, const char* objectName)
///
void k_filefiltercombo_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfilefiltercombo.html#dtor.KFileFilterCombo)
///
/// Delete this object from C++ memory.
///
/// @param self KFileFilterCombo*
///
void k_filefiltercombo_delete(void* self);

#endif
