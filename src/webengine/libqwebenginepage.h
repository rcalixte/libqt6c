#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEPAGE_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEPAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)

/// q_webenginepage_new constructs a new QWebEnginePage object.
///
QWebEnginePage* q_webenginepage_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)

/// q_webenginepage_new2 constructs a new QWebEnginePage object.
///
/// @param profile QWebEngineProfile*
///
QWebEnginePage* q_webenginepage_new2(void* profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)

/// q_webenginepage_new3 constructs a new QWebEnginePage object.
///
/// @param parent QObject*
///
QWebEnginePage* q_webenginepage_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html)

/// q_webenginepage_new4 constructs a new QWebEnginePage object.
///
/// @param profile QWebEngineProfile*
/// @param parent QObject*
///
QWebEnginePage* q_webenginepage_new4(void* profile, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEnginePage*
///
const QMetaObject* q_webenginepage_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback const QMetaObject* func()
///
void q_webenginepage_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
///
const QMetaObject* q_webenginepage_qbase_meta_object(void* self);

/// @param self QWebEnginePage*
/// @param param1 const char*
///
void* q_webenginepage_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback void* func(QWebEnginePage* self, const char* param1)
///
void q_webenginepage_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param param1 const char*
///
void* q_webenginepage_qbase_metacast(void* self, const char* param1);

/// @param self QWebEnginePage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginepage_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback int32_t func(QWebEnginePage* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_webenginepage_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginepage_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webenginepage_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#history)
///
/// @param self QWebEnginePage*
///
QWebEngineHistory* q_webenginepage_history(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#hasSelection)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEnginePage*
///
const char* q_webenginepage_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#profile)
///
/// @param self QWebEnginePage*
///
QWebEngineProfile* q_webenginepage_profile(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#action)
///
/// @param self QWebEnginePage*
/// @param action enum QWebEnginePage__WebAction
///
QAction* q_webenginepage_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
///
/// @param self QWebEnginePage*
/// @param action enum QWebEnginePage__WebAction
/// @param checked bool
///
void q_webenginepage_trigger_action(void* self, int32_t action, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, enum QWebEnginePage__WebAction action, bool checked)
///
void q_webenginepage_on_trigger_action(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#triggerAction)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param action enum QWebEnginePage__WebAction
/// @param checked bool
///
void q_webenginepage_qbase_trigger_action(void* self, int32_t action, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#replaceMisspelledWord)
///
/// @param self QWebEnginePage*
/// @param replacement const char*
///
void q_webenginepage_replace_misspelled_word(void* self, const char* replacement);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
///
/// @param self QWebEnginePage*
/// @param param1 QEvent*
///
bool q_webenginepage_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback bool func(QWebEnginePage* self, QEvent* param1)
///
void q_webenginepage_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#event)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param param1 QEvent*
///
bool q_webenginepage_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
///
/// @param self QWebEnginePage*
/// @param subString const char*
///
void q_webenginepage_find_text(void* self, const char* subString);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isLoading)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_loading(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
///
void q_webenginepage_load(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#load)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineHttpRequest*
///
void q_webenginepage_load2(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
///
void q_webenginepage_download(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// @param self QWebEnginePage*
/// @param html const char*
///
void q_webenginepage_set_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// @param self QWebEnginePage*
/// @param data const char*
///
void q_webenginepage_set_content(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEnginePage*
///
const char* q_webenginepage_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrl)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
///
void q_webenginepage_set_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#url)
///
/// @param self QWebEnginePage*
///
QUrl* q_webenginepage_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#requestedUrl)
///
/// @param self QWebEnginePage*
///
QUrl* q_webenginepage_requested_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrl)
///
/// @param self QWebEnginePage*
///
QUrl* q_webenginepage_icon_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#icon)
///
/// @param self QWebEnginePage*
///
QIcon* q_webenginepage_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactor)
///
/// @param self QWebEnginePage*
///
double q_webenginepage_zoom_factor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setZoomFactor)
///
/// @param self QWebEnginePage*
/// @param factor double
///
void q_webenginepage_set_zoom_factor(void* self, double factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPosition)
///
/// @param self QWebEnginePage*
///
QPointF* q_webenginepage_scroll_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSize)
///
/// @param self QWebEnginePage*
///
QSizeF* q_webenginepage_contents_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
///
/// @param self QWebEnginePage*
/// @param scriptSource const char*
///
void q_webenginepage_run_java_script2(void* self, const char* scriptSource);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scripts)
///
/// @param self QWebEnginePage*
///
QWebEngineScriptCollection* q_webenginepage_scripts(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#settings)
///
/// @param self QWebEnginePage*
///
QWebEngineSettings* q_webenginepage_settings(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webChannel)
///
/// @param self QWebEnginePage*
///
QWebChannel* q_webenginepage_web_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// @param self QWebEnginePage*
/// @param param1 QWebChannel*
///
void q_webenginepage_set_web_channel(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#backgroundColor)
///
/// @param self QWebEnginePage*
///
QColor* q_webenginepage_background_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setBackgroundColor)
///
/// @param self QWebEnginePage*
/// @param color QColor*
///
void q_webenginepage_set_background_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
///
void q_webenginepage_save(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isAudioMuted)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_audio_muted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setAudioMuted)
///
/// @param self QWebEnginePage*
/// @param muted bool
///
void q_webenginepage_set_audio_muted(void* self, bool muted);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudible)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_recently_audible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPid)
///
/// @param self QWebEnginePage*
///
long long q_webenginepage_render_process_pid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
///
void q_webenginepage_print_to_pdf(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setInspectedPage)
///
/// @param self QWebEnginePage*
/// @param page QWebEnginePage*
///
void q_webenginepage_set_inspected_page(void* self, void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#inspectedPage)
///
/// @param self QWebEnginePage*
///
QWebEnginePage* q_webenginepage_inspected_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setDevToolsPage)
///
/// @param self QWebEnginePage*
/// @param page QWebEnginePage*
///
void q_webenginepage_set_dev_tools_page(void* self, void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsPage)
///
/// @param self QWebEnginePage*
///
QWebEnginePage* q_webenginepage_dev_tools_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#devToolsId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEnginePage*
///
const char* q_webenginepage_dev_tools_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setUrlRequestInterceptor)
///
/// @param self QWebEnginePage*
/// @param interceptor QWebEngineUrlRequestInterceptor*
///
void q_webenginepage_set_url_request_interceptor(void* self, void* interceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleState)
///
/// @param self QWebEnginePage*
///
/// @return enum QWebEnginePage__LifecycleState
///
int32_t q_webenginepage_lifecycle_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setLifecycleState)
///
/// @param self QWebEnginePage*
/// @param state enum QWebEnginePage__LifecycleState
///
void q_webenginepage_set_lifecycle_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedState)
///
/// @param self QWebEnginePage*
///
/// @return enum QWebEnginePage__LifecycleState
///
int32_t q_webenginepage_recommended_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#isVisible)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setVisible)
///
/// @param self QWebEnginePage*
/// @param visible bool
///
void q_webenginepage_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#mainFrame)
///
/// @param self QWebEnginePage*
///
QWebEngineFrame* q_webenginepage_main_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptAsNewWindow)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineNewWindowRequest*
///
void q_webenginepage_accept_as_new_window(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_load_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadStarted)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_load_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
///
/// @param self QWebEnginePage*
/// @param progress int
///
void q_webenginepage_load_progress(void* self, int progress);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadProgress)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, int progress)
///
void q_webenginepage_on_load_progress(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
///
/// @param self QWebEnginePage*
/// @param ok bool
///
void q_webenginepage_load_finished(void* self, bool ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadFinished)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, bool ok)
///
void q_webenginepage_on_load_finished(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
///
/// @param self QWebEnginePage*
/// @param loadingInfo QWebEngineLoadingInfo*
///
void q_webenginepage_loading_changed(void* self, void* loadingInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#loadingChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo)
///
void q_webenginepage_on_loading_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
///
/// @param self QWebEnginePage*
/// @param url const char*
///
void q_webenginepage_link_hovered(void* self, const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#linkHovered)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, const char* url)
///
void q_webenginepage_on_link_hovered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectionChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
///
/// @param self QWebEnginePage*
/// @param geom QRect*
///
void q_webenginepage_geometry_change_requested(void* self, void* geom);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#geometryChangeRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QRect* geom)
///
void q_webenginepage_on_geometry_change_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_window_close_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#windowCloseRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_window_close_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param feature enum QWebEnginePage__Feature
///
void q_webenginepage_feature_permission_requested(void* self, void* securityOrigin, int32_t feature);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature)
///
void q_webenginepage_on_feature_permission_requested(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param feature enum QWebEnginePage__Feature
///
void q_webenginepage_feature_permission_request_canceled(void* self, void* securityOrigin, int32_t feature);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#featurePermissionRequestCanceled)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* securityOrigin, enum QWebEnginePage__Feature feature)
///
void q_webenginepage_on_feature_permission_request_canceled(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
///
/// @param self QWebEnginePage*
/// @param fullScreenRequest QWebEngineFullScreenRequest*
///
void q_webenginepage_full_screen_requested(void* self, void* fullScreenRequest);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fullScreenRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest)
///
void q_webenginepage_on_full_screen_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
///
/// @param self QWebEnginePage*
/// @param permissionRequest QWebEnginePermission*
///
void q_webenginepage_permission_requested(void* self, void* permissionRequest);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#permissionRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEnginePermission* permissionRequest)
///
void q_webenginepage_on_permission_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
///
/// @param self QWebEnginePage*
/// @param quotaRequest QWebEngineQuotaRequest*
///
void q_webenginepage_quota_requested(void* self, void* quotaRequest);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#quotaRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest)
///
void q_webenginepage_on_quota_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineRegisterProtocolHandlerRequest*
///
void q_webenginepage_register_protocol_handler_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#registerProtocolHandlerRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request)
///
void q_webenginepage_on_register_protocol_handler_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineFileSystemAccessRequest*
///
void q_webenginepage_file_system_access_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#fileSystemAccessRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request)
///
void q_webenginepage_on_file_system_access_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
///
/// @param self QWebEnginePage*
/// @param clientCertSelection QWebEngineClientCertificateSelection*
///
void q_webenginepage_select_client_certificate(void* self, void* clientCertSelection);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#selectClientCertificate)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection)
///
void q_webenginepage_on_select_client_certificate(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
///
/// @param self QWebEnginePage*
/// @param requestUrl QUrl*
/// @param authenticator QAuthenticator*
///
void q_webenginepage_authentication_required(void* self, void* requestUrl, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#authenticationRequired)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator)
///
void q_webenginepage_on_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
///
/// @param self QWebEnginePage*
/// @param requestUrl QUrl*
/// @param authenticator QAuthenticator*
/// @param proxyHost const char*
///
void q_webenginepage_proxy_authentication_required(void* self, void* requestUrl, void* authenticator, const char* proxyHost);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#proxyAuthenticationRequired)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, const char* proxyHost)
///
void q_webenginepage_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
///
/// @param self QWebEnginePage*
/// @param terminationStatus enum QWebEnginePage__RenderProcessTerminationStatus
/// @param exitCode int
///
void q_webenginepage_render_process_terminated(void* self, int32_t terminationStatus, int exitCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessTerminated)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode)
///
void q_webenginepage_on_render_process_terminated(void* self, void (*callback)(void*, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineDesktopMediaRequest*
///
void q_webenginepage_desktop_media_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#desktopMediaRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineDesktopMediaRequest* request)
///
void q_webenginepage_on_desktop_media_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
///
/// @param self QWebEnginePage*
/// @param certificateError QWebEngineCertificateError*
///
void q_webenginepage_certificate_error(void* self, void* certificateError);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#certificateError)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineCertificateError* certificateError)
///
void q_webenginepage_on_certificate_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineNavigationRequest*
///
void q_webenginepage_navigation_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#navigationRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineNavigationRequest* request)
///
void q_webenginepage_on_navigation_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineNewWindowRequest*
///
void q_webenginepage_new_window_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#newWindowRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineNewWindowRequest* request)
///
void q_webenginepage_on_new_window_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
///
/// @param self QWebEnginePage*
/// @param title const char*
///
void q_webenginepage_title_changed(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#titleChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, const char* title)
///
void q_webenginepage_on_title_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
///
void q_webenginepage_url_changed(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#urlChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* url)
///
void q_webenginepage_on_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
///
void q_webenginepage_icon_url_changed(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconUrlChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* url)
///
void q_webenginepage_on_icon_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
///
/// @param self QWebEnginePage*
/// @param icon QIcon*
///
void q_webenginepage_icon_changed(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#iconChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QIcon* icon)
///
void q_webenginepage_on_icon_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
///
/// @param self QWebEnginePage*
/// @param factor double
///
void q_webenginepage_zoom_factor_changed(void* self, double factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#zoomFactorChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, double factor)
///
void q_webenginepage_on_zoom_factor_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
///
/// @param self QWebEnginePage*
/// @param position QPointF*
///
void q_webenginepage_scroll_position_changed(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#scrollPositionChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QPointF* position)
///
void q_webenginepage_on_scroll_position_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
///
/// @param self QWebEnginePage*
/// @param size QSizeF*
///
void q_webenginepage_contents_size_changed(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#contentsSizeChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QSizeF* size)
///
void q_webenginepage_on_contents_size_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
///
/// @param self QWebEnginePage*
/// @param muted bool
///
void q_webenginepage_audio_muted_changed(void* self, bool muted);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#audioMutedChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, bool muted)
///
void q_webenginepage_on_audio_muted_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
///
/// @param self QWebEnginePage*
/// @param recentlyAudible bool
///
void q_webenginepage_recently_audible_changed(void* self, bool recentlyAudible);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recentlyAudibleChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, bool recentlyAudible)
///
void q_webenginepage_on_recently_audible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
///
/// @param self QWebEnginePage*
/// @param pid long long
///
void q_webenginepage_render_process_pid_changed(void* self, long long pid);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#renderProcessPidChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, long long pid)
///
void q_webenginepage_on_render_process_pid_changed(void* self, void (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
/// @param success bool
///
void q_webenginepage_pdf_printing_finished(void* self, const char* filePath, bool success);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#pdfPrintingFinished)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, const char* filePath, bool success)
///
void q_webenginepage_on_pdf_printing_finished(void* self, void (*callback)(void*, const char*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_print_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_print_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
///
/// @param self QWebEnginePage*
/// @param frame QWebEngineFrame*
///
void q_webenginepage_print_requested_by_frame(void* self, void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printRequestedByFrame)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineFrame* frame)
///
void q_webenginepage_on_print_requested_by_frame(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
///
/// @param self QWebEnginePage*
/// @param visible bool
///
void q_webenginepage_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#visibleChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, bool visible)
///
void q_webenginepage_on_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
///
/// @param self QWebEnginePage*
/// @param state enum QWebEnginePage__LifecycleState
///
void q_webenginepage_lifecycle_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#lifecycleStateChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, enum QWebEnginePage__LifecycleState state)
///
void q_webenginepage_on_lifecycle_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
///
/// @param self QWebEnginePage*
/// @param state enum QWebEnginePage__LifecycleState
///
void q_webenginepage_recommended_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#recommendedStateChanged)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, enum QWebEnginePage__LifecycleState state)
///
void q_webenginepage_on_recommended_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
///
/// @param self QWebEnginePage*
/// @param result QWebEngineFindTextResult*
///
void q_webenginepage_find_text_finished(void* self, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findTextFinished)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineFindTextResult* result)
///
void q_webenginepage_on_find_text_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_q_about_to_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#_q_aboutToDelete)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_q_about_to_delete(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
///
/// @param self QWebEnginePage*
/// @param request QWebEngineWebAuthUxRequest*
///
void q_webenginepage_web_auth_ux_requested(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#webAuthUxRequested)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QWebEngineWebAuthUxRequest* request)
///
void q_webenginepage_on_web_auth_ux_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
///
/// @param self QWebEnginePage*
/// @param type enum QWebEnginePage__WebWindowType
///
QWebEnginePage* q_webenginepage_create_window(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback QWebEnginePage* func(QWebEnginePage* self, enum QWebEnginePage__WebWindowType type)
///
void q_webenginepage_on_create_window(void* self, QWebEnginePage* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#createWindow)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param type enum QWebEnginePage__WebWindowType
///
QWebEnginePage* q_webenginepage_qbase_create_window(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEnginePage*
/// @param mode enum QWebEnginePage__FileSelectionMode
/// @param oldFiles const char**
/// @param acceptedMimeTypes const char**
///
const char** q_webenginepage_choose_files(void* self, int32_t mode, const char* oldFiles[static 1], const char* acceptedMimeTypes[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback const char** func(QWebEnginePage* self, enum QWebEnginePage__FileSelectionMode mode, const char** oldFiles, const char** acceptedMimeTypes)
///
void q_webenginepage_on_choose_files(void* self, const char** (*callback)(void*, int32_t, const char**, const char**));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#chooseFiles)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param mode enum QWebEnginePage__FileSelectionMode
/// @param oldFiles const char**
/// @param acceptedMimeTypes const char**
///
const char** q_webenginepage_qbase_choose_files(void* self, int32_t mode, const char* oldFiles[static 1], const char* acceptedMimeTypes[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param msg const char*
///
void q_webenginepage_java_script_alert(void* self, void* securityOrigin, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QUrl* securityOrigin, const char* msg)
///
void q_webenginepage_on_java_script_alert(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptAlert)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param msg const char*
///
void q_webenginepage_qbase_java_script_alert(void* self, void* securityOrigin, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param msg const char*
///
bool q_webenginepage_java_script_confirm(void* self, void* securityOrigin, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback bool func(QWebEnginePage* self, QUrl* securityOrigin, const char* msg)
///
void q_webenginepage_on_java_script_confirm(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConfirm)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param securityOrigin QUrl*
/// @param msg const char*
///
bool q_webenginepage_qbase_java_script_confirm(void* self, void* securityOrigin, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
///
/// @param self QWebEnginePage*
/// @param level enum QWebEnginePage__JavaScriptConsoleMessageLevel
/// @param message const char*
/// @param lineNumber int
/// @param sourceID const char*
///
void q_webenginepage_java_script_console_message(void* self, int32_t level, const char* message, int lineNumber, const char* sourceID);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, enum QWebEnginePage__JavaScriptConsoleMessageLevel level, const char* message, int lineNumber, const char* sourceID)
///
void q_webenginepage_on_java_script_console_message(void* self, void (*callback)(void*, int32_t, const char*, int, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#javaScriptConsoleMessage)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param level enum QWebEnginePage__JavaScriptConsoleMessageLevel
/// @param message const char*
/// @param lineNumber int
/// @param sourceID const char*
///
void q_webenginepage_qbase_java_script_console_message(void* self, int32_t level, const char* message, int lineNumber, const char* sourceID);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
/// @param type enum QWebEnginePage__NavigationType
/// @param isMainFrame bool
///
bool q_webenginepage_accept_navigation_request(void* self, void* url, int32_t type, bool isMainFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
///
/// Allows for overriding the related default method
///
/// @param self QWebEnginePage*
/// @param callback bool func(QWebEnginePage* self, QUrl* url, enum QWebEnginePage__NavigationType type, bool isMainFrame)
///
void q_webenginepage_on_accept_navigation_request(void* self, bool (*callback)(void*, void*, int32_t, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#acceptNavigationRequest)
///
/// Base class method implementation
///
/// @param self QWebEnginePage*
/// @param url QUrl*
/// @param type enum QWebEnginePage__NavigationType
/// @param isMainFrame bool
///
bool q_webenginepage_qbase_accept_navigation_request(void* self, void* url, int32_t type, bool isMainFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginepage_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginepage_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#findText)
///
/// @param self QWebEnginePage*
/// @param subString const char*
/// @param options flag of enum QWebEnginePage__FindFlag
///
void q_webenginepage_find_text2(void* self, const char* subString, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#download)
///
/// @param self QWebEnginePage*
/// @param url QUrl*
/// @param filename const char*
///
void q_webenginepage_download2(void* self, void* url, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setHtml)
///
/// @param self QWebEnginePage*
/// @param html const char*
/// @param baseUrl QUrl*
///
void q_webenginepage_set_html2(void* self, const char* html, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// @param self QWebEnginePage*
/// @param data const char*
/// @param mimeType const char*
///
void q_webenginepage_set_content2(void* self, const char* data, const char* mimeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setContent)
///
/// @param self QWebEnginePage*
/// @param data const char*
/// @param mimeType const char*
/// @param baseUrl QUrl*
///
void q_webenginepage_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#runJavaScript)
///
/// @param self QWebEnginePage*
/// @param scriptSource const char*
/// @param worldId uint32_t
///
void q_webenginepage_run_java_script22(void* self, const char* scriptSource, uint32_t worldId);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#setWebChannel)
///
/// @param self QWebEnginePage*
/// @param param1 QWebChannel*
/// @param worldId uint32_t
///
void q_webenginepage_set_web_channel2(void* self, void* param1, uint32_t worldId);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#save)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
/// @param format enum QWebEngineDownloadRequest__SavePageFormat
///
void q_webenginepage_save2(void* self, const char* filePath, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
/// @param layout QPageLayout*
///
void q_webenginepage_print_to_pdf22(void* self, const char* filePath, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#printToPdf)
///
/// @param self QWebEnginePage*
/// @param filePath const char*
/// @param layout QPageLayout*
/// @param ranges QPageRanges*
///
void q_webenginepage_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEnginePage*
///
const char* q_webenginepage_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEnginePage*
/// @param name char*
///
void q_webenginepage_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEnginePage*
///
bool q_webenginepage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEnginePage*
/// @param b bool
///
bool q_webenginepage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEnginePage*
///
QThread* q_webenginepage_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEnginePage*
/// @param thread QThread*
///
bool q_webenginepage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEnginePage*
/// @param interval int
///
int32_t q_webenginepage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEnginePage*
/// @param time int64_t of nanoseconds
///
int32_t q_webenginepage_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEnginePage*
/// @param id int
///
void q_webenginepage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEnginePage*
/// @param id enum Qt__TimerId
///
void q_webenginepage_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEnginePage*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginepage_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEnginePage*
/// @param parent QObject*
///
void q_webenginepage_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEnginePage*
/// @param filterObj QObject*
///
void q_webenginepage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEnginePage*
/// @param obj QObject*
///
void q_webenginepage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginepage_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEnginePage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginepage_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginepage_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginepage_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEnginePage*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginepage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEnginePage*
/// @param name const char*
///
QVariant* q_webenginepage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEnginePage*
///
const char** q_webenginepage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEnginePage*
///
QBindingStorage* q_webenginepage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEnginePage*
///
const QBindingStorage* q_webenginepage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self)
///
void q_webenginepage_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEnginePage*
///
QObject* q_webenginepage_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEnginePage*
/// @param classname const char*
///
bool q_webenginepage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEnginePage*
///
void q_webenginepage_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEnginePage*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginepage_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEnginePage*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginepage_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webenginepage_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEnginePage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginepage_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEnginePage*
/// @param param1 QObject*
///
void q_webenginepage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QObject* param1)
///
void q_webenginepage_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginepage_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginepage_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback bool func(QWebEnginePage* self, QObject* watched, QEvent* event)
///
void q_webenginepage_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QTimerEvent*
///
void q_webenginepage_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QTimerEvent*
///
void q_webenginepage_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QTimerEvent* event)
///
void q_webenginepage_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QChildEvent*
///
void q_webenginepage_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QChildEvent*
///
void q_webenginepage_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QChildEvent* event)
///
void q_webenginepage_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QEvent*
///
void q_webenginepage_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param event QEvent*
///
void q_webenginepage_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QEvent* event)
///
void q_webenginepage_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
void q_webenginepage_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
void q_webenginepage_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QMetaMethod* signal)
///
void q_webenginepage_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
void q_webenginepage_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
void q_webenginepage_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, QMetaMethod* signal)
///
void q_webenginepage_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
///
QObject* q_webenginepage_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
///
QObject* q_webenginepage_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback QObject* func()
///
void q_webenginepage_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
///
int32_t q_webenginepage_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
///
int32_t q_webenginepage_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback int32_t func()
///
void q_webenginepage_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal const char*
///
int32_t q_webenginepage_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal const char*
///
int32_t q_webenginepage_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback int32_t func(QWebEnginePage* self, const char* signal)
///
void q_webenginepage_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
bool q_webenginepage_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param signal QMetaMethod*
///
bool q_webenginepage_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEnginePage*
/// @param callback bool func(QWebEnginePage* self, QMetaMethod* signal)
///
void q_webenginepage_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEnginePage*
/// @param callback void func(QWebEnginePage* self, const char* objectName)
///
void q_webenginepage_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#dtor.QWebEnginePage)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEnginePage*
///
void q_webenginepage_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

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
    QWEBENGINEPAGE_WEBACTION_CHANGETEXTDIRECTIONLTR = 45,
    QWEBENGINEPAGE_WEBACTION_CHANGETEXTDIRECTIONRTL = 46,
    QWEBENGINEPAGE_WEBACTION_WEBACTIONCOUNT = 47
} QWebEnginePage__WebAction;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_FINDFLAG_FINDBACKWARD = 1,
    QWEBENGINEPAGE_FINDFLAG_FINDCASESENSITIVELY = 2
} QWebEnginePage__FindFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERWINDOW = 0,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERTAB = 1,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBDIALOG = 2,
    QWEBENGINEPAGE_WEBWINDOWTYPE_WEBBROWSERBACKGROUNDTAB = 3
} QWebEnginePage__WebWindowType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPELINKCLICKED = 0,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPETYPED = 1,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEFORMSUBMITTED = 2,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEBACKFORWARD = 3,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPERELOAD = 4,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEOTHER = 5,
    QWEBENGINEPAGE_NAVIGATIONTYPE_NAVIGATIONTYPEREDIRECT = 6
} QWebEnginePage__NavigationType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_FEATURE_NOTIFICATIONS = 0,
    QWEBENGINEPAGE_FEATURE_GEOLOCATION = 1,
    QWEBENGINEPAGE_FEATURE_MEDIAAUDIOCAPTURE = 2
} QWebEnginePage__Feature;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTOPEN = 0,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTOPENMULTIPLE = 1,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTUPLOADFOLDER = 2,
    QWEBENGINEPAGE_FILESELECTIONMODE_FILESELECTSAVE = 3
} QWebEnginePage__FileSelectionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_INFOMESSAGELEVEL = 0,
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_WARNINGMESSAGELEVEL = 1,
    QWEBENGINEPAGE_JAVASCRIPTCONSOLEMESSAGELEVEL_ERRORMESSAGELEVEL = 2
} QWebEnginePage__JavaScriptConsoleMessageLevel;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_NORMALTERMINATIONSTATUS = 0,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_ABNORMALTERMINATIONSTATUS = 1,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_CRASHEDTERMINATIONSTATUS = 2,
    QWEBENGINEPAGE_RENDERPROCESSTERMINATIONSTATUS_KILLEDTERMINATIONSTATUS = 3
} QWebEnginePage__RenderProcessTerminationStatus;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepage.html#public-types)

typedef enum {
    QWEBENGINEPAGE_LIFECYCLESTATE_ACTIVE = 0,
    QWEBENGINEPAGE_LIFECYCLESTATE_FROZEN = 1,
    QWEBENGINEPAGE_LIFECYCLESTATE_DISCARDED = 2
} QWebEnginePage__LifecycleState;

#endif
