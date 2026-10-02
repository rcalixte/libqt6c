#pragma once
#ifndef LIBQABSTRACTTEXTDOCUMENTLAYOUT_H
#define LIBQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html)

/// q_abstracttextdocumentlayout_new constructs a new QAbstractTextDocumentLayout object.
///
/// @param doc QTextDocument*
///
QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractTextDocumentLayout*
///
const QMetaObject* q_abstracttextdocumentlayout_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback const QMetaObject* func(const QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractTextDocumentLayout*
///
const QMetaObject* q_abstracttextdocumentlayout_super_meta_object(const void* self);

/// @param self QAbstractTextDocumentLayout*
/// @param param1 const char*
///
void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void* func(QAbstractTextDocumentLayout* self, const char* param1)
///
void q_abstracttextdocumentlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param param1 const char*
///
void* q_abstracttextdocumentlayout_super_metacast(void* self, const char* param1);

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
int32_t q_abstracttextdocumentlayout_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracttextdocumentlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_draw` before it can be called.
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param context QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout_draw(void* self, void* painter, const void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context)
///
void q_abstracttextdocumentlayout_on_draw(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_hit_test` before it can be called.
///
/// @param self const QAbstractTextDocumentLayout*
/// @param point QPointF*
/// @param accuracy enum Qt__HitTestAccuracy
///
int32_t q_abstracttextdocumentlayout_hit_test(const void* self, const void* point, int32_t accuracy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(const QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy)
///
void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*callback)(const void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_abstracttextdocumentlayout_anchor_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_abstracttextdocumentlayout_image_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
QTextFormat* q_abstracttextdocumentlayout_format_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param pos QPointF*
///
QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_page_count` before it can be called.
///
/// @param self const QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_page_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(const QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_document_size` before it can be called.
///
/// @param self const QAbstractTextDocumentLayout*
///
QSizeF* q_abstracttextdocumentlayout_document_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QSizeF* func(const QAbstractTextDocumentLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_frame_bounding_rect` before it can be called.
///
/// @param self const QAbstractTextDocumentLayout*
/// @param frame QTextFrame*
///
QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(const void* self, void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QRectF* func(const QAbstractTextDocumentLayout* self, QTextFrame* frame)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_block_bounding_rect` before it can be called.
///
/// @param self const QAbstractTextDocumentLayout*
/// @param block QTextBlock*
///
QRectF* q_abstracttextdocumentlayout_block_bounding_rect(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QRectF* func(const QAbstractTextDocumentLayout* self, QTextBlock* block)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// @param self QAbstractTextDocumentLayout*
/// @param device QPaintDevice*
///
void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// @param self const QAbstractTextDocumentLayout*
///
QPaintDevice* q_abstracttextdocumentlayout_paint_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// @param self const QAbstractTextDocumentLayout*
///
QTextDocument* q_abstracttextdocumentlayout_document(const void* self);

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
/// @param self const QAbstractTextDocumentLayout*
/// @param objectType int
///
QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(const void* self, int objectType);

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
void q_abstracttextdocumentlayout_update_block(void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextBlock* block)
///
void q_abstracttextdocumentlayout_on_update_block(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param newSize QSizeF*
///
void q_abstracttextdocumentlayout_document_size_changed(void* self, const void* newSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QSizeF* newSize)
///
void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*callback)(void*, const void*));

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
/// @warning This method must be implemented with `q_abstracttextdocumentlayout_on_document_changed` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*callback)(void*, void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_super_resize_inline_object(void* self, void* item, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*callback)(void*, void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Base class method implementation
///
/// @param self QAbstractTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_super_position_inline_object(void* self, void* item, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// @param self QAbstractTextDocumentLayout*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param object QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, const void* rect, void* object, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format)
///
void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*callback)(void*, void*, const void*, void*, int, const void*));

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
void q_abstracttextdocumentlayout_super_draw_inline_object(void* self, void* painter, const void* rect, void* object, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// @param self QAbstractTextDocumentLayout*
/// @param pos int
///
QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos);

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
void q_abstracttextdocumentlayout_update1(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QRectF* param1)
///
void q_abstracttextdocumentlayout_on_update1(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractTextDocumentLayout*
///
const char* q_abstracttextdocumentlayout_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractTextDocumentLayout*
/// @param name const char*
///
void q_abstracttextdocumentlayout_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_signals_blocked(const void* self);

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
/// @param self const QAbstractTextDocumentLayout*
///
QThread* q_abstracttextdocumentlayout_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_abstracttextdocumentlayout_start_timer2(void* self, int64_t time);

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
/// @param self const QAbstractTextDocumentLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstracttextdocumentlayout_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttextdocumentlayout_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracttextdocumentlayout_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
///
bool q_abstracttextdocumentlayout_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param receiver QObject*
///
bool q_abstracttextdocumentlayout_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracttextdocumentlayout_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractTextDocumentLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param name const char*
///
QVariant* q_abstracttextdocumentlayout_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractTextDocumentLayout*
///
const char** q_abstracttextdocumentlayout_dynamic_property_names(const void* self);

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
/// @param self const QAbstractTextDocumentLayout*
///
const QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(const void* self);

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
/// @param self const QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param classname const char*
///
bool q_abstracttextdocumentlayout_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractTextDocumentLayout*
///
void q_abstracttextdocumentlayout_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTextDocumentLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttextdocumentlayout_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstracttextdocumentlayout_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal const char*
///
bool q_abstracttextdocumentlayout_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstracttextdocumentlayout_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttextdocumentlayout_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTextDocumentLayout*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttextdocumentlayout_disconnect23(const void* self, const void* receiver, const char* member);

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
bool q_abstracttextdocumentlayout_super_event(void* self, void* event);

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
bool q_abstracttextdocumentlayout_super_event_filter(void* self, void* watched, void* event);

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
void q_abstracttextdocumentlayout_super_timer_event(void* self, void* event);

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
void q_abstracttextdocumentlayout_super_child_event(void* self, void* event);

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
void q_abstracttextdocumentlayout_super_custom_event(void* self, void* event);

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
void q_abstracttextdocumentlayout_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_abstracttextdocumentlayout_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback void func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
///
QObject* q_abstracttextdocumentlayout_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback QObject* func(QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
///
int32_t q_abstracttextdocumentlayout_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self)
///
void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal const char*
///
int32_t q_abstracttextdocumentlayout_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal const char*
///
int32_t q_abstracttextdocumentlayout_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback int32_t func(QAbstractTextDocumentLayout* self, const char* signal)
///
void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_abstracttextdocumentlayout_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_abstracttextdocumentlayout_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTextDocumentLayout*
/// @param callback bool func(QAbstractTextDocumentLayout* self, QMetaMethod* signal)
///
void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QTextObjectInterface*
/// @param doc QTextDocument*
/// @param posInDocument int
/// @param format QTextFormat*
///
QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QTextObjectInterface*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param doc QTextDocument*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_textobjectinterface_draw_object(void* self, void* painter, const void* rect, void* doc, int posInDocument, const void* format);

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
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html)

/// q_abstracttextdocumentlayout__selection_new2 constructs a new QAbstractTextDocumentLayout::Selection object.
///
/// @param param1 QAbstractTextDocumentLayout__Selection*
///
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
///
/// @param self const QAbstractTextDocumentLayout__Selection*
///
QTextCursor* q_abstracttextdocumentlayout__selection_cursor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
///
/// @param self QAbstractTextDocumentLayout__Selection*
/// @param cursor QTextCursor*
///
void q_abstracttextdocumentlayout__selection_set_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
///
/// @param self const QAbstractTextDocumentLayout__Selection*
///
QTextCharFormat* q_abstracttextdocumentlayout__selection_format(const void* self);

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
void q_abstracttextdocumentlayout__selection_operator_assign(void* self, const void* param1);

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
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
///
/// @param self const QAbstractTextDocumentLayout__PaintContext*
///
int32_t q_abstracttextdocumentlayout__paintcontext_cursor_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param cursorPosition int
///
void q_abstracttextdocumentlayout__paintcontext_set_cursor_position(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
///
/// @param self const QAbstractTextDocumentLayout__PaintContext*
///
QPalette* q_abstracttextdocumentlayout__paintcontext_palette(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param palette QPalette*
///
void q_abstracttextdocumentlayout__paintcontext_set_palette(void* self, void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
///
/// @param self const QAbstractTextDocumentLayout__PaintContext*
///
QRectF* q_abstracttextdocumentlayout__paintcontext_clip(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param clip QRectF*
///
void q_abstracttextdocumentlayout__paintcontext_set_clip(void* self, void* clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
///
/// @param self const QAbstractTextDocumentLayout__PaintContext*
///
/// @return libqt_list of QAbstractTextDocumentLayout__Selection*
///
libqt_list q_abstracttextdocumentlayout__paintcontext_selections(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param selections libqt_list of QAbstractTextDocumentLayout__Selection*
///
void q_abstracttextdocumentlayout__paintcontext_set_selections(void* self, libqt_list selections);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#operator-eq)
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
/// @param param1 QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, const void* param1);

/// Delete this object from C++ memory.
///
/// @param self QAbstractTextDocumentLayout__PaintContext*
///
void q_abstracttextdocumentlayout__paintcontext_delete(void* self);

#endif
