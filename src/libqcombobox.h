#pragma once
#ifndef SRCQT6C_LIBQCOMBOBOX_H
#define SRCQT6C_LIBQCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqevent.h"
#include "libqcompleter.h"
#include "libqicon.h"
#include "libqlineedit.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvalidator.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qcombobox.html

/// q_combobox_new constructs a new QComboBox object.
///
/// ``` QWidget* parent ```
QComboBox* q_combobox_new(void* parent);

/// q_combobox_new2 constructs a new QComboBox object.
///
///
QComboBox* q_combobox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QComboBox* self ```
const QMetaObject* q_combobox_meta_object(void* self);

/// ``` QComboBox* self, const char* param1 ```
void* q_combobox_metacast(void* self, const char* param1);

/// ``` QComboBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_combobox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QComboBox* self, int32_t (*slot)(QComboBox*, enum QMetaObject__Call, int, void*) ```
void q_combobox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QComboBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_combobox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_combobox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// ``` QComboBox* self ```
int32_t q_combobox_max_visible_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// ``` QComboBox* self, int maxItems ```
void q_combobox_set_max_visible_items(void* self, int maxItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// ``` QComboBox* self ```
int32_t q_combobox_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// ``` QComboBox* self, int max ```
void q_combobox_set_max_count(void* self, int max);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// ``` QComboBox* self ```
int32_t q_combobox_max_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// ``` QComboBox* self ```
bool q_combobox_duplicates_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// ``` QComboBox* self, bool enable ```
void q_combobox_set_duplicates_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// ``` QComboBox* self, bool frame ```
void q_combobox_set_frame(void* self, bool frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// ``` QComboBox* self ```
bool q_combobox_has_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// ``` QComboBox* self, const char* text ```
int32_t q_combobox_find_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QComboBox* self, QVariant* data ```
int32_t q_combobox_find_data(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// ``` QComboBox* self ```
int64_t q_combobox_insert_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// ``` QComboBox* self, enum QComboBox__InsertPolicy policy ```
void q_combobox_set_insert_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// ``` QComboBox* self ```
int64_t q_combobox_size_adjust_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// ``` QComboBox* self, enum QComboBox__SizeAdjustPolicy policy ```
void q_combobox_set_size_adjust_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// ``` QComboBox* self ```
int32_t q_combobox_minimum_contents_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// ``` QComboBox* self, int characters ```
void q_combobox_set_minimum_contents_length(void* self, int characters);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// ``` QComboBox* self ```
QSize* q_combobox_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// ``` QComboBox* self, QSize* size ```
void q_combobox_set_icon_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// ``` QComboBox* self, const char* placeholderText ```
void q_combobox_set_placeholder_text(void* self, const char* placeholderText);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// ``` QComboBox* self ```
const char* q_combobox_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// ``` QComboBox* self ```
bool q_combobox_is_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
///
/// ``` QComboBox* self, bool editable ```
void q_combobox_set_editable(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
///
/// ``` QComboBox* self, QLineEdit* edit ```
void q_combobox_set_line_edit(void* self, void* edit);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// ``` QComboBox* self ```
QLineEdit* q_combobox_line_edit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// ``` QComboBox* self, QValidator* v ```
void q_combobox_set_validator(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// ``` QComboBox* self ```
const QValidator* q_combobox_validator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// ``` QComboBox* self, QCompleter* c ```
void q_combobox_set_completer(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// ``` QComboBox* self ```
QCompleter* q_combobox_completer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// ``` QComboBox* self ```
QAbstractItemDelegate* q_combobox_item_delegate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// ``` QComboBox* self, QAbstractItemDelegate* delegate ```
void q_combobox_set_item_delegate(void* self, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// ``` QComboBox* self ```
QAbstractItemModel* q_combobox_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// ``` QComboBox* self, QAbstractItemModel* model ```
void q_combobox_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QAbstractItemModel*) ```
void q_combobox_on_set_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QAbstractItemModel* model ```
void q_combobox_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// ``` QComboBox* self ```
QModelIndex* q_combobox_root_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// ``` QComboBox* self, QModelIndex* index ```
void q_combobox_set_root_model_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// ``` QComboBox* self ```
int32_t q_combobox_model_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// ``` QComboBox* self, int visibleColumn ```
void q_combobox_set_model_column(void* self, int visibleColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// ``` QComboBox* self ```
int32_t q_combobox_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// ``` QComboBox* self ```
const char* q_combobox_current_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// ``` QComboBox* self ```
QVariant* q_combobox_current_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// ``` QComboBox* self, int index ```
const char* q_combobox_item_text(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// ``` QComboBox* self, int index ```
QIcon* q_combobox_item_icon(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// ``` QComboBox* self, int index ```
QVariant* q_combobox_item_data(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QComboBox* self, const char* text ```
void q_combobox_add_item(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QComboBox* self, QIcon* icon, const char* text ```
void q_combobox_add_item2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// ``` QComboBox* self, const char* texts[] ```
void q_combobox_add_items(void* self, const char* texts[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QComboBox* self, int index, const char* text ```
void q_combobox_insert_item(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QComboBox* self, int index, QIcon* icon, const char* text ```
void q_combobox_insert_item2(void* self, int index, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// ``` QComboBox* self, int index, const char* texts[] ```
void q_combobox_insert_items(void* self, int index, const char* texts[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// ``` QComboBox* self, int index ```
void q_combobox_insert_separator(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// ``` QComboBox* self, int index ```
void q_combobox_remove_item(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// ``` QComboBox* self, int index, const char* text ```
void q_combobox_set_item_text(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// ``` QComboBox* self, int index, QIcon* icon ```
void q_combobox_set_item_icon(void* self, int index, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// ``` QComboBox* self, int index, QVariant* value ```
void q_combobox_set_item_data(void* self, int index, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// ``` QComboBox* self ```
QAbstractItemView* q_combobox_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// ``` QComboBox* self, QAbstractItemView* itemView ```
void q_combobox_set_view(void* self, void* itemView);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// ``` QComboBox* self ```
QSize* q_combobox_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, QSize* (*slot)() ```
void q_combobox_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QComboBox* self ```
QSize* q_combobox_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// ``` QComboBox* self ```
QSize* q_combobox_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, QSize* (*slot)() ```
void q_combobox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QComboBox* self ```
QSize* q_combobox_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// ``` QComboBox* self ```
void q_combobox_show_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)() ```
void q_combobox_on_show_popup(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Base class method implementation
///
/// ``` QComboBox* self ```
void q_combobox_qbase_show_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// ``` QComboBox* self ```
void q_combobox_hide_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)() ```
void q_combobox_on_hide_popup(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Base class method implementation
///
/// ``` QComboBox* self ```
void q_combobox_qbase_hide_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// ``` QComboBox* self, QEvent* event ```
bool q_combobox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, bool (*slot)(QComboBox*, QEvent*) ```
void q_combobox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QEvent* event ```
bool q_combobox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// ``` QComboBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_combobox_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, QVariant* (*slot)(QComboBox*, enum Qt__InputMethodQuery) ```
void q_combobox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QComboBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_combobox_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// ``` QComboBox* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_combobox_input_method_query2(void* self, int64_t query, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// ``` QComboBox* self ```
void q_combobox_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// ``` QComboBox* self ```
void q_combobox_clear_edit_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// ``` QComboBox* self, const char* text ```
void q_combobox_set_edit_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// ``` QComboBox* self, int index ```
void q_combobox_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// ``` QComboBox* self, const char* text ```
void q_combobox_set_current_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// ``` QComboBox* self, const char* param1 ```
void q_combobox_edit_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_combobox_on_edit_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// ``` QComboBox* self, int index ```
void q_combobox_activated(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, int) ```
void q_combobox_on_activated(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// ``` QComboBox* self, const char* param1 ```
void q_combobox_text_activated(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_combobox_on_text_activated(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// ``` QComboBox* self, int index ```
void q_combobox_highlighted(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, int) ```
void q_combobox_on_highlighted(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// ``` QComboBox* self, const char* param1 ```
void q_combobox_text_highlighted(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_combobox_on_text_highlighted(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// ``` QComboBox* self, int index ```
void q_combobox_current_index_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, int) ```
void q_combobox_on_current_index_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// ``` QComboBox* self, const char* param1 ```
void q_combobox_current_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, const char*) ```
void q_combobox_on_current_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// ``` QComboBox* self, QFocusEvent* e ```
void q_combobox_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QFocusEvent*) ```
void q_combobox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QFocusEvent* e ```
void q_combobox_qbase_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// ``` QComboBox* self, QFocusEvent* e ```
void q_combobox_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QFocusEvent*) ```
void q_combobox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QFocusEvent* e ```
void q_combobox_qbase_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// ``` QComboBox* self, QEvent* e ```
void q_combobox_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QEvent*) ```
void q_combobox_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QEvent* e ```
void q_combobox_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// ``` QComboBox* self, QResizeEvent* e ```
void q_combobox_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QResizeEvent*) ```
void q_combobox_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QResizeEvent* e ```
void q_combobox_qbase_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// ``` QComboBox* self, QPaintEvent* e ```
void q_combobox_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QPaintEvent*) ```
void q_combobox_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QPaintEvent* e ```
void q_combobox_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// ``` QComboBox* self, QShowEvent* e ```
void q_combobox_show_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QShowEvent*) ```
void q_combobox_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QShowEvent* e ```
void q_combobox_qbase_show_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// ``` QComboBox* self, QHideEvent* e ```
void q_combobox_hide_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QHideEvent*) ```
void q_combobox_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QHideEvent* e ```
void q_combobox_qbase_hide_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// ``` QComboBox* self, QMouseEvent* e ```
void q_combobox_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMouseEvent*) ```
void q_combobox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QMouseEvent* e ```
void q_combobox_qbase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// ``` QComboBox* self, QMouseEvent* e ```
void q_combobox_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMouseEvent*) ```
void q_combobox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QMouseEvent* e ```
void q_combobox_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// ``` QComboBox* self, QKeyEvent* e ```
void q_combobox_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QKeyEvent*) ```
void q_combobox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QKeyEvent* e ```
void q_combobox_qbase_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// ``` QComboBox* self, QKeyEvent* e ```
void q_combobox_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QKeyEvent*) ```
void q_combobox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QKeyEvent* e ```
void q_combobox_qbase_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// ``` QComboBox* self, QWheelEvent* e ```
void q_combobox_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QWheelEvent*) ```
void q_combobox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QWheelEvent* e ```
void q_combobox_qbase_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// ``` QComboBox* self, QContextMenuEvent* e ```
void q_combobox_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QContextMenuEvent*) ```
void q_combobox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QContextMenuEvent* e ```
void q_combobox_qbase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// ``` QComboBox* self, QInputMethodEvent* param1 ```
void q_combobox_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QInputMethodEvent*) ```
void q_combobox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QInputMethodEvent* param1 ```
void q_combobox_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// ``` QComboBox* self, QStyleOptionComboBox* option ```
void q_combobox_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QStyleOptionComboBox*) ```
void q_combobox_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QComboBox* self, QStyleOptionComboBox* option ```
void q_combobox_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_combobox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_combobox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// ``` QComboBox* self, const char* text, int flags ```
int32_t q_combobox_find_text2(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QComboBox* self, QVariant* data, int role ```
int32_t q_combobox_find_data2(void* self, void* data, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// ``` QComboBox* self, QVariant* data, int role, int flags ```
int32_t q_combobox_find_data3(void* self, void* data, int role, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// ``` QComboBox* self, int role ```
QVariant* q_combobox_current_data1(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// ``` QComboBox* self, int index, int role ```
QVariant* q_combobox_item_data2(void* self, int index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QComboBox* self, const char* text, QVariant* userData ```
void q_combobox_add_item22(void* self, const char* text, void* userData);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// ``` QComboBox* self, QIcon* icon, const char* text, QVariant* userData ```
void q_combobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QComboBox* self, int index, const char* text, QVariant* userData ```
void q_combobox_insert_item3(void* self, int index, const char* text, void* userData);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// ``` QComboBox* self, int index, QIcon* icon, const char* text, QVariant* userData ```
void q_combobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// ``` QComboBox* self, int index, QVariant* value, int role ```
void q_combobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QComboBox* self ```
uintptr_t q_combobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QComboBox* self ```
void q_combobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QComboBox* self ```
uintptr_t q_combobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QComboBox* self ```
uintptr_t q_combobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QComboBox* self ```
QStyle* q_combobox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QComboBox* self, QStyle* style ```
void q_combobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QComboBox* self ```
bool q_combobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QComboBox* self ```
bool q_combobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QComboBox* self ```
bool q_combobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QComboBox* self ```
int64_t q_combobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QComboBox* self, enum Qt__WindowModality windowModality ```
void q_combobox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QComboBox* self ```
bool q_combobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QComboBox* self, QWidget* param1 ```
bool q_combobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QComboBox* self, bool enabled ```
void q_combobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QComboBox* self, bool disabled ```
void q_combobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QComboBox* self, bool windowModified ```
void q_combobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QComboBox* self ```
QRect* q_combobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QComboBox* self ```
const QRect* q_combobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QComboBox* self ```
QRect* q_combobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QComboBox* self ```
int32_t q_combobox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QComboBox* self ```
int32_t q_combobox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QComboBox* self ```
QPoint* q_combobox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QComboBox* self ```
QSize* q_combobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QComboBox* self ```
QSize* q_combobox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QComboBox* self ```
int32_t q_combobox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QComboBox* self ```
int32_t q_combobox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QComboBox* self ```
QRect* q_combobox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QComboBox* self ```
QRect* q_combobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QComboBox* self ```
QRegion* q_combobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QComboBox* self ```
QSize* q_combobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QComboBox* self ```
QSize* q_combobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QComboBox* self ```
int32_t q_combobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QComboBox* self ```
int32_t q_combobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QComboBox* self ```
int32_t q_combobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QComboBox* self ```
int32_t q_combobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QComboBox* self, QSize* minimumSize ```
void q_combobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QComboBox* self, int minw, int minh ```
void q_combobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QComboBox* self, QSize* maximumSize ```
void q_combobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QComboBox* self, int maxw, int maxh ```
void q_combobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QComboBox* self, int minw ```
void q_combobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QComboBox* self, int minh ```
void q_combobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QComboBox* self, int maxw ```
void q_combobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QComboBox* self, int maxh ```
void q_combobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QComboBox* self ```
QSize* q_combobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QComboBox* self, QSize* sizeIncrement ```
void q_combobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QComboBox* self, int w, int h ```
void q_combobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QComboBox* self ```
QSize* q_combobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QComboBox* self, QSize* baseSize ```
void q_combobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QComboBox* self, int basew, int baseh ```
void q_combobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QComboBox* self, QSize* fixedSize ```
void q_combobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QComboBox* self, int w, int h ```
void q_combobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QComboBox* self, int w ```
void q_combobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QComboBox* self, int h ```
void q_combobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QComboBox* self, QPointF* param1 ```
QPointF* q_combobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QComboBox* self, QPoint* param1 ```
QPoint* q_combobox_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QComboBox* self, QPointF* param1 ```
QPointF* q_combobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QComboBox* self, QPoint* param1 ```
QPoint* q_combobox_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QComboBox* self, QPointF* param1 ```
QPointF* q_combobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QComboBox* self, QPoint* param1 ```
QPoint* q_combobox_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QComboBox* self, QPointF* param1 ```
QPointF* q_combobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QComboBox* self, QPoint* param1 ```
QPoint* q_combobox_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QComboBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_combobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QComboBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_combobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QComboBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_combobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QComboBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_combobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QComboBox* self ```
const QPalette* q_combobox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QComboBox* self, QPalette* palette ```
void q_combobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QComboBox* self, enum QPalette__ColorRole backgroundRole ```
void q_combobox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QComboBox* self ```
int64_t q_combobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QComboBox* self, enum QPalette__ColorRole foregroundRole ```
void q_combobox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QComboBox* self ```
int64_t q_combobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QComboBox* self ```
const QFont* q_combobox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QComboBox* self, QFont* font ```
void q_combobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QComboBox* self ```
QFontMetrics* q_combobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QComboBox* self ```
QFontInfo* q_combobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QComboBox* self ```
QCursor* q_combobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QComboBox* self, QCursor* cursor ```
void q_combobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QComboBox* self ```
void q_combobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QComboBox* self, bool enable ```
void q_combobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QComboBox* self ```
bool q_combobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QComboBox* self ```
bool q_combobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QComboBox* self, bool enable ```
void q_combobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QComboBox* self ```
bool q_combobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QComboBox* self, QBitmap* mask ```
void q_combobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QComboBox* self, QRegion* mask ```
void q_combobox_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QComboBox* self ```
QRegion* q_combobox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QComboBox* self ```
void q_combobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPaintDevice* target ```
void q_combobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPainter* painter ```
void q_combobox_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QComboBox* self ```
QPixmap* q_combobox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QComboBox* self ```
QGraphicsEffect* q_combobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QComboBox* self, QGraphicsEffect* effect ```
void q_combobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QComboBox* self, enum Qt__GestureType typeVal ```
void q_combobox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QComboBox* self, enum Qt__GestureType typeVal ```
void q_combobox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QComboBox* self, const char* windowTitle ```
void q_combobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QComboBox* self, const char* styleSheet ```
void q_combobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QComboBox* self ```
const char* q_combobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QComboBox* self ```
const char* q_combobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QComboBox* self, QIcon* icon ```
void q_combobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QComboBox* self ```
QIcon* q_combobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QComboBox* self, const char* windowIconText ```
void q_combobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QComboBox* self ```
const char* q_combobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QComboBox* self, const char* windowRole ```
void q_combobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QComboBox* self ```
const char* q_combobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QComboBox* self, const char* filePath ```
void q_combobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QComboBox* self ```
const char* q_combobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QComboBox* self, double level ```
void q_combobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QComboBox* self ```
double q_combobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QComboBox* self ```
bool q_combobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QComboBox* self, const char* toolTip ```
void q_combobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QComboBox* self ```
const char* q_combobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QComboBox* self, int msec ```
void q_combobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QComboBox* self ```
int32_t q_combobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QComboBox* self, const char* statusTip ```
void q_combobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QComboBox* self ```
const char* q_combobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QComboBox* self, const char* whatsThis ```
void q_combobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QComboBox* self ```
const char* q_combobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QComboBox* self ```
const char* q_combobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QComboBox* self, const char* name ```
void q_combobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QComboBox* self ```
const char* q_combobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QComboBox* self, const char* description ```
void q_combobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QComboBox* self, enum Qt__LayoutDirection direction ```
void q_combobox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QComboBox* self ```
int64_t q_combobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QComboBox* self ```
void q_combobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QComboBox* self, QLocale* locale ```
void q_combobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QComboBox* self ```
QLocale* q_combobox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QComboBox* self ```
void q_combobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QComboBox* self ```
bool q_combobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QComboBox* self ```
bool q_combobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QComboBox* self ```
void q_combobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QComboBox* self ```
bool q_combobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QComboBox* self ```
void q_combobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QComboBox* self ```
void q_combobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QComboBox* self, enum Qt__FocusReason reason ```
void q_combobox_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QComboBox* self ```
int64_t q_combobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QComboBox* self, enum Qt__FocusPolicy policy ```
void q_combobox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QComboBox* self ```
bool q_combobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_combobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QComboBox* self, QWidget* focusProxy ```
void q_combobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QComboBox* self ```
int64_t q_combobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QComboBox* self, enum Qt__ContextMenuPolicy policy ```
void q_combobox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QComboBox* self ```
void q_combobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QComboBox* self, QCursor* param1 ```
void q_combobox_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QComboBox* self ```
void q_combobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QComboBox* self ```
void q_combobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QComboBox* self ```
void q_combobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QComboBox* self, QKeySequence* key ```
int32_t q_combobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QComboBox* self, int id ```
void q_combobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QComboBox* self, int id ```
void q_combobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QComboBox* self, int id ```
void q_combobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_combobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_combobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QComboBox* self ```
bool q_combobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QComboBox* self, bool enable ```
void q_combobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QComboBox* self ```
QGraphicsProxyWidget* q_combobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QComboBox* self ```
void q_combobox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QComboBox* self ```
void q_combobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QComboBox* self, int x, int y, int w, int h ```
void q_combobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QComboBox* self, QRect* param1 ```
void q_combobox_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QComboBox* self, QRegion* param1 ```
void q_combobox_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QComboBox* self, int x, int y, int w, int h ```
void q_combobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QComboBox* self, QRect* param1 ```
void q_combobox_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QComboBox* self, QRegion* param1 ```
void q_combobox_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QComboBox* self, bool hidden ```
void q_combobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QComboBox* self ```
void q_combobox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QComboBox* self ```
void q_combobox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QComboBox* self ```
void q_combobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QComboBox* self ```
void q_combobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QComboBox* self ```
void q_combobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QComboBox* self ```
void q_combobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QComboBox* self ```
bool q_combobox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QComboBox* self ```
void q_combobox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QComboBox* self ```
void q_combobox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QComboBox* self, QWidget* param1 ```
void q_combobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QComboBox* self, int x, int y ```
void q_combobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QComboBox* self, QPoint* param1 ```
void q_combobox_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QComboBox* self, int w, int h ```
void q_combobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QComboBox* self, QSize* param1 ```
void q_combobox_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QComboBox* self, int x, int y, int w, int h ```
void q_combobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QComboBox* self, QRect* geometry ```
void q_combobox_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QComboBox* self ```
char* q_combobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QComboBox* self, const char* geometry ```
bool q_combobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QComboBox* self ```
void q_combobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QComboBox* self ```
bool q_combobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QComboBox* self, QWidget* param1 ```
bool q_combobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QComboBox* self ```
bool q_combobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QComboBox* self ```
bool q_combobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QComboBox* self ```
bool q_combobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QComboBox* self ```
bool q_combobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QComboBox* self ```
int64_t q_combobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QComboBox* self, int state ```
void q_combobox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QComboBox* self, int state ```
void q_combobox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QComboBox* self ```
QSizePolicy* q_combobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QComboBox* self, QSizePolicy* sizePolicy ```
void q_combobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QComboBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_combobox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QComboBox* self ```
QRegion* q_combobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QComboBox* self, int left, int top, int right, int bottom ```
void q_combobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QComboBox* self, QMargins* margins ```
void q_combobox_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QComboBox* self ```
QMargins* q_combobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QComboBox* self ```
QRect* q_combobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QComboBox* self ```
QLayout* q_combobox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QComboBox* self, QLayout* layout ```
void q_combobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QComboBox* self ```
void q_combobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QComboBox* self, QWidget* parent ```
void q_combobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QComboBox* self, QWidget* parent, int f ```
void q_combobox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QComboBox* self, int dx, int dy ```
void q_combobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QComboBox* self, int dx, int dy, QRect* param3 ```
void q_combobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QComboBox* self ```
bool q_combobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QComboBox* self, bool on ```
void q_combobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QComboBox* self, QAction* action ```
void q_combobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QComboBox* self, libqt_list /* of QAction* */ actions ```
void q_combobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QComboBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_combobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QComboBox* self, QAction* before, QAction* action ```
void q_combobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QComboBox* self, QAction* action ```
void q_combobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QComboBox* self ```
libqt_list /* of QAction* */ q_combobox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QComboBox* self, const char* text ```
QAction* q_combobox_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QComboBox* self, QIcon* icon, const char* text ```
QAction* q_combobox_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QComboBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_combobox_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QComboBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_combobox_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QComboBox* self ```
QWidget* q_combobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QComboBox* self, int typeVal ```
void q_combobox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QComboBox* self ```
int64_t q_combobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QComboBox* self, enum Qt__WindowType param1 ```
void q_combobox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QComboBox* self, int typeVal ```
void q_combobox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QComboBox* self ```
int64_t q_combobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_combobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QComboBox* self, int x, int y ```
QWidget* q_combobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QComboBox* self, QPoint* p ```
QWidget* q_combobox_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QComboBox* self, enum Qt__WidgetAttribute param1 ```
void q_combobox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QComboBox* self, enum Qt__WidgetAttribute param1 ```
bool q_combobox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QComboBox* self ```
void q_combobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QComboBox* self, QWidget* child ```
bool q_combobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QComboBox* self ```
bool q_combobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QComboBox* self, bool enabled ```
void q_combobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QComboBox* self ```
QBackingStore* q_combobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QComboBox* self ```
QWindow* q_combobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QComboBox* self ```
QScreen* q_combobox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QComboBox* self, QScreen* screen ```
void q_combobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_combobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QComboBox* self, const char* title ```
void q_combobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QComboBox* self, void (*slot)(QWidget*, const char*) ```
void q_combobox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QComboBox* self, QIcon* icon ```
void q_combobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QComboBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_combobox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QComboBox* self, const char* iconText ```
void q_combobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QComboBox* self, void (*slot)(QWidget*, const char*) ```
void q_combobox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QComboBox* self, QPoint* pos ```
void q_combobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QComboBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_combobox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QComboBox* self ```
int64_t q_combobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QComboBox* self, int hints ```
void q_combobox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_combobox_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_combobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_combobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPainter* painter, QPoint* targetOffset ```
void q_combobox_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_combobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QComboBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_combobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QComboBox* self, QRect* rectangle ```
QPixmap* q_combobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QComboBox* self, enum Qt__GestureType typeVal, int flags ```
void q_combobox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QComboBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_combobox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QComboBox* self, int id, bool enable ```
void q_combobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QComboBox* self, int id, bool enable ```
void q_combobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QComboBox* self, enum Qt__WindowType param1, bool on ```
void q_combobox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QComboBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_combobox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_combobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_combobox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QComboBox* self ```
const char* q_combobox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QComboBox* self, char* name ```
void q_combobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QComboBox* self ```
bool q_combobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QComboBox* self ```
bool q_combobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QComboBox* self ```
bool q_combobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QComboBox* self ```
bool q_combobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QComboBox* self, bool b ```
bool q_combobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QComboBox* self ```
QThread* q_combobox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QComboBox* self, QThread* thread ```
void q_combobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QComboBox* self, int interval ```
int32_t q_combobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QComboBox* self, int id ```
void q_combobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QComboBox* self ```
libqt_list /* of QObject* */ q_combobox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QComboBox* self, QObject* filterObj ```
void q_combobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QComboBox* self, QObject* obj ```
void q_combobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_combobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QComboBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_combobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_combobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_combobox_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QComboBox* self ```
void q_combobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QComboBox* self ```
void q_combobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QComboBox* self, const char* name, QVariant* value ```
bool q_combobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QComboBox* self, const char* name ```
QVariant* q_combobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QComboBox* self ```
const char** q_combobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QComboBox* self ```
QBindingStorage* q_combobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QComboBox* self ```
const QBindingStorage* q_combobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QComboBox* self ```
void q_combobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QComboBox* self, void (*slot)(QObject*) ```
void q_combobox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QComboBox* self ```
QObject* q_combobox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QComboBox* self, const char* classname ```
bool q_combobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QComboBox* self ```
void q_combobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QComboBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_combobox_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_combobox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QComboBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_combobox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QComboBox* self, QObject* param1 ```
void q_combobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QComboBox* self, void (*slot)(QObject*, QObject*) ```
void q_combobox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QComboBox* self ```
bool q_combobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QComboBox* self ```
int32_t q_combobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QComboBox* self ```
int32_t q_combobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QComboBox* self ```
int32_t q_combobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QComboBox* self ```
int32_t q_combobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QComboBox* self ```
int32_t q_combobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QComboBox* self ```
int32_t q_combobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QComboBox* self ```
double q_combobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QComboBox* self ```
double q_combobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QComboBox* self ```
int32_t q_combobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QComboBox* self ```
int32_t q_combobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_combobox_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
int32_t q_combobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
int32_t q_combobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, int32_t (*slot)() ```
void q_combobox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, bool visible ```
void q_combobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, bool visible ```
void q_combobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, bool) ```
void q_combobox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, int param1 ```
int32_t q_combobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, int param1 ```
int32_t q_combobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, int32_t (*slot)(QComboBox*, int) ```
void q_combobox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)() ```
void q_combobox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
QPaintEngine* q_combobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
QPaintEngine* q_combobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, QPaintEngine* (*slot)() ```
void q_combobox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMouseEvent* event ```
void q_combobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMouseEvent* event ```
void q_combobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMouseEvent*) ```
void q_combobox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMouseEvent* event ```
void q_combobox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMouseEvent* event ```
void q_combobox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMouseEvent*) ```
void q_combobox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QEnterEvent* event ```
void q_combobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QEnterEvent* event ```
void q_combobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QEnterEvent*) ```
void q_combobox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QEvent* event ```
void q_combobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QEvent* event ```
void q_combobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QEvent*) ```
void q_combobox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMoveEvent* event ```
void q_combobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMoveEvent* event ```
void q_combobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMoveEvent*) ```
void q_combobox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QCloseEvent* event ```
void q_combobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QCloseEvent* event ```
void q_combobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QCloseEvent*) ```
void q_combobox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QTabletEvent* event ```
void q_combobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QTabletEvent* event ```
void q_combobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QTabletEvent*) ```
void q_combobox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QActionEvent* event ```
void q_combobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QActionEvent* event ```
void q_combobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QActionEvent*) ```
void q_combobox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QDragEnterEvent* event ```
void q_combobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QDragEnterEvent* event ```
void q_combobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QDragEnterEvent*) ```
void q_combobox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QDragMoveEvent* event ```
void q_combobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QDragMoveEvent* event ```
void q_combobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QDragMoveEvent*) ```
void q_combobox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QDragLeaveEvent* event ```
void q_combobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QDragLeaveEvent* event ```
void q_combobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QDragLeaveEvent*) ```
void q_combobox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QDropEvent* event ```
void q_combobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QDropEvent* event ```
void q_combobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QDropEvent*) ```
void q_combobox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_combobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_combobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)(QComboBox*, const char*, void*, intptr_t*) ```
void q_combobox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_combobox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_combobox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, int32_t (*slot)(QComboBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_combobox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QPainter* painter ```
void q_combobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QPainter* painter ```
void q_combobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QPainter*) ```
void q_combobox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QPoint* offset ```
QPaintDevice* q_combobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QPoint* offset ```
QPaintDevice* q_combobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, QPaintDevice* (*slot)(QComboBox*, QPoint*) ```
void q_combobox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
QPainter* q_combobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
QPainter* q_combobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, QPainter* (*slot)() ```
void q_combobox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, bool next ```
bool q_combobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, bool next ```
bool q_combobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)(QComboBox*, bool) ```
void q_combobox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QObject* watched, QEvent* event ```
bool q_combobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QObject* watched, QEvent* event ```
bool q_combobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)(QComboBox*, QObject*, QEvent*) ```
void q_combobox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QTimerEvent* event ```
void q_combobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QTimerEvent* event ```
void q_combobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QTimerEvent*) ```
void q_combobox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QChildEvent* event ```
void q_combobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QChildEvent* event ```
void q_combobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QChildEvent*) ```
void q_combobox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QEvent* event ```
void q_combobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QEvent* event ```
void q_combobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QEvent*) ```
void q_combobox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
void q_combobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
void q_combobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMetaMethod*) ```
void q_combobox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
void q_combobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
void q_combobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)(QComboBox*, QMetaMethod*) ```
void q_combobox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)() ```
void q_combobox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)() ```
void q_combobox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
void q_combobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, void (*slot)() ```
void q_combobox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)() ```
void q_combobox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
bool q_combobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)() ```
void q_combobox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
QObject* q_combobox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
QObject* q_combobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, QObject* (*slot)() ```
void q_combobox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self ```
int32_t q_combobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self ```
int32_t q_combobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, int32_t (*slot)() ```
void q_combobox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, const char* signal ```
int32_t q_combobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, const char* signal ```
int32_t q_combobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, int32_t (*slot)(QComboBox*, const char*) ```
void q_combobox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
bool q_combobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QComboBox* self, QMetaMethod* signal ```
bool q_combobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QComboBox* self, bool (*slot)(QComboBox*, QMetaMethod*) ```
void q_combobox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QComboBox* self, void (*slot)(QObject*, const char*) ```
void q_combobox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#dtor.QComboBox)
///
/// Delete this object from C++ memory.
///
/// ``` QComboBox* self ```
void q_combobox_delete(void* self);

/// https://doc.qt.io/qt-6/qcombobox.html#types

typedef enum {
    QCOMBOBOX_INSERTPOLICY_NOINSERT = 0,
    QCOMBOBOX_INSERTPOLICY_INSERTATTOP = 1,
    QCOMBOBOX_INSERTPOLICY_INSERTATCURRENT = 2,
    QCOMBOBOX_INSERTPOLICY_INSERTATBOTTOM = 3,
    QCOMBOBOX_INSERTPOLICY_INSERTAFTERCURRENT = 4,
    QCOMBOBOX_INSERTPOLICY_INSERTBEFORECURRENT = 5,
    QCOMBOBOX_INSERTPOLICY_INSERTALPHABETICALLY = 6
} QComboBox__InsertPolicy;

typedef enum {
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTS = 0,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTSONFIRSTSHOW = 1,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOMINIMUMCONTENTSLENGTHWITHICON = 2
} QComboBox__SizeAdjustPolicy;

#endif
