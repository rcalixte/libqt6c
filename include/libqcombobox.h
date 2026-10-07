#pragma once
#ifndef LIBQCOMBOBOX_H
#define LIBQCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html)

/// q_combobox_new constructs a new QComboBox object.
///
/// @param parent QWidget*
///
QComboBox* q_combobox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html)

/// q_combobox_new2 constructs a new QComboBox object.
///
QComboBox* q_combobox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QComboBox*
///
const QMetaObject* q_combobox_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback const QMetaObject* func(const QComboBox* self)
///
void q_combobox_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QComboBox*
///
const QMetaObject* q_combobox_super_meta_object(const void* self);

/// @param self QComboBox*
/// @param param1 const char*
///
void* q_combobox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void* func(QComboBox* self, const char* param1)
///
void q_combobox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QComboBox*
/// @param param1 const char*
///
void* q_combobox_super_metacast(void* self, const char* param1);

/// @param self QComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_combobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_combobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_combobox_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_combobox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self const QComboBox*
///
int32_t q_combobox_max_visible_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self QComboBox*
/// @param maxItems int
///
void q_combobox_set_max_visible_items(void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self const QComboBox*
///
int32_t q_combobox_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self QComboBox*
/// @param max int
///
void q_combobox_set_max_count(void* self, int max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self const QComboBox*
///
int32_t q_combobox_max_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self const QComboBox*
///
bool q_combobox_duplicates_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self QComboBox*
/// @param enable bool
///
void q_combobox_set_duplicates_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self QComboBox*
/// @param frame bool
///
void q_combobox_set_frame(void* self, bool frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self const QComboBox*
///
bool q_combobox_has_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self const QComboBox*
/// @param text const char*
///
int32_t q_combobox_find_text(const void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QComboBox*
/// @param data QVariant*
///
int32_t q_combobox_find_data(const void* self, const void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self const QComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t q_combobox_insert_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self QComboBox*
/// @param policy enum QComboBox__InsertPolicy
///
void q_combobox_set_insert_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self const QComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t q_combobox_size_adjust_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self QComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void q_combobox_set_size_adjust_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self const QComboBox*
///
int32_t q_combobox_minimum_contents_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self QComboBox*
/// @param characters int
///
void q_combobox_set_minimum_contents_length(void* self, int characters);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self const QComboBox*
///
QSize* q_combobox_icon_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self QComboBox*
/// @param size QSize*
///
void q_combobox_set_icon_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self QComboBox*
/// @param placeholderText const char*
///
void q_combobox_set_placeholder_text(void* self, const char* placeholderText);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_placeholder_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self const QComboBox*
///
bool q_combobox_is_editable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// @param self QComboBox*
/// @param editable bool
///
void q_combobox_set_editable(void* self, bool editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// @param self QComboBox*
/// @param edit QLineEdit*
///
void q_combobox_set_line_edit(void* self, void* edit);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self const QComboBox*
///
QLineEdit* q_combobox_line_edit(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self QComboBox*
/// @param v QValidator*
///
void q_combobox_set_validator(void* self, const void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self const QComboBox*
///
const QValidator* q_combobox_validator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self QComboBox*
/// @param c QCompleter*
///
void q_combobox_set_completer(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self const QComboBox*
///
QCompleter* q_combobox_completer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self const QComboBox*
///
QAbstractItemDelegate* q_combobox_item_delegate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self QComboBox*
/// @param delegate QAbstractItemDelegate*
///
void q_combobox_set_item_delegate(void* self, void* delegate);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self const QComboBox*
///
QAbstractItemModel* q_combobox_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// @param self QComboBox*
/// @param model QAbstractItemModel*
///
void q_combobox_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QAbstractItemModel* model)
///
void q_combobox_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param model QAbstractItemModel*
///
void q_combobox_super_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self const QComboBox*
///
QModelIndex* q_combobox_root_model_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self QComboBox*
/// @param index QModelIndex*
///
void q_combobox_set_root_model_index(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self const QComboBox*
///
int32_t q_combobox_model_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self QComboBox*
/// @param visibleColumn int
///
void q_combobox_set_model_column(void* self, int visibleColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self const QComboBox*
///
int32_t q_combobox_current_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_current_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self const QComboBox*
///
QVariant* q_combobox_current_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
/// @param index int
///
const char* q_combobox_item_text(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self const QComboBox*
/// @param index int
///
QIcon* q_combobox_item_icon(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self const QComboBox*
/// @param index int
///
QVariant* q_combobox_item_data(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QComboBox*
/// @param text const char*
///
void q_combobox_add_item(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QComboBox*
/// @param icon QIcon*
/// @param text const char*
///
void q_combobox_add_item2(void* self, const void* icon, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self QComboBox*
/// @param texts const char**
///
void q_combobox_add_items(void* self, const char* texts[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QComboBox*
/// @param index int
/// @param text const char*
///
void q_combobox_insert_item(void* self, int index, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void q_combobox_insert_item2(void* self, int index, const void* icon, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self QComboBox*
/// @param index int
/// @param texts const char**
///
void q_combobox_insert_items(void* self, int index, const char* texts[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_insert_separator(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_remove_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self QComboBox*
/// @param index int
/// @param text const char*
///
void q_combobox_set_item_text(void* self, int index, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self QComboBox*
/// @param index int
/// @param icon QIcon*
///
void q_combobox_set_item_icon(void* self, int index, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QComboBox*
/// @param index int
/// @param value QVariant*
///
void q_combobox_set_item_data(void* self, int index, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self const QComboBox*
///
QAbstractItemView* q_combobox_view(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self QComboBox*
/// @param itemView QAbstractItemView*
///
void q_combobox_set_view(void* self, void* itemView);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// @param self const QComboBox*
///
QSize* q_combobox_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback QSize* func(const QComboBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_combobox_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QComboBox*
///
QSize* q_combobox_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// @param self const QComboBox*
///
QSize* q_combobox_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback QSize* func(const QComboBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_combobox_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QComboBox*
///
QSize* q_combobox_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// @param self QComboBox*
///
void q_combobox_show_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_show_popup(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Base class method implementation
///
/// @param self QComboBox*
///
void q_combobox_super_show_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// @param self QComboBox*
///
void q_combobox_hide_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_hide_popup(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Base class method implementation
///
/// @param self QComboBox*
///
void q_combobox_super_hide_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// @param self QComboBox*
/// @param event QEvent*
///
bool q_combobox_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self, QEvent* event)
///
void q_combobox_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param event QEvent*
///
bool q_combobox_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self const QComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_combobox_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback QVariant* func(const QComboBox* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_combobox_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self const QComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_combobox_super_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self const QComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_combobox_input_method_query2(const void* self, int32_t query, const void* argument);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self QComboBox*
///
void q_combobox_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self QComboBox*
///
void q_combobox_clear_edit_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self QComboBox*
/// @param text const char*
///
void q_combobox_set_edit_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self QComboBox*
/// @param text const char*
///
void q_combobox_set_current_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self QComboBox*
/// @param param1 const char*
///
void q_combobox_edit_text_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* param1)
///
void q_combobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_activated(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, int index)
///
void q_combobox_on_activated(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self QComboBox*
/// @param param1 const char*
///
void q_combobox_text_activated(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* param1)
///
void q_combobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_highlighted(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, int index)
///
void q_combobox_on_highlighted(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self QComboBox*
/// @param param1 const char*
///
void q_combobox_text_highlighted(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* param1)
///
void q_combobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self QComboBox*
/// @param index int
///
void q_combobox_current_index_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, int index)
///
void q_combobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self QComboBox*
/// @param param1 const char*
///
void q_combobox_current_text_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* param1)
///
void q_combobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// @param self QComboBox*
/// @param e QFocusEvent*
///
void q_combobox_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QFocusEvent* e)
///
void q_combobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QFocusEvent*
///
void q_combobox_super_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// @param self QComboBox*
/// @param e QFocusEvent*
///
void q_combobox_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QFocusEvent* e)
///
void q_combobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QFocusEvent*
///
void q_combobox_super_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// @param self QComboBox*
/// @param e QEvent*
///
void q_combobox_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QEvent* e)
///
void q_combobox_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QEvent*
///
void q_combobox_super_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// @param self QComboBox*
/// @param e QResizeEvent*
///
void q_combobox_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QResizeEvent* e)
///
void q_combobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QResizeEvent*
///
void q_combobox_super_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// @param self QComboBox*
/// @param e QPaintEvent*
///
void q_combobox_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QPaintEvent* e)
///
void q_combobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QPaintEvent*
///
void q_combobox_super_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// @param self QComboBox*
/// @param e QShowEvent*
///
void q_combobox_show_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QShowEvent* e)
///
void q_combobox_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QShowEvent*
///
void q_combobox_super_show_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// @param self QComboBox*
/// @param e QHideEvent*
///
void q_combobox_hide_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QHideEvent* e)
///
void q_combobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QHideEvent*
///
void q_combobox_super_hide_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// @param self QComboBox*
/// @param e QMouseEvent*
///
void q_combobox_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMouseEvent* e)
///
void q_combobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QMouseEvent*
///
void q_combobox_super_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// @param self QComboBox*
/// @param e QMouseEvent*
///
void q_combobox_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMouseEvent* e)
///
void q_combobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QMouseEvent*
///
void q_combobox_super_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// @param self QComboBox*
/// @param e QKeyEvent*
///
void q_combobox_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QKeyEvent* e)
///
void q_combobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QKeyEvent*
///
void q_combobox_super_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// @param self QComboBox*
/// @param e QKeyEvent*
///
void q_combobox_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QKeyEvent* e)
///
void q_combobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QKeyEvent*
///
void q_combobox_super_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// @param self QComboBox*
/// @param e QWheelEvent*
///
void q_combobox_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QWheelEvent* e)
///
void q_combobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QWheelEvent*
///
void q_combobox_super_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// @param self QComboBox*
/// @param e QContextMenuEvent*
///
void q_combobox_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QContextMenuEvent* e)
///
void q_combobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param e QContextMenuEvent*
///
void q_combobox_super_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// @param self QComboBox*
/// @param param1 QInputMethodEvent*
///
void q_combobox_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QInputMethodEvent* param1)
///
void q_combobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QComboBox*
/// @param param1 QInputMethodEvent*
///
void q_combobox_super_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// @param self const QComboBox*
/// @param option QStyleOptionComboBox*
///
void q_combobox_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QComboBox*
/// @param callback void func(const QComboBox* self, QStyleOptionComboBox* option)
///
void q_combobox_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self const QComboBox*
/// @param option QStyleOptionComboBox*
///
void q_combobox_super_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_combobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_combobox_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self const QComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_combobox_find_text2(const void* self, const char* text, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t q_combobox_find_data2(const void* self, const void* data, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_combobox_find_data3(const void* self, const void* data, int role, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self const QComboBox*
/// @param role int
///
QVariant* q_combobox_current_data1(const void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self const QComboBox*
/// @param index int
/// @param role int
///
QVariant* q_combobox_item_data2(const void* self, int index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void q_combobox_add_item22(void* self, const char* text, const void* userData);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void q_combobox_add_item3(void* self, const void* icon, const char* text, const void* userData);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void q_combobox_insert_item3(void* self, int index, const char* text, const void* userData);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void q_combobox_insert_item4(void* self, int index, const void* icon, const char* text, const void* userData);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void q_combobox_set_item_data3(void* self, int index, const void* value, int role);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QComboBox*
///
QPaintDevice* q_combobox_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QComboBox object
///
/// @param _qpaintdevice QPaintDevice*
///
QComboBox* q_combobox_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QComboBox*
///
uintptr_t q_combobox_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QComboBox*
///
void q_combobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QComboBox*
///
uintptr_t q_combobox_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QComboBox*
///
uintptr_t q_combobox_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QComboBox*
///
QStyle* q_combobox_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QComboBox*
/// @param style QStyle*
///
void q_combobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QComboBox*
///
bool q_combobox_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QComboBox*
///
bool q_combobox_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QComboBox*
///
bool q_combobox_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_combobox_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QComboBox*
/// @param windowModality enum Qt__WindowModality
///
void q_combobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QComboBox*
///
bool q_combobox_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
///
bool q_combobox_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QComboBox*
/// @param enabled bool
///
void q_combobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QComboBox*
/// @param disabled bool
///
void q_combobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QComboBox*
/// @param windowModified bool
///
void q_combobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QComboBox*
///
QRect* q_combobox_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QComboBox*
///
const QRect* q_combobox_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QComboBox*
///
QRect* q_combobox_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QComboBox*
///
int32_t q_combobox_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QComboBox*
///
int32_t q_combobox_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QComboBox*
///
QPoint* q_combobox_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QComboBox*
///
QSize* q_combobox_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QComboBox*
///
QSize* q_combobox_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QComboBox*
///
int32_t q_combobox_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QComboBox*
///
int32_t q_combobox_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QComboBox*
///
QRect* q_combobox_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QComboBox*
///
QRect* q_combobox_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QComboBox*
///
QRegion* q_combobox_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QComboBox*
///
QSize* q_combobox_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QComboBox*
///
QSize* q_combobox_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QComboBox*
///
int32_t q_combobox_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QComboBox*
///
int32_t q_combobox_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QComboBox*
///
int32_t q_combobox_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QComboBox*
///
int32_t q_combobox_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QComboBox*
/// @param minimumSize QSize*
///
void q_combobox_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QComboBox*
/// @param minw int
/// @param minh int
///
void q_combobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QComboBox*
/// @param maximumSize QSize*
///
void q_combobox_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QComboBox*
/// @param maxw int
/// @param maxh int
///
void q_combobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QComboBox*
/// @param minw int
///
void q_combobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QComboBox*
/// @param minh int
///
void q_combobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QComboBox*
/// @param maxw int
///
void q_combobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QComboBox*
/// @param maxh int
///
void q_combobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QComboBox*
///
QSize* q_combobox_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QComboBox*
/// @param sizeIncrement QSize*
///
void q_combobox_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QComboBox*
/// @param w int
/// @param h int
///
void q_combobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QComboBox*
///
QSize* q_combobox_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QComboBox*
/// @param baseSize QSize*
///
void q_combobox_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QComboBox*
/// @param basew int
/// @param baseh int
///
void q_combobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QComboBox*
/// @param fixedSize QSize*
///
void q_combobox_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QComboBox*
/// @param w int
/// @param h int
///
void q_combobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QComboBox*
/// @param w int
///
void q_combobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QComboBox*
/// @param h int
///
void q_combobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QComboBox*
/// @param param1 QPointF*
///
QPointF* q_combobox_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QComboBox*
/// @param param1 QPoint*
///
QPoint* q_combobox_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QComboBox*
/// @param param1 QPointF*
///
QPointF* q_combobox_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QComboBox*
/// @param param1 QPoint*
///
QPoint* q_combobox_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QComboBox*
/// @param param1 QPointF*
///
QPointF* q_combobox_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QComboBox*
/// @param param1 QPoint*
///
QPoint* q_combobox_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QComboBox*
/// @param param1 QPointF*
///
QPointF* q_combobox_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QComboBox*
/// @param param1 QPoint*
///
QPoint* q_combobox_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_combobox_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_combobox_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_combobox_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_combobox_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QComboBox*
///
const QPalette* q_combobox_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QComboBox*
/// @param palette QPalette*
///
void q_combobox_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QComboBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_combobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_combobox_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QComboBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_combobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_combobox_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QComboBox*
///
const QFont* q_combobox_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QComboBox*
/// @param font QFont*
///
void q_combobox_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QComboBox*
///
QFontMetrics* q_combobox_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QComboBox*
///
QFontInfo* q_combobox_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QComboBox*
///
QCursor* q_combobox_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QComboBox*
/// @param cursor QCursor*
///
void q_combobox_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QComboBox*
///
void q_combobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QComboBox*
/// @param enable bool
///
void q_combobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QComboBox*
///
bool q_combobox_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QComboBox*
///
bool q_combobox_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QComboBox*
/// @param enable bool
///
void q_combobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QComboBox*
///
bool q_combobox_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QComboBox*
/// @param mask QBitmap*
///
void q_combobox_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QComboBox*
/// @param mask QRegion*
///
void q_combobox_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QComboBox*
///
QRegion* q_combobox_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QComboBox*
///
void q_combobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param target QPaintDevice*
///
void q_combobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param painter QPainter*
///
void q_combobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QComboBox*
///
QPixmap* q_combobox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QComboBox*
///
QGraphicsEffect* q_combobox_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QComboBox*
/// @param effect QGraphicsEffect*
///
void q_combobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QComboBox*
/// @param type enum Qt__GestureType
///
void q_combobox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QComboBox*
/// @param type enum Qt__GestureType
///
void q_combobox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QComboBox*
/// @param windowTitle const char*
///
void q_combobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QComboBox*
/// @param styleSheet const char*
///
void q_combobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QComboBox*
/// @param icon QIcon*
///
void q_combobox_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QComboBox*
///
QIcon* q_combobox_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QComboBox*
/// @param windowIconText const char*
///
void q_combobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QComboBox*
/// @param windowRole const char*
///
void q_combobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QComboBox*
/// @param filePath const char*
///
void q_combobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QComboBox*
/// @param level double
///
void q_combobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QComboBox*
///
double q_combobox_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QComboBox*
///
bool q_combobox_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QComboBox*
/// @param toolTip const char*
///
void q_combobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QComboBox*
/// @param msec int
///
void q_combobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QComboBox*
///
int32_t q_combobox_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QComboBox*
/// @param statusTip const char*
///
void q_combobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QComboBox*
/// @param whatsThis const char*
///
void q_combobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QComboBox*
/// @param name const char*
///
void q_combobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QComboBox*
/// @param description const char*
///
void q_combobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QComboBox*
/// @param direction enum Qt__LayoutDirection
///
void q_combobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_combobox_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QComboBox*
///
void q_combobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QComboBox*
/// @param locale QLocale*
///
void q_combobox_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QComboBox*
///
QLocale* q_combobox_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QComboBox*
///
void q_combobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QComboBox*
///
bool q_combobox_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QComboBox*
///
bool q_combobox_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QComboBox*
///
void q_combobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QComboBox*
///
bool q_combobox_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QComboBox*
///
void q_combobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QComboBox*
///
void q_combobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QComboBox*
/// @param reason enum Qt__FocusReason
///
void q_combobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_combobox_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QComboBox*
/// @param policy enum Qt__FocusPolicy
///
void q_combobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QComboBox*
///
bool q_combobox_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_combobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QComboBox*
/// @param focusProxy QWidget*
///
void q_combobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_combobox_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QComboBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_combobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QComboBox*
///
void q_combobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QComboBox*
/// @param param1 QCursor*
///
void q_combobox_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QComboBox*
///
void q_combobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QComboBox*
///
void q_combobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QComboBox*
///
void q_combobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QComboBox*
/// @param key QKeySequence*
///
int32_t q_combobox_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QComboBox*
/// @param id int
///
void q_combobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QComboBox*
/// @param id int
///
void q_combobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QComboBox*
/// @param id int
///
void q_combobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_combobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_combobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QComboBox*
///
bool q_combobox_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QComboBox*
/// @param enable bool
///
void q_combobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QComboBox*
///
QGraphicsProxyWidget* q_combobox_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QComboBox*
///
void q_combobox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QComboBox*
///
void q_combobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_combobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QComboBox*
/// @param param1 QRect*
///
void q_combobox_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QComboBox*
/// @param param1 QRegion*
///
void q_combobox_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_combobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QComboBox*
/// @param param1 QRect*
///
void q_combobox_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QComboBox*
/// @param param1 QRegion*
///
void q_combobox_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QComboBox*
/// @param hidden bool
///
void q_combobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QComboBox*
///
void q_combobox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QComboBox*
///
void q_combobox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QComboBox*
///
void q_combobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QComboBox*
///
void q_combobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QComboBox*
///
void q_combobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QComboBox*
///
void q_combobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QComboBox*
///
bool q_combobox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QComboBox*
///
void q_combobox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QComboBox*
///
void q_combobox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QComboBox*
/// @param param1 QWidget*
///
void q_combobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QComboBox*
/// @param x int
/// @param y int
///
void q_combobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QComboBox*
/// @param param1 QPoint*
///
void q_combobox_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QComboBox*
/// @param w int
/// @param h int
///
void q_combobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QComboBox*
/// @param param1 QSize*
///
void q_combobox_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_combobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QComboBox*
/// @param geometry QRect*
///
void q_combobox_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QComboBox*
/// @param geometry const char*
///
bool q_combobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QComboBox*
///
void q_combobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QComboBox*
///
bool q_combobox_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QComboBox*
/// @param param1 QWidget*
///
bool q_combobox_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QComboBox*
///
bool q_combobox_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QComboBox*
///
bool q_combobox_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QComboBox*
///
bool q_combobox_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QComboBox*
///
bool q_combobox_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_combobox_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QComboBox*
/// @param state flag of enum Qt__WindowState
///
void q_combobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QComboBox*
/// @param state flag of enum Qt__WindowState
///
void q_combobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QComboBox*
///
QSizePolicy* q_combobox_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QComboBox*
/// @param sizePolicy QSizePolicy*
///
void q_combobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_combobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QComboBox*
///
QRegion* q_combobox_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_combobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QComboBox*
/// @param margins QMargins*
///
void q_combobox_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QComboBox*
///
QMargins* q_combobox_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QComboBox*
///
QRect* q_combobox_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QComboBox*
///
QLayout* q_combobox_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QComboBox*
/// @param layout QLayout*
///
void q_combobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QComboBox*
///
void q_combobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QComboBox*
/// @param parent QWidget*
///
void q_combobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_combobox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QComboBox*
/// @param dx int
/// @param dy int
///
void q_combobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_combobox_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QComboBox*
///
bool q_combobox_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QComboBox*
/// @param on bool
///
void q_combobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QComboBox*
/// @param action QAction*
///
void q_combobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QComboBox*
/// @param actions libqt_list of QAction*
///
void q_combobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QComboBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_combobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QComboBox*
/// @param before QAction*
/// @param action QAction*
///
void q_combobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QComboBox*
/// @param action QAction*
///
void q_combobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QComboBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_combobox_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QComboBox*
/// @param text const char*
///
QAction* q_combobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QComboBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_combobox_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_combobox_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_combobox_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QComboBox*
///
QWidget* q_combobox_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_combobox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QComboBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_combobox_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QComboBox*
/// @param param1 enum Qt__WindowType
///
void q_combobox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_combobox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QComboBox*
///
/// @return enum Qt__WindowType
///
int32_t q_combobox_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_combobox_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QComboBox*
/// @param x int
/// @param y int
///
QWidget* q_combobox_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QComboBox*
/// @param p QPoint*
///
QWidget* q_combobox_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QComboBox*
/// @param p QPointF*
///
QWidget* q_combobox_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_combobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_combobox_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QComboBox*
///
void q_combobox_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QComboBox*
/// @param child QWidget*
///
bool q_combobox_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QComboBox*
///
bool q_combobox_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QComboBox*
/// @param enabled bool
///
void q_combobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QComboBox*
///
QBackingStore* q_combobox_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QComboBox*
///
QWindow* q_combobox_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QComboBox*
///
QScreen* q_combobox_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QComboBox*
/// @param screen QScreen*
///
void q_combobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_combobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QComboBox*
/// @param title const char*
///
void q_combobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* title)
///
void q_combobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QComboBox*
/// @param icon QIcon*
///
void q_combobox_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QIcon* icon)
///
void q_combobox_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QComboBox*
/// @param iconText const char*
///
void q_combobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* iconText)
///
void q_combobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QComboBox*
/// @param pos QPoint*
///
void q_combobox_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QPoint* pos)
///
void q_combobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_combobox_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_combobox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_combobox_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_combobox_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_combobox_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_combobox_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_combobox_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_combobox_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QComboBox*
/// @param rectangle QRect*
///
QPixmap* q_combobox_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_combobox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_combobox_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QComboBox*
/// @param id int
/// @param enable bool
///
void q_combobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QComboBox*
/// @param id int
/// @param enable bool
///
void q_combobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_combobox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_combobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_combobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_combobox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QComboBox*
///
const char* q_combobox_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QComboBox*
/// @param name const char*
///
void q_combobox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QComboBox*
///
bool q_combobox_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QComboBox*
///
bool q_combobox_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QComboBox*
///
bool q_combobox_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QComboBox*
///
bool q_combobox_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QComboBox*
/// @param b bool
///
bool q_combobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QComboBox*
///
QThread* q_combobox_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QComboBox*
/// @param thread QThread*
///
bool q_combobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QComboBox*
/// @param interval int
///
int32_t q_combobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QComboBox*
/// @param time int64_t of nanoseconds
///
int32_t q_combobox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QComboBox*
/// @param id int
///
void q_combobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QComboBox*
/// @param id enum Qt__TimerId
///
void q_combobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QComboBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_combobox_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QComboBox*
/// @param filterObj QObject*
///
void q_combobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QComboBox*
/// @param obj QObject*
///
void q_combobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_combobox_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_combobox_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_combobox_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_combobox_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_combobox_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
///
bool q_combobox_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
/// @param receiver QObject*
///
bool q_combobox_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_combobox_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QComboBox*
///
void q_combobox_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QComboBox*
///
void q_combobox_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_combobox_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QComboBox*
/// @param name const char*
///
QVariant* q_combobox_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QComboBox*
///
const char** q_combobox_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QComboBox*
///
QBindingStorage* q_combobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QComboBox*
///
const QBindingStorage* q_combobox_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QComboBox*
///
void q_combobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QComboBox*
///
QObject* q_combobox_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QComboBox*
/// @param classname const char*
///
bool q_combobox_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QComboBox*
///
void q_combobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_combobox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QComboBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_combobox_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_combobox_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_combobox_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_combobox_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
/// @param signal const char*
///
bool q_combobox_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_combobox_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_combobox_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QComboBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_combobox_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QComboBox*
/// @param param1 QObject*
///
void q_combobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QObject* param1)
///
void q_combobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QComboBox*
///
bool q_combobox_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QComboBox*
///
int32_t q_combobox_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QComboBox*
///
int32_t q_combobox_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QComboBox*
///
int32_t q_combobox_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QComboBox*
///
int32_t q_combobox_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QComboBox*
///
int32_t q_combobox_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QComboBox*
///
int32_t q_combobox_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QComboBox*
///
double q_combobox_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QComboBox*
///
double q_combobox_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QComboBox*
///
int32_t q_combobox_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QComboBox*
///
int32_t q_combobox_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_combobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_combobox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
int32_t q_combobox_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
int32_t q_combobox_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self)
///
void q_combobox_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param visible bool
///
void q_combobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param visible bool
///
void q_combobox_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, bool visible)
///
void q_combobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param param1 int
///
int32_t q_combobox_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param param1 int
///
int32_t q_combobox_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self, int param1)
///
void q_combobox_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
bool q_combobox_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
bool q_combobox_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self)
///
void q_combobox_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
QPaintEngine* q_combobox_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
QPaintEngine* q_combobox_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback QPaintEngine* func(QComboBox* self)
///
void q_combobox_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QMouseEvent*
///
void q_combobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QMouseEvent*
///
void q_combobox_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMouseEvent* event)
///
void q_combobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QMouseEvent*
///
void q_combobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QMouseEvent*
///
void q_combobox_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMouseEvent* event)
///
void q_combobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QEnterEvent*
///
void q_combobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QEnterEvent*
///
void q_combobox_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QEnterEvent* event)
///
void q_combobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QEvent*
///
void q_combobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QEvent*
///
void q_combobox_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QEvent* event)
///
void q_combobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QMoveEvent*
///
void q_combobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QMoveEvent*
///
void q_combobox_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMoveEvent* event)
///
void q_combobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QCloseEvent*
///
void q_combobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QCloseEvent*
///
void q_combobox_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QCloseEvent* event)
///
void q_combobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QTabletEvent*
///
void q_combobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QTabletEvent*
///
void q_combobox_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QTabletEvent* event)
///
void q_combobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QActionEvent*
///
void q_combobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QActionEvent*
///
void q_combobox_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QActionEvent* event)
///
void q_combobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragEnterEvent*
///
void q_combobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragEnterEvent*
///
void q_combobox_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QDragEnterEvent* event)
///
void q_combobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragMoveEvent*
///
void q_combobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragMoveEvent*
///
void q_combobox_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QDragMoveEvent* event)
///
void q_combobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragLeaveEvent*
///
void q_combobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QDragLeaveEvent*
///
void q_combobox_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QDragLeaveEvent* event)
///
void q_combobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QDropEvent*
///
void q_combobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QDropEvent*
///
void q_combobox_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QDropEvent* event)
///
void q_combobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_combobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_combobox_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_combobox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_combobox_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_combobox_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_combobox_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param painter QPainter*
///
void q_combobox_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param painter QPainter*
///
void q_combobox_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QPainter* painter)
///
void q_combobox_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_combobox_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_combobox_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback QPaintDevice* func(QComboBox* self, QPoint* offset)
///
void q_combobox_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
QPainter* q_combobox_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
QPainter* q_combobox_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback QPainter* func(QComboBox* self)
///
void q_combobox_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param next bool
///
bool q_combobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param next bool
///
bool q_combobox_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self, bool next)
///
void q_combobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_combobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_combobox_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self, QObject* watched, QEvent* event)
///
void q_combobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QTimerEvent*
///
void q_combobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QTimerEvent*
///
void q_combobox_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QTimerEvent* event)
///
void q_combobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QChildEvent*
///
void q_combobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QChildEvent*
///
void q_combobox_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QChildEvent* event)
///
void q_combobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param event QEvent*
///
void q_combobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param event QEvent*
///
void q_combobox_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QEvent* event)
///
void q_combobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param signal QMetaMethod*
///
void q_combobox_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param signal QMetaMethod*
///
void q_combobox_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMetaMethod* signal)
///
void q_combobox_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
/// @param signal QMetaMethod*
///
void q_combobox_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
/// @param signal QMetaMethod*
///
void q_combobox_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, QMetaMethod* signal)
///
void q_combobox_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
///
void q_combobox_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self)
///
void q_combobox_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
///
bool q_combobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
///
bool q_combobox_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self)
///
void q_combobox_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QComboBox*
///
bool q_combobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QComboBox*
///
bool q_combobox_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self)
///
void q_combobox_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
QObject* q_combobox_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
QObject* q_combobox_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback QObject* func(QComboBox* self)
///
void q_combobox_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
///
int32_t q_combobox_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
///
int32_t q_combobox_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self)
///
void q_combobox_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param signal const char*
///
int32_t q_combobox_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param signal const char*
///
int32_t q_combobox_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback int32_t func(QComboBox* self, const char* signal)
///
void q_combobox_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param signal QMetaMethod*
///
bool q_combobox_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param signal QMetaMethod*
///
bool q_combobox_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback bool func(QComboBox* self, QMetaMethod* signal)
///
void q_combobox_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_combobox_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_combobox_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QComboBox*
/// @param callback double func(QComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_combobox_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QComboBox*
/// @param callback void func(QComboBox* self, const char* objectName)
///
void q_combobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#dtor.QComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self QComboBox*
///
void q_combobox_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#public-types)

typedef enum {
    QCOMBOBOX_INSERTPOLICY_NOINSERT = 0,
    QCOMBOBOX_INSERTPOLICY_INSERTATTOP = 1,
    QCOMBOBOX_INSERTPOLICY_INSERTATCURRENT = 2,
    QCOMBOBOX_INSERTPOLICY_INSERTATBOTTOM = 3,
    QCOMBOBOX_INSERTPOLICY_INSERTAFTERCURRENT = 4,
    QCOMBOBOX_INSERTPOLICY_INSERTBEFORECURRENT = 5,
    QCOMBOBOX_INSERTPOLICY_INSERTALPHABETICALLY = 6
} QComboBox__InsertPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#public-types)

typedef enum {
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTS = 0,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTSONFIRSTSHOW = 1,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOMINIMUMCONTENTSLENGTHWITHICON = 2
} QComboBox__SizeAdjustPolicy;

#endif
