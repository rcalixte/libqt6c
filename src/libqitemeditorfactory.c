#include "libqwidget.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqitemeditorfactory.h"

/// https://doc.qt.io/qt-6/qitemeditorcreatorbase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#createWidget)
///
/// ``` QItemEditorCreatorBase* self, QWidget* parent ```
QWidget* q_itemeditorcreatorbase_create_widget(void* self, void* parent) {
    return QItemEditorCreatorBase_CreateWidget((QItemEditorCreatorBase*)self, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#valuePropertyName)
///
/// ``` QItemEditorCreatorBase* self ```
char* q_itemeditorcreatorbase_value_property_name(void* self) {
    libqt_string _str = QItemEditorCreatorBase_ValuePropertyName((QItemEditorCreatorBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorcreatorbase.html#operator=)
///
/// ``` QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1 ```
void q_itemeditorcreatorbase_operator_assign(void* self, void* param1) {
    QItemEditorCreatorBase_OperatorAssign((QItemEditorCreatorBase*)self, (QItemEditorCreatorBase*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QItemEditorCreatorBase* self ```
void q_itemeditorcreatorbase_delete(void* self) {
    QItemEditorCreatorBase_Delete((QItemEditorCreatorBase*)(self));
}

/// https://doc.qt.io/qt-6/qitemeditorfactory.html

/// q_itemeditorfactory_new constructs a new QItemEditorFactory object.
///
///
QItemEditorFactory* q_itemeditorfactory_new() {
    return QItemEditorFactory_new();
}

/// q_itemeditorfactory_new2 constructs a new QItemEditorFactory object.
///
/// ``` QItemEditorFactory* param1 ```
QItemEditorFactory* q_itemeditorfactory_new2(void* param1) {
    return QItemEditorFactory_new2((QItemEditorFactory*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#createEditor)
///
/// ``` QItemEditorFactory* self, int userType, QWidget* parent ```
QWidget* q_itemeditorfactory_create_editor(void* self, int userType, void* parent) {
    return QItemEditorFactory_CreateEditor((QItemEditorFactory*)self, userType, (QWidget*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QItemEditorFactory* self, QWidget* (*slot)(QItemEditorFactory*, int, QWidget*) ```
void q_itemeditorfactory_on_create_editor(void* self, QWidget* (*slot)(void*, int, void*)) {
    QItemEditorFactory_OnCreateEditor((QItemEditorFactory*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemEditorFactory* self, int userType, QWidget* parent ```
QWidget* q_itemeditorfactory_qbase_create_editor(void* self, int userType, void* parent) {
    return QItemEditorFactory_QBaseCreateEditor((QItemEditorFactory*)self, userType, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#valuePropertyName)
///
/// ``` QItemEditorFactory* self, int userType ```
char* q_itemeditorfactory_value_property_name(void* self, int userType) {
    libqt_string _str = QItemEditorFactory_ValuePropertyName((QItemEditorFactory*)self, userType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QItemEditorFactory* self, char* (*slot)(QItemEditorFactory*, int) ```
void q_itemeditorfactory_on_value_property_name(void* self, char* (*slot)(void*, int)) {
    QItemEditorFactory_OnValuePropertyName((QItemEditorFactory*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemEditorFactory* self, int userType ```
char* q_itemeditorfactory_qbase_value_property_name(void* self, int userType) {
    libqt_string _str = QItemEditorFactory_QBaseValuePropertyName((QItemEditorFactory*)self, userType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#registerEditor)
///
/// ``` QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator ```
void q_itemeditorfactory_register_editor(void* self, int userType, void* creator) {
    QItemEditorFactory_RegisterEditor((QItemEditorFactory*)self, userType, (QItemEditorCreatorBase*)creator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#defaultFactory)
///
///
QItemEditorFactory* q_itemeditorfactory_default_factory() {
    return QItemEditorFactory_DefaultFactory();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemeditorfactory.html#setDefaultFactory)
///
/// ``` QItemEditorFactory* factory ```
void q_itemeditorfactory_set_default_factory(void* factory) {
    QItemEditorFactory_SetDefaultFactory((QItemEditorFactory*)factory);
}

/// Delete this object from C++ memory.
///
/// ``` QItemEditorFactory* self ```
void q_itemeditorfactory_delete(void* self) {
    QItemEditorFactory_Delete((QItemEditorFactory*)(self));
}