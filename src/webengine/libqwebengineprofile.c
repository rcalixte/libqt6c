#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqwebengineclientcertificatestore.hpp"
#include "libqwebengineclienthints.hpp"
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginedownloadrequest.hpp"
#include "libqwebenginepermission.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginesettings.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "libqwebengineurlschemehandler.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebengineprofile.h"

QWebEngineProfile* q_webengineprofile_new() {
    return QWebEngineProfile_new();
}

QWebEngineProfile* q_webengineprofile_new2(const char* name) {
    return QWebEngineProfile_new2(qstring(name));
}

QWebEngineProfile* q_webengineprofile_new3(void* parent) {
    return QWebEngineProfile_new3((QObject*)parent);
}

QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent) {
    return QWebEngineProfile_new4(qstring(name), (QObject*)parent);
}

const QMetaObject* q_webengineprofile_meta_object(void* self) {
    return QWebEngineProfile_MetaObject((QWebEngineProfile*)self);
}

void* q_webengineprofile_metacast(void* self, const char* param1) {
    return QWebEngineProfile_Metacast((QWebEngineProfile*)self, param1);
}

int32_t q_webengineprofile_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineProfile_Metacall((QWebEngineProfile*)self, param1, param2, param3);
}

void q_webengineprofile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebEngineProfile_OnMetacall((QWebEngineProfile*)self, (intptr_t)callback);
}

int32_t q_webengineprofile_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineProfile_QBaseMetacall((QWebEngineProfile*)self, param1, param2, param3);
}

