#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEPROFILE_H
#define WEBENGINE_LIBQQUICKWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html)

/// q_quickwebengineprofile_new constructs a new QQuickWebEngineProfile object.
///
QQuickWebEngineProfile* q_quickwebengineprofile_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html)

/// q_quickwebengineprofile_new2 constructs a new QQuickWebEngineProfile object.
///
/// @param parent QObject*
///
QQuickWebEngineProfile* q_quickwebengineprofile_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuickWebEngineProfile*
///
const QMetaObject* q_quickwebengineprofile_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWebEngineProfile*
/// @param callback const QMetaObject* func(const QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuickWebEngineProfile*
///
const QMetaObject* q_quickwebengineprofile_super_meta_object(const void* self);

/// @param self QQuickWebEngineProfile*
/// @param param1 const char*
///
void* q_quickwebengineprofile_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void* func(QQuickWebEngineProfile* self, const char* param1)
///
void q_quickwebengineprofile_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickWebEngineProfile*
/// @param param1 const char*
///
void* q_quickwebengineprofile_super_metacast(void* self, const char* param1);

/// @param self QQuickWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwebengineprofile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickWebEngineProfile*
/// @param callback int32_t func(QQuickWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickwebengineprofile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwebengineprofile_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickwebengineprofile_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_storage_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setStorageName)
///
/// @param self QQuickWebEngineProfile*
/// @param name const char*
///
void q_quickwebengineprofile_set_storage_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isOffTheRecord)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_off_the_record(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setOffTheRecord)
///
/// @param self QQuickWebEngineProfile*
/// @param offTheRecord bool
///
void q_quickwebengineprofile_set_off_the_record(void* self, bool offTheRecord);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_persistent_storage_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentStoragePath)
///
/// @param self QQuickWebEngineProfile*
/// @param path const char*
///
void q_quickwebengineprofile_set_persistent_storage_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_cache_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setCachePath)
///
/// @param self QQuickWebEngineProfile*
/// @param path const char*
///
void q_quickwebengineprofile_set_cache_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgent)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_http_user_agent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpUserAgent)
///
/// @param self QQuickWebEngineProfile*
/// @param userAgent const char*
///
void q_quickwebengineprofile_set_http_user_agent(void* self, const char* userAgent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheType)
///
/// @param self const QQuickWebEngineProfile*
///
/// @return enum QQuickWebEngineProfile__HttpCacheType
///
int32_t q_quickwebengineprofile_http_cache_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpCacheType)
///
/// @param self QQuickWebEngineProfile*
/// @param httpCacheType enum QQuickWebEngineProfile__HttpCacheType
///
void q_quickwebengineprofile_set_http_cache_type(void* self, int32_t httpCacheType);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicy)
///
/// @param self const QQuickWebEngineProfile*
///
/// @return enum QQuickWebEngineProfile__PersistentCookiesPolicy
///
int32_t q_quickwebengineprofile_persistent_cookies_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentCookiesPolicy)
///
/// @param self QQuickWebEngineProfile*
/// @param persistentCookiesPolicy enum QQuickWebEngineProfile__PersistentCookiesPolicy
///
void q_quickwebengineprofile_set_persistent_cookies_policy(void* self, int32_t persistentCookiesPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicy)
///
/// @param self const QQuickWebEngineProfile*
///
/// @return enum QQuickWebEngineProfile__PersistentPermissionsPolicy
///
uint8_t q_quickwebengineprofile_persistent_permissions_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentPermissionsPolicy)
///
/// @param self QQuickWebEngineProfile*
/// @param persistentPermissionsPolicy enum QQuickWebEngineProfile__PersistentPermissionsPolicy
///
void q_quickwebengineprofile_set_persistent_permissions_policy(void* self, uint8_t persistentPermissionsPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSize)
///
/// @param self const QQuickWebEngineProfile*
///
int32_t q_quickwebengineprofile_http_cache_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpCacheMaximumSize)
///
/// @param self QQuickWebEngineProfile*
/// @param maxSize int
///
void q_quickwebengineprofile_set_http_cache_maximum_size(void* self, int maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_http_accept_language(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpAcceptLanguage)
///
/// @param self QQuickWebEngineProfile*
/// @param httpAcceptLanguage const char*
///
void q_quickwebengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cookieStore)
///
/// @param self const QQuickWebEngineProfile*
///
QWebEngineCookieStore* q_quickwebengineprofile_cookie_store(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setUrlRequestInterceptor)
///
/// @param self QQuickWebEngineProfile*
/// @param interceptor QWebEngineUrlRequestInterceptor*
///
void q_quickwebengineprofile_set_url_request_interceptor(void* self, void* interceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#urlSchemeHandler)
///
/// @param self const QQuickWebEngineProfile*
/// @param param1 const char*
///
const QWebEngineUrlSchemeHandler* q_quickwebengineprofile_url_scheme_handler(const void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#installUrlSchemeHandler)
///
/// @param self QQuickWebEngineProfile*
/// @param scheme const char*
/// @param param2 QWebEngineUrlSchemeHandler*
///
void q_quickwebengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeUrlScheme)
///
/// @param self QQuickWebEngineProfile*
/// @param scheme const char*
///
void q_quickwebengineprofile_remove_url_scheme(void* self, const char* scheme);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeUrlSchemeHandler)
///
/// @param self QQuickWebEngineProfile*
/// @param param1 QWebEngineUrlSchemeHandler*
///
void q_quickwebengineprofile_remove_url_scheme_handler(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeAllUrlSchemeHandlers)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_remove_all_url_scheme_handlers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCache)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_clear_http_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setSpellCheckLanguages)
///
/// @param self QQuickWebEngineProfile*
/// @param languages const char**
///
void q_quickwebengineprofile_set_spell_check_languages(void* self, const char* languages[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguages)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char** q_quickwebengineprofile_spell_check_languages(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setSpellCheckEnabled)
///
/// @param self QQuickWebEngineProfile*
/// @param enabled bool
///
void q_quickwebengineprofile_set_spell_check_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isSpellCheckEnabled)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_spell_check_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_download_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setDownloadPath)
///
/// @param self QQuickWebEngineProfile*
/// @param path const char*
///
void q_quickwebengineprofile_set_download_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isPushServiceEnabled)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_push_service_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPushServiceEnabled)
///
/// @param self QQuickWebEngineProfile*
/// @param enable bool
///
void q_quickwebengineprofile_set_push_service_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clientCertificateStore)
///
/// @param self QQuickWebEngineProfile*
///
QWebEngineClientCertificateStore* q_quickwebengineprofile_client_certificate_store(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clientHints)
///
/// @param self const QQuickWebEngineProfile*
///
QWebEngineClientHints* q_quickwebengineprofile_client_hints(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#queryPermission)
///
/// @param self const QQuickWebEngineProfile*
/// @param securityOrigin QUrl*
/// @param permissionType enum QWebEnginePermission__PermissionType
///
QWebEnginePermission* q_quickwebengineprofile_query_permission(const void* self, const void* securityOrigin, uint8_t permissionType);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listAllPermissions)
///
/// @param self const QQuickWebEngineProfile*
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_quickwebengineprofile_list_all_permissions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listPermissionsForOrigin)
///
/// @param self const QQuickWebEngineProfile*
/// @param securityOrigin QUrl*
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_quickwebengineprofile_list_permissions_for_origin(const void* self, const void* securityOrigin);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listPermissionsForPermissionType)
///
/// @param self const QQuickWebEngineProfile*
/// @param permissionType enum QWebEnginePermission__PermissionType
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_quickwebengineprofile_list_permissions_for_permission_type(const void* self, uint8_t permissionType);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#defaultProfile)
///
QQuickWebEngineProfile* q_quickwebengineprofile_default_profile();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageNameChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_storage_name_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageNameChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_storage_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#offTheRecordChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_off_the_record_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#offTheRecordChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_off_the_record_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePathChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_persistent_storage_path_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePathChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_persistent_storage_path_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePathChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_cache_path_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePathChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_cache_path_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgentChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_http_user_agent_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgentChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_http_user_agent_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheTypeChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_http_cache_type_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheTypeChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_http_cache_type_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicyChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_persistent_cookies_policy_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicyChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_persistent_cookies_policy_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSizeChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_http_cache_maximum_size_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSizeChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_http_cache_maximum_size_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguageChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_http_accept_language_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguageChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_http_accept_language_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguagesChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_spell_check_languages_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguagesChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_spell_check_languages_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckEnabledChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_spell_check_enabled_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckEnabledChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_spell_check_enabled_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPathChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_download_path_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPathChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_download_path_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#pushServiceEnabledChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_push_service_enabled_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#pushServiceEnabledChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_push_service_enabled_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_clear_http_cache_completed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_clear_http_cache_completed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicyChanged)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_persistent_permissions_policy_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicyChanged)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_persistent_permissions_policy_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadRequested)
///
/// @param self QQuickWebEngineProfile*
/// @param download QQuickWebEngineDownloadRequest*
///
void q_quickwebengineprofile_download_requested(void* self, void* download);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadRequested)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download)
///
void q_quickwebengineprofile_on_download_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadFinished)
///
/// @param self QQuickWebEngineProfile*
/// @param download QQuickWebEngineDownloadRequest*
///
void q_quickwebengineprofile_download_finished(void* self, void* download);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadFinished)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download)
///
void q_quickwebengineprofile_on_download_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#presentNotification)
///
/// @param self QQuickWebEngineProfile*
/// @param notification QWebEngineNotification*
///
void q_quickwebengineprofile_present_notification(void* self, void* notification);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#presentNotification)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QWebEngineNotification* notification)
///
void q_quickwebengineprofile_on_present_notification(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickwebengineprofile_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickwebengineprofile_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char* q_quickwebengineprofile_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickWebEngineProfile*
/// @param name const char*
///
void q_quickwebengineprofile_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickWebEngineProfile*
/// @param b bool
///
bool q_quickwebengineprofile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuickWebEngineProfile*
///
QThread* q_quickwebengineprofile_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickWebEngineProfile*
/// @param thread QThread*
///
bool q_quickwebengineprofile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param interval int
///
int32_t q_quickwebengineprofile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param time int64_t of nanoseconds
///
int32_t q_quickwebengineprofile_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param id int
///
void q_quickwebengineprofile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param id enum Qt__TimerId
///
void q_quickwebengineprofile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuickWebEngineProfile*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickwebengineprofile_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickWebEngineProfile*
/// @param parent QObject*
///
void q_quickwebengineprofile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickWebEngineProfile*
/// @param filterObj QObject*
///
void q_quickwebengineprofile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickWebEngineProfile*
/// @param obj QObject*
///
void q_quickwebengineprofile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickwebengineprofile_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickwebengineprofile_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickwebengineprofile_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebengineprofile_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickwebengineprofile_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
///
bool q_quickwebengineprofile_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
/// @param receiver QObject*
///
bool q_quickwebengineprofile_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickwebengineprofile_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuickWebEngineProfile*
///
void q_quickwebengineprofile_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuickWebEngineProfile*
///
void q_quickwebengineprofile_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickWebEngineProfile*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickwebengineprofile_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuickWebEngineProfile*
/// @param name const char*
///
QVariant* q_quickwebengineprofile_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuickWebEngineProfile*
///
const char** q_quickwebengineprofile_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickWebEngineProfile*
///
QBindingStorage* q_quickwebengineprofile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuickWebEngineProfile*
///
const QBindingStorage* q_quickwebengineprofile_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuickWebEngineProfile*
///
QObject* q_quickwebengineprofile_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuickWebEngineProfile*
/// @param classname const char*
///
bool q_quickwebengineprofile_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwebengineprofile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWebEngineProfile*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwebengineprofile_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebengineprofile_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebengineprofile_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwebengineprofile_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
/// @param signal const char*
///
bool q_quickwebengineprofile_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickwebengineprofile_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebengineprofile_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWebEngineProfile*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwebengineprofile_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineProfile*
/// @param param1 QObject*
///
void q_quickwebengineprofile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QObject* param1)
///
void q_quickwebengineprofile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QEvent*
///
bool q_quickwebengineprofile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QEvent*
///
bool q_quickwebengineprofile_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback bool func(QQuickWebEngineProfile* self, QEvent* event)
///
void q_quickwebengineprofile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwebengineprofile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwebengineprofile_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback bool func(QQuickWebEngineProfile* self, QObject* watched, QEvent* event)
///
void q_quickwebengineprofile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QTimerEvent*
///
void q_quickwebengineprofile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QTimerEvent*
///
void q_quickwebengineprofile_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QTimerEvent* event)
///
void q_quickwebengineprofile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QChildEvent*
///
void q_quickwebengineprofile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QChildEvent*
///
void q_quickwebengineprofile_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QChildEvent* event)
///
void q_quickwebengineprofile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QEvent*
///
void q_quickwebengineprofile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param event QEvent*
///
void q_quickwebengineprofile_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QEvent* event)
///
void q_quickwebengineprofile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_quickwebengineprofile_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_quickwebengineprofile_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QMetaMethod* signal)
///
void q_quickwebengineprofile_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_quickwebengineprofile_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_quickwebengineprofile_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, QMetaMethod* signal)
///
void q_quickwebengineprofile_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
///
QObject* q_quickwebengineprofile_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
///
QObject* q_quickwebengineprofile_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback QObject* func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
///
int32_t q_quickwebengineprofile_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
///
int32_t q_quickwebengineprofile_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback int32_t func(QQuickWebEngineProfile* self)
///
void q_quickwebengineprofile_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
/// @param signal const char*
///
int32_t q_quickwebengineprofile_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
/// @param signal const char*
///
int32_t q_quickwebengineprofile_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback int32_t func(QQuickWebEngineProfile* self, const char* signal)
///
void q_quickwebengineprofile_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
bool q_quickwebengineprofile_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWebEngineProfile*
/// @param signal QMetaMethod*
///
bool q_quickwebengineprofile_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWebEngineProfile*
/// @param callback bool func(QQuickWebEngineProfile* self, QMetaMethod* signal)
///
void q_quickwebengineprofile_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickWebEngineProfile*
/// @param callback void func(QQuickWebEngineProfile* self, const char* objectName)
///
void q_quickwebengineprofile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#dtor.QQuickWebEngineProfile)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickWebEngineProfile*
///
void q_quickwebengineprofile_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#public-types)

typedef enum {
    QQUICKWEBENGINEPROFILE_HTTPCACHETYPE_MEMORYHTTPCACHE = 0,
    QQUICKWEBENGINEPROFILE_HTTPCACHETYPE_DISKHTTPCACHE = 1,
    QQUICKWEBENGINEPROFILE_HTTPCACHETYPE_NOCACHE = 2
} QQuickWebEngineProfile__HttpCacheType;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#public-types)

typedef enum {
    QQUICKWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_NOPERSISTENTCOOKIES = 0,
    QQUICKWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_ALLOWPERSISTENTCOOKIES = 1,
    QQUICKWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_FORCEPERSISTENTCOOKIES = 2
} QQuickWebEngineProfile__PersistentCookiesPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#public-types)

typedef enum {
    QQUICKWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_ASKEVERYTIME = 0,
    QQUICKWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREINMEMORY = 1,
    QQUICKWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREONDISK = 2
} QQuickWebEngineProfile__PersistentPermissionsPolicy;

#endif
