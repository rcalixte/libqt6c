#include "libqaccessible_base.hpp"
#include "libqaccessible.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqwindow.hpp"
#include "libqaccessibleobject.hpp"
#include "libqaccessibleobject.h"

QAccessibleObject* q_accessibleobject_new(void* object) {
    return QAccessibleObject_New((QObject*)object);
}

bool q_accessibleobject_is_valid(const void* self) {
    return QAccessibleObject_IsValid((QAccessibleObject*)self);
}

void q_accessibleobject_on_is_valid(const void* self, bool (*callback)(const void*)) {
    QAccessibleObject_OnIsValid((QAccessibleObject*)self, (intptr_t)callback);
}

bool q_accessibleobject_super_is_valid(const void* self) {
    return QAccessibleObject_SuperIsValid((QAccessibleObject*)self);
}

QObject* q_accessibleobject_object(const void* self) {
    return QAccessibleObject_Object((QAccessibleObject*)self);
}

void q_accessibleobject_on_object(const void* self, QObject* (*callback)(const void*)) {
    QAccessibleObject_OnObject((QAccessibleObject*)self, (intptr_t)callback);
}

QObject* q_accessibleobject_super_object(const void* self) {
    return QAccessibleObject_SuperObject((QAccessibleObject*)self);
}

QRect* q_accessibleobject_rect(const void* self) {
    return QAccessibleObject_Rect((QAccessibleObject*)self);
}

void q_accessibleobject_on_rect(const void* self, QRect* (*callback)(const void*)) {
    QAccessibleObject_OnRect((QAccessibleObject*)self, (intptr_t)callback);
}

QRect* q_accessibleobject_super_rect(const void* self) {
    return QAccessibleObject_SuperRect((QAccessibleObject*)self);
}

void q_accessibleobject_set_text(void* self, int32_t t, const char* text) {
    QAccessibleObject_SetText((QAccessibleObject*)self, t, qstring(text));
}

void q_accessibleobject_on_set_text(void* self, void (*callback)(void*, int32_t, const char*)) {
    QAccessibleObject_OnSetText((QAccessibleObject*)self, (intptr_t)callback);
}

void q_accessibleobject_super_set_text(void* self, int32_t t, const char* text) {
    QAccessibleObject_SuperSetText((QAccessibleObject*)self, t, qstring(text));
}

QAccessibleInterface* q_accessibleobject_child_at(const void* self, int x, int y) {
    return QAccessibleObject_ChildAt((QAccessibleObject*)self, x, y);
}

