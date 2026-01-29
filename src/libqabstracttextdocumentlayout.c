#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextlayout.hpp"
#include "libqabstracttextdocumentlayout.hpp"
#include "libqabstracttextdocumentlayout.h"

QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc) {
    return QAbstractTextDocumentLayout_new((QTextDocument*)doc);
}

const QMetaObject* q_abstracttextdocumentlayout_meta_object(void* self) {
    return QAbstractTextDocumentLayout_MetaObject((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAbstractTextDocumentLayout_OnMetaObject((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

const QMetaObject* q_abstracttextdocumentlayout_qbase_meta_object(void* self) {
    return QAbstractTextDocumentLayout_QBaseMetaObject((QAbstractTextDocumentLayout*)self);
}

void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1) {
    return QAbstractTextDocumentLayout_Metacast((QAbstractTextDocumentLayout*)self, param1);
}

void q_abstracttextdocumentlayout_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAbstractTextDocumentLayout_OnMetacast((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void* q_abstracttextdocumentlayout_qbase_metacast(void* self, const char* param1) {
    return QAbstractTextDocumentLayout_QBaseMetacast((QAbstractTextDocumentLayout*)self, param1);
}

int32_t q_abstracttextdocumentlayout_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_Metacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractTextDocumentLayout_OnMetacall((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_QBaseMetacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

const char* q_abstracttextdocumentlayout_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_Draw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

void q_abstracttextdocumentlayout_on_draw(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnDraw((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_QBaseDraw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int32_t accuracy) {
    return QAbstractTextDocumentLayout_HitTest((QAbstractTextDocumentLayout*)self, (QPointF*)point, accuracy);
}

void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*callback)(void*, void*, int32_t)) {
    QAbstractTextDocumentLayout_OnHitTest((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int32_t accuracy) {
    return QAbstractTextDocumentLayout_QBaseHitTest((QAbstractTextDocumentLayout*)self, (QPointF*)point, accuracy);
}

const char* q_abstracttextdocumentlayout_anchor_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_AnchorAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttextdocumentlayout_image_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_ImageAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextFormat* q_abstracttextdocumentlayout_format_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_FormatAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_BlockWithMarkerAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

int32_t q_abstracttextdocumentlayout_page_count(void* self) {
    return QAbstractTextDocumentLayout_PageCount((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*callback)()) {
    QAbstractTextDocumentLayout_OnPageCount((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self) {
    return QAbstractTextDocumentLayout_QBasePageCount((QAbstractTextDocumentLayout*)self);
}

QSizeF* q_abstracttextdocumentlayout_document_size(void* self) {
    return QAbstractTextDocumentLayout_DocumentSize((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*callback)()) {
    QAbstractTextDocumentLayout_OnDocumentSize((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self) {
    return QAbstractTextDocumentLayout_QBaseDocumentSize((QAbstractTextDocumentLayout*)self);
}

QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_FrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnFrameBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_QBaseFrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block) {
    return QAbstractTextDocumentLayout_BlockBoundingRect((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnBlockBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

QRectF* q_abstracttextdocumentlayout_qbase_block_bounding_rect(void* self, void* block) {
    return QAbstractTextDocumentLayout_QBaseBlockBoundingRect((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device) {
    QAbstractTextDocumentLayout_SetPaintDevice((QAbstractTextDocumentLayout*)self, (QPaintDevice*)device);
}

QPaintDevice* q_abstracttextdocumentlayout_paint_device(void* self) {
    return QAbstractTextDocumentLayout_PaintDevice((QAbstractTextDocumentLayout*)self);
}

QTextDocument* q_abstracttextdocumentlayout_document(void* self) {
    return QAbstractTextDocumentLayout_Document((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_register_handler(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_RegisterHandler((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

void q_abstracttextdocumentlayout_unregister_handler(void* self, int objectType) {
    QAbstractTextDocumentLayout_UnregisterHandler((QAbstractTextDocumentLayout*)self, objectType);
}

QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(void* self, int objectType) {
    return QAbstractTextDocumentLayout_HandlerForObject((QAbstractTextDocumentLayout*)self, objectType);
}

void q_abstracttextdocumentlayout_update(void* self) {
    QAbstractTextDocumentLayout_Update((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_update(void* self, void (*callback)(void*)) {
    QAbstractTextDocumentLayout_Connect_Update((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_update_block(void* self, void* block) {
    QAbstractTextDocumentLayout_UpdateBlock((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_abstracttextdocumentlayout_on_update_block(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_UpdateBlock((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize) {
    QAbstractTextDocumentLayout_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (QSizeF*)newSize);
}

void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages) {
    QAbstractTextDocumentLayout_PageCountChanged((QAbstractTextDocumentLayout*)self, newPages);
}

void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*callback)(void*, int)) {
    QAbstractTextDocumentLayout_Connect_PageCountChanged((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_DocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*callback)(void*, int, int, int)) {
    QAbstractTextDocumentLayout_OnDocumentChanged((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_QBaseDocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_ResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*callback)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnResizeInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_PositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*callback)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnPositionInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBasePositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_DrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*callback)(void*, void*, void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnDrawInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseDrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_FormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*callback)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormatIndex((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_Format((QAbstractTextDocumentLayout*)self, pos);
}

void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormat((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormat((QAbstractTextDocumentLayout*)self, pos);
}

const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttextdocumentlayout_unregister_handler2(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_UnregisterHandler2((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

void q_abstracttextdocumentlayout_update1(void* self, void* param1) {
    QAbstractTextDocumentLayout_Update1((QAbstractTextDocumentLayout*)self, (QRectF*)param1);
}

void q_abstracttextdocumentlayout_on_update1(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_Update1((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

const char* q_abstracttextdocumentlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttextdocumentlayout_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstracttextdocumentlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstracttextdocumentlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstracttextdocumentlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstracttextdocumentlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstracttextdocumentlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstracttextdocumentlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstracttextdocumentlayout_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstracttextdocumentlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstracttextdocumentlayout_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstracttextdocumentlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracttextdocumentlayout_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstracttextdocumentlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstracttextdocumentlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstracttextdocumentlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstracttextdocumentlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstracttextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstracttextdocumentlayout_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstracttextdocumentlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstracttextdocumentlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstracttextdocumentlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstracttextdocumentlayout_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstracttextdocumentlayout_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_abstracttextdocumentlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstracttextdocumentlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstracttextdocumentlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstracttextdocumentlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstracttextdocumentlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstracttextdocumentlayout_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstracttextdocumentlayout_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstracttextdocumentlayout_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_Event((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_QBaseEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnEvent((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_EventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_QBaseEventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnEventFilter((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_TimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseTimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnTimerEvent((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_ChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_abstracttextdocumentlayout_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnChildEvent((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_CustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseCustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnCustomEvent((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_ConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnConnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_DisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseDisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnDisconnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

QObject* q_abstracttextdocumentlayout_sender(void* self) {
    return QAbstractTextDocumentLayout_Sender((QAbstractTextDocumentLayout*)self);
}

QObject* q_abstracttextdocumentlayout_qbase_sender(void* self) {
    return QAbstractTextDocumentLayout_QBaseSender((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*callback)()) {
    QAbstractTextDocumentLayout_OnSender((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_SenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_QBaseSenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractTextDocumentLayout_OnSenderSignalIndex((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_Receivers((QAbstractTextDocumentLayout*)self, signal);
}

int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_QBaseReceivers((QAbstractTextDocumentLayout*)self, signal);
}

void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractTextDocumentLayout_OnReceivers((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_IsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_QBaseIsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractTextDocumentLayout_OnIsSignalConnected((QAbstractTextDocumentLayout*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstracttextdocumentlayout_delete(void* self) {
    QAbstractTextDocumentLayout_Delete((QAbstractTextDocumentLayout*)(self));
}

QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, void* format) {
    return QTextObjectInterface_IntrinsicSize((QTextObjectInterface*)self, (QTextDocument*)doc, posInDocument, (QTextFormat*)format);
}

void q_textobjectinterface_draw_object(void* self, void* painter, void* rect, void* doc, int posInDocument, void* format) {
    QTextObjectInterface_DrawObject((QTextObjectInterface*)self, (QPainter*)painter, (QRectF*)rect, (QTextDocument*)doc, posInDocument, (QTextFormat*)format);
}

void q_textobjectinterface_operator_assign(void* self, void* param1) {
    QTextObjectInterface_OperatorAssign((QTextObjectInterface*)self, (QTextObjectInterface*)param1);
}

void q_textobjectinterface_delete(void* self) {
    QTextObjectInterface_Delete((QTextObjectInterface*)(self));
}

QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new(void* param1) {
    return QAbstractTextDocumentLayout__Selection_new((QAbstractTextDocumentLayout__Selection*)param1);
}

QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new2() {
    return QAbstractTextDocumentLayout__Selection_new2();
}

QTextCursor* q_abstracttextdocumentlayout__selection_cursor(void* self) {
    return QAbstractTextDocumentLayout__Selection_Cursor((QAbstractTextDocumentLayout__Selection*)self);
}

void q_abstracttextdocumentlayout__selection_set_cursor(void* self, void* cursor) {
    QAbstractTextDocumentLayout__Selection_SetCursor((QAbstractTextDocumentLayout__Selection*)self, (QTextCursor*)cursor);
}

QTextCharFormat* q_abstracttextdocumentlayout__selection_format(void* self) {
    return QAbstractTextDocumentLayout__Selection_Format((QAbstractTextDocumentLayout__Selection*)self);
}

void q_abstracttextdocumentlayout__selection_set_format(void* self, void* format) {
    QAbstractTextDocumentLayout__Selection_SetFormat((QAbstractTextDocumentLayout__Selection*)self, (QTextCharFormat*)format);
}

void q_abstracttextdocumentlayout__selection_operator_assign(void* self, void* param1) {
    QAbstractTextDocumentLayout__Selection_OperatorAssign((QAbstractTextDocumentLayout__Selection*)self, (QAbstractTextDocumentLayout__Selection*)param1);
}

void q_abstracttextdocumentlayout__selection_delete(void* self) {
    QAbstractTextDocumentLayout__Selection_Delete((QAbstractTextDocumentLayout__Selection*)(self));
}

QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new() {
    return QAbstractTextDocumentLayout__PaintContext_new();
}

QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(void* param1) {
    return QAbstractTextDocumentLayout__PaintContext_new2((QAbstractTextDocumentLayout__PaintContext*)param1);
}

int32_t q_abstracttextdocumentlayout__paintcontext_cursor_position(void* self) {
    return QAbstractTextDocumentLayout__PaintContext_CursorPosition((QAbstractTextDocumentLayout__PaintContext*)self);
}

void q_abstracttextdocumentlayout__paintcontext_set_cursor_position(void* self, int cursorPosition) {
    QAbstractTextDocumentLayout__PaintContext_SetCursorPosition((QAbstractTextDocumentLayout__PaintContext*)self, cursorPosition);
}

QPalette* q_abstracttextdocumentlayout__paintcontext_palette(void* self) {
    return QAbstractTextDocumentLayout__PaintContext_Palette((QAbstractTextDocumentLayout__PaintContext*)self);
}

void q_abstracttextdocumentlayout__paintcontext_set_palette(void* self, void* palette) {
    QAbstractTextDocumentLayout__PaintContext_SetPalette((QAbstractTextDocumentLayout__PaintContext*)self, (QPalette*)palette);
}

QRectF* q_abstracttextdocumentlayout__paintcontext_clip(void* self) {
    return QAbstractTextDocumentLayout__PaintContext_Clip((QAbstractTextDocumentLayout__PaintContext*)self);
}

void q_abstracttextdocumentlayout__paintcontext_set_clip(void* self, void* clip) {
    QAbstractTextDocumentLayout__PaintContext_SetClip((QAbstractTextDocumentLayout__PaintContext*)self, (QRectF*)clip);
}

libqt_list /* of QAbstractTextDocumentLayout__Selection* */ q_abstracttextdocumentlayout__paintcontext_selections(void* self) {
    libqt_list selections_arr = QAbstractTextDocumentLayout__PaintContext_Selections((QAbstractTextDocumentLayout__PaintContext*)self);
    return selections_arr;
}

void q_abstracttextdocumentlayout__paintcontext_set_selections(void* self, libqt_list /* of QAbstractTextDocumentLayout__Selection* */ selections) {
    QAbstractTextDocumentLayout__PaintContext_SetSelections((QAbstractTextDocumentLayout__PaintContext*)self, selections);
}

void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1) {
    QAbstractTextDocumentLayout__PaintContext_OperatorAssign((QAbstractTextDocumentLayout__PaintContext*)self, (QAbstractTextDocumentLayout__PaintContext*)param1);
}

void q_abstracttextdocumentlayout__paintcontext_delete(void* self) {
    QAbstractTextDocumentLayout__PaintContext_Delete((QAbstractTextDocumentLayout__PaintContext*)(self));
}
