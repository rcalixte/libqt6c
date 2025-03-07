#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEOBJECT_H
#define SRCQT6C_LIBQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqcolor.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqwindow.h"

bool q_accessibleobject_is_valid(void* self);
QObject* q_accessibleobject_object(void* self);
QRect* q_accessibleobject_rect(void* self);
void q_accessibleobject_set_text(void* self, int64_t t, const char* text);
QAccessibleInterface* q_accessibleobject_child_at(void* self, int x, int y);
QWindow* q_accessibleobject_window(void* self);
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_relations(void* self, int64_t match);
QAccessibleInterface* q_accessibleobject_focus_child(void* self);
QAccessibleInterface* q_accessibleobject_parent(void* self);
QAccessibleInterface* q_accessibleobject_child(void* self, int index);
int32_t q_accessibleobject_child_count(void* self);
int32_t q_accessibleobject_index_of_child(void* self, void* param1);
const char* q_accessibleobject_text(void* self, int64_t t);
int64_t q_accessibleobject_role(void* self);
QAccessible__State* q_accessibleobject_state(void* self);
QColor* q_accessibleobject_foreground_color(void* self);
QColor* q_accessibleobject_background_color(void* self);
QAccessibleTextInterface* q_accessibleobject_text_interface(void* self);
QAccessibleEditableTextInterface* q_accessibleobject_editable_text_interface(void* self);
QAccessibleValueInterface* q_accessibleobject_value_interface(void* self);
QAccessibleActionInterface* q_accessibleobject_action_interface(void* self);
QAccessibleImageInterface* q_accessibleobject_image_interface(void* self);
QAccessibleTableInterface* q_accessibleobject_table_interface(void* self);
QAccessibleTableCellInterface* q_accessibleobject_table_cell_interface(void* self);
QAccessibleHyperlinkInterface* q_accessibleobject_hyperlink_interface(void* self);
void q_accessibleobject_virtual_hook(void* self, int id, void* data);
void* q_accessibleobject_interface_cast(void* self, int64_t param1);
QAccessibleApplication* q_accessibleapplication_new();
QWindow* q_accessibleapplication_window(void* self);
void q_accessibleapplication_on_window(void* self, QWindow* (*slot)());
QWindow* q_accessibleapplication_qbase_window(void* self);
int32_t q_accessibleapplication_child_count(void* self);
void q_accessibleapplication_on_child_count(void* self, int32_t (*slot)());
int32_t q_accessibleapplication_qbase_child_count(void* self);
int32_t q_accessibleapplication_index_of_child(void* self, void* param1);
void q_accessibleapplication_on_index_of_child(void* self, int32_t (*slot)(void*, void*));
int32_t q_accessibleapplication_qbase_index_of_child(void* self, void* param1);
QAccessibleInterface* q_accessibleapplication_focus_child(void* self);
void q_accessibleapplication_on_focus_child(void* self, QAccessibleInterface* (*slot)());
QAccessibleInterface* q_accessibleapplication_qbase_focus_child(void* self);
QAccessibleInterface* q_accessibleapplication_parent(void* self);
void q_accessibleapplication_on_parent(void* self, QAccessibleInterface* (*slot)());
QAccessibleInterface* q_accessibleapplication_qbase_parent(void* self);
QAccessibleInterface* q_accessibleapplication_child(void* self, int index);
void q_accessibleapplication_on_child(void* self, QAccessibleInterface* (*slot)(void*, int));
QAccessibleInterface* q_accessibleapplication_qbase_child(void* self, int index);
const char* q_accessibleapplication_text(void* self, int64_t t);
void q_accessibleapplication_on_text(void* self, const char* (*slot)(void*, int64_t));
const char* q_accessibleapplication_qbase_text(void* self, int64_t t);
int64_t q_accessibleapplication_role(void* self);
void q_accessibleapplication_on_role(void* self, int64_t (*slot)());
int64_t q_accessibleapplication_qbase_role(void* self);
QAccessible__State* q_accessibleapplication_state(void* self);
void q_accessibleapplication_on_state(void* self, QAccessible__State* (*slot)());
QAccessible__State* q_accessibleapplication_qbase_state(void* self);
QAccessibleTextInterface* q_accessibleapplication_text_interface(void* self);
QAccessibleEditableTextInterface* q_accessibleapplication_editable_text_interface(void* self);
QAccessibleValueInterface* q_accessibleapplication_value_interface(void* self);
QAccessibleActionInterface* q_accessibleapplication_action_interface(void* self);
QAccessibleImageInterface* q_accessibleapplication_image_interface(void* self);
QAccessibleTableInterface* q_accessibleapplication_table_interface(void* self);
QAccessibleTableCellInterface* q_accessibleapplication_table_cell_interface(void* self);
QAccessibleHyperlinkInterface* q_accessibleapplication_hyperlink_interface(void* self);
bool q_accessibleapplication_is_valid(void* self);
bool q_accessibleapplication_qbase_is_valid(void* self);
void q_accessibleapplication_on_is_valid(void* self, bool (*slot)());
QObject* q_accessibleapplication_object(void* self);
QObject* q_accessibleapplication_qbase_object(void* self);
void q_accessibleapplication_on_object(void* self, QObject* (*slot)());
QRect* q_accessibleapplication_rect(void* self);
QRect* q_accessibleapplication_qbase_rect(void* self);
void q_accessibleapplication_on_rect(void* self, QRect* (*slot)());
void q_accessibleapplication_set_text(void* self, int64_t t, const char* text);
void q_accessibleapplication_qbase_set_text(void* self, int64_t t, const char* text);
void q_accessibleapplication_on_set_text(void* self, void (*slot)(void*, int64_t, const char*));
QAccessibleInterface* q_accessibleapplication_child_at(void* self, int x, int y);
QAccessibleInterface* q_accessibleapplication_qbase_child_at(void* self, int x, int y);
void q_accessibleapplication_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int));
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_relations(void* self, int64_t match);
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_qbase_relations(void* self, int64_t match);
void q_accessibleapplication_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t));
QColor* q_accessibleapplication_foreground_color(void* self);
QColor* q_accessibleapplication_qbase_foreground_color(void* self);
void q_accessibleapplication_on_foreground_color(void* self, QColor* (*slot)());
QColor* q_accessibleapplication_background_color(void* self);
QColor* q_accessibleapplication_qbase_background_color(void* self);
void q_accessibleapplication_on_background_color(void* self, QColor* (*slot)());
void q_accessibleapplication_virtual_hook(void* self, int id, void* data);
void q_accessibleapplication_qbase_virtual_hook(void* self, int id, void* data);
void q_accessibleapplication_on_virtual_hook(void* self, void (*slot)(void*, int, void*));
void* q_accessibleapplication_interface_cast(void* self, int64_t param1);
void* q_accessibleapplication_qbase_interface_cast(void* self, int64_t param1);
void q_accessibleapplication_on_interface_cast(void* self, void* (*slot)(void*, int64_t));
void q_accessibleapplication_delete(void* self);

#endif