void q_accessibleobject_on_child_at(const void* self, QAccessibleInterface* (*callback)(const void*, int, int)) {
    QAccessibleObject_OnChildAt((QAccessibleObject*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleobject_super_child_at(const void* self, int x, int y) {
    return QAccessibleObject_SuperChildAt((QAccessibleObject*)self, x, y);
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

QAccessibleSelectionInterface* q_accessibleobject_selection_interface(void* self) {
    return QAccessibleInterface_SelectionInterface((QAccessibleInterface*)self);
}

QAccessibleAttributesInterface* q_accessibleobject_attributes_interface(void* self) {
    return QAccessibleInterface_AttributesInterface((QAccessibleInterface*)self);
}

void q_accessibleobject_operator_assign(void* self, const void* param1) {
    QAccessibleInterface_OperatorAssign((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

QWindow* q_accessibleobject_window(const void* self) {
    return QAccessibleObject_Window((QAccessibleObject*)self);
}

QWindow* q_accessibleobject_super_window(const void* self) {
    return QAccessibleObject_SuperWindow((QAccessibleObject*)self);
}

void q_accessibleobject_on_window(const void* self, QWindow* (*callback)(const void*)) {
    QAccessibleObject_OnWindow((const QAccessibleObject*)self, (intptr_t)callback);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessibleobject_relations(const void* self, int32_t match) {
    return QAccessibleObject_Relations((QAccessibleObject*)self, match);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessibleobject_super_relations(const void* self, int32_t match) {
    return QAccessibleObject_SuperRelations((QAccessibleObject*)self, match);
}

void q_accessibleobject_on_relations(const void* self, libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ (*callback)(const void*, int32_t)) {
    QAccessibleObject_OnRelations((const QAccessibleObject*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleobject_focus_child(const void* self) {
    return QAccessibleObject_FocusChild((QAccessibleObject*)self);
}

QAccessibleInterface* q_accessibleobject_super_focus_child(const void* self) {
    return QAccessibleObject_SuperFocusChild((QAccessibleObject*)self);
}

void q_accessibleobject_on_focus_child(const void* self, QAccessibleInterface* (*callback)(const void*)) {
    QAccessibleObject_OnFocusChild((const QAccessibleObject*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleobject_parent(const void* self) {
    return QAccessibleObject_Parent((QAccessibleObject*)self);
}

void q_accessibleobject_on_parent(const void* self, QAccessibleInterface* (*callback)(const void*)) {
    QAccessibleObject_OnParent((const QAccessibleObject*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleobject_child(const void* self, int index) {
    return QAccessibleObject_Child((QAccessibleObject*)self, index);
}

void q_accessibleobject_on_child(const void* self, QAccessibleInterface* (*callback)(const void*, int)) {
    QAccessibleObject_OnChild((const QAccessibleObject*)self, (intptr_t)callback);
}

int32_t q_accessibleobject_child_count(const void* self) {
    return QAccessibleObject_ChildCount((QAccessibleObject*)self);
}

void q_accessibleobject_on_child_count(const void* self, int32_t (*callback)(const void*)) {
    QAccessibleObject_OnChildCount((const QAccessibleObject*)self, (intptr_t)callback);
}

int32_t q_accessibleobject_index_of_child(const void* self, const void* param1) {
    return QAccessibleObject_IndexOfChild((QAccessibleObject*)self, (QAccessibleInterface*)param1);
}

void q_accessibleobject_on_index_of_child(const void* self, int32_t (*callback)(const void*, const void*)) {
    QAccessibleObject_OnIndexOfChild((const QAccessibleObject*)self, (intptr_t)callback);
}

const char* q_accessibleobject_text(const void* self, int32_t t) {
    libqt_string _str = QAccessibleObject_Text((QAccessibleObject*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleobject_on_text(const void* self, const char* (*callback)(const void*, int32_t)) {
    QAccessibleObject_OnText((const QAccessibleObject*)self, (intptr_t)callback);
}

int32_t q_accessibleobject_role(const void* self) {
    return QAccessibleObject_Role((QAccessibleObject*)self);
}

void q_accessibleobject_on_role(const void* self, int32_t (*callback)(const void*)) {
    QAccessibleObject_OnRole((const QAccessibleObject*)self, (intptr_t)callback);
}

QAccessible__State* q_accessibleobject_state(const void* self) {
    return QAccessibleObject_State((QAccessibleObject*)self);
}

void q_accessibleobject_on_state(const void* self, QAccessible__State* (*callback)(const void*)) {
    QAccessibleObject_OnState((const QAccessibleObject*)self, (intptr_t)callback);
}

QColor* q_accessibleobject_foreground_color(const void* self) {
    return QAccessibleObject_ForegroundColor((QAccessibleObject*)self);
}

QColor* q_accessibleobject_super_foreground_color(const void* self) {
    return QAccessibleObject_SuperForegroundColor((QAccessibleObject*)self);
}

void q_accessibleobject_on_foreground_color(const void* self, QColor* (*callback)(const void*)) {
    QAccessibleObject_OnForegroundColor((const QAccessibleObject*)self, (intptr_t)callback);
}

QColor* q_accessibleobject_background_color(const void* self) {
    return QAccessibleObject_BackgroundColor((QAccessibleObject*)self);
}

QColor* q_accessibleobject_super_background_color(const void* self) {
    return QAccessibleObject_SuperBackgroundColor((QAccessibleObject*)self);
}

void q_accessibleobject_on_background_color(const void* self, QColor* (*callback)(const void*)) {
    QAccessibleObject_OnBackgroundColor((const QAccessibleObject*)self, (intptr_t)callback);
}

void q_accessibleobject_virtual_hook(void* self, int id, void* data) {
    QAccessibleObject_VirtualHook((QAccessibleObject*)self, id, data);
}

void q_accessibleobject_super_virtual_hook(void* self, int id, void* data) {
    QAccessibleObject_SuperVirtualHook((QAccessibleObject*)self, id, data);
}

void q_accessibleobject_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    QAccessibleObject_OnVirtualHook((QAccessibleObject*)self, (intptr_t)callback);
}

void* q_accessibleobject_interface_cast(void* self, int32_t param1) {
    return QAccessibleObject_InterfaceCast((QAccessibleObject*)self, param1);
}

void* q_accessibleobject_super_interface_cast(void* self, int32_t param1) {
    return QAccessibleObject_SuperInterfaceCast((QAccessibleObject*)self, param1);
}

void q_accessibleobject_on_interface_cast(void* self, void* (*callback)(void*, int32_t)) {
    QAccessibleObject_OnInterfaceCast((QAccessibleObject*)self, (intptr_t)callback);
}

QAccessibleApplication* q_accessibleapplication_new() {
    return QAccessibleApplication_New();
}

QWindow* q_accessibleapplication_window(const void* self) {
    return QAccessibleApplication_Window((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_window(const void* self, QWindow* (*callback)(const void*)) {
    QAccessibleApplication_OnWindow((QAccessibleApplication*)self, (intptr_t)callback);
}

QWindow* q_accessibleapplication_super_window(const void* self) {
    return QAccessibleApplication_SuperWindow((QAccessibleApplication*)self);
}

int32_t q_accessibleapplication_child_count(const void* self) {
    return QAccessibleApplication_ChildCount((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_child_count(const void* self, int32_t (*callback)(const void*)) {
    QAccessibleApplication_OnChildCount((QAccessibleApplication*)self, (intptr_t)callback);
}

int32_t q_accessibleapplication_super_child_count(const void* self) {
    return QAccessibleApplication_SuperChildCount((QAccessibleApplication*)self);
}

int32_t q_accessibleapplication_index_of_child(const void* self, const void* param1) {
    return QAccessibleApplication_IndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

void q_accessibleapplication_on_index_of_child(const void* self, int32_t (*callback)(const void*, const void*)) {
    QAccessibleApplication_OnIndexOfChild((QAccessibleApplication*)self, (intptr_t)callback);
}

int32_t q_accessibleapplication_super_index_of_child(const void* self, const void* param1) {
    return QAccessibleApplication_SuperIndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

QAccessibleInterface* q_accessibleapplication_focus_child(const void* self) {
    return QAccessibleApplication_FocusChild((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_focus_child(const void* self, QAccessibleInterface* (*callback)(const void*)) {
    QAccessibleApplication_OnFocusChild((QAccessibleApplication*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleapplication_super_focus_child(const void* self) {
    return QAccessibleApplication_SuperFocusChild((QAccessibleApplication*)self);
}

QAccessibleInterface* q_accessibleapplication_parent(const void* self) {
    return QAccessibleApplication_Parent((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_parent(const void* self, QAccessibleInterface* (*callback)(const void*)) {
    QAccessibleApplication_OnParent((QAccessibleApplication*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleapplication_super_parent(const void* self) {
    return QAccessibleApplication_SuperParent((QAccessibleApplication*)self);
}

QAccessibleInterface* q_accessibleapplication_child(const void* self, int index) {
    return QAccessibleApplication_Child((QAccessibleApplication*)self, index);
}

void q_accessibleapplication_on_child(const void* self, QAccessibleInterface* (*callback)(const void*, int)) {
    QAccessibleApplication_OnChild((QAccessibleApplication*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleapplication_super_child(const void* self, int index) {
    return QAccessibleApplication_SuperChild((QAccessibleApplication*)self, index);
}

const char* q_accessibleapplication_text(const void* self, int32_t t) {
    libqt_string _str = QAccessibleApplication_Text((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleapplication_on_text(const void* self, const char* (*callback)(const void*, int32_t)) {
    QAccessibleApplication_OnText((QAccessibleApplication*)self, (intptr_t)callback);
}

const char* q_accessibleapplication_super_text(const void* self, int32_t t) {
    libqt_string _str = QAccessibleApplication_SuperText((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibleapplication_role(const void* self) {
    return QAccessibleApplication_Role((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_role(const void* self, int32_t (*callback)(const void*)) {
    QAccessibleApplication_OnRole((QAccessibleApplication*)self, (intptr_t)callback);
}

int32_t q_accessibleapplication_super_role(const void* self) {
    return QAccessibleApplication_SuperRole((QAccessibleApplication*)self);
}

QAccessible__State* q_accessibleapplication_state(const void* self) {
    return QAccessibleApplication_State((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_state(const void* self, QAccessible__State* (*callback)(const void*)) {
    QAccessibleApplication_OnState((QAccessibleApplication*)self, (intptr_t)callback);
}

QAccessible__State* q_accessibleapplication_super_state(const void* self) {
    return QAccessibleApplication_SuperState((QAccessibleApplication*)self);
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

QAccessibleSelectionInterface* q_accessibleapplication_selection_interface(void* self) {
    return QAccessibleInterface_SelectionInterface((QAccessibleInterface*)self);
}

QAccessibleAttributesInterface* q_accessibleapplication_attributes_interface(void* self) {
    return QAccessibleInterface_AttributesInterface((QAccessibleInterface*)self);
}

void q_accessibleapplication_operator_assign(void* self, const void* param1) {
    QAccessibleInterface_OperatorAssign((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

bool q_accessibleapplication_is_valid(const void* self) {
    return QAccessibleApplication_IsValid((QAccessibleApplication*)self);
}

bool q_accessibleapplication_super_is_valid(const void* self) {
    return QAccessibleApplication_SuperIsValid((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_is_valid(const void* self, bool (*callback)(const void*)) {
    QAccessibleApplication_OnIsValid((const QAccessibleApplication*)self, (intptr_t)callback);
}

QObject* q_accessibleapplication_object(const void* self) {
    return QAccessibleApplication_Object((QAccessibleApplication*)self);
}

QObject* q_accessibleapplication_super_object(const void* self) {
    return QAccessibleApplication_SuperObject((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_object(const void* self, QObject* (*callback)(const void*)) {
    QAccessibleApplication_OnObject((const QAccessibleApplication*)self, (intptr_t)callback);
}

QRect* q_accessibleapplication_rect(const void* self) {
    return QAccessibleApplication_Rect((QAccessibleApplication*)self);
}

QRect* q_accessibleapplication_super_rect(const void* self) {
    return QAccessibleApplication_SuperRect((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_rect(const void* self, QRect* (*callback)(const void*)) {
    QAccessibleApplication_OnRect((const QAccessibleApplication*)self, (intptr_t)callback);
}

void q_accessibleapplication_set_text(void* self, int32_t t, const char* text) {
    QAccessibleApplication_SetText((QAccessibleApplication*)self, t, qstring(text));
}

void q_accessibleapplication_super_set_text(void* self, int32_t t, const char* text) {
    QAccessibleApplication_SuperSetText((QAccessibleApplication*)self, t, qstring(text));
}

void q_accessibleapplication_on_set_text(void* self, void (*callback)(void*, int32_t, const char*)) {
    QAccessibleApplication_OnSetText((QAccessibleApplication*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleapplication_child_at(const void* self, int x, int y) {
    return QAccessibleApplication_ChildAt((QAccessibleApplication*)self, x, y);
}

QAccessibleInterface* q_accessibleapplication_super_child_at(const void* self, int x, int y) {
    return QAccessibleApplication_SuperChildAt((QAccessibleApplication*)self, x, y);
}

void q_accessibleapplication_on_child_at(const void* self, QAccessibleInterface* (*callback)(const void*, int, int)) {
    QAccessibleApplication_OnChildAt((const QAccessibleApplication*)self, (intptr_t)callback);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessibleapplication_relations(const void* self, int32_t match) {
    return QAccessibleApplication_Relations((QAccessibleApplication*)self, match);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessibleapplication_super_relations(const void* self, int32_t match) {
    return QAccessibleApplication_SuperRelations((QAccessibleApplication*)self, match);
}

void q_accessibleapplication_on_relations(const void* self, libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ (*callback)(const void*, int32_t)) {
    QAccessibleApplication_OnRelations((const QAccessibleApplication*)self, (intptr_t)callback);
}

QColor* q_accessibleapplication_foreground_color(const void* self) {
    return QAccessibleApplication_ForegroundColor((QAccessibleApplication*)self);
}

QColor* q_accessibleapplication_super_foreground_color(const void* self) {
    return QAccessibleApplication_SuperForegroundColor((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_foreground_color(const void* self, QColor* (*callback)(const void*)) {
    QAccessibleApplication_OnForegroundColor((const QAccessibleApplication*)self, (intptr_t)callback);
}

QColor* q_accessibleapplication_background_color(const void* self) {
    return QAccessibleApplication_BackgroundColor((QAccessibleApplication*)self);
}

QColor* q_accessibleapplication_super_background_color(const void* self) {
    return QAccessibleApplication_SuperBackgroundColor((QAccessibleApplication*)self);
}

void q_accessibleapplication_on_background_color(const void* self, QColor* (*callback)(const void*)) {
    QAccessibleApplication_OnBackgroundColor((const QAccessibleApplication*)self, (intptr_t)callback);
}

void q_accessibleapplication_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_VirtualHook((QAccessibleApplication*)self, id, data);
}

void q_accessibleapplication_super_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_SuperVirtualHook((QAccessibleApplication*)self, id, data);
}

void q_accessibleapplication_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    QAccessibleApplication_OnVirtualHook((QAccessibleApplication*)self, (intptr_t)callback);
}

void* q_accessibleapplication_interface_cast(void* self, int32_t param1) {
    return QAccessibleApplication_InterfaceCast((QAccessibleApplication*)self, param1);
}

void* q_accessibleapplication_super_interface_cast(void* self, int32_t param1) {
    return QAccessibleApplication_SuperInterfaceCast((QAccessibleApplication*)self, param1);
}

void q_accessibleapplication_on_interface_cast(void* self, void* (*callback)(void*, int32_t)) {
    QAccessibleApplication_OnInterfaceCast((QAccessibleApplication*)self, (intptr_t)callback);
}

void q_accessibleapplication_delete(void* self) {
    QAccessibleApplication_Delete((QAccessibleApplication*)(self));
}
