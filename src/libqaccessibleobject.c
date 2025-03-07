#include "libqaccessible.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqwindow.hpp"
#include "libqaccessibleobject.hpp"
#include "libqaccessibleobject.h"

/// https://doc.qt.io/qt-6/qaccessibleobject.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// ``` QAccessibleObject* self ```
bool q_accessibleobject_is_valid(void* self) {
    return QAccessibleObject_IsValid((QAccessibleObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// ``` QAccessibleObject* self ```
QObject* q_accessibleobject_object(void* self) {
    return QAccessibleObject_Object((QAccessibleObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// ``` QAccessibleObject* self ```
QRect* q_accessibleobject_rect(void* self) {
    return QAccessibleObject_Rect((QAccessibleObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t, const char* text ```
void q_accessibleobject_set_text(void* self, int64_t t, const char* text) {
    QAccessibleObject_SetText((QAccessibleObject*)self, t, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// ``` QAccessibleObject* self, int x, int y ```
QAccessibleInterface* q_accessibleobject_child_at(void* self, int x, int y) {
    return QAccessibleObject_ChildAt((QAccessibleObject*)self, x, y);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// ``` QAccessibleObject* self ```
QWindow* q_accessibleobject_window(void* self) {
    return QAccessibleInterface_Window((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// ``` QAccessibleObject* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleInterface_Relations((QAccessibleInterface*)self, match);
    return _arr;
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_focus_child(void* self) {
    return QAccessibleInterface_FocusChild((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_parent(void* self) {
    return QAccessibleInterface_Parent((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// ``` QAccessibleObject* self, int index ```
QAccessibleInterface* q_accessibleobject_child(void* self, int index) {
    return QAccessibleInterface_Child((QAccessibleInterface*)self, index);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// ``` QAccessibleObject* self ```
int32_t q_accessibleobject_child_count(void* self) {
    return QAccessibleInterface_ChildCount((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// ``` QAccessibleObject* self, QAccessibleInterface* param1 ```
int32_t q_accessibleobject_index_of_child(void* self, void* param1) {
    return QAccessibleInterface_IndexOfChild((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t ```
const char* q_accessibleobject_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleInterface_Text((QAccessibleInterface*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// ``` QAccessibleObject* self ```
int64_t q_accessibleobject_role(void* self) {
    return QAccessibleInterface_Role((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// ``` QAccessibleObject* self ```
QAccessible__State* q_accessibleobject_state(void* self) {
    return QAccessibleInterface_State((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_foreground_color(void* self) {
    return QAccessibleInterface_ForegroundColor((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_background_color(void* self) {
    return QAccessibleInterface_BackgroundColor((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTextInterface* q_accessibleobject_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleEditableTextInterface* q_accessibleobject_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleValueInterface* q_accessibleobject_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleActionInterface* q_accessibleobject_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleImageInterface* q_accessibleobject_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTableInterface* q_accessibleobject_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTableCellInterface* q_accessibleobject_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleHyperlinkInterface* q_accessibleobject_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// ``` QAccessibleObject* self, int id, void* data ```
void q_accessibleobject_virtual_hook(void* self, int id, void* data) {
    QAccessibleInterface_VirtualHook((QAccessibleInterface*)self, id, data);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// ``` QAccessibleObject* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleobject_interface_cast(void* self, int64_t param1) {
    return QAccessibleInterface_InterfaceCast((QAccessibleInterface*)self, param1);
}

/// https://doc.qt.io/qt-6/qaccessibleapplication.html

/// q_accessibleapplication_new constructs a new QAccessibleApplication object.
///
///
QAccessibleApplication* q_accessibleapplication_new() {
    return QAccessibleApplication_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// ``` QAccessibleApplication* self ```
QWindow* q_accessibleapplication_window(void* self) {
    return QAccessibleApplication_Window((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QWindow* (*slot)() ```
void q_accessibleapplication_on_window(void* self, QWindow* (*slot)()) {
    QAccessibleApplication_OnWindow((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QWindow* q_accessibleapplication_qbase_window(void* self) {
    return QAccessibleApplication_QBaseWindow((QAccessibleApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// ``` QAccessibleApplication* self ```
int32_t q_accessibleapplication_child_count(void* self) {
    return QAccessibleApplication_ChildCount((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int32_t (*slot)() ```
void q_accessibleapplication_on_child_count(void* self, int32_t (*slot)()) {
    QAccessibleApplication_OnChildCount((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
int32_t q_accessibleapplication_qbase_child_count(void* self) {
    return QAccessibleApplication_QBaseChildCount((QAccessibleApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* param1 ```
int32_t q_accessibleapplication_index_of_child(void* self, void* param1) {
    return QAccessibleApplication_IndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int32_t (*slot)(QAccessibleApplication*, QAccessibleInterface*) ```
void q_accessibleapplication_on_index_of_child(void* self, int32_t (*slot)(void*, void*)) {
    QAccessibleApplication_OnIndexOfChild((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* param1 ```
int32_t q_accessibleapplication_qbase_index_of_child(void* self, void* param1) {
    return QAccessibleApplication_QBaseIndexOfChild((QAccessibleApplication*)self, (QAccessibleInterface*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_focus_child(void* self) {
    return QAccessibleApplication_FocusChild((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)() ```
void q_accessibleapplication_on_focus_child(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleApplication_OnFocusChild((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_qbase_focus_child(void* self) {
    return QAccessibleApplication_QBaseFocusChild((QAccessibleApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_parent(void* self) {
    return QAccessibleApplication_Parent((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)() ```
void q_accessibleapplication_on_parent(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleApplication_OnParent((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_qbase_parent(void* self) {
    return QAccessibleApplication_QBaseParent((QAccessibleApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// ``` QAccessibleApplication* self, int index ```
QAccessibleInterface* q_accessibleapplication_child(void* self, int index) {
    return QAccessibleApplication_Child((QAccessibleApplication*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)(QAccessibleApplication*, int) ```
void q_accessibleapplication_on_child(void* self, QAccessibleInterface* (*slot)(void*, int)) {
    QAccessibleApplication_OnChild((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self, int index ```
QAccessibleInterface* q_accessibleapplication_qbase_child(void* self, int index) {
    return QAccessibleApplication_QBaseChild((QAccessibleApplication*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t ```
const char* q_accessibleapplication_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleApplication_Text((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, const char* (*slot)(QAccessibleApplication*, enum QAccessible__Text) ```
void q_accessibleapplication_on_text(void* self, const char* (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnText((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t ```
const char* q_accessibleapplication_qbase_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleApplication_QBaseText((QAccessibleApplication*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// ``` QAccessibleApplication* self ```
int64_t q_accessibleapplication_role(void* self) {
    return QAccessibleApplication_Role((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int64_t (*slot)() ```
void q_accessibleapplication_on_role(void* self, int64_t (*slot)()) {
    QAccessibleApplication_OnRole((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
int64_t q_accessibleapplication_qbase_role(void* self) {
    return QAccessibleApplication_QBaseRole((QAccessibleApplication*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// ``` QAccessibleApplication* self ```
QAccessible__State* q_accessibleapplication_state(void* self) {
    return QAccessibleApplication_State((QAccessibleApplication*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessible__State* (*slot)() ```
void q_accessibleapplication_on_state(void* self, QAccessible__State* (*slot)()) {
    QAccessibleApplication_OnState((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessible__State* q_accessibleapplication_qbase_state(void* self) {
    return QAccessibleApplication_QBaseState((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTextInterface* q_accessibleapplication_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleEditableTextInterface* q_accessibleapplication_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleValueInterface* q_accessibleapplication_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleActionInterface* q_accessibleapplication_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleImageInterface* q_accessibleapplication_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTableInterface* q_accessibleapplication_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTableCellInterface* q_accessibleapplication_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleHyperlinkInterface* q_accessibleapplication_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
bool q_accessibleapplication_is_valid(void* self) {
    return QAccessibleApplication_IsValid((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
bool q_accessibleapplication_qbase_is_valid(void* self) {
    return QAccessibleApplication_QBaseIsValid((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, bool (*slot)() ```
void q_accessibleapplication_on_is_valid(void* self, bool (*slot)()) {
    QAccessibleApplication_OnIsValid((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QObject* q_accessibleapplication_object(void* self) {
    return QAccessibleApplication_Object((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QObject* q_accessibleapplication_qbase_object(void* self) {
    return QAccessibleApplication_QBaseObject((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QObject* (*slot)() ```
void q_accessibleapplication_on_object(void* self, QObject* (*slot)()) {
    QAccessibleApplication_OnObject((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QRect* q_accessibleapplication_rect(void* self) {
    return QAccessibleApplication_Rect((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QRect* q_accessibleapplication_qbase_rect(void* self) {
    return QAccessibleApplication_QBaseRect((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QRect* (*slot)() ```
void q_accessibleapplication_on_rect(void* self, QRect* (*slot)()) {
    QAccessibleApplication_OnRect((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t, const char* text ```
void q_accessibleapplication_set_text(void* self, int64_t t, const char* text) {
    QAccessibleApplication_SetText((QAccessibleApplication*)self, t, qstring(text));
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t, const char* text ```
void q_accessibleapplication_qbase_set_text(void* self, int64_t t, const char* text) {
    QAccessibleApplication_QBaseSetText((QAccessibleApplication*)self, t, qstring(text));
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void (*slot)(QAccessibleApplication*, enum QAccessible__Text, const char*) ```
void q_accessibleapplication_on_set_text(void* self, void (*slot)(void*, int64_t, const char*)) {
    QAccessibleApplication_OnSetText((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int x, int y ```
QAccessibleInterface* q_accessibleapplication_child_at(void* self, int x, int y) {
    return QAccessibleApplication_ChildAt((QAccessibleApplication*)self, x, y);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int x, int y ```
QAccessibleInterface* q_accessibleapplication_qbase_child_at(void* self, int x, int y) {
    return QAccessibleApplication_QBaseChildAt((QAccessibleApplication*)self, x, y);
}

/// Inherited from QAccessibleObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)(QAccessibleApplication*, int, int) ```
void q_accessibleapplication_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int)) {
    QAccessibleApplication_OnChildAt((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleApplication_Relations((QAccessibleApplication*)self, match);
    return _arr;
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_qbase_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleApplication_QBaseRelations((QAccessibleApplication*)self, match);
    return _arr;
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(QAccessibleApplication*, int) ```
void q_accessibleapplication_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnRelations((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_foreground_color(void* self) {
    return QAccessibleApplication_ForegroundColor((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_qbase_foreground_color(void* self) {
    return QAccessibleApplication_QBaseForegroundColor((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QColor* (*slot)() ```
void q_accessibleapplication_on_foreground_color(void* self, QColor* (*slot)()) {
    QAccessibleApplication_OnForegroundColor((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_background_color(void* self) {
    return QAccessibleApplication_BackgroundColor((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_qbase_background_color(void* self) {
    return QAccessibleApplication_QBaseBackgroundColor((QAccessibleApplication*)self);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QColor* (*slot)() ```
void q_accessibleapplication_on_background_color(void* self, QColor* (*slot)()) {
    QAccessibleApplication_OnBackgroundColor((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int id, void* data ```
void q_accessibleapplication_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_VirtualHook((QAccessibleApplication*)self, id, data);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int id, void* data ```
void q_accessibleapplication_qbase_virtual_hook(void* self, int id, void* data) {
    QAccessibleApplication_QBaseVirtualHook((QAccessibleApplication*)self, id, data);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void (*slot)(QAccessibleApplication*, int, void*) ```
void q_accessibleapplication_on_virtual_hook(void* self, void (*slot)(void*, int, void*)) {
    QAccessibleApplication_OnVirtualHook((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleapplication_interface_cast(void* self, int64_t param1) {
    return QAccessibleApplication_InterfaceCast((QAccessibleApplication*)self, param1);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleapplication_qbase_interface_cast(void* self, int64_t param1) {
    return QAccessibleApplication_QBaseInterfaceCast((QAccessibleApplication*)self, param1);
}

/// Inherited from QAccessibleInterface
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void* (*slot)(QAccessibleApplication*, enum QAccessible__InterfaceType) ```
void q_accessibleapplication_on_interface_cast(void* self, void* (*slot)(void*, int64_t)) {
    QAccessibleApplication_OnInterfaceCast((QAccessibleApplication*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleApplication* self ```
void q_accessibleapplication_delete(void* self) {
    QAccessibleApplication_Delete((QAccessibleApplication*)(self));
}