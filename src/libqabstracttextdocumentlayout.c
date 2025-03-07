#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextdocument.hpp"
#include "libqtextlayout.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqabstracttextdocumentlayout.hpp"
#include "libqabstracttextdocumentlayout.h"

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html

/// q_abstracttextdocumentlayout_new constructs a new QAbstractTextDocumentLayout object.
///
/// ``` QTextDocument* doc ```
QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc) {
    return QAbstractTextDocumentLayout_new((QTextDocument*)doc);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractTextDocumentLayout* self ```
QMetaObject* q_abstracttextdocumentlayout_meta_object(void* self) {
    return QAbstractTextDocumentLayout_MetaObject((QAbstractTextDocumentLayout*)self);
}

/// ``` QAbstractTextDocumentLayout* self, const char* param1 ```
void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1) {
    return QAbstractTextDocumentLayout_Metacast((QAbstractTextDocumentLayout*)self, param1);
}

/// ``` QAbstractTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_Metacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, enum QMetaObject__Call, int, void*) ```
void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractTextDocumentLayout_OnMetacall((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_QBaseMetacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracttextdocumentlayout_tr(const char* s) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context ```
void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_Draw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*) ```
void q_abstracttextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnDraw((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context ```
void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_QBaseDraw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy ```
int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int64_t accuracy) {
    return QAbstractTextDocumentLayout_HitTest((QAbstractTextDocumentLayout*)self, (QPointF*)point, accuracy);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, QPointF*, enum Qt__HitTestAccuracy) ```
