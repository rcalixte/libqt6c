#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqquickwebenginedownloadrequest.hpp"
#include "../libqurl.hpp"
#include "libqwebengineclientcertificatestore.hpp"
#include "libqwebengineclienthints.hpp"
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginenotification.hpp"
#include "libqwebenginepermission.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "libqwebengineurlschemehandler.hpp"
#include "libqquickwebengineprofile.hpp"
#include "libqquickwebengineprofile.h"

QQuickWebEngineProfile* q_quickwebengineprofile_new() {
    return QQuickWebEngineProfile_New();
}

QQuickWebEngineProfile* q_quickwebengineprofile_new2(void* parent) {
    return QQuickWebEngineProfile_New2((QObject*)parent);
}

const QMetaObject* q_quickwebengineprofile_meta_object(const void* self) {
    return QQuickWebEngineProfile_MetaObject((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QQuickWebEngineProfile_OnMetaObject((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

const QMetaObject* q_quickwebengineprofile_super_meta_object(const void* self) {
    return QQuickWebEngineProfile_SuperMetaObject((QQuickWebEngineProfile*)self);
}

void* q_quickwebengineprofile_metacast(void* self, const char* param1) {
    return QQuickWebEngineProfile_Metacast((QQuickWebEngineProfile*)self, param1);
}

void q_quickwebengineprofile_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickWebEngineProfile_OnMetacast((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void* q_quickwebengineprofile_super_metacast(void* self, const char* param1) {
    return QQuickWebEngineProfile_SuperMetacast((QQuickWebEngineProfile*)self, param1);
}

int32_t q_quickwebengineprofile_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWebEngineProfile_Metacall((QQuickWebEngineProfile*)self, param1, param2, param3);
}

void q_quickwebengineprofile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickWebEngineProfile_OnMetacall((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

int32_t q_quickwebengineprofile_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWebEngineProfile_SuperMetacall((QQuickWebEngineProfile*)self, param1, param2, param3);
}

const char* q_quickwebengineprofile_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwebengineprofile_storage_name(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_StorageName((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_storage_name(void* self, const char* name) {
    QQuickWebEngineProfile_SetStorageName((QQuickWebEngineProfile*)self, qstring(name));
}

bool q_quickwebengineprofile_is_off_the_record(const void* self) {
    return QQuickWebEngineProfile_IsOffTheRecord((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_off_the_record(void* self, bool offTheRecord) {
    QQuickWebEngineProfile_SetOffTheRecord((QQuickWebEngineProfile*)self, offTheRecord);
}

const char* q_quickwebengineprofile_persistent_storage_path(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_PersistentStoragePath((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_persistent_storage_path(void* self, const char* path) {
    QQuickWebEngineProfile_SetPersistentStoragePath((QQuickWebEngineProfile*)self, qstring(path));
}

const char* q_quickwebengineprofile_cache_path(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_CachePath((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_cache_path(void* self, const char* path) {
    QQuickWebEngineProfile_SetCachePath((QQuickWebEngineProfile*)self, qstring(path));
}

const char* q_quickwebengineprofile_http_user_agent(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_HttpUserAgent((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_http_user_agent(void* self, const char* userAgent) {
    QQuickWebEngineProfile_SetHttpUserAgent((QQuickWebEngineProfile*)self, qstring(userAgent));
}

int32_t q_quickwebengineprofile_http_cache_type(const void* self) {
    return QQuickWebEngineProfile_HttpCacheType((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_http_cache_type(void* self, int32_t httpCacheType) {
    QQuickWebEngineProfile_SetHttpCacheType((QQuickWebEngineProfile*)self, httpCacheType);
}

int32_t q_quickwebengineprofile_persistent_cookies_policy(const void* self) {
    return QQuickWebEngineProfile_PersistentCookiesPolicy((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_persistent_cookies_policy(void* self, int32_t persistentCookiesPolicy) {
    QQuickWebEngineProfile_SetPersistentCookiesPolicy((QQuickWebEngineProfile*)self, persistentCookiesPolicy);
}

uint8_t q_quickwebengineprofile_persistent_permissions_policy(const void* self) {
    return QQuickWebEngineProfile_PersistentPermissionsPolicy((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_persistent_permissions_policy(void* self, uint8_t persistentPermissionsPolicy) {
    QQuickWebEngineProfile_SetPersistentPermissionsPolicy((QQuickWebEngineProfile*)self, persistentPermissionsPolicy);
}

int32_t q_quickwebengineprofile_http_cache_maximum_size(const void* self) {
    return QQuickWebEngineProfile_HttpCacheMaximumSize((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_http_cache_maximum_size(void* self, int maxSize) {
    QQuickWebEngineProfile_SetHttpCacheMaximumSize((QQuickWebEngineProfile*)self, maxSize);
}

const char* q_quickwebengineprofile_http_accept_language(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_HttpAcceptLanguage((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage) {
    QQuickWebEngineProfile_SetHttpAcceptLanguage((QQuickWebEngineProfile*)self, qstring(httpAcceptLanguage));
}

QWebEngineCookieStore* q_quickwebengineprofile_cookie_store(const void* self) {
    return QQuickWebEngineProfile_CookieStore((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_url_request_interceptor(void* self, void* interceptor) {
    QQuickWebEngineProfile_SetUrlRequestInterceptor((QQuickWebEngineProfile*)self, (QWebEngineUrlRequestInterceptor*)interceptor);
}

const QWebEngineUrlSchemeHandler* q_quickwebengineprofile_url_scheme_handler(const void* self, const char* param1) {
    return QQuickWebEngineProfile_UrlSchemeHandler((QQuickWebEngineProfile*)self, qstring(param1));
}

void q_quickwebengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2) {
    QQuickWebEngineProfile_InstallUrlSchemeHandler((QQuickWebEngineProfile*)self, qstring(scheme), (QWebEngineUrlSchemeHandler*)param2);
}

void q_quickwebengineprofile_remove_url_scheme(void* self, const char* scheme) {
    QQuickWebEngineProfile_RemoveUrlScheme((QQuickWebEngineProfile*)self, qstring(scheme));
}

void q_quickwebengineprofile_remove_url_scheme_handler(void* self, void* param1) {
    QQuickWebEngineProfile_RemoveUrlSchemeHandler((QQuickWebEngineProfile*)self, (QWebEngineUrlSchemeHandler*)param1);
}

void q_quickwebengineprofile_remove_all_url_scheme_handlers(void* self) {
    QQuickWebEngineProfile_RemoveAllUrlSchemeHandlers((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_clear_http_cache(void* self) {
    QQuickWebEngineProfile_ClearHttpCache((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_spell_check_languages(void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwebengineprofile_set_spell_check_languages\n");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i)
        languages_qstr[i] = qstring(languages[i]);
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    QQuickWebEngineProfile_SetSpellCheckLanguages((QQuickWebEngineProfile*)self, languages_list);
    free(languages_qstr);
}

const char** q_quickwebengineprofile_spell_check_languages(const void* self) {
    libqt_list _arr = QQuickWebEngineProfile_SpellCheckLanguages((QQuickWebEngineProfile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwebengineprofile_spell_check_languages\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_quickwebengineprofile_set_spell_check_enabled(void* self, bool enabled) {
    QQuickWebEngineProfile_SetSpellCheckEnabled((QQuickWebEngineProfile*)self, enabled);
}

bool q_quickwebengineprofile_is_spell_check_enabled(const void* self) {
    return QQuickWebEngineProfile_IsSpellCheckEnabled((QQuickWebEngineProfile*)self);
}

const char* q_quickwebengineprofile_download_path(const void* self) {
    libqt_string _str = QQuickWebEngineProfile_DownloadPath((QQuickWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_download_path(void* self, const char* path) {
    QQuickWebEngineProfile_SetDownloadPath((QQuickWebEngineProfile*)self, qstring(path));
}

bool q_quickwebengineprofile_is_push_service_enabled(const void* self) {
    return QQuickWebEngineProfile_IsPushServiceEnabled((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_set_push_service_enabled(void* self, bool enable) {
    QQuickWebEngineProfile_SetPushServiceEnabled((QQuickWebEngineProfile*)self, enable);
}

QWebEngineClientCertificateStore* q_quickwebengineprofile_client_certificate_store(void* self) {
    return QQuickWebEngineProfile_ClientCertificateStore((QQuickWebEngineProfile*)self);
}

QWebEngineClientHints* q_quickwebengineprofile_client_hints(const void* self) {
    return QQuickWebEngineProfile_ClientHints((QQuickWebEngineProfile*)self);
}

QWebEnginePermission* q_quickwebengineprofile_query_permission(const void* self, const void* securityOrigin, uint8_t permissionType) {
    return QQuickWebEngineProfile_QueryPermission((QQuickWebEngineProfile*)self, (QUrl*)securityOrigin, permissionType);
}

libqt_list /* of QWebEnginePermission* */ q_quickwebengineprofile_list_all_permissions(const void* self) {
    libqt_list _arr = QQuickWebEngineProfile_ListAllPermissions((QQuickWebEngineProfile*)self);
    return _arr;
}

libqt_list /* of QWebEnginePermission* */ q_quickwebengineprofile_list_permissions_for_origin(const void* self, const void* securityOrigin) {
    libqt_list _arr = QQuickWebEngineProfile_ListPermissionsForOrigin((QQuickWebEngineProfile*)self, (QUrl*)securityOrigin);
    return _arr;
}

libqt_list /* of QWebEnginePermission* */ q_quickwebengineprofile_list_permissions_for_permission_type(const void* self, uint8_t permissionType) {
    libqt_list _arr = QQuickWebEngineProfile_ListPermissionsForPermissionType((QQuickWebEngineProfile*)self, permissionType);
    return _arr;
}

QQuickWebEngineProfile* q_quickwebengineprofile_default_profile() {
    return QQuickWebEngineProfile_DefaultProfile();
}

void q_quickwebengineprofile_storage_name_changed(void* self) {
    QQuickWebEngineProfile_StorageNameChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_storage_name_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_StorageNameChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_off_the_record_changed(void* self) {
    QQuickWebEngineProfile_OffTheRecordChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_off_the_record_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_OffTheRecordChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_persistent_storage_path_changed(void* self) {
    QQuickWebEngineProfile_PersistentStoragePathChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_persistent_storage_path_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_PersistentStoragePathChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_cache_path_changed(void* self) {
    QQuickWebEngineProfile_CachePathChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_cache_path_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_CachePathChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_http_user_agent_changed(void* self) {
    QQuickWebEngineProfile_HttpUserAgentChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_http_user_agent_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_HttpUserAgentChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_http_cache_type_changed(void* self) {
    QQuickWebEngineProfile_HttpCacheTypeChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_http_cache_type_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_HttpCacheTypeChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_persistent_cookies_policy_changed(void* self) {
    QQuickWebEngineProfile_PersistentCookiesPolicyChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_persistent_cookies_policy_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_PersistentCookiesPolicyChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_http_cache_maximum_size_changed(void* self) {
    QQuickWebEngineProfile_HttpCacheMaximumSizeChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_http_cache_maximum_size_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_HttpCacheMaximumSizeChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_http_accept_language_changed(void* self) {
    QQuickWebEngineProfile_HttpAcceptLanguageChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_http_accept_language_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_HttpAcceptLanguageChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_spell_check_languages_changed(void* self) {
    QQuickWebEngineProfile_SpellCheckLanguagesChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_spell_check_languages_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_SpellCheckLanguagesChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_spell_check_enabled_changed(void* self) {
    QQuickWebEngineProfile_SpellCheckEnabledChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_spell_check_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_SpellCheckEnabledChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_download_path_changed(void* self) {
    QQuickWebEngineProfile_DownloadPathChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_download_path_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_DownloadPathChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_push_service_enabled_changed(void* self) {
    QQuickWebEngineProfile_PushServiceEnabledChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_push_service_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_PushServiceEnabledChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_clear_http_cache_completed(void* self) {
    QQuickWebEngineProfile_ClearHttpCacheCompleted((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_clear_http_cache_completed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_ClearHttpCacheCompleted((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_persistent_permissions_policy_changed(void* self) {
    QQuickWebEngineProfile_PersistentPermissionsPolicyChanged((QQuickWebEngineProfile*)self);
}

void q_quickwebengineprofile_on_persistent_permissions_policy_changed(void* self, void (*callback)(void*)) {
    QQuickWebEngineProfile_Connect_PersistentPermissionsPolicyChanged((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_download_requested(void* self, void* download) {
    QQuickWebEngineProfile_DownloadRequested((QQuickWebEngineProfile*)self, (QQuickWebEngineDownloadRequest*)download);
}

void q_quickwebengineprofile_on_download_requested(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_Connect_DownloadRequested((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_download_finished(void* self, void* download) {
    QQuickWebEngineProfile_DownloadFinished((QQuickWebEngineProfile*)self, (QQuickWebEngineDownloadRequest*)download);
}

void q_quickwebengineprofile_on_download_finished(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_Connect_DownloadFinished((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_present_notification(void* self, void* notification) {
    QQuickWebEngineProfile_PresentNotification((QQuickWebEngineProfile*)self, (QWebEngineNotification*)notification);
}

void q_quickwebengineprofile_on_present_notification(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_Connect_PresentNotification((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

const char* q_quickwebengineprofile_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwebengineprofile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwebengineprofile_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwebengineprofile_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickwebengineprofile_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickwebengineprofile_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickwebengineprofile_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickwebengineprofile_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickwebengineprofile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickwebengineprofile_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickwebengineprofile_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickwebengineprofile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickwebengineprofile_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickwebengineprofile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickwebengineprofile_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickwebengineprofile_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickwebengineprofile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickwebengineprofile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickwebengineprofile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickwebengineprofile_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickwebengineprofile_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickwebengineprofile_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickwebengineprofile_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickwebengineprofile_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickwebengineprofile_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickwebengineprofile_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickwebengineprofile_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickwebengineprofile_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickwebengineprofile_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickwebengineprofile_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickwebengineprofile_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickwebengineprofile_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwebengineprofile_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_quickwebengineprofile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickwebengineprofile_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickwebengineprofile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickwebengineprofile_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickwebengineprofile_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickwebengineprofile_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickwebengineprofile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickwebengineprofile_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickwebengineprofile_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickwebengineprofile_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickwebengineprofile_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickwebengineprofile_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickwebengineprofile_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickwebengineprofile_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickwebengineprofile_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickwebengineprofile_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickwebengineprofile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickwebengineprofile_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickwebengineprofile_event(void* self, void* event) {
    return QQuickWebEngineProfile_Event((QQuickWebEngineProfile*)self, (QEvent*)event);
}

bool q_quickwebengineprofile_super_event(void* self, void* event) {
    return QQuickWebEngineProfile_SuperEvent((QQuickWebEngineProfile*)self, (QEvent*)event);
}

void q_quickwebengineprofile_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickWebEngineProfile_OnEvent((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

bool q_quickwebengineprofile_event_filter(void* self, void* watched, void* event) {
    return QQuickWebEngineProfile_EventFilter((QQuickWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickwebengineprofile_super_event_filter(void* self, void* watched, void* event) {
    return QQuickWebEngineProfile_SuperEventFilter((QQuickWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickwebengineprofile_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickWebEngineProfile_OnEventFilter((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_timer_event(void* self, void* event) {
    QQuickWebEngineProfile_TimerEvent((QQuickWebEngineProfile*)self, (QTimerEvent*)event);
}

void q_quickwebengineprofile_super_timer_event(void* self, void* event) {
    QQuickWebEngineProfile_SuperTimerEvent((QQuickWebEngineProfile*)self, (QTimerEvent*)event);
}

void q_quickwebengineprofile_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_OnTimerEvent((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_child_event(void* self, void* event) {
    QQuickWebEngineProfile_ChildEvent((QQuickWebEngineProfile*)self, (QChildEvent*)event);
}

void q_quickwebengineprofile_super_child_event(void* self, void* event) {
    QQuickWebEngineProfile_SuperChildEvent((QQuickWebEngineProfile*)self, (QChildEvent*)event);
}

void q_quickwebengineprofile_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_OnChildEvent((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_custom_event(void* self, void* event) {
    QQuickWebEngineProfile_CustomEvent((QQuickWebEngineProfile*)self, (QEvent*)event);
}

void q_quickwebengineprofile_super_custom_event(void* self, void* event) {
    QQuickWebEngineProfile_SuperCustomEvent((QQuickWebEngineProfile*)self, (QEvent*)event);
}

void q_quickwebengineprofile_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickWebEngineProfile_OnCustomEvent((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_connect_notify(void* self, const void* signal) {
    QQuickWebEngineProfile_ConnectNotify((QQuickWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_quickwebengineprofile_super_connect_notify(void* self, const void* signal) {
    QQuickWebEngineProfile_SuperConnectNotify((QQuickWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_quickwebengineprofile_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuickWebEngineProfile_OnConnectNotify((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_disconnect_notify(void* self, const void* signal) {
    QQuickWebEngineProfile_DisconnectNotify((QQuickWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_quickwebengineprofile_super_disconnect_notify(void* self, const void* signal) {
    QQuickWebEngineProfile_SuperDisconnectNotify((QQuickWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_quickwebengineprofile_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuickWebEngineProfile_OnDisconnectNotify((QQuickWebEngineProfile*)self, (intptr_t)callback);
}

QObject* q_quickwebengineprofile_sender(const void* self) {
    return QQuickWebEngineProfile_Sender((QQuickWebEngineProfile*)self);
}

int32_t q_quickwebengineprofile_sender_signal_index(const void* self) {
    return QQuickWebEngineProfile_SenderSignalIndex((QQuickWebEngineProfile*)self);
}

int32_t q_quickwebengineprofile_receivers(const void* self, const char* signal) {
    return QQuickWebEngineProfile_Receivers((QQuickWebEngineProfile*)self, signal);
}

bool q_quickwebengineprofile_is_signal_connected(const void* self, const void* signal) {
    return QQuickWebEngineProfile_IsSignalConnected((QQuickWebEngineProfile*)self, (QMetaMethod*)signal);
}

void q_quickwebengineprofile_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickwebengineprofile_delete(void* self) {
    QQuickWebEngineProfile_Delete((QQuickWebEngineProfile*)(self));
}
