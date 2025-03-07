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

QWebEnginePage* q_webenginepage_new();
QWebEnginePage* q_webenginepage_new2(void* profile);
QWebEnginePage* q_webenginepage_new3(void* parent);
QWebEnginePage* q_webenginepage_new4(void* profile, void* parent);
QMetaObject* q_webenginepage_meta_object(void* self);
void* q_webenginepage_metacast(void* self, const char* param1);
int32_t q_webenginepage_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webenginepage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webenginepage_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webenginepage_tr(const char* s);
QWebEngineHistory* q_webenginepage_history(void* self);
bool q_webenginepage_has_selection(void* self);
const char* q_webenginepage_selected_text(void* self);
QWebEngineProfile* q_webenginepage_profile(void* self);
QAction* q_webenginepage_action(void* self, int64_t action);
void q_webenginepage_trigger_action(void* self, int64_t action, bool checked);
void q_webenginepage_on_trigger_action(void* self, void (*slot)(void*, int64_t, bool));
void q_webenginepage_qbase_trigger_action(void* self, int64_t action, bool checked);
void q_webenginepage_replace_misspelled_word(void* self, const char* replacement);
bool q_webenginepage_event(void* self, void* param1);
void q_webenginepage_on_event(void* self, bool (*slot)(void*, void*));
bool q_webenginepage_qbase_event(void* self, void* param1);
void q_webenginepage_set_feature_permission(void* self, void* securityOrigin, int64_t feature, int64_t policy);
bool q_webenginepage_is_loading(void* self);
void q_webenginepage_load(void* self, void* url);
void q_webenginepage_load_with_request(void* self, void* request);
void q_webenginepage_download(void* self, void* url);
void q_webenginepage_set_html(void* self, const char* html);
void q_webenginepage_set_content(void* self, const char* data);
const char* q_webenginepage_title(void* self);
void q_webenginepage_set_url(void* self, void* url);
QUrl* q_webenginepage_url(void* self);
QUrl* q_webenginepage_requested_url(void* self);
QUrl* q_webenginepage_icon_url(void* self);
QIcon* q_webenginepage_icon(void* self);
double q_webenginepage_zoom_factor(void* self);
void q_webenginepage_set_zoom_factor(void* self, double factor);
QPointF* q_webenginepage_scroll_position(void* self);
QSizeF* q_webenginepage_contents_size(void* self);
QWebEngineScriptCollection* q_webenginepage_scripts(void* self);
QWebEngineSettings* q_webenginepage_settings(void* self);
QWebChannel* q_webenginepage_web_channel(void* self);
void q_webenginepage_set_web_channel(void* self, void* param1);
QColor* q_webenginepage_background_color(void* self);
void q_webenginepage_set_background_color(void* self, void* color);
void q_webenginepage_save(void* self, const char* filePath);
bool q_webenginepage_is_audio_muted(void* self);
void q_webenginepage_set_audio_muted(void* self, bool muted);
bool q_webenginepage_recently_audible(void* self);
long long q_webenginepage_render_process_pid(void* self);
void q_webenginepage_print_to_pdf(void* self, const char* filePath);
void q_webenginepage_set_inspected_page(void* self, void* page);
QWebEnginePage* q_webenginepage_inspected_page(void* self);
void q_webenginepage_set_dev_tools_page(void* self, void* page);
QWebEnginePage* q_webenginepage_dev_tools_page(void* self);
void q_webenginepage_set_url_request_interceptor(void* self, void* interceptor);
int64_t q_webenginepage_lifecycle_state(void* self);
void q_webenginepage_set_lifecycle_state(void* self, int64_t state);
int64_t q_webenginepage_recommended_state(void* self);
bool q_webenginepage_is_visible(void* self);
void q_webenginepage_set_visible(void* self, bool visible);
void q_webenginepage_accept_as_new_window(void* self, void* request);
void q_webenginepage_load_started(void* self);
void q_webenginepage_on_load_started(void* self, void (*slot)(void*));
void q_webenginepage_load_progress(void* self, int progress);
void q_webenginepage_on_load_progress(void* self, void (*slot)(void*, int));
void q_webenginepage_load_finished(void* self, bool ok);
void q_webenginepage_on_load_finished(void* self, void (*slot)(void*, bool));
void q_webenginepage_loading_changed(void* self, void* loadingInfo);
void q_webenginepage_on_loading_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_link_hovered(void* self, const char* url);
void q_webenginepage_on_link_hovered(void* self, void (*slot)(void*, const char*));
void q_webenginepage_selection_changed(void* self);
void q_webenginepage_on_selection_changed(void* self, void (*slot)(void*));
void q_webenginepage_geometry_change_requested(void* self, void* geom);
void q_webenginepage_on_geometry_change_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_window_close_requested(void* self);
void q_webenginepage_on_window_close_requested(void* self, void (*slot)(void*));
void q_webenginepage_feature_permission_requested(void* self, void* securityOrigin, int64_t feature);
void q_webenginepage_on_feature_permission_requested(void* self, void (*slot)(void*, void*, int64_t));
void q_webenginepage_feature_permission_request_canceled(void* self, void* securityOrigin, int64_t feature);
void q_webenginepage_on_feature_permission_request_canceled(void* self, void (*slot)(void*, void*, int64_t));
void q_webenginepage_full_screen_requested(void* self, void* fullScreenRequest);
void q_webenginepage_on_full_screen_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_quota_requested(void* self, void* quotaRequest);
void q_webenginepage_on_quota_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_register_protocol_handler_requested(void* self, void* request);
void q_webenginepage_on_register_protocol_handler_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_file_system_access_requested(void* self, void* request);
void q_webenginepage_on_file_system_access_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_select_client_certificate(void* self, void* clientCertSelection);
void q_webenginepage_on_select_client_certificate(void* self, void (*slot)(void*, void*));
void q_webenginepage_authentication_required(void* self, void* requestUrl, void* authenticator);
void q_webenginepage_on_authentication_required(void* self, void (*slot)(void*, void*, void*));
void q_webenginepage_proxy_authentication_required(void* self, void* requestUrl, void* authenticator, const char* proxyHost);
void q_webenginepage_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*, const char*));
void q_webenginepage_render_process_terminated(void* self, int64_t terminationStatus, int exitCode);
void q_webenginepage_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int));
void q_webenginepage_certificate_error(void* self, void* certificateError);
void q_webenginepage_on_certificate_error(void* self, void (*slot)(void*, void*));
void q_webenginepage_navigation_requested(void* self, void* request);
void q_webenginepage_on_navigation_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_new_window_requested(void* self, void* request);
void q_webenginepage_on_new_window_requested(void* self, void (*slot)(void*, void*));
void q_webenginepage_title_changed(void* self, const char* title);
void q_webenginepage_on_title_changed(void* self, void (*slot)(void*, const char*));
void q_webenginepage_url_changed(void* self, void* url);
void q_webenginepage_on_url_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_icon_url_changed(void* self, void* url);
void q_webenginepage_on_icon_url_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_icon_changed(void* self, void* icon);
void q_webenginepage_on_icon_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_scroll_position_changed(void* self, void* position);
void q_webenginepage_on_scroll_position_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_contents_size_changed(void* self, void* size);
void q_webenginepage_on_contents_size_changed(void* self, void (*slot)(void*, void*));
void q_webenginepage_audio_muted_changed(void* self, bool muted);
void q_webenginepage_on_audio_muted_changed(void* self, void (*slot)(void*, bool));
void q_webenginepage_recently_audible_changed(void* self, bool recentlyAudible);
void q_webenginepage_on_recently_audible_changed(void* self, void (*slot)(void*, bool));
void q_webenginepage_render_process_pid_changed(void* self, long long pid);
void q_webenginepage_on_render_process_pid_changed(void* self, void (*slot)(void*, long long));
void q_webenginepage_pdf_printing_finished(void* self, const char* filePath, bool success);
void q_webenginepage_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool));
void q_webenginepage_print_requested(void* self);
void q_webenginepage_on_print_requested(void* self, void (*slot)(void*));
void q_webenginepage_visible_changed(void* self, bool visible);
void q_webenginepage_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_webenginepage_lifecycle_state_changed(void* self, int64_t state);
void q_webenginepage_on_lifecycle_state_changed(void* self, void (*slot)(void*, int64_t));
void q_webenginepage_recommended_state_changed(void* self, int64_t state);
void q_webenginepage_on_recommended_state_changed(void* self, void (*slot)(void*, int64_t));
void q_webenginepage_find_text_finished(void* self, void* result);
void q_webenginepage_on_find_text_finished(void* self, void (*slot)(void*, void*));
void q_webenginepage_q_about_to_delete(void* self);
void q_webenginepage_on_q_about_to_delete(void* self, void (*slot)(void*));
QWebEnginePage* q_webenginepage_create_window(void* self, int64_t typeVal);
void q_webenginepage_on_create_window(void* self, QWebEnginePage* (*slot)(void*, int64_t));
QWebEnginePage* q_webenginepage_qbase_create_window(void* self, int64_t typeVal);
const char** q_webenginepage_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]);
void q_webenginepage_on_choose_files(void* self, const char** (*slot)(void*, int64_t, const char*, const char*));
const char** q_webenginepage_qbase_choose_files(void* self, int64_t mode, const char* oldFiles[], const char* acceptedMimeTypes[]);
void q_webenginepage_java_script_alert(void* self, void* securityOrigin, const char* msg);
void q_webenginepage_on_java_script_alert(void* self, void (*slot)(void*, void*, const char*));
void q_webenginepage_qbase_java_script_alert(void* self, void* securityOrigin, const char* msg);
bool q_webenginepage_java_script_confirm(void* self, void* securityOrigin, const char* msg);
void q_webenginepage_on_java_script_confirm(void* self, bool (*slot)(void*, void*, const char*));
bool q_webenginepage_qbase_java_script_confirm(void* self, void* securityOrigin, const char* msg);
void q_webenginepage_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID);
void q_webenginepage_on_java_script_console_message(void* self, void (*slot)(void*, int64_t, const char*, int, const char*));
void q_webenginepage_qbase_java_script_console_message(void* self, int64_t level, const char* message, int lineNumber, const char* sourceID);
bool q_webenginepage_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame);
void q_webenginepage_on_accept_navigation_request(void* self, bool (*slot)(void*, void*, int64_t, bool));
bool q_webenginepage_qbase_accept_navigation_request(void* self, void* url, int64_t typeVal, bool isMainFrame);
const char* q_webenginepage_tr2(const char* s, const char* c);
const char* q_webenginepage_tr3(const char* s, const char* c, int n);
void q_webenginepage_download2(void* self, void* url, const char* filename);
void q_webenginepage_set_html2(void* self, const char* html, void* baseUrl);
void q_webenginepage_set_content2(void* self, const char* data, const char* mimeType);
void q_webenginepage_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);
void q_webenginepage_set_web_channel2(void* self, void* param1, uint32_t worldId);
void q_webenginepage_save2(void* self, const char* filePath, int64_t format);
void q_webenginepage_print_to_pdf2(void* self, const char* filePath, void* layout);
void q_webenginepage_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);
const char* q_webenginepage_object_name(void* self);
void q_webenginepage_set_object_name(void* self, const char* name);
bool q_webenginepage_is_widget_type(void* self);
bool q_webenginepage_is_window_type(void* self);
bool q_webenginepage_is_quick_item_type(void* self);
bool q_webenginepage_signals_blocked(void* self);
bool q_webenginepage_block_signals(void* self, bool b);
QThread* q_webenginepage_thread(void* self);
void q_webenginepage_move_to_thread(void* self, void* thread);
int32_t q_webenginepage_start_timer(void* self, int interval);
void q_webenginepage_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webenginepage_children(void* self);
void q_webenginepage_set_parent(void* self, void* parent);
void q_webenginepage_install_event_filter(void* self, void* filterObj);
void q_webenginepage_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webenginepage_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webenginepage_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webenginepage_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webenginepage_disconnect_with_q_meta_object_connection(void* param1);
void q_webenginepage_dump_object_tree(void* self);
void q_webenginepage_dump_object_info(void* self);
bool q_webenginepage_set_property(void* self, const char* name, void* value);
QVariant* q_webenginepage_property(void* self, const char* name);
const char** q_webenginepage_dynamic_property_names(void* self);
QBindingStorage* q_webenginepage_binding_storage(void* self);
QBindingStorage* q_webenginepage_binding_storage2(void* self);
void q_webenginepage_destroyed(void* self);
void q_webenginepage_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webenginepage_parent(void* self);
bool q_webenginepage_inherits(void* self, const char* classname);
void q_webenginepage_delete_later(void* self);
int32_t q_webenginepage_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webenginepage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webenginepage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webenginepage_destroyed1(void* self, void* param1);
void q_webenginepage_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webenginepage_event_filter(void* self, void* watched, void* event);
bool q_webenginepage_qbase_event_filter(void* self, void* watched, void* event);
void q_webenginepage_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webenginepage_timer_event(void* self, void* event);
void q_webenginepage_qbase_timer_event(void* self, void* event);
void q_webenginepage_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webenginepage_child_event(void* self, void* event);
void q_webenginepage_qbase_child_event(void* self, void* event);
void q_webenginepage_on_child_event(void* self, void (*slot)(void*, void*));
void q_webenginepage_custom_event(void* self, void* event);
void q_webenginepage_qbase_custom_event(void* self, void* event);
void q_webenginepage_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webenginepage_connect_notify(void* self, void* signal);
void q_webenginepage_qbase_connect_notify(void* self, void* signal);
void q_webenginepage_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webenginepage_disconnect_notify(void* self, void* signal);
void q_webenginepage_qbase_disconnect_notify(void* self, void* signal);
void q_webenginepage_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_webenginepage_sender(void* self);
QObject* q_webenginepage_qbase_sender(void* self);
void q_webenginepage_on_sender(void* self, QObject* (*slot)());
int32_t q_webenginepage_sender_signal_index(void* self);
int32_t q_webenginepage_qbase_sender_signal_index(void* self);
void q_webenginepage_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webenginepage_receivers(void* self, const char* signal);
int32_t q_webenginepage_qbase_receivers(void* self, const char* signal);
void q_webenginepage_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webenginepage_is_signal_connected(void* self, void* signal);
bool q_webenginepage_qbase_is_signal_connected(void* self, void* signal);
void q_webenginepage_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
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
