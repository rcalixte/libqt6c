#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPAGE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqaction.h"
#include "../libqanystringview.h"
#include "../network/libqauthenticator.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqicon.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpagelayout.h"
#include "../libqpageranges.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "../webchannel/libqwebchannel.h"
#include "libqwebenginecertificateerror.h"
#include "libqwebengineclientcertificateselection.h"
#include "libqwebenginefilesystemaccessrequest.h"
#include "libqwebenginefindtextresult.h"
#include "libqwebenginefullscreenrequest.h"
#include "libqwebenginehistory.h"
#include "libqwebenginehttprequest.h"
#include "libqwebengineloadinginfo.h"
#include "libqwebenginenavigationrequest.h"
#include "libqwebenginenewwindowrequest.h"
#include "libqwebengineprofile.h"
#include "libqwebenginequotarequest.h"
#include "libqwebengineregisterprotocolhandlerrequest.h"
#include "libqwebenginescriptcollection.h"
#include "libqwebenginesettings.h"
#include "libqwebengineurlrequestinterceptor.h"

/// https://doc.qt.io/qt-6/qwebenginepage.html

/// q_webenginepage_new constructs a new QWebEnginePage object.
///
///
QWebEnginePage* q_webenginepage_new();

/// q_webenginepage_new2 constructs a new QWebEnginePage object.
///
/// ``` QWebEngineProfile* profile ```
QWebEnginePage* q_webenginepage_new2(void* profile);

/// q_webenginepage_new3 constructs a new QWebEnginePage object.
///
/// ``` QObject* parent ```
QWebEnginePage* q_webenginepage_new3(void* parent);

