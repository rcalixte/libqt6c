#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENEWWINDOWREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENEWWINDOWREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqrect.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "libqwebenginepage.h"

QMetaObject* q_webenginenewwindowrequest_meta_object(void* self);
void* q_webenginenewwindowrequest_metacast(void* self, const char* param1);
int32_t q_webenginenewwindowrequest_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginenewwindowrequest_tr(const char* s);
int64_t q_webenginenewwindowrequest_destination(void* self);
QUrl* q_webenginenewwindowrequest_requested_url(void* self);
QRect* q_webenginenewwindowrequest_requested_geometry(void* self);
bool q_webenginenewwindowrequest_is_user_initiated(void* self);
void q_webenginenewwindowrequest_open_in(void* self, void* param1);
const char* q_webenginenewwindowrequest_tr2(const char* s, const char* c);
const char* q_webenginenewwindowrequest_tr3(const char* s, const char* c, int n);
bool q_webenginenewwindowrequest_event(void* self, void* event);
bool q_webenginenewwindowrequest_event_filter(void* self, void* watched, void* event);
const char* q_webenginenewwindowrequest_object_name(void* self);
void q_webenginenewwindowrequest_set_object_name(void* self, const char* name);
bool q_webenginenewwindowrequest_is_widget_type(void* self);
bool q_webenginenewwindowrequest_is_window_type(void* self);
bool q_webenginenewwindowrequest_is_quick_item_type(void* self);
bool q_webenginenewwindowrequest_signals_blocked(void* self);
bool q_webenginenewwindowrequest_block_signals(void* self, bool b);
QThread* q_webenginenewwindowrequest_thread(void* self);
void q_webenginenewwindowrequest_move_to_thread(void* self, void* thread);
int32_t q_webenginenewwindowrequest_start_timer(void* self, int interval);
void q_webenginenewwindowrequest_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginenewwindowrequest_children(void* self);
void q_webenginenewwindowrequest_set_parent(void* self, void* parent);
void q_webenginenewwindowrequest_install_event_filter(void* self, void* filterObj);
void q_webenginenewwindowrequest_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginenewwindowrequest_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginenewwindowrequest_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginenewwindowrequest_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginenewwindowrequest_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginenewwindowrequest_dump_object_tree(void* self);
void q_webenginenewwindowrequest_dump_object_info(void* self);
bool q_webenginenewwindowrequest_set_property(void* self, const char* name, void* value);
QVariant* q_webenginenewwindowrequest_property(void* self, const char* name);
const char** q_webenginenewwindowrequest_dynamic_property_names(void* self);
QBindingStorage* q_webenginenewwindowrequest_binding_storage(void* self);
QBindingStorage* q_webenginenewwindowrequest_binding_storage2(void* self);
void q_webenginenewwindowrequest_destroyed(void* self);
void q_webenginenewwindowrequest_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginenewwindowrequest_parent(void* self);
bool q_webenginenewwindowrequest_inherits(void* self, const char* classname);
void q_webenginenewwindowrequest_delete_later(void* self);
int32_t q_webenginenewwindowrequest_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginenewwindowrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginenewwindowrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginenewwindowrequest_destroyed1(void* self, void* param1);
void q_webenginenewwindowrequest_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_webenginenewwindowrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#types

typedef enum {
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWWINDOW = 0,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWTAB = 1,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWDIALOG = 2,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWBACKGROUNDTAB = 3
} QWebEngineNewWindowRequest__DestinationType;

#endif
