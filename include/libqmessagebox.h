#pragma once
#ifndef SRCQT6C_LIBQMESSAGEBOX_H
#define SRCQT6C_LIBQMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcheckbox.h"
#include "libqcursor.h"
#include "libqdialog.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqpushbutton.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QMessageBox* q_messagebox_new(void* parent);
QMessageBox* q_messagebox_new2();
QMessageBox* q_messagebox_new3(int64_t icon, const char* title, const char* text);
QMessageBox* q_messagebox_new4(const char* title, const char* text, int64_t icon, int button0, int button1, int button2);
QMessageBox* q_messagebox_new5(int64_t icon, const char* title, const char* text, int64_t buttons);
QMessageBox* q_messagebox_new6(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent);
QMessageBox* q_messagebox_new7(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent, int64_t flags);
QMessageBox* q_messagebox_new8(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent);
QMessageBox* q_messagebox_new9(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent, int64_t f);
QMetaObject* q_messagebox_meta_object(void* self);
void* q_messagebox_metacast(void* self, const char* param1);
int32_t q_messagebox_metacall(void* self, int64_t param1, int param2, void* param3);
void q_messagebox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_messagebox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_messagebox_tr(const char* s);
void q_messagebox_add_button(void* self, void* button, int64_t role);
QPushButton* q_messagebox_add_button2(void* self, const char* text, int64_t role);
QPushButton* q_messagebox_add_button_with_button(void* self, int64_t button);
void q_messagebox_remove_button(void* self, void* button);
libqt_list /* of QAbstractButton* */ q_messagebox_buttons(void* self);
int64_t q_messagebox_button_role(void* self, void* button);
void q_messagebox_set_standard_buttons(void* self, int64_t buttons);
int64_t q_messagebox_standard_buttons(void* self);
int64_t q_messagebox_standard_button(void* self, void* button);
QAbstractButton* q_messagebox_button(void* self, int64_t which);
QPushButton* q_messagebox_default_button(void* self);
void q_messagebox_set_default_button(void* self, void* button);
void q_messagebox_set_default_button_with_button(void* self, int64_t button);
QAbstractButton* q_messagebox_escape_button(void* self);
void q_messagebox_set_escape_button(void* self, void* button);
void q_messagebox_set_escape_button_with_button(void* self, int64_t button);
QAbstractButton* q_messagebox_clicked_button(void* self);
const char* q_messagebox_text(void* self);
void q_messagebox_set_text(void* self, const char* text);
int64_t q_messagebox_icon(void* self);
void q_messagebox_set_icon(void* self, int64_t icon);
QPixmap* q_messagebox_icon_pixmap(void* self);
void q_messagebox_set_icon_pixmap(void* self, void* pixmap);
int64_t q_messagebox_text_format(void* self);
void q_messagebox_set_text_format(void* self, int64_t format);
void q_messagebox_set_text_interaction_flags(void* self, int64_t flags);
int64_t q_messagebox_text_interaction_flags(void* self);
void q_messagebox_set_check_box(void* self, void* cb);
QCheckBox* q_messagebox_check_box(void* self);
int64_t q_messagebox_information(void* parent, const char* title, const char* text);
int64_t q_messagebox_information2(void* parent, const char* title, const char* text, int64_t button0);
int64_t q_messagebox_question(void* parent, const char* title, const char* text);
int32_t q_messagebox_question2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);
int64_t q_messagebox_warning(void* parent, const char* title, const char* text);
int32_t q_messagebox_warning2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);
int64_t q_messagebox_critical(void* parent, const char* title, const char* text);
int32_t q_messagebox_critical2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);
void q_messagebox_about(void* parent, const char* title, const char* text);
void q_messagebox_about_qt(void* parent);
int32_t q_messagebox_information3(void* parent, const char* title, const char* text, int button0);
int32_t q_messagebox_information4(void* parent, const char* title, const char* text, const char* button0Text);
int32_t q_messagebox_question3(void* parent, const char* title, const char* text, int button0);
int32_t q_messagebox_question4(void* parent, const char* title, const char* text, const char* button0Text);
int32_t q_messagebox_warning3(void* parent, const char* title, const char* text, int button0, int button1);
int32_t q_messagebox_warning4(void* parent, const char* title, const char* text, const char* button0Text);
int32_t q_messagebox_critical3(void* parent, const char* title, const char* text, int button0, int button1);
int32_t q_messagebox_critical4(void* parent, const char* title, const char* text, const char* button0Text);
const char* q_messagebox_button_text(void* self, int button);
void q_messagebox_set_button_text(void* self, int button, const char* text);
const char* q_messagebox_informative_text(void* self);
void q_messagebox_set_informative_text(void* self, const char* text);
const char* q_messagebox_detailed_text(void* self);
void q_messagebox_set_detailed_text(void* self, const char* text);
void q_messagebox_set_window_title(void* self, const char* title);
void q_messagebox_set_window_modality(void* self, int64_t windowModality);
QPixmap* q_messagebox_standard_icon(int64_t icon);
void q_messagebox_button_clicked(void* self, void* button);
void q_messagebox_on_button_clicked(void* self, void (*slot)(void*, void*));
bool q_messagebox_event(void* self, void* e);
void q_messagebox_on_event(void* self, bool (*slot)(void*, void*));
bool q_messagebox_qbase_event(void* self, void* e);
void q_messagebox_resize_event(void* self, void* event);
void q_messagebox_on_resize_event(void* self, void (*slot)(void*, void*));
void q_messagebox_qbase_resize_event(void* self, void* event);
void q_messagebox_show_event(void* self, void* event);
void q_messagebox_on_show_event(void* self, void (*slot)(void*, void*));
void q_messagebox_qbase_show_event(void* self, void* event);
void q_messagebox_close_event(void* self, void* event);
void q_messagebox_on_close_event(void* self, void (*slot)(void*, void*));
void q_messagebox_qbase_close_event(void* self, void* event);
void q_messagebox_key_press_event(void* self, void* event);
void q_messagebox_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_messagebox_qbase_key_press_event(void* self, void* event);
void q_messagebox_change_event(void* self, void* event);
void q_messagebox_on_change_event(void* self, void (*slot)(void*, void*));
void q_messagebox_qbase_change_event(void* self, void* event);
const char* q_messagebox_tr2(const char* s, const char* c);
const char* q_messagebox_tr3(const char* s, const char* c, int n);
int64_t q_messagebox_information42(void* parent, const char* title, const char* text, int64_t buttons);
int64_t q_messagebox_information5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);
int64_t q_messagebox_information52(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);
int64_t q_messagebox_question42(void* parent, const char* title, const char* text, int64_t buttons);
int64_t q_messagebox_question5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);
int64_t q_messagebox_warning42(void* parent, const char* title, const char* text, int64_t buttons);
int64_t q_messagebox_warning5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);
int64_t q_messagebox_critical42(void* parent, const char* title, const char* text, int64_t buttons);
int64_t q_messagebox_critical5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);
void q_messagebox_about_qt2(void* parent, const char* title);
int32_t q_messagebox_information53(void* parent, const char* title, const char* text, int button0, int button1);
int32_t q_messagebox_information6(void* parent, const char* title, const char* text, int button0, int button1, int button2);
int32_t q_messagebox_information54(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);
int32_t q_messagebox_information62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);
int32_t q_messagebox_information7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);
int32_t q_messagebox_information8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);
int32_t q_messagebox_question52(void* parent, const char* title, const char* text, int button0, int button1);
int32_t q_messagebox_question6(void* parent, const char* title, const char* text, int button0, int button1, int button2);
int32_t q_messagebox_question53(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);
int32_t q_messagebox_question62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);
int32_t q_messagebox_question7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);
int32_t q_messagebox_question8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);
int32_t q_messagebox_warning6(void* parent, const char* title, const char* text, int button0, int button1, int button2);
int32_t q_messagebox_warning52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);
int32_t q_messagebox_warning62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);
int32_t q_messagebox_warning7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);
int32_t q_messagebox_warning8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);
int32_t q_messagebox_critical6(void* parent, const char* title, const char* text, int button0, int button1, int button2);
int32_t q_messagebox_critical52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);
int32_t q_messagebox_critical62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);
int32_t q_messagebox_critical7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);
int32_t q_messagebox_critical8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);
int32_t q_messagebox_result(void* self);
void q_messagebox_set_size_grip_enabled(void* self, bool sizeGripEnabled);
bool q_messagebox_is_size_grip_enabled(void* self);
void q_messagebox_set_modal(void* self, bool modal);
void q_messagebox_set_result(void* self, int r);
void q_messagebox_finished(void* self, int result);
void q_messagebox_on_finished(void* self, void (*slot)(void*, int));
void q_messagebox_accepted(void* self);
void q_messagebox_on_accepted(void* self, void (*slot)(void*));
void q_messagebox_rejected(void* self);
void q_messagebox_on_rejected(void* self, void (*slot)(void*));
uintptr_t q_messagebox_win_id(void* self);
void q_messagebox_create_win_id(void* self);
uintptr_t q_messagebox_internal_win_id(void* self);
uintptr_t q_messagebox_effective_win_id(void* self);
QStyle* q_messagebox_style(void* self);
void q_messagebox_set_style(void* self, void* style);
bool q_messagebox_is_top_level(void* self);
bool q_messagebox_is_window(void* self);
bool q_messagebox_is_modal(void* self);
int64_t q_messagebox_window_modality(void* self);
bool q_messagebox_is_enabled(void* self);
bool q_messagebox_is_enabled_to(void* self, void* param1);
void q_messagebox_set_enabled(void* self, bool enabled);
void q_messagebox_set_disabled(void* self, bool disabled);
void q_messagebox_set_window_modified(void* self, bool windowModified);
QRect* q_messagebox_frame_geometry(void* self);
QRect* q_messagebox_geometry(void* self);
QRect* q_messagebox_normal_geometry(void* self);
int32_t q_messagebox_x(void* self);
int32_t q_messagebox_y(void* self);
QPoint* q_messagebox_pos(void* self);
QSize* q_messagebox_frame_size(void* self);
QSize* q_messagebox_size(void* self);
int32_t q_messagebox_width(void* self);
int32_t q_messagebox_height(void* self);
QRect* q_messagebox_rect(void* self);
QRect* q_messagebox_children_rect(void* self);
QRegion* q_messagebox_children_region(void* self);
QSize* q_messagebox_minimum_size(void* self);
QSize* q_messagebox_maximum_size(void* self);
int32_t q_messagebox_minimum_width(void* self);
int32_t q_messagebox_minimum_height(void* self);
int32_t q_messagebox_maximum_width(void* self);
int32_t q_messagebox_maximum_height(void* self);
void q_messagebox_set_minimum_size(void* self, void* minimumSize);
void q_messagebox_set_minimum_size2(void* self, int minw, int minh);
void q_messagebox_set_maximum_size(void* self, void* maximumSize);
void q_messagebox_set_maximum_size2(void* self, int maxw, int maxh);
void q_messagebox_set_minimum_width(void* self, int minw);
void q_messagebox_set_minimum_height(void* self, int minh);
void q_messagebox_set_maximum_width(void* self, int maxw);
void q_messagebox_set_maximum_height(void* self, int maxh);
QSize* q_messagebox_size_increment(void* self);
void q_messagebox_set_size_increment(void* self, void* sizeIncrement);
void q_messagebox_set_size_increment2(void* self, int w, int h);
QSize* q_messagebox_base_size(void* self);
void q_messagebox_set_base_size(void* self, void* baseSize);
void q_messagebox_set_base_size2(void* self, int basew, int baseh);
void q_messagebox_set_fixed_size(void* self, void* fixedSize);
void q_messagebox_set_fixed_size2(void* self, int w, int h);
void q_messagebox_set_fixed_width(void* self, int w);
void q_messagebox_set_fixed_height(void* self, int h);
QPointF* q_messagebox_map_to_global(void* self, void* param1);
QPoint* q_messagebox_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_messagebox_map_from_global(void* self, void* param1);
QPoint* q_messagebox_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_messagebox_map_to_parent(void* self, void* param1);
QPoint* q_messagebox_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_messagebox_map_from_parent(void* self, void* param1);
QPoint* q_messagebox_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_messagebox_map_to(void* self, void* param1, void* param2);
QPoint* q_messagebox_map_to2(void* self, void* param1, void* param2);
QPointF* q_messagebox_map_from(void* self, void* param1, void* param2);
QPoint* q_messagebox_map_from2(void* self, void* param1, void* param2);
QWidget* q_messagebox_window(void* self);
QWidget* q_messagebox_native_parent_widget(void* self);
QWidget* q_messagebox_top_level_widget(void* self);
QPalette* q_messagebox_palette(void* self);
void q_messagebox_set_palette(void* self, void* palette);
void q_messagebox_set_background_role(void* self, int64_t backgroundRole);
int64_t q_messagebox_background_role(void* self);
void q_messagebox_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_messagebox_foreground_role(void* self);
QFont* q_messagebox_font(void* self);
void q_messagebox_set_font(void* self, void* font);
QFontMetrics* q_messagebox_font_metrics(void* self);
QFontInfo* q_messagebox_font_info(void* self);
QCursor* q_messagebox_cursor(void* self);
void q_messagebox_set_cursor(void* self, void* cursor);
void q_messagebox_unset_cursor(void* self);
void q_messagebox_set_mouse_tracking(void* self, bool enable);
bool q_messagebox_has_mouse_tracking(void* self);
bool q_messagebox_under_mouse(void* self);
void q_messagebox_set_tablet_tracking(void* self, bool enable);
bool q_messagebox_has_tablet_tracking(void* self);
void q_messagebox_set_mask(void* self, void* mask);
void q_messagebox_set_mask_with_mask(void* self, void* mask);
QRegion* q_messagebox_mask(void* self);
void q_messagebox_clear_mask(void* self);
void q_messagebox_render(void* self, void* target);
void q_messagebox_render_with_painter(void* self, void* painter);
QPixmap* q_messagebox_grab(void* self);
QGraphicsEffect* q_messagebox_graphics_effect(void* self);
void q_messagebox_set_graphics_effect(void* self, void* effect);
void q_messagebox_grab_gesture(void* self, int64_t typeVal);
void q_messagebox_ungrab_gesture(void* self, int64_t typeVal);
void q_messagebox_set_style_sheet(void* self, const char* styleSheet);
const char* q_messagebox_style_sheet(void* self);
const char* q_messagebox_window_title(void* self);
void q_messagebox_set_window_icon(void* self, void* icon);
QIcon* q_messagebox_window_icon(void* self);
void q_messagebox_set_window_icon_text(void* self, const char* windowIconText);
const char* q_messagebox_window_icon_text(void* self);
void q_messagebox_set_window_role(void* self, const char* windowRole);
const char* q_messagebox_window_role(void* self);
void q_messagebox_set_window_file_path(void* self, const char* filePath);
const char* q_messagebox_window_file_path(void* self);
void q_messagebox_set_window_opacity(void* self, double level);
double q_messagebox_window_opacity(void* self);
bool q_messagebox_is_window_modified(void* self);
void q_messagebox_set_tool_tip(void* self, const char* toolTip);
const char* q_messagebox_tool_tip(void* self);
void q_messagebox_set_tool_tip_duration(void* self, int msec);
int32_t q_messagebox_tool_tip_duration(void* self);
void q_messagebox_set_status_tip(void* self, const char* statusTip);
const char* q_messagebox_status_tip(void* self);
void q_messagebox_set_whats_this(void* self, const char* whatsThis);
const char* q_messagebox_whats_this(void* self);
const char* q_messagebox_accessible_name(void* self);
void q_messagebox_set_accessible_name(void* self, const char* name);
const char* q_messagebox_accessible_description(void* self);
void q_messagebox_set_accessible_description(void* self, const char* description);
void q_messagebox_set_layout_direction(void* self, int64_t direction);
int64_t q_messagebox_layout_direction(void* self);
void q_messagebox_unset_layout_direction(void* self);
void q_messagebox_set_locale(void* self, void* locale);
QLocale* q_messagebox_locale(void* self);
void q_messagebox_unset_locale(void* self);
bool q_messagebox_is_right_to_left(void* self);
bool q_messagebox_is_left_to_right(void* self);
void q_messagebox_set_focus(void* self);
bool q_messagebox_is_active_window(void* self);
void q_messagebox_activate_window(void* self);
void q_messagebox_clear_focus(void* self);
void q_messagebox_set_focus_with_reason(void* self, int64_t reason);
int64_t q_messagebox_focus_policy(void* self);
void q_messagebox_set_focus_policy(void* self, int64_t policy);
bool q_messagebox_has_focus(void* self);
void q_messagebox_set_tab_order(void* param1, void* param2);
void q_messagebox_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_messagebox_focus_proxy(void* self);
int64_t q_messagebox_context_menu_policy(void* self);
void q_messagebox_set_context_menu_policy(void* self, int64_t policy);
void q_messagebox_grab_mouse(void* self);
void q_messagebox_grab_mouse_with_q_cursor(void* self, void* param1);
void q_messagebox_release_mouse(void* self);
void q_messagebox_grab_keyboard(void* self);
void q_messagebox_release_keyboard(void* self);
int32_t q_messagebox_grab_shortcut(void* self, void* key);
void q_messagebox_release_shortcut(void* self, int id);
void q_messagebox_set_shortcut_enabled(void* self, int id);
void q_messagebox_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_messagebox_mouse_grabber();
QWidget* q_messagebox_keyboard_grabber();
bool q_messagebox_updates_enabled(void* self);
void q_messagebox_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_messagebox_graphics_proxy_widget(void* self);
void q_messagebox_update(void* self);
void q_messagebox_repaint(void* self);
void q_messagebox_update2(void* self, int x, int y, int w, int h);
void q_messagebox_update_with_q_rect(void* self, void* param1);
void q_messagebox_update_with_q_region(void* self, void* param1);
void q_messagebox_repaint2(void* self, int x, int y, int w, int h);
void q_messagebox_repaint_with_q_rect(void* self, void* param1);
void q_messagebox_repaint_with_q_region(void* self, void* param1);
void q_messagebox_set_hidden(void* self, bool hidden);
void q_messagebox_show(void* self);
void q_messagebox_hide(void* self);
void q_messagebox_show_minimized(void* self);
void q_messagebox_show_maximized(void* self);
void q_messagebox_show_full_screen(void* self);
void q_messagebox_show_normal(void* self);
bool q_messagebox_close(void* self);
void q_messagebox_raise(void* self);
void q_messagebox_lower(void* self);
void q_messagebox_stack_under(void* self, void* param1);
void q_messagebox_move(void* self, int x, int y);
void q_messagebox_move_with_q_point(void* self, void* param1);
void q_messagebox_resize(void* self, int w, int h);
void q_messagebox_resize_with_q_size(void* self, void* param1);
void q_messagebox_set_geometry(void* self, int x, int y, int w, int h);
void q_messagebox_set_geometry_with_geometry(void* self, void* geometry);
char* q_messagebox_save_geometry(void* self);
bool q_messagebox_restore_geometry(void* self, const char* geometry);
void q_messagebox_adjust_size(void* self);
bool q_messagebox_is_visible(void* self);
bool q_messagebox_is_visible_to(void* self, void* param1);
bool q_messagebox_is_hidden(void* self);
bool q_messagebox_is_minimized(void* self);
bool q_messagebox_is_maximized(void* self);
bool q_messagebox_is_full_screen(void* self);
int64_t q_messagebox_window_state(void* self);
void q_messagebox_set_window_state(void* self, int64_t state);
void q_messagebox_override_window_state(void* self, int64_t state);
QSizePolicy* q_messagebox_size_policy(void* self);
void q_messagebox_set_size_policy(void* self, void* sizePolicy);
void q_messagebox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_messagebox_visible_region(void* self);
void q_messagebox_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_messagebox_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_messagebox_contents_margins(void* self);
QRect* q_messagebox_contents_rect(void* self);
QLayout* q_messagebox_layout(void* self);
void q_messagebox_set_layout(void* self, void* layout);
void q_messagebox_update_geometry(void* self);
void q_messagebox_set_parent(void* self, void* parent);
void q_messagebox_set_parent2(void* self, void* parent, int64_t f);
void q_messagebox_scroll(void* self, int dx, int dy);
void q_messagebox_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_messagebox_focus_widget(void* self);
QWidget* q_messagebox_next_in_focus_chain(void* self);
QWidget* q_messagebox_previous_in_focus_chain(void* self);
bool q_messagebox_accept_drops(void* self);
void q_messagebox_set_accept_drops(void* self, bool on);
void q_messagebox_add_action(void* self, void* action);
void q_messagebox_add_actions(void* self, void* actions[]);
void q_messagebox_insert_actions(void* self, void* before, void* actions[]);
void q_messagebox_insert_action(void* self, void* before, void* action);
void q_messagebox_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_messagebox_actions(void* self);
QAction* q_messagebox_add_action_with_text(void* self, const char* text);
QAction* q_messagebox_add_action2(void* self, void* icon, const char* text);
QAction* q_messagebox_add_action3(void* self, const char* text, void* shortcut);
QAction* q_messagebox_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_messagebox_parent_widget(void* self);
void q_messagebox_set_window_flags(void* self, int64_t typeVal);
int64_t q_messagebox_window_flags(void* self);
void q_messagebox_set_window_flag(void* self, int64_t param1);
void q_messagebox_override_window_flags(void* self, int64_t typeVal);
int64_t q_messagebox_window_type(void* self);
QWidget* q_messagebox_find(uint64_t param1);
QWidget* q_messagebox_child_at(void* self, int x, int y);
QWidget* q_messagebox_child_at_with_q_point(void* self, void* p);
void q_messagebox_set_attribute(void* self, int64_t param1);
bool q_messagebox_test_attribute(void* self, int64_t param1);
void q_messagebox_ensure_polished(void* self);
bool q_messagebox_is_ancestor_of(void* self, void* child);
bool q_messagebox_auto_fill_background(void* self);
void q_messagebox_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_messagebox_backing_store(void* self);
QWindow* q_messagebox_window_handle(void* self);
QScreen* q_messagebox_screen(void* self);
void q_messagebox_set_screen(void* self, void* screen);
QWidget* q_messagebox_create_window_container(void* window);
void q_messagebox_window_title_changed(void* self, const char* title);
void q_messagebox_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_messagebox_window_icon_changed(void* self, void* icon);
void q_messagebox_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_messagebox_window_icon_text_changed(void* self, const char* iconText);
void q_messagebox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_messagebox_custom_context_menu_requested(void* self, void* pos);
void q_messagebox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_messagebox_input_method_hints(void* self);
void q_messagebox_set_input_method_hints(void* self, int64_t hints);
void q_messagebox_render2(void* self, void* target, void* targetOffset);
void q_messagebox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_messagebox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_messagebox_render22(void* self, void* painter, void* targetOffset);
void q_messagebox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_messagebox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_messagebox_grab1(void* self, void* rectangle);
void q_messagebox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_messagebox_grab_shortcut2(void* self, void* key, int64_t context);
void q_messagebox_set_shortcut_enabled2(void* self, int id, bool enable);
void q_messagebox_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_messagebox_set_window_flag2(void* self, int64_t param1, bool on);
void q_messagebox_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_messagebox_create_window_container2(void* window, void* parent);
QWidget* q_messagebox_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_messagebox_object_name(void* self);
void q_messagebox_set_object_name(void* self, const char* name);
bool q_messagebox_is_widget_type(void* self);
bool q_messagebox_is_window_type(void* self);
bool q_messagebox_is_quick_item_type(void* self);
bool q_messagebox_signals_blocked(void* self);
bool q_messagebox_block_signals(void* self, bool b);
QThread* q_messagebox_thread(void* self);
void q_messagebox_move_to_thread(void* self, void* thread);
int32_t q_messagebox_start_timer(void* self, int interval);
void q_messagebox_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_messagebox_children(void* self);
void q_messagebox_install_event_filter(void* self, void* filterObj);
void q_messagebox_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_messagebox_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_messagebox_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_messagebox_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_messagebox_disconnect_with_q_meta_object_connection(void* param1);
void q_messagebox_dump_object_tree(void* self);
void q_messagebox_dump_object_info(void* self);
bool q_messagebox_set_property(void* self, const char* name, void* value);
QVariant* q_messagebox_property(void* self, const char* name);
const char** q_messagebox_dynamic_property_names(void* self);
QBindingStorage* q_messagebox_binding_storage(void* self);
QBindingStorage* q_messagebox_binding_storage2(void* self);
void q_messagebox_destroyed(void* self);
void q_messagebox_on_destroyed(void* self, void (*slot)(void*));
QObject* q_messagebox_parent(void* self);
bool q_messagebox_inherits(void* self, const char* classname);
void q_messagebox_delete_later(void* self);
int32_t q_messagebox_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_messagebox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_messagebox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_messagebox_destroyed1(void* self, void* param1);
void q_messagebox_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_messagebox_painting_active(void* self);
int32_t q_messagebox_width_m_m(void* self);
int32_t q_messagebox_height_m_m(void* self);
int32_t q_messagebox_logical_dpi_x(void* self);
int32_t q_messagebox_logical_dpi_y(void* self);
int32_t q_messagebox_physical_dpi_x(void* self);
int32_t q_messagebox_physical_dpi_y(void* self);
double q_messagebox_device_pixel_ratio(void* self);
double q_messagebox_device_pixel_ratio_f(void* self);
int32_t q_messagebox_color_count(void* self);
int32_t q_messagebox_depth(void* self);
double q_messagebox_device_pixel_ratio_f_scale();
void q_messagebox_set_visible(void* self, bool visible);
void q_messagebox_qbase_set_visible(void* self, bool visible);
void q_messagebox_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_messagebox_size_hint(void* self);
QSize* q_messagebox_qbase_size_hint(void* self);
void q_messagebox_on_size_hint(void* self, QSize* (*slot)());
QSize* q_messagebox_minimum_size_hint(void* self);
QSize* q_messagebox_qbase_minimum_size_hint(void* self);
void q_messagebox_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_messagebox_open(void* self);
void q_messagebox_qbase_open(void* self);
void q_messagebox_on_open(void* self, void (*slot)());
int32_t q_messagebox_exec(void* self);
int32_t q_messagebox_qbase_exec(void* self);
void q_messagebox_on_exec(void* self, int32_t (*slot)());
void q_messagebox_done(void* self, int param1);
void q_messagebox_qbase_done(void* self, int param1);
void q_messagebox_on_done(void* self, void (*slot)(void*, int));
void q_messagebox_accept(void* self);
void q_messagebox_qbase_accept(void* self);
void q_messagebox_on_accept(void* self, void (*slot)());
void q_messagebox_reject(void* self);
void q_messagebox_qbase_reject(void* self);
void q_messagebox_on_reject(void* self, void (*slot)());
void q_messagebox_context_menu_event(void* self, void* param1);
void q_messagebox_qbase_context_menu_event(void* self, void* param1);
void q_messagebox_on_context_menu_event(void* self, void (*slot)(void*, void*));
bool q_messagebox_event_filter(void* self, void* param1, void* param2);
bool q_messagebox_qbase_event_filter(void* self, void* param1, void* param2);
void q_messagebox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
int32_t q_messagebox_dev_type(void* self);
int32_t q_messagebox_qbase_dev_type(void* self);
void q_messagebox_on_dev_type(void* self, int32_t (*slot)());
int32_t q_messagebox_height_for_width(void* self, int param1);
int32_t q_messagebox_qbase_height_for_width(void* self, int param1);
void q_messagebox_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_messagebox_has_height_for_width(void* self);
bool q_messagebox_qbase_has_height_for_width(void* self);
void q_messagebox_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_messagebox_paint_engine(void* self);
QPaintEngine* q_messagebox_qbase_paint_engine(void* self);
void q_messagebox_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_messagebox_mouse_press_event(void* self, void* event);
void q_messagebox_qbase_mouse_press_event(void* self, void* event);
void q_messagebox_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_messagebox_mouse_release_event(void* self, void* event);
void q_messagebox_qbase_mouse_release_event(void* self, void* event);
void q_messagebox_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_messagebox_mouse_double_click_event(void* self, void* event);
void q_messagebox_qbase_mouse_double_click_event(void* self, void* event);
void q_messagebox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_messagebox_mouse_move_event(void* self, void* event);
void q_messagebox_qbase_mouse_move_event(void* self, void* event);
void q_messagebox_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_messagebox_wheel_event(void* self, void* event);
void q_messagebox_qbase_wheel_event(void* self, void* event);
void q_messagebox_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_messagebox_key_release_event(void* self, void* event);
void q_messagebox_qbase_key_release_event(void* self, void* event);
void q_messagebox_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_messagebox_focus_in_event(void* self, void* event);
void q_messagebox_qbase_focus_in_event(void* self, void* event);
void q_messagebox_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_messagebox_focus_out_event(void* self, void* event);
void q_messagebox_qbase_focus_out_event(void* self, void* event);
void q_messagebox_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_messagebox_enter_event(void* self, void* event);
void q_messagebox_qbase_enter_event(void* self, void* event);
void q_messagebox_on_enter_event(void* self, void (*slot)(void*, void*));
void q_messagebox_leave_event(void* self, void* event);
void q_messagebox_qbase_leave_event(void* self, void* event);
void q_messagebox_on_leave_event(void* self, void (*slot)(void*, void*));
void q_messagebox_paint_event(void* self, void* event);
void q_messagebox_qbase_paint_event(void* self, void* event);
void q_messagebox_on_paint_event(void* self, void (*slot)(void*, void*));
void q_messagebox_move_event(void* self, void* event);
void q_messagebox_qbase_move_event(void* self, void* event);
void q_messagebox_on_move_event(void* self, void (*slot)(void*, void*));
void q_messagebox_tablet_event(void* self, void* event);
void q_messagebox_qbase_tablet_event(void* self, void* event);
void q_messagebox_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_messagebox_action_event(void* self, void* event);
void q_messagebox_qbase_action_event(void* self, void* event);
void q_messagebox_on_action_event(void* self, void (*slot)(void*, void*));
void q_messagebox_drag_enter_event(void* self, void* event);
void q_messagebox_qbase_drag_enter_event(void* self, void* event);
void q_messagebox_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_messagebox_drag_move_event(void* self, void* event);
void q_messagebox_qbase_drag_move_event(void* self, void* event);
void q_messagebox_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_messagebox_drag_leave_event(void* self, void* event);
void q_messagebox_qbase_drag_leave_event(void* self, void* event);
void q_messagebox_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_messagebox_drop_event(void* self, void* event);
void q_messagebox_qbase_drop_event(void* self, void* event);
void q_messagebox_on_drop_event(void* self, void (*slot)(void*, void*));
void q_messagebox_hide_event(void* self, void* event);
void q_messagebox_qbase_hide_event(void* self, void* event);
void q_messagebox_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_messagebox_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_messagebox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_messagebox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_messagebox_metric(void* self, int64_t param1);
int32_t q_messagebox_qbase_metric(void* self, int64_t param1);
void q_messagebox_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_messagebox_init_painter(void* self, void* painter);
void q_messagebox_qbase_init_painter(void* self, void* painter);
void q_messagebox_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_messagebox_redirected(void* self, void* offset);
QPaintDevice* q_messagebox_qbase_redirected(void* self, void* offset);
void q_messagebox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_messagebox_shared_painter(void* self);
QPainter* q_messagebox_qbase_shared_painter(void* self);
void q_messagebox_on_shared_painter(void* self, QPainter* (*slot)());
void q_messagebox_input_method_event(void* self, void* param1);
void q_messagebox_qbase_input_method_event(void* self, void* param1);
void q_messagebox_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_messagebox_input_method_query(void* self, int64_t param1);
QVariant* q_messagebox_qbase_input_method_query(void* self, int64_t param1);
void q_messagebox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_messagebox_focus_next_prev_child(void* self, bool next);
bool q_messagebox_qbase_focus_next_prev_child(void* self, bool next);
void q_messagebox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_messagebox_timer_event(void* self, void* event);
void q_messagebox_qbase_timer_event(void* self, void* event);
void q_messagebox_on_timer_event(void* self, void (*slot)(void*, void*));
void q_messagebox_child_event(void* self, void* event);
void q_messagebox_qbase_child_event(void* self, void* event);
void q_messagebox_on_child_event(void* self, void (*slot)(void*, void*));
void q_messagebox_custom_event(void* self, void* event);
void q_messagebox_qbase_custom_event(void* self, void* event);
void q_messagebox_on_custom_event(void* self, void (*slot)(void*, void*));
void q_messagebox_connect_notify(void* self, void* signal);
void q_messagebox_qbase_connect_notify(void* self, void* signal);
void q_messagebox_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_messagebox_disconnect_notify(void* self, void* signal);
void q_messagebox_qbase_disconnect_notify(void* self, void* signal);
void q_messagebox_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_messagebox_adjust_position(void* self, void* param1);
void q_messagebox_qbase_adjust_position(void* self, void* param1);
void q_messagebox_on_adjust_position(void* self, void (*slot)(void*, void*));
void q_messagebox_update_micro_focus(void* self);
void q_messagebox_qbase_update_micro_focus(void* self);
void q_messagebox_on_update_micro_focus(void* self, void (*slot)());
void q_messagebox_create(void* self);
void q_messagebox_qbase_create(void* self);
void q_messagebox_on_create(void* self, void (*slot)());
void q_messagebox_destroy(void* self);
void q_messagebox_qbase_destroy(void* self);
void q_messagebox_on_destroy(void* self, void (*slot)());
bool q_messagebox_focus_next_child(void* self);
bool q_messagebox_qbase_focus_next_child(void* self);
void q_messagebox_on_focus_next_child(void* self, bool (*slot)());
bool q_messagebox_focus_previous_child(void* self);
bool q_messagebox_qbase_focus_previous_child(void* self);
void q_messagebox_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_messagebox_sender(void* self);
QObject* q_messagebox_qbase_sender(void* self);
void q_messagebox_on_sender(void* self, QObject* (*slot)());
int32_t q_messagebox_sender_signal_index(void* self);
int32_t q_messagebox_qbase_sender_signal_index(void* self);
void q_messagebox_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_messagebox_receivers(void* self, const char* signal);
int32_t q_messagebox_qbase_receivers(void* self, const char* signal);
void q_messagebox_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_messagebox_is_signal_connected(void* self, void* signal);
bool q_messagebox_qbase_is_signal_connected(void* self, void* signal);
void q_messagebox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_messagebox_delete(void* self);

