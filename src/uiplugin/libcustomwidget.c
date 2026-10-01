#include "../designer/libabstractformeditor.hpp"
#include "../libqicon.hpp"
#include "../libqwidget.hpp"
#include "libcustomwidget.hpp"
#include "libcustomwidget.h"

bool q_designercustomwidgetinterface_is_initialized(const void* self) {
    return QDesignerCustomWidgetInterface_IsInitialized((QDesignerCustomWidgetInterface*)self);
}

void q_designercustomwidgetinterface_initialize(void* self, void* core) {
    QDesignerCustomWidgetInterface_Initialize((QDesignerCustomWidgetInterface*)self, (QDesignerFormEditorInterface*)core);
}

const char* q_designercustomwidgetinterface_dom_xml(const void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_DomXml((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designercustomwidgetinterface_code_template(const void* self) {
    libqt_string _str = QDesignerCustomWidgetInterface_CodeTemplate((QDesignerCustomWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designercustomwidgetinterface_operator_assign(void* self, const void* param1) {
    QDesignerCustomWidgetInterface_OperatorAssign((QDesignerCustomWidgetInterface*)self, (QDesignerCustomWidgetInterface*)param1);
}

void q_designercustomwidgetinterface_delete(void* self) {
    QDesignerCustomWidgetInterface_Delete((QDesignerCustomWidgetInterface*)(self));
}

void q_designercustomwidgetcollectioninterface_operator_assign(void* self, const void* param1) {
    QDesignerCustomWidgetCollectionInterface_OperatorAssign((QDesignerCustomWidgetCollectionInterface*)self, (QDesignerCustomWidgetCollectionInterface*)param1);
}

void q_designercustomwidgetcollectioninterface_delete(void* self) {
    QDesignerCustomWidgetCollectionInterface_Delete((QDesignerCustomWidgetCollectionInterface*)(self));
}
