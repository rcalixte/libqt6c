#pragma once
#ifndef SRCQT6C_LIBQLISTWIDGET_H
#define SRCQT6C_LIBQLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlistwidgetitem.html

/// q_listwidgetitem_new constructs a new QListWidgetItem object.
///
QListWidgetItem* q_listwidgetitem_new();

/// q_listwidgetitem_new2 constructs a new QListWidgetItem object.
///
/// @param text const char*
QListWidgetItem* q_listwidgetitem_new2(const char* text);

/// q_listwidgetitem_new3 constructs a new QListWidgetItem object.
///
/// @param icon QIcon*
/// @param text const char*
QListWidgetItem* q_listwidgetitem_new3(void* icon, const char* text);

/// q_listwidgetitem_new4 constructs a new QListWidgetItem object.
///
/// @param other QListWidgetItem*
QListWidgetItem* q_listwidgetitem_new4(void* other);

/// q_listwidgetitem_new5 constructs a new QListWidgetItem object.
///
/// @param listview QListWidget*
QListWidgetItem* q_listwidgetitem_new5(void* listview);

/// q_listwidgetitem_new6 constructs a new QListWidgetItem object.
///
/// @param listview QListWidget*
/// @param typeVal int
QListWidgetItem* q_listwidgetitem_new6(void* listview, int typeVal);

/// q_listwidgetitem_new7 constructs a new QListWidgetItem object.
///
/// @param text const char*
/// @param listview QListWidget*
QListWidgetItem* q_listwidgetitem_new7(const char* text, void* listview);

/// q_listwidgetitem_new8 constructs a new QListWidgetItem object.
///
/// @param text const char*
/// @param listview QListWidget*
/// @param typeVal int
QListWidgetItem* q_listwidgetitem_new8(const char* text, void* listview, int typeVal);

/// q_listwidgetitem_new9 constructs a new QListWidgetItem object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param listview QListWidget*
QListWidgetItem* q_listwidgetitem_new9(void* icon, const char* text, void* listview);

