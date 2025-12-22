#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H
#define SRC_QT6C_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html)

/// q_abstracttextdocumentlayout_new constructs a new QAbstractTextDocumentLayout object.
///
/// @param doc QTextDocument*
///
QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractTextDocumentLayout*
///
const QMetaObject* q_abstracttextdocumentlayout_meta_object(void* self);

/// @param self QAbstractTextDocumentLayout*
/// @param param1 const char*
///
void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1);

/// @param self QAbstractTextDocumentLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttextdocumentlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracttextdocumentlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param context QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context)
///
void q_abstracttextdocumentlayout_on_draw(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param context QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// @param self QAbstractTextDocumentLayout*
/// @param point QPointF*
/// @param accuracy enum Qt__HitTestAccuracy
///
int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int32_t accuracy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy)
///
void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param point QPointF*
/// @param accuracy enum Qt__HitTestAccuracy
///
int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int32_t accuracy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_abstracttextdocumentlayout_anchor_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_abstracttextdocumentlayout_image_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
QTextFormat* q_abstracttextdocumentlayout_format_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// @param self QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_page_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func()
///
void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// @param self QAbstractTextDocumentLayout*
///
QSizeF* q_abstracttextdocumentlayout_document_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QSizeF* func()
///
void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
///
QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// @param self QAbstractTextDocumentLayout*
/// @param frame QTextFrame*
///
QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QRectF* func(QAbstractTextDocumentLayout* self, QTextFrame* frame)
///
void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param frame QTextFrame*
///
QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// @param self QAbstractTextDocumentLayout*
/// @param block QTextBlock*
///
QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QRectF* func(QAbstractTextDocumentLayout* self, QTextBlock* block)
///
void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param block QTextBlock*
///
QRectF* q_abstracttextdocumentlayout_qbase_block_bounding_rect(void* self, void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// @param self QAbstractTextDocumentLayout*
/// @param device QPaintDevice*
///
void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// @param self QAbstractTextDocumentLayout*
///
QPaintDevice* q_abstracttextdocumentlayout_paint_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// @param self QAbstractTextDocumentLayout*
///
QTextDocument* q_abstracttextdocumentlayout_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// @param self QAbstractTextDocumentLayout*
/// @param objectType int
/// @param component QObject*
///
void q_abstracttextdocumentlayout_register_handler(void* self, int objectType, void* component);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// @param self QAbstractTextDocumentLayout*
/// @param objectType int
///
void q_abstracttextdocumentlayout_unregister_handler(void* self, int objectType);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param objectType int
///
QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(void* self, int objectType);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_update(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// @param self QAbstractTextDocumentLayout*
/// @param block QTextBlock*
///
void q_abstracttextdocumentlayout_update_block(void* self, void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextBlock* block)
///
void q_abstracttextdocumentlayout_on_update_block(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param newSize QSizeF*
///
void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QSizeF* newSize)
///
void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param newPages int
///
void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, int newPages)
///
void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param from int
/// @param charsRemoved int
/// @param charsAdded int
///
void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded)
///
void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param from int
/// @param charsRemoved int
/// @param charsAdded int
///
void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*callback)(void*, void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*callback)(void*, void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param object QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*callback)(void*, void*, void*, void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param object QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self, int pos)
///
void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QTextCharFormat* func(QAbstractTextDocumentLayout* self, int pos)
///
void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// @param self QAbstractTextDocumentLayout*
/// @param objectType int
/// @param component QObject*
///
void q_abstracttextdocumentlayout_unregister_handler2(void* self, int objectType, void* component);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QAbstractTextDocumentLayout*
/// @param param1 QRectF*
///
void q_abstracttextdocumentlayout_update1(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QRectF* param1)
///
void q_abstracttextdocumentlayout_on_update1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractTextDocumentLayout*
///
const char* q_abstracttextdocumentlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractTextDocumentLayout*
/// @param name char*
///
void q_abstracttextdocumentlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractTextDocumentLayout*
/// @param b bool
///
bool q_abstracttextdocumentlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractTextDocumentLayout*
///
QThread* q_abstracttextdocumentlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractTextDocumentLayout*
/// @param thread QThread*
///
bool q_abstracttextdocumentlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param interval int
///
int32_t q_abstracttextdocumentlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param id int
///
void q_abstracttextdocumentlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param id enum Qt__TimerId
///
void q_abstracttextdocumentlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractTextDocumentLayout*
///
libqt_list /* of QObject* */ q_abstracttextdocumentlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractTextDocumentLayout*
/// @param parent QObject*
///
void q_abstracttextdocumentlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractTextDocumentLayout*
/// @param filterObj QObject*
///
void q_abstracttextdocumentlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractTextDocumentLayout*
/// @param obj QObject*
///
void q_abstracttextdocumentlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracttextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracttextdocumentlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractTextDocumentLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractTextDocumentLayout*
/// @param name const char*
///
QVariant* q_abstracttextdocumentlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractTextDocumentLayout*
///
const char** q_abstracttextdocumentlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractTextDocumentLayout*
///
QBindingStorage* q_abstracttextdocumentlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractTextDocumentLayout*
///
const QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractTextDocumentLayout*
/// @param classname const char*
///
bool q_abstracttextdocumentlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractTextDocumentLayout*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstracttextdocumentlayout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttextdocumentlayout_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTextDocumentLayout*
/// @param param1 QObject*
///
void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QObject* param1)
///
void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QEvent*
///
bool q_abstracttextdocumentlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QEvent*
///
bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback bool func(QAbstractTextDocumentLayout* self, QEvent* event)
///
void q_abstracttextdocumentlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback bool func(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event)
///
void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QTimerEvent*
///
void q_abstracttextdocumentlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QTimerEvent*
///
void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTimerEvent* event)
///
void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QChildEvent*
///
void q_abstracttextdocumentlayout_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QChildEvent*
///
void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QChildEvent* event)
///
void q_abstracttextdocumentlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QEvent*
///
void q_abstracttextdocumentlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param event QEvent*
///
void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QEvent* event)
///
void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QObject* func()
///
void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func()
///
void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal const char*
///
int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal const char*
///
int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self, const char* signal)
///
void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback bool func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, const char* objectName)
///
void q_abstracttextdocumentlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#dtor.QAbstractTextDocumentLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
///
/// @param self QTextObjectInterface*
/// @param doc QTextDocument*
/// @param posInDocument int
/// @param format QTextFormat*
///
QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
///
/// @param self QTextObjectInterface*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param doc QTextDocument*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_textobjectinterface_draw_object(void* self, void* painter, void* rect, void* doc, int posInDocument, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator-eq)
///
/// @param self QTextObjectInterface*
/// @param param1 QTextObjectInterface*
///
void q_textobjectinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#dtor.QTextObjectInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QTextObjectInterface*
///
void q_textobjectinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html)