/// https://doc.qt.io/qt-6/qmessagebox.html#types

typedef enum {
    QMESSAGEBOX_ICON_NOICON = 0,
    QMESSAGEBOX_ICON_INFORMATION = 1,
    QMESSAGEBOX_ICON_WARNING = 2,
    QMESSAGEBOX_ICON_CRITICAL = 3,
    QMESSAGEBOX_ICON_QUESTION = 4
} QMessageBox__Icon;

typedef enum {
    QMESSAGEBOX_BUTTONROLE_INVALIDROLE = -1,
    QMESSAGEBOX_BUTTONROLE_ACCEPTROLE = 0,
    QMESSAGEBOX_BUTTONROLE_REJECTROLE = 1,
    QMESSAGEBOX_BUTTONROLE_DESTRUCTIVEROLE = 2,
    QMESSAGEBOX_BUTTONROLE_ACTIONROLE = 3,
    QMESSAGEBOX_BUTTONROLE_HELPROLE = 4,
    QMESSAGEBOX_BUTTONROLE_YESROLE = 5,
    QMESSAGEBOX_BUTTONROLE_NOROLE = 6,
    QMESSAGEBOX_BUTTONROLE_RESETROLE = 7,
    QMESSAGEBOX_BUTTONROLE_APPLYROLE = 8,
    QMESSAGEBOX_BUTTONROLE_NROLES = 9
} QMessageBox__ButtonRole;

