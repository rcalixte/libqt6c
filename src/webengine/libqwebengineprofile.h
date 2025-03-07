#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H

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
#include "libqwebengineclientcertificatestore.h"
#include "libqwebenginecookiestore.h"
#include "libqwebenginedownloadrequest.h"
#include "libqwebenginescriptcollection.h"
#include "libqwebenginesettings.h"
#include "libqwebengineurlrequestinterceptor.h"
#include "libqwebengineurlschemehandler.h"

QWebEngineProfile* q_webengineprofile_new();
QWebEngineProfile* q_webengineprofile_new2(const char* name);
QWebEngineProfile* q_webengineprofile_new3(void* parent);
QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent);
QMetaObject* q_webengineprofile_meta_object(void* self);
void* q_webengineprofile_metacast(void* self, const char* param1);
int32_t q_webengineprofile_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webengineprofile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webengineprofile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webengineprofile_tr(const char* s);
const char* q_webengineprofile_storage_name(void* self);
bool q_webengineprofile_is_off_the_record(void* self);
const char* q_webengineprofile_persistent_storage_path(void* self);
void q_webengineprofile_set_persistent_storage_path(void* self, const char* path);
const char* q_webengineprofile_cache_path(void* self);
void q_webengineprofile_set_cache_path(void* self, const char* path);
const char* q_webengineprofile_http_user_agent(void* self);
void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent);
int64_t q_webengineprofile_http_cache_type(void* self);
void q_webengineprofile_set_http_cache_type(void* self, int64_t httpCacheType);
void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage);
const char* q_webengineprofile_http_accept_language(void* self);
int64_t q_webengineprofile_persistent_cookies_policy(void* self);
void q_webengineprofile_set_persistent_cookies_policy(void* self, int64_t persistentCookiesPolicy);
int32_t q_webengineprofile_http_cache_maximum_size(void* self);
void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize);
QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self);
void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor);
void q_webengineprofile_clear_all_visited_links(void* self);
void q_webengineprofile_clear_visited_links(void* self, void* urls[]);
bool q_webengineprofile_visited_links_contains_url(void* self, void* url);
QWebEngineSettings* q_webengineprofile_settings(void* self);
QWebEngineScriptCollection* q_webengineprofile_scripts(void* self);
QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(void* self, const char* param1);
void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2);
void q_webengineprofile_remove_url_scheme(void* self, const char* scheme);
void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1);
void q_webengineprofile_remove_all_url_scheme_handlers(void* self);
void q_webengineprofile_clear_http_cache(void* self);
void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[]);
const char** q_webengineprofile_spell_check_languages(void* self);
void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled);
bool q_webengineprofile_is_spell_check_enabled(void* self);
const char* q_webengineprofile_download_path(void* self);
void q_webengineprofile_set_download_path(void* self, const char* path);
QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self);
QWebEngineProfile* q_webengineprofile_default_profile();
void q_webengineprofile_download_requested(void* self, void* download);
void q_webengineprofile_on_download_requested(void* self, void (*slot)(void*, void*));
const char* q_webengineprofile_tr2(const char* s, const char* c);
const char* q_webengineprofile_tr3(const char* s, const char* c, int n);
const char* q_webengineprofile_object_name(void* self);
void q_webengineprofile_set_object_name(void* self, const char* name);
bool q_webengineprofile_is_widget_type(void* self);
bool q_webengineprofile_is_window_type(void* self);
bool q_webengineprofile_is_quick_item_type(void* self);
bool q_webengineprofile_signals_blocked(void* self);
bool q_webengineprofile_block_signals(void* self, bool b);
QThread* q_webengineprofile_thread(void* self);
void q_webengineprofile_move_to_thread(void* self, void* thread);
int32_t q_webengineprofile_start_timer(void* self, int interval);
void q_webengineprofile_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webengineprofile_children(void* self);
void q_webengineprofile_set_parent(void* self, void* parent);
void q_webengineprofile_install_event_filter(void* self, void* filterObj);
void q_webengineprofile_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webengineprofile_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webengineprofile_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webengineprofile_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webengineprofile_disconnect_with_q_meta_object_connection(void* param1);
void q_webengineprofile_dump_object_tree(void* self);
void q_webengineprofile_dump_object_info(void* self);
bool q_webengineprofile_set_property(void* self, const char* name, void* value);
QVariant* q_webengineprofile_property(void* self, const char* name);
const char** q_webengineprofile_dynamic_property_names(void* self);
QBindingStorage* q_webengineprofile_binding_storage(void* self);
QBindingStorage* q_webengineprofile_binding_storage2(void* self);
void q_webengineprofile_destroyed(void* self);
void q_webengineprofile_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webengineprofile_parent(void* self);
bool q_webengineprofile_inherits(void* self, const char* classname);
void q_webengineprofile_delete_later(void* self);
int32_t q_webengineprofile_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webengineprofile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webengineprofile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webengineprofile_destroyed1(void* self, void* param1);
void q_webengineprofile_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webengineprofile_event(void* self, void* event);
bool q_webengineprofile_qbase_event(void* self, void* event);
void q_webengineprofile_on_event(void* self, bool (*slot)(void*, void*));
bool q_webengineprofile_event_filter(void* self, void* watched, void* event);
bool q_webengineprofile_qbase_event_filter(void* self, void* watched, void* event);
void q_webengineprofile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webengineprofile_timer_event(void* self, void* event);
void q_webengineprofile_qbase_timer_event(void* self, void* event);
void q_webengineprofile_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webengineprofile_child_event(void* self, void* event);
void q_webengineprofile_qbase_child_event(void* self, void* event);
void q_webengineprofile_on_child_event(void* self, void (*slot)(void*, void*));
void q_webengineprofile_custom_event(void* self, void* event);
void q_webengineprofile_qbase_custom_event(void* self, void* event);
void q_webengineprofile_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webengineprofile_connect_notify(void* self, void* signal);
void q_webengineprofile_qbase_connect_notify(void* self, void* signal);
void q_webengineprofile_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webengineprofile_disconnect_notify(void* self, void* signal);
void q_webengineprofile_qbase_disconnect_notify(void* self, void* signal);
void q_webengineprofile_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_webengineprofile_sender(void* self);
QObject* q_webengineprofile_qbase_sender(void* self);
void q_webengineprofile_on_sender(void* self, QObject* (*slot)());
int32_t q_webengineprofile_sender_signal_index(void* self);
int32_t q_webengineprofile_qbase_sender_signal_index(void* self);
void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webengineprofile_receivers(void* self, const char* signal);
int32_t q_webengineprofile_qbase_receivers(void* self, const char* signal);
void q_webengineprofile_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webengineprofile_is_signal_connected(void* self, void* signal);
bool q_webengineprofile_qbase_is_signal_connected(void* self, void* signal);
void q_webengineprofile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_webengineprofile_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineprofile.html#types

typedef enum {
    QWEBENGINEPROFILE_HTTPCACHETYPE_MEMORYHTTPCACHE = 0,
    QWEBENGINEPROFILE_HTTPCACHETYPE_DISKHTTPCACHE = 1,
    QWEBENGINEPROFILE_HTTPCACHETYPE_NOCACHE = 2
} QWebEngineProfile__HttpCacheType;

typedef enum {
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_NOPERSISTENTCOOKIES = 0,
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_ALLOWPERSISTENTCOOKIES = 1,
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_FORCEPERSISTENTCOOKIES = 2
} QWebEngineProfile__PersistentCookiesPolicy;

#endif
