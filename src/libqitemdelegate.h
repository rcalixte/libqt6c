#pragma once
#ifndef SRCQT6C_LIBQITEMDELEGATE_H
#define SRCQT6C_LIBQITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qitemdelegate.html

/// q_itemdelegate_new constructs a new QItemDelegate object.
///
///
QItemDelegate* q_itemdelegate_new();

/// q_itemdelegate_new2 constructs a new QItemDelegate object.
///
/// ``` QObject* parent ```
QItemDelegate* q_itemdelegate_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QItemDelegate* self ```
const QMetaObject* q_itemdelegate_meta_object(void* self);

/// ``` QItemDelegate* self, const char* param1 ```
void* q_itemdelegate_metacast(void* self, const char* param1);

/// ``` QItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, int32_t (*slot)(QItemDelegate*, enum QMetaObject__Call, int, void*) ```
void q_itemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_itemdelegate_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_has_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
///
/// ``` QItemDelegate* self, bool clip ```
void q_itemdelegate_set_clipping(void* self, bool clip);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_itemdelegate_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QSize* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_itemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// ``` QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_itemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QWidget* (*slot)(QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_itemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QModelIndex*) ```
void q_itemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// ``` QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_itemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*) ```
void q_itemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_itemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// ``` QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
///
/// ``` QItemDelegate* self ```
QItemEditorFactory* q_itemdelegate_item_editor_factory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
///
/// ``` QItemDelegate* self, QItemEditorFactory* factory ```
void q_itemdelegate_set_item_editor_factory(void* self, void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text ```
void q_itemdelegate_draw_display(void* self, void* painter, void* option, void* rect, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, const char*) ```
void q_itemdelegate_on_draw_display(void* self, void (*slot)(void*, void*, void*, void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text ```
void q_itemdelegate_qbase_draw_display(void* self, void* painter, void* option, void* rect, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap ```
void q_itemdelegate_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, QPixmap*) ```
void q_itemdelegate_on_draw_decoration(void* self, void (*slot)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap ```
void q_itemdelegate_qbase_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect ```
void q_itemdelegate_draw_focus(void* self, void* painter, void* option, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*) ```
void q_itemdelegate_on_draw_focus(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect ```
void q_itemdelegate_qbase_draw_focus(void* self, void* painter, void* option, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state ```
void q_itemdelegate_draw_check(void* self, void* painter, void* option, void* rect, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, enum Qt__CheckState) ```
void q_itemdelegate_on_draw_check(void* self, void (*slot)(void*, void*, void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state ```
void q_itemdelegate_qbase_draw_check(void* self, void* painter, void* option, void* rect, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_draw_background(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_draw_background(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_draw_background(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint ```
void q_itemdelegate_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QStyleOptionViewItem*, QRect*, QRect*, QRect*, bool) ```
void q_itemdelegate_on_do_layout(void* self, void (*slot)(void*, void*, void*, void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint ```
void q_itemdelegate_qbase_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role ```
QRect* q_itemdelegate_rect(void* self, void* option, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QModelIndex*, int) ```
void q_itemdelegate_on_rect(void* self, QRect* (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role ```
QRect* q_itemdelegate_qbase_rect(void* self, void* option, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// ``` QItemDelegate* self, QObject* object, QEvent* event ```
bool q_itemdelegate_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QObject*, QEvent*) ```
void q_itemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QObject* object, QEvent* event ```
bool q_itemdelegate_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// ``` QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// ``` QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option ```
QStyleOptionViewItem* q_itemdelegate_set_options(void* self, void* index, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* (*slot)(QItemDelegate*, QModelIndex*, QStyleOptionViewItem*) ```
void q_itemdelegate_on_set_options(void* self, QStyleOptionViewItem* (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option ```
QStyleOptionViewItem* q_itemdelegate_qbase_set_options(void* self, void* index, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant ```
QPixmap* q_itemdelegate_decoration(void* self, void* option, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QPixmap* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QVariant*) ```
void q_itemdelegate_on_decoration(void* self, QPixmap* (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant ```
QPixmap* q_itemdelegate_qbase_decoration(void* self, void* option, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant ```
QRect* q_itemdelegate_do_check(void* self, void* option, void* bounding, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QRect*, QVariant*) ```
void q_itemdelegate_on_do_check(void* self, QRect* (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant ```
QRect* q_itemdelegate_qbase_do_check(void* self, void* option, void* bounding, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// ``` QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, const char* text ```
QRect* q_itemdelegate_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QPainter*, QRect*, QFont*, const char*) ```
void q_itemdelegate_on_text_rectangle(void* self, QRect* (*slot)(void*, void*, void*, void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, const char* text ```
QRect* q_itemdelegate_qbase_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_itemdelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_itemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QItemDelegate* self, QWidget* editor ```
void q_itemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_itemdelegate_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, QWidget* editor ```
void q_itemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_itemdelegate_on_close_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QItemDelegate* self, QModelIndex* param1 ```
void q_itemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QModelIndex*) ```
void q_itemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_itemdelegate_close_editor2(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_itemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QItemDelegate* self ```
const char* q_itemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QItemDelegate* self, char* name ```
void q_itemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QItemDelegate* self, bool b ```
bool q_itemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QItemDelegate* self ```
QThread* q_itemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QItemDelegate* self, QThread* thread ```
bool q_itemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemDelegate* self, int interval ```
int32_t q_itemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QItemDelegate* self, int id ```
void q_itemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QItemDelegate* self, enum Qt__TimerId id ```
void q_itemdelegate_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QItemDelegate* self ```
libqt_list /* of QObject* */ q_itemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QItemDelegate* self, QObject* parent ```
void q_itemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QItemDelegate* self, QObject* filterObj ```
void q_itemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QItemDelegate* self, QObject* obj ```
void q_itemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_itemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemDelegate* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_itemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_itemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_itemdelegate_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QItemDelegate* self, const char* name, QVariant* value ```
bool q_itemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QItemDelegate* self, const char* name ```
QVariant* q_itemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QItemDelegate* self ```
const char** q_itemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QItemDelegate* self ```
QBindingStorage* q_itemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QItemDelegate* self ```
const QBindingStorage* q_itemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self, void (*slot)(QObject*) ```
void q_itemdelegate_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QItemDelegate* self, const char* classname ```
bool q_itemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QItemDelegate* self, QThread* thread, Disambiguated_t* param2 ```
bool q_itemdelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemDelegate* self, int interval, enum Qt__TimerType timerType ```
int32_t q_itemdelegate_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemDelegate* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self, QObject* param1 ```
void q_itemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self, void (*slot)(QObject*, QObject*) ```
void q_itemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QModelIndex*) ```
void q_itemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
libqt_list /* of int */ q_itemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
libqt_list /* of int */ q_itemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, libqt_list /* of int */ (*slot)() ```
void q_itemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
bool q_itemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
bool q_itemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QEvent*) ```
void q_itemdelegate_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QTimerEvent* event ```
void q_itemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QTimerEvent* event ```
void q_itemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QTimerEvent*) ```
void q_itemdelegate_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QChildEvent* event ```
void q_itemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QChildEvent* event ```
void q_itemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QChildEvent*) ```
void q_itemdelegate_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
void q_itemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
void q_itemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QEvent*) ```
void q_itemdelegate_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, QObject* (*slot)() ```
void q_itemdelegate_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
int32_t q_itemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
int32_t q_itemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, int32_t (*slot)() ```
void q_itemdelegate_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, const char* signal ```
int32_t q_itemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, const char* signal ```
int32_t q_itemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, int32_t (*slot)(QItemDelegate*, const char*) ```
void q_itemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
bool q_itemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
bool q_itemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QItemDelegate* self, void (*slot)(QObject*, const char*) ```
void q_itemdelegate_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#dtor.QItemDelegate)
///
/// Delete this object from C++ memory.
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_delete(void* self);

#endif
