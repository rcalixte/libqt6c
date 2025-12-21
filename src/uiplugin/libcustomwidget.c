#include "../designer/libabstractformeditor.hpp"
#include "../libqicon.hpp"
#include "../libqwidget.hpp"
#include "libcustomwidget.hpp"
#include "libcustomwidget.h"

const char* q_designercustomwidgetinterface_name(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_Name((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_group(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_Group((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_tool_tip(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_ToolTip((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_whats_this(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_WhatsThis((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_include_file(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_IncludeFile((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* q_designercustomwidgetinterface_icon(void* self) {
    return QDesignerCustomWidgetInterface_Icon((QDesignerCustomWidgetInterface*)self);
}

bool q_designercustomwidgetinterface_is_container(void* self) {
    return QDesignerCustomWidgetInterface_IsContainer((QDesignerCustomWidgetInterface*)self);
}

QWidget* q_designercustomwidgetinterface_create_widget(void* self, void* parent) {
    return QDesignerCustomWidgetInterface_CreateWidget((QDesignerCustomWidgetInterface*)self, (QWidget*)parent);
}

bool q_designercustomwidgetinterface_is_initialized(void* self) {
    return QDesignerCustomWidgetInterface_IsInitialized((QDesignerCustomWidgetInterface*)self);
}

void q_designercustomwidgetinterface_initialize(void* self, void* core) {
    QDesignerCustomWidgetInterface_Initialize((QDesignerCustomWidgetInterface*)self, (QDesignerFormEditorInterface*)core);
}

const char* q_designercustomwidgetinterface_dom_xml(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_DomXml((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_code_template(void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_CodeTemplate((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designercustomwidgetinterface_operator_assign(void* self, void* param1) {
    QDesignerCustomWidgetInterface_OperatorAssign((QDesignerCustomWidgetInterface*)self, (QDesignerCustomWidgetInterface*)param1);
}

void q_designercustomwidgetinterface_delete(void* self) {
    QDesignerCustomWidgetInterface_Delete((QDesignerCustomWidgetInterface*)(self));
}

libqt_list /* of QDesignerCustomWidgetInterface* */ q_designercustomwidgetcollectioninterface_custom_widgets(void* self) {
    libqt_list _arr = QDesignerCustomWidgetCollectionInterface_CustomWidgets((QDesignerCustomWidgetCollectionInterface*)self);
    return _arr;
}

void q_designercustomwidgetcollectioninterface_operator_assign(void* self, void* param1) {
    QDesignerCustomWidgetCollectionInterface_OperatorAssign((QDesignerCustomWidgetCollectionInterface*)self, (QDesignerCustomWidgetCollectionInterface*)param1);
}

void q_designercustomwidgetcollectioninterface_delete(void* self) {
    QDesignerCustomWidgetCollectionInterface_Delete((QDesignerCustomWidgetCollectionInterface*)(self));
}