typedef enum {
    QMESSAGEBOX_STANDARDBUTTON_NOBUTTON = 0,
    QMESSAGEBOX_STANDARDBUTTON_OK = 1024,
    QMESSAGEBOX_STANDARDBUTTON_SAVE = 2048,
    QMESSAGEBOX_STANDARDBUTTON_SAVEALL = 4096,
    QMESSAGEBOX_STANDARDBUTTON_OPEN = 8192,
    QMESSAGEBOX_STANDARDBUTTON_YES = 16384,
    QMESSAGEBOX_STANDARDBUTTON_YESTOALL = 32768,
    QMESSAGEBOX_STANDARDBUTTON_NO = 65536,
    QMESSAGEBOX_STANDARDBUTTON_NOTOALL = 131072,
    QMESSAGEBOX_STANDARDBUTTON_ABORT = 262144,
    QMESSAGEBOX_STANDARDBUTTON_RETRY = 524288,
    QMESSAGEBOX_STANDARDBUTTON_IGNORE = 1048576,
    QMESSAGEBOX_STANDARDBUTTON_CLOSE = 2097152,
    QMESSAGEBOX_STANDARDBUTTON_CANCEL = 4194304,
    QMESSAGEBOX_STANDARDBUTTON_DISCARD = 8388608,
    QMESSAGEBOX_STANDARDBUTTON_HELP = 16777216,
    QMESSAGEBOX_STANDARDBUTTON_APPLY = 33554432,
    QMESSAGEBOX_STANDARDBUTTON_RESET = 67108864,
    QMESSAGEBOX_STANDARDBUTTON_RESTOREDEFAULTS = 134217728,
    QMESSAGEBOX_STANDARDBUTTON_FIRSTBUTTON = 1024,
    QMESSAGEBOX_STANDARDBUTTON_LASTBUTTON = 134217728,
    QMESSAGEBOX_STANDARDBUTTON_YESALL = 32768,
    QMESSAGEBOX_STANDARDBUTTON_NOALL = 131072,
    QMESSAGEBOX_STANDARDBUTTON_DEFAULT = 256,
    QMESSAGEBOX_STANDARDBUTTON_ESCAPE = 512,
    QMESSAGEBOX_STANDARDBUTTON_FLAGMASK = 768,
    QMESSAGEBOX_STANDARDBUTTON_BUTTONMASK = -769
} QMessageBox__StandardButton;

#endif