const char* q_webengineprofile_tr(const char* s) {
    libqt_string _str = QWebEngineProfile_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineprofile_storage_name(void* self) {
    libqt_string _str = QWebEngineProfile_StorageName((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineprofile_is_off_the_record(void* self) {
    return QWebEngineProfile_IsOffTheRecord((QWebEngineProfile*)self);
}

const char* q_webengineprofile_persistent_storage_path(void* self) {
    libqt_string _str = QWebEngineProfile_PersistentStoragePath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineprofile_set_persistent_storage_path(void* self, const char* path) {
    QWebEngineProfile_SetPersistentStoragePath((QWebEngineProfile*)self, qstring(path));
}

const char* q_webengineprofile_cache_path(void* self) {
    libqt_string _str = QWebEngineProfile_CachePath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineprofile_set_cache_path(void* self, const char* path) {
    QWebEngineProfile_SetCachePath((QWebEngineProfile*)self, qstring(path));
}

const char* q_webengineprofile_http_user_agent(void* self) {
    libqt_string _str = QWebEngineProfile_HttpUserAgent((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent) {
    QWebEngineProfile_SetHttpUserAgent((QWebEngineProfile*)self, qstring(userAgent));
}

int32_t q_webengineprofile_http_cache_type(void* self) {
    return QWebEngineProfile_HttpCacheType((QWebEngineProfile*)self);
}

void q_webengineprofile_set_http_cache_type(void* self, int32_t httpCacheType) {
    QWebEngineProfile_SetHttpCacheType((QWebEngineProfile*)self, httpCacheType);
}

void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage) {
    QWebEngineProfile_SetHttpAcceptLanguage((QWebEngineProfile*)self, qstring(httpAcceptLanguage));
}

const char* q_webengineprofile_http_accept_language(void* self) {
    libqt_string _str = QWebEngineProfile_HttpAcceptLanguage((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_webengineprofile_persistent_cookies_policy(void* self) {
    return QWebEngineProfile_PersistentCookiesPolicy((QWebEngineProfile*)self);
}

void q_webengineprofile_set_persistent_cookies_policy(void* self, int32_t persistentCookiesPolicy) {
    QWebEngineProfile_SetPersistentCookiesPolicy((QWebEngineProfile*)self, persistentCookiesPolicy);
}

uint8_t q_webengineprofile_persistent_permissions_policy(void* self) {
    return QWebEngineProfile_PersistentPermissionsPolicy((QWebEngineProfile*)self);
}

void q_webengineprofile_set_persistent_permissions_policy(void* self, uint8_t persistentPermissionsPolicy) {
    QWebEngineProfile_SetPersistentPermissionsPolicy((QWebEngineProfile*)self, persistentPermissionsPolicy);
}

int32_t q_webengineprofile_http_cache_maximum_size(void* self) {
    return QWebEngineProfile_HttpCacheMaximumSize((QWebEngineProfile*)self);
}

void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize) {
    QWebEngineProfile_SetHttpCacheMaximumSize((QWebEngineProfile*)self, maxSize);
}

QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self) {
    return QWebEngineProfile_CookieStore((QWebEngineProfile*)self);
}

void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor) {
    QWebEngineProfile_SetUrlRequestInterceptor((QWebEngineProfile*)self, (QWebEngineUrlRequestInterceptor*)interceptor);
}

void q_webengineprofile_clear_all_visited_links(void* self) {
    QWebEngineProfile_ClearAllVisitedLinks((QWebEngineProfile*)self);
}

void q_webengineprofile_clear_visited_links(void* self, libqt_list urls) {
    QWebEngineProfile_ClearVisitedLinks((QWebEngineProfile*)self, urls);
}

bool q_webengineprofile_visited_links_contains_url(void* self, void* url) {
    return QWebEngineProfile_VisitedLinksContainsUrl((QWebEngineProfile*)self, (QUrl*)url);
}

QWebEngineSettings* q_webengineprofile_settings(void* self) {
    return QWebEngineProfile_Settings((QWebEngineProfile*)self);
}

QWebEngineScriptCollection* q_webengineprofile_scripts(void* self) {
    return QWebEngineProfile_Scripts((QWebEngineProfile*)self);
}

QWebEngineClientHints* q_webengineprofile_client_hints(void* self) {
    return QWebEngineProfile_ClientHints((QWebEngineProfile*)self);
}

const QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(void* self, const char* param1) {
    return QWebEngineProfile_UrlSchemeHandler((QWebEngineProfile*)self, qstring(param1));
}

void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2) {
    QWebEngineProfile_InstallUrlSchemeHandler((QWebEngineProfile*)self, qstring(scheme), (QWebEngineUrlSchemeHandler*)param2);
}

void q_webengineprofile_remove_url_scheme(void* self, const char* scheme) {
    QWebEngineProfile_RemoveUrlScheme((QWebEngineProfile*)self, qstring(scheme));
}

void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1) {
    QWebEngineProfile_RemoveUrlSchemeHandler((QWebEngineProfile*)self, (QWebEngineUrlSchemeHandler*)param1);
}

void q_webengineprofile_remove_all_url_scheme_handlers(void* self) {
    QWebEngineProfile_RemoveAllUrlSchemeHandlers((QWebEngineProfile*)self);
}

void q_webengineprofile_clear_http_cache(void* self) {
    QWebEngineProfile_ClearHttpCache((QWebEngineProfile*)self);
}

void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineprofile_set_spell_check_languages");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i) {
        languages_qstr[i] = qstring(languages[i]);
    }
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    QWebEngineProfile_SetSpellCheckLanguages((QWebEngineProfile*)self, languages_list);
    free(languages_qstr);
}

const char** q_webengineprofile_spell_check_languages(void* self) {
    libqt_list _arr = QWebEngineProfile_SpellCheckLanguages((QWebEngineProfile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineprofile_spell_check_languages");
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

void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled) {
    QWebEngineProfile_SetSpellCheckEnabled((QWebEngineProfile*)self, enabled);
}

bool q_webengineprofile_is_spell_check_enabled(void* self) {
    return QWebEngineProfile_IsSpellCheckEnabled((QWebEngineProfile*)self);
}

const char* q_webengineprofile_download_path(void* self) {
    libqt_string _str = QWebEngineProfile_DownloadPath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineprofile_set_download_path(void* self, const char* path) {
    QWebEngineProfile_SetDownloadPath((QWebEngineProfile*)self, qstring(path));
}

bool q_webengineprofile_is_push_service_enabled(void* self) {
    return QWebEngineProfile_IsPushServiceEnabled((QWebEngineProfile*)self);
}

void q_webengineprofile_set_push_service_enabled(void* self, bool enabled) {
    QWebEngineProfile_SetPushServiceEnabled((QWebEngineProfile*)self, enabled);
}

QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self) {
    return QWebEngineProfile_ClientCertificateStore((QWebEngineProfile*)self);
}

QWebEnginePermission* q_webengineprofile_query_permission(void* self, void* securityOrigin, uint8_t permissionType) {
    return QWebEngineProfile_QueryPermission((QWebEngineProfile*)self, (QUrl*)securityOrigin, permissionType);
}

libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_all_permissions(void* self) {
    libqt_list _arr = QWebEngineProfile_ListAllPermissions((QWebEngineProfile*)self);
    return _arr;
}

libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_permissions_for_origin(void* self, void* securityOrigin) {
    libqt_list _arr = QWebEngineProfile_ListPermissionsForOrigin((QWebEngineProfile*)self, (QUrl*)securityOrigin);
    return _arr;
}

libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_permissions_for_permission_type(void* self, uint8_t permissionType) {
    libqt_list _arr = QWebEngineProfile_ListPermissionsForPermissionType((QWebEngineProfile*)self, permissionType);
    return _arr;
}

QWebEngineProfile* q_webengineprofile_default_profile() {
    return QWebEngineProfile_DefaultProfile();
}

void q_webengineprofile_download_requested(void* self, void* download) {
    QWebEngineProfile_DownloadRequested((QWebEngineProfile*)self, (QWebEngineDownloadRequest*)download);
}

void q_webengineprofile_on_download_requested(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_Connect_DownloadRequested((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_clear_http_cache_completed(void* self) {
    QWebEngineProfile_ClearHttpCacheCompleted((QWebEngineProfile*)self);
}

void q_webengineprofile_on_clear_http_cache_completed(void* self, void (*callback)(void*)) {
    QWebEngineProfile_Connect_ClearHttpCacheCompleted((QWebEngineProfile*)self, (intptr_t)callback);
}

const char* q_webengineprofile_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineProfile_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineprofile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineProfile_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineprofile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineprofile_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineprofile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineprofile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineprofile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineprofile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineprofile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineprofile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webengineprofile_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineprofile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webengineprofile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webengineprofile_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineprofile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineprofile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webengineprofile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineprofile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineprofile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineprofile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineprofile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineprofile_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webengineprofile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineprofile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineprofile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineprofile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineprofile_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineprofile_dynamic_property_names");
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

QBindingStorage* q_webengineprofile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineprofile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineprofile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineprofile_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webengineprofile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineprofile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineprofile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webengineprofile_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webengineprofile_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webengineprofile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webengineprofile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webengineprofile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineprofile_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webengineprofile_event(void* self, void* event) {
    return QWebEngineProfile_Event((QWebEngineProfile*)self, (QEvent*)event);
}

bool q_webengineprofile_qbase_event(void* self, void* event) {
    return QWebEngineProfile_QBaseEvent((QWebEngineProfile*)self, (QEvent*)event);
}

void q_webengineprofile_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebEngineProfile_OnEvent((QWebEngineProfile*)self, (intptr_t)callback);
}

bool q_webengineprofile_event_filter(void* self, void* watched, void* event) {
    return QWebEngineProfile_EventFilter((QWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webengineprofile_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineProfile_QBaseEventFilter((QWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

void q_webengineprofile_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebEngineProfile_OnEventFilter((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_timer_event(void* self, void* event) {
    QWebEngineProfile_TimerEvent((QWebEngineProfile*)self, (QTimerEvent*)event);
}

void q_webengineprofile_qbase_timer_event(void* self, void* event) {
    QWebEngineProfile_QBaseTimerEvent((QWebEngineProfile*)self, (QTimerEvent*)event);
}

void q_webengineprofile_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_OnTimerEvent((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_child_event(void* self, void* event) {
    QWebEngineProfile_ChildEvent((QWebEngineProfile*)self, (QChildEvent*)event);
}

void q_webengineprofile_qbase_child_event(void* self, void* event) {
    QWebEngineProfile_QBaseChildEvent((QWebEngineProfile*)self, (QChildEvent*)event);
}

void q_webengineprofile_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_OnChildEvent((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_custom_event(void* self, void* event) {
    QWebEngineProfile_CustomEvent((QWebEngineProfile*)self, (QEvent*)event);
}

void q_webengineprofile_qbase_custom_event(void* self, void* event) {
    QWebEngineProfile_QBaseCustomEvent((QWebEngineProfile*)self, (QEvent*)event);
}

void q_webengineprofile_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_OnCustomEvent((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_connect_notify(void* self, void* signal) {
    QWebEngineProfile_ConnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_webengineprofile_qbase_connect_notify(void* self, void* signal) {
    QWebEngineProfile_QBaseConnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_webengineprofile_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_OnConnectNotify((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_disconnect_notify(void* self, void* signal) {
    QWebEngineProfile_DisconnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_webengineprofile_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineProfile_QBaseDisconnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_webengineprofile_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineProfile_OnDisconnectNotify((QWebEngineProfile*)self, (intptr_t)callback);
}

QObject* q_webengineprofile_sender(void* self) {
    return QWebEngineProfile_Sender((QWebEngineProfile*)self);
}

QObject* q_webengineprofile_qbase_sender(void* self) {
    return QWebEngineProfile_QBaseSender((QWebEngineProfile*)self);
}

void q_webengineprofile_on_sender(void* self, QObject* (*callback)()) {
    QWebEngineProfile_OnSender((QWebEngineProfile*)self, (intptr_t)callback);
}

int32_t q_webengineprofile_sender_signal_index(void* self) {
    return QWebEngineProfile_SenderSignalIndex((QWebEngineProfile*)self);
}

int32_t q_webengineprofile_qbase_sender_signal_index(void* self) {
    return QWebEngineProfile_QBaseSenderSignalIndex((QWebEngineProfile*)self);
}

void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebEngineProfile_OnSenderSignalIndex((QWebEngineProfile*)self, (intptr_t)callback);
}

int32_t q_webengineprofile_receivers(void* self, const char* signal) {
    return QWebEngineProfile_Receivers((QWebEngineProfile*)self, signal);
}

int32_t q_webengineprofile_qbase_receivers(void* self, const char* signal) {
    return QWebEngineProfile_QBaseReceivers((QWebEngineProfile*)self, signal);
}

void q_webengineprofile_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebEngineProfile_OnReceivers((QWebEngineProfile*)self, (intptr_t)callback);
}

bool q_webengineprofile_is_signal_connected(void* self, void* signal) {
    return QWebEngineProfile_IsSignalConnected((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

bool q_webengineprofile_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineProfile_QBaseIsSignalConnected((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_webengineprofile_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebEngineProfile_OnIsSignalConnected((QWebEngineProfile*)self, (intptr_t)callback);
}

void q_webengineprofile_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webengineprofile_delete(void* self) {
    QWebEngineProfile_Delete((QWebEngineProfile*)(self));
}