void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t)) {
    QAbstractTextDocumentLayout_OnHitTest((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* point, enum Qt__HitTestAccuracy accuracy ```
int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int64_t accuracy) {
    return QAbstractTextDocumentLayout_QBaseHitTest((QAbstractTextDocumentLayout*)self, (QPointF*)point, accuracy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
const char* q_abstracttextdocumentlayout_anchor_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_AnchorAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
const char* q_abstracttextdocumentlayout_image_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_ImageAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
QTextFormat* q_abstracttextdocumentlayout_format_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_FormatAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// ``` QAbstractTextDocumentLayout* self, QPointF* pos ```
QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_BlockWithMarkerAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_page_count(void* self) {
    return QAbstractTextDocumentLayout_PageCount((QAbstractTextDocumentLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)() ```
void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*slot)()) {
    QAbstractTextDocumentLayout_OnPageCount((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self) {
    return QAbstractTextDocumentLayout_QBasePageCount((QAbstractTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
///
/// ``` QAbstractTextDocumentLayout* self ```
QSizeF* q_abstracttextdocumentlayout_document_size(void* self) {
    return QAbstractTextDocumentLayout_DocumentSize((QAbstractTextDocumentLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QSizeF* (*slot)() ```
void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)()) {
    QAbstractTextDocumentLayout_OnDocumentSize((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self ```
QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self) {
    return QAbstractTextDocumentLayout_QBaseDocumentSize((QAbstractTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
///
/// ``` QAbstractTextDocumentLayout* self, QTextFrame* frame ```
QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_FrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* (*slot)(QAbstractTextDocumentLayout*, QTextFrame*) ```
void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnFrameBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextFrame* frame ```
QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_QBaseFrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block) {
    return QAbstractTextDocumentLayout_BlockBoundingRect((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnBlockBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_abstracttextdocumentlayout_qbase_block_bounding_rect(void* self, void* block) {
    return QAbstractTextDocumentLayout_QBaseBlockBoundingRect((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// ``` QAbstractTextDocumentLayout* self, QPaintDevice* device ```
void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device) {
    QAbstractTextDocumentLayout_SetPaintDevice((QAbstractTextDocumentLayout*)self, (QPaintDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// ``` QAbstractTextDocumentLayout* self ```
QPaintDevice* q_abstracttextdocumentlayout_paint_device(void* self) {
    return QAbstractTextDocumentLayout_PaintDevice((QAbstractTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// ``` QAbstractTextDocumentLayout* self ```
QTextDocument* q_abstracttextdocumentlayout_document(void* self) {
    return QAbstractTextDocumentLayout_Document((QAbstractTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType, QObject* component ```
void q_abstracttextdocumentlayout_register_handler(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_RegisterHandler((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType ```
void q_abstracttextdocumentlayout_unregister_handler(void* self, int objectType) {
    QAbstractTextDocumentLayout_UnregisterHandler((QAbstractTextDocumentLayout*)self, objectType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType ```
QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(void* self, int objectType) {
    return QAbstractTextDocumentLayout_HandlerForObject((QAbstractTextDocumentLayout*)self, objectType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_update(void* self) {
    QAbstractTextDocumentLayout_Update((QAbstractTextDocumentLayout*)self);
}

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*) ```
void q_abstracttextdocumentlayout_on_update(void* self, void (*slot)(void*)) {
    QAbstractTextDocumentLayout_Connect_Update((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// ``` QAbstractTextDocumentLayout* self, QTextBlock* block ```
void q_abstracttextdocumentlayout_update_block(void* self, void* block) {
    QAbstractTextDocumentLayout_UpdateBlock((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_abstracttextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_UpdateBlock((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// ``` QAbstractTextDocumentLayout* self, QSizeF* newSize ```
void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize) {
    QAbstractTextDocumentLayout_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (QSizeF*)newSize);
}

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QSizeF*) ```
void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// ``` QAbstractTextDocumentLayout* self, int newPages ```
void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages) {
    QAbstractTextDocumentLayout_PageCountChanged((QAbstractTextDocumentLayout*)self, newPages);
}

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_Connect_PageCountChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
///
/// ``` QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded ```
void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_DocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int, int, int) ```
void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int)) {
    QAbstractTextDocumentLayout_OnDocumentChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded ```
void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_QBaseDocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_ResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnResizeInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_PositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnPositionInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBasePositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_DrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*) ```
void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnDrawInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseDrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_FormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormatIndex((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_Format((QAbstractTextDocumentLayout*)self, pos);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTextDocumentLayout* self, QTextCharFormat* (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormat((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTextDocumentLayout* self, int pos ```
QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormat((QAbstractTextDocumentLayout*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QAbstractTextDocumentLayout* self, int objectType, QObject* component ```
void q_abstracttextdocumentlayout_unregister_handler2(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_UnregisterHandler2((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QAbstractTextDocumentLayout* self, QRectF* param1 ```
void q_abstracttextdocumentlayout_update1(void* self, void* param1) {
    QAbstractTextDocumentLayout_Update1((QAbstractTextDocumentLayout*)self, (QRectF*)param1);
}

/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QRectF*) ```
void q_abstracttextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_Update1((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractTextDocumentLayout* self ```
const char* q_abstracttextdocumentlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractTextDocumentLayout* self, const char* name ```
void q_abstracttextdocumentlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractTextDocumentLayout* self ```
bool q_abstracttextdocumentlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractTextDocumentLayout* self, bool b ```
bool q_abstracttextdocumentlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractTextDocumentLayout* self ```
QThread* q_abstracttextdocumentlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractTextDocumentLayout* self, QThread* thread ```
void q_abstracttextdocumentlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int interval ```
int32_t q_abstracttextdocumentlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int id ```
void q_abstracttextdocumentlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractTextDocumentLayout* self ```
libqt_list /* of QObject* */ q_abstracttextdocumentlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* parent ```
void q_abstracttextdocumentlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* filterObj ```
void q_abstracttextdocumentlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* obj ```
void q_abstracttextdocumentlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracttextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracttextdocumentlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractTextDocumentLayout* self, const char* name, QVariant* value ```
bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractTextDocumentLayout* self, const char* name ```
QVariant* q_abstracttextdocumentlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractTextDocumentLayout* self ```
const char** q_abstracttextdocumentlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTextDocumentLayout* self ```
QBindingStorage* q_abstracttextdocumentlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTextDocumentLayout* self ```
QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QObject*) ```
void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractTextDocumentLayout* self, const char* classname ```
bool q_abstracttextdocumentlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTextDocumentLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracttextdocumentlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTextDocumentLayout* self, QObject* param1 ```
void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QObject*, QObject*) ```
void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
bool q_abstracttextdocumentlayout_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_Event((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_QBaseEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QEvent*) ```
void q_abstracttextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_EventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_QBaseEventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QObject*, QEvent*) ```
void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnEventFilter((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QTimerEvent* event ```
void q_abstracttextdocumentlayout_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_TimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QTimerEvent* event ```
void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseTimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTimerEvent*) ```
void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnTimerEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QChildEvent* event ```
void q_abstracttextdocumentlayout_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_ChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QChildEvent* event ```
void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QChildEvent*) ```
void q_abstracttextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnChildEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
void q_abstracttextdocumentlayout_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_CustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QEvent* event ```
void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseCustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QEvent*) ```
void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnCustomEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_ConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnConnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_DisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseDisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnDisconnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_sender(void* self) {
    return QAbstractTextDocumentLayout_Sender((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
QObject* q_abstracttextdocumentlayout_qbase_sender(void* self) {
    return QAbstractTextDocumentLayout_QBaseSender((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QObject* (*slot)() ```
void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*slot)()) {
    QAbstractTextDocumentLayout_OnSender((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_SenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self ```
int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_QBaseSenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)() ```
void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractTextDocumentLayout_OnSenderSignalIndex((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, const char* signal ```
int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_Receivers((QAbstractTextDocumentLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, const char* signal ```
int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_QBaseReceivers((QAbstractTextDocumentLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, int32_t (*slot)(QAbstractTextDocumentLayout*, const char*) ```
void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractTextDocumentLayout_OnReceivers((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_IsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, QMetaMethod* signal ```
bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_QBaseIsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTextDocumentLayout* self, bool (*slot)(QAbstractTextDocumentLayout*, QMetaMethod*) ```
void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnIsSignalConnected((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout* self ```
void q_abstracttextdocumentlayout_delete(void* self) {
    QAbstractTextDocumentLayout_Delete((QAbstractTextDocumentLayout*)(self));
}

/// https://doc.qt.io/qt-6/qtextobjectinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
///
/// ``` QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format ```
QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, void* format) {
    return QTextObjectInterface_IntrinsicSize((QTextObjectInterface*)self, (QTextDocument*)doc, posInDocument, (QTextFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
///
/// ``` QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format ```
void q_textobjectinterface_draw_object(void* self, void* painter, void* rect, void* doc, int posInDocument, void* format) {
    QTextObjectInterface_DrawObject((QTextObjectInterface*)self, (QPainter*)painter, (QRectF*)rect, (QTextDocument*)doc, posInDocument, (QTextFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator=)
///
/// ``` QTextObjectInterface* self, QTextObjectInterface* param1 ```
void q_textobjectinterface_operator_assign(void* self, void* param1) {
    QTextObjectInterface_OperatorAssign((QTextObjectInterface*)self, (QTextObjectInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QTextObjectInterface* self ```
void q_textobjectinterface_delete(void* self) {
    QTextObjectInterface_Delete((QTextObjectInterface*)(self));
}

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html

/// q_abstracttextdocumentlayout__selection_new constructs a new QAbstractTextDocumentLayout::Selection object.
///
/// ``` QAbstractTextDocumentLayout__Selection* param1 ```
QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new(void* param1) {
    return QAbstractTextDocumentLayout__Selection_new((QAbstractTextDocumentLayout__Selection*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__selection.html#operator=)
///
/// ``` QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1 ```
void q_abstracttextdocumentlayout__selection_operator_assign(void* self, void* param1) {
    QAbstractTextDocumentLayout__Selection_OperatorAssign((QAbstractTextDocumentLayout__Selection*)self, (QAbstractTextDocumentLayout__Selection*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout__Selection* self ```
void q_abstracttextdocumentlayout__selection_delete(void* self) {
    QAbstractTextDocumentLayout__Selection_Delete((QAbstractTextDocumentLayout__Selection*)(self));
}

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html

/// q_abstracttextdocumentlayout__paintcontext_new constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
///
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new() {
    return QAbstractTextDocumentLayout__PaintContext_new();
}

/// q_abstracttextdocumentlayout__paintcontext_new2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
///
/// ``` QAbstractTextDocumentLayout__PaintContext* param1 ```
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(void* param1) {
    return QAbstractTextDocumentLayout__PaintContext_new2((QAbstractTextDocumentLayout__PaintContext*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__paintcontext.html#operator=)
///
/// ``` QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1 ```
void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1) {
    QAbstractTextDocumentLayout__PaintContext_OperatorAssign((QAbstractTextDocumentLayout__PaintContext*)self, (QAbstractTextDocumentLayout__PaintContext*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractTextDocumentLayout__PaintContext* self ```
void q_abstracttextdocumentlayout__paintcontext_delete(void* self) {
    QAbstractTextDocumentLayout__PaintContext_Delete((QAbstractTextDocumentLayout__PaintContext*)(self));
}