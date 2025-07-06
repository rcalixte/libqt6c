#pragma once
#ifndef SRCQT6C_LIBQFONTCOMBOBOX_H
#define SRCQT6C_LIBQFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontcombobox.html

/// q_fontcombobox_new constructs a new QFontComboBox object.
///
/// ``` QWidget* parent ```
QFontComboBox* q_fontcombobox_new(void* parent);

/// q_fontcombobox_new2 constructs a new QFontComboBox object.
///
///
QFontComboBox* q_fontcombobox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFontComboBox* self ```
const QMetaObject* q_fontcombobox_meta_object(void* self);

/// ``` QFontComboBox* self, const char* param1 ```
void* q_fontcombobox_metacast(void* self, const char* param1);

/// ``` QFontComboBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fontcombobox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFontComboBox* self, int32_t (*slot)(QFontComboBox*, enum QMetaObject__Call, int, void*) ```
void q_fontcombobox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFontComboBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fontcombobox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_fontcombobox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setWritingSystem)
///
/// ``` QFontComboBox* self, enum QFontDatabase__WritingSystem writingSystem ```
void q_fontcombobox_set_writing_system(void* self, int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#writingSystem)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_writing_system(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setFontFilters)
///
/// ``` QFontComboBox* self, int filters ```
void q_fontcombobox_set_font_filters(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#fontFilters)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_font_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#currentFont)
///
/// ``` QFontComboBox* self ```
QFont* q_fontcombobox_current_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QFontComboBox* self, QSize* (*slot)() ```
void q_fontcombobox_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForSystem)
///
/// ``` QFontComboBox* self, enum QFontDatabase__WritingSystem writingSystem, const char* sampleText ```
void q_fontcombobox_set_sample_text_for_system(void* self, int64_t writingSystem, const char* sampleText);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForSystem)
///
/// ``` QFontComboBox* self, enum QFontDatabase__WritingSystem writingSystem ```
const char* q_fontcombobox_sample_text_for_system(void* self, int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setSampleTextForFont)
///
/// ``` QFontComboBox* self, const char* fontFamily, const char* sampleText ```
void q_fontcombobox_set_sample_text_for_font(void* self, const char* fontFamily, const char* sampleText);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#sampleTextForFont)
///
/// ``` QFontComboBox* self, const char* fontFamily ```
const char* q_fontcombobox_sample_text_for_font(void* self, const char* fontFamily);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setDisplayFont)
///
/// ``` QFontComboBox* self, const char* fontFamily, QFont* font ```
void q_fontcombobox_set_display_font(void* self, const char* fontFamily, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#setCurrentFont)
///
/// ``` QFontComboBox* self, QFont* f ```
void q_fontcombobox_set_current_font(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// ``` QFontComboBox* self, QFont* f ```
void q_fontcombobox_current_font_changed(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#currentFontChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QFont*) ```
void q_fontcombobox_on_current_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// ``` QFontComboBox* self, QEvent* e ```
bool q_fontcombobox_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QFontComboBox* self, bool (*slot)(QFontComboBox*, QEvent*) ```
void q_fontcombobox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#event)
///
/// Base class method implementation
///
/// ``` QFontComboBox* self, QEvent* e ```
bool q_fontcombobox_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_fontcombobox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_fontcombobox_tr3(const char* s, const char* c, int n);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// ``` QFontComboBox* self, int maxItems ```
void q_fontcombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// ``` QFontComboBox* self, int max ```
void q_fontcombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// ``` QFontComboBox* self, bool enable ```
void q_fontcombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// ``` QFontComboBox* self, bool frame ```
void q_fontcombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// ``` QFontComboBox* self, const char* text ```
int32_t q_fontcombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QFontComboBox* self, QVariant* data ```
int32_t q_fontcombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// ``` QFontComboBox* self, enum QComboBox__InsertPolicy policy ```
void q_fontcombobox_set_insert_policy(void* self, int64_t policy);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// ``` QFontComboBox* self, enum QComboBox__SizeAdjustPolicy policy ```
void q_fontcombobox_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// ``` QFontComboBox* self, int characters ```
void q_fontcombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// ``` QFontComboBox* self, QSize* size ```
void q_fontcombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// ``` QFontComboBox* self, const char* placeholderText ```
void q_fontcombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// ``` QFontComboBox* self, bool editable ```
void q_fontcombobox_set_editable(void* self, bool editable);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// ``` QFontComboBox* self, QLineEdit* edit ```
void q_fontcombobox_set_line_edit(void* self, void* edit);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// ``` QFontComboBox* self ```
QLineEdit* q_fontcombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// ``` QFontComboBox* self, QValidator* v ```
void q_fontcombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// ``` QFontComboBox* self ```
const QValidator* q_fontcombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// ``` QFontComboBox* self, QCompleter* c ```
void q_fontcombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// ``` QFontComboBox* self ```
QCompleter* q_fontcombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// ``` QFontComboBox* self ```
QAbstractItemDelegate* q_fontcombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// ``` QFontComboBox* self, QAbstractItemDelegate* delegate ```
void q_fontcombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// ``` QFontComboBox* self ```
QAbstractItemModel* q_fontcombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// ``` QFontComboBox* self ```
QModelIndex* q_fontcombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// ``` QFontComboBox* self, QModelIndex* index ```
void q_fontcombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// ``` QFontComboBox* self, int visibleColumn ```
void q_fontcombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// ``` QFontComboBox* self ```
QVariant* q_fontcombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// ``` QFontComboBox* self, int index ```
const char* q_fontcombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// ``` QFontComboBox* self, int index ```
QIcon* q_fontcombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// ``` QFontComboBox* self, int index ```
QVariant* q_fontcombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QFontComboBox* self, const char* text ```
void q_fontcombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QFontComboBox* self, QIcon* icon, const char* text ```
void q_fontcombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// ``` QFontComboBox* self, const char* texts[] ```
void q_fontcombobox_add_items(void* self, const char* texts[]);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QFontComboBox* self, int index, const char* text ```
void q_fontcombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QFontComboBox* self, int index, QIcon* icon, const char* text ```
void q_fontcombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// ``` QFontComboBox* self, int index, const char* texts[] ```
void q_fontcombobox_insert_items(void* self, int index, const char* texts[]);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// ``` QFontComboBox* self, int index, const char* text ```
void q_fontcombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// ``` QFontComboBox* self, int index, QIcon* icon ```
void q_fontcombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// ``` QFontComboBox* self, int index, QVariant* value ```
void q_fontcombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// ``` QFontComboBox* self ```
QAbstractItemView* q_fontcombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// ``` QFontComboBox* self, QAbstractItemView* itemView ```
void q_fontcombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// ``` QFontComboBox* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_fontcombobox_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// ``` QFontComboBox* self, const char* text ```
void q_fontcombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// ``` QFontComboBox* self, const char* text ```
void q_fontcombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// ``` QFontComboBox* self, const char* param1 ```
void q_fontcombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_fontcombobox_on_edit_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, int) ```
void q_fontcombobox_on_activated(void* self, void (*slot)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// ``` QFontComboBox* self, const char* param1 ```
void q_fontcombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_fontcombobox_on_text_activated(void* self, void (*slot)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, int) ```
void q_fontcombobox_on_highlighted(void* self, void (*slot)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// ``` QFontComboBox* self, const char* param1 ```
void q_fontcombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_fontcombobox_on_text_highlighted(void* self, void (*slot)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// ``` QFontComboBox* self, int index ```
void q_fontcombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, int) ```
void q_fontcombobox_on_current_index_changed(void* self, void (*slot)(void*, int));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// ``` QFontComboBox* self, const char* param1 ```
void q_fontcombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_fontcombobox_on_current_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// ``` QFontComboBox* self, const char* text, int flags ```
int32_t q_fontcombobox_find_text2(void* self, const char* text, int64_t flags);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QFontComboBox* self, QVariant* data, int role ```
int32_t q_fontcombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QFontComboBox* self, QVariant* data, int role, int flags ```
int32_t q_fontcombobox_find_data3(void* self, void* data, int role, int64_t flags);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// ``` QFontComboBox* self, int role ```
QVariant* q_fontcombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// ``` QFontComboBox* self, int index, int role ```
QVariant* q_fontcombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QFontComboBox* self, const char* text, QVariant* userData ```
void q_fontcombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QFontComboBox* self, QIcon* icon, const char* text, QVariant* userData ```
void q_fontcombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QFontComboBox* self, int index, const char* text, QVariant* userData ```
void q_fontcombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QFontComboBox* self, int index, QIcon* icon, const char* text, QVariant* userData ```
void q_fontcombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// ``` QFontComboBox* self, int index, QVariant* value, int role ```
void q_fontcombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QFontComboBox* self ```
uintptr_t q_fontcombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QFontComboBox* self ```
uintptr_t q_fontcombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QFontComboBox* self ```
uintptr_t q_fontcombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QFontComboBox* self ```
QStyle* q_fontcombobox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QFontComboBox* self, QStyle* style ```
void q_fontcombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QFontComboBox* self, enum Qt__WindowModality windowModality ```
void q_fontcombobox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QFontComboBox* self, QWidget* param1 ```
bool q_fontcombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QFontComboBox* self, bool enabled ```
void q_fontcombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QFontComboBox* self, bool disabled ```
void q_fontcombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QFontComboBox* self, bool windowModified ```
void q_fontcombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QFontComboBox* self ```
QRect* q_fontcombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QFontComboBox* self ```
const QRect* q_fontcombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QFontComboBox* self ```
QRect* q_fontcombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QFontComboBox* self ```
QPoint* q_fontcombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QFontComboBox* self ```
QRect* q_fontcombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QFontComboBox* self ```
QRect* q_fontcombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QFontComboBox* self ```
QRegion* q_fontcombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFontComboBox* self, QSize* minimumSize ```
void q_fontcombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFontComboBox* self, int minw, int minh ```
void q_fontcombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFontComboBox* self, QSize* maximumSize ```
void q_fontcombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFontComboBox* self, int maxw, int maxh ```
void q_fontcombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QFontComboBox* self, int minw ```
void q_fontcombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QFontComboBox* self, int minh ```
void q_fontcombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QFontComboBox* self, int maxw ```
void q_fontcombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QFontComboBox* self, int maxh ```
void q_fontcombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFontComboBox* self, QSize* sizeIncrement ```
void q_fontcombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFontComboBox* self, int w, int h ```
void q_fontcombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFontComboBox* self, QSize* baseSize ```
void q_fontcombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFontComboBox* self, int basew, int baseh ```
void q_fontcombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFontComboBox* self, QSize* fixedSize ```
void q_fontcombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFontComboBox* self, int w, int h ```
void q_fontcombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QFontComboBox* self, int w ```
void q_fontcombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QFontComboBox* self, int h ```
void q_fontcombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFontComboBox* self, QPointF* param1 ```
QPointF* q_fontcombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFontComboBox* self, QPoint* param1 ```
QPoint* q_fontcombobox_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFontComboBox* self, QPointF* param1 ```
QPointF* q_fontcombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFontComboBox* self, QPoint* param1 ```
QPoint* q_fontcombobox_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFontComboBox* self, QPointF* param1 ```
QPointF* q_fontcombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFontComboBox* self, QPoint* param1 ```
QPoint* q_fontcombobox_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFontComboBox* self, QPointF* param1 ```
QPointF* q_fontcombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFontComboBox* self, QPoint* param1 ```
QPoint* q_fontcombobox_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFontComboBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_fontcombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFontComboBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_fontcombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFontComboBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_fontcombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFontComboBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_fontcombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QFontComboBox* self ```
const QPalette* q_fontcombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QFontComboBox* self, QPalette* palette ```
void q_fontcombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QFontComboBox* self, enum QPalette__ColorRole backgroundRole ```
void q_fontcombobox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QFontComboBox* self, enum QPalette__ColorRole foregroundRole ```
void q_fontcombobox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QFontComboBox* self ```
const QFont* q_fontcombobox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QFontComboBox* self, QFont* font ```
void q_fontcombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QFontComboBox* self ```
QFontMetrics* q_fontcombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QFontComboBox* self ```
QFontInfo* q_fontcombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QFontComboBox* self ```
QCursor* q_fontcombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QFontComboBox* self, QCursor* cursor ```
void q_fontcombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QFontComboBox* self, bool enable ```
void q_fontcombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QFontComboBox* self, bool enable ```
void q_fontcombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFontComboBox* self, QBitmap* mask ```
void q_fontcombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFontComboBox* self, QRegion* mask ```
void q_fontcombobox_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QFontComboBox* self ```
QRegion* q_fontcombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPaintDevice* target ```
void q_fontcombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPainter* painter ```
void q_fontcombobox_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFontComboBox* self ```
QPixmap* q_fontcombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QFontComboBox* self ```
QGraphicsEffect* q_fontcombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QFontComboBox* self, QGraphicsEffect* effect ```
void q_fontcombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFontComboBox* self, enum Qt__GestureType typeVal ```
void q_fontcombobox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QFontComboBox* self, enum Qt__GestureType typeVal ```
void q_fontcombobox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QFontComboBox* self, const char* windowTitle ```
void q_fontcombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QFontComboBox* self, const char* styleSheet ```
void q_fontcombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QFontComboBox* self, QIcon* icon ```
void q_fontcombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QFontComboBox* self ```
QIcon* q_fontcombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QFontComboBox* self, const char* windowIconText ```
void q_fontcombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QFontComboBox* self, const char* windowRole ```
void q_fontcombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QFontComboBox* self, const char* filePath ```
void q_fontcombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QFontComboBox* self, double level ```
void q_fontcombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QFontComboBox* self ```
double q_fontcombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QFontComboBox* self, const char* toolTip ```
void q_fontcombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QFontComboBox* self, int msec ```
void q_fontcombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QFontComboBox* self, const char* statusTip ```
void q_fontcombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QFontComboBox* self, const char* whatsThis ```
void q_fontcombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QFontComboBox* self, const char* name ```
void q_fontcombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QFontComboBox* self, const char* description ```
void q_fontcombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QFontComboBox* self, enum Qt__LayoutDirection direction ```
void q_fontcombobox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QFontComboBox* self, QLocale* locale ```
void q_fontcombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QFontComboBox* self ```
QLocale* q_fontcombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFontComboBox* self, enum Qt__FocusReason reason ```
void q_fontcombobox_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QFontComboBox* self, enum Qt__FocusPolicy policy ```
void q_fontcombobox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_fontcombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QFontComboBox* self, QWidget* focusProxy ```
void q_fontcombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QFontComboBox* self, enum Qt__ContextMenuPolicy policy ```
void q_fontcombobox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFontComboBox* self, QCursor* param1 ```
void q_fontcombobox_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFontComboBox* self, QKeySequence* key ```
int32_t q_fontcombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QFontComboBox* self, int id ```
void q_fontcombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFontComboBox* self, int id ```
void q_fontcombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFontComboBox* self, int id ```
void q_fontcombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_fontcombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_fontcombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QFontComboBox* self, bool enable ```
void q_fontcombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QFontComboBox* self ```
QGraphicsProxyWidget* q_fontcombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontComboBox* self, int x, int y, int w, int h ```
void q_fontcombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontComboBox* self, QRect* param1 ```
void q_fontcombobox_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontComboBox* self, QRegion* param1 ```
void q_fontcombobox_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontComboBox* self, int x, int y, int w, int h ```
void q_fontcombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontComboBox* self, QRect* param1 ```
void q_fontcombobox_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontComboBox* self, QRegion* param1 ```
void q_fontcombobox_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QFontComboBox* self, bool hidden ```
void q_fontcombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QFontComboBox* self, QWidget* param1 ```
void q_fontcombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFontComboBox* self, int x, int y ```
void q_fontcombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFontComboBox* self, QPoint* param1 ```
void q_fontcombobox_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFontComboBox* self, int w, int h ```
void q_fontcombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFontComboBox* self, QSize* param1 ```
void q_fontcombobox_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFontComboBox* self, int x, int y, int w, int h ```
void q_fontcombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFontComboBox* self, QRect* geometry ```
void q_fontcombobox_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QFontComboBox* self ```
char* q_fontcombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QFontComboBox* self, const char* geometry ```
bool q_fontcombobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QFontComboBox* self, QWidget* param1 ```
bool q_fontcombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QFontComboBox* self, int state ```
void q_fontcombobox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QFontComboBox* self, int state ```
void q_fontcombobox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QFontComboBox* self ```
QSizePolicy* q_fontcombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFontComboBox* self, QSizePolicy* sizePolicy ```
void q_fontcombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFontComboBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_fontcombobox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QFontComboBox* self ```
QRegion* q_fontcombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFontComboBox* self, int left, int top, int right, int bottom ```
void q_fontcombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFontComboBox* self, QMargins* margins ```
void q_fontcombobox_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QFontComboBox* self ```
QMargins* q_fontcombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QFontComboBox* self ```
QRect* q_fontcombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QFontComboBox* self ```
QLayout* q_fontcombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QFontComboBox* self, QLayout* layout ```
void q_fontcombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFontComboBox* self, QWidget* parent ```
void q_fontcombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFontComboBox* self, QWidget* parent, int f ```
void q_fontcombobox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFontComboBox* self, int dx, int dy ```
void q_fontcombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFontComboBox* self, int dx, int dy, QRect* param3 ```
void q_fontcombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QFontComboBox* self, bool on ```
void q_fontcombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontComboBox* self, QAction* action ```
void q_fontcombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QFontComboBox* self, libqt_list /* of QAction* */ actions ```
void q_fontcombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QFontComboBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_fontcombobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QFontComboBox* self, QAction* before, QAction* action ```
void q_fontcombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QFontComboBox* self, QAction* action ```
void q_fontcombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QFontComboBox* self ```
libqt_list /* of QAction* */ q_fontcombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontComboBox* self, const char* text ```
QAction* q_fontcombobox_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontComboBox* self, QIcon* icon, const char* text ```
QAction* q_fontcombobox_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontComboBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_fontcombobox_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontComboBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_fontcombobox_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QFontComboBox* self ```
QWidget* q_fontcombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QFontComboBox* self, int typeVal ```
void q_fontcombobox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFontComboBox* self, enum Qt__WindowType param1 ```
void q_fontcombobox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QFontComboBox* self, int typeVal ```
void q_fontcombobox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_fontcombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFontComboBox* self, int x, int y ```
QWidget* q_fontcombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFontComboBox* self, QPoint* p ```
QWidget* q_fontcombobox_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFontComboBox* self, QPointF* p ```
QWidget* q_fontcombobox_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFontComboBox* self, enum Qt__WidgetAttribute param1 ```
void q_fontcombobox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QFontComboBox* self, enum Qt__WidgetAttribute param1 ```
bool q_fontcombobox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QFontComboBox* self, QWidget* child ```
bool q_fontcombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QFontComboBox* self, bool enabled ```
void q_fontcombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QFontComboBox* self ```
QBackingStore* q_fontcombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QFontComboBox* self ```
QWindow* q_fontcombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QFontComboBox* self ```
QScreen* q_fontcombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QFontComboBox* self, QScreen* screen ```
void q_fontcombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_fontcombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFontComboBox* self, const char* title ```
void q_fontcombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QWidget*, const char*) ```
void q_fontcombobox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFontComboBox* self, QIcon* icon ```
void q_fontcombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_fontcombobox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFontComboBox* self, const char* iconText ```
void q_fontcombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFontComboBox* self, void (*slot)(QWidget*, const char*) ```
void q_fontcombobox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFontComboBox* self, QPoint* pos ```
void q_fontcombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFontComboBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_fontcombobox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QFontComboBox* self ```
int64_t q_fontcombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QFontComboBox* self, int hints ```
void q_fontcombobox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_fontcombobox_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_fontcombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_fontcombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPainter* painter, QPoint* targetOffset ```
void q_fontcombobox_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_fontcombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontComboBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_fontcombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFontComboBox* self, QRect* rectangle ```
QPixmap* q_fontcombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFontComboBox* self, enum Qt__GestureType typeVal, int flags ```
void q_fontcombobox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFontComboBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_fontcombobox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFontComboBox* self, int id, bool enable ```
void q_fontcombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFontComboBox* self, int id, bool enable ```
void q_fontcombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFontComboBox* self, enum Qt__WindowType param1, bool on ```
void q_fontcombobox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFontComboBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_fontcombobox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_fontcombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_fontcombobox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFontComboBox* self ```
const char* q_fontcombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFontComboBox* self, char* name ```
void q_fontcombobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFontComboBox* self, bool b ```
bool q_fontcombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFontComboBox* self ```
QThread* q_fontcombobox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFontComboBox* self, QThread* thread ```
bool q_fontcombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFontComboBox* self, int interval ```
int32_t q_fontcombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFontComboBox* self, int id ```
void q_fontcombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFontComboBox* self, enum Qt__TimerId id ```
void q_fontcombobox_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFontComboBox* self ```
libqt_list /* of QObject* */ q_fontcombobox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFontComboBox* self, QObject* filterObj ```
void q_fontcombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFontComboBox* self, QObject* obj ```
void q_fontcombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_fontcombobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFontComboBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_fontcombobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_fontcombobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_fontcombobox_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFontComboBox* self, const char* name, QVariant* value ```
bool q_fontcombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFontComboBox* self, const char* name ```
QVariant* q_fontcombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFontComboBox* self ```
const char** q_fontcombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFontComboBox* self ```
QBindingStorage* q_fontcombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFontComboBox* self ```
const QBindingStorage* q_fontcombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontComboBox* self, void (*slot)(QObject*) ```
void q_fontcombobox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFontComboBox* self ```
QObject* q_fontcombobox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFontComboBox* self, const char* classname ```
bool q_fontcombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFontComboBox* self, QThread* thread, Disambiguated_t* param2 ```
bool q_fontcombobox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFontComboBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_fontcombobox_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fontcombobox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFontComboBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fontcombobox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontComboBox* self, QObject* param1 ```
void q_fontcombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontComboBox* self, void (*slot)(QObject*, QObject*) ```
void q_fontcombobox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QFontComboBox* self ```
double q_fontcombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QFontComboBox* self ```
double q_fontcombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_fontcombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_fontcombobox_encode_metric_f(int64_t metric, double value);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QAbstractItemModel* model ```
void q_fontcombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QAbstractItemModel* model ```
void q_fontcombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QAbstractItemModel*) ```
void q_fontcombobox_on_set_model(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
QSize* q_fontcombobox_qbase_minimum_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QSize* (*slot)() ```
void q_fontcombobox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)() ```
void q_fontcombobox_on_show_popup(void* self, void (*slot)());

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)() ```
void q_fontcombobox_on_hide_popup(void* self, void (*slot)());

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_fontcombobox_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_fontcombobox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QVariant* (*slot)(QFontComboBox*, enum Qt__InputMethodQuery) ```
void q_fontcombobox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QFocusEvent* e ```
void q_fontcombobox_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QFocusEvent* e ```
void q_fontcombobox_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QFocusEvent*) ```
void q_fontcombobox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QFocusEvent* e ```
void q_fontcombobox_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QFocusEvent* e ```
void q_fontcombobox_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QFocusEvent*) ```
void q_fontcombobox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* e ```
void q_fontcombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* e ```
void q_fontcombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QEvent*) ```
void q_fontcombobox_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QResizeEvent* e ```
void q_fontcombobox_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QResizeEvent* e ```
void q_fontcombobox_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QResizeEvent*) ```
void q_fontcombobox_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QPaintEvent* e ```
void q_fontcombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QPaintEvent* e ```
void q_fontcombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QPaintEvent*) ```
void q_fontcombobox_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QShowEvent* e ```
void q_fontcombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QShowEvent* e ```
void q_fontcombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QShowEvent*) ```
void q_fontcombobox_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QHideEvent* e ```
void q_fontcombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QHideEvent* e ```
void q_fontcombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QHideEvent*) ```
void q_fontcombobox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* e ```
void q_fontcombobox_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* e ```
void q_fontcombobox_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMouseEvent*) ```
void q_fontcombobox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* e ```
void q_fontcombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* e ```
void q_fontcombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMouseEvent*) ```
void q_fontcombobox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QKeyEvent* e ```
void q_fontcombobox_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QKeyEvent* e ```
void q_fontcombobox_qbase_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QKeyEvent*) ```
void q_fontcombobox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QKeyEvent* e ```
void q_fontcombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QKeyEvent* e ```
void q_fontcombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QKeyEvent*) ```
void q_fontcombobox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QWheelEvent* e ```
void q_fontcombobox_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QWheelEvent* e ```
void q_fontcombobox_qbase_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QWheelEvent*) ```
void q_fontcombobox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QContextMenuEvent* e ```
void q_fontcombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QContextMenuEvent* e ```
void q_fontcombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QContextMenuEvent*) ```
void q_fontcombobox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QInputMethodEvent* param1 ```
void q_fontcombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QInputMethodEvent* param1 ```
void q_fontcombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QInputMethodEvent*) ```
void q_fontcombobox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QStyleOptionComboBox* option ```
void q_fontcombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QStyleOptionComboBox* option ```
void q_fontcombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QStyleOptionComboBox*) ```
void q_fontcombobox_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, int32_t (*slot)() ```
void q_fontcombobox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, bool visible ```
void q_fontcombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, bool visible ```
void q_fontcombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, bool) ```
void q_fontcombobox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, int param1 ```
int32_t q_fontcombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, int param1 ```
int32_t q_fontcombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, int32_t (*slot)(QFontComboBox*, int) ```
void q_fontcombobox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)() ```
void q_fontcombobox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
QPaintEngine* q_fontcombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
QPaintEngine* q_fontcombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QPaintEngine* (*slot)() ```
void q_fontcombobox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* event ```
void q_fontcombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* event ```
void q_fontcombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMouseEvent*) ```
void q_fontcombobox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* event ```
void q_fontcombobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMouseEvent* event ```
void q_fontcombobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMouseEvent*) ```
void q_fontcombobox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QEnterEvent* event ```
void q_fontcombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QEnterEvent* event ```
void q_fontcombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QEnterEvent*) ```
void q_fontcombobox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* event ```
void q_fontcombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* event ```
void q_fontcombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QEvent*) ```
void q_fontcombobox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMoveEvent* event ```
void q_fontcombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMoveEvent* event ```
void q_fontcombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMoveEvent*) ```
void q_fontcombobox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QCloseEvent* event ```
void q_fontcombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QCloseEvent* event ```
void q_fontcombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QCloseEvent*) ```
void q_fontcombobox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QTabletEvent* event ```
void q_fontcombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QTabletEvent* event ```
void q_fontcombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QTabletEvent*) ```
void q_fontcombobox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QActionEvent* event ```
void q_fontcombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QActionEvent* event ```
void q_fontcombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QActionEvent*) ```
void q_fontcombobox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QDragEnterEvent* event ```
void q_fontcombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QDragEnterEvent* event ```
void q_fontcombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QDragEnterEvent*) ```
void q_fontcombobox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QDragMoveEvent* event ```
void q_fontcombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QDragMoveEvent* event ```
void q_fontcombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QDragMoveEvent*) ```
void q_fontcombobox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QDragLeaveEvent* event ```
void q_fontcombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QDragLeaveEvent* event ```
void q_fontcombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QDragLeaveEvent*) ```
void q_fontcombobox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QDropEvent* event ```
void q_fontcombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QDropEvent* event ```
void q_fontcombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QDropEvent*) ```
void q_fontcombobox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_fontcombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_fontcombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)(QFontComboBox*, const char*, void*, intptr_t*) ```
void q_fontcombobox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_fontcombobox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_fontcombobox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, int32_t (*slot)(QFontComboBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_fontcombobox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QPainter* painter ```
void q_fontcombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QPainter* painter ```
void q_fontcombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QPainter*) ```
void q_fontcombobox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QPoint* offset ```
QPaintDevice* q_fontcombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QPoint* offset ```
QPaintDevice* q_fontcombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QPaintDevice* (*slot)(QFontComboBox*, QPoint*) ```
void q_fontcombobox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
QPainter* q_fontcombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
QPainter* q_fontcombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QPainter* (*slot)() ```
void q_fontcombobox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, bool next ```
bool q_fontcombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, bool next ```
bool q_fontcombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)(QFontComboBox*, bool) ```
void q_fontcombobox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QObject* watched, QEvent* event ```
bool q_fontcombobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QObject* watched, QEvent* event ```
bool q_fontcombobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)(QFontComboBox*, QObject*, QEvent*) ```
void q_fontcombobox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QTimerEvent* event ```
void q_fontcombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QTimerEvent* event ```
void q_fontcombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QTimerEvent*) ```
void q_fontcombobox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QChildEvent* event ```
void q_fontcombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QChildEvent* event ```
void q_fontcombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QChildEvent*) ```
void q_fontcombobox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* event ```
void q_fontcombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QEvent* event ```
void q_fontcombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QEvent*) ```
void q_fontcombobox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
void q_fontcombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
void q_fontcombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMetaMethod*) ```
void q_fontcombobox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
void q_fontcombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
void q_fontcombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)(QFontComboBox*, QMetaMethod*) ```
void q_fontcombobox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)() ```
void q_fontcombobox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)() ```
void q_fontcombobox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, void (*slot)() ```
void q_fontcombobox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)() ```
void q_fontcombobox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
bool q_fontcombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)() ```
void q_fontcombobox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
QObject* q_fontcombobox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
QObject* q_fontcombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, QObject* (*slot)() ```
void q_fontcombobox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self ```
int32_t q_fontcombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, int32_t (*slot)() ```
void q_fontcombobox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, const char* signal ```
int32_t q_fontcombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, const char* signal ```
int32_t q_fontcombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, int32_t (*slot)(QFontComboBox*, const char*) ```
void q_fontcombobox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
bool q_fontcombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, QMetaMethod* signal ```
bool q_fontcombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, bool (*slot)(QFontComboBox*, QMetaMethod*) ```
void q_fontcombobox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_fontcombobox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_fontcombobox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontComboBox* self, double (*slot)(QFontComboBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_fontcombobox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QFontComboBox* self, void (*slot)(QObject*, const char*) ```
void q_fontcombobox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfontcombobox.html#dtor.QFontComboBox)
///
/// Delete this object from C++ memory.
///
/// ``` QFontComboBox* self ```
void q_fontcombobox_delete(void* self);

/// https://doc.qt.io/qt-6/qfontcombobox.html#types

typedef enum {
    QFONTCOMBOBOX_FONTFILTER_ALLFONTS = 0,
    QFONTCOMBOBOX_FONTFILTER_SCALABLEFONTS = 1,
    QFONTCOMBOBOX_FONTFILTER_NONSCALABLEFONTS = 2,
    QFONTCOMBOBOX_FONTFILTER_MONOSPACEDFONTS = 4,
    QFONTCOMBOBOX_FONTFILTER_PROPORTIONALFONTS = 8
} QFontComboBox__FontFilter;

#endif
