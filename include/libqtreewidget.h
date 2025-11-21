#pragma once
#ifndef SRC_QT6C_LIBQTREEWIDGET_H
#define SRC_QT6C_LIBQTREEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtreewidgetitem.html

/// q_treewidgetitem_new constructs a new QTreeWidgetItem object.
///
QTreeWidgetItem* q_treewidgetitem_new();

/// q_treewidgetitem_new2 constructs a new QTreeWidgetItem object.
///
/// @param strings const char**
QTreeWidgetItem* q_treewidgetitem_new2(const char* strings[static 1]);

/// q_treewidgetitem_new3 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
QTreeWidgetItem* q_treewidgetitem_new3(void* treeview);

/// q_treewidgetitem_new4 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
/// @param strings const char**
QTreeWidgetItem* q_treewidgetitem_new4(void* treeview, const char* strings[static 1]);

/// q_treewidgetitem_new5 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
/// @param after QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_new5(void* treeview, void* after);

/// q_treewidgetitem_new6 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_new6(void* parent);

/// q_treewidgetitem_new7 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
/// @param strings const char**
QTreeWidgetItem* q_treewidgetitem_new7(void* parent, const char* strings[static 1]);

/// q_treewidgetitem_new8 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
/// @param after QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_new8(void* parent, void* after);

/// q_treewidgetitem_new9 constructs a new QTreeWidgetItem object.
///
/// @param other QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_new9(void* other);

/// q_treewidgetitem_new10 constructs a new QTreeWidgetItem object.
///
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new10(int type);

/// q_treewidgetitem_new11 constructs a new QTreeWidgetItem object.
///
/// @param strings const char**
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new11(const char* strings[static 1], int type);

/// q_treewidgetitem_new12 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new12(void* treeview, int type);

/// q_treewidgetitem_new13 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
/// @param strings const char**
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new13(void* treeview, const char* strings[static 1], int type);

/// q_treewidgetitem_new14 constructs a new QTreeWidgetItem object.
///
/// @param treeview QTreeWidget*
/// @param after QTreeWidgetItem*
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new14(void* treeview, void* after, int type);

/// q_treewidgetitem_new15 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new15(void* parent, int type);

/// q_treewidgetitem_new16 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
/// @param strings const char**
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new16(void* parent, const char* strings[static 1], int type);

