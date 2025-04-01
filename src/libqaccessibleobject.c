#include "libqaccessible.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqwindow.hpp"
#include "libqaccessibleobject.hpp"
#include "libqaccessibleobject.h"

bool q_accessibleobject_is_valid(void* self) {
    return QAccessibleObject_IsValid((QAccessibleObject*)self);
}

QObject* q_accessibleobject_object(void* self) {
    return QAccessibleObject_Object((QAccessibleObject*)self);
}

QRect* q_accessibleobject_rect(void* self) {
    return QAccessibleObject_Rect((QAccessibleObject*)self);
}

void q_accessibleobject_set_text(void* self, int64_t t, const char* text) {
    QAccessibleObject_SetText((QAccessibleObject*)self, t, qstring(text));
}

QAccessibleInterface* q_accessibleobject_child_at(void* self, int x, int y) {
    return QAccessibleObject_ChildAt((QAccessibleObject*)self, x, y);
}

QWindow* q_accessibleobject_window(void* self) {
    return QAccessibleInterface_Window((QAccessibleInterface*)self);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleInterface_Relations((QAccessibleInterface*)self, match);
    return _arr;
}

QAccessibleInterface* q_accessibleobject_focus_child(void* self) {
    return QAccessibleInterface_FocusChild((QAccessibleInterface*)self);
}

QAccessibleInterface* q_accessibleobject_parent(void* self) {
    return QAccessibleInterface_Parent((QAccessibleInterface*)self);
}

QAccessibleInterface* q_accessibleobject_child(void* self, int index) {
    return QAccessibleInterface_Child((QAccessibleInterface*)self, index);
}

int32_t q_accessibleobject_child_count(void* self) {
    return QAccessibleInterface_ChildCount((QAccessibleInterface*)self);
}

