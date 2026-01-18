#pragma once
#ifndef SRC_EXTRAS_SONNET_QT6C_LIBDICTIONARYCOMBOBOX_H
#define SRC_EXTRAS_SONNET_QT6C_LIBDICTIONARYCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html)

/// k_sonnet__dictionarycombobox_new constructs a new Sonnet::DictionaryComboBox object.
///
/// @param parent QWidget*
///
Sonnet__DictionaryComboBox* k_sonnet__dictionarycombobox_new(void* parent);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html)

/// k_sonnet__dictionarycombobox_new2 constructs a new Sonnet::DictionaryComboBox object.
///
Sonnet__DictionaryComboBox* k_sonnet__dictionarycombobox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QMetaObject* k_sonnet__dictionarycombobox_meta_object(void* self);

/// @param self Sonnet__DictionaryComboBox*
/// @param param1 const char*
///
void* k_sonnet__dictionarycombobox_metacast(void* self, const char* param1);

/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__dictionarycombobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func(Sonnet__DictionaryComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_sonnet__dictionarycombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__dictionarycombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_sonnet__dictionarycombobox_tr(const char* s);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#reloadCombo)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_reload_combo(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#currentDictionaryName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_current_dictionary_name(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#currentDictionary)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_current_dictionary(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#setCurrentByDictionaryName)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dictionaryName const char*
///
void k_sonnet__dictionarycombobox_set_current_by_dictionary_name(void* self, const char* dictionaryName);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#assignByDictionnary)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dictionary const char*
///
bool k_sonnet__dictionarycombobox_assign_by_dictionnary(void* self, const char* dictionary);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#assignDictionnaryName)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param name const char*
///
bool k_sonnet__dictionarycombobox_assign_dictionnary_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#setCurrentByDictionary)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dictionary const char*
///
void k_sonnet__dictionarycombobox_set_current_by_dictionary(void* self, const char* dictionary);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#dictionaryChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dictionary const char*
///
void k_sonnet__dictionarycombobox_dictionary_changed(void* self, const char* dictionary);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#dictionaryChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* dictionary)
///
void k_sonnet__dictionarycombobox_on_dictionary_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#dictionaryNameChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dictionaryName const char*
///
void k_sonnet__dictionarycombobox_dictionary_name_changed(void* self, const char* dictionaryName);

/// [Upstream resources](https://api.kde.org/sonnet-dictionarycombobox.html#dictionaryNameChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* dictionaryName)
///
void k_sonnet__dictionarycombobox_on_dictionary_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_sonnet__dictionarycombobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_sonnet__dictionarycombobox_tr3(const char* s, const char* c, int n);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param maxItems int
///
void k_sonnet__dictionarycombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param max int
///
void k_sonnet__dictionarycombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param frame bool
///
void k_sonnet__dictionarycombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
///
int32_t k_sonnet__dictionarycombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param data QVariant*
///
int32_t k_sonnet__dictionarycombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t k_sonnet__dictionarycombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param policy enum QComboBox__InsertPolicy
///
void k_sonnet__dictionarycombobox_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t k_sonnet__dictionarycombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void k_sonnet__dictionarycombobox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param characters int
///
void k_sonnet__dictionarycombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param size QSize*
///
void k_sonnet__dictionarycombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param placeholderText const char*
///
void k_sonnet__dictionarycombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param editable bool
///
void k_sonnet__dictionarycombobox_set_editable(void* self, bool editable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param edit QLineEdit*
///
void k_sonnet__dictionarycombobox_set_line_edit(void* self, void* edit);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self Sonnet__DictionaryComboBox*
///
QLineEdit* k_sonnet__dictionarycombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param v QValidator*
///
void k_sonnet__dictionarycombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QValidator* k_sonnet__dictionarycombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param c QCompleter*
///
void k_sonnet__dictionarycombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self Sonnet__DictionaryComboBox*
///
QCompleter* k_sonnet__dictionarycombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self Sonnet__DictionaryComboBox*
///
QAbstractItemDelegate* k_sonnet__dictionarycombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param delegate QAbstractItemDelegate*
///
void k_sonnet__dictionarycombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self Sonnet__DictionaryComboBox*
///
QAbstractItemModel* k_sonnet__dictionarycombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self Sonnet__DictionaryComboBox*
///
QModelIndex* k_sonnet__dictionarycombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index QModelIndex*
///
void k_sonnet__dictionarycombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param visibleColumn int
///
void k_sonnet__dictionarycombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self Sonnet__DictionaryComboBox*
///
QVariant* k_sonnet__dictionarycombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
const char* k_sonnet__dictionarycombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
QIcon* k_sonnet__dictionarycombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
QVariant* k_sonnet__dictionarycombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
///
void k_sonnet__dictionarycombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
/// @param text const char*
///
void k_sonnet__dictionarycombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param texts const char**
///
void k_sonnet__dictionarycombobox_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param text const char*
///
void k_sonnet__dictionarycombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void k_sonnet__dictionarycombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param texts const char**
///
void k_sonnet__dictionarycombobox_insert_items(void* self, int index, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param text const char*
///
void k_sonnet__dictionarycombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param icon QIcon*
///
void k_sonnet__dictionarycombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param value QVariant*
///
void k_sonnet__dictionarycombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self Sonnet__DictionaryComboBox*
///
QAbstractItemView* k_sonnet__dictionarycombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param itemView QAbstractItemView*
///
void k_sonnet__dictionarycombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_sonnet__dictionarycombobox_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
///
void k_sonnet__dictionarycombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
///
void k_sonnet__dictionarycombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 const char*
///
void k_sonnet__dictionarycombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* param1)
///
void k_sonnet__dictionarycombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, int index)
///
void k_sonnet__dictionarycombobox_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 const char*
///
void k_sonnet__dictionarycombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* param1)
///
void k_sonnet__dictionarycombobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, int index)
///
void k_sonnet__dictionarycombobox_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 const char*
///
void k_sonnet__dictionarycombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* param1)
///
void k_sonnet__dictionarycombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
///
void k_sonnet__dictionarycombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, int index)
///
void k_sonnet__dictionarycombobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 const char*
///
void k_sonnet__dictionarycombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* param1)
///
void k_sonnet__dictionarycombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_sonnet__dictionarycombobox_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t k_sonnet__dictionarycombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_sonnet__dictionarycombobox_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param role int
///
QVariant* k_sonnet__dictionarycombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param role int
///
QVariant* k_sonnet__dictionarycombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void k_sonnet__dictionarycombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_sonnet__dictionarycombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void k_sonnet__dictionarycombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_sonnet__dictionarycombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void k_sonnet__dictionarycombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self Sonnet__DictionaryComboBox*
///
uintptr_t k_sonnet__dictionarycombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self Sonnet__DictionaryComboBox*
///
uintptr_t k_sonnet__dictionarycombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self Sonnet__DictionaryComboBox*
///
uintptr_t k_sonnet__dictionarycombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self Sonnet__DictionaryComboBox*
///
QStyle* k_sonnet__dictionarycombobox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param style QStyle*
///
void k_sonnet__dictionarycombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t k_sonnet__dictionarycombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param windowModality enum Qt__WindowModality
///
void k_sonnet__dictionarycombobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
///
bool k_sonnet__dictionarycombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enabled bool
///
void k_sonnet__dictionarycombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param disabled bool
///
void k_sonnet__dictionarycombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param windowModified bool
///
void k_sonnet__dictionarycombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRect* k_sonnet__dictionarycombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QRect* k_sonnet__dictionarycombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRect* k_sonnet__dictionarycombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self Sonnet__DictionaryComboBox*
///
QPoint* k_sonnet__dictionarycombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRect* k_sonnet__dictionarycombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRect* k_sonnet__dictionarycombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRegion* k_sonnet__dictionarycombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param minimumSize QSize*
///
void k_sonnet__dictionarycombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param minw int
/// @param minh int
///
void k_sonnet__dictionarycombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param maximumSize QSize*
///
void k_sonnet__dictionarycombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param maxw int
/// @param maxh int
///
void k_sonnet__dictionarycombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param minw int
///
void k_sonnet__dictionarycombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param minh int
///
void k_sonnet__dictionarycombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param maxw int
///
void k_sonnet__dictionarycombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param maxh int
///
void k_sonnet__dictionarycombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param sizeIncrement QSize*
///
void k_sonnet__dictionarycombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param baseSize QSize*
///
void k_sonnet__dictionarycombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param basew int
/// @param baseh int
///
void k_sonnet__dictionarycombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param fixedSize QSize*
///
void k_sonnet__dictionarycombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param w int
///
void k_sonnet__dictionarycombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param h int
///
void k_sonnet__dictionarycombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sonnet__dictionarycombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sonnet__dictionarycombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QPalette* k_sonnet__dictionarycombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param palette QPalette*
///
void k_sonnet__dictionarycombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_sonnet__dictionarycombobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sonnet__dictionarycombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_sonnet__dictionarycombobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sonnet__dictionarycombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QFont* k_sonnet__dictionarycombobox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param font QFont*
///
void k_sonnet__dictionarycombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self Sonnet__DictionaryComboBox*
///
QFontMetrics* k_sonnet__dictionarycombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self Sonnet__DictionaryComboBox*
///
QFontInfo* k_sonnet__dictionarycombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self Sonnet__DictionaryComboBox*
///
QCursor* k_sonnet__dictionarycombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param cursor QCursor*
///
void k_sonnet__dictionarycombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param mask QBitmap*
///
void k_sonnet__dictionarycombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param mask QRegion*
///
void k_sonnet__dictionarycombobox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRegion* k_sonnet__dictionarycombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param target QPaintDevice*
///
void k_sonnet__dictionarycombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
///
void k_sonnet__dictionarycombobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self Sonnet__DictionaryComboBox*
///
QPixmap* k_sonnet__dictionarycombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self Sonnet__DictionaryComboBox*
///
QGraphicsEffect* k_sonnet__dictionarycombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param effect QGraphicsEffect*
///
void k_sonnet__dictionarycombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param type enum Qt__GestureType
///
void k_sonnet__dictionarycombobox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param type enum Qt__GestureType
///
void k_sonnet__dictionarycombobox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param windowTitle const char*
///
void k_sonnet__dictionarycombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param styleSheet const char*
///
void k_sonnet__dictionarycombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
///
void k_sonnet__dictionarycombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self Sonnet__DictionaryComboBox*
///
QIcon* k_sonnet__dictionarycombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param windowIconText const char*
///
void k_sonnet__dictionarycombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param windowRole const char*
///
void k_sonnet__dictionarycombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param filePath const char*
///
void k_sonnet__dictionarycombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param level double
///
void k_sonnet__dictionarycombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self Sonnet__DictionaryComboBox*
///
double k_sonnet__dictionarycombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param toolTip const char*
///
void k_sonnet__dictionarycombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param msec int
///
void k_sonnet__dictionarycombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param statusTip const char*
///
void k_sonnet__dictionarycombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param whatsThis const char*
///
void k_sonnet__dictionarycombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param name const char*
///
void k_sonnet__dictionarycombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param description const char*
///
void k_sonnet__dictionarycombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param direction enum Qt__LayoutDirection
///
void k_sonnet__dictionarycombobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_sonnet__dictionarycombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param locale QLocale*
///
void k_sonnet__dictionarycombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self Sonnet__DictionaryComboBox*
///
QLocale* k_sonnet__dictionarycombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param reason enum Qt__FocusReason
///
void k_sonnet__dictionarycombobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_sonnet__dictionarycombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param policy enum Qt__FocusPolicy
///
void k_sonnet__dictionarycombobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_sonnet__dictionarycombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param focusProxy QWidget*
///
void k_sonnet__dictionarycombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_sonnet__dictionarycombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_sonnet__dictionarycombobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QCursor*
///
void k_sonnet__dictionarycombobox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param key QKeySequence*
///
int32_t k_sonnet__dictionarycombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
///
void k_sonnet__dictionarycombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
///
void k_sonnet__dictionarycombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
///
void k_sonnet__dictionarycombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_sonnet__dictionarycombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_sonnet__dictionarycombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self Sonnet__DictionaryComboBox*
///
QGraphicsProxyWidget* k_sonnet__dictionarycombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QRect*
///
void k_sonnet__dictionarycombobox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QRegion*
///
void k_sonnet__dictionarycombobox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QRect*
///
void k_sonnet__dictionarycombobox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QRegion*
///
void k_sonnet__dictionarycombobox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param hidden bool
///
void k_sonnet__dictionarycombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
///
void k_sonnet__dictionarycombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param x int
/// @param y int
///
void k_sonnet__dictionarycombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QPoint*
///
void k_sonnet__dictionarycombobox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QSize*
///
void k_sonnet__dictionarycombobox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sonnet__dictionarycombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param geometry QRect*
///
void k_sonnet__dictionarycombobox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
char* k_sonnet__dictionarycombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param geometry const char*
///
bool k_sonnet__dictionarycombobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QWidget*
///
bool k_sonnet__dictionarycombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_sonnet__dictionarycombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_sonnet__dictionarycombobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_sonnet__dictionarycombobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self Sonnet__DictionaryComboBox*
///
QSizePolicy* k_sonnet__dictionarycombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param sizePolicy QSizePolicy*
///
void k_sonnet__dictionarycombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_sonnet__dictionarycombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRegion* k_sonnet__dictionarycombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_sonnet__dictionarycombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param margins QMargins*
///
void k_sonnet__dictionarycombobox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self Sonnet__DictionaryComboBox*
///
QMargins* k_sonnet__dictionarycombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self Sonnet__DictionaryComboBox*
///
QRect* k_sonnet__dictionarycombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self Sonnet__DictionaryComboBox*
///
QLayout* k_sonnet__dictionarycombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param layout QLayout*
///
void k_sonnet__dictionarycombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param parent QWidget*
///
void k_sonnet__dictionarycombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_sonnet__dictionarycombobox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dx int
/// @param dy int
///
void k_sonnet__dictionarycombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_sonnet__dictionarycombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param on bool
///
void k_sonnet__dictionarycombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param action QAction*
///
void k_sonnet__dictionarycombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param actions libqt_list of QAction*
///
void k_sonnet__dictionarycombobox_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_sonnet__dictionarycombobox_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param before QAction*
/// @param action QAction*
///
void k_sonnet__dictionarycombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param action QAction*
///
void k_sonnet__dictionarycombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return libqt_list of QAction*
///
libqt_list k_sonnet__dictionarycombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
///
QAction* k_sonnet__dictionarycombobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_sonnet__dictionarycombobox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sonnet__dictionarycombobox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sonnet__dictionarycombobox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWidget* k_sonnet__dictionarycombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_sonnet__dictionarycombobox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_sonnet__dictionarycombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__WindowType
///
void k_sonnet__dictionarycombobox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_sonnet__dictionarycombobox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return enum Qt__WindowType
///
int32_t k_sonnet__dictionarycombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_sonnet__dictionarycombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param x int
/// @param y int
///
QWidget* k_sonnet__dictionarycombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param p QPoint*
///
QWidget* k_sonnet__dictionarycombobox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param p QPointF*
///
QWidget* k_sonnet__dictionarycombobox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
void k_sonnet__dictionarycombobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_sonnet__dictionarycombobox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param child QWidget*
///
bool k_sonnet__dictionarycombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param enabled bool
///
void k_sonnet__dictionarycombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self Sonnet__DictionaryComboBox*
///
QBackingStore* k_sonnet__dictionarycombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self Sonnet__DictionaryComboBox*
///
QWindow* k_sonnet__dictionarycombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self Sonnet__DictionaryComboBox*
///
QScreen* k_sonnet__dictionarycombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param screen QScreen*
///
void k_sonnet__dictionarycombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_sonnet__dictionarycombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param title const char*
///
void k_sonnet__dictionarycombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* title)
///
void k_sonnet__dictionarycombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param icon QIcon*
///
void k_sonnet__dictionarycombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QIcon* icon)
///
void k_sonnet__dictionarycombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param iconText const char*
///
void k_sonnet__dictionarycombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* iconText)
///
void k_sonnet__dictionarycombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param pos QPoint*
///
void k_sonnet__dictionarycombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QPoint* pos)
///
void k_sonnet__dictionarycombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_sonnet__dictionarycombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_sonnet__dictionarycombobox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_sonnet__dictionarycombobox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sonnet__dictionarycombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sonnet__dictionarycombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_sonnet__dictionarycombobox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sonnet__dictionarycombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sonnet__dictionarycombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param rectangle QRect*
///
QPixmap* k_sonnet__dictionarycombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_sonnet__dictionarycombobox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_sonnet__dictionarycombobox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
/// @param enable bool
///
void k_sonnet__dictionarycombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_sonnet__dictionarycombobox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_sonnet__dictionarycombobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_sonnet__dictionarycombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_sonnet__dictionarycombobox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char* k_sonnet__dictionarycombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param name char*
///
void k_sonnet__dictionarycombobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param b bool
///
bool k_sonnet__dictionarycombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Sonnet__DictionaryComboBox*
///
QThread* k_sonnet__dictionarycombobox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param thread QThread*
///
bool k_sonnet__dictionarycombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param interval int
///
int32_t k_sonnet__dictionarycombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id int
///
void k_sonnet__dictionarycombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param id enum Qt__TimerId
///
void k_sonnet__dictionarycombobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Sonnet__DictionaryComboBox*
///
/// @return libqt_list of QObject*
///
libqt_list k_sonnet__dictionarycombobox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param filterObj QObject*
///
void k_sonnet__dictionarycombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param obj QObject*
///
void k_sonnet__dictionarycombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sonnet__dictionarycombobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sonnet__dictionarycombobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sonnet__dictionarycombobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sonnet__dictionarycombobox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool k_sonnet__dictionarycombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param name const char*
///
QVariant* k_sonnet__dictionarycombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Sonnet__DictionaryComboBox*
///
const char** k_sonnet__dictionarycombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__DictionaryComboBox*
///
QBindingStorage* k_sonnet__dictionarycombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__DictionaryComboBox*
///
const QBindingStorage* k_sonnet__dictionarycombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self)
///
void k_sonnet__dictionarycombobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Sonnet__DictionaryComboBox*
///
QObject* k_sonnet__dictionarycombobox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param classname const char*
///
bool k_sonnet__dictionarycombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_sonnet__dictionarycombobox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_sonnet__dictionarycombobox_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_sonnet__dictionarycombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sonnet__dictionarycombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QObject*
///
void k_sonnet__dictionarycombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QObject* param1)
///
void k_sonnet__dictionarycombobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self Sonnet__DictionaryComboBox*
///
double k_sonnet__dictionarycombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self Sonnet__DictionaryComboBox*
///
double k_sonnet__dictionarycombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_sonnet__dictionarycombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_sonnet__dictionarycombobox_encode_metric_f(int32_t metric, double value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param model QAbstractItemModel*
///
void k_sonnet__dictionarycombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param model QAbstractItemModel*
///
void k_sonnet__dictionarycombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model)
///
void k_sonnet__dictionarycombobox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_qbase_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QSize* func()
///
void k_sonnet__dictionarycombobox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QSize* k_sonnet__dictionarycombobox_qbase_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QSize* func()
///
void k_sonnet__dictionarycombobox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func()
///
void k_sonnet__dictionarycombobox_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func()
///
void k_sonnet__dictionarycombobox_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
bool k_sonnet__dictionarycombobox_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
bool k_sonnet__dictionarycombobox_qbase_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func(Sonnet__DictionaryComboBox* self, QEvent* event)
///
void k_sonnet__dictionarycombobox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sonnet__dictionarycombobox_input_method_query(void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sonnet__dictionarycombobox_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QVariant* func(Sonnet__DictionaryComboBox* self, enum Qt__InputMethodQuery param1)
///
void k_sonnet__dictionarycombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QFocusEvent*
///
void k_sonnet__dictionarycombobox_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QFocusEvent*
///
void k_sonnet__dictionarycombobox_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QFocusEvent* e)
///
void k_sonnet__dictionarycombobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QFocusEvent*
///
void k_sonnet__dictionarycombobox_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QFocusEvent*
///
void k_sonnet__dictionarycombobox_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QFocusEvent* e)
///
void k_sonnet__dictionarycombobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QEvent*
///
void k_sonnet__dictionarycombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QEvent*
///
void k_sonnet__dictionarycombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QEvent* e)
///
void k_sonnet__dictionarycombobox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QResizeEvent*
///
void k_sonnet__dictionarycombobox_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QResizeEvent*
///
void k_sonnet__dictionarycombobox_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QResizeEvent* e)
///
void k_sonnet__dictionarycombobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QPaintEvent*
///
void k_sonnet__dictionarycombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QPaintEvent*
///
void k_sonnet__dictionarycombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QPaintEvent* e)
///
void k_sonnet__dictionarycombobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QShowEvent*
///
void k_sonnet__dictionarycombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QShowEvent*
///
void k_sonnet__dictionarycombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QShowEvent* e)
///
void k_sonnet__dictionarycombobox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QHideEvent*
///
void k_sonnet__dictionarycombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QHideEvent*
///
void k_sonnet__dictionarycombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QHideEvent* e)
///
void k_sonnet__dictionarycombobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QMouseEvent*
///
void k_sonnet__dictionarycombobox_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QMouseEvent*
///
void k_sonnet__dictionarycombobox_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMouseEvent* e)
///
void k_sonnet__dictionarycombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QMouseEvent*
///
void k_sonnet__dictionarycombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QMouseEvent*
///
void k_sonnet__dictionarycombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMouseEvent* e)
///
void k_sonnet__dictionarycombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QKeyEvent*
///
void k_sonnet__dictionarycombobox_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QKeyEvent*
///
void k_sonnet__dictionarycombobox_qbase_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QKeyEvent* e)
///
void k_sonnet__dictionarycombobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QKeyEvent*
///
void k_sonnet__dictionarycombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QKeyEvent*
///
void k_sonnet__dictionarycombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QKeyEvent* e)
///
void k_sonnet__dictionarycombobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QWheelEvent*
///
void k_sonnet__dictionarycombobox_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QWheelEvent*
///
void k_sonnet__dictionarycombobox_qbase_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QWheelEvent* e)
///
void k_sonnet__dictionarycombobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QContextMenuEvent*
///
void k_sonnet__dictionarycombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param e QContextMenuEvent*
///
void k_sonnet__dictionarycombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e)
///
void k_sonnet__dictionarycombobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QInputMethodEvent*
///
void k_sonnet__dictionarycombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 QInputMethodEvent*
///
void k_sonnet__dictionarycombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1)
///
void k_sonnet__dictionarycombobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param option QStyleOptionComboBox*
///
void k_sonnet__dictionarycombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param option QStyleOptionComboBox*
///
void k_sonnet__dictionarycombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option)
///
void k_sonnet__dictionarycombobox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func()
///
void k_sonnet__dictionarycombobox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param visible bool
///
void k_sonnet__dictionarycombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param visible bool
///
void k_sonnet__dictionarycombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, bool visible)
///
void k_sonnet__dictionarycombobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 int
///
int32_t k_sonnet__dictionarycombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 int
///
int32_t k_sonnet__dictionarycombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func(Sonnet__DictionaryComboBox* self, int param1)
///
void k_sonnet__dictionarycombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func()
///
void k_sonnet__dictionarycombobox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QPaintEngine* k_sonnet__dictionarycombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QPaintEngine* k_sonnet__dictionarycombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QPaintEngine* func()
///
void k_sonnet__dictionarycombobox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMouseEvent*
///
void k_sonnet__dictionarycombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMouseEvent*
///
void k_sonnet__dictionarycombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMouseEvent* event)
///
void k_sonnet__dictionarycombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMouseEvent*
///
void k_sonnet__dictionarycombobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMouseEvent*
///
void k_sonnet__dictionarycombobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMouseEvent* event)
///
void k_sonnet__dictionarycombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEnterEvent*
///
void k_sonnet__dictionarycombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEnterEvent*
///
void k_sonnet__dictionarycombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QEnterEvent* event)
///
void k_sonnet__dictionarycombobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
void k_sonnet__dictionarycombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
void k_sonnet__dictionarycombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QEvent* event)
///
void k_sonnet__dictionarycombobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMoveEvent*
///
void k_sonnet__dictionarycombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QMoveEvent*
///
void k_sonnet__dictionarycombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMoveEvent* event)
///
void k_sonnet__dictionarycombobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QCloseEvent*
///
void k_sonnet__dictionarycombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QCloseEvent*
///
void k_sonnet__dictionarycombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QCloseEvent* event)
///
void k_sonnet__dictionarycombobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QTabletEvent*
///
void k_sonnet__dictionarycombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QTabletEvent*
///
void k_sonnet__dictionarycombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QTabletEvent* event)
///
void k_sonnet__dictionarycombobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QActionEvent*
///
void k_sonnet__dictionarycombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QActionEvent*
///
void k_sonnet__dictionarycombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QActionEvent* event)
///
void k_sonnet__dictionarycombobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragEnterEvent*
///
void k_sonnet__dictionarycombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragEnterEvent*
///
void k_sonnet__dictionarycombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event)
///
void k_sonnet__dictionarycombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragMoveEvent*
///
void k_sonnet__dictionarycombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragMoveEvent*
///
void k_sonnet__dictionarycombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event)
///
void k_sonnet__dictionarycombobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragLeaveEvent*
///
void k_sonnet__dictionarycombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDragLeaveEvent*
///
void k_sonnet__dictionarycombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event)
///
void k_sonnet__dictionarycombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDropEvent*
///
void k_sonnet__dictionarycombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QDropEvent*
///
void k_sonnet__dictionarycombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QDropEvent* event)
///
void k_sonnet__dictionarycombobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sonnet__dictionarycombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sonnet__dictionarycombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func(Sonnet__DictionaryComboBox* self, const char* eventType, void* message, intptr_t* result)
///
void k_sonnet__dictionarycombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sonnet__dictionarycombobox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sonnet__dictionarycombobox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func(Sonnet__DictionaryComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_sonnet__dictionarycombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
///
void k_sonnet__dictionarycombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param painter QPainter*
///
void k_sonnet__dictionarycombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QPainter* painter)
///
void k_sonnet__dictionarycombobox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_sonnet__dictionarycombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_sonnet__dictionarycombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QPaintDevice* func(Sonnet__DictionaryComboBox* self, QPoint* offset)
///
void k_sonnet__dictionarycombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QPainter* k_sonnet__dictionarycombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QPainter* k_sonnet__dictionarycombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QPainter* func()
///
void k_sonnet__dictionarycombobox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param next bool
///
bool k_sonnet__dictionarycombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param next bool
///
bool k_sonnet__dictionarycombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func(Sonnet__DictionaryComboBox* self, bool next)
///
void k_sonnet__dictionarycombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sonnet__dictionarycombobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sonnet__dictionarycombobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event)
///
void k_sonnet__dictionarycombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QTimerEvent*
///
void k_sonnet__dictionarycombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QTimerEvent*
///
void k_sonnet__dictionarycombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QTimerEvent* event)
///
void k_sonnet__dictionarycombobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QChildEvent*
///
void k_sonnet__dictionarycombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QChildEvent*
///
void k_sonnet__dictionarycombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QChildEvent* event)
///
void k_sonnet__dictionarycombobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
void k_sonnet__dictionarycombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param event QEvent*
///
void k_sonnet__dictionarycombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QEvent* event)
///
void k_sonnet__dictionarycombobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
void k_sonnet__dictionarycombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
void k_sonnet__dictionarycombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMetaMethod* signal)
///
void k_sonnet__dictionarycombobox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
void k_sonnet__dictionarycombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
void k_sonnet__dictionarycombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, QMetaMethod* signal)
///
void k_sonnet__dictionarycombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func()
///
void k_sonnet__dictionarycombobox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func()
///
void k_sonnet__dictionarycombobox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func()
///
void k_sonnet__dictionarycombobox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func()
///
void k_sonnet__dictionarycombobox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
bool k_sonnet__dictionarycombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func()
///
void k_sonnet__dictionarycombobox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QObject* k_sonnet__dictionarycombobox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
QObject* k_sonnet__dictionarycombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback QObject* func()
///
void k_sonnet__dictionarycombobox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
///
int32_t k_sonnet__dictionarycombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func()
///
void k_sonnet__dictionarycombobox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal const char*
///
int32_t k_sonnet__dictionarycombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal const char*
///
int32_t k_sonnet__dictionarycombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback int32_t func(Sonnet__DictionaryComboBox* self, const char* signal)
///
void k_sonnet__dictionarycombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
bool k_sonnet__dictionarycombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param signal QMetaMethod*
///
bool k_sonnet__dictionarycombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback bool func(Sonnet__DictionaryComboBox* self, QMetaMethod* signal)
///
void k_sonnet__dictionarycombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sonnet__dictionarycombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sonnet__dictionarycombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback double func(Sonnet__DictionaryComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_sonnet__dictionarycombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Sonnet__DictionaryComboBox*
/// @param callback void func(Sonnet__DictionaryComboBox* self, const char* objectName)
///
void k_sonnet__dictionarycombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Sonnet__DictionaryComboBox*
///
void k_sonnet__dictionarycombobox_delete(void* self);

#endif
