#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineprofile.html

/// q_webengineprofile_new constructs a new QWebEngineProfile object.
///
QWebEngineProfile* q_webengineprofile_new();

/// q_webengineprofile_new2 constructs a new QWebEngineProfile object.
///
/// @param name const char*
QWebEngineProfile* q_webengineprofile_new2(const char* name);

/// q_webengineprofile_new3 constructs a new QWebEngineProfile object.
///
/// @param parent QObject*
QWebEngineProfile* q_webengineprofile_new3(void* parent);

/// q_webengineprofile_new4 constructs a new QWebEngineProfile object.
///
/// @param name const char*
/// @param parent QObject*
QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineProfile*
const QMetaObject* q_webengineprofile_meta_object(void* self);

/// @param self QWebEngineProfile*
/// @param param1 const char*
void* q_webengineprofile_metacast(void* self, const char* param1);

/// @param self QWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webengineprofile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t fn(QWebEngineProfile*, enum QMetaObject__Call, int, void*)
void q_webengineprofile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebEngineProfile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webengineprofile_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webengineprofile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_storage_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_off_the_record(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_persistent_storage_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
void q_webengineprofile_set_persistent_storage_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_cache_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
void q_webengineprofile_set_cache_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_http_user_agent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
///
/// @param self QWebEngineProfile*
/// @param userAgent const char*
void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
///
/// @param self QWebEngineProfile*
///
/// @return enum QWebEngineProfile__HttpCacheType
int32_t q_webengineprofile_http_cache_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
///
/// @param self QWebEngineProfile*
/// @param httpCacheType enum QWebEngineProfile__HttpCacheType
void q_webengineprofile_set_http_cache_type(void* self, int32_t httpCacheType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
///
/// @param self QWebEngineProfile*
/// @param httpAcceptLanguage const char*
void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_http_accept_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
///
/// @param self QWebEngineProfile*
///
/// @return enum QWebEngineProfile__PersistentCookiesPolicy
int32_t q_webengineprofile_persistent_cookies_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
///
/// @param self QWebEngineProfile*
/// @param persistentCookiesPolicy enum QWebEngineProfile__PersistentCookiesPolicy
void q_webengineprofile_set_persistent_cookies_policy(void* self, int32_t persistentCookiesPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentPermissionsPolicy)
///
/// @param self QWebEngineProfile*
///
/// @return enum QWebEngineProfile__PersistentPermissionsPolicy
uint8_t q_webengineprofile_persistent_permissions_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentPermissionsPolicy)
///
/// @param self QWebEngineProfile*
/// @param persistentPermissionsPolicy enum QWebEngineProfile__PersistentPermissionsPolicy
void q_webengineprofile_set_persistent_permissions_policy(void* self, uint8_t persistentPermissionsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
///
/// @param self QWebEngineProfile*
int32_t q_webengineprofile_http_cache_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
///
/// @param self QWebEngineProfile*
/// @param maxSize int
void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
///
/// @param self QWebEngineProfile*
QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
///
/// @param self QWebEngineProfile*
/// @param interceptor QWebEngineUrlRequestInterceptor*
void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_clear_all_visited_links(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
///
/// @param self QWebEngineProfile*
/// @param urls libqt_list /* of QUrl* */
void q_webengineprofile_clear_visited_links(void* self, libqt_list urls);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
///
/// @param self QWebEngineProfile*
/// @param url QUrl*
bool q_webengineprofile_visited_links_contains_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
///
/// @param self QWebEngineProfile*
QWebEngineSettings* q_webengineprofile_settings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
///
/// @param self QWebEngineProfile*
QWebEngineScriptCollection* q_webengineprofile_scripts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientHints)
///
/// @param self QWebEngineProfile*
QWebEngineClientHints* q_webengineprofile_client_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
///
/// @param self QWebEngineProfile*
/// @param param1 const char*
const QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
///
/// @param self QWebEngineProfile*
/// @param scheme const char*
/// @param param2 QWebEngineUrlSchemeHandler*
void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
///
/// @param self QWebEngineProfile*
/// @param scheme const char*
void q_webengineprofile_remove_url_scheme(void* self, const char* scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
///
/// @param self QWebEngineProfile*
/// @param param1 QWebEngineUrlSchemeHandler*
void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_remove_all_url_scheme_handlers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_clear_http_cache(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
///
/// @param self QWebEngineProfile*
/// @param languages const char**
void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char** q_webengineprofile_spell_check_languages(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
///
/// @param self QWebEngineProfile*
/// @param enabled bool
void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_spell_check_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_download_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
///
/// @param self QWebEngineProfile*
/// @param path const char*
void q_webengineprofile_set_download_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isPushServiceEnabled)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_push_service_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPushServiceEnabled)
///
/// @param self QWebEngineProfile*
/// @param enabled bool
void q_webengineprofile_set_push_service_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
///
/// @param self QWebEngineProfile*
QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#queryPermission)
///
/// @param self QWebEngineProfile*
/// @param securityOrigin QUrl*
/// @param permissionType enum QWebEnginePermission__PermissionType
QWebEnginePermission* q_webengineprofile_query_permission(void* self, void* securityOrigin, uint8_t permissionType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listAllPermissions)
///
/// @param self QWebEngineProfile*
libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_all_permissions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForOrigin)
///
/// @param self QWebEngineProfile*
/// @param securityOrigin QUrl*
libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_permissions_for_origin(void* self, void* securityOrigin);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForPermissionType)
///
/// @param self QWebEngineProfile*
/// @param permissionType enum QWebEnginePermission__PermissionType
libqt_list /* of QWebEnginePermission* */ q_webengineprofile_list_permissions_for_permission_type(void* self, uint8_t permissionType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
///
QWebEngineProfile* q_webengineprofile_default_profile();

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// @param self QWebEngineProfile*
/// @param download QWebEngineDownloadRequest*
void q_webengineprofile_download_requested(void* self, void* download);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QWebEngineDownloadRequest*)
void q_webengineprofile_on_download_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_clear_http_cache_completed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*)
void q_webengineprofile_on_clear_http_cache_completed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webengineprofile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webengineprofile_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char* q_webengineprofile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineProfile*
/// @param name char*
void q_webengineprofile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineProfile*
bool q_webengineprofile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineProfile*
/// @param b bool
bool q_webengineprofile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineProfile*
QThread* q_webengineprofile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineProfile*
/// @param thread QThread*
bool q_webengineprofile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param interval int
int32_t q_webengineprofile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineProfile*
/// @param id int
void q_webengineprofile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineProfile*
/// @param id enum Qt__TimerId
void q_webengineprofile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineProfile*
libqt_list /* of QObject* */ q_webengineprofile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineProfile*
/// @param parent QObject*
void q_webengineprofile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineProfile*
/// @param filterObj QObject*
void q_webengineprofile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineProfile*
/// @param obj QObject*
void q_webengineprofile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webengineprofile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webengineprofile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webengineprofile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webengineprofile_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineProfile*
/// @param name const char*
/// @param value QVariant*
bool q_webengineprofile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineProfile*
/// @param name const char*
QVariant* q_webengineprofile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineProfile*
const char** q_webengineprofile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineProfile*
QBindingStorage* q_webengineprofile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineProfile*
const QBindingStorage* q_webengineprofile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*)
void q_webengineprofile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineProfile*
QObject* q_webengineprofile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineProfile*
/// @param classname const char*
bool q_webengineprofile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineProfile*
void q_webengineprofile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineProfile*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webengineprofile_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineProfile*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webengineprofile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_webengineprofile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineProfile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_webengineprofile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param param1 QObject*
void q_webengineprofile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QObject*)
void q_webengineprofile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
bool q_webengineprofile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
bool q_webengineprofile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool fn(QWebEngineProfile*, QEvent*)
void q_webengineprofile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
bool q_webengineprofile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param watched QObject*
/// @param event QEvent*
bool q_webengineprofile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool fn(QWebEngineProfile*, QObject*, QEvent*)
void q_webengineprofile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QTimerEvent*
void q_webengineprofile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QTimerEvent*
void q_webengineprofile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QTimerEvent*)
void q_webengineprofile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QChildEvent*
void q_webengineprofile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QChildEvent*
void q_webengineprofile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QChildEvent*)
void q_webengineprofile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
void q_webengineprofile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param event QEvent*
void q_webengineprofile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QEvent*)
void q_webengineprofile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
void q_webengineprofile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
void q_webengineprofile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QMetaMethod*)
void q_webengineprofile_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
void q_webengineprofile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
void q_webengineprofile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, QMetaMethod*)
void q_webengineprofile_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
QObject* q_webengineprofile_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
QObject* q_webengineprofile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback QObject* fn()
void q_webengineprofile_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
int32_t q_webengineprofile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
int32_t q_webengineprofile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t fn()
void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal const char*
int32_t q_webengineprofile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal const char*
int32_t q_webengineprofile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback int32_t fn(QWebEngineProfile*, const char*)
void q_webengineprofile_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
bool q_webengineprofile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param signal QMetaMethod*
bool q_webengineprofile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineProfile*
/// @param callback bool fn(QWebEngineProfile*, QMetaMethod*)
void q_webengineprofile_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineProfile*
/// @param callback void fn(QWebEngineProfile*, const char*)
void q_webengineprofile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineProfile*
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

typedef enum {
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_ASKEVERYTIME = 0,
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREINMEMORY = 1,
    QWEBENGINEPROFILE_PERSISTENTPERMISSIONSPOLICY_STOREONDISK = 2
} QWebEngineProfile__PersistentPermissionsPolicy;

#endif
