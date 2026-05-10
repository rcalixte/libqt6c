#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONLANGUAGE_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)

/// k_textautocorrectionwidgets__autocorrectionlanguage_new constructs a new TextAutoCorrectionWidgets::AutoCorrectionLanguage object.
///
/// @param parent QWidget*
///
TextAutoCorrectionWidgets__AutoCorrectionLanguage* k_textautocorrectionwidgets__autocorrectionlanguage_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_language(void* self, int index);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_language2(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param language const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_language(void* self, const char* language);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_tr(const char* s);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param maxItems int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param max int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param frame bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param data QVariant*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param policy enum QComboBox__InsertPolicy
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param characters int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param size QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param placeholderText const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param editable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_editable(void* self, bool editable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param edit QLineEdit*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_line_edit(void* self, void* edit);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QLineEdit* k_textautocorrectionwidgets__autocorrectionlanguage_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param v QValidator*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QValidator* k_textautocorrectionwidgets__autocorrectionlanguage_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param c QCompleter*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QCompleter* k_textautocorrectionwidgets__autocorrectionlanguage_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QAbstractItemDelegate* k_textautocorrectionwidgets__autocorrectionlanguage_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param delegate QAbstractItemDelegate*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QAbstractItemModel* k_textautocorrectionwidgets__autocorrectionlanguage_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QModelIndex* k_textautocorrectionwidgets__autocorrectionlanguage_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index QModelIndex*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param visibleColumn int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
QIcon* k_textautocorrectionwidgets__autocorrectionlanguage_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param texts const char**
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param texts const char**
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_items(void* self, int index, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param icon QIcon*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param value QVariant*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QAbstractItemView* k_textautocorrectionwidgets__autocorrectionlanguage_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param itemView QAbstractItemView*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int index)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int index)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int index)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_tr2(const char* s, const char* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_tr3(const char* s, const char* c, int n);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param data QVariant*
/// @param role int
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param role int
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param role int
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
/// @param userData QVariant*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
uintptr_t k_textautocorrectionwidgets__autocorrectionlanguage_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
uintptr_t k_textautocorrectionwidgets__autocorrectionlanguage_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
uintptr_t k_textautocorrectionwidgets__autocorrectionlanguage_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QStyle* k_textautocorrectionwidgets__autocorrectionlanguage_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param style QStyle*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum Qt__WindowModality
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param windowModality enum Qt__WindowModality
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enabled bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param disabled bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param windowModified bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRect* k_textautocorrectionwidgets__autocorrectionlanguage_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QRect* k_textautocorrectionwidgets__autocorrectionlanguage_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRect* k_textautocorrectionwidgets__autocorrectionlanguage_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRect* k_textautocorrectionwidgets__autocorrectionlanguage_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRect* k_textautocorrectionwidgets__autocorrectionlanguage_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRegion* k_textautocorrectionwidgets__autocorrectionlanguage_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param minimumSize QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param minw int
/// @param minh int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param maximumSize QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param maxw int
/// @param maxh int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param minw int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param minh int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param maxw int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param maxh int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param sizeIncrement QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param baseSize QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param basew int
/// @param baseh int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param fixedSize QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param w int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectionlanguage_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectionlanguage_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QPalette* k_textautocorrectionwidgets__autocorrectionlanguage_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param palette QPalette*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QFont* k_textautocorrectionwidgets__autocorrectionlanguage_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param font QFont*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QFontMetrics* k_textautocorrectionwidgets__autocorrectionlanguage_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QFontInfo* k_textautocorrectionwidgets__autocorrectionlanguage_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QCursor* k_textautocorrectionwidgets__autocorrectionlanguage_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param cursor QCursor*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param mask QBitmap*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param mask QRegion*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRegion* k_textautocorrectionwidgets__autocorrectionlanguage_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param target QPaintDevice*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPixmap* k_textautocorrectionwidgets__autocorrectionlanguage_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QGraphicsEffect* k_textautocorrectionwidgets__autocorrectionlanguage_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param effect QGraphicsEffect*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param type enum Qt__GestureType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param type enum Qt__GestureType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param windowTitle const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param styleSheet const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QIcon* k_textautocorrectionwidgets__autocorrectionlanguage_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param windowIconText const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param windowRole const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param filePath const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param level double
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
double k_textautocorrectionwidgets__autocorrectionlanguage_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param toolTip const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param msec int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param statusTip const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param whatsThis const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param name const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param description const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param direction enum Qt__LayoutDirection
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param locale QLocale*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QLocale* k_textautocorrectionwidgets__autocorrectionlanguage_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param reason enum Qt__FocusReason
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param policy enum Qt__FocusPolicy
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param focusProxy QWidget*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QCursor*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param key QKeySequence*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QGraphicsProxyWidget* k_textautocorrectionwidgets__autocorrectionlanguage_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QRect*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QRegion*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QRect*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QRegion*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param hidden bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param x int
/// @param y int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QPoint*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QSize*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param geometry QRect*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
char* k_textautocorrectionwidgets__autocorrectionlanguage_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param geometry char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QWidget*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param state flag of enum Qt__WindowState
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param state flag of enum Qt__WindowState
///
void k_textautocorrectionwidgets__autocorrectionlanguage_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSizePolicy* k_textautocorrectionwidgets__autocorrectionlanguage_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param sizePolicy QSizePolicy*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRegion* k_textautocorrectionwidgets__autocorrectionlanguage_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param margins QMargins*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QMargins* k_textautocorrectionwidgets__autocorrectionlanguage_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QRect* k_textautocorrectionwidgets__autocorrectionlanguage_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QLayout* k_textautocorrectionwidgets__autocorrectionlanguage_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param layout QLayout*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param parent QWidget*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param dx int
/// @param dy int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param actions libqt_list of QAction*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param before QAction*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return libqt_list of QAction*
///
libqt_list k_textautocorrectionwidgets__autocorrectionlanguage_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
///
QAction* k_textautocorrectionwidgets__autocorrectionlanguage_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textautocorrectionwidgets__autocorrectionlanguage_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textautocorrectionwidgets__autocorrectionlanguage_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textautocorrectionwidgets__autocorrectionlanguage_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param type flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param type flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectionlanguage_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return enum Qt__WindowType
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param x int
/// @param y int
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param p QPoint*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param p QPointF*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param child QWidget*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param enabled bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QBackingStore* k_textautocorrectionwidgets__autocorrectionlanguage_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QWindow* k_textautocorrectionwidgets__autocorrectionlanguage_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QScreen* k_textautocorrectionwidgets__autocorrectionlanguage_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param screen QScreen*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param title const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* title)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param icon QIcon*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QIcon* icon)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param iconText const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* iconText)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param pos QPoint*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* pos)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textautocorrectionwidgets__autocorrectionlanguage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param rectangle QRect*
///
QPixmap* k_textautocorrectionwidgets__autocorrectionlanguage_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textautocorrectionwidgets__autocorrectionlanguage_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textautocorrectionwidgets__autocorrectionlanguage_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char* k_textautocorrectionwidgets__autocorrectionlanguage_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param name const char*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param b bool
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QThread* k_textautocorrectionwidgets__autocorrectionlanguage_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param thread QThread*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param interval int
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param time int64_t of nanoseconds
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectionlanguage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param id enum Qt__TimerId
///
void k_textautocorrectionwidgets__autocorrectionlanguage_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
/// @return libqt_list of QObject*
///
libqt_list k_textautocorrectionwidgets__autocorrectionlanguage_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param filterObj QObject*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param obj QObject*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param receiver QObject*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param name const char*
/// @param value QVariant*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param name const char*
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const char** k_textautocorrectionwidgets__autocorrectionlanguage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QBindingStorage* k_textautocorrectionwidgets__autocorrectionlanguage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QBindingStorage* k_textautocorrectionwidgets__autocorrectionlanguage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QObject* k_textautocorrectionwidgets__autocorrectionlanguage_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param classname const char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectionlanguage_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal const char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QObject*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
double k_textautocorrectionwidgets__autocorrectionlanguage_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
double k_textautocorrectionwidgets__autocorrectionlanguage_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textautocorrectionwidgets__autocorrectionlanguage_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_encode_metric_f(int32_t metric, double value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QMetaObject* k_textautocorrectionwidgets__autocorrectionlanguage_meta_object(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_meta_object` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_meta_object k_textautocorrectionwidgets__autocorrectionlanguage_super_meta_object

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
const QMetaObject* k_textautocorrectionwidgets__autocorrectionlanguage_super_meta_object(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback const QMetaObject* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void* k_textautocorrectionwidgets__autocorrectionlanguage_metacast(void* self, const char* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_metacast` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_metacast k_textautocorrectionwidgets__autocorrectionlanguage_super_metacast

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 const char*
///
void* k_textautocorrectionwidgets__autocorrectionlanguage_super_metacast(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void* func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_metacall(void* self, int32_t param1, int param2, void* param3);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_metacall` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_metacall k_textautocorrectionwidgets__autocorrectionlanguage_super_metacall

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param model QAbstractItemModel*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_model(void* self, void* model);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_set_model` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_set_model k_textautocorrectionwidgets__autocorrectionlanguage_super_set_model

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param model QAbstractItemModel*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QAbstractItemModel* model)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_size_hint` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_size_hint k_textautocorrectionwidgets__autocorrectionlanguage_super_size_hint

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_super_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QSize* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_minimum_size_hint` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_minimum_size_hint k_textautocorrectionwidgets__autocorrectionlanguage_super_minimum_size_hint

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QSize* k_textautocorrectionwidgets__autocorrectionlanguage_super_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QSize* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_popup(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_show_popup` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_show_popup k_textautocorrectionwidgets__autocorrectionlanguage_super_show_popup

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_hide_popup(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_popup` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_hide_popup k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_popup

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_event k_textautocorrectionwidgets__autocorrectionlanguage_super_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_query` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_input_method_query k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_query

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_query(void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QVariant* func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, enum Qt__InputMethodQuery param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_focus_in_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_in_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_focus_in_event k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_in_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_focus_out_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_out_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_focus_out_event k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_out_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_change_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_change_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_change_event k_textautocorrectionwidgets__autocorrectionlanguage_super_change_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QResizeEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_resize_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_resize_event k_textautocorrectionwidgets__autocorrectionlanguage_super_resize_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QResizeEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QResizeEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QPaintEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_paint_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_paint_event k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QPaintEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPaintEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QShowEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_show_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_show_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_show_event k_textautocorrectionwidgets__autocorrectionlanguage_super_show_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QShowEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QShowEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QHideEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_hide_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_hide_event k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QHideEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QHideEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_mouse_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_press_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_mouse_press_event k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_press_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_release_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_mouse_release_event k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_release_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_key_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_key_press_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_key_press_event k_textautocorrectionwidgets__autocorrectionlanguage_super_key_press_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_key_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_key_release_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_key_release_event k_textautocorrectionwidgets__autocorrectionlanguage_super_key_release_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QWheelEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_wheel_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_wheel_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_wheel_event k_textautocorrectionwidgets__autocorrectionlanguage_super_wheel_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QWheelEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QWheelEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QContextMenuEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_context_menu_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_context_menu_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_context_menu_event k_textautocorrectionwidgets__autocorrectionlanguage_super_context_menu_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param e QContextMenuEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QContextMenuEvent* e)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QInputMethodEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_input_method_event k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_event

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 QInputMethodEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QInputMethodEvent* param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param option QStyleOptionComboBox*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_init_style_option` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_init_style_option k_textautocorrectionwidgets__autocorrectionlanguage_super_init_style_option

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param option QStyleOptionComboBox*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QStyleOptionComboBox* option)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_dev_type` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_dev_type k_textautocorrectionwidgets__autocorrectionlanguage_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param visible bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_set_visible` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_set_visible k_textautocorrectionwidgets__autocorrectionlanguage_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param visible bool
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool visible)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 int
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_height_for_width` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_height_for_width k_textautocorrectionwidgets__autocorrectionlanguage_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 int
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_has_height_for_width` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_has_height_for_width k_textautocorrectionwidgets__autocorrectionlanguage_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPaintEngine* k_textautocorrectionwidgets__autocorrectionlanguage_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_engine` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_paint_engine k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPaintEngine* k_textautocorrectionwidgets__autocorrectionlanguage_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QPaintEngine* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_double_click_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_mouse_double_click_event k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_mouse_move_event k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_enter_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_enter_event k_textautocorrectionwidgets__autocorrectionlanguage_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEnterEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_leave_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_leave_event k_textautocorrectionwidgets__autocorrectionlanguage_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_move_event k_textautocorrectionwidgets__autocorrectionlanguage_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMoveEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QCloseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_close_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_close_event k_textautocorrectionwidgets__autocorrectionlanguage_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QCloseEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QCloseEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QTabletEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_tablet_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_tablet_event k_textautocorrectionwidgets__autocorrectionlanguage_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QTabletEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTabletEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QActionEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_action_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_action_event k_textautocorrectionwidgets__autocorrectionlanguage_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QActionEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QActionEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_enter_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_drag_enter_event k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragEnterEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_drag_move_event k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragMoveEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragLeaveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_leave_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_drag_leave_event k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDragLeaveEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragLeaveEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDropEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_drop_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_drop_event k_textautocorrectionwidgets__autocorrectionlanguage_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QDropEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDropEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_native_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_native_event k_textautocorrectionwidgets__autocorrectionlanguage_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_metric` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_metric k_textautocorrectionwidgets__autocorrectionlanguage_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_init_painter` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_init_painter k_textautocorrectionwidgets__autocorrectionlanguage_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPainter* painter)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param offset QPoint*
///
QPaintDevice* k_textautocorrectionwidgets__autocorrectionlanguage_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_redirected` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_redirected k_textautocorrectionwidgets__autocorrectionlanguage_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param offset QPoint*
///
QPaintDevice* k_textautocorrectionwidgets__autocorrectionlanguage_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QPaintDevice* func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* offset)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPainter* k_textautocorrectionwidgets__autocorrectionlanguage_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_shared_painter` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_shared_painter k_textautocorrectionwidgets__autocorrectionlanguage_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QPainter* k_textautocorrectionwidgets__autocorrectionlanguage_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QPainter* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param next bool
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_prev_child` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_focus_next_prev_child k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param next bool
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool next)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_event_filter` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_event_filter k_textautocorrectionwidgets__autocorrectionlanguage_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* watched, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QTimerEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_timer_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_timer_event k_textautocorrectionwidgets__autocorrectionlanguage_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QTimerEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTimerEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QChildEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_child_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_child_event k_textautocorrectionwidgets__autocorrectionlanguage_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QChildEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QChildEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_custom_event` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_custom_event k_textautocorrectionwidgets__autocorrectionlanguage_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_connect_notify` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_connect_notify k_textautocorrectionwidgets__autocorrectionlanguage_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_disconnect_notify` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_disconnect_notify k_textautocorrectionwidgets__autocorrectionlanguage_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_update_micro_focus` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_update_micro_focus k_textautocorrectionwidgets__autocorrectionlanguage_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_create(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_create` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_create k_textautocorrectionwidgets__autocorrectionlanguage_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_destroy(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_destroy` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_destroy k_textautocorrectionwidgets__autocorrectionlanguage_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_child` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_focus_next_child k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_previous_child` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_focus_previous_child k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QObject* k_textautocorrectionwidgets__autocorrectionlanguage_sender(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_sender` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_sender k_textautocorrectionwidgets__autocorrectionlanguage_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
QObject* k_textautocorrectionwidgets__autocorrectionlanguage_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback QObject* func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_sender_signal_index` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_sender_signal_index k_textautocorrectionwidgets__autocorrectionlanguage_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func()
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal const char*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_receivers` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_receivers k_textautocorrectionwidgets__autocorrectionlanguage_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal const char*
///
int32_t k_textautocorrectionwidgets__autocorrectionlanguage_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* signal)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_is_signal_connected` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_is_signal_connected k_textautocorrectionwidgets__autocorrectionlanguage_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param signal QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectionlanguage_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textautocorrectionwidgets__autocorrectionlanguage_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectionlanguage_super_get_decoded_metric_f` instead
///
#define k_textautocorrectionwidgets__autocorrectionlanguage_qbase_get_decoded_metric_f k_textautocorrectionwidgets__autocorrectionlanguage_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textautocorrectionwidgets__autocorrectionlanguage_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback double func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* objectName)
///
void k_textautocorrectionwidgets__autocorrectionlanguage_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionLanguage.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionLanguage*
///
void k_textautocorrectionwidgets__autocorrectionlanguage_delete(void* self);

#endif
