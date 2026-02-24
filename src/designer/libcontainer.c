#include "../libqwidget.hpp"
#include "libcontainer.hpp"
#include "libcontainer.h"

QDesignerContainerExtension* q_designercontainerextension_new() {
    return QDesignerContainerExtension_new();
}

int32_t q_designercontainerextension_count(void* self) {
    return QDesignerContainerExtension_Count((QDesignerContainerExtension*)self);
}

void q_designercontainerextension_on_count(void* self, int32_t (*callback)()) {
    QDesignerContainerExtension_OnCount((QDesignerContainerExtension*)self, (intptr_t)callback);
}

int32_t q_designercontainerextension_super_count(void* self) {
    return QDesignerContainerExtension_SuperCount((QDesignerContainerExtension*)self);
}

QWidget* q_designercontainerextension_widget(void* self, int index) {
    return QDesignerContainerExtension_Widget((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_on_widget(void* self, QWidget* (*callback)(void*, int)) {
    QDesignerContainerExtension_OnWidget((QDesignerContainerExtension*)self, (intptr_t)callback);
}

QWidget* q_designercontainerextension_super_widget(void* self, int index) {
    return QDesignerContainerExtension_SuperWidget((QDesignerContainerExtension*)self, index);
}

int32_t q_designercontainerextension_current_index(void* self) {
    return QDesignerContainerExtension_CurrentIndex((QDesignerContainerExtension*)self);
}

void q_designercontainerextension_on_current_index(void* self, int32_t (*callback)()) {
    QDesignerContainerExtension_OnCurrentIndex((QDesignerContainerExtension*)self, (intptr_t)callback);
}

int32_t q_designercontainerextension_super_current_index(void* self) {
    return QDesignerContainerExtension_SuperCurrentIndex((QDesignerContainerExtension*)self);
}

void q_designercontainerextension_set_current_index(void* self, int index) {
    QDesignerContainerExtension_SetCurrentIndex((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_on_set_current_index(void* self, void (*callback)(void*, int)) {
    QDesignerContainerExtension_OnSetCurrentIndex((QDesignerContainerExtension*)self, (intptr_t)callback);
}

void q_designercontainerextension_super_set_current_index(void* self, int index) {
    QDesignerContainerExtension_SuperSetCurrentIndex((QDesignerContainerExtension*)self, index);
}

bool q_designercontainerextension_can_add_widget(void* self) {
    return QDesignerContainerExtension_CanAddWidget((QDesignerContainerExtension*)self);
}

void q_designercontainerextension_on_can_add_widget(void* self, bool (*callback)()) {
    QDesignerContainerExtension_OnCanAddWidget((QDesignerContainerExtension*)self, (intptr_t)callback);
}

bool q_designercontainerextension_super_can_add_widget(void* self) {
    return QDesignerContainerExtension_SuperCanAddWidget((QDesignerContainerExtension*)self);
}

void q_designercontainerextension_add_widget(void* self, void* widget) {
    QDesignerContainerExtension_AddWidget((QDesignerContainerExtension*)self, (QWidget*)widget);
}

void q_designercontainerextension_on_add_widget(void* self, void (*callback)(void*, void*)) {
    QDesignerContainerExtension_OnAddWidget((QDesignerContainerExtension*)self, (intptr_t)callback);
}

void q_designercontainerextension_super_add_widget(void* self, void* widget) {
    QDesignerContainerExtension_SuperAddWidget((QDesignerContainerExtension*)self, (QWidget*)widget);
}

void q_designercontainerextension_insert_widget(void* self, int index, void* widget) {
    QDesignerContainerExtension_InsertWidget((QDesignerContainerExtension*)self, index, (QWidget*)widget);
}

void q_designercontainerextension_on_insert_widget(void* self, void (*callback)(void*, int, void*)) {
    QDesignerContainerExtension_OnInsertWidget((QDesignerContainerExtension*)self, (intptr_t)callback);
}

void q_designercontainerextension_super_insert_widget(void* self, int index, void* widget) {
    QDesignerContainerExtension_SuperInsertWidget((QDesignerContainerExtension*)self, index, (QWidget*)widget);
}

bool q_designercontainerextension_can_remove(void* self, int index) {
    return QDesignerContainerExtension_CanRemove((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_on_can_remove(void* self, bool (*callback)(void*, int)) {
    QDesignerContainerExtension_OnCanRemove((QDesignerContainerExtension*)self, (intptr_t)callback);
}

bool q_designercontainerextension_super_can_remove(void* self, int index) {
    return QDesignerContainerExtension_SuperCanRemove((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_remove(void* self, int index) {
    QDesignerContainerExtension_Remove((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_on_remove(void* self, void (*callback)(void*, int)) {
    QDesignerContainerExtension_OnRemove((QDesignerContainerExtension*)self, (intptr_t)callback);
}

void q_designercontainerextension_super_remove(void* self, int index) {
    QDesignerContainerExtension_SuperRemove((QDesignerContainerExtension*)self, index);
}

void q_designercontainerextension_delete(void* self) {
    QDesignerContainerExtension_Delete((QDesignerContainerExtension*)(self));
}
