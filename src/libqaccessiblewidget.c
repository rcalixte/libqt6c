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

/// https://doc.qt.io/qt-6/qaccessiblewidget.html

/// q_accessiblewidget_new constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o ```
QAccessibleWidget* q_accessiblewidget_new(void* o) {
    return QAccessibleWidget_new((QWidget*)o);
}

/// q_accessiblewidget_new2 constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o, enum QAccessible__Role r ```
QAccessibleWidget* q_accessiblewidget_new2(void* o, int64_t r) {
    return QAccessibleWidget_new2((QWidget*)o, r);
}

/// q_accessiblewidget_new3 constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o, enum QAccessible__Role r, const char* name ```
QAccessibleWidget* q_accessiblewidget_new3(void* o, int64_t r, const char* name) {
    return QAccessibleWidget_new3((QWidget*)o, r, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// ``` QAccessibleWidget* self ```
bool q_accessiblewidget_is_valid(void* self) {
    return QAccessibleWidget_IsValid((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// ``` QAccessibleWidget* self ```
QWindow* q_accessiblewidget_window(void* self) {
    return QAccessibleWidget_Window((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// ``` QAccessibleWidget* self ```
int32_t q_accessiblewidget_child_count(void* self) {
    return QAccessibleWidget_ChildCount((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* child ```
int32_t q_accessiblewidget_index_of_child(void* self, void* child) {
    return QAccessibleWidget_IndexOfChild((QAccessibleWidget*)self, (QAccessibleInterface*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// ``` QAccessibleWidget* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleWidget_Relations((QAccessibleWidget*)self, match);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_focus_child(void* self) {
    return QAccessibleWidget_FocusChild((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// ``` QAccessibleWidget* self ```
QRect* q_accessiblewidget_rect(void* self) {
    return QAccessibleWidget_Rect((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_parent(void* self) {
    return QAccessibleWidget_Parent((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// ``` QAccessibleWidget* self, int index ```
QAccessibleInterface* q_accessiblewidget_child(void* self, int index) {
    return QAccessibleWidget_Child((QAccessibleWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t ```
const char* q_accessiblewidget_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleWidget_Text((QAccessibleWidget*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// ``` QAccessibleWidget* self ```
int64_t q_accessiblewidget_role(void* self) {
    return QAccessibleWidget_Role((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// ``` QAccessibleWidget* self ```
QAccessible__State* q_accessiblewidget_state(void* self) {
    return QAccessibleWidget_State((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_foreground_color(void* self) {
    return QAccessibleWidget_ForegroundColor((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_background_color(void* self) {
    return QAccessibleWidget_BackgroundColor((QAccessibleWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// ``` QAccessibleWidget* self, enum QAccessible__InterfaceType t ```
void* q_accessiblewidget_interface_cast(void* self, int64_t t) {
    return QAccessibleWidget_InterfaceCast((QAccessibleWidget*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// ``` QAccessibleWidget* self ```
const char** q_accessiblewidget_action_names(void* self) {
    libqt_list _arr = QAccessibleWidget_ActionNames((QAccessibleWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
void q_accessiblewidget_do_action(void* self, const char* actionName) {
    QAccessibleWidget_DoAction((QAccessibleWidget*)self, qstring(actionName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleWidget_KeyBindingsForAction((QAccessibleWidget*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_object(void* self) {
    return QAccessibleObject_Object((QAccessibleObject*)self);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t, const char* text ```
void q_accessiblewidget_set_text(void* self, int64_t t, const char* text) {
    QAccessibleObject_SetText((QAccessibleObject*)self, t, qstring(text));
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// ``` QAccessibleWidget* self, int x, int y ```
QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y) {
    return QAccessibleObject_ChildAt((QAccessibleObject*)self, x, y);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// ``` QAccessibleWidget* self, int id, void* data ```
void q_accessiblewidget_virtual_hook(void* self, int id, void* data) {
    QAccessibleInterface_VirtualHook((QAccessibleInterface*)self, id, data);
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_accessiblewidget_tr(const char* sourceText) {
    libqt_string _str = QAccessibleActionInterface_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_name(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionName((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_description(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionDescription((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
///
const char* q_accessiblewidget_press_action() {
    libqt_string _str = QAccessibleActionInterface_PressAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
///
const char* q_accessiblewidget_increase_action() {
    libqt_string _str = QAccessibleActionInterface_IncreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
///
const char* q_accessiblewidget_decrease_action() {
    libqt_string _str = QAccessibleActionInterface_DecreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
///
const char* q_accessiblewidget_show_menu_action() {
    libqt_string _str = QAccessibleActionInterface_ShowMenuAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
///
const char* q_accessiblewidget_set_focus_action() {
    libqt_string _str = QAccessibleActionInterface_SetFocusAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
///
const char* q_accessiblewidget_toggle_action() {
    libqt_string _str = QAccessibleActionInterface_ToggleAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
///
const char* q_accessiblewidget_scroll_left_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollLeftAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
///
const char* q_accessiblewidget_scroll_right_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollRightAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
///
const char* q_accessiblewidget_scroll_up_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollUpAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
///
const char* q_accessiblewidget_scroll_down_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollDownAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
///
const char* q_accessiblewidget_next_page_action() {
    libqt_string _str = QAccessibleActionInterface_NextPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
///
const char* q_accessiblewidget_previous_page_action() {
    libqt_string _str = QAccessibleActionInterface_PreviousPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QAccessibleActionInterface_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QAccessibleActionInterface_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
