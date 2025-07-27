#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
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

void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1) {
    return QAbstractTextDocumentLayout_Metacast((QAbstractTextDocumentLayout*)self, param1);
}

int32_t q_abstracttextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_Metacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractTextDocumentLayout_OnMetacall((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTextDocumentLayout_QBaseMetacall((QAbstractTextDocumentLayout*)self, param1, param2, param3);
}

const char* q_abstracttextdocumentlayout_tr(const char* s) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_Draw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

void q_abstracttextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnDraw((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context) {
    QAbstractTextDocumentLayout_QBaseDraw((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QAbstractTextDocumentLayout__PaintContext*)context);
}

int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int64_t accuracy) {
    return QAbstractTextDocumentLayout_HitTest((QAbstractTextDocumentLayout*)self, (QPointF*)point, accuracy);
}

void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t)) {
    QAbstractTextDocumentLayout_OnHitTest((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int64_t accuracy) {
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

void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*slot)()) {
    QAbstractTextDocumentLayout_OnPageCount((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self) {
    return QAbstractTextDocumentLayout_QBasePageCount((QAbstractTextDocumentLayout*)self);
}

QSizeF* q_abstracttextdocumentlayout_document_size(void* self) {
    return QAbstractTextDocumentLayout_DocumentSize((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)()) {
    QAbstractTextDocumentLayout_OnDocumentSize((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self) {
    return QAbstractTextDocumentLayout_QBaseDocumentSize((QAbstractTextDocumentLayout*)self);
}

QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_FrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnFrameBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame) {
    return QAbstractTextDocumentLayout_QBaseFrameBoundingRect((QAbstractTextDocumentLayout*)self, (QTextFrame*)frame);
}

QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block) {
    return QAbstractTextDocumentLayout_BlockBoundingRect((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnBlockBoundingRect((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
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

void q_abstracttextdocumentlayout_on_update(void* self, void (*slot)(void*)) {
    QAbstractTextDocumentLayout_Connect_Update((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_update_block(void* self, void* block) {
    QAbstractTextDocumentLayout_UpdateBlock((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

void q_abstracttextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_UpdateBlock((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize) {
    QAbstractTextDocumentLayout_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (QSizeF*)newSize);
}

void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages) {
    QAbstractTextDocumentLayout_PageCountChanged((QAbstractTextDocumentLayout*)self, newPages);
}

void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_Connect_PageCountChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_DocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int)) {
    QAbstractTextDocumentLayout_OnDocumentChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded) {
    QAbstractTextDocumentLayout_QBaseDocumentChanged((QAbstractTextDocumentLayout*)self, from, charsRemoved, charsAdded);
}

void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_ResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnResizeInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseResizeInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_PositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnPositionInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBasePositionInlineObject((QAbstractTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_DrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*)) {
    QAbstractTextDocumentLayout_OnDrawInlineObject((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QAbstractTextDocumentLayout_QBaseDrawInlineObject((QAbstractTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_FormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormatIndex((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormatIndex((QAbstractTextDocumentLayout*)self, pos);
}

QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_Format((QAbstractTextDocumentLayout*)self, pos);
}

void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_OnFormat((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos) {
    return QAbstractTextDocumentLayout_QBaseFormat((QAbstractTextDocumentLayout*)self, pos);
}

const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractTextDocumentLayout_Tr3(s, c, n);
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

void q_abstracttextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_Update1((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
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

void q_abstracttextdocumentlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstracttextdocumentlayout_kill_timer2(void* self, int64_t id) {
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
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

void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
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

bool q_abstracttextdocumentlayout_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstracttextdocumentlayout_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_abstracttextdocumentlayout_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_Event((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event) {
    return QAbstractTextDocumentLayout_QBaseEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_EventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractTextDocumentLayout_QBaseEventFilter((QAbstractTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractTextDocumentLayout_OnEventFilter((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_TimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseTimerEvent((QAbstractTextDocumentLayout*)self, (QTimerEvent*)event);
}

void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnTimerEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_ChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseChildEvent((QAbstractTextDocumentLayout*)self, (QChildEvent*)event);
}

void q_abstracttextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnChildEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_CustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event) {
    QAbstractTextDocumentLayout_QBaseCustomEvent((QAbstractTextDocumentLayout*)self, (QEvent*)event);
}

void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnCustomEvent((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_ConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseConnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnConnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_DisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractTextDocumentLayout_QBaseDisconnectNotify((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnDisconnectNotify((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

QObject* q_abstracttextdocumentlayout_sender(void* self) {
    return QAbstractTextDocumentLayout_Sender((QAbstractTextDocumentLayout*)self);
}

QObject* q_abstracttextdocumentlayout_qbase_sender(void* self) {
    return QAbstractTextDocumentLayout_QBaseSender((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*slot)()) {
    QAbstractTextDocumentLayout_OnSender((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_SenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self) {
    return QAbstractTextDocumentLayout_QBaseSenderSignalIndex((QAbstractTextDocumentLayout*)self);
}

void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractTextDocumentLayout_OnSenderSignalIndex((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_Receivers((QAbstractTextDocumentLayout*)self, signal);
}

int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal) {
    return QAbstractTextDocumentLayout_QBaseReceivers((QAbstractTextDocumentLayout*)self, signal);
}

void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractTextDocumentLayout_OnReceivers((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_IsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractTextDocumentLayout_QBaseIsSignalConnected((QAbstractTextDocumentLayout*)self, (QMetaMethod*)signal);
}

void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_OnIsSignalConnected((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

void q_abstracttextdocumentlayout_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
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

QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new() {
    return QAbstractTextDocumentLayout__Selection_new();
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

void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1) {
    QAbstractTextDocumentLayout__PaintContext_OperatorAssign((QAbstractTextDocumentLayout__PaintContext*)self, (QAbstractTextDocumentLayout__PaintContext*)param1);
}

void q_abstracttextdocumentlayout__paintcontext_delete(void* self) {
    QAbstractTextDocumentLayout__PaintContext_Delete((QAbstractTextDocumentLayout__PaintContext*)(self));
}
