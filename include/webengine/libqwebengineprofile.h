#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEPROFILE_H
#define WEBENGINE_LIBQWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)

/// q_webengineprofile_new constructs a new QWebEngineProfile object.
///
QWebEngineProfile* q_webengineprofile_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)

/// q_webengineprofile_new2 constructs a new QWebEngineProfile object.
///
/// @param name const char*
///
QWebEngineProfile* q_webengineprofile_new2(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)

/// q_webengineprofile_new3 constructs a new QWebEngineProfile object.
///
/// @param parent QObject*
///
QWebEngineProfile* q_webengineprofile_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)

/// q_webengineprofile_new4 constructs a new QWebEngineProfile object.
///
/// @param name const char*
/// @param parent QObject*
///
QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebEngineProfile*
///
const QMetaObject* q_webengineprofile_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineProfile*
/// @param callback const QMetaObject* func(const QWebEngineProfile* self)
///
void q_webengineprofile_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QWebEngineProfile*
///
const QMetaObject* q_webengineprofile_super_meta_object(const void* self);

/// @param self QWebEngineProfile*
/// @param param1 const char*
///
void* q_webengineprofile_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWebEngineProfile*
/// @param callback void* func(QWebEngineProfile* self, const char* param1)
///
void q_webengineprofile_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWebEngineProfile*
/// @param param1 const char*
///
void* q_webengineprofile_super_metacast(void* self, const char* param1);

