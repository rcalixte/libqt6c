#include "libqwidget.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqitemeditorfactory.h"

QWidget* q_itemeditorcreatorbase_create_widget(void* self, void* parent) {
    return QItemEditorCreatorBase_CreateWidget((QItemEditorCreatorBase*)self, (QWidget*)parent);
}

char* q_itemeditorcreatorbase_value_property_name(void* self) {
    libqt_string _str = QItemEditorCreatorBase_ValuePropertyName((QItemEditorCreatorBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemeditorcreatorbase_operator_assign(void* self, void* param1) {
    QItemEditorCreatorBase_OperatorAssign((QItemEditorCreatorBase*)self, (QItemEditorCreatorBase*)param1);
}

void q_itemeditorcreatorbase_delete(void* self) {
    QItemEditorCreatorBase_Delete((QItemEditorCreatorBase*)(self));
}

QItemEditorFactory* q_itemeditorfactory_new() {
    return QItemEditorFactory_new();
}

QItemEditorFactory* q_itemeditorfactory_new2(void* param1) {
    return QItemEditorFactory_new2((QItemEditorFactory*)param1);
}

QWidget* q_itemeditorfactory_create_editor(void* self, int userType, void* parent) {
    return QItemEditorFactory_CreateEditor((QItemEditorFactory*)self, userType, (QWidget*)parent);
}

void q_itemeditorfactory_on_create_editor(void* self, QWidget* (*callback)(void*, int, void*)) {
    QItemEditorFactory_OnCreateEditor((QItemEditorFactory*)self, (intptr_t)callback);
}

QWidget* q_itemeditorfactory_qbase_create_editor(void* self, int userType, void* parent) {
    return QItemEditorFactory_QBaseCreateEditor((QItemEditorFactory*)self, userType, (QWidget*)parent);
}

char* q_itemeditorfactory_value_property_name(void* self, int userType) {
    libqt_string _str = QItemEditorFactory_ValuePropertyName((QItemEditorFactory*)self, userType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemeditorfactory_on_value_property_name(void* self, char* (*callback)(void*, int)) {
    QItemEditorFactory_OnValuePropertyName((QItemEditorFactory*)self, (intptr_t)callback);
}

char* q_itemeditorfactory_qbase_value_property_name(void* self, int userType) {
    libqt_string _str = QItemEditorFactory_QBaseValuePropertyName((QItemEditorFactory*)self, userType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemeditorfactory_register_editor(void* self, int userType, void* creator) {
    QItemEditorFactory_RegisterEditor((QItemEditorFactory*)self, userType, (QItemEditorCreatorBase*)creator);
}

const QItemEditorFactory* q_itemeditorfactory_default_factory() {
    return QItemEditorFactory_DefaultFactory();
}

void q_itemeditorfactory_set_default_factory(void* factory) {
    QItemEditorFactory_SetDefaultFactory((QItemEditorFactory*)factory);
}

void q_itemeditorfactory_delete(void* self) {
    QItemEditorFactory_Delete((QItemEditorFactory*)(self));
}
