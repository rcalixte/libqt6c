#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKACCESSMANAGER_H
#define SRC_NETWORKQT6C_LIBQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractnetworkcache.h"
#include "../libqanystringview.h"
#include "libqauthenticator.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhstspolicy.h"
#include "libqhttpmultipart.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "libqnetworkcookiejar.h"
#include "libqnetworkproxy.h"
#include "libqnetworkreply.h"
#include "libqnetworkrequest.h"
#include "../libqobject.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QNetworkAccessManager* q_networkaccessmanager_new();
QNetworkAccessManager* q_networkaccessmanager_new2(void* parent);
QMetaObject* q_networkaccessmanager_meta_object(void* self);
void* q_networkaccessmanager_metacast(void* self, const char* param1);
int32_t q_networkaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3);
void q_networkaccessmanager_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_networkaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_networkaccessmanager_tr(const char* s);
const char** q_networkaccessmanager_supported_schemes(void* self);
void q_networkaccessmanager_on_supported_schemes(void* self, const char** (*slot)());
const char** q_networkaccessmanager_qbase_supported_schemes(void* self);
void q_networkaccessmanager_clear_access_cache(void* self);
void q_networkaccessmanager_clear_connection_cache(void* self);
QNetworkProxy* q_networkaccessmanager_proxy(void* self);
void q_networkaccessmanager_set_proxy(void* self, void* proxy);
QNetworkProxyFactory* q_networkaccessmanager_proxy_factory(void* self);
void q_networkaccessmanager_set_proxy_factory(void* self, void* factory);
QAbstractNetworkCache* q_networkaccessmanager_cache(void* self);
void q_networkaccessmanager_set_cache(void* self, void* cache);
QNetworkCookieJar* q_networkaccessmanager_cookie_jar(void* self);
void q_networkaccessmanager_set_cookie_jar(void* self, void* cookieJar);
void q_networkaccessmanager_set_strict_transport_security_enabled(void* self, bool enabled);
bool q_networkaccessmanager_is_strict_transport_security_enabled(void* self);
void q_networkaccessmanager_enable_strict_transport_security_store(void* self, bool enabled);
bool q_networkaccessmanager_is_strict_transport_security_store_enabled(void* self);
void q_networkaccessmanager_add_strict_transport_security_hosts(void* self, void* knownHosts[]);
libqt_list /* of QHstsPolicy* */ q_networkaccessmanager_strict_transport_security_hosts(void* self);
QNetworkReply* q_networkaccessmanager_head(void* self, void* request);
QNetworkReply* q_networkaccessmanager_get(void* self, void* request);
QNetworkReply* q_networkaccessmanager_post(void* self, void* request, void* data);
QNetworkReply* q_networkaccessmanager_post2(void* self, void* request, const char* data);
QNetworkReply* q_networkaccessmanager_put(void* self, void* request, void* data);
QNetworkReply* q_networkaccessmanager_put2(void* self, void* request, const char* data);
QNetworkReply* q_networkaccessmanager_delete_resource(void* self, void* request);
QNetworkReply* q_networkaccessmanager_send_custom_request(void* self, void* request, const char* verb);
QNetworkReply* q_networkaccessmanager_send_custom_request2(void* self, void* request, const char* verb, const char* data);
QNetworkReply* q_networkaccessmanager_post3(void* self, void* request, void* multiPart);
QNetworkReply* q_networkaccessmanager_put3(void* self, void* request, void* multiPart);
QNetworkReply* q_networkaccessmanager_send_custom_request3(void* self, void* request, const char* verb, void* multiPart);
void q_networkaccessmanager_connect_to_host_encrypted(void* self, const char* hostName);
void q_networkaccessmanager_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, void* sslConfiguration, const char* peerName);
void q_networkaccessmanager_connect_to_host(void* self, const char* hostName);
void q_networkaccessmanager_set_redirect_policy(void* self, int64_t policy);
int64_t q_networkaccessmanager_redirect_policy(void* self);
bool q_networkaccessmanager_auto_delete_replies(void* self);
void q_networkaccessmanager_set_auto_delete_replies(void* self, bool autoDelete);
int32_t q_networkaccessmanager_transfer_timeout(void* self);
void q_networkaccessmanager_set_transfer_timeout(void* self);
void q_networkaccessmanager_proxy_authentication_required(void* self, void* proxy, void* authenticator);
void q_networkaccessmanager_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));
void q_networkaccessmanager_authentication_required(void* self, void* reply, void* authenticator);
void q_networkaccessmanager_on_authentication_required(void* self, void (*slot)(void*, void*, void*));
void q_networkaccessmanager_finished(void* self, void* reply);
void q_networkaccessmanager_on_finished(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_encrypted(void* self, void* reply);
void q_networkaccessmanager_on_encrypted(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_ssl_errors(void* self, void* reply, void* errors[]);
void q_networkaccessmanager_on_ssl_errors(void* self, void (*slot)(void*, void*, void*));
void q_networkaccessmanager_pre_shared_key_authentication_required(void* self, void* reply, void* authenticator);
void q_networkaccessmanager_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*));
QNetworkReply* q_networkaccessmanager_create_request(void* self, int64_t op, void* request, void* outgoingData);
void q_networkaccessmanager_on_create_request(void* self, QNetworkReply* (*slot)(void*, int64_t, void*, void*));
QNetworkReply* q_networkaccessmanager_qbase_create_request(void* self, int64_t op, void* request, void* outgoingData);
const char** q_networkaccessmanager_supported_schemes_implementation(void* self);
void q_networkaccessmanager_on_supported_schemes_implementation(void* self, const char** (*slot)());
const char** q_networkaccessmanager_qbase_supported_schemes_implementation(void* self);
const char* q_networkaccessmanager_tr2(const char* s, const char* c);
const char* q_networkaccessmanager_tr3(const char* s, const char* c, int n);
void q_networkaccessmanager_enable_strict_transport_security_store2(void* self, bool enabled, const char* storeDir);
QNetworkReply* q_networkaccessmanager_send_custom_request32(void* self, void* request, const char* verb, void* data);
void q_networkaccessmanager_connect_to_host_encrypted22(void* self, const char* hostName, unsigned short port);
void q_networkaccessmanager_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, void* sslConfiguration);
void q_networkaccessmanager_connect_to_host2(void* self, const char* hostName, unsigned short port);
void q_networkaccessmanager_set_transfer_timeout1(void* self, int timeout);
const char* q_networkaccessmanager_object_name(void* self);
void q_networkaccessmanager_set_object_name(void* self, const char* name);
bool q_networkaccessmanager_is_widget_type(void* self);
bool q_networkaccessmanager_is_window_type(void* self);
bool q_networkaccessmanager_is_quick_item_type(void* self);
bool q_networkaccessmanager_signals_blocked(void* self);
bool q_networkaccessmanager_block_signals(void* self, bool b);
QThread* q_networkaccessmanager_thread(void* self);
void q_networkaccessmanager_move_to_thread(void* self, void* thread);
int32_t q_networkaccessmanager_start_timer(void* self, int interval);
void q_networkaccessmanager_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_networkaccessmanager_children(void* self);
void q_networkaccessmanager_set_parent(void* self, void* parent);
void q_networkaccessmanager_install_event_filter(void* self, void* filterObj);
void q_networkaccessmanager_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_networkaccessmanager_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_networkaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_networkaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_networkaccessmanager_disconnect_with_q_meta_object_connection(void* param1);
void q_networkaccessmanager_dump_object_tree(void* self);
void q_networkaccessmanager_dump_object_info(void* self);
bool q_networkaccessmanager_set_property(void* self, const char* name, void* value);
QVariant* q_networkaccessmanager_property(void* self, const char* name);
const char** q_networkaccessmanager_dynamic_property_names(void* self);
QBindingStorage* q_networkaccessmanager_binding_storage(void* self);
QBindingStorage* q_networkaccessmanager_binding_storage2(void* self);
void q_networkaccessmanager_destroyed(void* self);
void q_networkaccessmanager_on_destroyed(void* self, void (*slot)(void*));
QObject* q_networkaccessmanager_parent(void* self);
bool q_networkaccessmanager_inherits(void* self, const char* classname);
void q_networkaccessmanager_delete_later(void* self);
int32_t q_networkaccessmanager_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_networkaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_networkaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_networkaccessmanager_destroyed1(void* self, void* param1);
void q_networkaccessmanager_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_networkaccessmanager_event(void* self, void* event);
bool q_networkaccessmanager_qbase_event(void* self, void* event);
void q_networkaccessmanager_on_event(void* self, bool (*slot)(void*, void*));
bool q_networkaccessmanager_event_filter(void* self, void* watched, void* event);
bool q_networkaccessmanager_qbase_event_filter(void* self, void* watched, void* event);
void q_networkaccessmanager_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_networkaccessmanager_timer_event(void* self, void* event);
void q_networkaccessmanager_qbase_timer_event(void* self, void* event);
void q_networkaccessmanager_on_timer_event(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_child_event(void* self, void* event);
void q_networkaccessmanager_qbase_child_event(void* self, void* event);
void q_networkaccessmanager_on_child_event(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_custom_event(void* self, void* event);
void q_networkaccessmanager_qbase_custom_event(void* self, void* event);
void q_networkaccessmanager_on_custom_event(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_connect_notify(void* self, void* signal);
void q_networkaccessmanager_qbase_connect_notify(void* self, void* signal);
void q_networkaccessmanager_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_networkaccessmanager_disconnect_notify(void* self, void* signal);
void q_networkaccessmanager_qbase_disconnect_notify(void* self, void* signal);
void q_networkaccessmanager_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_networkaccessmanager_sender(void* self);
QObject* q_networkaccessmanager_qbase_sender(void* self);
void q_networkaccessmanager_on_sender(void* self, QObject* (*slot)());
int32_t q_networkaccessmanager_sender_signal_index(void* self);
int32_t q_networkaccessmanager_qbase_sender_signal_index(void* self);
void q_networkaccessmanager_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_networkaccessmanager_receivers(void* self, const char* signal);
int32_t q_networkaccessmanager_qbase_receivers(void* self, const char* signal);
void q_networkaccessmanager_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_networkaccessmanager_is_signal_connected(void* self, void* signal);
bool q_networkaccessmanager_qbase_is_signal_connected(void* self, void* signal);
void q_networkaccessmanager_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_networkaccessmanager_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html#types

typedef enum {
    QNETWORKACCESSMANAGER_OPERATION_HEADOPERATION = 1,
    QNETWORKACCESSMANAGER_OPERATION_GETOPERATION = 2,
    QNETWORKACCESSMANAGER_OPERATION_PUTOPERATION = 3,
    QNETWORKACCESSMANAGER_OPERATION_POSTOPERATION = 4,
    QNETWORKACCESSMANAGER_OPERATION_DELETEOPERATION = 5,
    QNETWORKACCESSMANAGER_OPERATION_CUSTOMOPERATION = 6,
    QNETWORKACCESSMANAGER_OPERATION_UNKNOWNOPERATION = 0
} QNetworkAccessManager__Operation;

#endif
