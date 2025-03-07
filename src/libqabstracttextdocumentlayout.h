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

QAbstractTextDocumentLayout* q_abstracttextdocumentlayout_new(void* doc);
QMetaObject* q_abstracttextdocumentlayout_meta_object(void* self);
void* q_abstracttextdocumentlayout_metacast(void* self, const char* param1);
int32_t q_abstracttextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstracttextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstracttextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstracttextdocumentlayout_tr(const char* s);
void q_abstracttextdocumentlayout_draw(void* self, void* painter, void* context);
void q_abstracttextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*));
void q_abstracttextdocumentlayout_qbase_draw(void* self, void* painter, void* context);
int32_t q_abstracttextdocumentlayout_hit_test(void* self, void* point, int64_t accuracy);
void q_abstracttextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t));
int32_t q_abstracttextdocumentlayout_qbase_hit_test(void* self, void* point, int64_t accuracy);
const char* q_abstracttextdocumentlayout_anchor_at(void* self, void* pos);
const char* q_abstracttextdocumentlayout_image_at(void* self, void* pos);
QTextFormat* q_abstracttextdocumentlayout_format_at(void* self, void* pos);
QTextBlock* q_abstracttextdocumentlayout_block_with_marker_at(void* self, void* pos);
int32_t q_abstracttextdocumentlayout_page_count(void* self);
void q_abstracttextdocumentlayout_on_page_count(void* self, int32_t (*slot)());
int32_t q_abstracttextdocumentlayout_qbase_page_count(void* self);
QSizeF* q_abstracttextdocumentlayout_document_size(void* self);
void q_abstracttextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)());
QSizeF* q_abstracttextdocumentlayout_qbase_document_size(void* self);
QRectF* q_abstracttextdocumentlayout_frame_bounding_rect(void* self, void* frame);
void q_abstracttextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*));
QRectF* q_abstracttextdocumentlayout_qbase_frame_bounding_rect(void* self, void* frame);
QRectF* q_abstracttextdocumentlayout_block_bounding_rect(void* self, void* block);
void q_abstracttextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*));
QRectF* q_abstracttextdocumentlayout_qbase_block_bounding_rect(void* self, void* block);
void q_abstracttextdocumentlayout_set_paint_device(void* self, void* device);
QPaintDevice* q_abstracttextdocumentlayout_paint_device(void* self);
QTextDocument* q_abstracttextdocumentlayout_document(void* self);
void q_abstracttextdocumentlayout_register_handler(void* self, int objectType, void* component);
void q_abstracttextdocumentlayout_unregister_handler(void* self, int objectType);
QTextObjectInterface* q_abstracttextdocumentlayout_handler_for_object(void* self, int objectType);
void q_abstracttextdocumentlayout_update(void* self);
void q_abstracttextdocumentlayout_on_update(void* self, void (*slot)(void*));
void q_abstracttextdocumentlayout_update_block(void* self, void* block);
void q_abstracttextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_document_size_changed(void* self, void* newSize);
void q_abstracttextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_page_count_changed(void* self, int newPages);
void q_abstracttextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int));
void q_abstracttextdocumentlayout_document_changed(void* self, int from, int charsRemoved, int charsAdded);
void q_abstracttextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int));
void q_abstracttextdocumentlayout_qbase_document_changed(void* self, int from, int charsRemoved, int charsAdded);
void q_abstracttextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format);
void q_abstracttextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*));
void q_abstracttextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format);
void q_abstracttextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format);
void q_abstracttextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*));
void q_abstracttextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format);
void q_abstracttextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);
void q_abstracttextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*));
void q_abstracttextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);
int32_t q_abstracttextdocumentlayout_format_index(void* self, int pos);
void q_abstracttextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int));
int32_t q_abstracttextdocumentlayout_qbase_format_index(void* self, int pos);
QTextCharFormat* q_abstracttextdocumentlayout_format(void* self, int pos);
void q_abstracttextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int));
QTextCharFormat* q_abstracttextdocumentlayout_qbase_format(void* self, int pos);
const char* q_abstracttextdocumentlayout_tr2(const char* s, const char* c);
const char* q_abstracttextdocumentlayout_tr3(const char* s, const char* c, int n);
void q_abstracttextdocumentlayout_unregister_handler2(void* self, int objectType, void* component);
void q_abstracttextdocumentlayout_update1(void* self, void* param1);
void q_abstracttextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*));
const char* q_abstracttextdocumentlayout_object_name(void* self);
void q_abstracttextdocumentlayout_set_object_name(void* self, const char* name);
bool q_abstracttextdocumentlayout_is_widget_type(void* self);
bool q_abstracttextdocumentlayout_is_window_type(void* self);
bool q_abstracttextdocumentlayout_is_quick_item_type(void* self);
bool q_abstracttextdocumentlayout_signals_blocked(void* self);
bool q_abstracttextdocumentlayout_block_signals(void* self, bool b);
QThread* q_abstracttextdocumentlayout_thread(void* self);
void q_abstracttextdocumentlayout_move_to_thread(void* self, void* thread);
int32_t q_abstracttextdocumentlayout_start_timer(void* self, int interval);
void q_abstracttextdocumentlayout_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstracttextdocumentlayout_children(void* self);
void q_abstracttextdocumentlayout_set_parent(void* self, void* parent);
void q_abstracttextdocumentlayout_install_event_filter(void* self, void* filterObj);
void q_abstracttextdocumentlayout_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstracttextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstracttextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstracttextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstracttextdocumentlayout_disconnect_with_q_meta_object_connection(void* param1);
void q_abstracttextdocumentlayout_dump_object_tree(void* self);
void q_abstracttextdocumentlayout_dump_object_info(void* self);
bool q_abstracttextdocumentlayout_set_property(void* self, const char* name, void* value);
QVariant* q_abstracttextdocumentlayout_property(void* self, const char* name);
const char** q_abstracttextdocumentlayout_dynamic_property_names(void* self);
QBindingStorage* q_abstracttextdocumentlayout_binding_storage(void* self);
QBindingStorage* q_abstracttextdocumentlayout_binding_storage2(void* self);
void q_abstracttextdocumentlayout_destroyed(void* self);
void q_abstracttextdocumentlayout_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstracttextdocumentlayout_parent(void* self);
bool q_abstracttextdocumentlayout_inherits(void* self, const char* classname);
void q_abstracttextdocumentlayout_delete_later(void* self);
int32_t q_abstracttextdocumentlayout_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstracttextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstracttextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstracttextdocumentlayout_destroyed1(void* self, void* param1);
void q_abstracttextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstracttextdocumentlayout_event(void* self, void* event);
bool q_abstracttextdocumentlayout_qbase_event(void* self, void* event);
void q_abstracttextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstracttextdocumentlayout_event_filter(void* self, void* watched, void* event);
bool q_abstracttextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event);
void q_abstracttextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_abstracttextdocumentlayout_timer_event(void* self, void* event);
void q_abstracttextdocumentlayout_qbase_timer_event(void* self, void* event);
void q_abstracttextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_child_event(void* self, void* event);
void q_abstracttextdocumentlayout_qbase_child_event(void* self, void* event);
void q_abstracttextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_custom_event(void* self, void* event);
void q_abstracttextdocumentlayout_qbase_custom_event(void* self, void* event);
void q_abstracttextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_connect_notify(void* self, void* signal);
void q_abstracttextdocumentlayout_qbase_connect_notify(void* self, void* signal);
void q_abstracttextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstracttextdocumentlayout_disconnect_notify(void* self, void* signal);
void q_abstracttextdocumentlayout_qbase_disconnect_notify(void* self, void* signal);
void q_abstracttextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_abstracttextdocumentlayout_sender(void* self);
QObject* q_abstracttextdocumentlayout_qbase_sender(void* self);
void q_abstracttextdocumentlayout_on_sender(void* self, QObject* (*slot)());
int32_t q_abstracttextdocumentlayout_sender_signal_index(void* self);
int32_t q_abstracttextdocumentlayout_qbase_sender_signal_index(void* self);
void q_abstracttextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstracttextdocumentlayout_receivers(void* self, const char* signal);
int32_t q_abstracttextdocumentlayout_qbase_receivers(void* self, const char* signal);
void q_abstracttextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstracttextdocumentlayout_is_signal_connected(void* self, void* signal);
bool q_abstracttextdocumentlayout_qbase_is_signal_connected(void* self, void* signal);
void q_abstracttextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstracttextdocumentlayout_delete(void* self);

QSizeF* q_textobjectinterface_intrinsic_size(void* self, void* doc, int posInDocument, void* format);
void q_textobjectinterface_draw_object(void* self, void* painter, void* rect, void* doc, int posInDocument, void* format);
void q_textobjectinterface_operator_assign(void* self, void* param1);
void q_textobjectinterface_delete(void* self);

QAbstractTextDocumentLayout__Selection* q_abstracttextdocumentlayout__selection_new(void* param1);
void q_abstracttextdocumentlayout__selection_operator_assign(void* self, void* param1);
void q_abstracttextdocumentlayout__selection_delete(void* self);

QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new();
QAbstractTextDocumentLayout__PaintContext* q_abstracttextdocumentlayout__paintcontext_new2(void* param1);
void q_abstracttextdocumentlayout__paintcontext_operator_assign(void* self, void* param1);
void q_abstracttextdocumentlayout__paintcontext_delete(void* self);

#endif
