#pragma once
#ifndef SRCQT6C_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H
#define SRCQT6C_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextdocument.h"
#include "libqtextlayout.h"
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html

/// q_abstracttextdocumentlayout_new constructs a new QAbstractTextDocumentLayout object.
///
/// ``` QTextDocument* doc ```
QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractTextDocumentLayout* self ```
QMetaObject* q_abstracttextdocumentlayout_meta_object(void* self);

/// ``` QAbstractTextDocumentLayout* self, const char* param1 ```
void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1);

/// ``` QAbstractTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, enum QMetaObject__Call, int, void*) ```
void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracttextdocumentlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context ```
void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*) ```
void q_abstracttextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context ```
void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy ```
int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int64_t accuracy);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, QPointF*, enum Qt__HitTestAccuracy) ```
void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy ```
int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int64_t accuracy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
const char* q_abstracttextdocumentlayout_anchor_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
const char* q_abstracttextdocumentlayout_image_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
QTextFormat* q_abstracttextdocumentlayout_format_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_page_count(void* self);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)() ```
void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// ``` QAbstractTextDocumentLayout* self ```
QSizeF* q_abstracttextdocumentlayout_document_size(void* self);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QSizeF* (*slot)() ```
void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)());

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self ```
QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// ``` QAbstractTextDocumentLayout* self, QTextFrame* frame ```
QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* (*slot)(QAbstractTextDocumentLayout*, QTextFrame*) ```
void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextFrame* frame ```
QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_abstracttextdocumentlayout_qbase_block_bounding_rect(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// ``` QAbstractTextDocumentLayout* self, QPaintDevice* device ```
void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// ``` QAbstractTextDocumentLayout* self ```
QPaintDevice* q_abstracttextdocumentlayout_paint_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// ``` QAbstractTextDocumentLayout* self ```
QTextDocument* q_abstracttextdocumentlayout_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType, QObject* component ```
void q_abstracttextdocumentlayout_register_handler(void* self, int objectType, void* component);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType ```
void q_abstracttextdocumentlayout_unregister_handler(void* self, int objectType);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType ```
QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(void* self, int objectType);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_update(void* self);

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*) ```
void q_abstracttextdocumentlayout_on_update(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
void q_abstracttextdocumentlayout_update_block(void* self, void* block);

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_abstracttextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// ``` QAbstractTextDocumentLayout* self, QSizeF* newSize ```
void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize);

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QSizeF*) ```
void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// ``` QAbstractTextDocumentLayout* self, int newPages ```
void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages);

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
///
/// ``` QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded ```
void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int, int, int) ```
void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded ```
void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos);

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QTextCharFormat* (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType, QObject* component ```
void q_abstracttextdocumentlayout_unregister_handler2(void* self, int objectType, void* component);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* param1 ```
void q_abstracttextdocumentlayout_update1(void* self, void* param1);

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QRectF*) ```
void q_abstracttextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractTextDocumentLayout* self ```
const char* q_abstracttextdocumentlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractTextDocumentLayout* self, char* name ```
void q_abstracttextdocumentlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractTextDocumentLayout* self, bool b ```
bool q_abstracttextdocumentlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractTextDocumentLayout* self ```
QThread* q_abstracttextdocumentlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractTextDocumentLayout* self, QThread* thread ```
void q_abstracttextdocumentlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int interval ```
int32_t q_abstracttextdocumentlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int id ```
void q_abstracttextdocumentlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractTextDocumentLayout* self ```
libqt_list /* of QObject* */ q_abstracttextdocumentlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* parent ```
void q_abstracttextdocumentlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* filterObj ```
void q_abstracttextdocumentlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* obj ```
void q_abstracttextdocumentlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracttextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracttextdocumentlayout_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractTextDocumentLayout* self, const char* name, QVariant* value ```
bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractTextDocumentLayout* self, const char* name ```
QVariant* q_abstracttextdocumentlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractTextDocumentLayout* self ```
const char** q_abstracttextdocumentlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTextDocumentLayout* self ```
QBindingStorage* q_abstracttextdocumentlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTextDocumentLayout* self ```
QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QObject*) ```
void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractTextDocumentLayout* self, const char* classname ```
bool q_abstracttextdocumentlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracttextdocumentlayout_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* param1 ```
void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QObject*, QObject*) ```
void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
bool q_abstracttextdocumentlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QEvent*) ```
void q_abstracttextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QObject*, QEvent*) ```
void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QTimerEvent* event ```
void q_abstracttextdocumentlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QTimerEvent* event ```
void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTimerEvent*) ```
void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QChildEvent* event ```
void q_abstracttextdocumentlayout_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QChildEvent* event ```
void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QChildEvent*) ```
void q_abstracttextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
void q_abstracttextdocumentlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QEvent*) ```
void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* (*slot)() ```
void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)() ```
void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, const char* signal ```
int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, const char* signal ```
int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, const char*) ```
void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qtextobjectinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
///
/// ``` QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format ```
QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
///
/// ``` QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format ```
void q_textobjectinterface_draw_object(void* self, void* painter, void* rect, void* doc, int posInDocument, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator=)
///
/// ``` QTextObjectInterface* self, QTextObjectInterface* param1 ```
void q_textobjectinterface_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QTextObjectInterface* self ```
void q_textobjectinterface_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html

/// q_abstracttextdocumentlayout__selection_new constructs a new QAbstractTextDocumentLayout::Selection object.
///
/// ``` QAbstractTextDocumentLayout__Selection* param1 ```
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__selection.html#operator=)
///
/// ``` QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1 ```
void q_abstracttextdocumentlayout__selection_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout__Selection* self ```
void q_abstracttextdocumentlayout__selection_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html

/// q_abstracttextdocumentlayout__paintcontext_new constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
///
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new();

/// q_abstracttextdocumentlayout__paintcontext_new2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
/// ``` QAbstractTextDocumentLayout__PaintContext* param1 ```
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__paintcontext.html#operator=)
///
/// ``` QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1 ```
void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout__PaintContext* self ```
void q_abstracttextdocumentlayout__paintcontext_delete(void* self);

#endif
