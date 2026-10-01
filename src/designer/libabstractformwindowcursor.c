#include "libabstractformwindow.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libabstractformwindowcursor.hpp"
#include "libabstractformwindowcursor.h"

QDesignerFormWindowCursorInterface* q_designerformwindowcursorinterface_new() {
    return QDesignerFormWindowCursorInterface_New();
}

QDesignerFormWindowInterface* q_designerformwindowcursorinterface_form_window(const void* self) {
    return QDesignerFormWindowCursorInterface_FormWindow((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_form_window(const void* self, QDesignerFormWindowInterface* (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnFormWindow((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowcursorinterface_move_position(void* self, int32_t op, int32_t mode) {
    return QDesignerFormWindowCursorInterface_MovePosition((QDesignerFormWindowCursorInterface*)self, op, mode);
}

void q_designerformwindowcursorinterface_on_move_position(void* self, bool (*callback)(void*, int32_t, int32_t)) {
    QDesignerFormWindowCursorInterface_OnMovePosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_position(const void* self) {
    return QDesignerFormWindowCursorInterface_Position((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_position(const void* self, int32_t (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnPosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_set_position(void* self, int pos, int32_t mode) {
    QDesignerFormWindowCursorInterface_SetPosition((QDesignerFormWindowCursorInterface*)self, pos, mode);
}

void q_designerformwindowcursorinterface_on_set_position(void* self, void (*callback)(void*, int, int32_t)) {
    QDesignerFormWindowCursorInterface_OnSetPosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_current(const void* self) {
    return QDesignerFormWindowCursorInterface_Current((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_current(const void* self, QWidget* (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnCurrent((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_widget_count(const void* self) {
    return QDesignerFormWindowCursorInterface_WidgetCount((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_widget_count(const void* self, int32_t (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnWidgetCount((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_widget(const void* self, int index) {
    return QDesignerFormWindowCursorInterface_Widget((QDesignerFormWindowCursorInterface*)self, index);
}

void q_designerformwindowcursorinterface_on_widget(const void* self, QWidget* (*callback)(const void*, int)) {
    QDesignerFormWindowCursorInterface_OnWidget((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowcursorinterface_has_selection(const void* self) {
    return QDesignerFormWindowCursorInterface_HasSelection((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_has_selection(const void* self, bool (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnHasSelection((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_selected_widget_count(const void* self) {
    return QDesignerFormWindowCursorInterface_SelectedWidgetCount((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_selected_widget_count(const void* self, int32_t (*callback)(const void*)) {
    QDesignerFormWindowCursorInterface_OnSelectedWidgetCount((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_selected_widget(const void* self, int index) {
    return QDesignerFormWindowCursorInterface_SelectedWidget((QDesignerFormWindowCursorInterface*)self, index);
}

void q_designerformwindowcursorinterface_on_selected_widget(const void* self, QWidget* (*callback)(const void*, int)) {
    QDesignerFormWindowCursorInterface_OnSelectedWidget((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_set_property(void* self, const char* name, const void* value) {
    QDesignerFormWindowCursorInterface_SetProperty((QDesignerFormWindowCursorInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_on_set_property(void* self, void (*callback)(void*, const char*, const void*)) {
    QDesignerFormWindowCursorInterface_OnSetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_set_widget_property(void* self, void* widget, const char* name, const void* value) {
    QDesignerFormWindowCursorInterface_SetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_on_set_widget_property(void* self, void (*callback)(void*, void*, const char*, const void*)) {
    QDesignerFormWindowCursorInterface_OnSetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_reset_widget_property(void* self, void* widget, const char* name) {
    QDesignerFormWindowCursorInterface_ResetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name));
}

void q_designerformwindowcursorinterface_on_reset_widget_property(void* self, void (*callback)(void*, void*, const char*)) {
    QDesignerFormWindowCursorInterface_OnResetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowcursorinterface_is_widget_selected(const void* self, void* widget) {
    return QDesignerFormWindowCursorInterface_IsWidgetSelected((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget);
}

void q_designerformwindowcursorinterface_delete(void* self) {
    QDesignerFormWindowCursorInterface_Delete((QDesignerFormWindowCursorInterface*)(self));
}
