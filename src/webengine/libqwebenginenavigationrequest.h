#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENAVIGATIONREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENAVIGATIONREQUEST_H

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
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_webenginenavigationrequest_meta_object(void* self);
void* q_webenginenavigationrequest_metacast(void* self, const char* param1);
int32_t q_webenginenavigationrequest_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginenavigationrequest_tr(const char* s);
QUrl* q_webenginenavigationrequest_url(void* self);
bool q_webenginenavigationrequest_is_main_frame(void* self);
int64_t q_webenginenavigationrequest_navigation_type(void* self);
void q_webenginenavigationrequest_accept(void* self);
void q_webenginenavigationrequest_reject(void* self);
void q_webenginenavigationrequest_action_changed(void* self);
void q_webenginenavigationrequest_on_action_changed(void* self, void (*slot)(void*));
const char* q_webenginenavigationrequest_tr2(const char* s, const char* c);
const char* q_webenginenavigationrequest_tr3(const char* s, const char* c, int n);
bool q_webenginenavigationrequest_event(void* self, void* event);
bool q_webenginenavigationrequest_event_filter(void* self, void* watched, void* event);
const char* q_webenginenavigationrequest_object_name(void* self);
void q_webenginenavigationrequest_set_object_name(void* self, const char* name);
bool q_webenginenavigationrequest_is_widget_type(void* self);
bool q_webenginenavigationrequest_is_window_type(void* self);
bool q_webenginenavigationrequest_is_quick_item_type(void* self);
bool q_webenginenavigationrequest_signals_blocked(void* self);
bool q_webenginenavigationrequest_block_signals(void* self, bool b);
QThread* q_webenginenavigationrequest_thread(void* self);
void q_webenginenavigationrequest_move_to_thread(void* self, void* thread);
int32_t q_webenginenavigationrequest_start_timer(void* self, int interval);
void q_webenginenavigationrequest_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginenavigationrequest_children(void* self);
void q_webenginenavigationrequest_set_parent(void* self, void* parent);
void q_webenginenavigationrequest_install_event_filter(void* self, void* filterObj);
void q_webenginenavigationrequest_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginenavigationrequest_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginenavigationrequest_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginenavigationrequest_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginenavigationrequest_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginenavigationrequest_dump_object_tree(void* self);
void q_webenginenavigationrequest_dump_object_info(void* self);
bool q_webenginenavigationrequest_set_property(void* self, const char* name, void* value);
QVariant* q_webenginenavigationrequest_property(void* self, const char* name);
const char** q_webenginenavigationrequest_dynamic_property_names(void* self);
QBindingStorage* q_webenginenavigationrequest_binding_storage(void* self);
QBindingStorage* q_webenginenavigationrequest_binding_storage2(void* self);
void q_webenginenavigationrequest_destroyed(void* self);
void q_webenginenavigationrequest_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginenavigationrequest_parent(void* self);
bool q_webenginenavigationrequest_inherits(void* self, const char* classname);
void q_webenginenavigationrequest_delete_later(void* self);
int32_t q_webenginenavigationrequest_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginenavigationrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginenavigationrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginenavigationrequest_destroyed1(void* self, void* param1);
void q_webenginenavigationrequest_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_webenginenavigationrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#types

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_LINKCLICKEDNAVIGATION = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_TYPEDNAVIGATION = 1,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_FORMSUBMITTEDNAVIGATION = 2,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_BACKFORWARDNAVIGATION = 3,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_RELOADNAVIGATION = 4,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_OTHERNAVIGATION = 5,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_REDIRECTNAVIGATION = 6
} QWebEngineNavigationRequest__NavigationType;

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_ACCEPTREQUEST = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_IGNOREREQUEST = 255
} QWebEngineNavigationRequest__NavigationRequestAction;

#endif
