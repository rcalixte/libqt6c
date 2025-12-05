#pragma once
#ifndef SRC_QT6C_LIBQFONTCOMBOBOX_H
#define SRC_QT6C_LIBQFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html)

/// q_fontcombobox_new constructs a new QFontComboBox object.
///
/// @param parent QWidget*
///
QFontComboBox* q_fontcombobox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html)

/// q_fontcombobox_new2 constructs a new QFontComboBox object.
///
QFontComboBox* q_fontcombobox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFontComboBox*
///
const QMetaObject* q_fontcombobox_meta_object(void* self);

/// @param self QFontComboBox*
/// @param param1 const char*
///
void* q_fontcombobox_metacast(void* self, const char* param1);

/// @param self QFontComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_fontcombobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_fontcombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFontComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_fontcombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_fontcombobox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setWritingSystem)
///
/// @param self QFontComboBox*
/// @param writingSystem enum QFontDatabase__WritingSystem
///
void q_fontcombobox_set_writing_system(void* self, int32_t writingSystem);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#writingSystem)
///
/// @param self QFontComboBox*
///
/// @return enum QFontDatabase__WritingSystem
///
int32_t q_fontcombobox_writing_system(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setFontFilters)
///
/// @param self QFontComboBox*
/// @param filters flag of enum QFontComboBox__FontFilter
///
void q_fontcombobox_set_font_filters(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#fontFilters)
///
/// @param self QFontComboBox*
///
/// @return flag of enum QFontComboBox__FontFilter
///
int32_t q_fontcombobox_font_filters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFont)
///
/// @param self QFontComboBox*
///
QFont* q_fontcombobox_current_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QFontComboBox*
/// @param callback QSize* func()
///
void q_fontcombobox_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForSystem)
///
/// @param self QFontComboBox*
/// @param writingSystem enum QFontDatabase__WritingSystem
/// @param sampleText const char*
///
void q_fontcombobox_set_sample_text_for_system(void* self, int32_t writingSystem, const char* sampleText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForSystem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
/// @param writingSystem enum QFontDatabase__WritingSystem
///
const char* q_fontcombobox_sample_text_for_system(void* self, int32_t writingSystem);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForFont)
///
/// @param self QFontComboBox*
/// @param fontFamily const char*
/// @param sampleText const char*
///
void q_fontcombobox_set_sample_text_for_font(void* self, const char* fontFamily, const char* sampleText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForFont)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
/// @param fontFamily const char*
///
const char* q_fontcombobox_sample_text_for_font(void* self, const char* fontFamily);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setDisplayFont)
///
/// @param self QFontComboBox*
/// @param fontFamily const char*
/// @param font QFont*
///
void q_fontcombobox_set_display_font(void* self, const char* fontFamily, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setCurrentFont)
///
/// @param self QFontComboBox*
/// @param f QFont*
///
void q_fontcombobox_set_current_font(void* self, void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// @param self QFontComboBox*
/// @param f QFont*
///
void q_fontcombobox_current_font_changed(void* self, void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QFont* f)
///
void q_fontcombobox_on_current_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// @param self QFontComboBox*
/// @param e QEvent*
///
bool q_fontcombobox_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, QEvent* e)
///
void q_fontcombobox_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// Base class method implementation
///
/// @param self QFontComboBox*
/// @param e QEvent*
///
bool q_fontcombobox_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_fontcombobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_fontcombobox_tr3(const char* s, const char* c, int n);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self QFontComboBox*
/// @param maxItems int
///
void q_fontcombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self QFontComboBox*
/// @param max int
///
void q_fontcombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self QFontComboBox*
/// @param enable bool
///
void q_fontcombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self QFontComboBox*
/// @param frame bool
///
void q_fontcombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self QFontComboBox*
/// @param text const char*
///
int32_t q_fontcombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self QFontComboBox*
/// @param data QVariant*
///
int32_t q_fontcombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self QFontComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t q_fontcombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self QFontComboBox*
/// @param policy enum QComboBox__InsertPolicy
///
void q_fontcombobox_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self QFontComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t q_fontcombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self QFontComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void q_fontcombobox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self QFontComboBox*
/// @param characters int
///
void q_fontcombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self QFontComboBox*
/// @param size QSize*
///
void q_fontcombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self QFontComboBox*
/// @param placeholderText const char*
///
void q_fontcombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// @param self QFontComboBox*
/// @param editable bool
///
void q_fontcombobox_set_editable(void* self, bool editable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// @param self QFontComboBox*
/// @param edit QLineEdit*
///
void q_fontcombobox_set_line_edit(void* self, void* edit);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self QFontComboBox*
///
QLineEdit* q_fontcombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self QFontComboBox*
/// @param v QValidator*
///
void q_fontcombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self QFontComboBox*
///
const QValidator* q_fontcombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self QFontComboBox*
/// @param c QCompleter*
///
void q_fontcombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self QFontComboBox*
///
QCompleter* q_fontcombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self QFontComboBox*
///
QAbstractItemDelegate* q_fontcombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self QFontComboBox*
/// @param delegate QAbstractItemDelegate*
///
void q_fontcombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self QFontComboBox*
///
QAbstractItemModel* q_fontcombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self QFontComboBox*
///
QModelIndex* q_fontcombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self QFontComboBox*
/// @param index QModelIndex*
///
void q_fontcombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self QFontComboBox*
/// @param visibleColumn int
///
void q_fontcombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self QFontComboBox*
///
QVariant* q_fontcombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
/// @param index int
///
const char* q_fontcombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self QFontComboBox*
/// @param index int
///
QIcon* q_fontcombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self QFontComboBox*
/// @param index int
///
QVariant* q_fontcombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param text const char*
///
void q_fontcombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
///
void q_fontcombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self QFontComboBox*
/// @param texts const char**
///
void q_fontcombobox_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QFontComboBox*
/// @param index int
/// @param text const char*
///
void q_fontcombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QFontComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void q_fontcombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self QFontComboBox*
/// @param index int
/// @param texts const char**
///
void q_fontcombobox_insert_items(void* self, int index, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self QFontComboBox*
/// @param index int
/// @param text const char*
///
void q_fontcombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self QFontComboBox*
/// @param index int
/// @param icon QIcon*
///
void q_fontcombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QFontComboBox*
/// @param index int
/// @param value QVariant*
///
void q_fontcombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self QFontComboBox*
///
QAbstractItemView* q_fontcombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self QFontComboBox*
/// @param itemView QAbstractItemView*
///
void q_fontcombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self QFontComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_fontcombobox_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self QFontComboBox*
/// @param text const char*
///
void q_fontcombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self QFontComboBox*
/// @param text const char*
///
void q_fontcombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self QFontComboBox*
/// @param param1 const char*
///
void q_fontcombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* param1)
///
void q_fontcombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, int index)
///
void q_fontcombobox_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self QFontComboBox*
/// @param param1 const char*
///
void q_fontcombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* param1)
///
void q_fontcombobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, int index)
///
void q_fontcombobox_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self QFontComboBox*
/// @param param1 const char*
///
void q_fontcombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* param1)
///
void q_fontcombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self QFontComboBox*
/// @param index int
///
void q_fontcombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, int index)
///
void q_fontcombobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self QFontComboBox*
/// @param param1 const char*
///
void q_fontcombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* param1)
///
void q_fontcombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self QFontComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_fontcombobox_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self QFontComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t q_fontcombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self QFontComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_fontcombobox_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self QFontComboBox*
/// @param role int
///
QVariant* q_fontcombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self QFontComboBox*
/// @param index int
/// @param role int
///
QVariant* q_fontcombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QFontComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QFontComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QFontComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void q_fontcombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QFontComboBox*
///
uintptr_t q_fontcombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QFontComboBox*
///
uintptr_t q_fontcombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QFontComboBox*
///
uintptr_t q_fontcombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QFontComboBox*
///
QStyle* q_fontcombobox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QFontComboBox*
/// @param style QStyle*
///
void q_fontcombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QFontComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_fontcombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QFontComboBox*
/// @param windowModality enum Qt__WindowModality
///
void q_fontcombobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
///
bool q_fontcombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QFontComboBox*
/// @param enabled bool
///
void q_fontcombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QFontComboBox*
/// @param disabled bool
///
void q_fontcombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QFontComboBox*
/// @param windowModified bool
///
void q_fontcombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QFontComboBox*
///
QRect* q_fontcombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QFontComboBox*
///
const QRect* q_fontcombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QFontComboBox*
///
QRect* q_fontcombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QFontComboBox*
///
QPoint* q_fontcombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QFontComboBox*
///
QRect* q_fontcombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QFontComboBox*
///
QRect* q_fontcombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QFontComboBox*
///
QRegion* q_fontcombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QFontComboBox*
/// @param minimumSize QSize*
///
void q_fontcombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QFontComboBox*
/// @param minw int
/// @param minh int
///
void q_fontcombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QFontComboBox*
/// @param maximumSize QSize*
///
void q_fontcombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QFontComboBox*
/// @param maxw int
/// @param maxh int
///
void q_fontcombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QFontComboBox*
/// @param minw int
///
void q_fontcombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QFontComboBox*
/// @param minh int
///
void q_fontcombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QFontComboBox*
/// @param maxw int
///
void q_fontcombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QFontComboBox*
/// @param maxh int
///
void q_fontcombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QFontComboBox*
/// @param sizeIncrement QSize*
///
void q_fontcombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QFontComboBox*
/// @param w int
/// @param h int
///
void q_fontcombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QFontComboBox*
/// @param baseSize QSize*
///
void q_fontcombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QFontComboBox*
/// @param basew int
/// @param baseh int
///
void q_fontcombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QFontComboBox*
/// @param fixedSize QSize*
///
void q_fontcombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QFontComboBox*
/// @param w int
/// @param h int
///
void q_fontcombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QFontComboBox*
/// @param w int
///
void q_fontcombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QFontComboBox*
/// @param h int
///
void q_fontcombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_fontcombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_fontcombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_fontcombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_fontcombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QFontComboBox*
///
const QPalette* q_fontcombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QFontComboBox*
/// @param palette QPalette*
///
void q_fontcombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QFontComboBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_fontcombobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QFontComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_fontcombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QFontComboBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_fontcombobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QFontComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_fontcombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QFontComboBox*
///
const QFont* q_fontcombobox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QFontComboBox*
/// @param font QFont*
///
void q_fontcombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QFontComboBox*
///
QFontMetrics* q_fontcombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QFontComboBox*
///
QFontInfo* q_fontcombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QFontComboBox*
///
QCursor* q_fontcombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QFontComboBox*
/// @param cursor QCursor*
///
void q_fontcombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QFontComboBox*
/// @param enable bool
///
void q_fontcombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QFontComboBox*
/// @param enable bool
///
void q_fontcombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFontComboBox*
/// @param mask QBitmap*
///
void q_fontcombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFontComboBox*
/// @param mask QRegion*
///
void q_fontcombobox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QFontComboBox*
///
QRegion* q_fontcombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
///
void q_fontcombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
///
void q_fontcombobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QFontComboBox*
///
QPixmap* q_fontcombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QFontComboBox*
///
QGraphicsEffect* q_fontcombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QFontComboBox*
/// @param effect QGraphicsEffect*
///
void q_fontcombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QFontComboBox*
/// @param type enum Qt__GestureType
///
void q_fontcombobox_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QFontComboBox*
/// @param type enum Qt__GestureType
///
void q_fontcombobox_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QFontComboBox*
/// @param windowTitle const char*
///
void q_fontcombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QFontComboBox*
/// @param styleSheet const char*
///
void q_fontcombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
///
void q_fontcombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QFontComboBox*
///
QIcon* q_fontcombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QFontComboBox*
/// @param windowIconText const char*
///
void q_fontcombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QFontComboBox*
/// @param windowRole const char*
///
void q_fontcombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QFontComboBox*
/// @param filePath const char*
///
void q_fontcombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QFontComboBox*
/// @param level double
///
void q_fontcombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QFontComboBox*
///
double q_fontcombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QFontComboBox*
/// @param toolTip const char*
///
void q_fontcombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QFontComboBox*
/// @param msec int
///
void q_fontcombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QFontComboBox*
/// @param statusTip const char*
///
void q_fontcombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QFontComboBox*
/// @param whatsThis const char*
///
void q_fontcombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QFontComboBox*
/// @param name const char*
///
void q_fontcombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QFontComboBox*
/// @param description const char*
///
void q_fontcombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QFontComboBox*
/// @param direction enum Qt__LayoutDirection
///
void q_fontcombobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QFontComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_fontcombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QFontComboBox*
/// @param locale QLocale*
///
void q_fontcombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QFontComboBox*
///
QLocale* q_fontcombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QFontComboBox*
/// @param reason enum Qt__FocusReason
///
void q_fontcombobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QFontComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_fontcombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QFontComboBox*
/// @param policy enum Qt__FocusPolicy
///
void q_fontcombobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_fontcombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QFontComboBox*
/// @param focusProxy QWidget*
///
void q_fontcombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QFontComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_fontcombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QFontComboBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_fontcombobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QFontComboBox*
/// @param param1 QCursor*
///
void q_fontcombobox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QFontComboBox*
/// @param key QKeySequence*
///
int32_t q_fontcombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QFontComboBox*
/// @param id int
///
void q_fontcombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QFontComboBox*
/// @param id int
///
void q_fontcombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QFontComboBox*
/// @param id int
///
void q_fontcombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_fontcombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_fontcombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QFontComboBox*
/// @param enable bool
///
void q_fontcombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QFontComboBox*
///
QGraphicsProxyWidget* q_fontcombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFontComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_fontcombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFontComboBox*
/// @param param1 QRect*
///
void q_fontcombobox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFontComboBox*
/// @param param1 QRegion*
///
void q_fontcombobox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFontComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_fontcombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFontComboBox*
/// @param param1 QRect*
///
void q_fontcombobox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFontComboBox*
/// @param param1 QRegion*
///
void q_fontcombobox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QFontComboBox*
/// @param hidden bool
///
void q_fontcombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
///
void q_fontcombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QFontComboBox*
/// @param x int
/// @param y int
///
void q_fontcombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QFontComboBox*
/// @param param1 QPoint*
///
void q_fontcombobox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QFontComboBox*
/// @param w int
/// @param h int
///
void q_fontcombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QFontComboBox*
/// @param param1 QSize*
///
void q_fontcombobox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QFontComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_fontcombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QFontComboBox*
/// @param geometry QRect*
///
void q_fontcombobox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
char* q_fontcombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QFontComboBox*
/// @param geometry const char*
///
bool q_fontcombobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QFontComboBox*
/// @param param1 QWidget*
///
bool q_fontcombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QFontComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_fontcombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QFontComboBox*
/// @param state flag of enum Qt__WindowState
///
void q_fontcombobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QFontComboBox*
/// @param state flag of enum Qt__WindowState
///
void q_fontcombobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QFontComboBox*
///
QSizePolicy* q_fontcombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QFontComboBox*
/// @param sizePolicy QSizePolicy*
///
void q_fontcombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QFontComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_fontcombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QFontComboBox*
///
QRegion* q_fontcombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QFontComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_fontcombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QFontComboBox*
/// @param margins QMargins*
///
void q_fontcombobox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QFontComboBox*
///
QMargins* q_fontcombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QFontComboBox*
///
QRect* q_fontcombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QFontComboBox*
///
QLayout* q_fontcombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QFontComboBox*
/// @param layout QLayout*
///
void q_fontcombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QFontComboBox*
/// @param parent QWidget*
///
void q_fontcombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QFontComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_fontcombobox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QFontComboBox*
/// @param dx int
/// @param dy int
///
void q_fontcombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QFontComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_fontcombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QFontComboBox*
/// @param on bool
///
void q_fontcombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param action QAction*
///
void q_fontcombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QFontComboBox*
/// @param actions libqt_list /* of QAction* */
///
void q_fontcombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QFontComboBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void q_fontcombobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QFontComboBox*
/// @param before QAction*
/// @param action QAction*
///
void q_fontcombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QFontComboBox*
/// @param action QAction*
///
void q_fontcombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QFontComboBox*
///
libqt_list /* of QAction* */ q_fontcombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param text const char*
///
QAction* q_fontcombobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_fontcombobox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_fontcombobox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_fontcombobox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QFontComboBox*
///
QWidget* q_fontcombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QFontComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_fontcombobox_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QFontComboBox*
///
/// @return flag of enum Qt__WindowType
///
int64_t q_fontcombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WindowType
///
void q_fontcombobox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QFontComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_fontcombobox_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QFontComboBox*
///
/// @return enum Qt__WindowType
///
int64_t q_fontcombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_fontcombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFontComboBox*
/// @param x int
/// @param y int
///
QWidget* q_fontcombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFontComboBox*
/// @param p QPoint*
///
QWidget* q_fontcombobox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QFontComboBox*
/// @param p QPointF*
///
QWidget* q_fontcombobox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_fontcombobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_fontcombobox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QFontComboBox*
/// @param child QWidget*
///
bool q_fontcombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QFontComboBox*
/// @param enabled bool
///
void q_fontcombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QFontComboBox*
///
QBackingStore* q_fontcombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QFontComboBox*
///
QWindow* q_fontcombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QFontComboBox*
///
QScreen* q_fontcombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QFontComboBox*
/// @param screen QScreen*
///
void q_fontcombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_fontcombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QFontComboBox*
/// @param title const char*
///
void q_fontcombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* title)
///
void q_fontcombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
///
void q_fontcombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QIcon* icon)
///
void q_fontcombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QFontComboBox*
/// @param iconText const char*
///
void q_fontcombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* iconText)
///
void q_fontcombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QFontComboBox*
/// @param pos QPoint*
///
void q_fontcombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QPoint* pos)
///
void q_fontcombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QFontComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t q_fontcombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QFontComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_fontcombobox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_fontcombobox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_fontcombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_fontcombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_fontcombobox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_fontcombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_fontcombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QFontComboBox*
/// @param rectangle QRect*
///
QPixmap* q_fontcombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QFontComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_fontcombobox_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QFontComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_fontcombobox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QFontComboBox*
/// @param id int
/// @param enable bool
///
void q_fontcombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QFontComboBox*
/// @param id int
/// @param enable bool
///
void q_fontcombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_fontcombobox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_fontcombobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_fontcombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_fontcombobox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char* q_fontcombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFontComboBox*
/// @param name char*
///
void q_fontcombobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFontComboBox*
/// @param b bool
///
bool q_fontcombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFontComboBox*
///
QThread* q_fontcombobox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFontComboBox*
/// @param thread QThread*
///
bool q_fontcombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFontComboBox*
/// @param interval int
///
int32_t q_fontcombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFontComboBox*
/// @param id int
///
void q_fontcombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFontComboBox*
/// @param id enum Qt__TimerId
///
void q_fontcombobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFontComboBox*
///
libqt_list /* of QObject* */ q_fontcombobox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFontComboBox*
/// @param filterObj QObject*
///
void q_fontcombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFontComboBox*
/// @param obj QObject*
///
void q_fontcombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_fontcombobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFontComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_fontcombobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_fontcombobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_fontcombobox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFontComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_fontcombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFontComboBox*
/// @param name const char*
///
QVariant* q_fontcombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontComboBox*
///
const char** q_fontcombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFontComboBox*
///
QBindingStorage* q_fontcombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFontComboBox*
///
const QBindingStorage* q_fontcombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFontComboBox*
///
QObject* q_fontcombobox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFontComboBox*
/// @param classname const char*
///
bool q_fontcombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFontComboBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_fontcombobox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFontComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_fontcombobox_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_fontcombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFontComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_fontcombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFontComboBox*
/// @param param1 QObject*
///
void q_fontcombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QObject* param1)
///
void q_fontcombobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QFontComboBox*
///
double q_fontcombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QFontComboBox*
///
double q_fontcombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_fontcombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_fontcombobox_encode_metric_f(int32_t metric, double value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param model QAbstractItemModel*
///
void q_fontcombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param model QAbstractItemModel*
///
void q_fontcombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QAbstractItemModel* model)
///
void q_fontcombobox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
QSize* q_fontcombobox_qbase_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QSize* func()
///
void q_fontcombobox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func()
///
void q_fontcombobox_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func()
///
void q_fontcombobox_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_fontcombobox_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_fontcombobox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QVariant* func(QFontComboBox* self, enum Qt__InputMethodQuery param1)
///
void q_fontcombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QFocusEvent*
///
void q_fontcombobox_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QFocusEvent*
///
void q_fontcombobox_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QFocusEvent* e)
///
void q_fontcombobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QFocusEvent*
///
void q_fontcombobox_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QFocusEvent*
///
void q_fontcombobox_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QFocusEvent* e)
///
void q_fontcombobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QEvent*
///
void q_fontcombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QEvent*
///
void q_fontcombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QEvent* e)
///
void q_fontcombobox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QResizeEvent*
///
void q_fontcombobox_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QResizeEvent*
///
void q_fontcombobox_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QResizeEvent* e)
///
void q_fontcombobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QPaintEvent*
///
void q_fontcombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QPaintEvent*
///
void q_fontcombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QPaintEvent* e)
///
void q_fontcombobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QShowEvent*
///
void q_fontcombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QShowEvent*
///
void q_fontcombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QShowEvent* e)
///
void q_fontcombobox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QHideEvent*
///
void q_fontcombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QHideEvent*
///
void q_fontcombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QHideEvent* e)
///
void q_fontcombobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QMouseEvent*
///
void q_fontcombobox_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QMouseEvent*
///
void q_fontcombobox_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMouseEvent* e)
///
void q_fontcombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QMouseEvent*
///
void q_fontcombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QMouseEvent*
///
void q_fontcombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMouseEvent* e)
///
void q_fontcombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QKeyEvent*
///
void q_fontcombobox_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QKeyEvent*
///
void q_fontcombobox_qbase_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QKeyEvent* e)
///
void q_fontcombobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QKeyEvent*
///
void q_fontcombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QKeyEvent*
///
void q_fontcombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QKeyEvent* e)
///
void q_fontcombobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QWheelEvent*
///
void q_fontcombobox_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QWheelEvent*
///
void q_fontcombobox_qbase_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QWheelEvent* e)
///
void q_fontcombobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QContextMenuEvent*
///
void q_fontcombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param e QContextMenuEvent*
///
void q_fontcombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QContextMenuEvent* e)
///
void q_fontcombobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 QInputMethodEvent*
///
void q_fontcombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 QInputMethodEvent*
///
void q_fontcombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QInputMethodEvent* param1)
///
void q_fontcombobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param option QStyleOptionComboBox*
///
void q_fontcombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param option QStyleOptionComboBox*
///
void q_fontcombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QStyleOptionComboBox* option)
///
void q_fontcombobox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback int32_t func()
///
void q_fontcombobox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param visible bool
///
void q_fontcombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param visible bool
///
void q_fontcombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, bool visible)
///
void q_fontcombobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 int
///
int32_t q_fontcombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 int
///
int32_t q_fontcombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, int param1)
///
void q_fontcombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func()
///
void q_fontcombobox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
QPaintEngine* q_fontcombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
QPaintEngine* q_fontcombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QPaintEngine* func()
///
void q_fontcombobox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMouseEvent*
///
void q_fontcombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMouseEvent*
///
void q_fontcombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMouseEvent* event)
///
void q_fontcombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMouseEvent*
///
void q_fontcombobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMouseEvent*
///
void q_fontcombobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMouseEvent* event)
///
void q_fontcombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEnterEvent*
///
void q_fontcombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEnterEvent*
///
void q_fontcombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QEnterEvent* event)
///
void q_fontcombobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEvent*
///
void q_fontcombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEvent*
///
void q_fontcombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QEvent* event)
///
void q_fontcombobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMoveEvent*
///
void q_fontcombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QMoveEvent*
///
void q_fontcombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMoveEvent* event)
///
void q_fontcombobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QCloseEvent*
///
void q_fontcombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QCloseEvent*
///
void q_fontcombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QCloseEvent* event)
///
void q_fontcombobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QTabletEvent*
///
void q_fontcombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QTabletEvent*
///
void q_fontcombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QTabletEvent* event)
///
void q_fontcombobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QActionEvent*
///
void q_fontcombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QActionEvent*
///
void q_fontcombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QActionEvent* event)
///
void q_fontcombobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragEnterEvent*
///
void q_fontcombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragEnterEvent*
///
void q_fontcombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QDragEnterEvent* event)
///
void q_fontcombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragMoveEvent*
///
void q_fontcombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragMoveEvent*
///
void q_fontcombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QDragMoveEvent* event)
///
void q_fontcombobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragLeaveEvent*
///
void q_fontcombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDragLeaveEvent*
///
void q_fontcombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QDragLeaveEvent* event)
///
void q_fontcombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDropEvent*
///
void q_fontcombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QDropEvent*
///
void q_fontcombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QDropEvent* event)
///
void q_fontcombobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_fontcombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_fontcombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, const char* eventType, void* message, intptr_t* result)
///
void q_fontcombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_fontcombobox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_fontcombobox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_fontcombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param painter QPainter*
///
void q_fontcombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param painter QPainter*
///
void q_fontcombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QPainter* painter)
///
void q_fontcombobox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_fontcombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_fontcombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QPaintDevice* func(QFontComboBox* self, QPoint* offset)
///
void q_fontcombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
QPainter* q_fontcombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
QPainter* q_fontcombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QPainter* func()
///
void q_fontcombobox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param next bool
///
bool q_fontcombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param next bool
///
bool q_fontcombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, bool next)
///
void q_fontcombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_fontcombobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_fontcombobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, QObject* watched, QEvent* event)
///
void q_fontcombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QTimerEvent*
///
void q_fontcombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QTimerEvent*
///
void q_fontcombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QTimerEvent* event)
///
void q_fontcombobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QChildEvent*
///
void q_fontcombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QChildEvent*
///
void q_fontcombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QChildEvent* event)
///
void q_fontcombobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEvent*
///
void q_fontcombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param event QEvent*
///
void q_fontcombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QEvent* event)
///
void q_fontcombobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func()
///
void q_fontcombobox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func()
///
void q_fontcombobox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
void q_fontcombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func()
///
void q_fontcombobox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func()
///
void q_fontcombobox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
bool q_fontcombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func()
///
void q_fontcombobox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
QObject* q_fontcombobox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
QObject* q_fontcombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback QObject* func()
///
void q_fontcombobox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
///
int32_t q_fontcombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback int32_t func()
///
void q_fontcombobox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal const char*
///
int32_t q_fontcombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal const char*
///
int32_t q_fontcombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, const char* signal)
///
void q_fontcombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
bool q_fontcombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
bool q_fontcombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_fontcombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_fontcombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback double func(QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_fontcombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, const char* objectName)
///
void q_fontcombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#dtor.QFontComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self QFontComboBox*
///
void q_fontcombobox_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#public-types)

typedef enum {
    QFONTCOMBOBOX_FONTFILTER_ALLFONTS = 0,
    QFONTCOMBOBOX_FONTFILTER_SCALABLEFONTS = 1,
    QFONTCOMBOBOX_FONTFILTER_NONSCALABLEFONTS = 2,
    QFONTCOMBOBOX_FONTFILTER_MONOSPACEDFONTS = 4,
    QFONTCOMBOBOX_FONTFILTER_PROPORTIONALFONTS = 8
} QFontComboBox__FontFilter;

#endif