/// q_abstracttextdocumentlayout__selection_new constructs a new QAbstractTextDocumentLayout::Selection object.
///
/// @param param1 QAbstractTextDocumentLayout__Selection*
///
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html)

/// q_abstracttextdocumentlayout__selection_new2 constructs a new QAbstractTextDocumentLayout::Selection object.
///
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
///
/// @param self QAbstractTextDocumentLayout__Selection*
///
QTextCursor* q_abstracttextdocumentlayout__selection_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
///
/// @param self QAbstractTextDocumentLayout__Selection*
/// @param cursor QTextCursor*
///
void q_abstracttextdocumentlayout__selection_set_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
///
/// @param self QAbstractTextDocumentLayout__Selection*
///
QTextCharFormat* q_abstracttextdocumentlayout__selection_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
///
/// @param self QAbstractTextDocumentLayout__Selection*
/// @param format QTextCharFormat*
///
void q_abstracttextdocumentlayout__selection_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#operator-eq)
///
/// @param self QAbstractTextDocumentLayout__Selection*
/// @param param1 QAbstractTextDocumentLayout__Selection*
///
void q_abstracttextdocumentlayout__selection_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QAbstractTextDocumentLayout__Selection*
///
void q_abstracttextdocumentlayout__selection_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html)

/// q_abstracttextdocumentlayout__paintcontext_new constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html)

/// q_abstracttextdocumentlayout__paintcontext_new2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
/// @param param1 QAbstractTextDocumentLayout__PaintContext*
///
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
int32_t q_abstracttextdocumentlayout__paintcontext_cursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param cursorPosition int
///
void q_abstracttextdocumentlayout__paintcontext_set_cursor_position(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
QPalette* q_abstracttextdocumentlayout__paintcontext_palette(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param palette QPalette*
///
void q_abstracttextdocumentlayout__paintcontext_set_palette(void* self, void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
QRectF* q_abstracttextdocumentlayout__paintcontext_clip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param clip QRectF*
///
void q_abstracttextdocumentlayout__paintcontext_set_clip(void* self, void* clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
libqt_list /* of QAbstractTextDocumentLayout__Selection* */ q_abstracttextdocumentlayout__paintcontext_selections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param selections libqt_list /* of QAbstractTextDocumentLayout__Selection* */
///
void q_abstracttextdocumentlayout__paintcontext_set_selections(void* self, libqt_list selections);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#operator-eq)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param param1 QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout__paintcontext_delete(void* self);

#endif