/// @param self QWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineprofile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t func(QWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_webengineprofile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineprofile_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webengineprofile_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_storage_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_off_the_record(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_persistent_storage_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
///
void q_webengineprofile_set_persistent_storage_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_cache_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
///
void q_webengineprofile_set_cache_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_http_user_agent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
///
/// @param self QWebEngineProfile*
/// @param userAgent const char*
///
void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
///
/// @param self const QWebEngineProfile*
///
/// @return enum QWebEngineProfile__HttpCacheType
///
int32_t q_webengineprofile_http_cache_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
///
/// @param self QWebEngineProfile*
/// @param httpCacheType enum QWebEngineProfile__HttpCacheType
///
void q_webengineprofile_set_http_cache_type(void* self, int32_t httpCacheType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
///
/// @param self QWebEngineProfile*
/// @param httpAcceptLanguage const char*
///
void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_http_accept_language(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
///
/// @param self const QWebEngineProfile*
///
/// @return enum QWebEngineProfile__PersistentCookiesPolicy
///
int32_t q_webengineprofile_persistent_cookies_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
///
/// @param self QWebEngineProfile*
/// @param persistentCookiesPolicy enum QWebEngineProfile__PersistentCookiesPolicy
///
void q_webengineprofile_set_persistent_cookies_policy(void* self, int32_t persistentCookiesPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentPermissionsPolicy)
///
/// @param self const QWebEngineProfile*
///
/// @return enum QWebEngineProfile__PersistentPermissionsPolicy
///
uint8_t q_webengineprofile_persistent_permissions_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentPermissionsPolicy)
///
/// @param self QWebEngineProfile*
/// @param persistentPermissionsPolicy enum QWebEngineProfile__PersistentPermissionsPolicy
///
void q_webengineprofile_set_persistent_permissions_policy(void* self, uint8_t persistentPermissionsPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
///
/// @param self const QWebEngineProfile*
///
int32_t q_webengineprofile_http_cache_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
///
/// @param self QWebEngineProfile*
/// @param maxSize int
///
void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
///
/// @param self QWebEngineProfile*
///
QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
///
/// @param self QWebEngineProfile*
/// @param interceptor QWebEngineUrlRequestInterceptor*
///
void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_clear_all_visited_links(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
///
/// @param self QWebEngineProfile*
/// @param urls libqt_list of QUrl*
///
void q_webengineprofile_clear_visited_links(void* self, libqt_list urls);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
///
/// @param self const QWebEngineProfile*
/// @param url QUrl*
///
bool q_webengineprofile_visited_links_contains_url(const void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
///
/// @param self const QWebEngineProfile*
///
QWebEngineSettings* q_webengineprofile_settings(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
///
/// @param self const QWebEngineProfile*
///
QWebEngineScriptCollection* q_webengineprofile_scripts(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientHints)
///
/// @param self const QWebEngineProfile*
///
QWebEngineClientHints* q_webengineprofile_client_hints(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
///
/// @param self const QWebEngineProfile*
/// @param param1 const char*
///
const QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(const void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
///
/// @param self QWebEngineProfile*
/// @param scheme const char*
/// @param param2 QWebEngineUrlSchemeHandler*
///
void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
///
/// @param self QWebEngineProfile*
/// @param scheme const char*
///
void q_webengineprofile_remove_url_scheme(void* self, const char* scheme);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
///
/// @param self QWebEngineProfile*
/// @param param1 QWebEngineUrlSchemeHandler*
///
void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_remove_all_url_scheme_handlers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_clear_http_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
///
/// @param self QWebEngineProfile*
/// @param languages const char**
///
void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineProfile*
///
const char** q_webengineprofile_spell_check_languages(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
///
/// @param self QWebEngineProfile*
/// @param enabled bool
///
void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_spell_check_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_download_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
///
void q_webengineprofile_set_download_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isPushServiceEnabled)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_push_service_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPushServiceEnabled)
///
/// @param self QWebEngineProfile*
/// @param enabled bool
///
void q_webengineprofile_set_push_service_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setNotificationPresenter)
///
/// @param self QWebEngineProfile*
/// @param notificationPresenter void func(QWebEngineNotification* param1)
///
void q_webengineprofile_set_notification_presenter(void* self, void (*notificationPresenter)(void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
///
/// @param self QWebEngineProfile*
///
QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#requestIconForPageURL)
///
/// @param self const QWebEngineProfile*
/// @param url QUrl*
/// @param desiredSizeInPixel int
/// @param iconAvailableCallback void func(QIcon* param1, QUrl* param2, QUrl* param3)
///
void q_webengineprofile_request_icon_for_page_u_r_l(const void* self, const void* url, int desiredSizeInPixel, void (*iconAvailableCallback)(const void* funcparam1, const void* funcparam2, const void* funcparam3));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#requestIconForIconURL)
///
/// @param self const QWebEngineProfile*
/// @param url QUrl*
/// @param desiredSizeInPixel int
/// @param iconAvailableCallback void func(QIcon* param1, QUrl* param2)
///
void q_webengineprofile_request_icon_for_icon_u_r_l(const void* self, const void* url, int desiredSizeInPixel, void (*iconAvailableCallback)(const void* funcparam1, const void* funcparam2));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#queryPermission)
///
/// @param self const QWebEngineProfile*
/// @param securityOrigin QUrl*
/// @param permissionType enum QWebEnginePermission__PermissionType
///
QWebEnginePermission* q_webengineprofile_query_permission(const void* self, const void* securityOrigin, uint8_t permissionType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listAllPermissions)
///
/// @param self const QWebEngineProfile*
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_webengineprofile_list_all_permissions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForOrigin)
///
/// @param self const QWebEngineProfile*
/// @param securityOrigin QUrl*
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_webengineprofile_list_permissions_for_origin(const void* self, const void* securityOrigin);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForPermissionType)
///
/// @param self const QWebEngineProfile*
/// @param permissionType enum QWebEnginePermission__PermissionType
///
/// @return libqt_list of QWebEnginePermission*
///
libqt_list q_webengineprofile_list_permissions_for_permission_type(const void* self, uint8_t permissionType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
///
QWebEngineProfile* q_webengineprofile_default_profile();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// @param self QWebEngineProfile*
/// @param download QWebEngineDownloadRequest*
///
void q_webengineprofile_download_requested(void* self, void* download);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QWebEngineDownloadRequest* download)
///
void q_webengineprofile_on_download_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_clear_http_cache_completed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self)
///
void q_webengineprofile_on_clear_http_cache_completed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webengineprofile_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webengineprofile_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineProfile*
///
const char* q_webengineprofile_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineProfile*
/// @param name const char*
///
void q_webengineprofile_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineProfile*
/// @param b bool
///
bool q_webengineprofile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebEngineProfile*
///
QThread* q_webengineprofile_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineProfile*
/// @param thread QThread*
///
bool q_webengineprofile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param interval int
///
int32_t q_webengineprofile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param time int64_t of nanoseconds
///
int32_t q_webengineprofile_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineProfile*
/// @param id int
///
void q_webengineprofile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineProfile*
/// @param id enum Qt__TimerId
///
void q_webengineprofile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebEngineProfile*
///
/// @return libqt_list of QObject*
///
libqt_list q_webengineprofile_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineProfile*
/// @param parent QObject*
///
void q_webengineprofile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineProfile*
/// @param filterObj QObject*
///
void q_webengineprofile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineProfile*
/// @param obj QObject*
///
void q_webengineprofile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webengineprofile_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webengineprofile_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webengineprofile_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineprofile_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webengineprofile_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
///
bool q_webengineprofile_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
/// @param receiver QObject*
///
bool q_webengineprofile_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webengineprofile_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineProfile*
///
void q_webengineprofile_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineProfile*
///
void q_webengineprofile_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineProfile*
/// @param name const char*
/// @param value QVariant*
///
bool q_webengineprofile_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineProfile*
/// @param name const char*
///
QVariant* q_webengineprofile_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineProfile*
///
const char** q_webengineprofile_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineProfile*
///
QBindingStorage* q_webengineprofile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebEngineProfile*
///
const QBindingStorage* q_webengineprofile_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self)
///
void q_webengineprofile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebEngineProfile*
///
QObject* q_webengineprofile_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebEngineProfile*
/// @param classname const char*
///
bool q_webengineprofile_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineprofile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineprofile_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webengineprofile_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webengineprofile_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webengineprofile_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
/// @param signal const char*
///
bool q_webengineprofile_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webengineprofile_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineprofile_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineProfile*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineprofile_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param param1 QObject*
///
void q_webengineprofile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QObject* param1)
///
void q_webengineprofile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
///
bool q_webengineprofile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
///
bool q_webengineprofile_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool func(QWebEngineProfile* self, QEvent* event)
///
void q_webengineprofile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineprofile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineprofile_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool func(QWebEngineProfile* self, QObject* watched, QEvent* event)
///
void q_webengineprofile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QTimerEvent*
///
void q_webengineprofile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QTimerEvent*
///
void q_webengineprofile_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QTimerEvent* event)
///
void q_webengineprofile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QChildEvent*
///
void q_webengineprofile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QChildEvent*
///
void q_webengineprofile_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QChildEvent* event)
///
void q_webengineprofile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
///
void q_webengineprofile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
///
void q_webengineprofile_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QEvent* event)
///
void q_webengineprofile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_webengineprofile_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_webengineprofile_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QMetaMethod* signal)
///
void q_webengineprofile_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_webengineprofile_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
///
void q_webengineprofile_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, QMetaMethod* signal)
///
void q_webengineprofile_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebEngineProfile*
///
QObject* q_webengineprofile_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebEngineProfile*
///
QObject* q_webengineprofile_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback QObject* func(QWebEngineProfile* self)
///
void q_webengineprofile_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebEngineProfile*
///
int32_t q_webengineprofile_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebEngineProfile*
///
int32_t q_webengineprofile_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t func(QWebEngineProfile* self)
///
void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebEngineProfile*
/// @param signal const char*
///
int32_t q_webengineprofile_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebEngineProfile*
/// @param signal const char*
///
int32_t q_webengineprofile_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t func(QWebEngineProfile* self, const char* signal)
///
void q_webengineprofile_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebEngineProfile*
/// @param signal QMetaMethod*
///
bool q_webengineprofile_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebEngineProfile*
/// @param signal QMetaMethod*
///
bool q_webengineprofile_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool func(QWebEngineProfile* self, QMetaMethod* signal)
///
void q_webengineprofile_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineProfile*
/// @param callback void func(QWebEngineProfile* self, const char* objectName)
///
void q_webengineprofile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineProfile*
///
void q_webengineprofile_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#public-types)

typedef enum {
    QWEBENGINEPROFILE_HTTPCACHETYPE_MEMORYHTTPCACHE = 0,
    QWEBENGINEPROFILE_HTTPCACHETYPE_DISKHTTPCACHE = 1,
    QWEBENGINEPROFILE_HTTPCACHETYPE_NOCACHE = 2
} QWebEngineProfile__HttpCacheType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#public-types)

typedef enum {
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_NOPERSISTENTCOOKIES = 0,
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_ALLOWPERSISTENTCOOKIES = 1,
    QWEBENGINEPROFILE_PERSISTENTCOOKIESPOLICY_FORCEPERSISTENTCOOKIES = 2
} QWebEngineProfile__PersistentCookiesPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#public-types)

typedef enum {
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_ASKEVERYTIME = 0,
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREINMEMORY = 1,
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREONDISK = 2
} QWebEngineProfile__PersistentPermissionsPolicy;

#endif