int32_t q_accessibleobject_index_of_child(void* self, void* param1) {
    return QAccessibleInterface_IndexOfChild((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

const char* q_accessibleobject_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleInterface_Text((QAccessibleInterface*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_accessibleobject_role(void* self) {
    return QAccessibleInterface_Role((QAccessibleInterface*)self);
}

QAccessible__State* q_accessibleobject_state(void* self) {
    return QAccessibleInterface_State((QAccessibleInterface*)self);
}

QColor* q_accessibleobject_foreground_color(void* self) {
    return QAccessibleInterface_ForegroundColor((QAccessibleInterface*)self);
}

QColor* q_accessibleobject_background_color(void* self) {
    return QAccessibleInterface_BackgroundColor((QAccessibleInterface*)self);
}

QAccessibleTextInterface* q_accessibleobject_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

QAccessibleEditableTextInterface* q_accessibleobject_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

QAccessibleValueInterface* q_accessibleobject_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

QAccessibleActionInterface* q_accessibleobject_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

QAccessibleImageInterface* q_accessibleobject_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

QAccessibleTableInterface* q_accessibleobject_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

QAccessibleTableCellInterface* q_accessibleobject_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

QAccessibleHyperlinkInterface* q_accessibleobject_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

void q_accessibleobject_virtual_hook(void* self, int id, void* data) {
    QAccessibleInterface_VirtualHook((QAccessibleInterface*)self, id, data);
}

void* q_accessibleobject_interface_cast(void* self, int64_t param1) {
    return QAccessibleInterface_InterfaceCast((QAccessibleInterface*)self, param1);
}

QAccessibleApplication* q_accessibleapplication_new() {
    return QAccessibleApplication_new();
}

QWindow* q_accessibleapplication_window(void* self) {
    return QAccessibleApplication_Window((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_window(void* self, QWindow* (*slot)()) {
    QAccessibleApplication_OnWindow((QAccessibleApplication*)self, (intptr_t)slot);
}

QWindow* q_accessibleapplication_qbase_window(void* self) {
    return QAccessibleApplication_QBaseWindow((QAccessibleApplication*)self);
}

int32_t q_accessibleapplication_child_count(void* self) {
    return QAccessibleApplication_ChildCount((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_child_count(void* self, int32_t (*slot)()) {
    QAccessibleApplication_OnChildCount((QAccessibleApplication*)self, (intptr_t)slot);
}

int32_t q_accessibleapplication_qbase_child_count(void* self) {
    return QAccessibleApplication_QBaseChildCount((QAccessibleApplication*)self);
}

int32_t q_accessibleapplication_index_of_child(void* self, void* param1) {
    return QAccessibleApplication_IndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

void q_accessibleapplication_on_index_of_child(void* self, int32_t (*slot)(void*, void*)) {
    QAccessibleApplication_OnIndexOfChild((QAccessibleApplication*)self, (intptr_t)slot);
}

int32_t q_accessibleapplication_qbase_index_of_child(void* self, void* param1) {
    return QAccessibleApplication_QBaseIndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

QAccessibleInterface* q_accessibleapplication_focus_child(void* self) {
    return QAccessibleApplication_FocusChild((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_focus_child(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleApplication_OnFocusChild((QAccessibleApplication*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessibleapplication_qbase_focus_child(void* self) {
    return QAccessibleApplication_QBaseFocusChild((QAccessibleApplication*)self);
}

QAccessibleInterface* q_accessibleapplication_parent(void* self) {
    return QAccessibleApplication_Parent((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_parent(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleApplication_OnParent((QAccessibleApplication*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessibleapplication_qbase_parent(void* self) {
    return QAccessibleApplication_QBaseParent((QAccessibleApplication*)self);
}

QAccessibleInterface* q_accessibleapplication_child(void* self, int index) {
    return QAccessibleApplication_Child((QAccessibleApplication*)self, index);
}

void q_accessibleapplication_on_child(void* self, QAccessibleInterface* (*slot)(void*, int)) {
    QAccessibleApplication_OnChild((QAccessibleApplication*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessibleapplication_qbase_child(void* self, int index) {
    return QAccessibleApplication_QBaseChild((QAccessibleApplication*)self, index);
}

const char* q_accessibleapplication_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleApplication_Text((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleapplication_on_text(void* self, const char* (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnText((QAccessibleApplication*)self, (intptr_t)slot);
}

const char* q_accessibleapplication_qbase_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleApplication_QBaseText((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_accessibleapplication_role(void* self) {
    return QAccessibleApplication_Role((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_role(void* self, int64_t (*slot)()) {
    QAccessibleApplication_OnRole((QAccessibleApplication*)self, (intptr_t)slot);
}

int64_t q_accessibleapplication_qbase_role(void* self) {
    return QAccessibleApplication_QBaseRole((QAccessibleApplication*)self);
}

QAccessible__State* q_accessibleapplication_state(void* self) {
    return QAccessibleApplication_State((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_state(void* self, QAccessible__State* (*slot)()) {
    QAccessibleApplication_OnState((QAccessibleApplication*)self, (intptr_t)slot);
}

QAccessible__State* q_accessibleapplication_qbase_state(void* self) {
    return QAccessibleApplication_QBaseState((QAccessibleApplication*)self);
}

QAccessibleTextInterface* q_accessibleapplication_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

QAccessibleEditableTextInterface* q_accessibleapplication_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

QAccessibleValueInterface* q_accessibleapplication_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

QAccessibleActionInterface* q_accessibleapplication_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

QAccessibleImageInterface* q_accessibleapplication_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

QAccessibleTableInterface* q_accessibleapplication_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

QAccessibleTableCellInterface* q_accessibleapplication_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

QAccessibleHyperlinkInterface* q_accessibleapplication_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

bool q_accessibleapplication_is_valid(void* self) {
    return QAccessibleApplication_IsValid((QAccessibleApplication*)self);
}

bool q_accessibleapplication_qbase_is_valid(void* self) {
    return QAccessibleApplication_QBaseIsValid((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_is_valid(void* self, bool (*slot)()) {
    QAccessibleApplication_OnIsValid((QAccessibleApplication*)self, (intptr_t)slot);
}

QObject* q_accessibleapplication_object(void* self) {
    return QAccessibleApplication_Object((QAccessibleApplication*)self);
}

QObject* q_accessibleapplication_qbase_object(void* self) {
    return QAccessibleApplication_QBaseObject((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_object(void* self, QObject* (*slot)()) {
    QAccessibleApplication_OnObject((QAccessibleApplication*)self, (intptr_t)slot);
}

QRect* q_accessibleapplication_rect(void* self) {
    return QAccessibleApplication_Rect((QAccessibleApplication*)self);
}

QRect* q_accessibleapplication_qbase_rect(void* self) {
    return QAccessibleApplication_QBaseRect((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_rect(void* self, QRect* (*slot)()) {
    QAccessibleApplication_OnRect((QAccessibleApplication*)self, (intptr_t)slot);
}

void q_accessibleapplication_set_text(void* self, int64_t t, const char* text) {
    QAccessibleApplication_SetText((QAccessibleApplication*)self, t, qstring(text));
}

void q_accessibleapplication_qbase_set_text(void* self, int64_t t, const char* text) {
    QAccessibleApplication_QBaseSetText((QAccessibleApplication*)self, t, qstring(text));
}

void q_accessibleapplication_on_set_text(void* self, void (*slot)(void*, int64_t, const char*)) {
    QAccessibleApplication_OnSetText((QAccessibleApplication*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessibleapplication_child_at(void* self, int x, int y) {
    return QAccessibleApplication_ChildAt((QAccessibleApplication*)self, x, y);
}

QAccessibleInterface* q_accessibleapplication_qbase_child_at(void* self, int x, int y) {
    return QAccessibleApplication_QBaseChildAt((QAccessibleApplication*)self, x, y);
}

void q_accessibleapplication_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int)) {
    QAccessibleApplication_OnChildAt((QAccessibleApplication*)self, (intptr_t)slot);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleApplication_Relations((QAccessibleApplication*)self, match);
    return _arr;
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_qbase_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleApplication_QBaseRelations((QAccessibleApplication*)self, match);
    return _arr;
}

void q_accessibleapplication_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnRelations((QAccessibleApplication*)self, (intptr_t)slot);
}

QColor* q_accessibleapplication_foreground_color(void* self) {
    return QAccessibleApplication_ForegroundColor((QAccessibleApplication*)self);
}

QColor* q_accessibleapplication_qbase_foreground_color(void* self) {
    return QAccessibleApplication_QBaseForegroundColor((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_foreground_color(void* self, QColor* (*slot)()) {
    QAccessibleApplication_OnForegroundColor((QAccessibleApplication*)self, (intptr_t)slot);
}

QColor* q_accessibleapplication_background_color(void* self) {
    return QAccessibleApplication_BackgroundColor((QAccessibleApplication*)self);
}

QColor* q_accessibleapplication_qbase_background_color(void* self) {
    return QAccessibleApplication_QBaseBackgroundColor((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_background_color(void* self, QColor* (*slot)()) {
    QAccessibleApplication_OnBackgroundColor((QAccessibleApplication*)self, (intptr_t)slot);
}

void q_accessibleapplication_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_VirtualHook((QAccessibleApplication*)self, id, data);
}

void q_accessibleapplication_qbase_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_QBaseVirtualHook((QAccessibleApplication*)self, id, data);
}

void q_accessibleapplication_on_virtual_hook(void* self, void (*slot)(void*, int, void*)) {
    QAccessibleApplication_OnVirtualHook((QAccessibleApplication*)self, (intptr_t)slot);
}

void* q_accessibleapplication_interface_cast(void* self, int64_t param1) {
    return QAccessibleApplication_InterfaceCast((QAccessibleApplication*)self, param1);
}

void* q_accessibleapplication_qbase_interface_cast(void* self, int64_t param1) {
    return QAccessibleApplication_QBaseInterfaceCast((QAccessibleApplication*)self, param1);
}

void q_accessibleapplication_on_interface_cast(void* self, void* (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnInterfaceCast((QAccessibleApplication*)self, (intptr_t)slot);
}

void q_accessibleapplication_delete(void* self) {
    QAccessibleApplication_Delete((QAccessibleApplication*)(self));
}
