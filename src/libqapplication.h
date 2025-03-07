#pragma once
#ifndef SRCQT6C_LIBQAPPLICATION_H
#define SRCQT6C_LIBQAPPLICATION_H

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
#include "libqfontmetrics.h"
#include "libqguiapplication.h"
#include "libqicon.h"
#include "libqinputmethod.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include "libqscreen.h"
#include "libqsessionmanager.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstylehints.h"
#include "libqthread.h"
#include "libqtranslator.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QApplication* q_application_new(int* argc, char* argv[]);
QApplication* q_application_new2(int* argc, char* argv[], int param3);
QMetaObject* q_application_meta_object(void* self);
void* q_application_metacast(void* self, const char* param1);
int32_t q_application_metacall(void* self, int64_t param1, int param2, void* param3);
void q_application_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_application_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_application_tr(const char* s);
QStyle* q_application_style();
void q_application_set_style(void* style);
QStyle* q_application_set_style_with_style(const char* style);
QPalette* q_application_palette(void* param1);
QPalette* q_application_palette_with_class_name(const char* className);
void q_application_set_palette(void* param1);
QFont* q_application_font();
QFont* q_application_font_with_q_widget(void* param1);
QFont* q_application_font_with_class_name(const char* className);
void q_application_set_font(void* param1);
QFontMetrics* q_application_font_metrics();
libqt_list /* of QWidget* */ q_application_all_widgets();
libqt_list /* of QWidget* */ q_application_top_level_widgets();
QWidget* q_application_active_popup_widget();
QWidget* q_application_active_modal_widget();
QWidget* q_application_focus_widget();
QWidget* q_application_active_window();
void q_application_set_active_window(void* act);
QWidget* q_application_widget_at(void* p);
QWidget* q_application_widget_at2(int x, int y);
QWidget* q_application_top_level_at(void* p);
QWidget* q_application_top_level_at2(int x, int y);
void q_application_beep();
void q_application_alert(void* widget);
void q_application_set_cursor_flash_time(int cursorFlashTime);
int32_t q_application_cursor_flash_time();
void q_application_set_double_click_interval(int doubleClickInterval);
int32_t q_application_double_click_interval();
void q_application_set_keyboard_input_interval(int keyboardInputInterval);
int32_t q_application_keyboard_input_interval();
void q_application_set_wheel_scroll_lines(int wheelScrollLines);
int32_t q_application_wheel_scroll_lines();
void q_application_set_start_drag_time(int ms);
int32_t q_application_start_drag_time();
void q_application_set_start_drag_distance(int l);
int32_t q_application_start_drag_distance();
bool q_application_is_effect_enabled(int64_t param1);
void q_application_set_effect_enabled(int64_t param1);
int32_t q_application_exec();
bool q_application_notify(void* self, void* param1, void* param2);
void q_application_on_notify(void* self, bool (*slot)(void*, void*, void*));
bool q_application_qbase_notify(void* self, void* param1, void* param2);
void* q_application_resolve_interface(void* self, const char* name, int revision);
void q_application_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
void* q_application_qbase_resolve_interface(void* self, const char* name, int revision);
void q_application_focus_changed(void* self, void* old, void* now);
void q_application_on_focus_changed(void* self, void (*slot)(void*, void*, void*));
const char* q_application_style_sheet(void* self);
void q_application_set_style_sheet(void* self, const char* sheet);
void q_application_set_auto_sip_enabled(void* self, bool enabled);
bool q_application_auto_sip_enabled(void* self);
void q_application_close_all_windows();
void q_application_about_qt();
bool q_application_event(void* self, void* param1);
void q_application_on_event(void* self, bool (*slot)(void*, void*));
bool q_application_qbase_event(void* self, void* param1);
const char* q_application_tr2(const char* s, const char* c);
const char* q_application_tr3(const char* s, const char* c, int n);
void q_application_set_palette2(void* param1, const char* className);
void q_application_set_font2(void* param1, const char* className);
void q_application_alert2(void* widget, int duration);
void q_application_set_effect_enabled2(int64_t param1, bool enable);
void q_application_set_application_display_name(const char* name);
const char* q_application_application_display_name();
void q_application_set_desktop_file_name(const char* name);
const char* q_application_desktop_file_name();
libqt_list /* of QWindow* */ q_application_all_windows();
libqt_list /* of QWindow* */ q_application_top_level_windows();
void q_application_set_window_icon(void* icon);
QIcon* q_application_window_icon();
const char* q_application_platform_name();
QWindow* q_application_modal_window();
QWindow* q_application_focus_window();
QObject* q_application_focus_object();
QScreen* q_application_primary_screen();
libqt_list /* of QScreen* */ q_application_screens();
QScreen* q_application_screen_at(void* point);
double q_application_device_pixel_ratio(void* self);
QCursor* q_application_override_cursor();
void q_application_set_override_cursor(void* overrideCursor);
void q_application_change_override_cursor(void* param1);
void q_application_restore_override_cursor();
QClipboard* q_application_clipboard();
int64_t q_application_keyboard_modifiers();
int64_t q_application_query_keyboard_modifiers();
int64_t q_application_mouse_buttons();
void q_application_set_layout_direction(int64_t direction);
int64_t q_application_layout_direction();
bool q_application_is_right_to_left();
bool q_application_is_left_to_right();
QStyleHints* q_application_style_hints();
void q_application_set_desktop_settings_aware(bool on);
bool q_application_desktop_settings_aware();
QInputMethod* q_application_input_method();
void q_application_set_quit_on_last_window_closed(bool quit);
bool q_application_quit_on_last_window_closed();
int64_t q_application_application_state();
void q_application_set_high_dpi_scale_factor_rounding_policy(int64_t policy);
int64_t q_application_high_dpi_scale_factor_rounding_policy();
bool q_application_is_session_restored(void* self);
const char* q_application_session_id(void* self);
const char* q_application_session_key(void* self);
bool q_application_is_saving_session(void* self);
void q_application_sync();
void q_application_font_database_changed(void* self);
void q_application_on_font_database_changed(void* self, void (*slot)(void*));
void q_application_screen_added(void* self, void* screen);
void q_application_on_screen_added(void* self, void (*slot)(void*, void*));
void q_application_screen_removed(void* self, void* screen);
void q_application_on_screen_removed(void* self, void (*slot)(void*, void*));
void q_application_primary_screen_changed(void* self, void* screen);
void q_application_on_primary_screen_changed(void* self, void (*slot)(void*, void*));
void q_application_last_window_closed(void* self);
void q_application_on_last_window_closed(void* self, void (*slot)(void*));
void q_application_focus_object_changed(void* self, void* focusObject);
void q_application_on_focus_object_changed(void* self, void (*slot)(void*, void*));
void q_application_focus_window_changed(void* self, void* focusWindow);
void q_application_on_focus_window_changed(void* self, void (*slot)(void*, void*));
void q_application_application_state_changed(void* self, int64_t state);
void q_application_on_application_state_changed(void* self, void (*slot)(void*, int64_t));
void q_application_layout_direction_changed(void* self, int64_t direction);
void q_application_on_layout_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_application_commit_data_request(void* self, void* sessionManager);
void q_application_on_commit_data_request(void* self, void (*slot)(void*, void*));
void q_application_save_state_request(void* self, void* sessionManager);
void q_application_on_save_state_request(void* self, void (*slot)(void*, void*));
void q_application_application_display_name_changed(void* self);
void q_application_on_application_display_name_changed(void* self, void (*slot)(void*));
void q_application_palette_changed(void* self, void* pal);
void q_application_on_palette_changed(void* self, void (*slot)(void*, void*));
void q_application_font_changed(void* self, void* font);
void q_application_on_font_changed(void* self, void (*slot)(void*, void*));
const char** q_application_arguments();
void q_application_set_attribute(int64_t attribute);
bool q_application_test_attribute(int64_t attribute);
void q_application_set_organization_domain(const char* orgDomain);
const char* q_application_organization_domain();
void q_application_set_organization_name(const char* orgName);
const char* q_application_organization_name();
void q_application_set_application_name(const char* application);
const char* q_application_application_name();
void q_application_set_application_version(const char* version);
const char* q_application_application_version();
void q_application_set_setuid_allowed(bool allow);
bool q_application_is_setuid_allowed();
QCoreApplication* q_application_instance();
void q_application_process_events();
void q_application_process_events2(int64_t flags, int maxtime);
bool q_application_send_event(void* receiver, void* event);
void q_application_post_event(void* receiver, void* event);
void q_application_send_posted_events();
void q_application_remove_posted_events(void* receiver);
QAbstractEventDispatcher* q_application_event_dispatcher();
void q_application_set_event_dispatcher(void* eventDispatcher);
bool q_application_starting_up();
bool q_application_closing_down();
const char* q_application_application_dir_path();
const char* q_application_application_file_path();
long long q_application_application_pid();
void q_application_set_library_paths(const char* libraryPaths[]);
const char** q_application_library_paths();
void q_application_add_library_path(const char* param1);
void q_application_remove_library_path(const char* param1);
bool q_application_install_translator(void* messageFile);
bool q_application_remove_translator(void* messageFile);
const char* q_application_translate(const char* context, const char* key);
void q_application_install_native_event_filter(void* self, void* filterObj);
void q_application_on_install_native_event_filter(void* self, void (*slot)(void*, void*));
void q_application_remove_native_event_filter(void* self, void* filterObj);
void q_application_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));
bool q_application_is_quit_lock_enabled();
void q_application_set_quit_lock_enabled(bool enabled);
void q_application_quit();
void q_application_exit();
void q_application_organization_name_changed(void* self);
void q_application_on_organization_name_changed(void* self, void (*slot)(void*));
void q_application_organization_domain_changed(void* self);
void q_application_on_organization_domain_changed(void* self, void (*slot)(void*));
void q_application_application_name_changed(void* self);
void q_application_on_application_name_changed(void* self, void (*slot)(void*));
void q_application_application_version_changed(void* self);
void q_application_on_application_version_changed(void* self, void (*slot)(void*));
void q_application_set_attribute2(int64_t attribute, bool on);
void q_application_process_events1(int64_t flags);
void q_application_post_event3(void* receiver, void* event, int priority);
void q_application_send_posted_events1(void* receiver);
void q_application_send_posted_events2(void* receiver, int event_type);
void q_application_remove_posted_events2(void* receiver, int eventType);
const char* q_application_translate3(const char* context, const char* key, const char* disambiguation);
const char* q_application_translate4(const char* context, const char* key, const char* disambiguation, int n);
void q_application_exit1(int retcode);
const char* q_application_object_name(void* self);
void q_application_set_object_name(void* self, const char* name);
bool q_application_is_widget_type(void* self);
bool q_application_is_window_type(void* self);
bool q_application_is_quick_item_type(void* self);
bool q_application_signals_blocked(void* self);
bool q_application_block_signals(void* self, bool b);
QThread* q_application_thread(void* self);
void q_application_move_to_thread(void* self, void* thread);
int32_t q_application_start_timer(void* self, int interval);
void q_application_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_application_children(void* self);
void q_application_set_parent(void* self, void* parent);
void q_application_install_event_filter(void* self, void* filterObj);
void q_application_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_application_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_application_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_application_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_application_disconnect_with_q_meta_object_connection(void* param1);
void q_application_dump_object_tree(void* self);
void q_application_dump_object_info(void* self);
bool q_application_set_property(void* self, const char* name, void* value);
QVariant* q_application_property(void* self, const char* name);
const char** q_application_dynamic_property_names(void* self);
QBindingStorage* q_application_binding_storage(void* self);
QBindingStorage* q_application_binding_storage2(void* self);
void q_application_destroyed(void* self);
void q_application_on_destroyed(void* self, void (*slot)(void*));
QObject* q_application_parent(void* self);
bool q_application_inherits(void* self, const char* classname);
void q_application_delete_later(void* self);
int32_t q_application_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_application_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_application_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_application_destroyed1(void* self, void* param1);
void q_application_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_application_event_filter(void* self, void* watched, void* event);
bool q_application_qbase_event_filter(void* self, void* watched, void* event);
void q_application_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_application_timer_event(void* self, void* event);
void q_application_qbase_timer_event(void* self, void* event);
void q_application_on_timer_event(void* self, void (*slot)(void*, void*));
void q_application_child_event(void* self, void* event);
void q_application_qbase_child_event(void* self, void* event);
void q_application_on_child_event(void* self, void (*slot)(void*, void*));
void q_application_custom_event(void* self, void* event);
void q_application_qbase_custom_event(void* self, void* event);
void q_application_on_custom_event(void* self, void (*slot)(void*, void*));
void q_application_connect_notify(void* self, void* signal);
void q_application_qbase_connect_notify(void* self, void* signal);
void q_application_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_application_disconnect_notify(void* self, void* signal);
void q_application_qbase_disconnect_notify(void* self, void* signal);
void q_application_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_application_sender(void* self);
QObject* q_application_qbase_sender(void* self);
void q_application_on_sender(void* self, QObject* (*slot)());
int32_t q_application_sender_signal_index(void* self);
int32_t q_application_qbase_sender_signal_index(void* self);
void q_application_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_application_receivers(void* self, const char* signal);
int32_t q_application_qbase_receivers(void* self, const char* signal);
void q_application_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_application_is_signal_connected(void* self, void* signal);
bool q_application_qbase_is_signal_connected(void* self, void* signal);
void q_application_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_application_delete(void* self);

#endif