/// q_webenginepage_new4 constructs a new QWebEnginePage object.
///
/// ``` QWebEngineProfile* profile, QObject* parent ```
QWebEnginePage* q_webenginepage_new4(void* profile, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEnginePage* self ```
QMetaObject* q_webenginepage_meta_object(void* self);

/// ``` QWebEnginePage* self, const char* param1 ```
void* q_webenginepage_metacast(void* self, const char* param1);

/// ``` QWebEnginePage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginepage_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, int32_t (*slot)(QWebEnginePage*, enum QMetaObject__Call, int, void*) ```
void q_webenginepage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginepage_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginepage_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#history)
///
/// ``` QWebEnginePage* self ```
QWebEngineHistory* q_webenginepage_history(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_has_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
///
/// ``` QWebEnginePage* self ```
QWebEngineProfile* q_webenginepage_profile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#action)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action ```
QAction* q_webenginepage_action(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webenginepage_trigger_action(void* self, int64_t action, bool checked);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__WebAction, bool) ```
void q_webenginepage_on_trigger_action(void* self, void (*slot)(void*, int64_t, bool));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webenginepage_qbase_trigger_action(void* self, int64_t action, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
///
/// ``` QWebEnginePage* self, const char* replacement ```
void q_webenginepage_replace_misspelled_word(void* self, const char* replacement);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#event)
///
/// ``` QWebEnginePage* self, QEvent* param1 ```
bool q_webenginepage_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QEvent*) ```
void q_webenginepage_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QEvent* param1 ```
bool q_webenginepage_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setFeaturePermission)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature, enum QWebEnginePage__PermissionPolicy policy ```
void q_webenginepage_set_feature_permission(void* self, void* securityOrigin, int64_t feature, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_loading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_load(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// ``` QWebEnginePage* self, QWebEngineHttpRequest* request ```
void q_webenginepage_load_with_request(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_download(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// ``` QWebEnginePage* self, const char* html ```
void q_webenginepage_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data ```
void q_webenginepage_set_content(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#title)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#url)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_requested_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_icon_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
///
/// ``` QWebEnginePage* self ```
QIcon* q_webenginepage_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
///
/// ``` QWebEnginePage* self ```
double q_webenginepage_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
///
/// ``` QWebEnginePage* self, double factor ```
void q_webenginepage_set_zoom_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
///
/// ``` QWebEnginePage* self ```
QPointF* q_webenginepage_scroll_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
///
/// ``` QWebEnginePage* self ```
QSizeF* q_webenginepage_contents_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
///
/// ``` QWebEnginePage* self ```
QWebEngineScriptCollection* q_webenginepage_scripts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
///
/// ``` QWebEnginePage* self ```
QWebEngineSettings* q_webenginepage_settings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
///
/// ``` QWebEnginePage* self ```
QWebChannel* q_webenginepage_web_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// ``` QWebEnginePage* self, QWebChannel* param1 ```
void q_webenginepage_set_web_channel(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
///
/// ``` QWebEnginePage* self ```
QColor* q_webenginepage_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
///
/// ``` QWebEnginePage* self, QColor* color ```
void q_webenginepage_set_background_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// ``` QWebEnginePage* self, const char* filePath ```
void q_webenginepage_save(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_audio_muted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
///
/// ``` QWebEnginePage* self, bool muted ```
void q_webenginepage_set_audio_muted(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_recently_audible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
///
/// ``` QWebEnginePage* self ```
long long q_webenginepage_render_process_pid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath ```
void q_webenginepage_print_to_pdf(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
///
/// ``` QWebEnginePage* self, QWebEnginePage* page ```
void q_webenginepage_set_inspected_page(void* self, void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
///
/// ``` QWebEnginePage* self ```
QWebEnginePage* q_webenginepage_inspected_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
///
/// ``` QWebEnginePage* self, QWebEnginePage* page ```
void q_webenginepage_set_dev_tools_page(void* self, void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
///
/// ``` QWebEnginePage* self ```
QWebEnginePage* q_webenginepage_dev_tools_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
///
/// ``` QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor ```
void q_webenginepage_set_url_request_interceptor(void* self, void* interceptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
///
/// ``` QWebEnginePage* self ```
int64_t q_webenginepage_lifecycle_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_set_lifecycle_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
///
/// ``` QWebEnginePage* self ```
int64_t q_webenginepage_recommended_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
///
/// ``` QWebEnginePage* self, bool visible ```
void q_webenginepage_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
///
/// ``` QWebEnginePage* self, QWebEngineNewWindowRequest* request ```
void q_webenginepage_accept_as_new_window(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_load_started(void* self);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_load_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
///
/// ``` QWebEnginePage* self, int progress ```
void q_webenginepage_load_progress(void* self, int progress);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, int) ```
void q_webenginepage_on_load_progress(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
///
/// ``` QWebEnginePage* self, bool ok ```
void q_webenginepage_load_finished(void* self, bool ok);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_load_finished(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
///
/// ``` QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo ```
void q_webenginepage_loading_changed(void* self, void* loadingInfo);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineLoadingInfo*) ```
void q_webenginepage_on_loading_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
///
/// ``` QWebEnginePage* self, const char* url ```
void q_webenginepage_link_hovered(void* self, const char* url);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_link_hovered(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_selection_changed(void* self);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
///
/// ``` QWebEnginePage* self, QRect* geom ```
void q_webenginepage_geometry_change_requested(void* self, void* geom);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QRect*) ```
void q_webenginepage_on_geometry_change_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_window_close_requested(void* self);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_window_close_requested(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature ```
void q_webenginepage_feature_permission_requested(void* self, void* securityOrigin, int64_t feature);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__Feature) ```
void q_webenginepage_on_feature_permission_requested(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature ```
void q_webenginepage_feature_permission_request_canceled(void* self, void* securityOrigin, int64_t feature);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__Feature) ```
void q_webenginepage_on_feature_permission_request_canceled(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
///
/// ``` QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest ```
void q_webenginepage_full_screen_requested(void* self, void* fullScreenRequest);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFullScreenRequest*) ```
void q_webenginepage_on_full_screen_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
///
/// ``` QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest ```
void q_webenginepage_quota_requested(void* self, void* quotaRequest);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineQuotaRequest*) ```
void q_webenginepage_on_quota_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
///
/// ``` QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request ```
void q_webenginepage_register_protocol_handler_requested(void* self, void* request);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineRegisterProtocolHandlerRequest*) ```
void q_webenginepage_on_register_protocol_handler_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
///
/// ``` QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request ```
void q_webenginepage_file_system_access_requested(void* self, void* request);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFileSystemAccessRequest*) ```
void q_webenginepage_on_file_system_access_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
///
/// ``` QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection ```
void q_webenginepage_select_client_certificate(void* self, void* clientCertSelection);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineClientCertificateSelection*) ```
void q_webenginepage_on_select_client_certificate(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
///
/// ``` QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator ```
void q_webenginepage_authentication_required(void* self, void* requestUrl, void* authenticator);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, QAuthenticator*) ```
void q_webenginepage_on_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
///
/// ``` QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, const char* proxyHost ```
void q_webenginepage_proxy_authentication_required(void* self, void* requestUrl, void* authenticator, const char* proxyHost);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, QAuthenticator*, const char*) ```
void q_webenginepage_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode ```
void q_webenginepage_render_process_terminated(void* self, int64_t terminationStatus, int exitCode);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__RenderProcessTerminationStatus, int) ```
void q_webenginepage_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
///
/// ``` QWebEnginePage* self, QWebEngineCertificateError* certificateError ```
void q_webenginepage_certificate_error(void* self, void* certificateError);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineCertificateError*) ```
void q_webenginepage_on_certificate_error(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
///
/// ``` QWebEnginePage* self, QWebEngineNavigationRequest* request ```
void q_webenginepage_navigation_requested(void* self, void* request);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineNavigationRequest*) ```
void q_webenginepage_on_navigation_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
///
/// ``` QWebEnginePage* self, QWebEngineNewWindowRequest* request ```
void q_webenginepage_new_window_requested(void* self, void* request);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineNewWindowRequest*) ```
void q_webenginepage_on_new_window_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
///
/// ``` QWebEnginePage* self, const char* title ```
void q_webenginepage_title_changed(void* self, const char* title);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_title_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_url_changed(void* self, void* url);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*) ```
void q_webenginepage_on_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_icon_url_changed(void* self, void* url);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*) ```
void q_webenginepage_on_icon_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
///
/// ``` QWebEnginePage* self, QIcon* icon ```
void q_webenginepage_icon_changed(void* self, void* icon);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QIcon*) ```
void q_webenginepage_on_icon_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
///
/// ``` QWebEnginePage* self, QPointF* position ```
void q_webenginepage_scroll_position_changed(void* self, void* position);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QPointF*) ```
void q_webenginepage_on_scroll_position_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
///
/// ``` QWebEnginePage* self, QSizeF* size ```
void q_webenginepage_contents_size_changed(void* self, void* size);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QSizeF*) ```
void q_webenginepage_on_contents_size_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
///
/// ``` QWebEnginePage* self, bool muted ```
void q_webenginepage_audio_muted_changed(void* self, bool muted);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_audio_muted_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
///
/// ``` QWebEnginePage* self, bool recentlyAudible ```
void q_webenginepage_recently_audible_changed(void* self, bool recentlyAudible);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_recently_audible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
///
/// ``` QWebEnginePage* self, long long pid ```
void q_webenginepage_render_process_pid_changed(void* self, long long pid);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, long long) ```
void q_webenginepage_on_render_process_pid_changed(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
///
/// ``` QWebEnginePage* self, const char* filePath, bool success ```
void q_webenginepage_pdf_printing_finished(void* self, const char* filePath, bool success);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*, bool) ```
void q_webenginepage_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_print_requested(void* self);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_print_requested(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
///
/// ``` QWebEnginePage* self, bool visible ```
void q_webenginepage_visible_changed(void* self, bool visible);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_lifecycle_state_changed(void* self, int64_t state);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__LifecycleState) ```
void q_webenginepage_on_lifecycle_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_recommended_state_changed(void* self, int64_t state);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__LifecycleState) ```
void q_webenginepage_on_recommended_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
///
/// ``` QWebEnginePage* self, QWebEngineFindTextResult* result ```
void q_webenginepage_find_text_finished(void* self, void* result);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFindTextResult*) ```
void q_webenginepage_on_find_text_finished(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_q_about_to_delete(void* self);

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_q_about_to_delete(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEnginePage* q_webenginepage_create_window(void* self, int64_t typeVal);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, QWebEnginePage* (*slot)(QWebEnginePage*, enum QWebEnginePage__WebWindowType) ```
void q_webenginepage_on_create_window(void* self, QWebEnginePage* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEnginePage* q_webenginepage_qbase_create_window(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__FileSelectionMode mode, const char* oldFiles[], const char* acceptedMimeTypes[] ```
const char** q_webenginepage_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, const char** (*slot)(QWebEnginePage*, enum QWebEnginePage__FileSelectionMode, const char*[], const char*[]) ```
void q_webenginepage_on_choose_files(void* self, const char** (*slot)(void*, int64_t, const char*, const char*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__FileSelectionMode mode, const char* oldFiles[], const char* acceptedMimeTypes[] ```
const char** q_webenginepage_qbase_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
void q_webenginepage_java_script_alert(void* self, void* securityOrigin, const char* msg);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, const char*) ```
void q_webenginepage_on_java_script_alert(void* self, void (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
void q_webenginepage_qbase_java_script_alert(void* self, void* securityOrigin, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
bool q_webenginepage_java_script_confirm(void* self, void* securityOrigin, const char* msg);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QUrl*, const char*) ```
void q_webenginepage_on_java_script_confirm(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
bool q_webenginepage_qbase_java_script_confirm(void* self, void* securityOrigin, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__JavaScriptConsoleMessageLevel level, const char* message, int lineNumber, const char* sourceID ```
void q_webenginepage_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__JavaScriptConsoleMessageLevel, const char*, int, const char*) ```
void q_webenginepage_on_java_script_console_message(void* self, void (*slot)(void*, int64_t, const char*, int, const char*));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__JavaScriptConsoleMessageLevel level, const char* message, int lineNumber, const char* sourceID ```
void q_webenginepage_qbase_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
///
/// ``` QWebEnginePage* self, QUrl* url, enum QWebEnginePage__NavigationType typeVal, bool isMainFrame ```
bool q_webenginepage_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame);

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__NavigationType, bool) ```
void q_webenginepage_on_accept_navigation_request(void* self, bool (*slot)(void*, void*, int64_t, bool));

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* url, enum QWebEnginePage__NavigationType typeVal, bool isMainFrame ```
bool q_webenginepage_qbase_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginepage_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginepage_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// ``` QWebEnginePage* self, QUrl* url, const char* filename ```
void q_webenginepage_download2(void* self, void* url, const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// ``` QWebEnginePage* self, const char* html, QUrl* baseUrl ```
void q_webenginepage_set_html2(void* self, const char* html, void* baseUrl);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data, const char* mimeType ```
void q_webenginepage_set_content2(void* self, const char* data, const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data, const char* mimeType, QUrl* baseUrl ```
void q_webenginepage_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// ``` QWebEnginePage* self, QWebChannel* param1, uint32_t worldId ```
void q_webenginepage_set_web_channel2(void* self, void* param1, uint32_t worldId);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// ``` QWebEnginePage* self, const char* filePath, enum QWebEngineDownloadRequest__SavePageFormat format ```
void q_webenginepage_save2(void* self, const char* filePath, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath, QPageLayout* layout ```
void q_webenginepage_print_to_pdf2(void* self, const char* filePath, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath, QPageLayout* layout, QPageRanges* ranges ```
void q_webenginepage_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEnginePage* self, char* name ```
void q_webenginepage_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEnginePage* self, bool b ```
bool q_webenginepage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEnginePage* self ```
QThread* q_webenginepage_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEnginePage* self, QThread* thread ```
void q_webenginepage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEnginePage* self, int interval ```
int32_t q_webenginepage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEnginePage* self, int id ```
void q_webenginepage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEnginePage* self ```
libqt_list /* of QObject* */ q_webenginepage_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEnginePage* self, QObject* parent ```
void q_webenginepage_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEnginePage* self, QObject* filterObj ```
void q_webenginepage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEnginePage* self, QObject* obj ```
void q_webenginepage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginepage_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEnginePage* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginepage_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginepage_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginepage_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEnginePage* self, const char* name, QVariant* value ```
bool q_webenginepage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEnginePage* self, const char* name ```
QVariant* q_webenginepage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEnginePage* self ```
const char** q_webenginepage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEnginePage* self ```
QBindingStorage* q_webenginepage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEnginePage* self ```
QBindingStorage* q_webenginepage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWebEnginePage* self, void (*slot)(QObject*) ```
void q_webenginepage_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEnginePage* self, const char* classname ```
bool q_webenginepage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEnginePage* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginepage_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginepage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEnginePage* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginepage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEnginePage* self, QObject* param1 ```
void q_webenginepage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWebEnginePage* self, void (*slot)(QObject*, QObject*) ```
void q_webenginepage_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* watched, QEvent* event ```
bool q_webenginepage_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* watched, QEvent* event ```
bool q_webenginepage_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QObject*, QEvent*) ```
void q_webenginepage_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QTimerEvent* event ```
void q_webenginepage_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QTimerEvent* event ```
void q_webenginepage_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QTimerEvent*) ```
void q_webenginepage_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QChildEvent* event ```
void q_webenginepage_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QChildEvent* event ```
void q_webenginepage_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QChildEvent*) ```
void q_webenginepage_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QEvent* event ```
void q_webenginepage_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QEvent* event ```
void q_webenginepage_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QEvent*) ```
void q_webenginepage_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* (*slot)() ```
void q_webenginepage_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self ```
int32_t q_webenginepage_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self ```
int32_t q_webenginepage_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, int32_t (*slot)() ```
void q_webenginepage_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, const char* signal ```
int32_t q_webenginepage_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, const char* signal ```
int32_t q_webenginepage_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, int32_t (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
bool q_webenginepage_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
bool q_webenginepage_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginepage.html#types

typedef enum {
    QWEBENGINEPAGE_WEBACTION_NOWEBACTION = -1,
    QWEBENGINEPAGE_WEBACTION_BACK = 0,
    QWEBENGINEPAGE_WEBACTION_FORWARD = 1,
    QWEBENGINEPAGE_WEBACTION_STOP = 2,
    QWEBENGINEPAGE_WEBACTION_RELOAD = 3,
    QWEBENGINEPAGE_WEBACTION_CUT = 4,
    QWEBENGINEPAGE_WEBACTION_COPY = 5,
    QWEBENGINEPAGE_WEBACTION_PASTE = 6,
    QWEBENGINEPAGE_WEBACTION_UNDO = 7,
    QWEBENGINEPAGE_WEBACTION_REDO = 8,
    QWEBENGINEPAGE_WEBACTION_SELECTALL = 9,
    QWEBENGINEPAGE_WEBACTION_RELOADANDBYPASSCACHE = 10,
    QWEBENGINEPAGE_WEBACTION_PASTEANDMATCHSTYLE = 11,
    QWEBENGINEPAGE_WEBACTION_OPENLINKINTHISWINDOW = 12,
    QWEBENGINEPAGE_WEBACTION_OPENLINKINNEWWINDOW = 13,
    QWEBENGINEPAGE_WEBACTION_OPENLINKINNEWTAB = 14,
    QWEBENGINEPAGE_WEBACTION_COPYLINKTOCLIPBOARD = 15,
    QWEBENGINEPAGE_WEBACTION_DOWNLOADLINKTODISK = 16,
    QWEBENGINEPAGE_WEBACTION_COPYIMAGETOCLIPBOARD = 17,
    QWEBENGINEPAGE_WEBACTION_COPYIMAGEURLTOCLIPBOARD = 18,
    QWEBENGINEPAGE_WEBACTION_DOWNLOADIMAGETODISK = 19,
    QWEBENGINEPAGE_WEBACTION_COPYMEDIAURLTOCLIPBOARD = 20,
    QWEBENGINEPAGE_WEBACTION_TOGGLEMEDIACONTROLS = 21,
    QWEBENGINEPAGE_WEBACTION_TOGGLEMEDIALOOP = 22,
    QWEBENGINEPAGE_WEBACTION_TOGGLEMEDIAPLAYPAUSE = 23,
    QWEBENGINEPAGE_WEBACTION_TOGGLEMEDIAMUTE = 24,
    QWEBENGINEPAGE_WEBACTION_DOWNLOADMEDIATODISK = 25,
    QWEBENGINEPAGE_WEBACTION_INSPECTELEMENT = 26,
    QWEBENGINEPAGE_WEBACTION_EXITFULLSCREEN = 27,
    QWEBENGINEPAGE_WEBACTION_REQUESTCLOSE = 28,
    QWEBENGINEPAGE_WEBACTION_UNSELECT = 29,
    QWEBENGINEPAGE_WEBACTION_SAVEPAGE = 30,
    QWEBENGINEPAGE_WEBACTION_OPENLINKINNEWBACKGROUNDTAB = 31,
    QWEBENGINEPAGE_WEBACTION_VIEWSOURCE = 32,
    QWEBENGINEPAGE_WEBACTION_TOGGLEBOLD = 33,
    QWEBENGINEPAGE_WEBACTION_TOGGLEITALIC = 34,
    QWEBENGINEPAGE_WEBACTION_TOGGLEUNDERLINE = 35,
    QWEBENGINEPAGE_WEBACTION_TOGGLESTRIKETHROUGH = 36,
    QWEBENGINEPAGE_WEBACTION_ALIGNLEFT = 37,
    QWEBENGINEPAGE_WEBACTION_ALIGNCENTER = 38,
    QWEBENGINEPAGE_WEBACTION_ALIGNRIGHT = 39,
    QWEBENGINEPAGE_WEBACTION_ALIGNJUSTIFIED = 40,
    QWEBENGINEPAGE_WEBACTION_INDENT = 41,
    QWEBENGINEPAGE_WEBACTION_OUTDENT = 42,
    QWEBENGINEPAGE_WEBACTION_INSERTORDEREDLIST = 43,
    QWEBENGINEPAGE_WEBACTION_INSERTUNORDEREDLIST = 44,
    QWEBENGINEPAGE_WEBACTION_WEBACTIONCOUNT = 45
} QWebEnginePage__WebAction;

typedef enum {
    QWEBENGINEPAGE_FINDFLAG_FINDBACKWARD = 1,
    QWEBENGINEPAGE_FINDFLAG_FINDCASESENSITIVELY = 2
} QWebEnginePage__FindFlag;

typedef enum {
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERWINDOW = 0,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERTAB = 1,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBDIALOG = 2,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERBACKGROUNDTAB = 3
} QWebEnginePage__WebWindowType;

typedef enum {
    QWEBENGINEPAGE_PERMISSIONPOLICY_PERMISSIONUNKNOWN = 0,
    QWEBENGINEPAGE_PERMISSIONPOLICY_PERMISSIONGRANTEDBYUSER = 1,
    QWEBENGINEPAGE_PERMISSIONPOLICY_PERMISSIONDENIEDBYUSER = 2
} QWebEnginePage__PermissionPolicy;

typedef enum {
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPELINKCLICKED = 0,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPETYPED = 1,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEFORMSUBMITTED = 2,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEBACKFORWARD = 3,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPERELOAD = 4,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEOTHER = 5,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEREDIRECT = 6
} QWebEnginePage__NavigationType;

typedef enum {
    QWEBENGINEPAGE_FEATURE_NOTIFICATIONS = 0,
    QWEBENGINEPAGE_FEATURE_GEOLOCATION = 1,
    QWEBENGINEPAGE_FEATURE_MEDIAAUDIOCAPTURE = 2,
    QWEBENGINEPAGE_FEATURE_MEDIAVIDEOCAPTURE = 3,
    QWEBENGINEPAGE_FEATURE_MEDIAAUDIOVIDEOCAPTURE = 4,
    QWEBENGINEPAGE_FEATURE_MOUSELOCK = 5,
    QWEBENGINEPAGE_FEATURE_DESKTOPVIDEOCAPTURE = 6,
    QWEBENGINEPAGE_FEATURE_DESKTOPAUDIOVIDEOCAPTURE = 7
} QWebEnginePage__Feature;

typedef enum {
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTOPEN = 0,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTOPENMULTIPLE = 1,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTUPLOADFOLDER = 2,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTSAVE = 3
} QWebEnginePage__FileSelectionMode;

typedef enum {
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_INFOMESSAGELEVEL = 0,
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_WARNINGMESSAGELEVEL = 1,
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_ERRORMESSAGELEVEL = 2
} QWebEnginePage__JavaScriptConsoleMessageLevel;

typedef enum {
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_NORMALTERMINATIONSTATUS = 0,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_ABNORMALTERMINATIONSTATUS = 1,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_CRASHEDTERMINATIONSTATUS = 2,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_KILLEDTERMINATIONSTATUS = 3
} QWebEnginePage__RenderProcessTerminationStatus;

typedef enum {
    QWEBENGINEPAGE_LIFECYCLESTATE_ACTIVE = 0,
    QWEBENGINEPAGE_LIFECYCLESTATE_FROZEN = 1,
    QWEBENGINEPAGE_LIFECYCLESTATE_DISCARDED = 2
} QWebEnginePage__LifecycleState;

#endif
