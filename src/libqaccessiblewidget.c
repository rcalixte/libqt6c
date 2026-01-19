#include "libqaccessible_base.hpp"
#include "libqaccessible.hpp"
#include "libqaccessibleobject.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqaccessiblewidget.hpp"
#include "libqaccessiblewidget.h"

QAccessibleWidget* q_accessiblewidget_new(void* o) {
    return QAccessibleWidget_new((QWidget*)o);
}

QAccessibleWidget* q_accessiblewidget_new2(void* o, int32_t r) {
    return QAccessibleWidget_new2((QWidget*)o, r);
}

QAccessibleWidget* q_accessiblewidget_new3(void* o, int32_t r, const char* name) {
    return QAccessibleWidget_new3((QWidget*)o, r, qstring(name));
}

bool q_accessiblewidget_is_valid(void* self) {
    return QAccessibleWidget_IsValid((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_is_valid(void* self, bool (*callback)()) {
    QAccessibleWidget_OnIsValid((QAccessibleWidget*)self, (intptr_t)callback);
}

bool q_accessiblewidget_qbase_is_valid(void* self) {
    return QAccessibleWidget_QBaseIsValid((QAccessibleWidget*)self);
}

QWindow* q_accessiblewidget_window(void* self) {
    return QAccessibleWidget_Window((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_window(void* self, QWindow* (*callback)()) {
    QAccessibleWidget_OnWindow((QAccessibleWidget*)self, (intptr_t)callback);
}

QWindow* q_accessiblewidget_qbase_window(void* self) {
    return QAccessibleWidget_QBaseWindow((QAccessibleWidget*)self);
}

int32_t q_accessiblewidget_child_count(void* self) {
    return QAccessibleWidget_ChildCount((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_child_count(void* self, int32_t (*callback)()) {
    QAccessibleWidget_OnChildCount((QAccessibleWidget*)self, (intptr_t)callback);
}

int32_t q_accessiblewidget_qbase_child_count(void* self) {
    return QAccessibleWidget_QBaseChildCount((QAccessibleWidget*)self);
}

int32_t q_accessiblewidget_index_of_child(void* self, void* child) {
    return QAccessibleWidget_IndexOfChild((QAccessibleWidget*)self, (QAccessibleInterface*)child);
}

void q_accessiblewidget_on_index_of_child(void* self, int32_t (*callback)(void*, void*)) {
    QAccessibleWidget_OnIndexOfChild((QAccessibleWidget*)self, (intptr_t)callback);
}

int32_t q_accessiblewidget_qbase_index_of_child(void* self, void* child) {
    return QAccessibleWidget_QBaseIndexOfChild((QAccessibleWidget*)self, (QAccessibleInterface*)child);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessiblewidget_relations(void* self, int32_t match) {
    return QAccessibleWidget_Relations((QAccessibleWidget*)self, match);
}

void q_accessiblewidget_on_relations(void* self, libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ (*callback)(void*, int32_t)) {
    QAccessibleWidget_OnRelations((QAccessibleWidget*)self, (intptr_t)callback);
}

libqt_list /* of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag */ q_accessiblewidget_qbase_relations(void* self, int32_t match) {
    return QAccessibleWidget_QBaseRelations((QAccessibleWidget*)self, match);
}

QAccessibleInterface* q_accessiblewidget_focus_child(void* self) {
    return QAccessibleWidget_FocusChild((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_focus_child(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleWidget_OnFocusChild((QAccessibleWidget*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessiblewidget_qbase_focus_child(void* self) {
    return QAccessibleWidget_QBaseFocusChild((QAccessibleWidget*)self);
}

QRect* q_accessiblewidget_rect(void* self) {
    return QAccessibleWidget_Rect((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_rect(void* self, QRect* (*callback)()) {
    QAccessibleWidget_OnRect((QAccessibleWidget*)self, (intptr_t)callback);
}

QRect* q_accessiblewidget_qbase_rect(void* self) {
    return QAccessibleWidget_QBaseRect((QAccessibleWidget*)self);
}

QAccessibleInterface* q_accessiblewidget_parent(void* self) {
    return QAccessibleWidget_Parent((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_parent(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleWidget_OnParent((QAccessibleWidget*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessiblewidget_qbase_parent(void* self) {
    return QAccessibleWidget_QBaseParent((QAccessibleWidget*)self);
}

QAccessibleInterface* q_accessiblewidget_child(void* self, int index) {
    return QAccessibleWidget_Child((QAccessibleWidget*)self, index);
}

void q_accessiblewidget_on_child(void* self, QAccessibleInterface* (*callback)(void*, int)) {
    QAccessibleWidget_OnChild((QAccessibleWidget*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessiblewidget_qbase_child(void* self, int index) {
    return QAccessibleWidget_QBaseChild((QAccessibleWidget*)self, index);
}

const char* q_accessiblewidget_text(void* self, int32_t t) {
    libqt_string _str = QAccessibleWidget_Text((QAccessibleWidget*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessiblewidget_on_text(void* self, const char* (*callback)(void*, int32_t)) {
    QAccessibleWidget_OnText((QAccessibleWidget*)self, (intptr_t)callback);
}

const char* q_accessiblewidget_qbase_text(void* self, int32_t t) {
    libqt_string _str = QAccessibleWidget_QBaseText((QAccessibleWidget*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessiblewidget_role(void* self) {
    return QAccessibleWidget_Role((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_role(void* self, int32_t (*callback)()) {
    QAccessibleWidget_OnRole((QAccessibleWidget*)self, (intptr_t)callback);
}

int32_t q_accessiblewidget_qbase_role(void* self) {
    return QAccessibleWidget_QBaseRole((QAccessibleWidget*)self);
}

QAccessible__State* q_accessiblewidget_state(void* self) {
    return QAccessibleWidget_State((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_state(void* self, QAccessible__State* (*callback)()) {
    QAccessibleWidget_OnState((QAccessibleWidget*)self, (intptr_t)callback);
}

QAccessible__State* q_accessiblewidget_qbase_state(void* self) {
    return QAccessibleWidget_QBaseState((QAccessibleWidget*)self);
}

QColor* q_accessiblewidget_foreground_color(void* self) {
    return QAccessibleWidget_ForegroundColor((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_foreground_color(void* self, QColor* (*callback)()) {
    QAccessibleWidget_OnForegroundColor((QAccessibleWidget*)self, (intptr_t)callback);
}

QColor* q_accessiblewidget_qbase_foreground_color(void* self) {
    return QAccessibleWidget_QBaseForegroundColor((QAccessibleWidget*)self);
}

QColor* q_accessiblewidget_background_color(void* self) {
    return QAccessibleWidget_BackgroundColor((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_background_color(void* self, QColor* (*callback)()) {
    QAccessibleWidget_OnBackgroundColor((QAccessibleWidget*)self, (intptr_t)callback);
}

QColor* q_accessiblewidget_qbase_background_color(void* self) {
    return QAccessibleWidget_QBaseBackgroundColor((QAccessibleWidget*)self);
}

void* q_accessiblewidget_interface_cast(void* self, int32_t t) {
    return QAccessibleWidget_InterfaceCast((QAccessibleWidget*)self, t);
}

void q_accessiblewidget_on_interface_cast(void* self, void* (*callback)(void*, int32_t)) {
    QAccessibleWidget_OnInterfaceCast((QAccessibleWidget*)self, (intptr_t)callback);
}

void* q_accessiblewidget_qbase_interface_cast(void* self, int32_t t) {
    return QAccessibleWidget_QBaseInterfaceCast((QAccessibleWidget*)self, t);
}

const char** q_accessiblewidget_action_names(void* self) {
    libqt_list _arr = QAccessibleWidget_ActionNames((QAccessibleWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accessiblewidget_action_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_on_action_names(void* self, const char** (*callback)()) {
    QAccessibleWidget_OnActionNames((QAccessibleWidget*)self, (intptr_t)callback);
}

const char** q_accessiblewidget_qbase_action_names(void* self) {
    libqt_list _arr = QAccessibleWidget_QBaseActionNames((QAccessibleWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accessiblewidget_action_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_do_action(void* self, const char* actionName) {
    QAccessibleWidget_DoAction((QAccessibleWidget*)self, qstring(actionName));
}

void q_accessiblewidget_on_do_action(void* self, void (*callback)(void*, const char*)) {
    QAccessibleWidget_OnDoAction((QAccessibleWidget*)self, (intptr_t)callback);
}

void q_accessiblewidget_qbase_do_action(void* self, const char* actionName) {
    QAccessibleWidget_QBaseDoAction((QAccessibleWidget*)self, qstring(actionName));
}

const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleWidget_KeyBindingsForAction((QAccessibleWidget*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accessiblewidget_key_bindings_for_action\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_accessiblewidget_on_key_bindings_for_action(void* self, const char** (*callback)(void*, const char*)) {
    QAccessibleWidget_OnKeyBindingsForAction((QAccessibleWidget*)self, (intptr_t)callback);
}

const char** q_accessiblewidget_qbase_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleWidget_QBaseKeyBindingsForAction((QAccessibleWidget*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accessiblewidget_key_bindings_for_action\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QWidget* q_accessiblewidget_widget(void* self) {
    return QAccessibleWidget_Widget((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_widget(void* self, QWidget* (*callback)()) {
    QAccessibleWidget_OnWidget((QAccessibleWidget*)self, (intptr_t)callback);
}

QWidget* q_accessiblewidget_qbase_widget(void* self) {
    return QAccessibleWidget_QBaseWidget((QAccessibleWidget*)self);
}

QObject* q_accessiblewidget_parent_object(void* self) {
    return QAccessibleWidget_ParentObject((QAccessibleWidget*)self);
}

void q_accessiblewidget_on_parent_object(void* self, QObject* (*callback)()) {
    QAccessibleWidget_OnParentObject((QAccessibleWidget*)self, (intptr_t)callback);
}

QObject* q_accessiblewidget_qbase_parent_object(void* self) {
    return QAccessibleWidget_QBaseParentObject((QAccessibleWidget*)self);
}

void q_accessiblewidget_add_controlling_signal(void* self, const char* signal) {
    QAccessibleWidget_AddControllingSignal((QAccessibleWidget*)self, qstring(signal));
}

void q_accessiblewidget_on_add_controlling_signal(void* self, void (*callback)(void*, const char*)) {
    QAccessibleWidget_OnAddControllingSignal((QAccessibleWidget*)self, (intptr_t)callback);
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
    libqt_string _str = QObject_Tr(sourceText);
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
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
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

void q_accessiblewidget_on_object(void* self, QObject* (*callback)()) {
    QAccessibleWidget_OnObject((QAccessibleWidget*)self, (intptr_t)callback);
}

void q_accessiblewidget_set_text(void* self, int32_t t, const char* text) {
    QAccessibleWidget_SetText((QAccessibleWidget*)self, t, qstring(text));
}

void q_accessiblewidget_qbase_set_text(void* self, int32_t t, const char* text) {
    QAccessibleWidget_QBaseSetText((QAccessibleWidget*)self, t, qstring(text));
}

void q_accessiblewidget_on_set_text(void* self, void (*callback)(void*, int32_t, const char*)) {
    QAccessibleWidget_OnSetText((QAccessibleWidget*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y) {
    return QAccessibleWidget_ChildAt((QAccessibleWidget*)self, x, y);
}

QAccessibleInterface* q_accessiblewidget_qbase_child_at(void* self, int x, int y) {
    return QAccessibleWidget_QBaseChildAt((QAccessibleWidget*)self, x, y);
}

void q_accessiblewidget_on_child_at(void* self, QAccessibleInterface* (*callback)(void*, int, int)) {
    QAccessibleWidget_OnChildAt((QAccessibleWidget*)self, (intptr_t)callback);
}

void q_accessiblewidget_virtual_hook(void* self, int id, void* data) {
    QAccessibleWidget_VirtualHook((QAccessibleWidget*)self, id, data);
}

void q_accessiblewidget_qbase_virtual_hook(void* self, int id, void* data) {
    QAccessibleWidget_QBaseVirtualHook((QAccessibleWidget*)self, id, data);
}

void q_accessiblewidget_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    QAccessibleWidget_OnVirtualHook((QAccessibleWidget*)self, (intptr_t)callback);
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

void q_accessiblewidget_on_localized_action_name(void* self, const char* (*callback)(void*, const char*)) {
    QAccessibleWidget_OnLocalizedActionName((QAccessibleWidget*)self, (intptr_t)callback);
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

void q_accessiblewidget_on_localized_action_description(void* self, const char* (*callback)(void*, const char*)) {
    QAccessibleWidget_OnLocalizedActionDescription((QAccessibleWidget*)self, (intptr_t)callback);
}
