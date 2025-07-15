#pragma once
#ifndef SRCQT6C_LIBQLISTWIDGET_H
#define SRCQT6C_LIBQLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlistwidgetitem.html

/// q_listwidgetitem_new constructs a new QListWidgetItem object.
///
///
QListWidgetItem* q_listwidgetitem_new();

/// q_listwidgetitem_new2 constructs a new QListWidgetItem object.
///
/// ``` const char* text ```
QListWidgetItem* q_listwidgetitem_new2(const char* text);

/// q_listwidgetitem_new3 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text ```
QListWidgetItem* q_listwidgetitem_new3(void* icon, const char* text);

/// q_listwidgetitem_new4 constructs a new QListWidgetItem object.
///
/// ``` QListWidgetItem* other ```
QListWidgetItem* q_listwidgetitem_new4(void* other);

/// q_listwidgetitem_new5 constructs a new QListWidgetItem object.
///
/// ``` QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new5(void* listview);

/// q_listwidgetitem_new6 constructs a new QListWidgetItem object.
///
/// ``` QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new6(void* listview, int typeVal);

/// q_listwidgetitem_new7 constructs a new QListWidgetItem object.
///
/// ``` const char* text, QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new7(const char* text, void* listview);

/// q_listwidgetitem_new8 constructs a new QListWidgetItem object.
///
/// ``` const char* text, QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new8(const char* text, void* listview, int typeVal);

/// q_listwidgetitem_new9 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text, QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new9(void* icon, const char* text, void* listview);

