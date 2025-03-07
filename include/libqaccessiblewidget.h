#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEWIDGET_H
#define SRCQT6C_LIBQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqaccessibleobject.h"
#include "libqcolor.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqwidget.h"
#include "libqwindow.h"

QAccessibleWidget* q_accessiblewidget_new(void* o);
QAccessibleWidget* q_accessiblewidget_new2(void* o, int64_t r);
QAccessibleWidget* q_accessiblewidget_new3(void* o, int64_t r, const char* name);
bool q_accessiblewidget_is_valid(void* self);
QWindow* q_accessiblewidget_window(void* self);
int32_t q_accessiblewidget_child_count(void* self);
int32_t q_accessiblewidget_index_of_child(void* self, void* child);
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match);
QAccessibleInterface* q_accessiblewidget_focus_child(void* self);
QRect* q_accessiblewidget_rect(void* self);
QAccessibleInterface* q_accessiblewidget_parent(void* self);
QAccessibleInterface* q_accessiblewidget_child(void* self, int index);
const char* q_accessiblewidget_text(void* self, int64_t t);
int64_t q_accessiblewidget_role(void* self);
QAccessible__State* q_accessiblewidget_state(void* self);
QColor* q_accessiblewidget_foreground_color(void* self);
QColor* q_accessiblewidget_background_color(void* self);
void* q_accessiblewidget_interface_cast(void* self, int64_t t);
const char** q_accessiblewidget_action_names(void* self);
void q_accessiblewidget_do_action(void* self, const char* actionName);
const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName);
QObject* q_accessiblewidget_object(void* self);
void q_accessiblewidget_set_text(void* self, int64_t t, const char* text);
QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y);
QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self);
QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self);
QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self);
QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self);
QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self);
QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self);
QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self);
QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self);
void q_accessiblewidget_virtual_hook(void* self, int id, void* data);
const char* q_accessiblewidget_tr(const char* sourceText);
const char* q_accessiblewidget_localized_action_name(void* self, const char* name);
const char* q_accessiblewidget_localized_action_description(void* self, const char* name);
const char* q_accessiblewidget_press_action();
const char* q_accessiblewidget_increase_action();
const char* q_accessiblewidget_decrease_action();
const char* q_accessiblewidget_show_menu_action();
const char* q_accessiblewidget_set_focus_action();
const char* q_accessiblewidget_toggle_action();
const char* q_accessiblewidget_scroll_left_action();
const char* q_accessiblewidget_scroll_right_action();
const char* q_accessiblewidget_scroll_up_action();
const char* q_accessiblewidget_scroll_down_action();
const char* q_accessiblewidget_next_page_action();
const char* q_accessiblewidget_previous_page_action();
const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation);
const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n);
#endif
