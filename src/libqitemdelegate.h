#pragma once
#ifndef LIBQITEMDELEGATE_H
#define LIBQITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
/// @param self const QItemDelegate*
///
const QMetaObject* q_itemdelegate_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback const QMetaObject* func(const QItemDelegate* self)
///
void q_itemdelegate_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
///
const QMetaObject* q_itemdelegate_super_meta_object(const void* self);

/// @param self QItemDelegate*
/// @param param1 const char*
///
void* q_itemdelegate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback void* func(QItemDelegate* self, const char* param1)
///
void q_itemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QItemDelegate*
/// @param param1 const char*
///
void* q_itemdelegate_super_metacast(void* self, const char* param1);

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
int32_t q_itemdelegate_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_itemdelegate_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_has_clipping(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
///
/// @param self QItemDelegate*
/// @param clip bool
///
void q_itemdelegate_set_clipping(void* self, bool clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_paint(const void* self, void* painter, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_paint(const void* self, void (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_super_paint(const void* self, void* painter, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* q_itemdelegate_size_hint(const void* self, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback QSize* func(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_itemdelegate_on_size_hint(const void* self, QSize* (*callback)(const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* q_itemdelegate_super_size_hint(const void* self, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// @param self const QItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_itemdelegate_create_editor(const void* self, void* parent, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback QWidget* func(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_create_editor(const void* self, QWidget* (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_itemdelegate_super_create_editor(const void* self, void* parent, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_set_editor_data(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_itemdelegate_on_set_editor_data(const void* self, void (*callback)(const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_super_set_editor_data(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_itemdelegate_set_model_data(const void* self, void* editor, void* model, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void q_itemdelegate_on_set_model_data(const void* self, void (*callback)(const void*, void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_itemdelegate_super_set_model_data(const void* self, void* editor, void* model, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_update_editor_geometry(const void* self, void (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_super_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
///
/// @param self const QItemDelegate*
///
QItemEditorFactory* q_itemdelegate_item_editor_factory(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
///
/// @param self QItemDelegate*
/// @param factory QItemEditorFactory*
///
void q_itemdelegate_set_item_editor_factory(void* self, void* factory);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param text const char*
///
void q_itemdelegate_draw_display(const void* self, void* painter, const void* option, const void* rect, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text)
///
void q_itemdelegate_on_draw_display(const void* self, void (*callback)(const void*, void*, const void*, const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param text const char*
///
void q_itemdelegate_super_draw_display(const void* self, void* painter, const void* option, const void* rect, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param pixmap QPixmap*
///
void q_itemdelegate_draw_decoration(const void* self, void* painter, const void* option, const void* rect, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap)
///
void q_itemdelegate_on_draw_decoration(const void* self, void (*callback)(const void*, void*, const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param pixmap QPixmap*
///
void q_itemdelegate_super_draw_decoration(const void* self, void* painter, const void* option, const void* rect, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
///
void q_itemdelegate_draw_focus(const void* self, void* painter, const void* option, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect)
///
void q_itemdelegate_on_draw_focus(const void* self, void (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
///
void q_itemdelegate_super_draw_focus(const void* self, void* painter, const void* option, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param state enum Qt__CheckState
///
void q_itemdelegate_draw_check(const void* self, void* painter, const void* option, const void* rect, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Allows for overriding the related default method
///
/// @param self const QItemDelegate*
/// @param callback void func(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state)
///
void q_itemdelegate_on_draw_check(const void* self, void (*callback)(const void*, void*, const void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Base class method implementation
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param rect QRect*
/// @param state enum Qt__CheckState
///
void q_itemdelegate_super_draw_check(const void* self, void* painter, const void* option, const void* rect, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_itemdelegate_draw_background(const void* self, void* painter, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param checkRect QRect*
/// @param iconRect QRect*
/// @param textRect QRect*
/// @param hint bool
///
void q_itemdelegate_do_layout(const void* self, const void* option, void* checkRect, void* iconRect, void* textRect, bool hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
/// @param role int
///
QRect* q_itemdelegate_rect(const void* self, const void* option, const void* index, int role);

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
bool q_itemdelegate_super_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// @param self QItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_itemdelegate_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

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
bool q_itemdelegate_super_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// @param self const QItemDelegate*
/// @param index QModelIndex*
/// @param option QStyleOptionViewItem*
///
QStyleOptionViewItem* q_itemdelegate_set_options(const void* self, const void* index, const void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param variant QVariant*
///
QPixmap* q_itemdelegate_decoration(const void* self, const void* option, const void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#selectedPixmap)
///
/// @param self QItemDelegate*
/// @param pixmap QPixmap*
/// @param palette QPalette*
/// @param enabled bool
///
QPixmap* q_itemdelegate_selected_pixmap(void* self, const void* pixmap, const void* palette, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// @param self const QItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param bounding QRect*
/// @param variant QVariant*
///
QRect* q_itemdelegate_do_check(const void* self, const void* option, const void* bounding, const void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// @param self const QItemDelegate*
/// @param painter QPainter*
/// @param rect QRect*
/// @param font QFont*
/// @param text const char*
///
QRect* q_itemdelegate_text_rectangle(const void* self, void* painter, const void* rect, const void* font, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
void q_itemdelegate_size_hint_changed(void* self, const void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QModelIndex* param1)
///
void q_itemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, const void*));

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemDelegate*
///
const char* q_itemdelegate_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemDelegate*
/// @param name const char*
///
void q_itemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_signals_blocked(const void* self);

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
/// @param self const QItemDelegate*
///
QThread* q_itemdelegate_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t q_itemdelegate_start_timer2(void* self, int64_t time);

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
/// @param self const QItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list q_itemdelegate_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_itemdelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemdelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemdelegate_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemdelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemdelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
///
bool q_itemdelegate_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
/// @param receiver QObject*
///
bool q_itemdelegate_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemdelegate_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QItemDelegate*
///
void q_itemdelegate_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QItemDelegate*
///
void q_itemdelegate_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemdelegate_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QItemDelegate*
/// @param name const char*
///
QVariant* q_itemdelegate_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemDelegate*
///
const char** q_itemdelegate_dynamic_property_names(const void* self);

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
/// @param self const QItemDelegate*
///
const QBindingStorage* q_itemdelegate_binding_storage2(const void* self);

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
/// @param self const QItemDelegate*
///
QObject* q_itemdelegate_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QItemDelegate*
/// @param classname const char*
///
bool q_itemdelegate_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemDelegate*
///
void q_itemdelegate_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_itemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_itemdelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_itemdelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemdelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
/// @param signal const char*
///
bool q_itemdelegate_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_itemdelegate_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemdelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemdelegate_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_destroy_editor(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_itemdelegate_super_destroy_editor(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback void func(QItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_itemdelegate_on_destroy_editor(const void* self, void (*callback)(const void*, void*, const void*));

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
bool q_itemdelegate_help_event(void* self, void* event, void* view, const void* option, const void* index);

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
bool q_itemdelegate_super_help_event(void* self, void* event, void* view, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_itemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemDelegate*
///
/// @return libqt_list of int
///
libqt_list q_itemdelegate_painting_roles(const void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
///
/// @return libqt_list of int
///
libqt_list q_itemdelegate_super_painting_roles(const void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback libqt_list of int func(QItemDelegate* self)
///
void q_itemdelegate_on_painting_roles(const void* self, libqt_list (*callback)(const void*));

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
bool q_itemdelegate_super_event(void* self, void* event);

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
void q_itemdelegate_super_timer_event(void* self, void* event);

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
void q_itemdelegate_super_child_event(void* self, void* event);

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
void q_itemdelegate_super_custom_event(void* self, void* event);

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
void q_itemdelegate_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param signal QMetaMethod*
///
void q_itemdelegate_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemDelegate*
/// @param callback void func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemDelegate*
///
QObject* q_itemdelegate_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
///
QObject* q_itemdelegate_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback QObject* func(QItemDelegate* self)
///
void q_itemdelegate_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemDelegate*
///
int32_t q_itemdelegate_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
///
int32_t q_itemdelegate_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback int32_t func(QItemDelegate* self)
///
void q_itemdelegate_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemDelegate*
/// @param signal const char*
///
int32_t q_itemdelegate_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param signal const char*
///
int32_t q_itemdelegate_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback int32_t func(QItemDelegate* self, const char* signal)
///
void q_itemdelegate_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemDelegate*
/// @param signal QMetaMethod*
///
bool q_itemdelegate_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param signal QMetaMethod*
///
bool q_itemdelegate_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QItemDelegate*
/// @param callback bool func(QItemDelegate* self, QMetaMethod* signal)
///
void q_itemdelegate_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

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