/// q_listwidgetitem_new10 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text, QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new10(void* icon, const char* text, void* listview, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// ``` QListWidgetItem* self ```
QListWidgetItem* q_listwidgetitem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, QListWidgetItem* (*slot)() ```
void q_listwidgetitem_on_clone(void* self, QListWidgetItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self ```
QListWidgetItem* q_listwidgetitem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#listWidget)
///
/// ``` QListWidgetItem* self ```
QListWidget* q_listwidgetitem_list_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSelected)
///
/// ``` QListWidgetItem* self, bool selectVal ```
void q_listwidgetitem_set_selected(void* self, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isSelected)
///
/// ``` QListWidgetItem* self ```
bool q_listwidgetitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setHidden)
///
/// ``` QListWidgetItem* self, bool hide ```
void q_listwidgetitem_set_hidden(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isHidden)
///
/// ``` QListWidgetItem* self ```
bool q_listwidgetitem_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#flags)
///
/// ``` QListWidgetItem* self ```
int64_t q_listwidgetitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFlags)
///
/// ``` QListWidgetItem* self, int flags ```
void q_listwidgetitem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#text)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setText)
///
/// ``` QListWidgetItem* self, const char* text ```
void q_listwidgetitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#icon)
///
/// ``` QListWidgetItem* self ```
QIcon* q_listwidgetitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setIcon)
///
/// ``` QListWidgetItem* self, QIcon* icon ```
void q_listwidgetitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#statusTip)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setStatusTip)
///
/// ``` QListWidgetItem* self, const char* statusTip ```
void q_listwidgetitem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#toolTip)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setToolTip)
///
/// ``` QListWidgetItem* self, const char* toolTip ```
void q_listwidgetitem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#whatsThis)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setWhatsThis)
///
/// ``` QListWidgetItem* self, const char* whatsThis ```
void q_listwidgetitem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#font)
///
/// ``` QListWidgetItem* self ```
QFont* q_listwidgetitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFont)
///
/// ``` QListWidgetItem* self, QFont* font ```
void q_listwidgetitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#textAlignment)
///
/// ``` QListWidgetItem* self ```
int32_t q_listwidgetitem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, int alignment ```
void q_listwidgetitem_set_text_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, enum Qt__AlignmentFlag alignment ```
void q_listwidgetitem_set_text_alignment2(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, int alignment ```
void q_listwidgetitem_set_text_alignment3(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#background)
///
/// ``` QListWidgetItem* self ```
QBrush* q_listwidgetitem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setBackground)
///
/// ``` QListWidgetItem* self, QBrush* brush ```
void q_listwidgetitem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#foreground)
///
/// ``` QListWidgetItem* self ```
QBrush* q_listwidgetitem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setForeground)
///
/// ``` QListWidgetItem* self, QBrush* brush ```
void q_listwidgetitem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#checkState)
///
/// ``` QListWidgetItem* self ```
int64_t q_listwidgetitem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setCheckState)
///
/// ``` QListWidgetItem* self, enum Qt__CheckState state ```
void q_listwidgetitem_set_check_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#sizeHint)
///
/// ``` QListWidgetItem* self ```
QSize* q_listwidgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSizeHint)
///
/// ``` QListWidgetItem* self, QSize* size ```
void q_listwidgetitem_set_size_hint(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// ``` QListWidgetItem* self, int role ```
QVariant* q_listwidgetitem_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, QVariant* (*slot)(QListWidgetItem*, int) ```
void q_listwidgetitem_on_data(void* self, QVariant* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self, int role ```
QVariant* q_listwidgetitem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// ``` QListWidgetItem* self, int role, QVariant* value ```
void q_listwidgetitem_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, int, QVariant*) ```
void q_listwidgetitem_on_set_data(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self, int role, QVariant* value ```
void q_listwidgetitem_qbase_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator<)
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
bool q_listwidgetitem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator<)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, bool (*slot)(QListWidgetItem*, QListWidgetItem*) ```
void q_listwidgetitem_on_operator_lesser(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator<)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
bool q_listwidgetitem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// ``` QListWidgetItem* self, QDataStream* in ```
void q_listwidgetitem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, QDataStream*) ```
void q_listwidgetitem_on_read(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self, QDataStream* in ```
void q_listwidgetitem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// ``` QListWidgetItem* self, QDataStream* out ```
void q_listwidgetitem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, QDataStream*) ```
void q_listwidgetitem_on_write(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// Base class method implementation
///
/// ``` QListWidgetItem* self, QDataStream* out ```
void q_listwidgetitem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator=)
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
void q_listwidgetitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#type)
///
/// ``` QListWidgetItem* self ```
int32_t q_listwidgetitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#dtor.QListWidgetItem)
///
/// Delete this object from C++ memory.
///
/// ``` QListWidgetItem* self ```
void q_listwidgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qlistwidget.html

/// q_listwidget_new constructs a new QListWidget object.
///
/// ``` QWidget* parent ```
QListWidget* q_listwidget_new(void* parent);

/// q_listwidget_new2 constructs a new QListWidget object.
///
///
QListWidget* q_listwidget_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QListWidget* self ```
const QMetaObject* q_listwidget_meta_object(void* self);

/// ``` QListWidget* self, const char* param1 ```
void* q_listwidget_metacast(void* self, const char* param1);

/// ``` QListWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listwidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, enum QMetaObject__Call, int, void*) ```
void q_listwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QListWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_listwidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// ``` QListWidget* self, QItemSelectionModel* selectionModel ```
void q_listwidget_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QItemSelectionModel*) ```
void q_listwidget_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Base class method implementation
///
/// ``` QListWidget* self, QItemSelectionModel* selectionModel ```
void q_listwidget_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#item)
///
/// ``` QListWidget* self, int row ```
QListWidgetItem* q_listwidget_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#row)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
int32_t q_listwidget_row(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// ``` QListWidget* self, int row, QListWidgetItem* item ```
void q_listwidget_insert_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// ``` QListWidget* self, int row, const char* label ```
void q_listwidget_insert_item2(void* self, int row, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItems)
///
/// ``` QListWidget* self, int row, const char* labels[] ```
void q_listwidget_insert_items(void* self, int row, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// ``` QListWidget* self, const char* label ```
void q_listwidget_add_item(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_add_item2(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
///
/// ``` QListWidget* self, const char* labels[] ```
void q_listwidget_add_items(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
///
/// ``` QListWidget* self, int row ```
QListWidgetItem* q_listwidget_take_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#count)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
///
/// ``` QListWidget* self ```
QListWidgetItem* q_listwidget_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_set_current_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// ``` QListWidget* self, QListWidgetItem* item, int command ```
void q_listwidget_set_current_item2(void* self, void* item, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// ``` QListWidget* self, int row ```
void q_listwidget_set_current_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// ``` QListWidget* self, int row, int command ```
void q_listwidget_set_current_row2(void* self, int row, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// ``` QListWidget* self, QPoint* p ```
QListWidgetItem* q_listwidget_item_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// ``` QListWidget* self, int x, int y ```
QListWidgetItem* q_listwidget_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QRect* q_listwidget_visual_item_rect(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// ``` QListWidget* self ```
void q_listwidget_sort_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_edit_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_open_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_close_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
bool q_listwidget_is_persistent_editor_open(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QWidget* q_listwidget_item_widget(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item, QWidget* widget ```
void q_listwidget_set_item_widget(void* self, void* item, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_remove_item_widget(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
///
/// ``` QListWidget* self ```
libqt_list /* of QListWidgetItem* */ q_listwidget_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
///
/// ``` QListWidget* self, const char* text, int flags ```
libqt_list /* of QListWidgetItem* */ q_listwidget_find_items(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#items)
///
/// ``` QListWidget* self, QMimeData* data ```
libqt_list /* of QListWidgetItem* */ q_listwidget_items(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QModelIndex* q_listwidget_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
QListWidgetItem* q_listwidget_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// ``` QListWidget* self, QDropEvent* event ```
void q_listwidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDropEvent*) ```
void q_listwidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QListWidget* self, QDropEvent* event ```
void q_listwidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_scroll_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#clear)
///
/// ``` QListWidget* self ```
void q_listwidget_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_pressed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_double_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_activated(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_activated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_entered(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_entered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_changed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// ``` QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous ```
void q_listwidget_current_item_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*, QListWidgetItem*) ```
void q_listwidget_on_current_item_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// ``` QListWidget* self, const char* currentText ```
void q_listwidget_current_text_changed(void* self, const char* currentText);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_current_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// ``` QListWidget* self, int currentRow ```
void q_listwidget_current_row_changed(void* self, int currentRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_current_row_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// ``` QListWidget* self ```
void q_listwidget_item_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// ``` QListWidget* self, void (*slot)(QListWidget*) ```
void q_listwidget_on_item_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// ``` QListWidget* self, QEvent* e ```
bool q_listwidget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Base class method implementation
///
/// ``` QListWidget* self, QEvent* e ```
bool q_listwidget_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// ``` QListWidget* self ```
const char** q_listwidget_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, const char** (*slot)() ```
void q_listwidget_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QListWidget* self ```
const char** q_listwidget_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// ``` QListWidget* self, libqt_list /* of QListWidgetItem* */ items ```
QMimeData* q_listwidget_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, QMimeData* (*slot)(QListWidget*, libqt_list /* of QListWidgetItem* */ items ) ```
void q_listwidget_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Base class method implementation
///
/// ``` QListWidget* self, libqt_list /* of QListWidgetItem* */ items ```
QMimeData* q_listwidget_qbase_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// ``` QListWidget* self, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_listwidget_drop_mime_data(void* self, int index, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, int, QMimeData*, enum Qt__DropAction) ```
void q_listwidget_on_drop_mime_data(void* self, bool (*slot)(void*, int, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QListWidget* self, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_listwidget_qbase_drop_mime_data(void* self, int index, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_supported_drop_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Base class method implementation
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_listwidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_listwidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// ``` QListWidget* self, enum Qt__SortOrder order ```
void q_listwidget_sort_items1(void* self, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// ``` QListWidget* self, QListWidgetItem* item, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_scroll_to_item2(void* self, void* item, int64_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// ``` QListWidget* self, enum QListView__Movement movement ```
void q_listwidget_set_movement(void* self, int64_t movement);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_movement(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// ``` QListWidget* self, enum QListView__Flow flow ```
void q_listwidget_set_flow(void* self, int64_t flow);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_flow(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// ``` QListWidget* self, enum QListView__ResizeMode mode ```
void q_listwidget_set_resize_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_resize_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// ``` QListWidget* self, enum QListView__LayoutMode mode ```
void q_listwidget_set_layout_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_layout_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// ``` QListWidget* self, int space ```
void q_listwidget_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_spacing(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// ``` QListWidget* self, int batchSize ```
void q_listwidget_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_batch_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_grid_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// ``` QListWidget* self, enum QListView__ViewMode mode ```
void q_listwidget_set_view_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_view_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// ``` QListWidget* self, int row ```
bool q_listwidget_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// ``` QListWidget* self, int row, bool hide ```
void q_listwidget_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// ``` QListWidget* self, int column ```
void q_listwidget_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_model_column(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// ``` QListWidget* self ```
bool q_listwidget_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// ``` QListWidget* self, bool on ```
void q_listwidget_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// ``` QListWidget* self ```
bool q_listwidget_word_wrap(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// ``` QListWidget* self, bool show ```
void q_listwidget_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// ``` QListWidget* self, int alignment ```
void q_listwidget_set_item_alignment(void* self, int64_t alignment);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_item_alignment(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListWidget* self, libqt_list /* of QModelIndex* */ indexes ```
void q_listwidget_indexes_moved(void* self, libqt_list indexes);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListWidget* self, void (*slot)(QListView*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_listwidget_on_indexes_moved(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// ``` QListWidget* self, QAbstractItemModel* model ```
void q_listwidget_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QAbstractItemModel*) ```
void q_listwidget_on_set_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Base class method implementation
///
/// ``` QListWidget* self, QAbstractItemModel* model ```
void q_listwidget_qbase_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QListWidget* self ```
QAbstractItemModel* q_listwidget_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QListWidget* self ```
QItemSelectionModel* q_listwidget_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QListWidget* self, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListWidget* self ```
QAbstractItemDelegate* q_listwidget_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__SelectionMode mode ```
void q_listwidget_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QListWidget* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_listwidget_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QListWidget* self ```
QModelIndex* q_listwidget_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QListWidget* self ```
QModelIndex* q_listwidget_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QListWidget* self, int triggers ```
void q_listwidget_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_listwidget_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QListWidget* self ```
void q_listwidget_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_listwidget_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QListWidget* self ```
void q_listwidget_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QListWidget* self, int margin ```
void q_listwidget_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QListWidget* self ```
bool q_listwidget_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QListWidget* self ```
bool q_listwidget_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QListWidget* self, bool overwrite ```
void q_listwidget_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QListWidget* self ```
bool q_listwidget_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__DragDropMode behavior ```
void q_listwidget_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QListWidget* self, enum Qt__DropAction dropAction ```
void q_listwidget_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QListWidget* self ```
bool q_listwidget_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QListWidget* self, enum Qt__TextElideMode mode ```
void q_listwidget_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
QSize* q_listwidget_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QListWidget* self, QModelIndex* index, QWidget* widget ```
void q_listwidget_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QListWidget* self, QModelIndex* index ```
QWidget* q_listwidget_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QListWidget* self, int row, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QListWidget* self, int row ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QListWidget* self, int column, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QListWidget* self, int column ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QListWidget* self ```
void q_listwidget_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QListWidget* self ```
void q_listwidget_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListWidget* self ```
void q_listwidget_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*) ```
void q_listwidget_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_listwidget_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QListWidget* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_listwidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QListWidget* self ```
QScrollBar* q_listwidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QListWidget* self, QScrollBar* scrollbar ```
void q_listwidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QListWidget* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_listwidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QListWidget* self ```
QScrollBar* q_listwidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QListWidget* self, QScrollBar* scrollbar ```
void q_listwidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QListWidget* self, QWidget* widget ```
void q_listwidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QListWidget* self, QWidget* widget, int alignment ```
void q_listwidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QListWidget* self, int alignment ```
libqt_list /* of QWidget* */ q_listwidget_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QListWidget* self, QWidget* widget ```
void q_listwidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QListWidget* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_listwidget_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QListWidget* self, int frameStyle ```
void q_listwidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QListWidget* self, enum QFrame__Shape frameShape ```
void q_listwidget_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QListWidget* self, enum QFrame__Shadow frameShadow ```
void q_listwidget_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QListWidget* self, int lineWidth ```
void q_listwidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QListWidget* self, int midLineWidth ```
void q_listwidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QListWidget* self, QRect* frameRect ```
void q_listwidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QListWidget* self ```
void q_listwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QListWidget* self ```
QStyle* q_listwidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QListWidget* self, QStyle* style ```
void q_listwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QListWidget* self, enum Qt__WindowModality windowModality ```
void q_listwidget_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QListWidget* self, QWidget* param1 ```
bool q_listwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QListWidget* self, bool enabled ```
void q_listwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QListWidget* self, bool disabled ```
void q_listwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QListWidget* self, bool windowModified ```
void q_listwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QListWidget* self ```
const QRect* q_listwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListWidget* self, QSize* minimumSize ```
void q_listwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListWidget* self, int minw, int minh ```
void q_listwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListWidget* self, QSize* maximumSize ```
void q_listwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListWidget* self, int maxw, int maxh ```
void q_listwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QListWidget* self, int minw ```
void q_listwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QListWidget* self, int minh ```
void q_listwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QListWidget* self, int maxw ```
void q_listwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QListWidget* self, int maxh ```
void q_listwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListWidget* self, QSize* sizeIncrement ```
void q_listwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListWidget* self, QSize* baseSize ```
void q_listwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListWidget* self, int basew, int baseh ```
void q_listwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListWidget* self, QSize* fixedSize ```
void q_listwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QListWidget* self, int w ```
void q_listwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QListWidget* self, int h ```
void q_listwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QListWidget* self ```
const QPalette* q_listwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QListWidget* self, QPalette* palette ```
void q_listwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QListWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_listwidget_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QListWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_listwidget_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QListWidget* self ```
const QFont* q_listwidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QListWidget* self, QFont* font ```
void q_listwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QListWidget* self ```
QFontMetrics* q_listwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QListWidget* self ```
QFontInfo* q_listwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QListWidget* self ```
QCursor* q_listwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QListWidget* self, QCursor* cursor ```
void q_listwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QListWidget* self ```
bool q_listwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListWidget* self, QBitmap* mask ```
void q_listwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListWidget* self, QRegion* mask ```
void q_listwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target ```
void q_listwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListWidget* self ```
QPixmap* q_listwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QListWidget* self ```
QGraphicsEffect* q_listwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QListWidget* self, QGraphicsEffect* effect ```
void q_listwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal ```
void q_listwidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal ```
void q_listwidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QListWidget* self, const char* windowTitle ```
void q_listwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QListWidget* self, const char* styleSheet ```
void q_listwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QListWidget* self ```
const char* q_listwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QListWidget* self, QIcon* icon ```
void q_listwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QListWidget* self ```
QIcon* q_listwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QListWidget* self, const char* windowIconText ```
void q_listwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QListWidget* self, const char* windowRole ```
void q_listwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QListWidget* self, const char* filePath ```
void q_listwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QListWidget* self, double level ```
void q_listwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QListWidget* self ```
double q_listwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QListWidget* self, const char* toolTip ```
void q_listwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QListWidget* self ```
const char* q_listwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QListWidget* self, int msec ```
void q_listwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QListWidget* self, const char* statusTip ```
void q_listwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QListWidget* self ```
const char* q_listwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QListWidget* self, const char* whatsThis ```
void q_listwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QListWidget* self ```
const char* q_listwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QListWidget* self ```
const char* q_listwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QListWidget* self, const char* name ```
void q_listwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QListWidget* self ```
const char* q_listwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QListWidget* self, const char* description ```
void q_listwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QListWidget* self, enum Qt__LayoutDirection direction ```
void q_listwidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QListWidget* self, QLocale* locale ```
void q_listwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QListWidget* self ```
QLocale* q_listwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListWidget* self ```
void q_listwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QListWidget* self ```
void q_listwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListWidget* self, enum Qt__FocusReason reason ```
void q_listwidget_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QListWidget* self, enum Qt__FocusPolicy policy ```
void q_listwidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_listwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QListWidget* self, QWidget* focusProxy ```
void q_listwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QListWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_listwidget_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListWidget* self ```
void q_listwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListWidget* self, QCursor* param1 ```
void q_listwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QListWidget* self ```
void q_listwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QListWidget* self ```
void q_listwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QListWidget* self ```
void q_listwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListWidget* self, QKeySequence* key ```
int32_t q_listwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_listwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_listwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QListWidget* self ```
QGraphicsProxyWidget* q_listwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self ```
void q_listwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, QRect* param1 ```
void q_listwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, QRegion* param1 ```
void q_listwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, QRect* param1 ```
void q_listwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, QRegion* param1 ```
void q_listwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QListWidget* self, bool hidden ```
void q_listwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QListWidget* self ```
void q_listwidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QListWidget* self ```
void q_listwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QListWidget* self ```
void q_listwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QListWidget* self ```
void q_listwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QListWidget* self ```
void q_listwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QListWidget* self ```
void q_listwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QListWidget* self ```
bool q_listwidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QListWidget* self ```
void q_listwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QListWidget* self ```
void q_listwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QListWidget* self, QWidget* param1 ```
void q_listwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListWidget* self, int x, int y ```
void q_listwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListWidget* self, QPoint* param1 ```
void q_listwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListWidget* self, QSize* param1 ```
void q_listwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListWidget* self, QRect* geometry ```
void q_listwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QListWidget* self ```
char* q_listwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QListWidget* self, const char* geometry ```
bool q_listwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QListWidget* self ```
void q_listwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QListWidget* self, QWidget* param1 ```
bool q_listwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QListWidget* self, int state ```
void q_listwidget_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QListWidget* self, int state ```
void q_listwidget_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QListWidget* self ```
QSizePolicy* q_listwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListWidget* self, QSizePolicy* sizePolicy ```
void q_listwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_listwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListWidget* self, QMargins* margins ```
void q_listwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QListWidget* self ```
QLayout* q_listwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QListWidget* self, QLayout* layout ```
void q_listwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QListWidget* self ```
void q_listwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListWidget* self, QWidget* parent ```
void q_listwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListWidget* self, QWidget* parent, int f ```
void q_listwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListWidget* self, int dx, int dy, QRect* param3 ```
void q_listwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QListWidget* self ```
bool q_listwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QListWidget* self, bool on ```
void q_listwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QAction* action ```
void q_listwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QListWidget* self, libqt_list /* of QAction* */ actions ```
void q_listwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QListWidget* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_listwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QListWidget* self, QAction* before, QAction* action ```
void q_listwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QListWidget* self, QAction* action ```
void q_listwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QListWidget* self ```
libqt_list /* of QAction* */ q_listwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, const char* text ```
QAction* q_listwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QIcon* icon, const char* text ```
QAction* q_listwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_listwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_listwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QListWidget* self, int typeVal ```
void q_listwidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListWidget* self, enum Qt__WindowType param1 ```
void q_listwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QListWidget* self, int typeVal ```
void q_listwidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_listwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListWidget* self, int x, int y ```
QWidget* q_listwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListWidget* self, QPoint* p ```
QWidget* q_listwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListWidget* self, QPointF* p ```
QWidget* q_listwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1 ```
void q_listwidget_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_listwidget_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QListWidget* self ```
void q_listwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QListWidget* self, QWidget* child ```
bool q_listwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QListWidget* self ```
bool q_listwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QListWidget* self, bool enabled ```
void q_listwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QListWidget* self ```
QBackingStore* q_listwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QListWidget* self ```
QWindow* q_listwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QListWidget* self ```
QScreen* q_listwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QListWidget* self, QScreen* screen ```
void q_listwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_listwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListWidget* self, const char* title ```
void q_listwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListWidget* self, void (*slot)(QWidget*, const char*) ```
void q_listwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListWidget* self, QIcon* icon ```
void q_listwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_listwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListWidget* self, const char* iconText ```
void q_listwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListWidget* self, void (*slot)(QWidget*, const char*) ```
void q_listwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListWidget* self, QPoint* pos ```
void q_listwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_listwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QListWidget* self, int hints ```
void q_listwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_listwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_listwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListWidget* self, QRect* rectangle ```
QPixmap* q_listwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_listwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_listwidget_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListWidget* self, int id, bool enable ```
void q_listwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListWidget* self, int id, bool enable ```
void q_listwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListWidget* self, enum Qt__WindowType param1, bool on ```
void q_listwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_listwidget_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_listwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_listwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QListWidget* self ```
const char* q_listwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QListWidget* self, char* name ```
void q_listwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QListWidget* self ```
bool q_listwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QListWidget* self, bool b ```
bool q_listwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QListWidget* self ```
QThread* q_listwidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QListWidget* self, QThread* thread ```
bool q_listwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListWidget* self, int interval ```
int32_t q_listwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QListWidget* self, enum Qt__TimerId id ```
void q_listwidget_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QListWidget* self ```
libqt_list /* of QObject* */ q_listwidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QListWidget* self, QObject* filterObj ```
void q_listwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QListWidget* self, QObject* obj ```
void q_listwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_listwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_listwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_listwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_listwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QListWidget* self ```
void q_listwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QListWidget* self ```
void q_listwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QListWidget* self, const char* name, QVariant* value ```
bool q_listwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QListWidget* self, const char* name ```
QVariant* q_listwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QListWidget* self ```
const char** q_listwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListWidget* self ```
QBindingStorage* q_listwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListWidget* self ```
const QBindingStorage* q_listwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self ```
void q_listwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self, void (*slot)(QObject*) ```
void q_listwidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QListWidget* self ```
QObject* q_listwidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QListWidget* self, const char* classname ```
bool q_listwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QListWidget* self ```
void q_listwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QListWidget* self, QThread* thread, Disambiguated_t* param2 ```
bool q_listwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_listwidget_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self, QObject* param1 ```
void q_listwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self, void (*slot)(QObject*, QObject*) ```
void q_listwidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QListWidget* self ```
bool q_listwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QListWidget* self ```
double q_listwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QListWidget* self ```
double q_listwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_listwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_listwidget_encode_metric_f(int64_t metric, double value);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_qbase_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRect* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_qbase_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_listwidget_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* p ```
QModelIndex* q_listwidget_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* p ```
QModelIndex* q_listwidget_qbase_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* (*slot)(QListWidget*, QPoint*) ```
void q_listwidget_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_do_items_layout(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_reset(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_set_root_index(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_listwidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_listwidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_listwidget_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, int, int) ```
void q_listwidget_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, int, int) ```
void q_listwidget_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWheelEvent* e ```
void q_listwidget_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWheelEvent* e ```
void q_listwidget_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWheelEvent*) ```
void q_listwidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QTimerEvent* e ```
void q_listwidget_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QTimerEvent* e ```
void q_listwidget_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QTimerEvent*) ```
void q_listwidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QResizeEvent* e ```
void q_listwidget_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QResizeEvent* e ```
void q_listwidget_qbase_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QResizeEvent*) ```
void q_listwidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragMoveEvent* e ```
void q_listwidget_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragMoveEvent* e ```
void q_listwidget_qbase_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragMoveEvent*) ```
void q_listwidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragLeaveEvent* e ```
void q_listwidget_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragLeaveEvent* e ```
void q_listwidget_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragLeaveEvent*) ```
void q_listwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int supportedActions ```
void q_listwidget_start_drag(void* self, int64_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int supportedActions ```
void q_listwidget_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionViewItem* option ```
void q_listwidget_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionViewItem* option ```
void q_listwidget_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QStyleOptionViewItem*) ```
void q_listwidget_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPaintEvent* e ```
void q_listwidget_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPaintEvent* e ```
void q_listwidget_qbase_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPaintEvent*) ```
void q_listwidget_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_horizontal_offset(void* self, int32_t (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_vertical_offset(void* self, int32_t (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listwidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listwidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* (*slot)(QListWidget*, enum QAbstractItemView__CursorAction, int) ```
void q_listwidget_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QRect* rect, int command ```
void q_listwidget_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QRect* rect, int command ```
void q_listwidget_qbase_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QRect*, int) ```
void q_listwidget_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selection ```
QRegion* q_listwidget_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selection ```
QRegion* q_listwidget_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRegion* (*slot)(QListWidget*, QItemSelection*) ```
void q_listwidget_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
libqt_list /* of QModelIndex* */ q_listwidget_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
libqt_list /* of QModelIndex* */ q_listwidget_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_listwidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_geometries(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
bool q_listwidget_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
bool q_listwidget_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listwidget_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listwidget_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QItemSelection*, QItemSelection*) ```
void q_listwidget_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_listwidget_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_listwidget_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, QModelIndex*) ```
void q_listwidget_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* search ```
void q_listwidget_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* search ```
void q_listwidget_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int row ```
int32_t q_listwidget_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int row ```
int32_t q_listwidget_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int column ```
int32_t q_listwidget_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int column ```
int32_t q_listwidget_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QAbstractItemDelegate* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_listwidget_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_listwidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QVariant* (*slot)(QListWidget*, enum Qt__InputMethodQuery) ```
void q_listwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listwidget_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listwidget_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_listwidget_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor ```
void q_listwidget_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor ```
void q_listwidget_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*) ```
void q_listwidget_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QObject* editor ```
void q_listwidget_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QObject* editor ```
void q_listwidget_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QObject*) ```
void q_listwidget_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listwidget_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listwidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_listwidget_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_listwidget_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_listwidget_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)(QListWidget*, QModelIndex*, QEvent*) ```
void q_listwidget_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, bool next ```
bool q_listwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, bool next ```
bool q_listwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, bool) ```
void q_listwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
bool q_listwidget_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
bool q_listwidget_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragEnterEvent* event ```
void q_listwidget_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragEnterEvent* event ```
void q_listwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragEnterEvent*) ```
void q_listwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QFocusEvent*) ```
void q_listwidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QFocusEvent*) ```
void q_listwidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QKeyEvent*) ```
void q_listwidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QInputMethodEvent* event ```
void q_listwidget_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QInputMethodEvent* event ```
void q_listwidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QInputMethodEvent*) ```
void q_listwidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QObject* object, QEvent* event ```
bool q_listwidget_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QObject* object, QEvent* event ```
bool q_listwidget_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QObject*, QEvent*) ```
void q_listwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* viewport ```
void q_listwidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* viewport ```
void q_listwidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*) ```
void q_listwidget_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QContextMenuEvent* param1 ```
void q_listwidget_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QContextMenuEvent* param1 ```
void q_listwidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QContextMenuEvent*) ```
void q_listwidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* param1 ```
void q_listwidget_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* param1 ```
void q_listwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionFrame* option ```
void q_listwidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionFrame* option ```
void q_listwidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QStyleOptionFrame*) ```
void q_listwidget_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, bool visible ```
void q_listwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, bool visible ```
void q_listwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, bool) ```
void q_listwidget_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int param1 ```
int32_t q_listwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int param1 ```
int32_t q_listwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPaintEngine* q_listwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPaintEngine* q_listwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPaintEngine* (*slot)() ```
void q_listwidget_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QKeyEvent*) ```
void q_listwidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEnterEvent* event ```
void q_listwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEnterEvent* event ```
void q_listwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEnterEvent*) ```
void q_listwidget_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMoveEvent* event ```
void q_listwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMoveEvent* event ```
void q_listwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMoveEvent*) ```
void q_listwidget_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QCloseEvent* event ```
void q_listwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QCloseEvent* event ```
void q_listwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QCloseEvent*) ```
void q_listwidget_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QTabletEvent* event ```
void q_listwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QTabletEvent* event ```
void q_listwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QTabletEvent*) ```
void q_listwidget_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QActionEvent* event ```
void q_listwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QActionEvent* event ```
void q_listwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QActionEvent*) ```
void q_listwidget_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QShowEvent* event ```
void q_listwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QShowEvent* event ```
void q_listwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QShowEvent*) ```
void q_listwidget_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QHideEvent* event ```
void q_listwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QHideEvent* event ```
void q_listwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QHideEvent*) ```
void q_listwidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_listwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_listwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, const char*, void*, intptr_t*) ```
void q_listwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listwidget_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listwidget_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_listwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPainter*) ```
void q_listwidget_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* offset ```
QPaintDevice* q_listwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* offset ```
QPaintDevice* q_listwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPaintDevice* (*slot)(QListWidget*, QPoint*) ```
void q_listwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPainter* q_listwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPainter* q_listwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* (*slot)() ```
void q_listwidget_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QChildEvent* event ```
void q_listwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QChildEvent* event ```
void q_listwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QChildEvent*) ```
void q_listwidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int width, int height ```
void q_listwidget_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int width, int height ```
void q_listwidget_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_resize_contents(void* self, void (*slot)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_contents_size(void* self, QSize* (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRect* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_rect_for_index(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* position, QModelIndex* index ```
void q_listwidget_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* position, QModelIndex* index ```
void q_listwidget_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPoint*, QModelIndex*) ```
void q_listwidget_on_set_position_for_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__State state ```
void q_listwidget_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__State state ```
void q_listwidget_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, enum QAbstractItemView__State) ```
void q_listwidget_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QRegion* region ```
void q_listwidget_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QRegion* region ```
void q_listwidget_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QRegion*) ```
void q_listwidget_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* (*slot)() ```
void q_listwidget_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int, int, int) ```
void q_listwidget_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QMargins* (*slot)() ```
void q_listwidget_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPainter* param1 ```
void q_listwidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* param1 ```
void q_listwidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPainter*) ```
void q_listwidget_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QObject* q_listwidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QObject* q_listwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QObject* (*slot)() ```
void q_listwidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* signal ```
int32_t q_listwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* signal ```
int32_t q_listwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
bool q_listwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
bool q_listwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_listwidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_listwidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, double (*slot)(QListWidget*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_listwidget_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QListWidget* self, void (*slot)(QObject*, const char*) ```
void q_listwidget_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dtor.QListWidget)
///
/// Delete this object from C++ memory.
///
/// ``` QListWidget* self ```
void q_listwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qlistwidget.html#types

typedef enum {
    QLISTWIDGETITEM_ITEMTYPE_TYPE = 0,
    QLISTWIDGETITEM_ITEMTYPE_USERTYPE = 1000
} QListWidgetItem__ItemType;

#endif
