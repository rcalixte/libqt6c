#pragma once
#ifndef SRCQT6C_LIBQGUIAPPLICATION_H
#define SRCQT6C_LIBQGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracteventdispatcher.h"
#include "libqabstractnativeeventfilter.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqclipboard.h"
#include "libqcoreapplication.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqicon.h"
#include "libqinputmethod.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include "libqscreen.h"
#include "libqsessionmanager.h"
#include <string.h>
#include "libqstylehints.h"
#include "libqthread.h"
#include "libqtranslator.h"
#include "libqvariant.h"
#include "libqwindow.h"

QGuiApplication* q_guiapplication_new(int* argc, char* argv[]);
QGuiApplication* q_guiapplication_new2(int* argc, char* argv[], int param3);
QMetaObject* q_guiapplication_meta_object(void* self);
void* q_guiapplication_metacast(void* self, const char* param1);
int32_t q_guiapplication_metacall(void* self, int64_t param1, int param2, void* param3);
void q_guiapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_guiapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_guiapplication_tr(const char* s);
void q_guiapplication_set_application_display_name(const char* name);
const char* q_guiapplication_application_display_name();
void q_guiapplication_set_desktop_file_name(const char* name);
const char* q_guiapplication_desktop_file_name();
libqt_list /* of QWindow* */ q_guiapplication_all_windows();
libqt_list /* of QWindow* */ q_guiapplication_top_level_windows();
QWindow* q_guiapplication_top_level_at(void* pos);
void q_guiapplication_set_window_icon(void* icon);
QIcon* q_guiapplication_window_icon();
const char* q_guiapplication_platform_name();
QWindow* q_guiapplication_modal_window();
QWindow* q_guiapplication_focus_window();
QObject* q_guiapplication_focus_object();
QScreen* q_guiapplication_primary_screen();
libqt_list /* of QScreen* */ q_guiapplication_screens();
QScreen* q_guiapplication_screen_at(void* point);
double q_guiapplication_device_pixel_ratio(void* self);
QCursor* q_guiapplication_override_cursor();
void q_guiapplication_set_override_cursor(void* overrideCursor);
void q_guiapplication_change_override_cursor(void* param1);
void q_guiapplication_restore_override_cursor();
QFont* q_guiapplication_font();
void q_guiapplication_set_font(void* font);
QClipboard* q_guiapplication_clipboard();
QPalette* q_guiapplication_palette();
void q_guiapplication_set_palette(void* pal);
int64_t q_guiapplication_keyboard_modifiers();
int64_t q_guiapplication_query_keyboard_modifiers();
int64_t q_guiapplication_mouse_buttons();
void q_guiapplication_set_layout_direction(int64_t direction);
int64_t q_guiapplication_layout_direction();
bool q_guiapplication_is_right_to_left();
bool q_guiapplication_is_left_to_right();
QStyleHints* q_guiapplication_style_hints();
void q_guiapplication_set_desktop_settings_aware(bool on);
bool q_guiapplication_desktop_settings_aware();
QInputMethod* q_guiapplication_input_method();
void q_guiapplication_set_quit_on_last_window_closed(bool quit);
bool q_guiapplication_quit_on_last_window_closed();
int64_t q_guiapplication_application_state();
void q_guiapplication_set_high_dpi_scale_factor_rounding_policy(int64_t policy);
int64_t q_guiapplication_high_dpi_scale_factor_rounding_policy();
int32_t q_guiapplication_exec();
bool q_guiapplication_notify(void* self, void* param1, void* param2);
void q_guiapplication_on_notify(void* self, bool (*slot)(void*, void*, void*));
bool q_guiapplication_qbase_notify(void* self, void* param1, void* param2);
bool q_guiapplication_is_session_restored(void* self);
const char* q_guiapplication_session_id(void* self);
const char* q_guiapplication_session_key(void* self);
bool q_guiapplication_is_saving_session(void* self);
void* q_guiapplication_resolve_interface(void* self, const char* name, int revision);
void q_guiapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
void* q_guiapplication_qbase_resolve_interface(void* self, const char* name, int revision);
void q_guiapplication_sync();
void q_guiapplication_font_database_changed(void* self);
void q_guiapplication_on_font_database_changed(void* self, void (*slot)(void*));
void q_guiapplication_screen_added(void* self, void* screen);
void q_guiapplication_on_screen_added(void* self, void (*slot)(void*, void*));
void q_guiapplication_screen_removed(void* self, void* screen);
void q_guiapplication_on_screen_removed(void* self, void (*slot)(void*, void*));
void q_guiapplication_primary_screen_changed(void* self, void* screen);
void q_guiapplication_on_primary_screen_changed(void* self, void (*slot)(void*, void*));
void q_guiapplication_last_window_closed(void* self);
void q_guiapplication_on_last_window_closed(void* self, void (*slot)(void*));
void q_guiapplication_focus_object_changed(void* self, void* focusObject);
void q_guiapplication_on_focus_object_changed(void* self, void (*slot)(void*, void*));
void q_guiapplication_focus_window_changed(void* self, void* focusWindow);
void q_guiapplication_on_focus_window_changed(void* self, void (*slot)(void*, void*));
void q_guiapplication_application_state_changed(void* self, int64_t state);
void q_guiapplication_on_application_state_changed(void* self, void (*slot)(void*, int64_t));
void q_guiapplication_layout_direction_changed(void* self, int64_t direction);
void q_guiapplication_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_guiapplication_commit_data_request(void* self, void* sessionManager);
void q_guiapplication_on_commit_data_request(void* self, void (*slot)(void*, void*));
void q_guiapplication_save_state_request(void* self, void* sessionManager);
void q_guiapplication_on_save_state_request(void* self, void (*slot)(void*, void*));
void q_guiapplication_application_display_name_changed(void* self);
void q_guiapplication_on_application_display_name_changed(void* self, void (*slot)(void*));
void q_guiapplication_palette_changed(void* self, void* pal);
void q_guiapplication_on_palette_changed(void* self, void (*slot)(void*, void*));
void q_guiapplication_font_changed(void* self, void* font);
void q_guiapplication_on_font_changed(void* self, void (*slot)(void*, void*));
bool q_guiapplication_event(void* self, void* param1);
void q_guiapplication_on_event(void* self, bool (*slot)(void*, void*));
bool q_guiapplication_qbase_event(void* self, void* param1);
const char* q_guiapplication_tr2(const char* s, const char* c);
const char* q_guiapplication_tr3(const char* s, const char* c, int n);
const char** q_guiapplication_arguments();
void q_guiapplication_set_attribute(int64_t attribute);
bool q_guiapplication_test_attribute(int64_t attribute);
void q_guiapplication_set_organization_domain(const char* orgDomain);
const char* q_guiapplication_organization_domain();
void q_guiapplication_set_organization_name(const char* orgName);
const char* q_guiapplication_organization_name();
void q_guiapplication_set_application_name(const char* application);
const char* q_guiapplication_application_name();
void q_guiapplication_set_application_version(const char* version);
const char* q_guiapplication_application_version();
void q_guiapplication_set_setuid_allowed(bool allow);
bool q_guiapplication_is_setuid_allowed();
QCoreApplication* q_guiapplication_instance();
void q_guiapplication_process_events();
void q_guiapplication_process_events2(int64_t flags, int maxtime);
bool q_guiapplication_send_event(void* receiver, void* event);
void q_guiapplication_post_event(void* receiver, void* event);
void q_guiapplication_send_posted_events();
void q_guiapplication_remove_posted_events(void* receiver);
QAbstractEventDispatcher* q_guiapplication_event_dispatcher();
void q_guiapplication_set_event_dispatcher(void* eventDispatcher);
bool q_guiapplication_starting_up();
bool q_guiapplication_closing_down();
const char* q_guiapplication_application_dir_path();
const char* q_guiapplication_application_file_path();
long long q_guiapplication_application_pid();
void q_guiapplication_set_library_paths(const char* libraryPaths[]);
const char** q_guiapplication_library_paths();
void q_guiapplication_add_library_path(const char* param1);
void q_guiapplication_remove_library_path(const char* param1);
bool q_guiapplication_install_translator(void* messageFile);
bool q_guiapplication_remove_translator(void* messageFile);
const char* q_guiapplication_translate(const char* context, const char* key);
void q_guiapplication_install_native_event_filter(void* self, void* filterObj);
void q_guiapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*));
void q_guiapplication_remove_native_event_filter(void* self, void* filterObj);
void q_guiapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));
bool q_guiapplication_is_quit_lock_enabled();
void q_guiapplication_set_quit_lock_enabled(bool enabled);
void q_guiapplication_quit();
void q_guiapplication_exit();
void q_guiapplication_organization_name_changed(void* self);
void q_guiapplication_on_organization_name_changed(void* self, void (*slot)(void*));
void q_guiapplication_organization_domain_changed(void* self);
void q_guiapplication_on_organization_domain_changed(void* self, void (*slot)(void*));
void q_guiapplication_application_name_changed(void* self);
void q_guiapplication_on_application_name_changed(void* self, void (*slot)(void*));
void q_guiapplication_application_version_changed(void* self);
void q_guiapplication_on_application_version_changed(void* self, void (*slot)(void*));
void q_guiapplication_set_attribute2(int64_t attribute, bool on);
void q_guiapplication_process_events1(int64_t flags);
void q_guiapplication_post_event3(void* receiver, void* event, int priority);
void q_guiapplication_send_posted_events1(void* receiver);
void q_guiapplication_send_posted_events2(void* receiver, int event_type);
void q_guiapplication_remove_posted_events2(void* receiver, int eventType);
const char* q_guiapplication_translate3(const char* context, const char* key, const char* disambiguation);
const char* q_guiapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);
void q_guiapplication_exit1(int retcode);
const char* q_guiapplication_object_name(void* self);
void q_guiapplication_set_object_name(void* self, const char* name);
bool q_guiapplication_is_widget_type(void* self);
bool q_guiapplication_is_window_type(void* self);
bool q_guiapplication_is_quick_item_type(void* self);
bool q_guiapplication_signals_blocked(void* self);
bool q_guiapplication_block_signals(void* self, bool b);
QThread* q_guiapplication_thread(void* self);
void q_guiapplication_move_to_thread(void* self, void* thread);
int32_t q_guiapplication_start_timer(void* self, int interval);
void q_guiapplication_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_guiapplication_children(void* self);
void q_guiapplication_set_parent(void* self, void* parent);
void q_guiapplication_install_event_filter(void* self, void* filterObj);
void q_guiapplication_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_guiapplication_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_guiapplication_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_guiapplication_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_guiapplication_disconnect_with_q_meta_object_connection(void* param1);
void q_guiapplication_dump_object_tree(void* self);
void q_guiapplication_dump_object_info(void* self);
bool q_guiapplication_set_property(void* self, const char* name, void* value);
QVariant* q_guiapplication_property(void* self, const char* name);
const char** q_guiapplication_dynamic_property_names(void* self);
QBindingStorage* q_guiapplication_binding_storage(void* self);
QBindingStorage* q_guiapplication_binding_storage2(void* self);
void q_guiapplication_destroyed(void* self);
void q_guiapplication_on_destroyed(void* self, void (*slot)(void*));
QObject* q_guiapplication_parent(void* self);
bool q_guiapplication_inherits(void* self, const char* classname);
void q_guiapplication_delete_later(void* self);
int32_t q_guiapplication_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_guiapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_guiapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_guiapplication_destroyed1(void* self, void* param1);
void q_guiapplication_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_guiapplication_event_filter(void* self, void* watched, void* event);
bool q_guiapplication_qbase_event_filter(void* self, void* watched, void* event);
void q_guiapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_guiapplication_timer_event(void* self, void* event);
void q_guiapplication_qbase_timer_event(void* self, void* event);
void q_guiapplication_on_timer_event(void* self, void (*slot)(void*, void*));
void q_guiapplication_child_event(void* self, void* event);
void q_guiapplication_qbase_child_event(void* self, void* event);
void q_guiapplication_on_child_event(void* self, void (*slot)(void*, void*));
void q_guiapplication_custom_event(void* self, void* event);
void q_guiapplication_qbase_custom_event(void* self, void* event);
void q_guiapplication_on_custom_event(void* self, void (*slot)(void*, void*));
void q_guiapplication_connect_notify(void* self, void* signal);
void q_guiapplication_qbase_connect_notify(void* self, void* signal);
void q_guiapplication_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_guiapplication_disconnect_notify(void* self, void* signal);
void q_guiapplication_qbase_disconnect_notify(void* self, void* signal);
void q_guiapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_guiapplication_sender(void* self);
QObject* q_guiapplication_qbase_sender(void* self);
void q_guiapplication_on_sender(void* self, QObject* (*slot)());
int32_t q_guiapplication_sender_signal_index(void* self);
int32_t q_guiapplication_qbase_sender_signal_index(void* self);
void q_guiapplication_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_guiapplication_receivers(void* self, const char* signal);
int32_t q_guiapplication_qbase_receivers(void* self, const char* signal);
void q_guiapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_guiapplication_is_signal_connected(void* self, void* signal);
bool q_guiapplication_qbase_is_signal_connected(void* self, void* signal);
void q_guiapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_guiapplication_delete(void* self);

#endif
