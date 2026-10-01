#pragma once
#ifndef LIBQFONTCOMBOBOX_H
#define LIBQFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
/// @param self const QFontComboBox*
///
const QMetaObject* q_fontcombobox_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QFontComboBox*
/// @param callback const QMetaObject* func(const QFontComboBox* self)
///
void q_fontcombobox_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QFontComboBox*
///
const QMetaObject* q_fontcombobox_super_meta_object(const void* self);

/// @param self QFontComboBox*
/// @param param1 const char*
///
void* q_fontcombobox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFontComboBox*
/// @param callback void* func(QFontComboBox* self, const char* param1)
///
void q_fontcombobox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFontComboBox*
/// @param param1 const char*
///
void* q_fontcombobox_super_metacast(void* self, const char* param1);

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
int32_t q_fontcombobox_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
/// @param self const QFontComboBox*
///
/// @return enum QFontDatabase__WritingSystem
///
int32_t q_fontcombobox_writing_system(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setFontFilters)
///
/// @param self QFontComboBox*
/// @param filters flag of enum QFontComboBox__FontFilter
///
void q_fontcombobox_set_font_filters(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#fontFilters)
///
/// @param self const QFontComboBox*
///
/// @return flag of enum QFontComboBox__FontFilter
///
int32_t q_fontcombobox_font_filters(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFont)
///
/// @param self const QFontComboBox*
///
QFont* q_fontcombobox_current_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QFontComboBox*
/// @param callback QSize* func(const QFontComboBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_fontcombobox_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForSystem)
///
/// @param self QFontComboBox*
/// @param writingSystem enum QFontDatabase__WritingSystem
/// @param sampleText const char*
///
void q_fontcombobox_set_sample_text_for_system(void* self, int32_t writingSystem, const char* sampleText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForSystem)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
/// @param writingSystem enum QFontDatabase__WritingSystem
///
const char* q_fontcombobox_sample_text_for_system(const void* self, int32_t writingSystem);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForFont)
///
/// @param self QFontComboBox*
/// @param fontFamily const char*
/// @param sampleText const char*
///
void q_fontcombobox_set_sample_text_for_font(void* self, const char* fontFamily, const char* sampleText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForFont)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
/// @param fontFamily const char*
///
const char* q_fontcombobox_sample_text_for_font(const void* self, const char* fontFamily);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setDisplayFont)
///
/// @param self QFontComboBox*
/// @param fontFamily const char*
/// @param font QFont*
///
void q_fontcombobox_set_display_font(void* self, const char* fontFamily, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#displayFont)
///
/// @param self const QFontComboBox*
/// @param fontFamily const char*
///
/// @return QFont* (NOTE: This pointer value could be `NULL`.)
///
QFont* q_fontcombobox_display_font(const void* self, const char* fontFamily);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#setCurrentFont)
///
/// @param self QFontComboBox*
/// @param f QFont*
///
void q_fontcombobox_set_current_font(void* self, const void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// @param self QFontComboBox*
/// @param f QFont*
///
void q_fontcombobox_current_font_changed(void* self, const void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QFont* f)
///
void q_fontcombobox_on_current_font_changed(void* self, void (*callback)(void*, const void*));

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
bool q_fontcombobox_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_fontcombobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_max_visible_items(const void* self);

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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_count(const void* self);

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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_max_count(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_duplicates_enabled(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_has_frame(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self const QFontComboBox*
/// @param text const char*
///
int32_t q_fontcombobox_find_text(const void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QFontComboBox*
/// @param data QVariant*
///
int32_t q_fontcombobox_find_data(const void* self, const void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self const QFontComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t q_fontcombobox_insert_policy(const void* self);

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
/// @param self const QFontComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t q_fontcombobox_size_adjust_policy(const void* self);

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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_minimum_contents_length(const void* self);

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
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_icon_size(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self QFontComboBox*
/// @param size QSize*
///
void q_fontcombobox_set_icon_size(void* self, const void* size);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_placeholder_text(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_editable(const void* self);

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
/// @param self const QFontComboBox*
///
QLineEdit* q_fontcombobox_line_edit(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self QFontComboBox*
/// @param v QValidator*
///
void q_fontcombobox_set_validator(void* self, const void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self const QFontComboBox*
///
const QValidator* q_fontcombobox_validator(const void* self);

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
/// @param self const QFontComboBox*
///
QCompleter* q_fontcombobox_completer(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self const QFontComboBox*
///
QAbstractItemDelegate* q_fontcombobox_item_delegate(const void* self);

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
/// @param self const QFontComboBox*
///
QAbstractItemModel* q_fontcombobox_model(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self const QFontComboBox*
///
QModelIndex* q_fontcombobox_root_model_index(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self QFontComboBox*
/// @param index QModelIndex*
///
void q_fontcombobox_set_root_model_index(void* self, const void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_model_column(const void* self);

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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_current_index(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_current_text(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self const QFontComboBox*
///
QVariant* q_fontcombobox_current_data(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
/// @param index int
///
const char* q_fontcombobox_item_text(const void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self const QFontComboBox*
/// @param index int
///
QIcon* q_fontcombobox_item_icon(const void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self const QFontComboBox*
/// @param index int
///
QVariant* q_fontcombobox_item_data(const void* self, int index);

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
void q_fontcombobox_add_item2(void* self, const void* icon, const char* text);

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
void q_fontcombobox_insert_item2(void* self, int index, const void* icon, const char* text);

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
void q_fontcombobox_set_item_icon(void* self, int index, const void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QFontComboBox*
/// @param index int
/// @param value QVariant*
///
void q_fontcombobox_set_item_data(void* self, int index, const void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self const QFontComboBox*
///
QAbstractItemView* q_fontcombobox_view(const void* self);

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
/// @param self const QFontComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_fontcombobox_input_method_query2(const void* self, int32_t query, const void* argument);

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
/// @param self const QFontComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_fontcombobox_find_text2(const void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QFontComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t q_fontcombobox_find_data2(const void* self, const void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self const QFontComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t q_fontcombobox_find_data3(const void* self, const void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self const QFontComboBox*
/// @param role int
///
QVariant* q_fontcombobox_current_data1(const void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self const QFontComboBox*
/// @param index int
/// @param role int
///
QVariant* q_fontcombobox_item_data2(const void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_add_item22(void* self, const char* text, const void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_add_item3(void* self, const void* icon, const char* text, const void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self QFontComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void q_fontcombobox_insert_item3(void* self, int index, const char* text, const void* userData);

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
void q_fontcombobox_insert_item4(void* self, int index, const void* icon, const char* text, const void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self QFontComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void q_fontcombobox_set_item_data3(void* self, int index, const void* value, int role);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QFontComboBox*
///
QPaintDevice* q_fontcombobox_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QFontComboBox object
///
/// @param _qpaintdevice QPaintDevice*
///
QFontComboBox* q_fontcombobox_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QFontComboBox*
///
uintptr_t q_fontcombobox_win_id(const void* self);

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
/// @param self const QFontComboBox*
///
uintptr_t q_fontcombobox_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QFontComboBox*
///
uintptr_t q_fontcombobox_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QFontComboBox*
///
QStyle* q_fontcombobox_style(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QFontComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_fontcombobox_window_modality(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
///
bool q_fontcombobox_is_enabled_to(const void* self, const void* param1);

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
/// @param self const QFontComboBox*
///
QRect* q_fontcombobox_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QFontComboBox*
///
const QRect* q_fontcombobox_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QFontComboBox*
///
QRect* q_fontcombobox_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QFontComboBox*
///
QPoint* q_fontcombobox_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QFontComboBox*
///
QRect* q_fontcombobox_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QFontComboBox*
///
QRect* q_fontcombobox_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QFontComboBox*
///
QRegion* q_fontcombobox_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QFontComboBox*
/// @param minimumSize QSize*
///
void q_fontcombobox_set_minimum_size(void* self, const void* minimumSize);

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
void q_fontcombobox_set_maximum_size(void* self, const void* maximumSize);

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
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QFontComboBox*
/// @param sizeIncrement QSize*
///
void q_fontcombobox_set_size_increment(void* self, const void* sizeIncrement);

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
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QFontComboBox*
/// @param baseSize QSize*
///
void q_fontcombobox_set_base_size(void* self, const void* baseSize);

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
void q_fontcombobox_set_fixed_size(void* self, const void* fixedSize);

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
/// @param self const QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QFontComboBox*
/// @param param1 QPointF*
///
QPointF* q_fontcombobox_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QFontComboBox*
/// @param param1 QPoint*
///
QPoint* q_fontcombobox_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_fontcombobox_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_fontcombobox_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_fontcombobox_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_fontcombobox_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QFontComboBox*
///
const QPalette* q_fontcombobox_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QFontComboBox*
/// @param palette QPalette*
///
void q_fontcombobox_set_palette(void* self, const void* palette);

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
/// @param self const QFontComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_fontcombobox_background_role(const void* self);

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
/// @param self const QFontComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_fontcombobox_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QFontComboBox*
///
const QFont* q_fontcombobox_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QFontComboBox*
/// @param font QFont*
///
void q_fontcombobox_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QFontComboBox*
///
QFontMetrics* q_fontcombobox_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QFontComboBox*
///
QFontInfo* q_fontcombobox_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QFontComboBox*
///
QCursor* q_fontcombobox_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QFontComboBox*
/// @param cursor QCursor*
///
void q_fontcombobox_set_cursor(void* self, const void* cursor);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_under_mouse(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFontComboBox*
/// @param mask QBitmap*
///
void q_fontcombobox_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QFontComboBox*
/// @param mask QRegion*
///
void q_fontcombobox_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QFontComboBox*
///
QRegion* q_fontcombobox_mask(const void* self);

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
/// @param self const QFontComboBox*
///
QGraphicsEffect* q_fontcombobox_graphics_effect(const void* self);

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
void q_fontcombobox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QFontComboBox*
/// @param type enum Qt__GestureType
///
void q_fontcombobox_ungrab_gesture(void* self, int32_t type);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
///
void q_fontcombobox_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QFontComboBox*
///
QIcon* q_fontcombobox_window_icon(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_window_icon_text(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_window_role(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_window_file_path(const void* self);

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
/// @param self const QFontComboBox*
///
double q_fontcombobox_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_window_modified(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_tool_tip(const void* self);

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
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_tool_tip_duration(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_status_tip(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_accessible_name(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_accessible_description(const void* self);

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
/// @param self const QFontComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_fontcombobox_layout_direction(const void* self);

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
void q_fontcombobox_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QFontComboBox*
///
QLocale* q_fontcombobox_locale(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_left_to_right(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_active_window(const void* self);

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
/// @param self const QFontComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_fontcombobox_focus_policy(const void* self);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_has_focus(const void* self);

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
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QFontComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_fontcombobox_context_menu_policy(const void* self);

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
void q_fontcombobox_grab_mouse2(void* self, const void* param1);

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
int32_t q_fontcombobox_grab_shortcut(void* self, const void* key);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_updates_enabled(const void* self);

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
/// @param self const QFontComboBox*
///
QGraphicsProxyWidget* q_fontcombobox_graphics_proxy_widget(const void* self);

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
void q_fontcombobox_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QFontComboBox*
/// @param param1 QRegion*
///
void q_fontcombobox_update4(void* self, const void* param1);

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
void q_fontcombobox_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QFontComboBox*
/// @param param1 QRegion*
///
void q_fontcombobox_repaint4(void* self, const void* param1);

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
void q_fontcombobox_move2(void* self, const void* param1);

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
void q_fontcombobox_resize2(void* self, const void* param1);

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
void q_fontcombobox_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFontComboBox*
///
char* q_fontcombobox_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QFontComboBox*
/// @param geometry char*
///
bool q_fontcombobox_restore_geometry(void* self, char* geometry);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QFontComboBox*
/// @param param1 QWidget*
///
bool q_fontcombobox_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QFontComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_fontcombobox_window_state(const void* self);

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
/// @param self const QFontComboBox*
///
QSizePolicy* q_fontcombobox_size_policy(const void* self);

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
/// @param self const QFontComboBox*
///
QRegion* q_fontcombobox_visible_region(const void* self);

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
void q_fontcombobox_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QFontComboBox*
///
QMargins* q_fontcombobox_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QFontComboBox*
///
QRect* q_fontcombobox_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QFontComboBox*
///
QLayout* q_fontcombobox_layout(const void* self);

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
void q_fontcombobox_set_parent2(void* self, void* parent, int32_t f);

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
void q_fontcombobox_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_accept_drops(const void* self);

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
/// @param actions libqt_list of QAction*
///
void q_fontcombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QFontComboBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
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
/// @param self const QFontComboBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_fontcombobox_actions(const void* self);

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
QAction* q_fontcombobox_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_fontcombobox_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QFontComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_fontcombobox_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QFontComboBox*
///
QWidget* q_fontcombobox_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QFontComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_fontcombobox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QFontComboBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_fontcombobox_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QFontComboBox*
/// @param param1 enum Qt__WindowType
///
void q_fontcombobox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QFontComboBox*
/// @param type flag of enum Qt__WindowType
///
void q_fontcombobox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QFontComboBox*
///
/// @return enum Qt__WindowType
///
int32_t q_fontcombobox_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_fontcombobox_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QFontComboBox*
/// @param x int
/// @param y int
///
QWidget* q_fontcombobox_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QFontComboBox*
/// @param p QPoint*
///
QWidget* q_fontcombobox_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QFontComboBox*
/// @param p QPointF*
///
QWidget* q_fontcombobox_child_at3(const void* self, const void* p);

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
/// @param self const QFontComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_fontcombobox_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QFontComboBox*
///
void q_fontcombobox_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QFontComboBox*
/// @param child QWidget*
///
bool q_fontcombobox_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_auto_fill_background(const void* self);

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
/// @param self const QFontComboBox*
///
QBackingStore* q_fontcombobox_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QFontComboBox*
///
QWindow* q_fontcombobox_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QFontComboBox*
///
QScreen* q_fontcombobox_screen(const void* self);

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
void q_fontcombobox_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QIcon* icon)
///
void q_fontcombobox_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

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
void q_fontcombobox_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QPoint* pos)
///
void q_fontcombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QFontComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_fontcombobox_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QFontComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_fontcombobox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_fontcombobox_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_fontcombobox_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

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
void q_fontcombobox_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_fontcombobox_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QFontComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_fontcombobox_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

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
void q_fontcombobox_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QFontComboBox*
/// @param rectangle QRect*
///
QPixmap* q_fontcombobox_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QFontComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_fontcombobox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QFontComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_fontcombobox_grab_shortcut2(void* self, const void* key, int32_t context);

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
void q_fontcombobox_set_window_flag2(void* self, int32_t param1, bool on);

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
QWidget* q_fontcombobox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontComboBox*
///
const char* q_fontcombobox_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFontComboBox*
/// @param name const char*
///
void q_fontcombobox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_signals_blocked(const void* self);

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
/// @param self const QFontComboBox*
///
QThread* q_fontcombobox_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFontComboBox*
/// @param time int64_t of nanoseconds
///
int32_t q_fontcombobox_start_timer2(void* self, int64_t time);

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
/// @param self const QFontComboBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_fontcombobox_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_fontcombobox_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_fontcombobox_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFontComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_fontcombobox_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_fontcombobox_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_fontcombobox_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
/// @param receiver QObject*
///
bool q_fontcombobox_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_fontcombobox_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QFontComboBox*
///
void q_fontcombobox_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QFontComboBox*
///
void q_fontcombobox_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFontComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_fontcombobox_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QFontComboBox*
/// @param name const char*
///
QVariant* q_fontcombobox_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFontComboBox*
///
const char** q_fontcombobox_dynamic_property_names(const void* self);

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
/// @param self const QFontComboBox*
///
const QBindingStorage* q_fontcombobox_binding_storage2(const void* self);

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
/// @param self const QFontComboBox*
///
QObject* q_fontcombobox_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QFontComboBox*
/// @param classname const char*
///
bool q_fontcombobox_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFontComboBox*
///
void q_fontcombobox_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFontComboBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_fontcombobox_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_fontcombobox_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_fontcombobox_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFontComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_fontcombobox_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
/// @param signal const char*
///
bool q_fontcombobox_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_fontcombobox_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_fontcombobox_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFontComboBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_fontcombobox_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const QFontComboBox*
///
bool q_fontcombobox_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QFontComboBox*
///
double q_fontcombobox_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QFontComboBox*
///
double q_fontcombobox_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_depth(const void* self);

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
void q_fontcombobox_super_set_model(void* self, void* model);

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
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_minimum_size_hint(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
QSize* q_fontcombobox_super_minimum_size_hint(const void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QSize* func(QFontComboBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_fontcombobox_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

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
void q_fontcombobox_super_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_show_popup(void* self, void (*callback)(void*));

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
void q_fontcombobox_super_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_hide_popup(void* self, void (*callback)(void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_fontcombobox_input_method_query(const void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_fontcombobox_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QVariant* func(QFontComboBox* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_fontcombobox_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

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
void q_fontcombobox_super_focus_in_event(void* self, void* e);

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
void q_fontcombobox_super_focus_out_event(void* self, void* e);

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
void q_fontcombobox_super_change_event(void* self, void* e);

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
void q_fontcombobox_super_resize_event(void* self, void* e);

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
void q_fontcombobox_super_paint_event(void* self, void* e);

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
void q_fontcombobox_super_show_event(void* self, void* e);

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
void q_fontcombobox_super_hide_event(void* self, void* e);

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
void q_fontcombobox_super_mouse_press_event(void* self, void* e);

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
void q_fontcombobox_super_mouse_release_event(void* self, void* e);

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
void q_fontcombobox_super_key_press_event(void* self, void* e);

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
void q_fontcombobox_super_key_release_event(void* self, void* e);

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
void q_fontcombobox_super_wheel_event(void* self, void* e);

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
void q_fontcombobox_super_context_menu_event(void* self, void* e);

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
void q_fontcombobox_super_input_method_event(void* self, void* param1);

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
/// @param self const QFontComboBox*
/// @param option QStyleOptionComboBox*
///
void q_fontcombobox_init_style_option(const void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param option QStyleOptionComboBox*
///
void q_fontcombobox_super_init_style_option(const void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback void func(QFontComboBox* self, QStyleOptionComboBox* option)
///
void q_fontcombobox_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self)
///
void q_fontcombobox_on_dev_type(const void* self, int32_t (*callback)(const void*));

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
void q_fontcombobox_super_set_visible(void* self, bool visible);

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
/// @param self const QFontComboBox*
/// @param param1 int
///
int32_t q_fontcombobox_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param param1 int
///
int32_t q_fontcombobox_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, int param1)
///
void q_fontcombobox_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
bool q_fontcombobox_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback bool func(QFontComboBox* self)
///
void q_fontcombobox_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
QPaintEngine* q_fontcombobox_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
QPaintEngine* q_fontcombobox_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QPaintEngine* func(QFontComboBox* self)
///
void q_fontcombobox_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

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
void q_fontcombobox_super_mouse_double_click_event(void* self, void* event);

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
void q_fontcombobox_super_mouse_move_event(void* self, void* event);

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
void q_fontcombobox_super_enter_event(void* self, void* event);

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
void q_fontcombobox_super_leave_event(void* self, void* event);

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
void q_fontcombobox_super_move_event(void* self, void* event);

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
void q_fontcombobox_super_close_event(void* self, void* event);

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
void q_fontcombobox_super_tablet_event(void* self, void* event);

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
void q_fontcombobox_super_action_event(void* self, void* event);

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
void q_fontcombobox_super_drag_enter_event(void* self, void* event);

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
void q_fontcombobox_super_drag_move_event(void* self, void* event);

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
void q_fontcombobox_super_drag_leave_event(void* self, void* event);

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
void q_fontcombobox_super_drop_event(void* self, void* event);

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
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_fontcombobox_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_fontcombobox_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_fontcombobox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_fontcombobox_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_fontcombobox_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_fontcombobox_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param painter QPainter*
///
void q_fontcombobox_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param painter QPainter*
///
void q_fontcombobox_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback void func(QFontComboBox* self, QPainter* painter)
///
void q_fontcombobox_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_fontcombobox_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param offset QPoint*
///
QPaintDevice* q_fontcombobox_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QPaintDevice* func(QFontComboBox* self, QPoint* offset)
///
void q_fontcombobox_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
QPainter* q_fontcombobox_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
QPainter* q_fontcombobox_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QPainter* func(QFontComboBox* self)
///
void q_fontcombobox_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

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
bool q_fontcombobox_super_focus_next_prev_child(void* self, bool next);

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
bool q_fontcombobox_super_event_filter(void* self, void* watched, void* event);

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
void q_fontcombobox_super_timer_event(void* self, void* event);

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
void q_fontcombobox_super_child_event(void* self, void* event);

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
void q_fontcombobox_super_custom_event(void* self, void* event);

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
void q_fontcombobox_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param signal QMetaMethod*
///
void q_fontcombobox_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

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
void q_fontcombobox_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_update_micro_focus(void* self, void (*callback)(void*));

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
void q_fontcombobox_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_create(void* self, void (*callback)(void*));

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
void q_fontcombobox_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback void func(QFontComboBox* self)
///
void q_fontcombobox_on_destroy(void* self, void (*callback)(void*));

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
bool q_fontcombobox_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self)
///
void q_fontcombobox_on_focus_next_child(void* self, bool (*callback)(void*));

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
bool q_fontcombobox_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFontComboBox*
/// @param callback bool func(QFontComboBox* self)
///
void q_fontcombobox_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
QObject* q_fontcombobox_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
QObject* q_fontcombobox_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback QObject* func(QFontComboBox* self)
///
void q_fontcombobox_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
///
int32_t q_fontcombobox_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self)
///
void q_fontcombobox_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param signal const char*
///
int32_t q_fontcombobox_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param signal const char*
///
int32_t q_fontcombobox_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback int32_t func(QFontComboBox* self, const char* signal)
///
void q_fontcombobox_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param signal QMetaMethod*
///
bool q_fontcombobox_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param signal QMetaMethod*
///
bool q_fontcombobox_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback bool func(QFontComboBox* self, QMetaMethod* signal)
///
void q_fontcombobox_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFontComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_fontcombobox_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_fontcombobox_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFontComboBox*
/// @param callback double func(QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_fontcombobox_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

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
