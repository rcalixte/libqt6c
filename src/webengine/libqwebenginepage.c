#include "../libqaction.hpp"
#include "../libqanystringview.hpp"
#include "../network/libqauthenticator.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../webchannel/libqwebchannel.hpp"
#include "libqwebenginecertificateerror.hpp"
#include "libqwebengineclientcertificateselection.hpp"
#include "libqwebenginefilesystemaccessrequest.hpp"
#include "libqwebenginefindtextresult.hpp"
#include "libqwebenginefullscreenrequest.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebengineloadinginfo.hpp"
#include "libqwebenginenavigationrequest.hpp"
#include "libqwebenginenewwindowrequest.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebenginequotarequest.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginesettings.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebenginepage.h"

/// https://doc.qt.io/qt-6/qwebenginepage.html

/// q_webenginepage_new constructs a new QWebEnginePage object.
///
///
QWebEnginePage* q_webenginepage_new() {
    return QWebEnginePage_new();
}

/// q_webenginepage_new2 constructs a new QWebEnginePage object.
///
/// ``` QWebEngineProfile* profile ```
QWebEnginePage* q_webenginepage_new2(void* profile) {
    return QWebEnginePage_new2((QWebEngineProfile*)profile);
}

/// q_webenginepage_new3 constructs a new QWebEnginePage object.
///
/// ``` QObject* parent ```
QWebEnginePage* q_webenginepage_new3(void* parent) {
    return QWebEnginePage_new3((QObject*)parent);
}

