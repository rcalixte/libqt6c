#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqwebengineclientcertificatestore.hpp"
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginedownloadrequest.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginesettings.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "libqwebengineurlschemehandler.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebengineprofile.h"

/// https://doc.qt.io/qt-6/qwebengineprofile.html

/// q_webengineprofile_new constructs a new QWebEngineProfile object.
///
///
QWebEngineProfile* q_webengineprofile_new() {
    return QWebEngineProfile_new();
}

/// q_webengineprofile_new2 constructs a new QWebEngineProfile object.
///
/// ``` const char* name ```
QWebEngineProfile* q_webengineprofile_new2(const char* name) {
    return QWebEngineProfile_new2(qstring(name));
}

/// q_webengineprofile_new3 constructs a new QWebEngineProfile object.
///
/// ``` QObject* parent ```
QWebEngineProfile* q_webengineprofile_new3(void* parent) {
    return QWebEngineProfile_new3((QObject*)parent);
}

/// q_webengineprofile_new4 constructs a new QWebEngineProfile object.
///
/// ``` const char* name, QObject* parent ```
QWebEngineProfile* q_webengineprofile_new4(const char* name, void* parent) {
    return QWebEngineProfile_new4(qstring(name), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineProfile* self ```
QMetaObject* q_webengineprofile_meta_object(void* self) {
    return QWebEngineProfile_MetaObject((QWebEngineProfile*)self);
}

/// ``` QWebEngineProfile* self, const char* param1 ```
void* q_webengineprofile_metacast(void* self, const char* param1) {
    return QWebEngineProfile_Metacast((QWebEngineProfile*)self, param1);
}

/// ``` QWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineprofile_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineProfile_Metacall((QWebEngineProfile*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)(QWebEngineProfile*, enum QMetaObject__Call, int, void*) ```
void q_webengineprofile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebEngineProfile_OnMetacall((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineProfile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineprofile_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineProfile_QBaseMetacall((QWebEngineProfile*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineprofile_tr(const char* s) {
    libqt_string _str = QWebEngineProfile_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_storage_name(void* self) {
    libqt_string _str = QWebEngineProfile_StorageName((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_off_the_record(void* self) {
    return QWebEngineProfile_IsOffTheRecord((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_persistent_storage_path(void* self) {
    libqt_string _str = QWebEngineProfile_PersistentStoragePath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_persistent_storage_path(void* self, const char* path) {
    QWebEngineProfile_SetPersistentStoragePath((QWebEngineProfile*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_cache_path(void* self) {
    libqt_string _str = QWebEngineProfile_CachePath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_cache_path(void* self, const char* path) {
    QWebEngineProfile_SetCachePath((QWebEngineProfile*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_http_user_agent(void* self) {
    libqt_string _str = QWebEngineProfile_HttpUserAgent((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
///
/// ``` QWebEngineProfile* self, const char* userAgent ```
void q_webengineprofile_set_http_user_agent(void* self, const char* userAgent) {
    QWebEngineProfile_SetHttpUserAgent((QWebEngineProfile*)self, qstring(userAgent));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
///
/// ``` QWebEngineProfile* self ```
int64_t q_webengineprofile_http_cache_type(void* self) {
    return QWebEngineProfile_HttpCacheType((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
///
/// ``` QWebEngineProfile* self, enum QWebEngineProfile__HttpCacheType httpCacheType ```
void q_webengineprofile_set_http_cache_type(void* self, int64_t httpCacheType) {
    QWebEngineProfile_SetHttpCacheType((QWebEngineProfile*)self, httpCacheType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
///
/// ``` QWebEngineProfile* self, const char* httpAcceptLanguage ```
void q_webengineprofile_set_http_accept_language(void* self, const char* httpAcceptLanguage) {
    QWebEngineProfile_SetHttpAcceptLanguage((QWebEngineProfile*)self, qstring(httpAcceptLanguage));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_http_accept_language(void* self) {
    libqt_string _str = QWebEngineProfile_HttpAcceptLanguage((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
///
/// ``` QWebEngineProfile* self ```
int64_t q_webengineprofile_persistent_cookies_policy(void* self) {
    return QWebEngineProfile_PersistentCookiesPolicy((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
///
/// ``` QWebEngineProfile* self, enum QWebEngineProfile__PersistentCookiesPolicy persistentCookiesPolicy ```
void q_webengineprofile_set_persistent_cookies_policy(void* self, int64_t persistentCookiesPolicy) {
    QWebEngineProfile_SetPersistentCookiesPolicy((QWebEngineProfile*)self, persistentCookiesPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_http_cache_maximum_size(void* self) {
    return QWebEngineProfile_HttpCacheMaximumSize((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
///
/// ``` QWebEngineProfile* self, int maxSize ```
void q_webengineprofile_set_http_cache_maximum_size(void* self, int maxSize) {
    QWebEngineProfile_SetHttpCacheMaximumSize((QWebEngineProfile*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
///
/// ``` QWebEngineProfile* self ```
QWebEngineCookieStore* q_webengineprofile_cookie_store(void* self) {
    return QWebEngineProfile_CookieStore((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
///
/// ``` QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor ```
void q_webengineprofile_set_url_request_interceptor(void* self, void* interceptor) {
    QWebEngineProfile_SetUrlRequestInterceptor((QWebEngineProfile*)self, (QWebEngineUrlRequestInterceptor*)interceptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_clear_all_visited_links(void* self) {
    QWebEngineProfile_ClearAllVisitedLinks((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
///
/// ``` QWebEngineProfile* self, QUrl* urls[] ```
void q_webengineprofile_clear_visited_links(void* self, void* urls[]) {
    QUrl** urls_arr = (QUrl**)urls;
    size_t urls_len = 0;
    while (urls_arr[urls_len] != NULL) {
        urls_len++;
    }
    libqt_list urls_list = {
        .len = urls_len,
        .data = {(QUrl*)urls},
    };
    QWebEngineProfile_ClearVisitedLinks((QWebEngineProfile*)self, urls_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
///
/// ``` QWebEngineProfile* self, QUrl* url ```
bool q_webengineprofile_visited_links_contains_url(void* self, void* url) {
    return QWebEngineProfile_VisitedLinksContainsUrl((QWebEngineProfile*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
///
/// ``` QWebEngineProfile* self ```
QWebEngineSettings* q_webengineprofile_settings(void* self) {
    return QWebEngineProfile_Settings((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
///
/// ``` QWebEngineProfile* self ```
QWebEngineScriptCollection* q_webengineprofile_scripts(void* self) {
    return QWebEngineProfile_Scripts((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
///
/// ``` QWebEngineProfile* self, const char* param1 ```
QWebEngineUrlSchemeHandler* q_webengineprofile_url_scheme_handler(void* self, const char* param1) {
    return QWebEngineProfile_UrlSchemeHandler((QWebEngineProfile*)self, qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
///
/// ``` QWebEngineProfile* self, const char* scheme, QWebEngineUrlSchemeHandler* param2 ```
void q_webengineprofile_install_url_scheme_handler(void* self, const char* scheme, void* param2) {
    QWebEngineProfile_InstallUrlSchemeHandler((QWebEngineProfile*)self, qstring(scheme), (QWebEngineUrlSchemeHandler*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
///
/// ``` QWebEngineProfile* self, const char* scheme ```
void q_webengineprofile_remove_url_scheme(void* self, const char* scheme) {
    QWebEngineProfile_RemoveUrlScheme((QWebEngineProfile*)self, qstring(scheme));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
///
/// ``` QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1 ```
void q_webengineprofile_remove_url_scheme_handler(void* self, void* param1) {
    QWebEngineProfile_RemoveUrlSchemeHandler((QWebEngineProfile*)self, (QWebEngineUrlSchemeHandler*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_remove_all_url_scheme_handlers(void* self) {
    QWebEngineProfile_RemoveAllUrlSchemeHandlers((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_clear_http_cache(void* self) {
    QWebEngineProfile_ClearHttpCache((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
///
/// ``` QWebEngineProfile* self, const char* languages[] ```
void q_webengineprofile_set_spell_check_languages(void* self, const char* languages[]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = malloc(languages_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < languages_len; ++_i) {
        languages_qstr[_i] = qstring(languages[_i]);
    }
    libqt_list languages_list = qstrlist(languages_qstr, languages_len);
    QWebEngineProfile_SetSpellCheckLanguages((QWebEngineProfile*)self, languages_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
///
/// ``` QWebEngineProfile* self ```
const char** q_webengineprofile_spell_check_languages(void* self) {
    libqt_list _arr = QWebEngineProfile_SpellCheckLanguages((QWebEngineProfile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
///
/// ``` QWebEngineProfile* self, bool enabled ```
void q_webengineprofile_set_spell_check_enabled(void* self, bool enabled) {
    QWebEngineProfile_SetSpellCheckEnabled((QWebEngineProfile*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_spell_check_enabled(void* self) {
    return QWebEngineProfile_IsSpellCheckEnabled((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_download_path(void* self) {
    libqt_string _str = QWebEngineProfile_DownloadPath((QWebEngineProfile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
///
/// ``` QWebEngineProfile* self, const char* path ```
void q_webengineprofile_set_download_path(void* self, const char* path) {
    QWebEngineProfile_SetDownloadPath((QWebEngineProfile*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
///
/// ``` QWebEngineProfile* self ```
QWebEngineClientCertificateStore* q_webengineprofile_client_certificate_store(void* self) {
    return QWebEngineProfile_ClientCertificateStore((QWebEngineProfile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
///
///
QWebEngineProfile* q_webengineprofile_default_profile() {
    return QWebEngineProfile_DefaultProfile();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
///
/// ``` QWebEngineProfile* self, QWebEngineDownloadRequest* download ```
void q_webengineprofile_download_requested(void* self, void* download) {
    QWebEngineProfile_DownloadRequested((QWebEngineProfile*)self, (QWebEngineDownloadRequest*)download);
}

/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QWebEngineDownloadRequest*) ```
void q_webengineprofile_on_download_requested(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_Connect_DownloadRequested((QWebEngineProfile*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineprofile_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineProfile_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineprofile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineProfile_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineProfile* self ```
const char* q_webengineprofile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineProfile* self, const char* name ```
void q_webengineprofile_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineProfile* self ```
bool q_webengineprofile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineProfile* self, bool b ```
bool q_webengineprofile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineProfile* self ```
QThread* q_webengineprofile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineProfile* self, QThread* thread ```
void q_webengineprofile_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineProfile* self, int interval ```
int32_t q_webengineprofile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineProfile* self, int id ```
void q_webengineprofile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineProfile* self ```
libqt_list /* of QObject* */ q_webengineprofile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineProfile* self, QObject* parent ```
void q_webengineprofile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineProfile* self, QObject* filterObj ```
void q_webengineprofile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineProfile* self, QObject* obj ```
void q_webengineprofile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineprofile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineProfile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineprofile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineprofile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineprofile_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineProfile* self, const char* name, QVariant* value ```
bool q_webengineprofile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineProfile* self, const char* name ```
QVariant* q_webengineprofile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineProfile* self ```
const char** q_webengineprofile_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineProfile* self ```
QBindingStorage* q_webengineprofile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineProfile* self ```
QBindingStorage* q_webengineprofile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineProfile* self, void (*slot)(QObject*) ```
void q_webengineprofile_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineProfile* self, const char* classname ```
bool q_webengineprofile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineProfile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineprofile_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineprofile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineProfile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineprofile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineProfile* self, QObject* param1 ```
void q_webengineprofile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineProfile* self, void (*slot)(QObject*, QObject*) ```
void q_webengineprofile_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
bool q_webengineprofile_event(void* self, void* event) {
    return QWebEngineProfile_Event((QWebEngineProfile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
bool q_webengineprofile_qbase_event(void* self, void* event) {
    return QWebEngineProfile_QBaseEvent((QWebEngineProfile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QEvent*) ```
void q_webengineprofile_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebEngineProfile_OnEvent((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* watched, QEvent* event ```
bool q_webengineprofile_event_filter(void* self, void* watched, void* event) {
    return QWebEngineProfile_EventFilter((QWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* watched, QEvent* event ```
bool q_webengineprofile_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineProfile_QBaseEventFilter((QWebEngineProfile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QObject*, QEvent*) ```
void q_webengineprofile_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebEngineProfile_OnEventFilter((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QTimerEvent* event ```
void q_webengineprofile_timer_event(void* self, void* event) {
    QWebEngineProfile_TimerEvent((QWebEngineProfile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QTimerEvent* event ```
void q_webengineprofile_qbase_timer_event(void* self, void* event) {
    QWebEngineProfile_QBaseTimerEvent((QWebEngineProfile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QTimerEvent*) ```
void q_webengineprofile_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_OnTimerEvent((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QChildEvent* event ```
void q_webengineprofile_child_event(void* self, void* event) {
    QWebEngineProfile_ChildEvent((QWebEngineProfile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QChildEvent* event ```
void q_webengineprofile_qbase_child_event(void* self, void* event) {
    QWebEngineProfile_QBaseChildEvent((QWebEngineProfile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QChildEvent*) ```
void q_webengineprofile_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_OnChildEvent((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
void q_webengineprofile_custom_event(void* self, void* event) {
    QWebEngineProfile_CustomEvent((QWebEngineProfile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QEvent* event ```
void q_webengineprofile_qbase_custom_event(void* self, void* event) {
    QWebEngineProfile_QBaseCustomEvent((QWebEngineProfile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QEvent*) ```
void q_webengineprofile_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_OnCustomEvent((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_connect_notify(void* self, void* signal) {
    QWebEngineProfile_ConnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_qbase_connect_notify(void* self, void* signal) {
    QWebEngineProfile_QBaseConnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_OnConnectNotify((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_disconnect_notify(void* self, void* signal) {
    QWebEngineProfile_DisconnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
void q_webengineprofile_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineProfile_QBaseDisconnectNotify((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, void (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineProfile_OnDisconnectNotify((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_sender(void* self) {
    return QWebEngineProfile_Sender((QWebEngineProfile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self ```
QObject* q_webengineprofile_qbase_sender(void* self) {
    return QWebEngineProfile_QBaseSender((QWebEngineProfile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QObject* (*slot)() ```
void q_webengineprofile_on_sender(void* self, QObject* (*slot)()) {
    QWebEngineProfile_OnSender((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_sender_signal_index(void* self) {
    return QWebEngineProfile_SenderSignalIndex((QWebEngineProfile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self ```
int32_t q_webengineprofile_qbase_sender_signal_index(void* self) {
    return QWebEngineProfile_QBaseSenderSignalIndex((QWebEngineProfile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)() ```
void q_webengineprofile_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebEngineProfile_OnSenderSignalIndex((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, const char* signal ```
int32_t q_webengineprofile_receivers(void* self, const char* signal) {
    return QWebEngineProfile_Receivers((QWebEngineProfile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, const char* signal ```
int32_t q_webengineprofile_qbase_receivers(void* self, const char* signal) {
    return QWebEngineProfile_QBaseReceivers((QWebEngineProfile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, int32_t (*slot)(QWebEngineProfile*, const char*) ```
void q_webengineprofile_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebEngineProfile_OnReceivers((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
bool q_webengineprofile_is_signal_connected(void* self, void* signal) {
    return QWebEngineProfile_IsSignalConnected((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineProfile* self, QMetaMethod* signal ```
bool q_webengineprofile_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineProfile_QBaseIsSignalConnected((QWebEngineProfile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineProfile* self, bool (*slot)(QWebEngineProfile*, QMetaMethod*) ```
void q_webengineprofile_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebEngineProfile_OnIsSignalConnected((QWebEngineProfile*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineProfile* self ```
void q_webengineprofile_delete(void* self) {
    QWebEngineProfile_Delete((QWebEngineProfile*)(self));
}