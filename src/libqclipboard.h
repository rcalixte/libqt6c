#pragma once
#ifndef SRCQT6C_LIBQCLIPBOARD_H
#define SRCQT6C_LIBQCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_clipboard_meta_object(void* self);
void* q_clipboard_metacast(void* self, const char* param1);
int32_t q_clipboard_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_clipboard_tr(const char* s);
void q_clipboard_clear(void* self);
bool q_clipboard_supports_selection(void* self);
bool q_clipboard_supports_find_buffer(void* self);
bool q_clipboard_owns_selection(void* self);
bool q_clipboard_owns_clipboard(void* self);
bool q_clipboard_owns_find_buffer(void* self);
const char* q_clipboard_text(void* self);
const char* q_clipboard_text_with_subtype(void* self, const char* subtype);
void q_clipboard_set_text(void* self, const char* param1);
QMimeData* q_clipboard_mime_data(void* self);
void q_clipboard_set_mime_data(void* self, void* data);
QImage* q_clipboard_image(void* self);
QPixmap* q_clipboard_pixmap(void* self);
void q_clipboard_set_image(void* self, void* param1);
void q_clipboard_set_pixmap(void* self, void* param1);
void q_clipboard_changed(void* self, int64_t mode);
void q_clipboard_on_changed(void* self, void (*slot)(void*, int64_t));
void q_clipboard_selection_changed(void* self);
void q_clipboard_on_selection_changed(void* self, void (*slot)(void*));
void q_clipboard_find_buffer_changed(void* self);
void q_clipboard_on_find_buffer_changed(void* self, void (*slot)(void*));
void q_clipboard_data_changed(void* self);
void q_clipboard_on_data_changed(void* self, void (*slot)(void*));
const char* q_clipboard_tr2(const char* s, const char* c);
const char* q_clipboard_tr3(const char* s, const char* c, int n);
void q_clipboard_clear1(void* self, int64_t mode);
const char* q_clipboard_text1(void* self, int64_t mode);
const char* q_clipboard_text2(void* self, const char* subtype, int64_t mode);
void q_clipboard_set_text2(void* self, const char* param1, int64_t mode);
QMimeData* q_clipboard_mime_data1(void* self, int64_t mode);
void q_clipboard_set_mime_data2(void* self, void* data, int64_t mode);
QImage* q_clipboard_image1(void* self, int64_t mode);
QPixmap* q_clipboard_pixmap1(void* self, int64_t mode);
void q_clipboard_set_image2(void* self, void* param1, int64_t mode);
void q_clipboard_set_pixmap2(void* self, void* param1, int64_t mode);
bool q_clipboard_event(void* self, void* event);
bool q_clipboard_event_filter(void* self, void* watched, void* event);
const char* q_clipboard_object_name(void* self);
void q_clipboard_set_object_name(void* self, const char* name);
bool q_clipboard_is_widget_type(void* self);
bool q_clipboard_is_window_type(void* self);
bool q_clipboard_is_quick_item_type(void* self);
bool q_clipboard_signals_blocked(void* self);
bool q_clipboard_block_signals(void* self, bool b);
QThread* q_clipboard_thread(void* self);
void q_clipboard_move_to_thread(void* self, void* thread);
int32_t q_clipboard_start_timer(void* self, int interval);
void q_clipboard_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_clipboard_children(void* self);
void q_clipboard_set_parent(void* self, void* parent);
void q_clipboard_install_event_filter(void* self, void* filterObj);
void q_clipboard_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_clipboard_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_clipboard_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_clipboard_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_clipboard_disconnect_with_q_meta_object_connection(void* param1);
void q_clipboard_dump_object_tree(void* self);
void q_clipboard_dump_object_info(void* self);
bool q_clipboard_set_property(void* self, const char* name, void* value);
QVariant* q_clipboard_property(void* self, const char* name);
const char** q_clipboard_dynamic_property_names(void* self);
QBindingStorage* q_clipboard_binding_storage(void* self);
QBindingStorage* q_clipboard_binding_storage2(void* self);
void q_clipboard_destroyed(void* self);
void q_clipboard_on_destroyed(void* self, void (*slot)(void*));
QObject* q_clipboard_parent(void* self);
bool q_clipboard_inherits(void* self, const char* classname);
void q_clipboard_delete_later(void* self);
int32_t q_clipboard_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_clipboard_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_clipboard_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_clipboard_destroyed1(void* self, void* param1);
void q_clipboard_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qclipboard.html#types

typedef enum {
    QCLIPBOARD_MODE_CLIPBOARD = 0,
    QCLIPBOARD_MODE_SELECTION = 1,
    QCLIPBOARD_MODE_FINDBUFFER = 2,
    QCLIPBOARD_MODE_LASTMODE = 2
} QClipboard__Mode;

#endif