/// q_webenginepage_new4 constructs a new QWebEnginePage object.
///
/// ``` QWebEngineProfile* profile, QObject* parent ```
QWebEnginePage* q_webenginepage_new4(void* profile, void* parent) {
    return QWebEnginePage_new4((QWebEngineProfile*)profile, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEnginePage* self ```
QMetaObject* q_webenginepage_meta_object(void* self) {
    return QWebEnginePage_MetaObject((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, const char* param1 ```
void* q_webenginepage_metacast(void* self, const char* param1) {
    return QWebEnginePage_Metacast((QWebEnginePage*)self, param1);
}

/// ``` QWebEnginePage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginepage_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEnginePage_Metacall((QWebEnginePage*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, int32_t (*slot)(QWebEnginePage*, enum QMetaObject__Call, int, void*) ```
void q_webenginepage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebEnginePage_OnMetacall((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginepage_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEnginePage_QBaseMetacall((QWebEnginePage*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginepage_tr(const char* s) {
    libqt_string _str = QWebEnginePage_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#history)
///
/// ``` QWebEnginePage* self ```
QWebEngineHistory* q_webenginepage_history(void* self) {
    return QWebEnginePage_History((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_has_selection(void* self) {
    return QWebEnginePage_HasSelection((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_selected_text(void* self) {
    libqt_string _str = QWebEnginePage_SelectedText((QWebEnginePage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
///
/// ``` QWebEnginePage* self ```
QWebEngineProfile* q_webenginepage_profile(void* self) {
    return QWebEnginePage_Profile((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#action)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action ```
QAction* q_webenginepage_action(void* self, int64_t action) {
    return QWebEnginePage_Action((QWebEnginePage*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webenginepage_trigger_action(void* self, int64_t action, bool checked) {
    QWebEnginePage_TriggerAction((QWebEnginePage*)self, action, checked);
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__WebAction, bool) ```
void q_webenginepage_on_trigger_action(void* self, void (*slot)(void*, int64_t, bool)) {
    QWebEnginePage_OnTriggerAction((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webenginepage_qbase_trigger_action(void* self, int64_t action, bool checked) {
    QWebEnginePage_QBaseTriggerAction((QWebEnginePage*)self, action, checked);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
///
/// ``` QWebEnginePage* self, const char* replacement ```
void q_webenginepage_replace_misspelled_word(void* self, const char* replacement) {
    QWebEnginePage_ReplaceMisspelledWord((QWebEnginePage*)self, qstring(replacement));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#event)
///
/// ``` QWebEnginePage* self, QEvent* param1 ```
bool q_webenginepage_event(void* self, void* param1) {
    return QWebEnginePage_Event((QWebEnginePage*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QEvent*) ```
void q_webenginepage_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebEnginePage_OnEvent((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QEvent* param1 ```
bool q_webenginepage_qbase_event(void* self, void* param1) {
    return QWebEnginePage_QBaseEvent((QWebEnginePage*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setFeaturePermission)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature, enum QWebEnginePage__PermissionPolicy policy ```
void q_webenginepage_set_feature_permission(void* self, void* securityOrigin, int64_t feature, int64_t policy) {
    QWebEnginePage_SetFeaturePermission((QWebEnginePage*)self, (QUrl*)securityOrigin, feature, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_loading(void* self) {
    return QWebEnginePage_IsLoading((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_load(void* self, void* url) {
    QWebEnginePage_Load((QWebEnginePage*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// ``` QWebEnginePage* self, QWebEngineHttpRequest* request ```
void q_webenginepage_load_with_request(void* self, void* request) {
    QWebEnginePage_LoadWithRequest((QWebEnginePage*)self, (QWebEngineHttpRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_download(void* self, void* url) {
    QWebEnginePage_Download((QWebEnginePage*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// ``` QWebEnginePage* self, const char* html ```
void q_webenginepage_set_html(void* self, const char* html) {
    QWebEnginePage_SetHtml((QWebEnginePage*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data ```
void q_webenginepage_set_content(void* self, const char* data) {
    QWebEnginePage_SetContent((QWebEnginePage*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#title)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_title(void* self) {
    libqt_string _str = QWebEnginePage_Title((QWebEnginePage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_set_url(void* self, void* url) {
    QWebEnginePage_SetUrl((QWebEnginePage*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#url)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_url(void* self) {
    return QWebEnginePage_Url((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_requested_url(void* self) {
    return QWebEnginePage_RequestedUrl((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
///
/// ``` QWebEnginePage* self ```
QUrl* q_webenginepage_icon_url(void* self) {
    return QWebEnginePage_IconUrl((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
///
/// ``` QWebEnginePage* self ```
QIcon* q_webenginepage_icon(void* self) {
    return QWebEnginePage_Icon((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
///
/// ``` QWebEnginePage* self ```
double q_webenginepage_zoom_factor(void* self) {
    return QWebEnginePage_ZoomFactor((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
///
/// ``` QWebEnginePage* self, double factor ```
void q_webenginepage_set_zoom_factor(void* self, double factor) {
    QWebEnginePage_SetZoomFactor((QWebEnginePage*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
///
/// ``` QWebEnginePage* self ```
QPointF* q_webenginepage_scroll_position(void* self) {
    return QWebEnginePage_ScrollPosition((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
///
/// ``` QWebEnginePage* self ```
QSizeF* q_webenginepage_contents_size(void* self) {
    return QWebEnginePage_ContentsSize((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
///
/// ``` QWebEnginePage* self ```
QWebEngineScriptCollection* q_webenginepage_scripts(void* self) {
    return QWebEnginePage_Scripts((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
///
/// ``` QWebEnginePage* self ```
QWebEngineSettings* q_webenginepage_settings(void* self) {
    return QWebEnginePage_Settings((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
///
/// ``` QWebEnginePage* self ```
QWebChannel* q_webenginepage_web_channel(void* self) {
    return QWebEnginePage_WebChannel((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// ``` QWebEnginePage* self, QWebChannel* param1 ```
void q_webenginepage_set_web_channel(void* self, void* param1) {
    QWebEnginePage_SetWebChannel((QWebEnginePage*)self, (QWebChannel*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
///
/// ``` QWebEnginePage* self ```
QColor* q_webenginepage_background_color(void* self) {
    return QWebEnginePage_BackgroundColor((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
///
/// ``` QWebEnginePage* self, QColor* color ```
void q_webenginepage_set_background_color(void* self, void* color) {
    QWebEnginePage_SetBackgroundColor((QWebEnginePage*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// ``` QWebEnginePage* self, const char* filePath ```
void q_webenginepage_save(void* self, const char* filePath) {
    QWebEnginePage_Save((QWebEnginePage*)self, qstring(filePath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_audio_muted(void* self) {
    return QWebEnginePage_IsAudioMuted((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
///
/// ``` QWebEnginePage* self, bool muted ```
void q_webenginepage_set_audio_muted(void* self, bool muted) {
    QWebEnginePage_SetAudioMuted((QWebEnginePage*)self, muted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_recently_audible(void* self) {
    return QWebEnginePage_RecentlyAudible((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
///
/// ``` QWebEnginePage* self ```
long long q_webenginepage_render_process_pid(void* self) {
    return QWebEnginePage_RenderProcessPid((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath ```
void q_webenginepage_print_to_pdf(void* self, const char* filePath) {
    QWebEnginePage_PrintToPdf((QWebEnginePage*)self, qstring(filePath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
///
/// ``` QWebEnginePage* self, QWebEnginePage* page ```
void q_webenginepage_set_inspected_page(void* self, void* page) {
    QWebEnginePage_SetInspectedPage((QWebEnginePage*)self, (QWebEnginePage*)page);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
///
/// ``` QWebEnginePage* self ```
QWebEnginePage* q_webenginepage_inspected_page(void* self) {
    return QWebEnginePage_InspectedPage((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
///
/// ``` QWebEnginePage* self, QWebEnginePage* page ```
void q_webenginepage_set_dev_tools_page(void* self, void* page) {
    QWebEnginePage_SetDevToolsPage((QWebEnginePage*)self, (QWebEnginePage*)page);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
///
/// ``` QWebEnginePage* self ```
QWebEnginePage* q_webenginepage_dev_tools_page(void* self) {
    return QWebEnginePage_DevToolsPage((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
///
/// ``` QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor ```
void q_webenginepage_set_url_request_interceptor(void* self, void* interceptor) {
    QWebEnginePage_SetUrlRequestInterceptor((QWebEnginePage*)self, (QWebEngineUrlRequestInterceptor*)interceptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
///
/// ``` QWebEnginePage* self ```
int64_t q_webenginepage_lifecycle_state(void* self) {
    return QWebEnginePage_LifecycleState((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_set_lifecycle_state(void* self, int64_t state) {
    QWebEnginePage_SetLifecycleState((QWebEnginePage*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
///
/// ``` QWebEnginePage* self ```
int64_t q_webenginepage_recommended_state(void* self) {
    return QWebEnginePage_RecommendedState((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_visible(void* self) {
    return QWebEnginePage_IsVisible((QWebEnginePage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
///
/// ``` QWebEnginePage* self, bool visible ```
void q_webenginepage_set_visible(void* self, bool visible) {
    QWebEnginePage_SetVisible((QWebEnginePage*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
///
/// ``` QWebEnginePage* self, QWebEngineNewWindowRequest* request ```
void q_webenginepage_accept_as_new_window(void* self, void* request) {
    QWebEnginePage_AcceptAsNewWindow((QWebEnginePage*)self, (QWebEngineNewWindowRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_load_started(void* self) {
    QWebEnginePage_LoadStarted((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_load_started(void* self, void (*slot)(void*)) {
    QWebEnginePage_Connect_LoadStarted((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
///
/// ``` QWebEnginePage* self, int progress ```
void q_webenginepage_load_progress(void* self, int progress) {
    QWebEnginePage_LoadProgress((QWebEnginePage*)self, progress);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, int) ```
void q_webenginepage_on_load_progress(void* self, void (*slot)(void*, int)) {
    QWebEnginePage_Connect_LoadProgress((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
///
/// ``` QWebEnginePage* self, bool ok ```
void q_webenginepage_load_finished(void* self, bool ok) {
    QWebEnginePage_LoadFinished((QWebEnginePage*)self, ok);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_load_finished(void* self, void (*slot)(void*, bool)) {
    QWebEnginePage_Connect_LoadFinished((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
///
/// ``` QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo ```
void q_webenginepage_loading_changed(void* self, void* loadingInfo) {
    QWebEnginePage_LoadingChanged((QWebEnginePage*)self, (QWebEngineLoadingInfo*)loadingInfo);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineLoadingInfo*) ```
void q_webenginepage_on_loading_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_LoadingChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
///
/// ``` QWebEnginePage* self, const char* url ```
void q_webenginepage_link_hovered(void* self, const char* url) {
    QWebEnginePage_LinkHovered((QWebEnginePage*)self, qstring(url));
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_link_hovered(void* self, void (*slot)(void*, const char*)) {
    QWebEnginePage_Connect_LinkHovered((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_selection_changed(void* self) {
    QWebEnginePage_SelectionChanged((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_selection_changed(void* self, void (*slot)(void*)) {
    QWebEnginePage_Connect_SelectionChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
///
/// ``` QWebEnginePage* self, QRect* geom ```
void q_webenginepage_geometry_change_requested(void* self, void* geom) {
    QWebEnginePage_GeometryChangeRequested((QWebEnginePage*)self, (QRect*)geom);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QRect*) ```
void q_webenginepage_on_geometry_change_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_GeometryChangeRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_window_close_requested(void* self) {
    QWebEnginePage_WindowCloseRequested((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_window_close_requested(void* self, void (*slot)(void*)) {
    QWebEnginePage_Connect_WindowCloseRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature ```
void q_webenginepage_feature_permission_requested(void* self, void* securityOrigin, int64_t feature) {
    QWebEnginePage_FeaturePermissionRequested((QWebEnginePage*)self, (QUrl*)securityOrigin, feature);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__Feature) ```
void q_webenginepage_on_feature_permission_requested(void* self, void (*slot)(void*, void*, int64_t)) {
    QWebEnginePage_Connect_FeaturePermissionRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature ```
void q_webenginepage_feature_permission_request_canceled(void* self, void* securityOrigin, int64_t feature) {
    QWebEnginePage_FeaturePermissionRequestCanceled((QWebEnginePage*)self, (QUrl*)securityOrigin, feature);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__Feature) ```
void q_webenginepage_on_feature_permission_request_canceled(void* self, void (*slot)(void*, void*, int64_t)) {
    QWebEnginePage_Connect_FeaturePermissionRequestCanceled((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
///
/// ``` QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest ```
void q_webenginepage_full_screen_requested(void* self, void* fullScreenRequest) {
    QWebEnginePage_FullScreenRequested((QWebEnginePage*)self, (QWebEngineFullScreenRequest*)fullScreenRequest);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFullScreenRequest*) ```
void q_webenginepage_on_full_screen_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_FullScreenRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
///
/// ``` QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest ```
void q_webenginepage_quota_requested(void* self, void* quotaRequest) {
    QWebEnginePage_QuotaRequested((QWebEnginePage*)self, (QWebEngineQuotaRequest*)quotaRequest);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineQuotaRequest*) ```
void q_webenginepage_on_quota_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_QuotaRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
///
/// ``` QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request ```
void q_webenginepage_register_protocol_handler_requested(void* self, void* request) {
    QWebEnginePage_RegisterProtocolHandlerRequested((QWebEnginePage*)self, (QWebEngineRegisterProtocolHandlerRequest*)request);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineRegisterProtocolHandlerRequest*) ```
void q_webenginepage_on_register_protocol_handler_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_RegisterProtocolHandlerRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
///
/// ``` QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request ```
void q_webenginepage_file_system_access_requested(void* self, void* request) {
    QWebEnginePage_FileSystemAccessRequested((QWebEnginePage*)self, (QWebEngineFileSystemAccessRequest*)request);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFileSystemAccessRequest*) ```
void q_webenginepage_on_file_system_access_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_FileSystemAccessRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
///
/// ``` QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection ```
void q_webenginepage_select_client_certificate(void* self, void* clientCertSelection) {
    QWebEnginePage_SelectClientCertificate((QWebEnginePage*)self, (QWebEngineClientCertificateSelection*)clientCertSelection);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineClientCertificateSelection*) ```
void q_webenginepage_on_select_client_certificate(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_SelectClientCertificate((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
///
/// ``` QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator ```
void q_webenginepage_authentication_required(void* self, void* requestUrl, void* authenticator) {
    QWebEnginePage_AuthenticationRequired((QWebEnginePage*)self, (QUrl*)requestUrl, (QAuthenticator*)authenticator);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, QAuthenticator*) ```
void q_webenginepage_on_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QWebEnginePage_Connect_AuthenticationRequired((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
///
/// ``` QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, const char* proxyHost ```
void q_webenginepage_proxy_authentication_required(void* self, void* requestUrl, void* authenticator, const char* proxyHost) {
    QWebEnginePage_ProxyAuthenticationRequired((QWebEnginePage*)self, (QUrl*)requestUrl, (QAuthenticator*)authenticator, qstring(proxyHost));
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, QAuthenticator*, const char*) ```
void q_webenginepage_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*, const char*)) {
    QWebEnginePage_Connect_ProxyAuthenticationRequired((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode ```
void q_webenginepage_render_process_terminated(void* self, int64_t terminationStatus, int exitCode) {
    QWebEnginePage_RenderProcessTerminated((QWebEnginePage*)self, terminationStatus, exitCode);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__RenderProcessTerminationStatus, int) ```
void q_webenginepage_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int)) {
    QWebEnginePage_Connect_RenderProcessTerminated((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
///
/// ``` QWebEnginePage* self, QWebEngineCertificateError* certificateError ```
void q_webenginepage_certificate_error(void* self, void* certificateError) {
    QWebEnginePage_CertificateError((QWebEnginePage*)self, (QWebEngineCertificateError*)certificateError);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineCertificateError*) ```
void q_webenginepage_on_certificate_error(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_CertificateError((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
///
/// ``` QWebEnginePage* self, QWebEngineNavigationRequest* request ```
void q_webenginepage_navigation_requested(void* self, void* request) {
    QWebEnginePage_NavigationRequested((QWebEnginePage*)self, (QWebEngineNavigationRequest*)request);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineNavigationRequest*) ```
void q_webenginepage_on_navigation_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_NavigationRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
///
/// ``` QWebEnginePage* self, QWebEngineNewWindowRequest* request ```
void q_webenginepage_new_window_requested(void* self, void* request) {
    QWebEnginePage_NewWindowRequested((QWebEnginePage*)self, (QWebEngineNewWindowRequest*)request);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineNewWindowRequest*) ```
void q_webenginepage_on_new_window_requested(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_NewWindowRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
///
/// ``` QWebEnginePage* self, const char* title ```
void q_webenginepage_title_changed(void* self, const char* title) {
    QWebEnginePage_TitleChanged((QWebEnginePage*)self, qstring(title));
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWebEnginePage_Connect_TitleChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_url_changed(void* self, void* url) {
    QWebEnginePage_UrlChanged((QWebEnginePage*)self, (QUrl*)url);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*) ```
void q_webenginepage_on_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_UrlChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
///
/// ``` QWebEnginePage* self, QUrl* url ```
void q_webenginepage_icon_url_changed(void* self, void* url) {
    QWebEnginePage_IconUrlChanged((QWebEnginePage*)self, (QUrl*)url);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*) ```
void q_webenginepage_on_icon_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_IconUrlChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
///
/// ``` QWebEnginePage* self, QIcon* icon ```
void q_webenginepage_icon_changed(void* self, void* icon) {
    QWebEnginePage_IconChanged((QWebEnginePage*)self, (QIcon*)icon);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QIcon*) ```
void q_webenginepage_on_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_IconChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
///
/// ``` QWebEnginePage* self, QPointF* position ```
void q_webenginepage_scroll_position_changed(void* self, void* position) {
    QWebEnginePage_ScrollPositionChanged((QWebEnginePage*)self, (QPointF*)position);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QPointF*) ```
void q_webenginepage_on_scroll_position_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_ScrollPositionChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
///
/// ``` QWebEnginePage* self, QSizeF* size ```
void q_webenginepage_contents_size_changed(void* self, void* size) {
    QWebEnginePage_ContentsSizeChanged((QWebEnginePage*)self, (QSizeF*)size);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QSizeF*) ```
void q_webenginepage_on_contents_size_changed(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_ContentsSizeChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
///
/// ``` QWebEnginePage* self, bool muted ```
void q_webenginepage_audio_muted_changed(void* self, bool muted) {
    QWebEnginePage_AudioMutedChanged((QWebEnginePage*)self, muted);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_audio_muted_changed(void* self, void (*slot)(void*, bool)) {
    QWebEnginePage_Connect_AudioMutedChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
///
/// ``` QWebEnginePage* self, bool recentlyAudible ```
void q_webenginepage_recently_audible_changed(void* self, bool recentlyAudible) {
    QWebEnginePage_RecentlyAudibleChanged((QWebEnginePage*)self, recentlyAudible);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_recently_audible_changed(void* self, void (*slot)(void*, bool)) {
    QWebEnginePage_Connect_RecentlyAudibleChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
///
/// ``` QWebEnginePage* self, long long pid ```
void q_webenginepage_render_process_pid_changed(void* self, long long pid) {
    QWebEnginePage_RenderProcessPidChanged((QWebEnginePage*)self, pid);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, long long) ```
void q_webenginepage_on_render_process_pid_changed(void* self, void (*slot)(void*, long long)) {
    QWebEnginePage_Connect_RenderProcessPidChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
///
/// ``` QWebEnginePage* self, const char* filePath, bool success ```
void q_webenginepage_pdf_printing_finished(void* self, const char* filePath, bool success) {
    QWebEnginePage_PdfPrintingFinished((QWebEnginePage*)self, qstring(filePath), success);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, const char*, bool) ```
void q_webenginepage_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool)) {
    QWebEnginePage_Connect_PdfPrintingFinished((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_print_requested(void* self) {
    QWebEnginePage_PrintRequested((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_print_requested(void* self, void (*slot)(void*)) {
    QWebEnginePage_Connect_PrintRequested((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
///
/// ``` QWebEnginePage* self, bool visible ```
void q_webenginepage_visible_changed(void* self, bool visible) {
    QWebEnginePage_VisibleChanged((QWebEnginePage*)self, visible);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, bool) ```
void q_webenginepage_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QWebEnginePage_Connect_VisibleChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_lifecycle_state_changed(void* self, int64_t state) {
    QWebEnginePage_LifecycleStateChanged((QWebEnginePage*)self, state);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__LifecycleState) ```
void q_webenginepage_on_lifecycle_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWebEnginePage_Connect_LifecycleStateChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__LifecycleState state ```
void q_webenginepage_recommended_state_changed(void* self, int64_t state) {
    QWebEnginePage_RecommendedStateChanged((QWebEnginePage*)self, state);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__LifecycleState) ```
void q_webenginepage_on_recommended_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWebEnginePage_Connect_RecommendedStateChanged((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
///
/// ``` QWebEnginePage* self, QWebEngineFindTextResult* result ```
void q_webenginepage_find_text_finished(void* self, void* result) {
    QWebEnginePage_FindTextFinished((QWebEnginePage*)self, (QWebEngineFindTextResult*)result);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QWebEngineFindTextResult*) ```
void q_webenginepage_on_find_text_finished(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_Connect_FindTextFinished((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_q_about_to_delete(void* self) {
    QWebEnginePage_QAboutToDelete((QWebEnginePage*)self);
}

/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*) ```
void q_webenginepage_on_q_about_to_delete(void* self, void (*slot)(void*)) {
    QWebEnginePage_Connect_QAboutToDelete((QWebEnginePage*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEnginePage* q_webenginepage_create_window(void* self, int64_t typeVal) {
    return QWebEnginePage_CreateWindow((QWebEnginePage*)self, typeVal);
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, QWebEnginePage* (*slot)(QWebEnginePage*, enum QWebEnginePage__WebWindowType) ```
void q_webenginepage_on_create_window(void* self, QWebEnginePage* (*slot)(void*, int64_t)) {
    QWebEnginePage_OnCreateWindow((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEnginePage* q_webenginepage_qbase_create_window(void* self, int64_t typeVal) {
    return QWebEnginePage_QBaseCreateWindow((QWebEnginePage*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__FileSelectionMode mode, const char* oldFiles[], const char* acceptedMimeTypes[] ```
const char** q_webenginepage_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]) {
    size_t oldFiles_len = libqt_strv_length(oldFiles);
    libqt_string* oldFiles_qstr = malloc(oldFiles_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < oldFiles_len; ++_i) {
        oldFiles_qstr[_i] = qstring(oldFiles[_i]);
    }
    libqt_list oldFiles_list = qstrlist(oldFiles_qstr, oldFiles_len);
    size_t acceptedMimeTypes_len = libqt_strv_length(acceptedMimeTypes);
    libqt_string* acceptedMimeTypes_qstr = malloc(acceptedMimeTypes_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < acceptedMimeTypes_len; ++_i) {
        acceptedMimeTypes_qstr[_i] = qstring(acceptedMimeTypes[_i]);
    }
    libqt_list acceptedMimeTypes_list = qstrlist(acceptedMimeTypes_qstr, acceptedMimeTypes_len);
    libqt_list _arr = QWebEnginePage_ChooseFiles((QWebEnginePage*)self, mode, oldFiles_list, acceptedMimeTypes_list);
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

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, const char** (*slot)(QWebEnginePage*, enum QWebEnginePage__FileSelectionMode, const char*[], const char*[]) ```
void q_webenginepage_on_choose_files(void* self, const char** (*slot)(void*, int64_t, const char*, const char*)) {
    QWebEnginePage_OnChooseFiles((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__FileSelectionMode mode, const char* oldFiles[], const char* acceptedMimeTypes[] ```
const char** q_webenginepage_qbase_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]) {
    size_t oldFiles_len = libqt_strv_length(oldFiles);
    libqt_string* oldFiles_qstr = malloc(oldFiles_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < oldFiles_len; ++_i) {
        oldFiles_qstr[_i] = qstring(oldFiles[_i]);
    }
    libqt_list oldFiles_list = qstrlist(oldFiles_qstr, oldFiles_len);
    size_t acceptedMimeTypes_len = libqt_strv_length(acceptedMimeTypes);
    libqt_string* acceptedMimeTypes_qstr = malloc(acceptedMimeTypes_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < acceptedMimeTypes_len; ++_i) {
        acceptedMimeTypes_qstr[_i] = qstring(acceptedMimeTypes[_i]);
    }
    libqt_list acceptedMimeTypes_list = qstrlist(acceptedMimeTypes_qstr, acceptedMimeTypes_len);
    libqt_list _arr = QWebEnginePage_QBaseChooseFiles((QWebEnginePage*)self, mode, oldFiles_list, acceptedMimeTypes_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
void q_webenginepage_java_script_alert(void* self, void* securityOrigin, const char* msg) {
    QWebEnginePage_JavaScriptAlert((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QUrl*, const char*) ```
void q_webenginepage_on_java_script_alert(void* self, void (*slot)(void*, void*, const char*)) {
    QWebEnginePage_OnJavaScriptAlert((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
void q_webenginepage_qbase_java_script_alert(void* self, void* securityOrigin, const char* msg) {
    QWebEnginePage_QBaseJavaScriptAlert((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
bool q_webenginepage_java_script_confirm(void* self, void* securityOrigin, const char* msg) {
    return QWebEnginePage_JavaScriptConfirm((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QUrl*, const char*) ```
void q_webenginepage_on_java_script_confirm(void* self, bool (*slot)(void*, void*, const char*)) {
    QWebEnginePage_OnJavaScriptConfirm((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* securityOrigin, const char* msg ```
bool q_webenginepage_qbase_java_script_confirm(void* self, void* securityOrigin, const char* msg) {
    return QWebEnginePage_QBaseJavaScriptConfirm((QWebEnginePage*)self, (QUrl*)securityOrigin, qstring(msg));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__JavaScriptConsoleMessageLevel level, const char* message, int lineNumber, const char* sourceID ```
void q_webenginepage_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID) {
    QWebEnginePage_JavaScriptConsoleMessage((QWebEnginePage*)self, level, qstring(message), lineNumber, qstring(sourceID));
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, enum QWebEnginePage__JavaScriptConsoleMessageLevel, const char*, int, const char*) ```
void q_webenginepage_on_java_script_console_message(void* self, void (*slot)(void*, int64_t, const char*, int, const char*)) {
    QWebEnginePage_OnJavaScriptConsoleMessage((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, enum QWebEnginePage__JavaScriptConsoleMessageLevel level, const char* message, int lineNumber, const char* sourceID ```
void q_webenginepage_qbase_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID) {
    QWebEnginePage_QBaseJavaScriptConsoleMessage((QWebEnginePage*)self, level, qstring(message), lineNumber, qstring(sourceID));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
///
/// ``` QWebEnginePage* self, QUrl* url, enum QWebEnginePage__NavigationType typeVal, bool isMainFrame ```
bool q_webenginepage_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame) {
    return QWebEnginePage_AcceptNavigationRequest((QWebEnginePage*)self, (QUrl*)url, typeVal, isMainFrame);
}

/// Allows for overriding the related default method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QUrl*, enum QWebEnginePage__NavigationType, bool) ```
void q_webenginepage_on_accept_navigation_request(void* self, bool (*slot)(void*, void*, int64_t, bool)) {
    QWebEnginePage_OnAcceptNavigationRequest((QWebEnginePage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEnginePage* self, QUrl* url, enum QWebEnginePage__NavigationType typeVal, bool isMainFrame ```
bool q_webenginepage_qbase_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame) {
    return QWebEnginePage_QBaseAcceptNavigationRequest((QWebEnginePage*)self, (QUrl*)url, typeVal, isMainFrame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginepage_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEnginePage_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginepage_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEnginePage_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// ``` QWebEnginePage* self, QUrl* url, const char* filename ```
void q_webenginepage_download2(void* self, void* url, const char* filename) {
    QWebEnginePage_Download2((QWebEnginePage*)self, (QUrl*)url, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// ``` QWebEnginePage* self, const char* html, QUrl* baseUrl ```
void q_webenginepage_set_html2(void* self, const char* html, void* baseUrl) {
    QWebEnginePage_SetHtml2((QWebEnginePage*)self, qstring(html), (QUrl*)baseUrl);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data, const char* mimeType ```
void q_webenginepage_set_content2(void* self, const char* data, const char* mimeType) {
    QWebEnginePage_SetContent2((QWebEnginePage*)self, qstring(data), qstring(mimeType));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// ``` QWebEnginePage* self, const char* data, const char* mimeType, QUrl* baseUrl ```
void q_webenginepage_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl) {
    QWebEnginePage_SetContent3((QWebEnginePage*)self, qstring(data), qstring(mimeType), (QUrl*)baseUrl);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// ``` QWebEnginePage* self, QWebChannel* param1, uint32_t worldId ```
void q_webenginepage_set_web_channel2(void* self, void* param1, uint32_t worldId) {
    QWebEnginePage_SetWebChannel2((QWebEnginePage*)self, (QWebChannel*)param1, worldId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// ``` QWebEnginePage* self, const char* filePath, enum QWebEngineDownloadRequest__SavePageFormat format ```
void q_webenginepage_save2(void* self, const char* filePath, int64_t format) {
    QWebEnginePage_Save2((QWebEnginePage*)self, qstring(filePath), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath, QPageLayout* layout ```
void q_webenginepage_print_to_pdf2(void* self, const char* filePath, void* layout) {
    QWebEnginePage_PrintToPdf2((QWebEnginePage*)self, qstring(filePath), (QPageLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// ``` QWebEnginePage* self, const char* filePath, QPageLayout* layout, QPageRanges* ranges ```
void q_webenginepage_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges) {
    QWebEnginePage_PrintToPdf3((QWebEnginePage*)self, qstring(filePath), (QPageLayout*)layout, (QPageRanges*)ranges);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEnginePage* self ```
const char* q_webenginepage_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEnginePage* self, const char* name ```
void q_webenginepage_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEnginePage* self ```
bool q_webenginepage_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEnginePage* self, bool b ```
bool q_webenginepage_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEnginePage* self ```
QThread* q_webenginepage_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEnginePage* self, QThread* thread ```
void q_webenginepage_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEnginePage* self, int interval ```
int32_t q_webenginepage_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEnginePage* self, int id ```
void q_webenginepage_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEnginePage* self ```
libqt_list /* of QObject* */ q_webenginepage_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEnginePage* self, QObject* parent ```
void q_webenginepage_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEnginePage* self, QObject* filterObj ```
void q_webenginepage_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEnginePage* self, QObject* obj ```
void q_webenginepage_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginepage_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEnginePage* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginepage_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginepage_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginepage_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEnginePage* self, const char* name, QVariant* value ```
bool q_webenginepage_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEnginePage* self, const char* name ```
QVariant* q_webenginepage_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEnginePage* self ```
const char** q_webenginepage_dynamic_property_names(void* self) {
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
/// ``` QWebEnginePage* self ```
QBindingStorage* q_webenginepage_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEnginePage* self ```
QBindingStorage* q_webenginepage_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEnginePage* self, void (*slot)(QObject*) ```
void q_webenginepage_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEnginePage* self, const char* classname ```
bool q_webenginepage_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEnginePage* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginepage_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginepage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEnginePage* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginepage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEnginePage* self, QObject* param1 ```
void q_webenginepage_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEnginePage* self, void (*slot)(QObject*, QObject*) ```
void q_webenginepage_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* watched, QEvent* event ```
bool q_webenginepage_event_filter(void* self, void* watched, void* event) {
    return QWebEnginePage_EventFilter((QWebEnginePage*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* watched, QEvent* event ```
bool q_webenginepage_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEnginePage_QBaseEventFilter((QWebEnginePage*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QObject*, QEvent*) ```
void q_webenginepage_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebEnginePage_OnEventFilter((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QTimerEvent* event ```
void q_webenginepage_timer_event(void* self, void* event) {
    QWebEnginePage_TimerEvent((QWebEnginePage*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QTimerEvent* event ```
void q_webenginepage_qbase_timer_event(void* self, void* event) {
    QWebEnginePage_QBaseTimerEvent((QWebEnginePage*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QTimerEvent*) ```
void q_webenginepage_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_OnTimerEvent((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QChildEvent* event ```
void q_webenginepage_child_event(void* self, void* event) {
    QWebEnginePage_ChildEvent((QWebEnginePage*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QChildEvent* event ```
void q_webenginepage_qbase_child_event(void* self, void* event) {
    QWebEnginePage_QBaseChildEvent((QWebEnginePage*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QChildEvent*) ```
void q_webenginepage_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_OnChildEvent((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QEvent* event ```
void q_webenginepage_custom_event(void* self, void* event) {
    QWebEnginePage_CustomEvent((QWebEnginePage*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QEvent* event ```
void q_webenginepage_qbase_custom_event(void* self, void* event) {
    QWebEnginePage_QBaseCustomEvent((QWebEnginePage*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QEvent*) ```
void q_webenginepage_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_OnCustomEvent((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_connect_notify(void* self, void* signal) {
    QWebEnginePage_ConnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_qbase_connect_notify(void* self, void* signal) {
    QWebEnginePage_QBaseConnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_OnConnectNotify((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_disconnect_notify(void* self, void* signal) {
    QWebEnginePage_DisconnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
void q_webenginepage_qbase_disconnect_notify(void* self, void* signal) {
    QWebEnginePage_QBaseDisconnectNotify((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, void (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEnginePage_OnDisconnectNotify((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_sender(void* self) {
    return QWebEnginePage_Sender((QWebEnginePage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self ```
QObject* q_webenginepage_qbase_sender(void* self) {
    return QWebEnginePage_QBaseSender((QWebEnginePage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, QObject* (*slot)() ```
void q_webenginepage_on_sender(void* self, QObject* (*slot)()) {
    QWebEnginePage_OnSender((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self ```
int32_t q_webenginepage_sender_signal_index(void* self) {
    return QWebEnginePage_SenderSignalIndex((QWebEnginePage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self ```
int32_t q_webenginepage_qbase_sender_signal_index(void* self) {
    return QWebEnginePage_QBaseSenderSignalIndex((QWebEnginePage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, int32_t (*slot)() ```
void q_webenginepage_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebEnginePage_OnSenderSignalIndex((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, const char* signal ```
int32_t q_webenginepage_receivers(void* self, const char* signal) {
    return QWebEnginePage_Receivers((QWebEnginePage*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, const char* signal ```
int32_t q_webenginepage_qbase_receivers(void* self, const char* signal) {
    return QWebEnginePage_QBaseReceivers((QWebEnginePage*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, int32_t (*slot)(QWebEnginePage*, const char*) ```
void q_webenginepage_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebEnginePage_OnReceivers((QWebEnginePage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
bool q_webenginepage_is_signal_connected(void* self, void* signal) {
    return QWebEnginePage_IsSignalConnected((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEnginePage* self, QMetaMethod* signal ```
bool q_webenginepage_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEnginePage_QBaseIsSignalConnected((QWebEnginePage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEnginePage* self, bool (*slot)(QWebEnginePage*, QMetaMethod*) ```
void q_webenginepage_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebEnginePage_OnIsSignalConnected((QWebEnginePage*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEnginePage* self ```
void q_webenginepage_delete(void* self) {
    QWebEnginePage_Delete((QWebEnginePage*)(self));
}