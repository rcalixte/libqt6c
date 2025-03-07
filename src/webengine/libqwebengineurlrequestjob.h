#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_webengineurlrequestjob_meta_object(void* self);
void* q_webengineurlrequestjob_metacast(void* self, const char* param1);
int32_t q_webengineurlrequestjob_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webengineurlrequestjob_tr(const char* s);
QUrl* q_webengineurlrequestjob_request_url(void* self);
char* q_webengineurlrequestjob_request_method(void* self);
QUrl* q_webengineurlrequestjob_initiator(void* self);
void q_webengineurlrequestjob_reply(void* self, const char* contentType, void* device);
void q_webengineurlrequestjob_fail(void* self, int64_t errorVal);
void q_webengineurlrequestjob_redirect(void* self, void* url);
const char* q_webengineurlrequestjob_tr2(const char* s, const char* c);
const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n);
bool q_webengineurlrequestjob_event(void* self, void* event);
bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event);
const char* q_webengineurlrequestjob_object_name(void* self);
void q_webengineurlrequestjob_set_object_name(void* self, const char* name);
bool q_webengineurlrequestjob_is_widget_type(void* self);
bool q_webengineurlrequestjob_is_window_type(void* self);
bool q_webengineurlrequestjob_is_quick_item_type(void* self);
bool q_webengineurlrequestjob_signals_blocked(void* self);
bool q_webengineurlrequestjob_block_signals(void* self, bool b);
QThread* q_webengineurlrequestjob_thread(void* self);
void q_webengineurlrequestjob_move_to_thread(void* self, void* thread);
int32_t q_webengineurlrequestjob_start_timer(void* self, int interval);
void q_webengineurlrequestjob_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webengineurlrequestjob_children(void* self);
void q_webengineurlrequestjob_set_parent(void* self, void* parent);
void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj);
void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webengineurlrequestjob_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webengineurlrequestjob_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webengineurlrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webengineurlrequestjob_disconnect_with_q_meta_object_connection(void* param1);
void q_webengineurlrequestjob_dump_object_tree(void* self);
void q_webengineurlrequestjob_dump_object_info(void* self);
bool q_webengineurlrequestjob_set_property(void* self, const char* name, void* value);
QVariant* q_webengineurlrequestjob_property(void* self, const char* name);
const char** q_webengineurlrequestjob_dynamic_property_names(void* self);
QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self);
QBindingStorage* q_webengineurlrequestjob_binding_storage2(void* self);
void q_webengineurlrequestjob_destroyed(void* self);
void q_webengineurlrequestjob_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webengineurlrequestjob_parent(void* self);
bool q_webengineurlrequestjob_inherits(void* self, const char* classname);
void q_webengineurlrequestjob_delete_later(void* self);
int32_t q_webengineurlrequestjob_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webengineurlrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webengineurlrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webengineurlrequestjob_destroyed1(void* self, void* param1);
void q_webengineurlrequestjob_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_webengineurlrequestjob_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#types

typedef enum {
    QWEBENGINEURLREQUESTJOB_ERROR_NOERROR = 0,
    QWEBENGINEURLREQUESTJOB_ERROR_URLNOTFOUND = 1,
    QWEBENGINEURLREQUESTJOB_ERROR_URLINVALID = 2,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTABORTED = 3,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTDENIED = 4,
    QWEBENGINEURLREQUESTJOB_ERROR_REQUESTFAILED = 5
} QWebEngineUrlRequestJob__Error;

#endif