/// q_treewidgetitem_new17 constructs a new QTreeWidgetItem object.
///
/// @param parent QTreeWidgetItem*
/// @param after QTreeWidgetItem*
/// @param type int
QTreeWidgetItem* q_treewidgetitem_new17(void* parent, void* after, int type);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
///
/// @param self QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback QTreeWidgetItem* func()
void q_treewidgetitem_on_clone(void* self, QTreeWidgetItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#treeWidget)
///
/// @param self QTreeWidgetItem*
QTreeWidget* q_treewidgetitem_tree_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSelected)
///
/// @param self QTreeWidgetItem*
/// @param selectVal bool
void q_treewidgetitem_set_selected(void* self, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isSelected)
///
/// @param self QTreeWidgetItem*
bool q_treewidgetitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setHidden)
///
/// @param self QTreeWidgetItem*
/// @param hide bool
void q_treewidgetitem_set_hidden(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isHidden)
///
/// @param self QTreeWidgetItem*
bool q_treewidgetitem_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setExpanded)
///
/// @param self QTreeWidgetItem*
/// @param expand bool
void q_treewidgetitem_set_expanded(void* self, bool expand);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isExpanded)
///
/// @param self QTreeWidgetItem*
bool q_treewidgetitem_is_expanded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFirstColumnSpanned)
///
/// @param self QTreeWidgetItem*
/// @param span bool
void q_treewidgetitem_set_first_column_spanned(void* self, bool span);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isFirstColumnSpanned)
///
/// @param self QTreeWidgetItem*
bool q_treewidgetitem_is_first_column_spanned(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setDisabled)
///
/// @param self QTreeWidgetItem*
/// @param disabled bool
void q_treewidgetitem_set_disabled(void* self, bool disabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isDisabled)
///
/// @param self QTreeWidgetItem*
bool q_treewidgetitem_is_disabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setChildIndicatorPolicy)
///
/// @param self QTreeWidgetItem*
/// @param policy enum QTreeWidgetItem__ChildIndicatorPolicy
void q_treewidgetitem_set_child_indicator_policy(void* self, int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childIndicatorPolicy)
///
/// @param self QTreeWidgetItem*
///
/// @return enum QTreeWidgetItem__ChildIndicatorPolicy
int32_t q_treewidgetitem_child_indicator_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#flags)
///
/// @param self QTreeWidgetItem*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_treewidgetitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFlags)
///
/// @param self QTreeWidgetItem*
/// @param flags flag of enum Qt__ItemFlag
void q_treewidgetitem_set_flags(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidgetItem*
/// @param column int
const char* q_treewidgetitem_text(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setText)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param text const char*
void q_treewidgetitem_set_text(void* self, int column, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#icon)
///
/// @param self QTreeWidgetItem*
/// @param column int
QIcon* q_treewidgetitem_icon(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setIcon)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param icon QIcon*
void q_treewidgetitem_set_icon(void* self, int column, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidgetItem*
/// @param column int
const char* q_treewidgetitem_status_tip(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setStatusTip)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param statusTip const char*
void q_treewidgetitem_set_status_tip(void* self, int column, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidgetItem*
/// @param column int
const char* q_treewidgetitem_tool_tip(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setToolTip)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param toolTip const char*
void q_treewidgetitem_set_tool_tip(void* self, int column, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidgetItem*
/// @param column int
const char* q_treewidgetitem_whats_this(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setWhatsThis)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param whatsThis const char*
void q_treewidgetitem_set_whats_this(void* self, int column, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#font)
///
/// @param self QTreeWidgetItem*
/// @param column int
QFont* q_treewidgetitem_font(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFont)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param font QFont*
void q_treewidgetitem_set_font(void* self, int column, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#textAlignment)
///
/// @param self QTreeWidgetItem*
/// @param column int
int32_t q_treewidgetitem_text_alignment(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param alignment int
void q_treewidgetitem_set_text_alignment(void* self, int column, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param alignment enum Qt__AlignmentFlag
void q_treewidgetitem_set_text_alignment2(void* self, int column, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param alignment flag of enum Qt__AlignmentFlag
void q_treewidgetitem_set_text_alignment3(void* self, int column, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#background)
///
/// @param self QTreeWidgetItem*
/// @param column int
QBrush* q_treewidgetitem_background(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setBackground)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param brush QBrush*
void q_treewidgetitem_set_background(void* self, int column, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#foreground)
///
/// @param self QTreeWidgetItem*
/// @param column int
QBrush* q_treewidgetitem_foreground(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setForeground)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param brush QBrush*
void q_treewidgetitem_set_foreground(void* self, int column, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#checkState)
///
/// @param self QTreeWidgetItem*
/// @param column int
///
/// @return enum Qt__CheckState
int32_t q_treewidgetitem_check_state(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setCheckState)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param state enum Qt__CheckState
void q_treewidgetitem_set_check_state(void* self, int column, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sizeHint)
///
/// @param self QTreeWidgetItem*
/// @param column int
QSize* q_treewidgetitem_size_hint(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSizeHint)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param size QSize*
void q_treewidgetitem_set_size_hint(void* self, int column, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param role int
QVariant* q_treewidgetitem_data(void* self, int column, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback QVariant* func(QTreeWidgetItem* self, int column, int role)
void q_treewidgetitem_on_data(void* self, QVariant* (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param role int
QVariant* q_treewidgetitem_qbase_data(void* self, int column, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param role int
/// @param value QVariant*
void q_treewidgetitem_set_data(void* self, int column, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback void func(QTreeWidgetItem* self, int column, int role, QVariant* value)
void q_treewidgetitem_on_set_data(void* self, void (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param role int
/// @param value QVariant*
void q_treewidgetitem_qbase_set_data(void* self, int column, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
///
/// @param self QTreeWidgetItem*
/// @param other QTreeWidgetItem*
bool q_treewidgetitem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback bool func(QTreeWidgetItem* self, QTreeWidgetItem* other)
void q_treewidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
/// @param other QTreeWidgetItem*
bool q_treewidgetitem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
///
/// @param self QTreeWidgetItem*
/// @param in QDataStream*
void q_treewidgetitem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback void func(QTreeWidgetItem* self, QDataStream* in)
void q_treewidgetitem_on_read(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
/// @param in QDataStream*
void q_treewidgetitem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
///
/// @param self QTreeWidgetItem*
/// @param out QDataStream*
void q_treewidgetitem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback void func(QTreeWidgetItem* self, QDataStream* out)
void q_treewidgetitem_on_write(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
/// @param out QDataStream*
void q_treewidgetitem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-eq)
///
/// @param self QTreeWidgetItem*
/// @param other QTreeWidgetItem*
void q_treewidgetitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#parent)
///
/// @param self QTreeWidgetItem*
QTreeWidgetItem* q_treewidgetitem_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#child)
///
/// @param self QTreeWidgetItem*
/// @param index int
QTreeWidgetItem* q_treewidgetitem_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childCount)
///
/// @param self QTreeWidgetItem*
int32_t q_treewidgetitem_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#columnCount)
///
/// @param self QTreeWidgetItem*
int32_t q_treewidgetitem_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#indexOfChild)
///
/// @param self QTreeWidgetItem*
/// @param child QTreeWidgetItem*
int32_t q_treewidgetitem_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChild)
///
/// @param self QTreeWidgetItem*
/// @param child QTreeWidgetItem*
void q_treewidgetitem_add_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChild)
///
/// @param self QTreeWidgetItem*
/// @param index int
/// @param child QTreeWidgetItem*
void q_treewidgetitem_insert_child(void* self, int index, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#removeChild)
///
/// @param self QTreeWidgetItem*
/// @param child QTreeWidgetItem*
void q_treewidgetitem_remove_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChild)
///
/// @param self QTreeWidgetItem*
/// @param index int
QTreeWidgetItem* q_treewidgetitem_take_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChildren)
///
/// @param self QTreeWidgetItem*
/// @param children libqt_list /* of QTreeWidgetItem* */
void q_treewidgetitem_add_children(void* self, libqt_list children);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChildren)
///
/// @param self QTreeWidgetItem*
/// @param index int
/// @param children libqt_list /* of QTreeWidgetItem* */
void q_treewidgetitem_insert_children(void* self, int index, libqt_list children);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChildren)
///
/// @param self QTreeWidgetItem*
libqt_list /* of QTreeWidgetItem* */ q_treewidgetitem_take_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#type)
///
/// @param self QTreeWidgetItem*
int32_t q_treewidgetitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sortChildren)
///
/// @param self QTreeWidgetItem*
/// @param column int
/// @param order enum Qt__SortOrder
void q_treewidgetitem_sort_children(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
///
/// @param self QTreeWidgetItem*
void q_treewidgetitem_emit_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidgetItem*
/// @param callback void func()
void q_treewidgetitem_on_emit_data_changed(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
///
/// Base class method implementation
///
/// @param self QTreeWidgetItem*
void q_treewidgetitem_qbase_emit_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#dtor.QTreeWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self QTreeWidgetItem*
void q_treewidgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qtreewidget.html

/// q_treewidget_new constructs a new QTreeWidget object.
///
/// @param parent QWidget*
QTreeWidget* q_treewidget_new(void* parent);

/// q_treewidget_new2 constructs a new QTreeWidget object.
///
QTreeWidget* q_treewidget_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTreeWidget*
const QMetaObject* q_treewidget_meta_object(void* self);

/// @param self QTreeWidget*
/// @param param1 const char*
void* q_treewidget_metacast(void* self, const char* param1);

/// @param self QTreeWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_treewidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_treewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_treewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_treewidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#columnCount)
///
/// @param self QTreeWidget*
int32_t q_treewidget_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setColumnCount)
///
/// @param self QTreeWidget*
/// @param columns int
void q_treewidget_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#invisibleRootItem)
///
/// @param self QTreeWidget*
QTreeWidgetItem* q_treewidget_invisible_root_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItem)
///
/// @param self QTreeWidget*
/// @param index int
QTreeWidgetItem* q_treewidget_top_level_item(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItemCount)
///
/// @param self QTreeWidget*
int32_t q_treewidget_top_level_item_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItem)
///
/// @param self QTreeWidget*
/// @param index int
/// @param item QTreeWidgetItem*
void q_treewidget_insert_top_level_item(void* self, int index, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_add_top_level_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#takeTopLevelItem)
///
/// @param self QTreeWidget*
/// @param index int
QTreeWidgetItem* q_treewidget_take_top_level_item(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexOfTopLevelItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
int32_t q_treewidget_index_of_top_level_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItems)
///
/// @param self QTreeWidget*
/// @param index int
/// @param items libqt_list /* of QTreeWidgetItem* */
void q_treewidget_insert_top_level_items(void* self, int index, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItems)
///
/// @param self QTreeWidget*
/// @param items libqt_list /* of QTreeWidgetItem* */
void q_treewidget_add_top_level_items(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#headerItem)
///
/// @param self QTreeWidget*
QTreeWidgetItem* q_treewidget_header_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_set_header_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabels)
///
/// @param self QTreeWidget*
/// @param labels const char**
void q_treewidget_set_header_labels(void* self, const char* labels[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabel)
///
/// @param self QTreeWidget*
/// @param label const char*
void q_treewidget_set_header_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItem)
///
/// @param self QTreeWidget*
QTreeWidgetItem* q_treewidget_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentColumn)
///
/// @param self QTreeWidget*
int32_t q_treewidget_current_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_set_current_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_set_current_item2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_treewidget_set_current_item3(void* self, void* item, int column, int32_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
///
/// @param self QTreeWidget*
/// @param p QPoint*
QTreeWidgetItem* q_treewidget_item_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
QTreeWidgetItem* q_treewidget_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#visualItemRect)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
QRect* q_treewidget_visual_item_rect(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortColumn)
///
/// @param self QTreeWidget*
int32_t q_treewidget_sort_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortItems)
///
/// @param self QTreeWidget*
/// @param column int
/// @param order enum Qt__SortOrder
void q_treewidget_sort_items(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_edit_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_open_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_close_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
bool q_treewidget_is_persistent_editor_open(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemWidget)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
QWidget* q_treewidget_item_widget(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setItemWidget)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
/// @param widget QWidget*
void q_treewidget_set_item_widget(void* self, void* item, int column, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#removeItemWidget)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_remove_item_widget(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#selectedItems)
///
/// @param self QTreeWidget*
libqt_list /* of QTreeWidgetItem* */ q_treewidget_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
///
/// @param self QTreeWidget*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items(void* self, const char* text, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAbove)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
QTreeWidgetItem* q_treewidget_item_above(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemBelow)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
QTreeWidgetItem* q_treewidget_item_below(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
QModelIndex* q_treewidget_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemFromIndex)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QTreeWidgetItem* q_treewidget_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
///
/// @param self QTreeWidget*
/// @param selectionModel QItemSelectionModel*
void q_treewidget_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QItemSelectionModel* selectionModel)
void q_treewidget_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param selectionModel QItemSelectionModel*
void q_treewidget_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_scroll_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#expandItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_expand_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#collapseItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_collapse_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#clear)
///
/// @param self QTreeWidget*
void q_treewidget_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_pressed(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_pressed(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_clicked(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_clicked(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_double_clicked(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_double_clicked(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_activated(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_activated(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_entered(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_entered(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_item_changed(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item, int column)
void q_treewidget_on_item_changed(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_item_expanded(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item)
void q_treewidget_on_item_expanded(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
void q_treewidget_item_collapsed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* item)
void q_treewidget_on_item_collapsed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
///
/// @param self QTreeWidget*
/// @param current QTreeWidgetItem*
/// @param previous QTreeWidgetItem*
void q_treewidget_current_item_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous)
void q_treewidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
///
/// @param self QTreeWidget*
void q_treewidget_item_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self)
void q_treewidget_on_item_selection_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#event)
///
/// @param self QTreeWidget*
/// @param e QEvent*
bool q_treewidget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QEvent* e)
void q_treewidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#event)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param e QEvent*
bool q_treewidget_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char** q_treewidget_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback const char** func()
void q_treewidget_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
const char** q_treewidget_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
///
/// @param self QTreeWidget*
/// @param items libqt_list /* of QTreeWidgetItem* */
QMimeData* q_treewidget_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback QMimeData* func(QTreeWidget* self, QTreeWidgetItem** items)
void q_treewidget_on_mime_data(void* self, QMimeData* (*callback)(void*, QTreeWidgetItem**));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param items libqt_list /* of QTreeWidgetItem* */
QMimeData* q_treewidget_qbase_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
///
/// @param self QTreeWidget*
/// @param parent QTreeWidgetItem*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_treewidget_drop_mime_data(void* self, void* parent, int index, void* data, int32_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, enum Qt__DropAction action)
void q_treewidget_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param parent QTreeWidgetItem*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_treewidget_qbase_drop_mime_data(void* self, void* parent, int index, void* data, int32_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
///
/// @param self QTreeWidget*
///
/// @return flag of enum Qt__DropAction
int32_t q_treewidget_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
///
/// @return flag of enum Qt__DropAction
int32_t q_treewidget_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
///
/// @param self QTreeWidget*
/// @param event QDropEvent*
void q_treewidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QDropEvent* event)
void q_treewidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param event QDropEvent*
void q_treewidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_treewidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_treewidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_edit_item2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_open_persistent_editor2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
void q_treewidget_close_persistent_editor2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
bool q_treewidget_is_persistent_editor_open2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
///
/// @param self QTreeWidget*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
/// @param column int
libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items3(void* self, const char* text, int32_t flags, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param column int
QModelIndex* q_treewidget_index_from_item2(void* self, void* item, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
///
/// @param self QTreeWidget*
/// @param item QTreeWidgetItem*
/// @param hint enum QAbstractItemView__ScrollHint
void q_treewidget_scroll_to_item2(void* self, void* item, int32_t hint);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// @param self QTreeWidget*
/// @param model QAbstractItemModel*
void q_treewidget_set_model(void* self, void* model);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QAbstractItemModel* model)
void q_treewidget_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Base class method implementation
///
/// @param self QTreeWidget*
/// @param model QAbstractItemModel*
void q_treewidget_qbase_set_model(void* self, void* model);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#header)
///
/// @param self QTreeWidget*
QHeaderView* q_treewidget_header(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
///
/// @param self QTreeWidget*
/// @param header QHeaderView*
void q_treewidget_set_header(void* self, void* header);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
///
/// @param self QTreeWidget*
int32_t q_treewidget_auto_expand_delay(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
///
/// @param self QTreeWidget*
/// @param delay int
void q_treewidget_set_auto_expand_delay(void* self, int delay);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indentation)
///
/// @param self QTreeWidget*
int32_t q_treewidget_indentation(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
///
/// @param self QTreeWidget*
/// @param i int
void q_treewidget_set_indentation(void* self, int i);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
///
/// @param self QTreeWidget*
void q_treewidget_reset_indentation(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
///
/// @param self QTreeWidget*
bool q_treewidget_root_is_decorated(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
///
/// @param self QTreeWidget*
/// @param show bool
void q_treewidget_set_root_is_decorated(void* self, bool show);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
///
/// @param self QTreeWidget*
bool q_treewidget_uniform_row_heights(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
///
/// @param self QTreeWidget*
/// @param uniform bool
void q_treewidget_set_uniform_row_heights(void* self, bool uniform);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
///
/// @param self QTreeWidget*
bool q_treewidget_items_expandable(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_items_expandable(void* self, bool enable);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
///
/// @param self QTreeWidget*
bool q_treewidget_expands_on_double_click(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_expands_on_double_click(void* self, bool enable);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
///
/// @param self QTreeWidget*
/// @param column int
int32_t q_treewidget_column_viewport_position(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
///
/// @param self QTreeWidget*
/// @param column int
int32_t q_treewidget_column_width(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
///
/// @param self QTreeWidget*
/// @param column int
/// @param width int
void q_treewidget_set_column_width(void* self, int column, int width);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
///
/// @param self QTreeWidget*
/// @param x int
int32_t q_treewidget_column_at(void* self, int x);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
///
/// @param self QTreeWidget*
/// @param column int
bool q_treewidget_is_column_hidden(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
///
/// @param self QTreeWidget*
/// @param column int
/// @param hide bool
void q_treewidget_set_column_hidden(void* self, int column, bool hide);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
///
/// @param self QTreeWidget*
bool q_treewidget_is_header_hidden(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
///
/// @param self QTreeWidget*
/// @param hide bool
void q_treewidget_set_header_hidden(void* self, bool hide);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
///
/// @param self QTreeWidget*
/// @param row int
/// @param parent QModelIndex*
bool q_treewidget_is_row_hidden(void* self, int row, void* parent);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
///
/// @param self QTreeWidget*
/// @param row int
/// @param parent QModelIndex*
/// @param hide bool
void q_treewidget_set_row_hidden(void* self, int row, void* parent, bool hide);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
///
/// @param self QTreeWidget*
/// @param row int
/// @param parent QModelIndex*
bool q_treewidget_is_first_column_spanned(void* self, int row, void* parent);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
///
/// @param self QTreeWidget*
/// @param row int
/// @param parent QModelIndex*
/// @param span bool
void q_treewidget_set_first_column_spanned(void* self, int row, void* parent, bool span);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
bool q_treewidget_is_expanded(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param expand bool
void q_treewidget_set_expanded(void* self, void* index, bool expand);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_sorting_enabled(void* self, bool enable);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
///
/// @param self QTreeWidget*
bool q_treewidget_is_sorting_enabled(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_animated(void* self, bool enable);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
///
/// @param self QTreeWidget*
bool q_treewidget_is_animated(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_all_columns_show_focus(void* self, bool enable);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
///
/// @param self QTreeWidget*
bool q_treewidget_all_columns_show_focus(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
///
/// @param self QTreeWidget*
/// @param on bool
void q_treewidget_set_word_wrap(void* self, bool on);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
///
/// @param self QTreeWidget*
bool q_treewidget_word_wrap(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
///
/// @param self QTreeWidget*
/// @param logicalIndex int
void q_treewidget_set_tree_position(void* self, int logicalIndex);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
///
/// @param self QTreeWidget*
int32_t q_treewidget_tree_position(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QModelIndex* q_treewidget_index_above(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QModelIndex* q_treewidget_index_below(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_expanded(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_expanded(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_collapsed(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_collapsed(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
///
/// @param self QTreeWidget*
/// @param column int
void q_treewidget_hide_column(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
///
/// @param self QTreeWidget*
/// @param column int
void q_treewidget_show_column(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expand)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_expand(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapse)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_collapse(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
///
/// @param self QTreeWidget*
/// @param column int
void q_treewidget_resize_column_to_contents(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
///
/// @param self QTreeWidget*
/// @param column int
/// @param order enum Qt__SortOrder
void q_treewidget_sort_by_column(void* self, int column, int32_t order);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
///
/// @param self QTreeWidget*
void q_treewidget_expand_all(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_expand_recursively(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
///
/// @param self QTreeWidget*
void q_treewidget_collapse_all(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
///
/// @param self QTreeWidget*
/// @param depth int
void q_treewidget_expand_to_depth(void* self, int depth);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param depth int
void q_treewidget_expand_recursively2(void* self, void* index, int depth);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QTreeWidget*
QAbstractItemModel* q_treewidget_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QTreeWidget*
QItemSelectionModel* q_treewidget_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QTreeWidget*
/// @param delegate QAbstractItemDelegate*
void q_treewidget_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTreeWidget*
QAbstractItemDelegate* q_treewidget_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QTreeWidget*
/// @param mode enum QAbstractItemView__SelectionMode
void q_treewidget_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__SelectionMode
int32_t q_treewidget_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QTreeWidget*
/// @param behavior enum QAbstractItemView__SelectionBehavior
void q_treewidget_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__SelectionBehavior
int32_t q_treewidget_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QTreeWidget*
QModelIndex* q_treewidget_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QTreeWidget*
QModelIndex* q_treewidget_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QTreeWidget*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
void q_treewidget_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QTreeWidget*
///
/// @return flag of enum QAbstractItemView__EditTrigger
int32_t q_treewidget_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QTreeWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_treewidget_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_treewidget_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QTreeWidget*
void q_treewidget_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QTreeWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_treewidget_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_treewidget_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QTreeWidget*
void q_treewidget_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QTreeWidget*
bool q_treewidget_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QTreeWidget*
/// @param margin int
void q_treewidget_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QTreeWidget*
int32_t q_treewidget_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QTreeWidget*
bool q_treewidget_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QTreeWidget*
bool q_treewidget_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QTreeWidget*
bool q_treewidget_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QTreeWidget*
/// @param overwrite bool
void q_treewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QTreeWidget*
bool q_treewidget_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QTreeWidget*
/// @param behavior enum QAbstractItemView__DragDropMode
void q_treewidget_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__DragDropMode
int32_t q_treewidget_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QTreeWidget*
/// @param dropAction enum Qt__DropAction
void q_treewidget_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__DropAction
int32_t q_treewidget_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QTreeWidget*
bool q_treewidget_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QTreeWidget*
/// @param size QSize*
void q_treewidget_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QTreeWidget*
/// @param mode enum Qt__TextElideMode
void q_treewidget_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__TextElideMode
int32_t q_treewidget_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QSize* q_treewidget_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param widget QWidget*
void q_treewidget_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QWidget* q_treewidget_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QTreeWidget*
/// @param row int
/// @param delegate QAbstractItemDelegate*
void q_treewidget_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QTreeWidget*
/// @param row int
QAbstractItemDelegate* q_treewidget_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QTreeWidget*
/// @param column int
/// @param delegate QAbstractItemDelegate*
void q_treewidget_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QTreeWidget*
/// @param column int
QAbstractItemDelegate* q_treewidget_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_treewidget_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QTreeWidget*
void q_treewidget_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QTreeWidget*
void q_treewidget_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QTreeWidget*
void q_treewidget_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTreeWidget*
void q_treewidget_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self)
void q_treewidget_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTreeWidget*
/// @param size QSize*
void q_treewidget_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QSize* size)
void q_treewidget_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_treewidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTreeWidget*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_treewidget_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTreeWidget*
QScrollBar* q_treewidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTreeWidget*
/// @param scrollbar QScrollBar*
void q_treewidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_treewidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTreeWidget*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_treewidget_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTreeWidget*
QScrollBar* q_treewidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTreeWidget*
/// @param scrollbar QScrollBar*
void q_treewidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTreeWidget*
/// @param widget QWidget*
void q_treewidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTreeWidget*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_treewidget_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTreeWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_treewidget_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTreeWidget*
/// @param widget QWidget*
void q_treewidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t q_treewidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTreeWidget*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_treewidget_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTreeWidget*
int32_t q_treewidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTreeWidget*
/// @param frameStyle int
void q_treewidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTreeWidget*
///
/// @return enum QFrame__Shape
int32_t q_treewidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTreeWidget*
/// @param frameShape enum QFrame__Shape
void q_treewidget_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTreeWidget*
///
/// @return enum QFrame__Shadow
int32_t q_treewidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTreeWidget*
/// @param frameShadow enum QFrame__Shadow
void q_treewidget_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTreeWidget*
/// @param lineWidth int
void q_treewidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTreeWidget*
/// @param midLineWidth int
void q_treewidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTreeWidget*
QRect* q_treewidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTreeWidget*
/// @param frameRect QRect*
void q_treewidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTreeWidget*
uintptr_t q_treewidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTreeWidget*
void q_treewidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTreeWidget*
uintptr_t q_treewidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTreeWidget*
uintptr_t q_treewidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTreeWidget*
QStyle* q_treewidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTreeWidget*
/// @param style QStyle*
void q_treewidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTreeWidget*
bool q_treewidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTreeWidget*
bool q_treewidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTreeWidget*
bool q_treewidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__WindowModality
int32_t q_treewidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTreeWidget*
/// @param windowModality enum Qt__WindowModality
void q_treewidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTreeWidget*
bool q_treewidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
bool q_treewidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTreeWidget*
/// @param enabled bool
void q_treewidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTreeWidget*
/// @param disabled bool
void q_treewidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTreeWidget*
/// @param windowModified bool
void q_treewidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTreeWidget*
QRect* q_treewidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTreeWidget*
const QRect* q_treewidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTreeWidget*
QRect* q_treewidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTreeWidget*
int32_t q_treewidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTreeWidget*
int32_t q_treewidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTreeWidget*
QPoint* q_treewidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTreeWidget*
QSize* q_treewidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTreeWidget*
int32_t q_treewidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTreeWidget*
int32_t q_treewidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTreeWidget*
QRect* q_treewidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTreeWidget*
QRect* q_treewidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTreeWidget*
QRegion* q_treewidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTreeWidget*
int32_t q_treewidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTreeWidget*
int32_t q_treewidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTreeWidget*
/// @param minimumSize QSize*
void q_treewidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTreeWidget*
/// @param minw int
/// @param minh int
void q_treewidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTreeWidget*
/// @param maximumSize QSize*
void q_treewidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTreeWidget*
/// @param maxw int
/// @param maxh int
void q_treewidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTreeWidget*
/// @param minw int
void q_treewidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTreeWidget*
/// @param minh int
void q_treewidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTreeWidget*
/// @param maxw int
void q_treewidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTreeWidget*
/// @param maxh int
void q_treewidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTreeWidget*
QSize* q_treewidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTreeWidget*
/// @param sizeIncrement QSize*
void q_treewidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTreeWidget*
/// @param w int
/// @param h int
void q_treewidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTreeWidget*
QSize* q_treewidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTreeWidget*
/// @param baseSize QSize*
void q_treewidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTreeWidget*
/// @param basew int
/// @param baseh int
void q_treewidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTreeWidget*
/// @param fixedSize QSize*
void q_treewidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTreeWidget*
/// @param w int
/// @param h int
void q_treewidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTreeWidget*
/// @param w int
void q_treewidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTreeWidget*
/// @param h int
void q_treewidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTreeWidget*
/// @param param1 QPointF*
QPointF* q_treewidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTreeWidget*
/// @param param1 QPoint*
QPoint* q_treewidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTreeWidget*
/// @param param1 QPointF*
QPointF* q_treewidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTreeWidget*
/// @param param1 QPoint*
QPoint* q_treewidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTreeWidget*
/// @param param1 QPointF*
QPointF* q_treewidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTreeWidget*
/// @param param1 QPoint*
QPoint* q_treewidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTreeWidget*
/// @param param1 QPointF*
QPointF* q_treewidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTreeWidget*
/// @param param1 QPoint*
QPoint* q_treewidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_treewidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_treewidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_treewidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_treewidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTreeWidget*
const QPalette* q_treewidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTreeWidget*
/// @param palette QPalette*
void q_treewidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTreeWidget*
/// @param backgroundRole enum QPalette__ColorRole
void q_treewidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTreeWidget*
///
/// @return enum QPalette__ColorRole
int32_t q_treewidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTreeWidget*
/// @param foregroundRole enum QPalette__ColorRole
void q_treewidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTreeWidget*
///
/// @return enum QPalette__ColorRole
int32_t q_treewidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTreeWidget*
const QFont* q_treewidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTreeWidget*
/// @param font QFont*
void q_treewidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTreeWidget*
QFontMetrics* q_treewidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTreeWidget*
QFontInfo* q_treewidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTreeWidget*
QCursor* q_treewidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTreeWidget*
/// @param cursor QCursor*
void q_treewidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTreeWidget*
void q_treewidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTreeWidget*
bool q_treewidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTreeWidget*
bool q_treewidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTreeWidget*
bool q_treewidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTreeWidget*
/// @param mask QBitmap*
void q_treewidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTreeWidget*
/// @param mask QRegion*
void q_treewidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTreeWidget*
QRegion* q_treewidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTreeWidget*
void q_treewidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param target QPaintDevice*
void q_treewidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param painter QPainter*
void q_treewidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTreeWidget*
QPixmap* q_treewidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTreeWidget*
QGraphicsEffect* q_treewidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTreeWidget*
/// @param effect QGraphicsEffect*
void q_treewidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTreeWidget*
/// @param type enum Qt__GestureType
void q_treewidget_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTreeWidget*
/// @param type enum Qt__GestureType
void q_treewidget_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTreeWidget*
/// @param windowTitle const char*
void q_treewidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTreeWidget*
/// @param styleSheet const char*
void q_treewidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTreeWidget*
/// @param icon QIcon*
void q_treewidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTreeWidget*
QIcon* q_treewidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTreeWidget*
/// @param windowIconText const char*
void q_treewidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTreeWidget*
/// @param windowRole const char*
void q_treewidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTreeWidget*
/// @param filePath const char*
void q_treewidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTreeWidget*
/// @param level double
void q_treewidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTreeWidget*
double q_treewidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTreeWidget*
bool q_treewidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTreeWidget*
/// @param toolTip const char*
void q_treewidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTreeWidget*
/// @param msec int
void q_treewidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTreeWidget*
int32_t q_treewidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTreeWidget*
/// @param statusTip const char*
void q_treewidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTreeWidget*
/// @param whatsThis const char*
void q_treewidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTreeWidget*
/// @param name const char*
void q_treewidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTreeWidget*
/// @param description const char*
void q_treewidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTreeWidget*
/// @param direction enum Qt__LayoutDirection
void q_treewidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__LayoutDirection
int32_t q_treewidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTreeWidget*
void q_treewidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTreeWidget*
/// @param locale QLocale*
void q_treewidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTreeWidget*
QLocale* q_treewidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTreeWidget*
void q_treewidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTreeWidget*
bool q_treewidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTreeWidget*
bool q_treewidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTreeWidget*
void q_treewidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTreeWidget*
bool q_treewidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTreeWidget*
void q_treewidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTreeWidget*
void q_treewidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTreeWidget*
/// @param reason enum Qt__FocusReason
void q_treewidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__FocusPolicy
int32_t q_treewidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTreeWidget*
/// @param policy enum Qt__FocusPolicy
void q_treewidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTreeWidget*
bool q_treewidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_treewidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTreeWidget*
/// @param focusProxy QWidget*
void q_treewidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_treewidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTreeWidget*
/// @param policy enum Qt__ContextMenuPolicy
void q_treewidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTreeWidget*
void q_treewidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTreeWidget*
/// @param param1 QCursor*
void q_treewidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTreeWidget*
void q_treewidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTreeWidget*
void q_treewidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTreeWidget*
void q_treewidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTreeWidget*
/// @param key QKeySequence*
int32_t q_treewidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTreeWidget*
/// @param id int
void q_treewidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTreeWidget*
/// @param id int
void q_treewidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTreeWidget*
/// @param id int
void q_treewidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_treewidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_treewidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTreeWidget*
bool q_treewidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTreeWidget*
/// @param enable bool
void q_treewidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTreeWidget*
QGraphicsProxyWidget* q_treewidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeWidget*
void q_treewidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_treewidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeWidget*
/// @param param1 QRect*
void q_treewidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeWidget*
/// @param param1 QRegion*
void q_treewidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_treewidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeWidget*
/// @param param1 QRect*
void q_treewidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeWidget*
/// @param param1 QRegion*
void q_treewidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTreeWidget*
/// @param hidden bool
void q_treewidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTreeWidget*
void q_treewidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTreeWidget*
void q_treewidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTreeWidget*
void q_treewidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTreeWidget*
void q_treewidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTreeWidget*
void q_treewidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTreeWidget*
void q_treewidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTreeWidget*
bool q_treewidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTreeWidget*
void q_treewidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTreeWidget*
void q_treewidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
void q_treewidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
void q_treewidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTreeWidget*
/// @param param1 QPoint*
void q_treewidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTreeWidget*
/// @param w int
/// @param h int
void q_treewidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTreeWidget*
/// @param param1 QSize*
void q_treewidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_treewidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTreeWidget*
/// @param geometry QRect*
void q_treewidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
char* q_treewidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTreeWidget*
/// @param geometry const char*
bool q_treewidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTreeWidget*
void q_treewidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTreeWidget*
bool q_treewidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTreeWidget*
/// @param param1 QWidget*
bool q_treewidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTreeWidget*
bool q_treewidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTreeWidget*
bool q_treewidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTreeWidget*
bool q_treewidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTreeWidget*
bool q_treewidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTreeWidget*
///
/// @return flag of enum Qt__WindowState
int32_t q_treewidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTreeWidget*
/// @param state flag of enum Qt__WindowState
void q_treewidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTreeWidget*
/// @param state flag of enum Qt__WindowState
void q_treewidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTreeWidget*
QSizePolicy* q_treewidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTreeWidget*
/// @param sizePolicy QSizePolicy*
void q_treewidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTreeWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_treewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTreeWidget*
QRegion* q_treewidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTreeWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_treewidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTreeWidget*
/// @param margins QMargins*
void q_treewidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTreeWidget*
QMargins* q_treewidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTreeWidget*
QRect* q_treewidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTreeWidget*
QLayout* q_treewidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTreeWidget*
/// @param layout QLayout*
void q_treewidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTreeWidget*
void q_treewidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTreeWidget*
/// @param parent QWidget*
void q_treewidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTreeWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_treewidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
void q_treewidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_treewidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTreeWidget*
bool q_treewidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTreeWidget*
/// @param on bool
void q_treewidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeWidget*
/// @param action QAction*
void q_treewidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTreeWidget*
/// @param actions libqt_list /* of QAction* */
void q_treewidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTreeWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_treewidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTreeWidget*
/// @param before QAction*
/// @param action QAction*
void q_treewidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTreeWidget*
/// @param action QAction*
void q_treewidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTreeWidget*
libqt_list /* of QAction* */ q_treewidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeWidget*
/// @param text const char*
QAction* q_treewidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* q_treewidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_treewidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_treewidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTreeWidget*
QWidget* q_treewidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTreeWidget*
/// @param type flag of enum Qt__WindowType
void q_treewidget_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTreeWidget*
///
/// @return flag of enum Qt__WindowType
int64_t q_treewidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTreeWidget*
/// @param param1 enum Qt__WindowType
void q_treewidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTreeWidget*
/// @param type flag of enum Qt__WindowType
void q_treewidget_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTreeWidget*
///
/// @return enum Qt__WindowType
int64_t q_treewidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_treewidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeWidget*
/// @param x int
/// @param y int
QWidget* q_treewidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeWidget*
/// @param p QPoint*
QWidget* q_treewidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeWidget*
/// @param p QPointF*
QWidget* q_treewidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTreeWidget*
/// @param param1 enum Qt__WidgetAttribute
void q_treewidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTreeWidget*
/// @param param1 enum Qt__WidgetAttribute
bool q_treewidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTreeWidget*
void q_treewidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTreeWidget*
/// @param child QWidget*
bool q_treewidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTreeWidget*
bool q_treewidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTreeWidget*
/// @param enabled bool
void q_treewidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTreeWidget*
QBackingStore* q_treewidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTreeWidget*
QWindow* q_treewidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTreeWidget*
QScreen* q_treewidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTreeWidget*
/// @param screen QScreen*
void q_treewidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_treewidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTreeWidget*
/// @param title const char*
void q_treewidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, const char* title)
void q_treewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTreeWidget*
/// @param icon QIcon*
void q_treewidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QIcon* icon)
void q_treewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTreeWidget*
/// @param iconText const char*
void q_treewidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, const char* iconText)
void q_treewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTreeWidget*
/// @param pos QPoint*
void q_treewidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPoint* pos)
void q_treewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTreeWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_treewidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTreeWidget*
/// @param hints flag of enum Qt__InputMethodHint
void q_treewidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_treewidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_treewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_treewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_treewidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_treewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_treewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTreeWidget*
/// @param rectangle QRect*
QPixmap* q_treewidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTreeWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_treewidget_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTreeWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_treewidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTreeWidget*
/// @param id int
/// @param enable bool
void q_treewidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTreeWidget*
/// @param id int
/// @param enable bool
void q_treewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTreeWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_treewidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTreeWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_treewidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_treewidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_treewidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char* q_treewidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTreeWidget*
/// @param name char*
void q_treewidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTreeWidget*
bool q_treewidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTreeWidget*
bool q_treewidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTreeWidget*
bool q_treewidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTreeWidget*
bool q_treewidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTreeWidget*
/// @param b bool
bool q_treewidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTreeWidget*
QThread* q_treewidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTreeWidget*
/// @param thread QThread*
bool q_treewidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTreeWidget*
/// @param interval int
int32_t q_treewidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTreeWidget*
/// @param id int
void q_treewidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTreeWidget*
/// @param id enum Qt__TimerId
void q_treewidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTreeWidget*
libqt_list /* of QObject* */ q_treewidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTreeWidget*
/// @param filterObj QObject*
void q_treewidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTreeWidget*
/// @param obj QObject*
void q_treewidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_treewidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTreeWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_treewidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_treewidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_treewidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTreeWidget*
void q_treewidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTreeWidget*
void q_treewidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTreeWidget*
/// @param name const char*
/// @param value QVariant*
bool q_treewidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTreeWidget*
/// @param name const char*
QVariant* q_treewidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTreeWidget*
const char** q_treewidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTreeWidget*
QBindingStorage* q_treewidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTreeWidget*
const QBindingStorage* q_treewidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeWidget*
void q_treewidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self)
void q_treewidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTreeWidget*
QObject* q_treewidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTreeWidget*
/// @param classname const char*
bool q_treewidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTreeWidget*
void q_treewidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTreeWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_treewidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTreeWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_treewidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_treewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTreeWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_treewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeWidget*
/// @param param1 QObject*
void q_treewidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QObject* param1)
void q_treewidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTreeWidget*
bool q_treewidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTreeWidget*
int32_t q_treewidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTreeWidget*
int32_t q_treewidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTreeWidget*
int32_t q_treewidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTreeWidget*
int32_t q_treewidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTreeWidget*
int32_t q_treewidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTreeWidget*
int32_t q_treewidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTreeWidget*
double q_treewidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTreeWidget*
double q_treewidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTreeWidget*
int32_t q_treewidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTreeWidget*
int32_t q_treewidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_treewidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_treewidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_set_root_index(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
void q_treewidget_qbase_set_root_index(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param search const char*
void q_treewidget_keyboard_search(void* self, const char* search);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param search const char*
void q_treewidget_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, const char* search)
void q_treewidget_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QRect* q_treewidget_visual_rect(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QRect* q_treewidget_qbase_visual_rect(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QRect* func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_treewidget_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_treewidget_qbase_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
void q_treewidget_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param p QPoint*
QModelIndex* q_treewidget_index_at(void* self, void* p);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param p QPoint*
QModelIndex* q_treewidget_qbase_index_at(void* self, void* p);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QModelIndex* func(QTreeWidget* self, QPoint* p)
void q_treewidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_do_items_layout(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_do_items_layout(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_reset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_reset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_reset(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_treewidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_treewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_treewidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_select_all(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_select_all(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_select_all(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param value int
void q_treewidget_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param value int
void q_treewidget_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int value)
void q_treewidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
void q_treewidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
void q_treewidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int dx, int dy)
void q_treewidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_treewidget_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_treewidget_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* parent, int start, int end)
void q_treewidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_treewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_treewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* parent, int start, int end)
void q_treewidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_treewidget_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_treewidget_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QModelIndex* func(QTreeWidget* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
void q_treewidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_horizontal_offset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_qbase_horizontal_offset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_vertical_offset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_qbase_vertical_offset(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_treewidget_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_treewidget_qbase_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
void q_treewidget_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param selection QItemSelection*
QRegion* q_treewidget_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param selection QItemSelection*
QRegion* q_treewidget_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QRegion* func(QTreeWidget* self, QItemSelection* selection)
void q_treewidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
libqt_list /* of QModelIndex* */ q_treewidget_selected_indexes(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
libqt_list /* of QModelIndex* */ q_treewidget_qbase_selected_indexes(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QModelIndex** func()
void q_treewidget_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_change_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_qbase_change_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QEvent* event)
void q_treewidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QTimerEvent*
void q_treewidget_timer_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QTimerEvent*
void q_treewidget_qbase_timer_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTimerEvent* event)
void q_treewidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QPaintEvent*
void q_treewidget_paint_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QPaintEvent*
void q_treewidget_qbase_paint_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPaintEvent* event)
void q_treewidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param options QStyleOptionViewItem*
/// @param index QModelIndex*
void q_treewidget_draw_row(void* self, void* painter, void* options, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param options QStyleOptionViewItem*
/// @param index QModelIndex*
void q_treewidget_qbase_draw_row(void* self, void* painter, void* options, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index)
void q_treewidget_on_draw_row(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param rect QRect*
/// @param index QModelIndex*
void q_treewidget_draw_branches(void* self, void* painter, void* rect, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param rect QRect*
/// @param index QModelIndex*
void q_treewidget_qbase_draw_branches(void* self, void* painter, void* rect, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPainter* painter, QRect* rect, QModelIndex* index)
void q_treewidget_on_draw_branches(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_mouse_press_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMouseEvent* event)
void q_treewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_mouse_release_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMouseEvent* event)
void q_treewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMouseEvent* event)
void q_treewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_mouse_move_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMouseEvent*
void q_treewidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMouseEvent* event)
void q_treewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QKeyEvent*
void q_treewidget_key_press_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QKeyEvent*
void q_treewidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QKeyEvent* event)
void q_treewidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragMoveEvent*
void q_treewidget_drag_move_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragMoveEvent*
void q_treewidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QDragMoveEvent* event)
void q_treewidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
bool q_treewidget_viewport_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
bool q_treewidget_qbase_viewport_event(void* self, void* event);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QEvent* event)
void q_treewidget_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_update_geometries(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_update_geometries(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_update_geometries(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_viewport_size_hint(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_qbase_viewport_size_hint(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QSize* func()
void q_treewidget_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param column int
int32_t q_treewidget_size_hint_for_column(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param column int
int32_t q_treewidget_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, int column)
void q_treewidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param action int
void q_treewidget_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param action int
void q_treewidget_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int action)
void q_treewidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
bool q_treewidget_is_index_hidden(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
bool q_treewidget_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_treewidget_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_treewidget_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QItemSelection* selected, QItemSelection* deselected)
void q_treewidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_treewidget_current_changed(void* self, void* current, void* previous);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_treewidget_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* current, QModelIndex* previous)
void q_treewidget_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param row int
int32_t q_treewidget_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param row int
int32_t q_treewidget_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, int row)
void q_treewidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_treewidget_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_treewidget_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QAbstractItemDelegate* func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_treewidget_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_treewidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QVariant* func(QTreeWidget* self, enum Qt__InputMethodQuery query)
void q_treewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param action int
void q_treewidget_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param action int
void q_treewidget_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int action)
void q_treewidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param value int
void q_treewidget_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param value int
void q_treewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int value)
void q_treewidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_treewidget_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_treewidget_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
void q_treewidget_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QWidget*
void q_treewidget_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QWidget*
void q_treewidget_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QWidget* editor)
void q_treewidget_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QObject*
void q_treewidget_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param editor QObject*
void q_treewidget_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QObject* editor)
void q_treewidget_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_treewidget_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_treewidget_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
void q_treewidget_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_treewidget_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_treewidget_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, QModelIndex* index, QEvent* event)
void q_treewidget_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_treewidget_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_treewidget_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, flag of enum Qt__DropAction supportedActions)
void q_treewidget_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param option QStyleOptionViewItem*
void q_treewidget_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param option QStyleOptionViewItem*
void q_treewidget_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QStyleOptionViewItem* option)
void q_treewidget_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param next bool
bool q_treewidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param next bool
bool q_treewidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, bool next)
void q_treewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragEnterEvent*
void q_treewidget_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragEnterEvent*
void q_treewidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QDragEnterEvent* event)
void q_treewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragLeaveEvent*
void q_treewidget_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QDragLeaveEvent*
void q_treewidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QDragLeaveEvent* event)
void q_treewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QFocusEvent*
void q_treewidget_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QFocusEvent*
void q_treewidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QFocusEvent* event)
void q_treewidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QFocusEvent*
void q_treewidget_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QFocusEvent*
void q_treewidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QFocusEvent* event)
void q_treewidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QResizeEvent*
void q_treewidget_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QResizeEvent*
void q_treewidget_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QResizeEvent* event)
void q_treewidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QInputMethodEvent*
void q_treewidget_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QInputMethodEvent*
void q_treewidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QInputMethodEvent* event)
void q_treewidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_treewidget_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_treewidget_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QObject* object, QEvent* event)
void q_treewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QSize* func()
void q_treewidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QSize* q_treewidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QSize* func()
void q_treewidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param viewport QWidget*
void q_treewidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param viewport QWidget*
void q_treewidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QWidget* viewport)
void q_treewidget_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QWheelEvent*
void q_treewidget_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QWheelEvent*
void q_treewidget_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QWheelEvent* param1)
void q_treewidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QContextMenuEvent*
void q_treewidget_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QContextMenuEvent*
void q_treewidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QContextMenuEvent* param1)
void q_treewidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param option QStyleOptionFrame*
void q_treewidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param option QStyleOptionFrame*
void q_treewidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QStyleOptionFrame* option)
void q_treewidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param visible bool
void q_treewidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param visible bool
void q_treewidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, bool visible)
void q_treewidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 int
int32_t q_treewidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 int
int32_t q_treewidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, int param1)
void q_treewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func()
void q_treewidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QPaintEngine* q_treewidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QPaintEngine* q_treewidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QPaintEngine* func()
void q_treewidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QKeyEvent*
void q_treewidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QKeyEvent*
void q_treewidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QKeyEvent* event)
void q_treewidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEnterEvent*
void q_treewidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEnterEvent*
void q_treewidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QEnterEvent* event)
void q_treewidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QEvent* event)
void q_treewidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMoveEvent*
void q_treewidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QMoveEvent*
void q_treewidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMoveEvent* event)
void q_treewidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QCloseEvent*
void q_treewidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QCloseEvent*
void q_treewidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QCloseEvent* event)
void q_treewidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QTabletEvent*
void q_treewidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QTabletEvent*
void q_treewidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QTabletEvent* event)
void q_treewidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QActionEvent*
void q_treewidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QActionEvent*
void q_treewidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QActionEvent* event)
void q_treewidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QShowEvent*
void q_treewidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QShowEvent*
void q_treewidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QShowEvent* event)
void q_treewidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QHideEvent*
void q_treewidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QHideEvent*
void q_treewidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QHideEvent* event)
void q_treewidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_treewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_treewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, const char* eventType, void* message, intptr_t* result)
void q_treewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_treewidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_treewidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_treewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
void q_treewidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
void q_treewidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPainter* painter)
void q_treewidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param offset QPoint*
QPaintDevice* q_treewidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param offset QPoint*
QPaintDevice* q_treewidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QPaintDevice* func(QTreeWidget* self, QPoint* offset)
void q_treewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QPainter* q_treewidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QPainter* q_treewidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QPainter* func()
void q_treewidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QChildEvent*
void q_treewidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QChildEvent*
void q_treewidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QChildEvent* event)
void q_treewidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param event QEvent*
void q_treewidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QEvent* event)
void q_treewidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
void q_treewidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
void q_treewidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMetaMethod* signal)
void q_treewidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
void q_treewidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
void q_treewidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QMetaMethod* signal)
void q_treewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param column int
/// @param oldSize int
/// @param newSize int
void q_treewidget_column_resized(void* self, int column, int oldSize, int newSize);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param column int
/// @param oldSize int
/// @param newSize int
void q_treewidget_qbase_column_resized(void* self, int column, int oldSize, int newSize);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int column, int oldSize, int newSize)
void q_treewidget_on_column_resized(void* self, void (*callback)(void*, int, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param oldCount int
/// @param newCount int
void q_treewidget_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param oldCount int
/// @param newCount int
void q_treewidget_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int oldCount, int newCount)
void q_treewidget_on_column_count_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_column_moved(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_column_moved(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_column_moved(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_reexpand(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_reexpand(void* self);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_reexpand(void* self, void (*callback)());

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_treewidget_rows_removed(void* self, void* parent, int first, int last);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_treewidget_qbase_rows_removed(void* self, void* parent, int first, int last);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QModelIndex* parent, int first, int last)
void q_treewidget_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param region QRegion*
void q_treewidget_draw_tree(void* self, void* painter, void* region);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param painter QPainter*
/// @param region QRegion*
void q_treewidget_qbase_draw_tree(void* self, void* painter, void* region);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPainter* painter, QRegion* region)
void q_treewidget_on_draw_tree(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
int32_t q_treewidget_index_row_size_hint(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
int32_t q_treewidget_qbase_index_row_size_hint(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_index_row_size_hint(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
int32_t q_treewidget_row_height(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param index QModelIndex*
int32_t q_treewidget_qbase_row_height(void* self, void* index);

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, QModelIndex* index)
void q_treewidget_on_row_height(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__State
int32_t q_treewidget_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__State
int32_t q_treewidget_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param state enum QAbstractItemView__State
void q_treewidget_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param state enum QAbstractItemView__State
void q_treewidget_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, enum QAbstractItemView__State state)
void q_treewidget_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param region QRegion*
void q_treewidget_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param region QRegion*
void q_treewidget_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QRegion* region)
void q_treewidget_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
void q_treewidget_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param dx int
/// @param dy int
void q_treewidget_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int dx, int dy)
void q_treewidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QPoint* q_treewidget_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QPoint* q_treewidget_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QPoint* func()
void q_treewidget_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_treewidget_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_treewidget_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_treewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_treewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, int left, int top, int right, int bottom)
void q_treewidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QMargins* q_treewidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QMargins* q_treewidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QMargins* func()
void q_treewidget_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QPainter*
void q_treewidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param param1 QPainter*
void q_treewidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, QPainter* param1)
void q_treewidget_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
void q_treewidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback void func()
void q_treewidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func()
void q_treewidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
bool q_treewidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func()
void q_treewidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
QObject* q_treewidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
QObject* q_treewidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback QObject* func()
void q_treewidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
int32_t q_treewidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func()
void q_treewidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal const char*
int32_t q_treewidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal const char*
int32_t q_treewidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback int32_t func(QTreeWidget* self, const char* signal)
void q_treewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
bool q_treewidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param signal QMetaMethod*
bool q_treewidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback bool func(QTreeWidget* self, QMetaMethod* signal)
void q_treewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_treewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_treewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeWidget*
/// @param callback double func(QTreeWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_treewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTreeWidget*
/// @param callback void func(QTreeWidget* self, const char* objectName)
void q_treewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dtor.QTreeWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QTreeWidget*
void q_treewidget_delete(void* self);

/// https://doc.qt.io/qt-6/qtreewidget.html#types

typedef enum {
    QTREEWIDGETITEM_ITEMTYPE_TYPE = 0,
    QTREEWIDGETITEM_ITEMTYPE_USERTYPE = 1000
} QTreeWidgetItem__ItemType;

typedef enum {
    QTREEWIDGETITEM_CHILDINDICATORPOLICY_SHOWINDICATOR = 0,
    QTREEWIDGETITEM_CHILDINDICATORPOLICY_DONTSHOWINDICATOR = 1,
    QTREEWIDGETITEM_CHILDINDICATORPOLICY_DONTSHOWINDICATORWHENCHILDLESS = 2
} QTreeWidgetItem__ChildIndicatorPolicy;

#endif