/// q_listwidgetitem_new10 constructs a new QListWidgetItem object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param listview QListWidget*
/// @param typeVal int
QListWidgetItem* q_listwidgetitem_new10(void* icon, const char* text, void* listview, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// @param self QListWidgetItem*
QListWidgetItem* q_listwidgetitem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback QListWidgetItem* func()
void q_listwidgetitem_on_clone(void* self, QListWidgetItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
QListWidgetItem* q_listwidgetitem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#listWidget)
///
/// @param self QListWidgetItem*
QListWidget* q_listwidgetitem_list_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSelected)
///
/// @param self QListWidgetItem*
/// @param selectVal bool
void q_listwidgetitem_set_selected(void* self, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isSelected)
///
/// @param self QListWidgetItem*
bool q_listwidgetitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setHidden)
///
/// @param self QListWidgetItem*
/// @param hide bool
void q_listwidgetitem_set_hidden(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isHidden)
///
/// @param self QListWidgetItem*
bool q_listwidgetitem_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#flags)
///
/// @param self QListWidgetItem*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_listwidgetitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFlags)
///
/// @param self QListWidgetItem*
/// @param flags flag of enum Qt__ItemFlag
void q_listwidgetitem_set_flags(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidgetItem*
const char* q_listwidgetitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setText)
///
/// @param self QListWidgetItem*
/// @param text const char*
void q_listwidgetitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#icon)
///
/// @param self QListWidgetItem*
QIcon* q_listwidgetitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setIcon)
///
/// @param self QListWidgetItem*
/// @param icon QIcon*
void q_listwidgetitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidgetItem*
const char* q_listwidgetitem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setStatusTip)
///
/// @param self QListWidgetItem*
/// @param statusTip const char*
void q_listwidgetitem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidgetItem*
const char* q_listwidgetitem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setToolTip)
///
/// @param self QListWidgetItem*
/// @param toolTip const char*
void q_listwidgetitem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidgetItem*
const char* q_listwidgetitem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setWhatsThis)
///
/// @param self QListWidgetItem*
/// @param whatsThis const char*
void q_listwidgetitem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#font)
///
/// @param self QListWidgetItem*
QFont* q_listwidgetitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFont)
///
/// @param self QListWidgetItem*
/// @param font QFont*
void q_listwidgetitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#textAlignment)
///
/// @param self QListWidgetItem*
int32_t q_listwidgetitem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// @param self QListWidgetItem*
/// @param alignment int
void q_listwidgetitem_set_text_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// @param self QListWidgetItem*
/// @param alignment enum Qt__AlignmentFlag
void q_listwidgetitem_set_text_alignment2(void* self, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// @param self QListWidgetItem*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_listwidgetitem_set_text_alignment3(void* self, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#background)
///
/// @param self QListWidgetItem*
QBrush* q_listwidgetitem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setBackground)
///
/// @param self QListWidgetItem*
/// @param brush QBrush*
void q_listwidgetitem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#foreground)
///
/// @param self QListWidgetItem*
QBrush* q_listwidgetitem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setForeground)
///
/// @param self QListWidgetItem*
/// @param brush QBrush*
void q_listwidgetitem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#checkState)
///
/// @param self QListWidgetItem*
///
/// @return enum Qt__CheckState
int32_t q_listwidgetitem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setCheckState)
///
/// @param self QListWidgetItem*
/// @param state enum Qt__CheckState
void q_listwidgetitem_set_check_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#sizeHint)
///
/// @param self QListWidgetItem*
QSize* q_listwidgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSizeHint)
///
/// @param self QListWidgetItem*
/// @param size QSize*
void q_listwidgetitem_set_size_hint(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// @param self QListWidgetItem*
/// @param role int
QVariant* q_listwidgetitem_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback QVariant* func(QListWidgetItem* self, int role)
void q_listwidgetitem_on_data(void* self, QVariant* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
/// @param role int
QVariant* q_listwidgetitem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// @param self QListWidgetItem*
/// @param role int
/// @param value QVariant*
void q_listwidgetitem_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback void func(QListWidgetItem* self, int role, QVariant* value)
void q_listwidgetitem_on_set_data(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
/// @param role int
/// @param value QVariant*
void q_listwidgetitem_qbase_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
///
/// @param self QListWidgetItem*
/// @param other QListWidgetItem*
bool q_listwidgetitem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback bool func(QListWidgetItem* self, QListWidgetItem* other)
void q_listwidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
/// @param other QListWidgetItem*
bool q_listwidgetitem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// @param self QListWidgetItem*
/// @param in QDataStream*
void q_listwidgetitem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback void func(QListWidgetItem* self, QDataStream* in)
void q_listwidgetitem_on_read(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
/// @param in QDataStream*
void q_listwidgetitem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// @param self QListWidgetItem*
/// @param out QDataStream*
void q_listwidgetitem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QListWidgetItem*
/// @param callback void func(QListWidgetItem* self, QDataStream* out)
void q_listwidgetitem_on_write(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// Base class method implementation
///
/// @param self QListWidgetItem*
/// @param out QDataStream*
void q_listwidgetitem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-eq)
///
/// @param self QListWidgetItem*
/// @param other QListWidgetItem*
void q_listwidgetitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#type)
///
/// @param self QListWidgetItem*
int32_t q_listwidgetitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#dtor.QListWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self QListWidgetItem*
void q_listwidgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qlistwidget.html

/// q_listwidget_new constructs a new QListWidget object.
///
/// @param parent QWidget*
QListWidget* q_listwidget_new(void* parent);

/// q_listwidget_new2 constructs a new QListWidget object.
///
QListWidget* q_listwidget_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QListWidget*
const QMetaObject* q_listwidget_meta_object(void* self);

/// @param self QListWidget*
/// @param param1 const char*
void* q_listwidget_metacast(void* self, const char* param1);

/// @param self QListWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_listwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_listwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QListWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_listwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_listwidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// @param self QListWidget*
/// @param selectionModel QItemSelectionModel*
void q_listwidget_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QItemSelectionModel* selectionModel)
void q_listwidget_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param selectionModel QItemSelectionModel*
void q_listwidget_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#item)
///
/// @param self QListWidget*
/// @param row int
QListWidgetItem* q_listwidget_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#row)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
int32_t q_listwidget_row(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// @param self QListWidget*
/// @param row int
/// @param item QListWidgetItem*
void q_listwidget_insert_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// @param self QListWidget*
/// @param row int
/// @param label const char*
void q_listwidget_insert_item2(void* self, int row, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItems)
///
/// @param self QListWidget*
/// @param row int
/// @param labels const char**
void q_listwidget_insert_items(void* self, int row, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// @param self QListWidget*
/// @param label const char*
void q_listwidget_add_item(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_add_item2(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
///
/// @param self QListWidget*
/// @param labels const char**
void q_listwidget_add_items(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
///
/// @param self QListWidget*
/// @param row int
QListWidgetItem* q_listwidget_take_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#count)
///
/// @param self QListWidget*
int32_t q_listwidget_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
///
/// @param self QListWidget*
QListWidgetItem* q_listwidget_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_set_current_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_listwidget_set_current_item2(void* self, void* item, int32_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
///
/// @param self QListWidget*
int32_t q_listwidget_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// @param self QListWidget*
/// @param row int
void q_listwidget_set_current_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// @param self QListWidget*
/// @param row int
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_listwidget_set_current_row2(void* self, int row, int32_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// @param self QListWidget*
/// @param p QPoint*
QListWidgetItem* q_listwidget_item_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
QListWidgetItem* q_listwidget_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
QRect* q_listwidget_visual_item_rect(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// @param self QListWidget*
void q_listwidget_sort_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
///
/// @param self QListWidget*
bool q_listwidget_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_edit_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_open_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_close_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
bool q_listwidget_is_persistent_editor_open(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
QWidget* q_listwidget_item_widget(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
/// @param widget QWidget*
void q_listwidget_set_item_widget(void* self, void* item, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_remove_item_widget(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
///
/// @param self QListWidget*
libqt_list /* of QListWidgetItem* */ q_listwidget_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
///
/// @param self QListWidget*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QListWidgetItem* */ q_listwidget_find_items(void* self, const char* text, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#items)
///
/// @param self QListWidget*
/// @param data QMimeData*
libqt_list /* of QListWidgetItem* */ q_listwidget_items(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
QModelIndex* q_listwidget_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
///
/// @param self QListWidget*
/// @param index QModelIndex*
QListWidgetItem* q_listwidget_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// @param self QListWidget*
/// @param event QDropEvent*
void q_listwidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QDropEvent* event)
void q_listwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param event QDropEvent*
void q_listwidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_scroll_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#clear)
///
/// @param self QListWidget*
void q_listwidget_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_pressed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_pressed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_double_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_double_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_activated(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_activated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_entered(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_entered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
void q_listwidget_item_changed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* item)
void q_listwidget_on_item_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// @param self QListWidget*
/// @param current QListWidgetItem*
/// @param previous QListWidgetItem*
void q_listwidget_current_item_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous)
void q_listwidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// @param self QListWidget*
/// @param currentText const char*
void q_listwidget_current_text_changed(void* self, const char* currentText);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, const char* currentText)
void q_listwidget_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// @param self QListWidget*
/// @param currentRow int
void q_listwidget_current_row_changed(void* self, int currentRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int currentRow)
void q_listwidget_on_current_row_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// @param self QListWidget*
void q_listwidget_item_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self)
void q_listwidget_on_item_selection_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// @param self QListWidget*
/// @param e QEvent*
bool q_listwidget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QEvent* e)
void q_listwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param e QEvent*
bool q_listwidget_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char** q_listwidget_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback const char** func()
void q_listwidget_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QListWidget*
const char** q_listwidget_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// @param self QListWidget*
/// @param items libqt_list /* of QListWidgetItem* */
QMimeData* q_listwidget_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback QMimeData* func(QListWidget* self, QListWidgetItem** items)
void q_listwidget_on_mime_data(void* self, QMimeData* (*callback)(void*, QListWidgetItem**));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param items libqt_list /* of QListWidgetItem* */
QMimeData* q_listwidget_qbase_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// @param self QListWidget*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_listwidget_drop_mime_data(void* self, int index, void* data, int32_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, int index, QMimeData* data, enum Qt__DropAction action)
void q_listwidget_on_drop_mime_data(void* self, bool (*callback)(void*, int, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_listwidget_qbase_drop_mime_data(void* self, int index, void* data, int32_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__DropAction
int32_t q_listwidget_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__DropAction
int32_t q_listwidget_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_listwidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_listwidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// @param self QListWidget*
/// @param order enum Qt__SortOrder
void q_listwidget_sort_items1(void* self, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// @param self QListWidget*
/// @param item QListWidgetItem*
/// @param hint enum QAbstractItemView__ScrollHint
void q_listwidget_scroll_to_item2(void* self, void* item, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self QListWidget*
/// @param movement enum QListView__Movement
void q_listwidget_set_movement(void* self, int32_t movement);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self QListWidget*
///
/// @return enum QListView__Movement
int32_t q_listwidget_movement(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self QListWidget*
/// @param flow enum QListView__Flow
void q_listwidget_set_flow(void* self, int32_t flow);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self QListWidget*
///
/// @return enum QListView__Flow
int32_t q_listwidget_flow(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self QListWidget*
bool q_listwidget_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self QListWidget*
/// @param mode enum QListView__ResizeMode
void q_listwidget_set_resize_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self QListWidget*
///
/// @return enum QListView__ResizeMode
int32_t q_listwidget_resize_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self QListWidget*
/// @param mode enum QListView__LayoutMode
void q_listwidget_set_layout_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self QListWidget*
///
/// @return enum QListView__LayoutMode
int32_t q_listwidget_layout_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self QListWidget*
/// @param space int
void q_listwidget_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self QListWidget*
int32_t q_listwidget_spacing(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self QListWidget*
/// @param batchSize int
void q_listwidget_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self QListWidget*
int32_t q_listwidget_batch_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// @param self QListWidget*
/// @param size QSize*
void q_listwidget_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self QListWidget*
QSize* q_listwidget_grid_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self QListWidget*
/// @param mode enum QListView__ViewMode
void q_listwidget_set_view_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self QListWidget*
///
/// @return enum QListView__ViewMode
int32_t q_listwidget_view_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self QListWidget*
void q_listwidget_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self QListWidget*
/// @param row int
bool q_listwidget_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self QListWidget*
/// @param row int
/// @param hide bool
void q_listwidget_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self QListWidget*
/// @param column int
void q_listwidget_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self QListWidget*
int32_t q_listwidget_model_column(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self QListWidget*
bool q_listwidget_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self QListWidget*
/// @param on bool
void q_listwidget_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self QListWidget*
bool q_listwidget_word_wrap(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self QListWidget*
/// @param show bool
void q_listwidget_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self QListWidget*
bool q_listwidget_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self QListWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_listwidget_set_item_alignment(void* self, int32_t alignment);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t q_listwidget_item_alignment(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QListWidget*
/// @param indexes libqt_list /* of QModelIndex* */
void q_listwidget_indexes_moved(void* self, libqt_list indexes);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex** indexes)
void q_listwidget_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// @param self QListWidget*
/// @param model QAbstractItemModel*
void q_listwidget_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QAbstractItemModel* model)
void q_listwidget_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Base class method implementation
///
/// @param self QListWidget*
/// @param model QAbstractItemModel*
void q_listwidget_qbase_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QListWidget*
QAbstractItemModel* q_listwidget_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QListWidget*
QItemSelectionModel* q_listwidget_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QListWidget*
/// @param delegate QAbstractItemDelegate*
void q_listwidget_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QListWidget*
QAbstractItemDelegate* q_listwidget_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QListWidget*
/// @param mode enum QAbstractItemView__SelectionMode
void q_listwidget_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__SelectionMode
int32_t q_listwidget_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QListWidget*
/// @param behavior enum QAbstractItemView__SelectionBehavior
void q_listwidget_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__SelectionBehavior
int32_t q_listwidget_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QListWidget*
QModelIndex* q_listwidget_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QListWidget*
QModelIndex* q_listwidget_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QListWidget*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
void q_listwidget_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QListWidget*
///
/// @return flag of enum QAbstractItemView__EditTrigger
int32_t q_listwidget_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QListWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_listwidget_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_listwidget_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QListWidget*
void q_listwidget_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QListWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_listwidget_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_listwidget_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QListWidget*
void q_listwidget_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QListWidget*
bool q_listwidget_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QListWidget*
/// @param margin int
void q_listwidget_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QListWidget*
int32_t q_listwidget_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QListWidget*
bool q_listwidget_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QListWidget*
bool q_listwidget_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QListWidget*
bool q_listwidget_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QListWidget*
/// @param overwrite bool
void q_listwidget_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QListWidget*
bool q_listwidget_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QListWidget*
/// @param behavior enum QAbstractItemView__DragDropMode
void q_listwidget_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__DragDropMode
int32_t q_listwidget_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QListWidget*
/// @param dropAction enum Qt__DropAction
void q_listwidget_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QListWidget*
///
/// @return enum Qt__DropAction
int32_t q_listwidget_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QListWidget*
bool q_listwidget_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QListWidget*
/// @param size QSize*
void q_listwidget_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QListWidget*
QSize* q_listwidget_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QListWidget*
/// @param mode enum Qt__TextElideMode
void q_listwidget_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QListWidget*
///
/// @return enum Qt__TextElideMode
int32_t q_listwidget_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QListWidget*
/// @param index QModelIndex*
QSize* q_listwidget_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param widget QWidget*
void q_listwidget_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QListWidget*
/// @param index QModelIndex*
QWidget* q_listwidget_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QListWidget*
/// @param row int
/// @param delegate QAbstractItemDelegate*
void q_listwidget_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QListWidget*
/// @param row int
QAbstractItemDelegate* q_listwidget_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QListWidget*
/// @param column int
/// @param delegate QAbstractItemDelegate*
void q_listwidget_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QListWidget*
/// @param column int
QAbstractItemDelegate* q_listwidget_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QListWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_listwidget_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QListWidget*
void q_listwidget_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QListWidget*
void q_listwidget_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QListWidget*
void q_listwidget_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QListWidget*
void q_listwidget_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self)
void q_listwidget_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QListWidget*
/// @param size QSize*
void q_listwidget_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QSize* size)
void q_listwidget_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QListWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_listwidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QListWidget*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_listwidget_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QListWidget*
QScrollBar* q_listwidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QListWidget*
/// @param scrollbar QScrollBar*
void q_listwidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QListWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_listwidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QListWidget*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_listwidget_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QListWidget*
QScrollBar* q_listwidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QListWidget*
/// @param scrollbar QScrollBar*
void q_listwidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QListWidget*
QWidget* q_listwidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QListWidget*
/// @param widget QWidget*
void q_listwidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QListWidget*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_listwidget_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QListWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_listwidget_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QListWidget*
QWidget* q_listwidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QListWidget*
/// @param widget QWidget*
void q_listwidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QListWidget*
QSize* q_listwidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QListWidget*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t q_listwidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QListWidget*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_listwidget_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QListWidget*
int32_t q_listwidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QListWidget*
/// @param frameStyle int
void q_listwidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QListWidget*
int32_t q_listwidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QListWidget*
///
/// @return enum QFrame__Shape
int32_t q_listwidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QListWidget*
/// @param frameShape enum QFrame__Shape
void q_listwidget_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QListWidget*
///
/// @return enum QFrame__Shadow
int32_t q_listwidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QListWidget*
/// @param frameShadow enum QFrame__Shadow
void q_listwidget_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QListWidget*
int32_t q_listwidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QListWidget*
/// @param lineWidth int
void q_listwidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QListWidget*
int32_t q_listwidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QListWidget*
/// @param midLineWidth int
void q_listwidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QListWidget*
QRect* q_listwidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QListWidget*
/// @param frameRect QRect*
void q_listwidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QListWidget*
uintptr_t q_listwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QListWidget*
void q_listwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QListWidget*
uintptr_t q_listwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QListWidget*
uintptr_t q_listwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QListWidget*
QStyle* q_listwidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QListWidget*
/// @param style QStyle*
void q_listwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QListWidget*
bool q_listwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QListWidget*
bool q_listwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QListWidget*
bool q_listwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QListWidget*
///
/// @return enum Qt__WindowModality
int32_t q_listwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QListWidget*
/// @param windowModality enum Qt__WindowModality
void q_listwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QListWidget*
bool q_listwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QListWidget*
/// @param param1 QWidget*
bool q_listwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QListWidget*
/// @param enabled bool
void q_listwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QListWidget*
/// @param disabled bool
void q_listwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QListWidget*
/// @param windowModified bool
void q_listwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QListWidget*
QRect* q_listwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QListWidget*
const QRect* q_listwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QListWidget*
QRect* q_listwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QListWidget*
int32_t q_listwidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QListWidget*
int32_t q_listwidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QListWidget*
QPoint* q_listwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QListWidget*
QSize* q_listwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QListWidget*
QSize* q_listwidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QListWidget*
int32_t q_listwidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QListWidget*
int32_t q_listwidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QListWidget*
QRect* q_listwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QListWidget*
QRect* q_listwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QListWidget*
QRegion* q_listwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QListWidget*
QSize* q_listwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QListWidget*
QSize* q_listwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QListWidget*
int32_t q_listwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QListWidget*
int32_t q_listwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QListWidget*
int32_t q_listwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QListWidget*
int32_t q_listwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QListWidget*
/// @param minimumSize QSize*
void q_listwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QListWidget*
/// @param minw int
/// @param minh int
void q_listwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QListWidget*
/// @param maximumSize QSize*
void q_listwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QListWidget*
/// @param maxw int
/// @param maxh int
void q_listwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QListWidget*
/// @param minw int
void q_listwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QListWidget*
/// @param minh int
void q_listwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QListWidget*
/// @param maxw int
void q_listwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QListWidget*
/// @param maxh int
void q_listwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QListWidget*
QSize* q_listwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QListWidget*
/// @param sizeIncrement QSize*
void q_listwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QListWidget*
/// @param w int
/// @param h int
void q_listwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QListWidget*
QSize* q_listwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QListWidget*
/// @param baseSize QSize*
void q_listwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QListWidget*
/// @param basew int
/// @param baseh int
void q_listwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QListWidget*
/// @param fixedSize QSize*
void q_listwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QListWidget*
/// @param w int
/// @param h int
void q_listwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QListWidget*
/// @param w int
void q_listwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QListWidget*
/// @param h int
void q_listwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QListWidget*
/// @param param1 QPointF*
QPointF* q_listwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QListWidget*
/// @param param1 QPoint*
QPoint* q_listwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QListWidget*
/// @param param1 QPointF*
QPointF* q_listwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QListWidget*
/// @param param1 QPoint*
QPoint* q_listwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QListWidget*
/// @param param1 QPointF*
QPointF* q_listwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QListWidget*
/// @param param1 QPoint*
QPoint* q_listwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QListWidget*
/// @param param1 QPointF*
QPointF* q_listwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QListWidget*
/// @param param1 QPoint*
QPoint* q_listwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QListWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_listwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QListWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_listwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QListWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_listwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QListWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_listwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QListWidget*
QWidget* q_listwidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QListWidget*
QWidget* q_listwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QListWidget*
QWidget* q_listwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QListWidget*
const QPalette* q_listwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QListWidget*
/// @param palette QPalette*
void q_listwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QListWidget*
/// @param backgroundRole enum QPalette__ColorRole
void q_listwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QListWidget*
///
/// @return enum QPalette__ColorRole
int32_t q_listwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QListWidget*
/// @param foregroundRole enum QPalette__ColorRole
void q_listwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QListWidget*
///
/// @return enum QPalette__ColorRole
int32_t q_listwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QListWidget*
const QFont* q_listwidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QListWidget*
/// @param font QFont*
void q_listwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QListWidget*
QFontMetrics* q_listwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QListWidget*
QFontInfo* q_listwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QListWidget*
QCursor* q_listwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QListWidget*
/// @param cursor QCursor*
void q_listwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QListWidget*
void q_listwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QListWidget*
bool q_listwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QListWidget*
bool q_listwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QListWidget*
bool q_listwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QListWidget*
/// @param mask QBitmap*
void q_listwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QListWidget*
/// @param mask QRegion*
void q_listwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QListWidget*
QRegion* q_listwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QListWidget*
void q_listwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param target QPaintDevice*
void q_listwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param painter QPainter*
void q_listwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QListWidget*
QPixmap* q_listwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QListWidget*
QGraphicsEffect* q_listwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QListWidget*
/// @param effect QGraphicsEffect*
void q_listwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QListWidget*
/// @param typeVal enum Qt__GestureType
void q_listwidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QListWidget*
/// @param typeVal enum Qt__GestureType
void q_listwidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QListWidget*
/// @param windowTitle const char*
void q_listwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QListWidget*
/// @param styleSheet const char*
void q_listwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QListWidget*
/// @param icon QIcon*
void q_listwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QListWidget*
QIcon* q_listwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QListWidget*
/// @param windowIconText const char*
void q_listwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QListWidget*
/// @param windowRole const char*
void q_listwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QListWidget*
/// @param filePath const char*
void q_listwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QListWidget*
/// @param level double
void q_listwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QListWidget*
double q_listwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QListWidget*
bool q_listwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QListWidget*
/// @param toolTip const char*
void q_listwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QListWidget*
/// @param msec int
void q_listwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QListWidget*
int32_t q_listwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QListWidget*
/// @param statusTip const char*
void q_listwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QListWidget*
/// @param whatsThis const char*
void q_listwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QListWidget*
/// @param name const char*
void q_listwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QListWidget*
/// @param description const char*
void q_listwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QListWidget*
/// @param direction enum Qt__LayoutDirection
void q_listwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QListWidget*
///
/// @return enum Qt__LayoutDirection
int32_t q_listwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QListWidget*
void q_listwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QListWidget*
/// @param locale QLocale*
void q_listwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QListWidget*
QLocale* q_listwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QListWidget*
void q_listwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QListWidget*
bool q_listwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QListWidget*
bool q_listwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QListWidget*
void q_listwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QListWidget*
bool q_listwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QListWidget*
void q_listwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QListWidget*
void q_listwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QListWidget*
/// @param reason enum Qt__FocusReason
void q_listwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QListWidget*
///
/// @return enum Qt__FocusPolicy
int32_t q_listwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QListWidget*
/// @param policy enum Qt__FocusPolicy
void q_listwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QListWidget*
bool q_listwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_listwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QListWidget*
/// @param focusProxy QWidget*
void q_listwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QListWidget*
QWidget* q_listwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QListWidget*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_listwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QListWidget*
/// @param policy enum Qt__ContextMenuPolicy
void q_listwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QListWidget*
void q_listwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QListWidget*
/// @param param1 QCursor*
void q_listwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QListWidget*
void q_listwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QListWidget*
void q_listwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QListWidget*
void q_listwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QListWidget*
/// @param key QKeySequence*
int32_t q_listwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QListWidget*
/// @param id int
void q_listwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QListWidget*
/// @param id int
void q_listwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QListWidget*
/// @param id int
void q_listwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_listwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_listwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QListWidget*
bool q_listwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QListWidget*
/// @param enable bool
void q_listwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QListWidget*
QGraphicsProxyWidget* q_listwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListWidget*
void q_listwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_listwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListWidget*
/// @param param1 QRect*
void q_listwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListWidget*
/// @param param1 QRegion*
void q_listwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_listwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListWidget*
/// @param param1 QRect*
void q_listwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListWidget*
/// @param param1 QRegion*
void q_listwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QListWidget*
/// @param hidden bool
void q_listwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QListWidget*
void q_listwidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QListWidget*
void q_listwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QListWidget*
void q_listwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QListWidget*
void q_listwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QListWidget*
void q_listwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QListWidget*
void q_listwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QListWidget*
bool q_listwidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QListWidget*
void q_listwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QListWidget*
void q_listwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QListWidget*
/// @param param1 QWidget*
void q_listwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
void q_listwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QListWidget*
/// @param param1 QPoint*
void q_listwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QListWidget*
/// @param w int
/// @param h int
void q_listwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QListWidget*
/// @param param1 QSize*
void q_listwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_listwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QListWidget*
/// @param geometry QRect*
void q_listwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
char* q_listwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QListWidget*
/// @param geometry const char*
bool q_listwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QListWidget*
void q_listwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QListWidget*
bool q_listwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QListWidget*
/// @param param1 QWidget*
bool q_listwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QListWidget*
bool q_listwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QListWidget*
bool q_listwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QListWidget*
bool q_listwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QListWidget*
bool q_listwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__WindowState
int32_t q_listwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QListWidget*
/// @param state flag of enum Qt__WindowState
void q_listwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QListWidget*
/// @param state flag of enum Qt__WindowState
void q_listwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QListWidget*
QSizePolicy* q_listwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QListWidget*
/// @param sizePolicy QSizePolicy*
void q_listwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QListWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_listwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QListWidget*
QRegion* q_listwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QListWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_listwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QListWidget*
/// @param margins QMargins*
void q_listwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QListWidget*
QMargins* q_listwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QListWidget*
QRect* q_listwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QListWidget*
QLayout* q_listwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QListWidget*
/// @param layout QLayout*
void q_listwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QListWidget*
void q_listwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QListWidget*
/// @param parent QWidget*
void q_listwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QListWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_listwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
void q_listwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_listwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QListWidget*
QWidget* q_listwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QListWidget*
QWidget* q_listwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QListWidget*
QWidget* q_listwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QListWidget*
bool q_listwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QListWidget*
/// @param on bool
void q_listwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListWidget*
/// @param action QAction*
void q_listwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QListWidget*
/// @param actions libqt_list /* of QAction* */
void q_listwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QListWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_listwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QListWidget*
/// @param before QAction*
/// @param action QAction*
void q_listwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QListWidget*
/// @param action QAction*
void q_listwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QListWidget*
libqt_list /* of QAction* */ q_listwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListWidget*
/// @param text const char*
QAction* q_listwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* q_listwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_listwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_listwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QListWidget*
QWidget* q_listwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QListWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_listwidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__WindowType
int64_t q_listwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QListWidget*
/// @param param1 enum Qt__WindowType
void q_listwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QListWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_listwidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QListWidget*
///
/// @return enum Qt__WindowType
int64_t q_listwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_listwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QListWidget*
/// @param x int
/// @param y int
QWidget* q_listwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QListWidget*
/// @param p QPoint*
QWidget* q_listwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QListWidget*
/// @param p QPointF*
QWidget* q_listwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QListWidget*
/// @param param1 enum Qt__WidgetAttribute
void q_listwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QListWidget*
/// @param param1 enum Qt__WidgetAttribute
bool q_listwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QListWidget*
void q_listwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QListWidget*
/// @param child QWidget*
bool q_listwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QListWidget*
bool q_listwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QListWidget*
/// @param enabled bool
void q_listwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QListWidget*
QBackingStore* q_listwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QListWidget*
QWindow* q_listwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QListWidget*
QScreen* q_listwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QListWidget*
/// @param screen QScreen*
void q_listwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_listwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QListWidget*
/// @param title const char*
void q_listwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, const char* title)
void q_listwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QListWidget*
/// @param icon QIcon*
void q_listwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QIcon* icon)
void q_listwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QListWidget*
/// @param iconText const char*
void q_listwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, const char* iconText)
void q_listwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QListWidget*
/// @param pos QPoint*
void q_listwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QPoint* pos)
void q_listwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QListWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_listwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QListWidget*
/// @param hints flag of enum Qt__InputMethodHint
void q_listwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_listwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_listwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_listwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_listwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_listwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_listwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QListWidget*
/// @param rectangle QRect*
QPixmap* q_listwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QListWidget*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_listwidget_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QListWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_listwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QListWidget*
/// @param id int
/// @param enable bool
void q_listwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QListWidget*
/// @param id int
/// @param enable bool
void q_listwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QListWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_listwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QListWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_listwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_listwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_listwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char* q_listwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QListWidget*
/// @param name char*
void q_listwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QListWidget*
bool q_listwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QListWidget*
bool q_listwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QListWidget*
bool q_listwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QListWidget*
bool q_listwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QListWidget*
/// @param b bool
bool q_listwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QListWidget*
QThread* q_listwidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QListWidget*
/// @param thread QThread*
bool q_listwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListWidget*
/// @param interval int
int32_t q_listwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QListWidget*
/// @param id int
void q_listwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QListWidget*
/// @param id enum Qt__TimerId
void q_listwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QListWidget*
libqt_list /* of QObject* */ q_listwidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QListWidget*
/// @param filterObj QObject*
void q_listwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QListWidget*
/// @param obj QObject*
void q_listwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_listwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QListWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_listwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_listwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_listwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QListWidget*
void q_listwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QListWidget*
void q_listwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QListWidget*
/// @param name const char*
/// @param value QVariant*
bool q_listwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QListWidget*
/// @param name const char*
QVariant* q_listwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QListWidget*
const char** q_listwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QListWidget*
QBindingStorage* q_listwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QListWidget*
const QBindingStorage* q_listwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListWidget*
void q_listwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self)
void q_listwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QListWidget*
QObject* q_listwidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QListWidget*
/// @param classname const char*
bool q_listwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QListWidget*
void q_listwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QListWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_listwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_listwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_listwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QListWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_listwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListWidget*
/// @param param1 QObject*
void q_listwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QObject* param1)
void q_listwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QListWidget*
bool q_listwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QListWidget*
int32_t q_listwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QListWidget*
int32_t q_listwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QListWidget*
int32_t q_listwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QListWidget*
int32_t q_listwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QListWidget*
int32_t q_listwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QListWidget*
int32_t q_listwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QListWidget*
double q_listwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QListWidget*
double q_listwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QListWidget*
int32_t q_listwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QListWidget*
int32_t q_listwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_listwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_listwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QRect* q_listwidget_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QRect* q_listwidget_qbase_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QRect* func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_listwidget_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_listwidget_qbase_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
void q_listwidget_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param p QPoint*
QModelIndex* q_listwidget_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param p QPoint*
QModelIndex* q_listwidget_qbase_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QModelIndex* func(QListWidget* self, QPoint* p)
void q_listwidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_reset(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
void q_listwidget_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
void q_listwidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
void q_listwidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int dx, int dy)
void q_listwidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_listwidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_listwidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_listwidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_listwidget_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_listwidget_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* parent, int start, int end)
void q_listwidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_listwidget_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_listwidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* parent, int start, int end)
void q_listwidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QMouseEvent*
void q_listwidget_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QMouseEvent*
void q_listwidget_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMouseEvent* e)
void q_listwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QMouseEvent*
void q_listwidget_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QMouseEvent*
void q_listwidget_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMouseEvent* e)
void q_listwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QWheelEvent*
void q_listwidget_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QWheelEvent*
void q_listwidget_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QWheelEvent* e)
void q_listwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QTimerEvent*
void q_listwidget_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QTimerEvent*
void q_listwidget_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QTimerEvent* e)
void q_listwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QResizeEvent*
void q_listwidget_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QResizeEvent*
void q_listwidget_qbase_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QResizeEvent* e)
void q_listwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QDragMoveEvent*
void q_listwidget_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QDragMoveEvent*
void q_listwidget_qbase_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QDragMoveEvent* e)
void q_listwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QDragLeaveEvent*
void q_listwidget_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QDragLeaveEvent*
void q_listwidget_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QDragLeaveEvent* e)
void q_listwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_listwidget_start_drag(void* self, int32_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_listwidget_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, flag of enum Qt__DropAction supportedActions)
void q_listwidget_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param option QStyleOptionViewItem*
void q_listwidget_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param option QStyleOptionViewItem*
void q_listwidget_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QStyleOptionViewItem* option)
void q_listwidget_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param e QPaintEvent*
void q_listwidget_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param e QPaintEvent*
void q_listwidget_qbase_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QPaintEvent* e)
void q_listwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_listwidget_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_listwidget_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QModelIndex* func(QListWidget* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
void q_listwidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_listwidget_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_listwidget_qbase_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
void q_listwidget_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param selection QItemSelection*
QRegion* q_listwidget_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param selection QItemSelection*
QRegion* q_listwidget_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QRegion* func(QListWidget* self, QItemSelection* selection)
void q_listwidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
libqt_list /* of QModelIndex* */ q_listwidget_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
libqt_list /* of QModelIndex* */ q_listwidget_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QModelIndex** func()
void q_listwidget_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_update_geometries(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
bool q_listwidget_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
bool q_listwidget_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_listwidget_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_listwidget_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QItemSelection* selected, QItemSelection* deselected)
void q_listwidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_listwidget_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_listwidget_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QModelIndex* current, QModelIndex* previous)
void q_listwidget_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QSize* func()
void q_listwidget_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param search const char*
void q_listwidget_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param search const char*
void q_listwidget_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, const char* search)
void q_listwidget_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param row int
int32_t q_listwidget_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param row int
int32_t q_listwidget_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, int row)
void q_listwidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param column int
int32_t q_listwidget_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param column int
int32_t q_listwidget_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, int column)
void q_listwidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_listwidget_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_listwidget_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QAbstractItemDelegate* func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_listwidget_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_listwidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QVariant* func(QListWidget* self, enum Qt__InputMethodQuery query)
void q_listwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param action int
void q_listwidget_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param action int
void q_listwidget_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int action)
void q_listwidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param action int
void q_listwidget_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param action int
void q_listwidget_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int action)
void q_listwidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param value int
void q_listwidget_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param value int
void q_listwidget_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int value)
void q_listwidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param value int
void q_listwidget_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param value int
void q_listwidget_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int value)
void q_listwidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_listwidget_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_listwidget_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
void q_listwidget_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param editor QWidget*
void q_listwidget_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param editor QWidget*
void q_listwidget_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QWidget* editor)
void q_listwidget_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param editor QObject*
void q_listwidget_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param editor QObject*
void q_listwidget_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QObject* editor)
void q_listwidget_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_listwidget_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_listwidget_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
void q_listwidget_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_listwidget_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_listwidget_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, QModelIndex* index, QEvent* event)
void q_listwidget_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param next bool
bool q_listwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param next bool
bool q_listwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, bool next)
void q_listwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
bool q_listwidget_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
bool q_listwidget_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QEvent* event)
void q_listwidget_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QMouseEvent*
void q_listwidget_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QMouseEvent*
void q_listwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMouseEvent* event)
void q_listwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QMouseEvent*
void q_listwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QMouseEvent*
void q_listwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMouseEvent* event)
void q_listwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QDragEnterEvent*
void q_listwidget_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QDragEnterEvent*
void q_listwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QDragEnterEvent* event)
void q_listwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QFocusEvent*
void q_listwidget_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QFocusEvent*
void q_listwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QFocusEvent* event)
void q_listwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QFocusEvent*
void q_listwidget_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QFocusEvent*
void q_listwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QFocusEvent* event)
void q_listwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QKeyEvent*
void q_listwidget_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QKeyEvent*
void q_listwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QKeyEvent* event)
void q_listwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QInputMethodEvent*
void q_listwidget_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QInputMethodEvent*
void q_listwidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QInputMethodEvent* event)
void q_listwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_listwidget_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_listwidget_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QObject* object, QEvent* event)
void q_listwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QSize* func()
void q_listwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QSize* func()
void q_listwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param viewport QWidget*
void q_listwidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param viewport QWidget*
void q_listwidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QWidget* viewport)
void q_listwidget_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QContextMenuEvent*
void q_listwidget_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QContextMenuEvent*
void q_listwidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QContextMenuEvent* param1)
void q_listwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QEvent*
void q_listwidget_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QEvent*
void q_listwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QEvent* param1)
void q_listwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param option QStyleOptionFrame*
void q_listwidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param option QStyleOptionFrame*
void q_listwidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QStyleOptionFrame* option)
void q_listwidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param visible bool
void q_listwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param visible bool
void q_listwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, bool visible)
void q_listwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param param1 int
int32_t q_listwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param param1 int
int32_t q_listwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, int param1)
void q_listwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func()
void q_listwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QPaintEngine* q_listwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QPaintEngine* q_listwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QPaintEngine* func()
void q_listwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QKeyEvent*
void q_listwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QKeyEvent*
void q_listwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QKeyEvent* event)
void q_listwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QEnterEvent*
void q_listwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QEnterEvent*
void q_listwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QEnterEvent* event)
void q_listwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
void q_listwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
void q_listwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QEvent* event)
void q_listwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QMoveEvent*
void q_listwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QMoveEvent*
void q_listwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMoveEvent* event)
void q_listwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QCloseEvent*
void q_listwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QCloseEvent*
void q_listwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QCloseEvent* event)
void q_listwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QTabletEvent*
void q_listwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QTabletEvent*
void q_listwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QTabletEvent* event)
void q_listwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QActionEvent*
void q_listwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QActionEvent*
void q_listwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QActionEvent* event)
void q_listwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QShowEvent*
void q_listwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QShowEvent*
void q_listwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QShowEvent* event)
void q_listwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QHideEvent*
void q_listwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QHideEvent*
void q_listwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QHideEvent* event)
void q_listwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_listwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_listwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, const char* eventType, void* message, intptr_t* result)
void q_listwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_listwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_listwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_listwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param painter QPainter*
void q_listwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param painter QPainter*
void q_listwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QPainter* painter)
void q_listwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param offset QPoint*
QPaintDevice* q_listwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param offset QPoint*
QPaintDevice* q_listwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QPaintDevice* func(QListWidget* self, QPoint* offset)
void q_listwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QPainter* q_listwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QPainter* q_listwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QPainter* func()
void q_listwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QChildEvent*
void q_listwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QChildEvent*
void q_listwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QChildEvent* event)
void q_listwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
void q_listwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param event QEvent*
void q_listwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QEvent* event)
void q_listwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
void q_listwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
void q_listwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMetaMethod* signal)
void q_listwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
void q_listwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
void q_listwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QMetaMethod* signal)
void q_listwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param width int
/// @param height int
void q_listwidget_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param width int
/// @param height int
void q_listwidget_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int width, int height)
void q_listwidget_on_resize_contents(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QSize* q_listwidget_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QSize* func()
void q_listwidget_on_contents_size(void* self, QSize* (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QRect* q_listwidget_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param index QModelIndex*
QRect* q_listwidget_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QRect* func(QListWidget* self, QModelIndex* index)
void q_listwidget_on_rect_for_index(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param position QPoint*
/// @param index QModelIndex*
void q_listwidget_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param position QPoint*
/// @param index QModelIndex*
void q_listwidget_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QPoint* position, QModelIndex* index)
void q_listwidget_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__State
int32_t q_listwidget_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__State
int32_t q_listwidget_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param state enum QAbstractItemView__State
void q_listwidget_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param state enum QAbstractItemView__State
void q_listwidget_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, enum QAbstractItemView__State state)
void q_listwidget_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param region QRegion*
void q_listwidget_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param region QRegion*
void q_listwidget_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QRegion* region)
void q_listwidget_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
void q_listwidget_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param dx int
/// @param dy int
void q_listwidget_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int dx, int dy)
void q_listwidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QPoint* q_listwidget_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QPoint* q_listwidget_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QPoint* func()
void q_listwidget_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_listwidget_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_listwidget_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_listwidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_listwidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, int left, int top, int right, int bottom)
void q_listwidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QMargins* q_listwidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QMargins* q_listwidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QMargins* func()
void q_listwidget_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QPainter*
void q_listwidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param param1 QPainter*
void q_listwidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, QPainter* param1)
void q_listwidget_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
void q_listwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback void func()
void q_listwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func()
void q_listwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
bool q_listwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func()
void q_listwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
QObject* q_listwidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
QObject* q_listwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback QObject* func()
void q_listwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
int32_t q_listwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func()
void q_listwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param signal const char*
int32_t q_listwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param signal const char*
int32_t q_listwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback int32_t func(QListWidget* self, const char* signal)
void q_listwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
bool q_listwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param signal QMetaMethod*
bool q_listwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback bool func(QListWidget* self, QMetaMethod* signal)
void q_listwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_listwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_listwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListWidget*
/// @param callback double func(QListWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_listwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QListWidget*
/// @param callback void func(QListWidget* self, const char* objectName)
void q_listwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dtor.QListWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QListWidget*
void q_listwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qlistwidget.html#types

typedef enum {
    QLISTWIDGETITEM_ITEMTYPE_TYPE = 0,
    QLISTWIDGETITEM_ITEMTYPE_USERTYPE = 1000
} QListWidgetItem__ItemType;

#endif
