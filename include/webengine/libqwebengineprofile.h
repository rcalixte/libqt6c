#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqurl.h"
#include "libqwebengineclientcertificatestore.h"
#include "libqwebenginecookiestore.h"
#include "libqwebenginedownloadrequest.h"
#include "libqwebenginescriptcollection.h"
#include "libqwebenginesettings.h"
#include "libqwebengineurlrequestinterceptor.h"
#include "libqwebengineurlschemehandler.h"

/// https://doc.qt.io/qt-6/qwebengineprofile.html

/// q_webengineprofile_new constructs a new QWebEngineProfile object.
///
///
QWebEngineProfile* q_webengineprofile_new();

/// q_webengineprofile_new2 constructs a new QWebEngineProfile object.
///
/// ``` const char* name ```
QWebEngineProfile* q_webengineprofile_new2(const char* name);

/// q_webengineprofile_new3 constructs a new QWebEngineProfile object.
///
/// ``` QObject* parent ```
QWebEngineProfile* q_webengineprofile_new3(void* parent);

/// q_webengineprofile_new4 constructs a new QWebEngineProfile object.
///
/// ``` const char* name, QObject* parent ```
QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineProfile* self ```
const QMetaObject* q_webengineprofile_meta_object(void* self);

/// ``` QWebEngineProfile* self, const char* param1 ```
void* q_webengineprofile_metacast(void* self, const char* param1);

/// ``` QWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineprofile_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)(QWebEngineProfile*, enum QMetaObject__Call, int, void*) ```
void q_webengineprofile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineprofile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineprofile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_storage_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_off_the_record(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_persistent_storage_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_persistent_storage_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_cache_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_cache_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_http_user_agent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
///
/// ``` QWebEngineProfile* self, const char* userAgent ```
void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
///
/// ``` QWebEngineProfile* self ```
int64_t q_webengineprofile_http_cache_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
///
/// ``` QWebEngineProfile* self, enum QWebEngineProfile__HttpCacheType httpCacheType ```
void q_webengineprofile_set_http_cache_type(void* self, int64_t httpCacheType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
///
/// ``` QWebEngineProfile* self, const char* httpAcceptLanguage ```
void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_http_accept_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
///
/// ``` QWebEngineProfile* self ```
int64_t q_webengineprofile_persistent_cookies_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
///
/// ``` QWebEngineProfile* self, enum QWebEngineProfile__PersistentCookiesPolicy persistentCookiesPolicy ```
void q_webengineprofile_set_persistent_cookies_policy(void* self, int64_t persistentCookiesPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_http_cache_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
///
/// ``` QWebEngineProfile* self, int maxSize ```
void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
///
/// ``` QWebEngineProfile* self ```
QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
///
/// ``` QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor ```
void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_clear_all_visited_links(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
///
/// ``` QWebEngineProfile* self, libqt_list /* of QUrl* */ urls ```
void q_webengineprofile_clear_visited_links(void* self, libqt_list urls);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
///
/// ``` QWebEngineProfile* self, QUrl* url ```
bool q_webengineprofile_visited_links_contains_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
///
/// ``` QWebEngineProfile* self ```
QWebEngineSettings* q_webengineprofile_settings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
///
/// ``` QWebEngineProfile* self ```
QWebEngineScriptCollection* q_webengineprofile_scripts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
///
/// ``` QWebEngineProfile* self, const char* param1 ```
const QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
///
/// ``` QWebEngineProfile* self, const char* scheme, QWebEngineUrlSchemeHandler* param2 ```
void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
///
/// ``` QWebEngineProfile* self, const char* scheme ```
void q_webengineprofile_remove_url_scheme(void* self, const char* scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
///
/// ``` QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1 ```
void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_remove_all_url_scheme_handlers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_clear_http_cache(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
///
/// ``` QWebEngineProfile* self, const char* languages[] ```
void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
///
/// ``` QWebEngineProfile* self ```
const char** q_webengineprofile_spell_check_languages(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
///
/// ``` QWebEngineProfile* self, bool enabled ```
void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_spell_check_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_download_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_download_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
///
/// ``` QWebEngineProfile* self ```
QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
///
///
QWebEngineProfile* q_webengineprofile_default_profile();

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// ``` QWebEngineProfile* self, QWebEngineDownloadRequest* download ```
void q_webengineprofile_download_requested(void* self, void* download);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QWebEngineDownloadRequest*) ```
void q_webengineprofile_on_download_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineprofile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineprofile_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineProfile* self, char* name ```
void q_webengineprofile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineProfile* self, bool b ```
bool q_webengineprofile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineProfile* self ```
QThread* q_webengineprofile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineProfile* self, QThread* thread ```
void q_webengineprofile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineProfile* self, int interval ```
int32_t q_webengineprofile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineProfile* self, int id ```
void q_webengineprofile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineProfile* self ```
libqt_list /* of QObject* */ q_webengineprofile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineProfile* self, QObject* parent ```
void q_webengineprofile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineProfile* self, QObject* filterObj ```
void q_webengineprofile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineProfile* self, QObject* obj ```
void q_webengineprofile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineprofile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineProfile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineprofile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineprofile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineprofile_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineProfile* self, const char* name, QVariant* value ```
bool q_webengineprofile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineProfile* self, const char* name ```
QVariant* q_webengineprofile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineProfile* self ```
const char** q_webengineprofile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineProfile* self ```
QBindingStorage* q_webengineprofile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineProfile* self ```
const QBindingStorage* q_webengineprofile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self, void (*slot)(QObject*) ```
void q_webengineprofile_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineProfile* self, const char* classname ```
bool q_webengineprofile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineProfile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineprofile_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineprofile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineProfile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineprofile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self, QObject* param1 ```
void q_webengineprofile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self, void (*slot)(QObject*, QObject*) ```
void q_webengineprofile_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
bool q_webengineprofile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
bool q_webengineprofile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QEvent*) ```
void q_webengineprofile_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* watched, QEvent* event ```
bool q_webengineprofile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* watched, QEvent* event ```
bool q_webengineprofile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QObject*, QEvent*) ```
void q_webengineprofile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QTimerEvent* event ```
void q_webengineprofile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QTimerEvent* event ```
void q_webengineprofile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QTimerEvent*) ```
void q_webengineprofile_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QChildEvent* event ```
void q_webengineprofile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QChildEvent* event ```
void q_webengineprofile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QChildEvent*) ```
void q_webengineprofile_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
void q_webengineprofile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
void q_webengineprofile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QEvent*) ```
void q_webengineprofile_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* (*slot)() ```
void q_webengineprofile_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)() ```
void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, const char* signal ```
int32_t q_webengineprofile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, const char* signal ```
int32_t q_webengineprofile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)(QWebEngineProfile*, const char*) ```
void q_webengineprofile_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
bool q_webengineprofile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
bool q_webengineprofile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineProfile* self, void (*slot)(QObject*, const char*) ```
void q_webengineprofile_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineProfile* self ```
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
