#pragma once
#ifndef SRC_QT6C_LIBQITEMDELEGATE_H
#define SRC_QT6C_LIBQITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html)

/// q_itemdelegate_new constructs a new QItemDelegate object.
///
QItemDelegate* q_itemdelegate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html)

/// q_itemdelegate_new2 constructs a new QItemDelegate object.
///
/// @param parent QObject*
///
QItemDelegate* q_itemdelegate_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QItemDelegate*
///
const QMetaObject* q_itemdelegate_meta_object(void* self);

/// @param self QItemDelegate*
/// @param param1 const char*
///
void* q_itemdelegate_metacast(void* self, const char* param1);

/// @param self QItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback int32_t func(QItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_itemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_itemdelegate_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
///
/// @param self QItemDelegate*
///
bool q_itemdelegate_has_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
///
/// @param self QItemDelegate*
/// @param clip bool
///
void q_itemdelegate_set_clipping(void* self, bool clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* q_itemdelegate_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QSize* func(QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* q_itemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// @param self QItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_itemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QWidget* func(QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_itemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_itemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_itemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void q_itemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
///
/// @param self QItemDelegate*
///
QItemEditorFactory* q_itemdelegate_item_editor_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
///
/// @param self QItemDelegate*
/// @param factory QItemEditorFactory*
///
void q_itemdelegate_set_item_editor_factory(void* self, void* factory);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param text const char*
///
void q_itemdelegate_draw_display(void* self, void* painter, void* option, void* rect, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text)
///
void q_itemdelegate_on_draw_display(void* self, void (*callback)(void*, void*, void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param text const char*
///
void q_itemdelegate_qbase_draw_display(void* self, void* painter, void* option, void* rect, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param pixmap QPixmap*
///
void q_itemdelegate_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap)
///
void q_itemdelegate_on_draw_decoration(void* self, void (*callback)(void*, void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param pixmap QPixmap*
///
void q_itemdelegate_qbase_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
///
void q_itemdelegate_draw_focus(void* self, void* painter, void* option, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect)
///
void q_itemdelegate_on_draw_focus(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
///
void q_itemdelegate_qbase_draw_focus(void* self, void* painter, void* option, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param state enum Qt__CheckState
///
void q_itemdelegate_draw_check(void* self, void* painter, void* option, void* rect, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state)
///
void q_itemdelegate_on_draw_check(void* self, void (*callback)(void*, void*, void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param state enum Qt__CheckState
///
void q_itemdelegate_qbase_draw_check(void* self, void* painter, void* option, void* rect, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_draw_background(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_draw_background(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_draw_background(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param checkRect QRect*
/// @param iconRect QRect*
/// @param textRect QRect*
/// @param hint bool
///
void q_itemdelegate_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint)
///
void q_itemdelegate_on_do_layout(void* self, void (*callback)(void*, void*, void*, void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param checkRect QRect*
/// @param iconRect QRect*
/// @param textRect QRect*
/// @param hint bool
///
void q_itemdelegate_qbase_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
/// @param role int
///
QRect* q_itemdelegate_rect(void* self, void* option, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QRect* func(QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role)
///
void q_itemdelegate_on_rect(void* self, QRect* (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
/// @param role int
///
QRect* q_itemdelegate_qbase_rect(void* self, void* option, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// @param self QItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool q_itemdelegate_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QObject* object, QEvent* event)
///
void q_itemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool q_itemdelegate_qbase_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// @param self QItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_itemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_itemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// @param self QItemDelegate*
/// @param index QModelIndex*
/// @param option QStyleOptionViewItem*
///
QStyleOptionViewItem* q_itemdelegate_set_options(void* self, void* index, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QStyleOptionViewItem* func(QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option)
///
void q_itemdelegate_on_set_options(void* self, QStyleOptionViewItem* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param index QModelIndex*
/// @param option QStyleOptionViewItem*
///
QStyleOptionViewItem* q_itemdelegate_qbase_set_options(void* self, void* index, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param variant QVariant*
///
QPixmap* q_itemdelegate_decoration(void* self, void* option, void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QPixmap* func(QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant)
///
void q_itemdelegate_on_decoration(void* self, QPixmap* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param variant QVariant*
///
QPixmap* q_itemdelegate_qbase_decoration(void* self, void* option, void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param bounding QRect*
/// @param variant QVariant*
///
QRect* q_itemdelegate_do_check(void* self, void* option, void* bounding, void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QRect* func(QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant)
///
void q_itemdelegate_on_do_check(void* self, QRect* (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param bounding QRect*
/// @param variant QVariant*
///
QRect* q_itemdelegate_qbase_do_check(void* self, void* option, void* bounding, void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param rect QRect*
/// @param font QFont*
/// @param text const char*
///
QRect* q_itemdelegate_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback QRect* func(QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, const char* text)
///
void q_itemdelegate_on_text_rectangle(void* self, QRect* (*callback)(void*, void*, void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param painter QPainter*
/// @param rect QRect*
/// @param font QFont*
/// @param text const char*
///
QRect* q_itemdelegate_qbase_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_itemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
///
void q_itemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor)
///
void q_itemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
///
void q_itemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor)
///
void q_itemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QItemDelegate*
/// @param param1 QModelIndex*
///
void q_itemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QModelIndex* param1)
///
void q_itemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_itemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_itemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QItemDelegate*
///
const char* q_itemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemDelegate*
/// @param name char*
///
void q_itemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QItemDelegate*
///
bool q_itemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QItemDelegate*
///
bool q_itemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QItemDelegate*
///
bool q_itemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QItemDelegate*
///
bool q_itemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QItemDelegate*
/// @param b bool
///
bool q_itemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QItemDelegate*
///
QThread* q_itemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemDelegate*
/// @param thread QThread*
///
bool q_itemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemDelegate*
/// @param interval int
///
int32_t q_itemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemDelegate*
/// @param id int
///
void q_itemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemDelegate*
/// @param id enum Qt__TimerId
///
void q_itemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QItemDelegate*
///
libqt_list /* of QObject* */ q_itemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QItemDelegate*
/// @param parent QObject*
///
void q_itemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QItemDelegate*
/// @param filterObj QObject*
///
void q_itemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QItemDelegate*
/// @param obj QObject*
///
void q_itemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemdelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QItemDelegate*
///
void q_itemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QItemDelegate*
///
void q_itemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QItemDelegate*
/// @param name const char*
///
QVariant* q_itemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QItemDelegate*
///
const char** q_itemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemDelegate*
///
QBindingStorage* q_itemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemDelegate*
///
const QBindingStorage* q_itemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemDelegate*
///
void q_itemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self)
///
void q_itemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QItemDelegate*
///
QObject* q_itemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QItemDelegate*
/// @param classname const char*
///
bool q_itemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemDelegate*
///
void q_itemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_itemdelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_itemdelegate_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_itemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemDelegate*
/// @param param1 QObject*
///
void q_itemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QObject* param1)
///
void q_itemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_itemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_itemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_itemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
///
libqt_list /* of int */ q_itemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
///
libqt_list /* of int */ q_itemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback int* func()
///
void q_itemdelegate_on_painting_roles(void* self, int* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QEvent*
///
bool q_itemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QEvent*
///
bool q_itemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QEvent* event)
///
void q_itemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QTimerEvent*
///
void q_itemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QTimerEvent*
///
void q_itemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QTimerEvent* event)
///
void q_itemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QChildEvent*
///
void q_itemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QChildEvent*
///
void q_itemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QChildEvent* event)
///
void q_itemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QEvent*
///
void q_itemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param event QEvent*
///
void q_itemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QEvent* event)
///
void q_itemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
///
QObject* q_itemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
///
QObject* q_itemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback QObject* func()
///
void q_itemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
///
int32_t q_itemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
///
int32_t q_itemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback int32_t func()
///
void q_itemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal const char*
///
int32_t q_itemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal const char*
///
int32_t q_itemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback int32_t func(QItemDelegate* self, const char* signal)
///
void q_itemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
bool q_itemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
bool q_itemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, const char* objectName)
///
void q_itemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#dtor.QItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self QItemDelegate*
///
void q_itemdelegate_delete(void* self);

#endif
