#include "../libqaction.hpp"
#include "../network/libqauthenticator.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../webchannel/libqwebchannel.hpp"
#include "libqwebenginecertificateerror.hpp"
#include "libqwebengineclientcertificateselection.hpp"
#include "libqwebenginedesktopmediarequest.hpp"
#include "libqwebenginefilesystemaccessrequest.hpp"
#include "libqwebenginefindtextresult.hpp"
#include "libqwebengineframe.hpp"
#include "libqwebenginefullscreenrequest.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebengineloadinginfo.hpp"
#include "libqwebenginenavigationrequest.hpp"
#include "libqwebenginenewwindowrequest.hpp"
#include "libqwebenginepermission.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginesettings.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "libqwebenginewebauthuxrequest.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebenginepage.h"

QWebEnginePage* q_webenginepage_new() {
    return QWebEnginePage_new();
}

QWebEnginePage* q_webenginepage_new2(void* profile) {
    return QWebEnginePage_new2((QWebEngineProfile*)profile);
}

QWebEnginePage* q_webenginepage_new3(void* parent) {
    return QWebEnginePage_new3((QObject*)parent);
}

QWebEnginePage* q_webenginepage_new4(void* profile, void* parent) {
    return QWebEnginePage_new4((QWebEngineProfile*)profile, (QObject*)parent);
}

const QMetaObject* q_webenginepage_meta_object(void* self) {
    return QWebEnginePage_MetaObject((QWebEnginePage*)self);
}

void q_webenginepage_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebEnginePage_OnMetaObject((QWebEnginePage*)self, (intptr_t)callback);
}

const QMetaObject* q_webenginepage_qbase_meta_object(void* self) {
    return QWebEnginePage_QBaseMetaObject((QWebEnginePage*)self);
}

void* q_webenginepage_metacast(void* self, const char* param1) {
    return QWebEnginePage_Metacast((QWebEnginePage*)self, param1);
}

void q_webenginepage_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebEnginePage_OnMetacast((QWebEnginePage*)self, (intptr_t)callback);
}

void* q_webenginepage_qbase_metacast(void* self, const char* param1) {
    return QWebEnginePage_QBaseMetacast((QWebEnginePage*)self, param1);
}

int32_t q_webenginepage_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEnginePage_Metacall((QWebEnginePage*)self, param1, param2, param3);
}

void q_webenginepage_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebEnginePage_OnMetacall((QWebEnginePage*)self, (intptr_t)callback);
}

int32_t q_webenginepage_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEnginePage_QBaseMetacall((QWebEnginePage*)self, param1, param2, param3);
}

const char* q_webenginepage_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWebEngineHistory* q_webenginepage_history(void* self) {
    return QWebEnginePage_History((QWebEnginePage*)self);
}

bool q_webenginepage_has_selection(void* self) {
    return QWebEnginePage_HasSelection((QWebEnginePage*)self);
}

