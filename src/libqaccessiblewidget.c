#include "libqaccessible.hpp"
#include "libqaccessibleobject.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqaccessiblewidget.hpp"
#include "libqaccessiblewidget.h"

QAccessibleWidget* q_accessiblewidget_new(void* o) {
    return QAccessibleWidget_new((QWidget*)o);
}

QAccessibleWidget* q_accessiblewidget_new2(void* o, int64_t r) {
    return QAccessibleWidget_new2((QWidget*)o, r);
}

QAccessibleWidget* q_accessiblewidget_new3(void* o, int64_t r, const char* name) {
    return QAccessibleWidget_new3((QWidget*)o, r, qstring(name));
}

bool q_accessiblewidget_is_valid(void* self) {
    return QAccessibleWidget_IsValid((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_is_valid(void* self, bool (*slot)()) {
    QAccessibleWidget_OnIsValid((QAccessibleWidget*)self, (intptr_t)slot);
}

bool q_accessiblewidget_qbase_is_valid(void* self) {
    return QAccessibleWidget_QBaseIsValid((QAccessibleWidget*)self);
}

QWindow* q_accessiblewidget_window(void* self) {
    return QAccessibleWidget_Window((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_window(void* self, QWindow* (*slot)()) {
    QAccessibleWidget_OnWindow((QAccessibleWidget*)self, (intptr_t)slot);
}

QWindow* q_accessiblewidget_qbase_window(void* self) {
    return QAccessibleWidget_QBaseWindow((QAccessibleWidget*)self);
}

int32_t q_accessiblewidget_child_count(void* self) {
    return QAccessibleWidget_ChildCount((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_child_count(void* self, int32_t (*slot)()) {
    QAccessibleWidget_OnChildCount((QAccessibleWidget*)self, (intptr_t)slot);
}

int32_t q_accessiblewidget_qbase_child_count(void* self) {
    return QAccessibleWidget_QBaseChildCount((QAccessibleWidget*)self);
}

int32_t q_accessiblewidget_index_of_child(void* self, void* child) {
    return QAccessibleWidget_IndexOfChild((QAccessibleWidget*)self, (QAccessibleInterface*)child);
}

void q_accessiblewidget_on_index_of_child(void* self, int32_t (*slot)(void*, void*)) {
    QAccessibleWidget_OnIndexOfChild((QAccessibleWidget*)self, (intptr_t)slot);
}

int32_t q_accessiblewidget_qbase_index_of_child(void* self, void* child) {
    return QAccessibleWidget_QBaseIndexOfChild((QAccessibleWidget*)self, (QAccessibleInterface*)child);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleWidget_Relations((QAccessibleWidget*)self, match);
    return _arr;
}

void q_accessiblewidget_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t)) {
    QAccessibleWidget_OnRelations((QAccessibleWidget*)self, (intptr_t)slot);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_qbase_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleWidget_QBaseRelations((QAccessibleWidget*)self, match);
    return _arr;
}

QAccessibleInterface* q_accessiblewidget_focus_child(void* self) {
    return QAccessibleWidget_FocusChild((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_focus_child(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleWidget_OnFocusChild((QAccessibleWidget*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessiblewidget_qbase_focus_child(void* self) {
    return QAccessibleWidget_QBaseFocusChild((QAccessibleWidget*)self);
}

QRect* q_accessiblewidget_rect(void* self) {
    return QAccessibleWidget_Rect((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_rect(void* self, QRect* (*slot)()) {
    QAccessibleWidget_OnRect((QAccessibleWidget*)self, (intptr_t)slot);
}

QRect* q_accessiblewidget_qbase_rect(void* self) {
    return QAccessibleWidget_QBaseRect((QAccessibleWidget*)self);
}

QAccessibleInterface* q_accessiblewidget_parent(void* self) {
    return QAccessibleWidget_Parent((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_parent(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleWidget_OnParent((QAccessibleWidget*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessiblewidget_qbase_parent(void* self) {
    return QAccessibleWidget_QBaseParent((QAccessibleWidget*)self);
}

QAccessibleInterface* q_accessiblewidget_child(void* self, int index) {
    return QAccessibleWidget_Child((QAccessibleWidget*)self, index);
}

void q_accessiblewidget_on_child(void* self, QAccessibleInterface* (*slot)(void*, int)) {
    QAccessibleWidget_OnChild((QAccessibleWidget*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessiblewidget_qbase_child(void* self, int index) {
    return QAccessibleWidget_QBaseChild((QAccessibleWidget*)self, index);
}

const char* q_accessiblewidget_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleWidget_Text((QAccessibleWidget*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessiblewidget_on_text(void* self, const char* (*slot)(void*, int64_t)) {
    QAccessibleWidget_OnText((QAccessibleWidget*)self, (intptr_t)slot);
}

const char* q_accessiblewidget_qbase_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleWidget_QBaseText((QAccessibleWidget*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_accessiblewidget_role(void* self) {
    return QAccessibleWidget_Role((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_role(void* self, int64_t (*slot)()) {
    QAccessibleWidget_OnRole((QAccessibleWidget*)self, (intptr_t)slot);
}

int64_t q_accessiblewidget_qbase_role(void* self) {
    return QAccessibleWidget_QBaseRole((QAccessibleWidget*)self);
}

QAccessible__State* q_accessiblewidget_state(void* self) {
    return QAccessibleWidget_State((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_state(void* self, QAccessible__State* (*slot)()) {
    QAccessibleWidget_OnState((QAccessibleWidget*)self, (intptr_t)slot);
}

QAccessible__State* q_accessiblewidget_qbase_state(void* self) {
    return QAccessibleWidget_QBaseState((QAccessibleWidget*)self);
}

QColor* q_accessiblewidget_foreground_color(void* self) {
    return QAccessibleWidget_ForegroundColor((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_foreground_color(void* self, QColor* (*slot)()) {
    QAccessibleWidget_OnForegroundColor((QAccessibleWidget*)self, (intptr_t)slot);
}

QColor* q_accessiblewidget_qbase_foreground_color(void* self) {
    return QAccessibleWidget_QBaseForegroundColor((QAccessibleWidget*)self);
}

QColor* q_accessiblewidget_background_color(void* self) {
    return QAccessibleWidget_BackgroundColor((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_background_color(void* self, QColor* (*slot)()) {
    QAccessibleWidget_OnBackgroundColor((QAccessibleWidget*)self, (intptr_t)slot);
}

QColor* q_accessiblewidget_qbase_background_color(void* self) {
    return QAccessibleWidget_QBaseBackgroundColor((QAccessibleWidget*)self);
}

void* q_accessiblewidget_interface_cast(void* self, int64_t t) {
    return QAccessibleWidget_InterfaceCast((QAccessibleWidget*)self, t);
}

void q_accessiblewidget_on_interface_cast(void* self, void* (*slot)(void*, int64_t)) {
    QAccessibleWidget_OnInterfaceCast((QAccessibleWidget*)self, (intptr_t)slot);
}

void* q_accessiblewidget_qbase_interface_cast(void* self, int64_t t) {
    return QAccessibleWidget_QBaseInterfaceCast((QAccessibleWidget*)self, t);
}

const char** q_accessiblewidget_action_names(void* self) {
    libqt_list _arr = QAccessibleWidget_ActionNames((QAccessibleWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_on_action_names(void* self, const char** (*slot)()) {
    QAccessibleWidget_OnActionNames((QAccessibleWidget*)self, (intptr_t)slot);
}

const char** q_accessiblewidget_qbase_action_names(void* self) {
    libqt_list _arr = QAccessibleWidget_QBaseActionNames((QAccessibleWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_do_action(void* self, const char* actionName) {
    QAccessibleWidget_DoAction((QAccessibleWidget*)self, qstring(actionName));
}

void q_accessiblewidget_on_do_action(void* self, void (*slot)(void*, const char*)) {
    QAccessibleWidget_OnDoAction((QAccessibleWidget*)self, (intptr_t)slot);
}

void q_accessiblewidget_qbase_do_action(void* self, const char* actionName) {
    QAccessibleWidget_QBaseDoAction((QAccessibleWidget*)self, qstring(actionName));
}

const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleWidget_KeyBindingsForAction((QAccessibleWidget*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_on_key_bindings_for_action(void* self, const char** (*slot)(void*, const char*)) {
    QAccessibleWidget_OnKeyBindingsForAction((QAccessibleWidget*)self, (intptr_t)slot);
}

const char** q_accessiblewidget_qbase_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleWidget_QBaseKeyBindingsForAction((QAccessibleWidget*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QWidget* q_accessiblewidget_widget(void* self) {
    return QAccessibleWidget_Widget((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_widget(void* self, QWidget* (*slot)()) {
    QAccessibleWidget_OnWidget((QAccessibleWidget*)self, (intptr_t)slot);
}

QWidget* q_accessiblewidget_qbase_widget(void* self) {
    return QAccessibleWidget_QBaseWidget((QAccessibleWidget*)self);
}

QObject* q_accessiblewidget_parent_object(void* self) {
    return QAccessibleWidget_ParentObject((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_parent_object(void* self, QObject* (*slot)()) {
    QAccessibleWidget_OnParentObject((QAccessibleWidget*)self, (intptr_t)slot);
}

QObject* q_accessiblewidget_qbase_parent_object(void* self) {
    return QAccessibleWidget_QBaseParentObject((QAccessibleWidget*)self);
}

void q_accessiblewidget_add_controlling_signal(void* self, const char* signal) {
    QAccessibleWidget_AddControllingSignal((QAccessibleWidget*)self, qstring(signal));
}

void q_accessiblewidget_on_add_controlling_signal(void* self, void (*slot)(void*, const char*)) {
    QAccessibleWidget_OnAddControllingSignal((QAccessibleWidget*)self, (intptr_t)slot);
}

void q_accessiblewidget_qbase_add_controlling_signal(void* self, const char* signal) {
    QAccessibleWidget_QBaseAddControllingSignal((QAccessibleWidget*)self, qstring(signal));
}

QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

QAccessibleSelectionInterface* q_accessiblewidget_selection_interface(void* self) {
    return QAccessibleInterface_SelectionInterface((QAccessibleInterface*)self);
}

QAccessibleAttributesInterface* q_accessiblewidget_attributes_interface(void* self) {
    return QAccessibleInterface_AttributesInterface((QAccessibleInterface*)self);
}

const char* q_accessiblewidget_tr(const char* sourceText) {
    libqt_string _str = QAccessibleActionInterface_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_press_action() {
    libqt_string _str = QAccessibleActionInterface_PressAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_increase_action() {
    libqt_string _str = QAccessibleActionInterface_IncreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_decrease_action() {
    libqt_string _str = QAccessibleActionInterface_DecreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_show_menu_action() {
    libqt_string _str = QAccessibleActionInterface_ShowMenuAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_set_focus_action() {
    libqt_string _str = QAccessibleActionInterface_SetFocusAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_toggle_action() {
    libqt_string _str = QAccessibleActionInterface_ToggleAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_scroll_left_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollLeftAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_scroll_right_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollRightAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_scroll_up_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollUpAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_scroll_down_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollDownAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_next_page_action() {
    libqt_string _str = QAccessibleActionInterface_NextPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_previous_page_action() {
    libqt_string _str = QAccessibleActionInterface_PreviousPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QAccessibleActionInterface_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QAccessibleActionInterface_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_accessiblewidget_object(void* self) {
    return QAccessibleWidget_Object((QAccessibleWidget*)self);
}

QObject* q_accessiblewidget_qbase_object(void* self) {
    return QAccessibleWidget_QBaseObject((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_object(void* self, QObject* (*slot)()) {
    QAccessibleWidget_OnObject((QAccessibleWidget*)self, (intptr_t)slot);
}

void q_accessiblewidget_set_text(void* self, int64_t t, const char* text) {
    QAccessibleWidget_SetText((QAccessibleWidget*)self, t, qstring(text));
}

void q_accessiblewidget_qbase_set_text(void* self, int64_t t, const char* text) {
    QAccessibleWidget_QBaseSetText((QAccessibleWidget*)self, t, qstring(text));
}

void q_accessiblewidget_on_set_text(void* self, void (*slot)(void*, int64_t, const char*)) {
    QAccessibleWidget_OnSetText((QAccessibleWidget*)self, (intptr_t)slot);
}

QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y) {
    return QAccessibleWidget_ChildAt((QAccessibleWidget*)self, x, y);
}

QAccessibleInterface* q_accessiblewidget_qbase_child_at(void* self, int x, int y) {
    return QAccessibleWidget_QBaseChildAt((QAccessibleWidget*)self, x, y);
}

void q_accessiblewidget_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int)) {
    QAccessibleWidget_OnChildAt((QAccessibleWidget*)self, (intptr_t)slot);
}

void q_accessiblewidget_virtual_hook(void* self, int id, void* data) {
    QAccessibleWidget_VirtualHook((QAccessibleWidget*)self, id, data);
}

void q_accessiblewidget_qbase_virtual_hook(void* self, int id, void* data) {
    QAccessibleWidget_QBaseVirtualHook((QAccessibleWidget*)self, id, data);
}

void q_accessiblewidget_on_virtual_hook(void* self, void (*slot)(void*, int, void*)) {
    QAccessibleWidget_OnVirtualHook((QAccessibleWidget*)self, (intptr_t)slot);
}

const char* q_accessiblewidget_localized_action_name(void* self, const char* name) {
    libqt_string _str = QAccessibleWidget_LocalizedActionName((QAccessibleWidget*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_qbase_localized_action_name(void* self, const char* name) {
    libqt_string _str = QAccessibleWidget_QBaseLocalizedActionName((QAccessibleWidget*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessiblewidget_on_localized_action_name(void* self, const char* (*slot)(void*, const char*)) {
    QAccessibleWidget_OnLocalizedActionName((QAccessibleWidget*)self, (intptr_t)slot);
}

const char* q_accessiblewidget_localized_action_description(void* self, const char* name) {
    libqt_string _str = QAccessibleWidget_LocalizedActionDescription((QAccessibleWidget*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_qbase_localized_action_description(void* self, const char* name) {
    libqt_string _str = QAccessibleWidget_QBaseLocalizedActionDescription((QAccessibleWidget*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessiblewidget_on_localized_action_description(void* self, const char* (*slot)(void*, const char*)) {
    QAccessibleWidget_OnLocalizedActionDescription((QAccessibleWidget*)self, (intptr_t)slot);
}
