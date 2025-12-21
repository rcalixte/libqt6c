#include "../libqwidget.hpp"
#include "libabstractoptionspage.hpp"
#include "libabstractoptionspage.h"

QDesignerOptionsPageInterface* q_designeroptionspageinterface_new() {
    return QDesignerOptionsPageInterface_new();
}

const char* q_designeroptionspageinterface_name(void* self) {
    libqt_string _str = QDesignerOptionsPageInterface_Name((QDesignerOptionsPageInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designeroptionspageinterface_on_name(void* self, const char* (*callback)()) {
    QDesignerOptionsPageInterface_OnName((QDesignerOptionsPageInterface*)self, (intptr_t)callback);
}

const char* q_designeroptionspageinterface_qbase_name(void* self) {
    libqt_string _str = QDesignerOptionsPageInterface_QBaseName((QDesignerOptionsPageInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_designeroptionspageinterface_create_page(void* self, void* parent) {
    return QDesignerOptionsPageInterface_CreatePage((QDesignerOptionsPageInterface*)self, (QWidget*)parent);
}

void q_designeroptionspageinterface_on_create_page(void* self, QWidget* (*callback)(void*, void*)) {
    QDesignerOptionsPageInterface_OnCreatePage((QDesignerOptionsPageInterface*)self, (intptr_t)callback);
}

QWidget* q_designeroptionspageinterface_qbase_create_page(void* self, void* parent) {
    return QDesignerOptionsPageInterface_QBaseCreatePage((QDesignerOptionsPageInterface*)self, (QWidget*)parent);
}

void q_designeroptionspageinterface_apply(void* self) {
    QDesignerOptionsPageInterface_Apply((QDesignerOptionsPageInterface*)self);
}

void q_designeroptionspageinterface_on_apply(void* self, void (*callback)()) {
    QDesignerOptionsPageInterface_OnApply((QDesignerOptionsPageInterface*)self, (intptr_t)callback);
}

void q_designeroptionspageinterface_qbase_apply(void* self) {
    QDesignerOptionsPageInterface_QBaseApply((QDesignerOptionsPageInterface*)self);
}

void q_designeroptionspageinterface_finish(void* self) {
    QDesignerOptionsPageInterface_Finish((QDesignerOptionsPageInterface*)self);
}

void q_designeroptionspageinterface_on_finish(void* self, void (*callback)()) {
    QDesignerOptionsPageInterface_OnFinish((QDesignerOptionsPageInterface*)self, (intptr_t)callback);
}

void q_designeroptionspageinterface_qbase_finish(void* self) {
    QDesignerOptionsPageInterface_QBaseFinish((QDesignerOptionsPageInterface*)self);
}

void q_designeroptionspageinterface_delete(void* self) {
    QDesignerOptionsPageInterface_Delete((QDesignerOptionsPageInterface*)(self));
}