const char* q_webenginepage_selected_text(void* self) {
    libqt_string _str = QWebEnginePage_SelectedText((QWebEnginePage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWebEngineProfile* q_webenginepage_profile(void* self) {
    return QWebEnginePage_Profile((QWebEnginePage*)self);
}

QAction* q_webenginepage_action(void* self, int32_t action) {
    return QWebEnginePage_Action((QWebEnginePage*)self, action);
}

void q_webenginepage_trigger_action(void* self, int32_t action, bool checked) {
    QWebEnginePage_TriggerAction((QWebEnginePage*)self, action, checked);
}

void q_webenginepage_on_trigger_action(void* self, void (*callback)(void*, int32_t, bool)) {
    QWebEnginePage_OnTriggerAction((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_qbase_trigger_action(void* self, int32_t action, bool checked) {
    QWebEnginePage_QBaseTriggerAction((QWebEnginePage*)self, action, checked);
}

void q_webenginepage_replace_misspelled_word(void* self, const char* replacement) {
    QWebEnginePage_ReplaceMisspelledWord((QWebEnginePage*)self, qstring(replacement));
}

bool q_webenginepage_event(void* self, void* param1) {
    return QWebEnginePage_Event((QWebEnginePage*)self, (QEvent*)param1);
}

void q_webenginepage_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebEnginePage_OnEvent((QWebEnginePage*)self, (intptr_t)callback);
}

bool q_webenginepage_qbase_event(void* self, void* param1) {
    return QWebEnginePage_QBaseEvent((QWebEnginePage*)self, (QEvent*)param1);
}

void q_webenginepage_find_text(void* self, const char* subString) {
    QWebEnginePage_FindText((QWebEnginePage*)self, qstring(subString));
}

bool q_webenginepage_is_loading(void* self) {
    return QWebEnginePage_IsLoading((QWebEnginePage*)self);
}

void q_webenginepage_load(void* self, void* url) {
    QWebEnginePage_Load((QWebEnginePage*)self, (QUrl*)url);
}

void q_webenginepage_load2(void* self, void* request) {
    QWebEnginePage_Load2((QWebEnginePage*)self, (QWebEngineHttpRequest*)request);
}

void q_webenginepage_download(void* self, void* url) {
    QWebEnginePage_Download((QWebEnginePage*)self, (QUrl*)url);
}

void q_webenginepage_set_html(void* self, const char* html) {
    QWebEnginePage_SetHtml((QWebEnginePage*)self, qstring(html));
}

void q_webenginepage_set_content(void* self, const char* data) {
    QWebEnginePage_SetContent((QWebEnginePage*)self, qstring(data));
}

const char* q_webenginepage_title(void* self) {
    libqt_string _str = QWebEnginePage_Title((QWebEnginePage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginepage_set_url(void* self, void* url) {
    QWebEnginePage_SetUrl((QWebEnginePage*)self, (QUrl*)url);
}

QUrl* q_webenginepage_url(void* self) {
    return QWebEnginePage_Url((QWebEnginePage*)self);
}

QUrl* q_webenginepage_requested_url(void* self) {
    return QWebEnginePage_RequestedUrl((QWebEnginePage*)self);
}

QUrl* q_webenginepage_icon_url(void* self) {
    return QWebEnginePage_IconUrl((QWebEnginePage*)self);
}

QIcon* q_webenginepage_icon(void* self) {
    return QWebEnginePage_Icon((QWebEnginePage*)self);
}

double q_webenginepage_zoom_factor(void* self) {
    return QWebEnginePage_ZoomFactor((QWebEnginePage*)self);
}

void q_webenginepage_set_zoom_factor(void* self, double factor) {
    QWebEnginePage_SetZoomFactor((QWebEnginePage*)self, factor);
}

QPointF* q_webenginepage_scroll_position(void* self) {
    return QWebEnginePage_ScrollPosition((QWebEnginePage*)self);
}

QSizeF* q_webenginepage_contents_size(void* self) {
    return QWebEnginePage_ContentsSize((QWebEnginePage*)self);
}

void q_webenginepage_run_java_script2(void* self, const char* scriptSource) {
    QWebEnginePage_RunJavaScript2((QWebEnginePage*)self, qstring(scriptSource));
}

QWebEngineScriptCollection* q_webenginepage_scripts(void* self) {
    return QWebEnginePage_Scripts((QWebEnginePage*)self);
}

QWebEngineSettings* q_webenginepage_settings(void* self) {
    return QWebEnginePage_Settings((QWebEnginePage*)self);
}

QWebChannel* q_webenginepage_web_channel(void* self) {
    return QWebEnginePage_WebChannel((QWebEnginePage*)self);
}

void q_webenginepage_set_web_channel(void* self, void* param1) {
    QWebEnginePage_SetWebChannel((QWebEnginePage*)self, (QWebChannel*)param1);
}

QColor* q_webenginepage_background_color(void* self) {
    return QWebEnginePage_BackgroundColor((QWebEnginePage*)self);
}

void q_webenginepage_set_background_color(void* self, void* color) {
    QWebEnginePage_SetBackgroundColor((QWebEnginePage*)self, (QColor*)color);
}

void q_webenginepage_save(void* self, const char* filePath) {
    QWebEnginePage_Save((QWebEnginePage*)self, qstring(filePath));
}

bool q_webenginepage_is_audio_muted(void* self) {
    return QWebEnginePage_IsAudioMuted((QWebEnginePage*)self);
}

void q_webenginepage_set_audio_muted(void* self, bool muted) {
    QWebEnginePage_SetAudioMuted((QWebEnginePage*)self, muted);
}

bool q_webenginepage_recently_audible(void* self) {
    return QWebEnginePage_RecentlyAudible((QWebEnginePage*)self);
}

long long q_webenginepage_render_process_pid(void* self) {
    return QWebEnginePage_RenderProcessPid((QWebEnginePage*)self);
}

void q_webenginepage_print_to_pdf(void* self, const char* filePath) {
    QWebEnginePage_PrintToPdf((QWebEnginePage*)self, qstring(filePath));
}

void q_webenginepage_set_inspected_page(void* self, void* page) {
    QWebEnginePage_SetInspectedPage((QWebEnginePage*)self, (QWebEnginePage*)page);
}

QWebEnginePage* q_webenginepage_inspected_page(void* self) {
    return QWebEnginePage_InspectedPage((QWebEnginePage*)self);
}

void q_webenginepage_set_dev_tools_page(void* self, void* page) {
    QWebEnginePage_SetDevToolsPage((QWebEnginePage*)self, (QWebEnginePage*)page);
}

QWebEnginePage* q_webenginepage_dev_tools_page(void* self) {
    return QWebEnginePage_DevToolsPage((QWebEnginePage*)self);
}

const char* q_webenginepage_dev_tools_id(void* self) {
    libqt_string _str = QWebEnginePage_DevToolsId((QWebEnginePage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginepage_set_url_request_interceptor(void* self, void* interceptor) {
    QWebEnginePage_SetUrlRequestInterceptor((QWebEnginePage*)self, (QWebEngineUrlRequestInterceptor*)interceptor);
}

int32_t q_webenginepage_lifecycle_state(void* self) {
    return QWebEnginePage_LifecycleState((QWebEnginePage*)self);
}

void q_webenginepage_set_lifecycle_state(void* self, int32_t state) {
    QWebEnginePage_SetLifecycleState((QWebEnginePage*)self, state);
}

int32_t q_webenginepage_recommended_state(void* self) {
    return QWebEnginePage_RecommendedState((QWebEnginePage*)self);
}

bool q_webenginepage_is_visible(void* self) {
    return QWebEnginePage_IsVisible((QWebEnginePage*)self);
}

void q_webenginepage_set_visible(void* self, bool visible) {
    QWebEnginePage_SetVisible((QWebEnginePage*)self, visible);
}

QWebEngineFrame* q_webenginepage_main_frame(void* self) {
    return QWebEnginePage_MainFrame((QWebEnginePage*)self);
}

void q_webenginepage_accept_as_new_window(void* self, void* request) {
    QWebEnginePage_AcceptAsNewWindow((QWebEnginePage*)self, (QWebEngineNewWindowRequest*)request);
}

void q_webenginepage_load_started(void* self) {
    QWebEnginePage_LoadStarted((QWebEnginePage*)self);
}

void q_webenginepage_on_load_started(void* self, void (*callback)(void*)) {
    QWebEnginePage_Connect_LoadStarted((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_load_progress(void* self, int progress) {
    QWebEnginePage_LoadProgress((QWebEnginePage*)self, progress);
}

void q_webenginepage_on_load_progress(void* self, void (*callback)(void*, int)) {
    QWebEnginePage_Connect_LoadProgress((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_load_finished(void* self, bool ok) {
    QWebEnginePage_LoadFinished((QWebEnginePage*)self, ok);
}

void q_webenginepage_on_load_finished(void* self, void (*callback)(void*, bool)) {
    QWebEnginePage_Connect_LoadFinished((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_loading_changed(void* self, void* loadingInfo) {
    QWebEnginePage_LoadingChanged((QWebEnginePage*)self, (QWebEngineLoadingInfo*)loadingInfo);
}

void q_webenginepage_on_loading_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_LoadingChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_link_hovered(void* self, const char* url) {
    QWebEnginePage_LinkHovered((QWebEnginePage*)self, qstring(url));
}

void q_webenginepage_on_link_hovered(void* self, void (*callback)(void*, const char*)) {
    QWebEnginePage_Connect_LinkHovered((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_selection_changed(void* self) {
    QWebEnginePage_SelectionChanged((QWebEnginePage*)self);
}

void q_webenginepage_on_selection_changed(void* self, void (*callback)(void*)) {
    QWebEnginePage_Connect_SelectionChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_geometry_change_requested(void* self, void* geom) {
    QWebEnginePage_GeometryChangeRequested((QWebEnginePage*)self, (QRect*)geom);
}

void q_webenginepage_on_geometry_change_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_GeometryChangeRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_window_close_requested(void* self) {
    QWebEnginePage_WindowCloseRequested((QWebEnginePage*)self);
}

void q_webenginepage_on_window_close_requested(void* self, void (*callback)(void*)) {
    QWebEnginePage_Connect_WindowCloseRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_feature_permission_requested(void* self, void* securityOrigin, int32_t feature) {
    QWebEnginePage_FeaturePermissionRequested((QWebEnginePage*)self, (QUrl*)securityOrigin, feature);
}

void q_webenginepage_on_feature_permission_requested(void* self, void (*callback)(void*, void*, int32_t)) {
    QWebEnginePage_Connect_FeaturePermissionRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_feature_permission_request_canceled(void* self, void* securityOrigin, int32_t feature) {
    QWebEnginePage_FeaturePermissionRequestCanceled((QWebEnginePage*)self, (QUrl*)securityOrigin, feature);
}

void q_webenginepage_on_feature_permission_request_canceled(void* self, void (*callback)(void*, void*, int32_t)) {
    QWebEnginePage_Connect_FeaturePermissionRequestCanceled((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_full_screen_requested(void* self, void* fullScreenRequest) {
    QWebEnginePage_FullScreenRequested((QWebEnginePage*)self, (QWebEngineFullScreenRequest*)fullScreenRequest);
}

void q_webenginepage_on_full_screen_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_FullScreenRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_permission_requested(void* self, void* permissionRequest) {
    QWebEnginePage_PermissionRequested((QWebEnginePage*)self, (QWebEnginePermission*)permissionRequest);
}

void q_webenginepage_on_permission_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_PermissionRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_quota_requested(void* self, void* quotaRequest) {
    QWebEnginePage_QuotaRequested((QWebEnginePage*)self, (QWebEngineQuotaRequest*)quotaRequest);
}

void q_webenginepage_on_quota_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_QuotaRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_register_protocol_handler_requested(void* self, void* request) {
    QWebEnginePage_RegisterProtocolHandlerRequested((QWebEnginePage*)self, (QWebEngineRegisterProtocolHandlerRequest*)request);
}

void q_webenginepage_on_register_protocol_handler_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_RegisterProtocolHandlerRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_file_system_access_requested(void* self, void* request) {
    QWebEnginePage_FileSystemAccessRequested((QWebEnginePage*)self, (QWebEngineFileSystemAccessRequest*)request);
}

void q_webenginepage_on_file_system_access_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_FileSystemAccessRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_select_client_certificate(void* self, void* clientCertSelection) {
    QWebEnginePage_SelectClientCertificate((QWebEnginePage*)self, (QWebEngineClientCertificateSelection*)clientCertSelection);
}

void q_webenginepage_on_select_client_certificate(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_SelectClientCertificate((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_authentication_required(void* self, void* requestUrl, void* authenticator) {
    QWebEnginePage_AuthenticationRequired((QWebEnginePage*)self, (QUrl*)requestUrl, (QAuthenticator*)authenticator);
}

void q_webenginepage_on_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QWebEnginePage_Connect_AuthenticationRequired((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_proxy_authentication_required(void* self, void* requestUrl, void* authenticator, const char* proxyHost) {
    QWebEnginePage_ProxyAuthenticationRequired((QWebEnginePage*)self, (QUrl*)requestUrl, (QAuthenticator*)authenticator, qstring(proxyHost));
}

void q_webenginepage_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*, const char*)) {
    QWebEnginePage_Connect_ProxyAuthenticationRequired((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_render_process_terminated(void* self, int32_t terminationStatus, int exitCode) {
    QWebEnginePage_RenderProcessTerminated((QWebEnginePage*)self, terminationStatus, exitCode);
}

void q_webenginepage_on_render_process_terminated(void* self, void (*callback)(void*, int32_t, int)) {
    QWebEnginePage_Connect_RenderProcessTerminated((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_desktop_media_requested(void* self, void* request) {
    QWebEnginePage_DesktopMediaRequested((QWebEnginePage*)self, (QWebEngineDesktopMediaRequest*)request);
}

void q_webenginepage_on_desktop_media_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_DesktopMediaRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_certificate_error(void* self, void* certificateError) {
    QWebEnginePage_CertificateError((QWebEnginePage*)self, (QWebEngineCertificateError*)certificateError);
}

void q_webenginepage_on_certificate_error(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_CertificateError((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_navigation_requested(void* self, void* request) {
    QWebEnginePage_NavigationRequested((QWebEnginePage*)self, (QWebEngineNavigationRequest*)request);
}

void q_webenginepage_on_navigation_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_NavigationRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_new_window_requested(void* self, void* request) {
    QWebEnginePage_NewWindowRequested((QWebEnginePage*)self, (QWebEngineNewWindowRequest*)request);
}

void q_webenginepage_on_new_window_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_NewWindowRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_title_changed(void* self, const char* title) {
    QWebEnginePage_TitleChanged((QWebEnginePage*)self, qstring(title));
}

void q_webenginepage_on_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWebEnginePage_Connect_TitleChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_url_changed(void* self, void* url) {
    QWebEnginePage_UrlChanged((QWebEnginePage*)self, (QUrl*)url);
}

void q_webenginepage_on_url_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_UrlChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_icon_url_changed(void* self, void* url) {
    QWebEnginePage_IconUrlChanged((QWebEnginePage*)self, (QUrl*)url);
}

void q_webenginepage_on_icon_url_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_IconUrlChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_icon_changed(void* self, void* icon) {
    QWebEnginePage_IconChanged((QWebEnginePage*)self, (QIcon*)icon);
}

void q_webenginepage_on_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_IconChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_zoom_factor_changed(void* self, double factor) {
    QWebEnginePage_ZoomFactorChanged((QWebEnginePage*)self, factor);
}

void q_webenginepage_on_zoom_factor_changed(void* self, void (*callback)(void*, double)) {
    QWebEnginePage_Connect_ZoomFactorChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_scroll_position_changed(void* self, void* position) {
    QWebEnginePage_ScrollPositionChanged((QWebEnginePage*)self, (QPointF*)position);
}

void q_webenginepage_on_scroll_position_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_ScrollPositionChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_contents_size_changed(void* self, void* size) {
    QWebEnginePage_ContentsSizeChanged((QWebEnginePage*)self, (QSizeF*)size);
}

void q_webenginepage_on_contents_size_changed(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_ContentsSizeChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_audio_muted_changed(void* self, bool muted) {
    QWebEnginePage_AudioMutedChanged((QWebEnginePage*)self, muted);
}

void q_webenginepage_on_audio_muted_changed(void* self, void (*callback)(void*, bool)) {
    QWebEnginePage_Connect_AudioMutedChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_recently_audible_changed(void* self, bool recentlyAudible) {
    QWebEnginePage_RecentlyAudibleChanged((QWebEnginePage*)self, recentlyAudible);
}

void q_webenginepage_on_recently_audible_changed(void* self, void (*callback)(void*, bool)) {
    QWebEnginePage_Connect_RecentlyAudibleChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_render_process_pid_changed(void* self, long long pid) {
    QWebEnginePage_RenderProcessPidChanged((QWebEnginePage*)self, pid);
}

void q_webenginepage_on_render_process_pid_changed(void* self, void (*callback)(void*, long long)) {
    QWebEnginePage_Connect_RenderProcessPidChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_pdf_printing_finished(void* self, const char* filePath, bool success) {
    QWebEnginePage_PdfPrintingFinished((QWebEnginePage*)self, qstring(filePath), success);
}

void q_webenginepage_on_pdf_printing_finished(void* self, void (*callback)(void*, const char*, bool)) {
    QWebEnginePage_Connect_PdfPrintingFinished((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_print_requested(void* self) {
    QWebEnginePage_PrintRequested((QWebEnginePage*)self);
}

void q_webenginepage_on_print_requested(void* self, void (*callback)(void*)) {
    QWebEnginePage_Connect_PrintRequested((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_print_requested_by_frame(void* self, void* frame) {
    QWebEnginePage_PrintRequestedByFrame((QWebEnginePage*)self, (QWebEngineFrame*)frame);
}

void q_webenginepage_on_print_requested_by_frame(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_PrintRequestedByFrame((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_visible_changed(void* self, bool visible) {
    QWebEnginePage_VisibleChanged((QWebEnginePage*)self, visible);
}

void q_webenginepage_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QWebEnginePage_Connect_VisibleChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_lifecycle_state_changed(void* self, int32_t state) {
    QWebEnginePage_LifecycleStateChanged((QWebEnginePage*)self, state);
}

void q_webenginepage_on_lifecycle_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWebEnginePage_Connect_LifecycleStateChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_recommended_state_changed(void* self, int32_t state) {
    QWebEnginePage_RecommendedStateChanged((QWebEnginePage*)self, state);
}

void q_webenginepage_on_recommended_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWebEnginePage_Connect_RecommendedStateChanged((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_find_text_finished(void* self, void* result) {
    QWebEnginePage_FindTextFinished((QWebEnginePage*)self, (QWebEngineFindTextResult*)result);
}

void q_webenginepage_on_find_text_finished(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_FindTextFinished((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_q_about_to_delete(void* self) {
    QWebEnginePage_QAboutToDelete((QWebEnginePage*)self);
}

void q_webenginepage_on_q_about_to_delete(void* self, void (*callback)(void*)) {
    QWebEnginePage_Connect_QAboutToDelete((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_web_auth_ux_requested(void* self, void* request) {
    QWebEnginePage_WebAuthUxRequested((QWebEnginePage*)self, (QWebEngineWebAuthUxRequest*)request);
}

void q_webenginepage_on_web_auth_ux_requested(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_Connect_WebAuthUxRequested((QWebEnginePage*)self, (intptr_t)callback);
}

QWebEnginePage* q_webenginepage_create_window(void* self, int32_t type) {
    return QWebEnginePage_CreateWindow((QWebEnginePage*)self, type);
}

void q_webenginepage_on_create_window(void* self, QWebEnginePage* (*callback)(void*, int32_t)) {
    QWebEnginePage_OnCreateWindow((QWebEnginePage*)self, (intptr_t)callback);
}

QWebEnginePage* q_webenginepage_qbase_create_window(void* self, int32_t type) {
    return QWebEnginePage_QBaseCreateWindow((QWebEnginePage*)self, type);
}

const char** q_webenginepage_choose_files(void* self, int32_t mode, const char* oldFiles[static 1], const char* acceptedMimeTypes[static 1]) {
    size_t oldFiles_len = libqt_strv_length(oldFiles);
    libqt_string* oldFiles_qstr = (libqt_string*)malloc(oldFiles_len * sizeof(libqt_string));
    if (oldFiles_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
        abort();
    }
    for (size_t i = 0; i < oldFiles_len; ++i) {
        oldFiles_qstr[i] = qstring(oldFiles[i]);
    }
    libqt_list oldFiles_list = qlist(oldFiles_qstr, oldFiles_len);
    size_t acceptedMimeTypes_len = libqt_strv_length(acceptedMimeTypes);
    libqt_string* acceptedMimeTypes_qstr = (libqt_string*)malloc(acceptedMimeTypes_len * sizeof(libqt_string));
    if (acceptedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
        abort();
    }
    for (size_t i = 0; i < acceptedMimeTypes_len; ++i) {
        acceptedMimeTypes_qstr[i] = qstring(acceptedMimeTypes[i]);
    }
    libqt_list acceptedMimeTypes_list = qlist(acceptedMimeTypes_qstr, acceptedMimeTypes_len);
    libqt_list _arr = QWebEnginePage_ChooseFiles((QWebEnginePage*)self, mode, oldFiles_list, acceptedMimeTypes_list);
    free(oldFiles_qstr);
    free(acceptedMimeTypes_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
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

void q_webenginepage_on_choose_files(void* self, const char** (*callback)(void*, int32_t, const char**, const char**)) {
    QWebEnginePage_OnChooseFiles((QWebEnginePage*)self, (intptr_t)callback);
}

const char** q_webenginepage_qbase_choose_files(void* self, int32_t mode, const char* oldFiles[static 1], const char* acceptedMimeTypes[static 1]) {
    size_t oldFiles_len = libqt_strv_length(oldFiles);
    libqt_string* oldFiles_qstr = (libqt_string*)malloc(oldFiles_len * sizeof(libqt_string));
    if (oldFiles_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
        abort();
    }
    for (size_t i = 0; i < oldFiles_len; ++i) {
        oldFiles_qstr[i] = qstring(oldFiles[i]);
    }
    libqt_list oldFiles_list = qlist(oldFiles_qstr, oldFiles_len);
    size_t acceptedMimeTypes_len = libqt_strv_length(acceptedMimeTypes);
    libqt_string* acceptedMimeTypes_qstr = (libqt_string*)malloc(acceptedMimeTypes_len * sizeof(libqt_string));
    if (acceptedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
        abort();
    }
    for (size_t i = 0; i < acceptedMimeTypes_len; ++i) {
        acceptedMimeTypes_qstr[i] = qstring(acceptedMimeTypes[i]);
    }
    libqt_list acceptedMimeTypes_list = qlist(acceptedMimeTypes_qstr, acceptedMimeTypes_len);
    libqt_list _arr = QWebEnginePage_QBaseChooseFiles((QWebEnginePage*)self, mode, oldFiles_list, acceptedMimeTypes_list);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_choose_files\n");
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

void q_webenginepage_java_script_alert(void* self, void* securityOrigin, const char* msg) {
    QWebEnginePage_JavaScriptAlert((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

void q_webenginepage_on_java_script_alert(void* self, void (*callback)(void*, void*, const char*)) {
    QWebEnginePage_OnJavaScriptAlert((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_qbase_java_script_alert(void* self, void* securityOrigin, const char* msg) {
    QWebEnginePage_QBaseJavaScriptAlert((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

bool q_webenginepage_java_script_confirm(void* self, void* securityOrigin, const char* msg) {
    return QWebEnginePage_JavaScriptConfirm((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

void q_webenginepage_on_java_script_confirm(void* self, bool (*callback)(void*, void*, const char*)) {
    QWebEnginePage_OnJavaScriptConfirm((QWebEnginePage*)self, (intptr_t)callback);
}

bool q_webenginepage_qbase_java_script_confirm(void* self, void* securityOrigin, const char* msg) {
    return QWebEnginePage_QBaseJavaScriptConfirm((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

void q_webenginepage_java_script_console_message(void* self, int32_t level, const char* message, int lineNumber, const char* sourceID) {
    QWebEnginePage_JavaScriptConsoleMessage((QWebEnginePage*)self, level, qstring(message), lineNumber, qstring(sourceID));
}

void q_webenginepage_on_java_script_console_message(void* self, void (*callback)(void*, int32_t, const char*, int, const char*)) {
    QWebEnginePage_OnJavaScriptConsoleMessage((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_qbase_java_script_console_message(void* self, int32_t level, const char* message, int lineNumber, const char* sourceID) {
    QWebEnginePage_QBaseJavaScriptConsoleMessage((QWebEnginePage*)self, level, qstring(message), lineNumber, qstring(sourceID));
}

bool q_webenginepage_accept_navigation_request(void* self, void* url, int32_t type, bool isMainFrame) {
    return QWebEnginePage_AcceptNavigationRequest((QWebEnginePage*)self, (QUrl*)url, type, isMainFrame);
}

void q_webenginepage_on_accept_navigation_request(void* self, bool (*callback)(void*, void*, int32_t, bool)) {
    QWebEnginePage_OnAcceptNavigationRequest((QWebEnginePage*)self, (intptr_t)callback);
}

bool q_webenginepage_qbase_accept_navigation_request(void* self, void* url, int32_t type, bool isMainFrame) {
    return QWebEnginePage_QBaseAcceptNavigationRequest((QWebEnginePage*)self, (QUrl*)url, type, isMainFrame);
}

const char* q_webenginepage_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginepage_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginepage_find_text2(void* self, const char* subString, int32_t options) {
    QWebEnginePage_FindText2((QWebEnginePage*)self, qstring(subString), options);
}

void q_webenginepage_download2(void* self, void* url, const char* filename) {
    QWebEnginePage_Download2((QWebEnginePage*)self, (QUrl*)url, qstring(filename));
}

void q_webenginepage_set_html2(void* self, const char* html, void* baseUrl) {
    QWebEnginePage_SetHtml2((QWebEnginePage*)self, qstring(html), (QUrl*)baseUrl);
}

void q_webenginepage_set_content2(void* self, const char* data, const char* mimeType) {
    QWebEnginePage_SetContent2((QWebEnginePage*)self, qstring(data), qstring(mimeType));
}

void q_webenginepage_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl) {
    QWebEnginePage_SetContent3((QWebEnginePage*)self, qstring(data), qstring(mimeType), (QUrl*)baseUrl);
}

void q_webenginepage_run_java_script22(void* self, const char* scriptSource, uint32_t worldId) {
    QWebEnginePage_RunJavaScript22((QWebEnginePage*)self, qstring(scriptSource), worldId);
}

void q_webenginepage_set_web_channel2(void* self, void* param1, uint32_t worldId) {
    QWebEnginePage_SetWebChannel2((QWebEnginePage*)self, (QWebChannel*)param1, worldId);
}

void q_webenginepage_save2(void* self, const char* filePath, int32_t format) {
    QWebEnginePage_Save2((QWebEnginePage*)self, qstring(filePath), format);
}

void q_webenginepage_print_to_pdf22(void* self, const char* filePath, void* layout) {
    QWebEnginePage_PrintToPdf22((QWebEnginePage*)self, qstring(filePath), (QPageLayout*)layout);
}

void q_webenginepage_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges) {
    QWebEnginePage_PrintToPdf3((QWebEnginePage*)self, qstring(filePath), (QPageLayout*)layout, (QPageRanges*)ranges);
}

const char* q_webenginepage_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginepage_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginepage_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginepage_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginepage_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginepage_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginepage_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginepage_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginepage_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginepage_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webenginepage_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webenginepage_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginepage_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginepage_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginepage_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginepage_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginepage_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginepage_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginepage_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginepage_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginepage_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginepage_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginepage_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginepage_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginepage_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginepage_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginepage_dynamic_property_names\n");
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

QBindingStorage* q_webenginepage_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginepage_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginepage_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginepage_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webenginepage_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginepage_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginepage_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginepage_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginepage_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webenginepage_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webenginepage_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webenginepage_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webenginepage_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginepage_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webenginepage_event_filter(void* self, void* watched, void* event) {
    return QWebEnginePage_EventFilter((QWebEnginePage*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webenginepage_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEnginePage_QBaseEventFilter((QWebEnginePage*)self, (QObject*)watched, (QEvent*)event);
}

void q_webenginepage_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebEnginePage_OnEventFilter((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_timer_event(void* self, void* event) {
    QWebEnginePage_TimerEvent((QWebEnginePage*)self, (QTimerEvent*)event);
}

void q_webenginepage_qbase_timer_event(void* self, void* event) {
    QWebEnginePage_QBaseTimerEvent((QWebEnginePage*)self, (QTimerEvent*)event);
}

void q_webenginepage_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_OnTimerEvent((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_child_event(void* self, void* event) {
    QWebEnginePage_ChildEvent((QWebEnginePage*)self, (QChildEvent*)event);
}

void q_webenginepage_qbase_child_event(void* self, void* event) {
    QWebEnginePage_QBaseChildEvent((QWebEnginePage*)self, (QChildEvent*)event);
}

void q_webenginepage_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_OnChildEvent((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_custom_event(void* self, void* event) {
    QWebEnginePage_CustomEvent((QWebEnginePage*)self, (QEvent*)event);
}

void q_webenginepage_qbase_custom_event(void* self, void* event) {
    QWebEnginePage_QBaseCustomEvent((QWebEnginePage*)self, (QEvent*)event);
}

void q_webenginepage_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_OnCustomEvent((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_connect_notify(void* self, void* signal) {
    QWebEnginePage_ConnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

void q_webenginepage_qbase_connect_notify(void* self, void* signal) {
    QWebEnginePage_QBaseConnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

void q_webenginepage_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_OnConnectNotify((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_disconnect_notify(void* self, void* signal) {
    QWebEnginePage_DisconnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

void q_webenginepage_qbase_disconnect_notify(void* self, void* signal) {
    QWebEnginePage_QBaseDisconnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

void q_webenginepage_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEnginePage_OnDisconnectNotify((QWebEnginePage*)self, (intptr_t)callback);
}

QObject* q_webenginepage_sender(void* self) {
    return QWebEnginePage_Sender((QWebEnginePage*)self);
}

QObject* q_webenginepage_qbase_sender(void* self) {
    return QWebEnginePage_QBaseSender((QWebEnginePage*)self);
}

void q_webenginepage_on_sender(void* self, QObject* (*callback)()) {
    QWebEnginePage_OnSender((QWebEnginePage*)self, (intptr_t)callback);
}

int32_t q_webenginepage_sender_signal_index(void* self) {
    return QWebEnginePage_SenderSignalIndex((QWebEnginePage*)self);
}

int32_t q_webenginepage_qbase_sender_signal_index(void* self) {
    return QWebEnginePage_QBaseSenderSignalIndex((QWebEnginePage*)self);
}

void q_webenginepage_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebEnginePage_OnSenderSignalIndex((QWebEnginePage*)self, (intptr_t)callback);
}

int32_t q_webenginepage_receivers(void* self, const char* signal) {
    return QWebEnginePage_Receivers((QWebEnginePage*)self, signal);
}

int32_t q_webenginepage_qbase_receivers(void* self, const char* signal) {
    return QWebEnginePage_QBaseReceivers((QWebEnginePage*)self, signal);
}

void q_webenginepage_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebEnginePage_OnReceivers((QWebEnginePage*)self, (intptr_t)callback);
}

bool q_webenginepage_is_signal_connected(void* self, void* signal) {
    return QWebEnginePage_IsSignalConnected((QWebEnginePage*)self, (QMetaMethod*)signal);
}

bool q_webenginepage_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEnginePage_QBaseIsSignalConnected((QWebEnginePage*)self, (QMetaMethod*)signal);
}

void q_webenginepage_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebEnginePage_OnIsSignalConnected((QWebEnginePage*)self, (intptr_t)callback);
}

void q_webenginepage_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webenginepage_delete(void* self) {
    QWebEnginePage_Delete((QWebEnginePage*)(self));
}
