#include "libabstractformwindow.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libabstractformwindowcursor.hpp"
#include "libabstractformwindowcursor.h"

QDesignerFormWindowCursorInterface* q_designerformwindowcursorinterface_new() {
    return QDesignerFormWindowCursorInterface_new();
}

QDesignerFormWindowInterface* q_designerformwindowcursorinterface_form_window(void* self) {
    return QDesignerFormWindowCursorInterface_FormWindow((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)()) {
    QDesignerFormWindowCursorInterface_OnFormWindow((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QDesignerFormWindowInterface* q_designerformwindowcursorinterface_qbase_form_window(void* self) {
    return QDesignerFormWindowCursorInterface_QBaseFormWindow((QDesignerFormWindowCursorInterface*)self);
}

bool q_designerformwindowcursorinterface_move_position(void* self, int32_t op, int32_t mode) {
    return QDesignerFormWindowCursorInterface_MovePosition((QDesignerFormWindowCursorInterface*)self, op, mode);
}

void q_designerformwindowcursorinterface_on_move_position(void* self, bool (*callback)(void*, int32_t, int32_t)) {
    QDesignerFormWindowCursorInterface_OnMovePosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowcursorinterface_qbase_move_position(void* self, int32_t op, int32_t mode) {
    return QDesignerFormWindowCursorInterface_QBaseMovePosition((QDesignerFormWindowCursorInterface*)self, op, mode);
}

int32_t q_designerformwindowcursorinterface_position(void* self) {
    return QDesignerFormWindowCursorInterface_Position((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_position(void* self, int32_t (*callback)()) {
    QDesignerFormWindowCursorInterface_OnPosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_qbase_position(void* self) {
    return QDesignerFormWindowCursorInterface_QBasePosition((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_set_position(void* self, int pos, int32_t mode) {
    QDesignerFormWindowCursorInterface_SetPosition((QDesignerFormWindowCursorInterface*)self, pos, mode);
}

void q_designerformwindowcursorinterface_on_set_position(void* self, void (*callback)(void*, int, int32_t)) {
    QDesignerFormWindowCursorInterface_OnSetPosition((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_qbase_set_position(void* self, int pos, int32_t mode) {
    QDesignerFormWindowCursorInterface_QBaseSetPosition((QDesignerFormWindowCursorInterface*)self, pos, mode);
}

QWidget* q_designerformwindowcursorinterface_current(void* self) {
    return QDesignerFormWindowCursorInterface_Current((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_current(void* self, QWidget* (*callback)()) {
    QDesignerFormWindowCursorInterface_OnCurrent((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_qbase_current(void* self) {
    return QDesignerFormWindowCursorInterface_QBaseCurrent((QDesignerFormWindowCursorInterface*)self);
}

int32_t q_designerformwindowcursorinterface_widget_count(void* self) {
    return QDesignerFormWindowCursorInterface_WidgetCount((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_widget_count(void* self, int32_t (*callback)()) {
    QDesignerFormWindowCursorInterface_OnWidgetCount((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_qbase_widget_count(void* self) {
    return QDesignerFormWindowCursorInterface_QBaseWidgetCount((QDesignerFormWindowCursorInterface*)self);
}

QWidget* q_designerformwindowcursorinterface_widget(void* self, int index) {
    return QDesignerFormWindowCursorInterface_Widget((QDesignerFormWindowCursorInterface*)self, index);
}

void q_designerformwindowcursorinterface_on_widget(void* self, QWidget* (*callback)(void*, int)) {
    QDesignerFormWindowCursorInterface_OnWidget((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_qbase_widget(void* self, int index) {
    return QDesignerFormWindowCursorInterface_QBaseWidget((QDesignerFormWindowCursorInterface*)self, index);
}

bool q_designerformwindowcursorinterface_has_selection(void* self) {
    return QDesignerFormWindowCursorInterface_HasSelection((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_has_selection(void* self, bool (*callback)()) {
    QDesignerFormWindowCursorInterface_OnHasSelection((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowcursorinterface_qbase_has_selection(void* self) {
    return QDesignerFormWindowCursorInterface_QBaseHasSelection((QDesignerFormWindowCursorInterface*)self);
}

int32_t q_designerformwindowcursorinterface_selected_widget_count(void* self) {
    return QDesignerFormWindowCursorInterface_SelectedWidgetCount((QDesignerFormWindowCursorInterface*)self);
}

void q_designerformwindowcursorinterface_on_selected_widget_count(void* self, int32_t (*callback)()) {
    QDesignerFormWindowCursorInterface_OnSelectedWidgetCount((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowcursorinterface_qbase_selected_widget_count(void* self) {
    return QDesignerFormWindowCursorInterface_QBaseSelectedWidgetCount((QDesignerFormWindowCursorInterface*)self);
}

QWidget* q_designerformwindowcursorinterface_selected_widget(void* self, int index) {
    return QDesignerFormWindowCursorInterface_SelectedWidget((QDesignerFormWindowCursorInterface*)self, index);
}

void q_designerformwindowcursorinterface_on_selected_widget(void* self, QWidget* (*callback)(void*, int)) {
    QDesignerFormWindowCursorInterface_OnSelectedWidget((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

QWidget* q_designerformwindowcursorinterface_qbase_selected_widget(void* self, int index) {
    return QDesignerFormWindowCursorInterface_QBaseSelectedWidget((QDesignerFormWindowCursorInterface*)self, index);
}

void q_designerformwindowcursorinterface_set_property(void* self, const char* name, void* value) {
    QDesignerFormWindowCursorInterface_SetProperty((QDesignerFormWindowCursorInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_on_set_property(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerFormWindowCursorInterface_OnSetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_qbase_set_property(void* self, const char* name, void* value) {
    QDesignerFormWindowCursorInterface_QBaseSetProperty((QDesignerFormWindowCursorInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_set_widget_property(void* self, void* widget, const char* name, void* value) {
    QDesignerFormWindowCursorInterface_SetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_on_set_widget_property(void* self, void (*callback)(void*, void*, const char*, void*)) {
    QDesignerFormWindowCursorInterface_OnSetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_qbase_set_widget_property(void* self, void* widget, const char* name, void* value) {
    QDesignerFormWindowCursorInterface_QBaseSetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name), (QVariant*)value);
}

void q_designerformwindowcursorinterface_reset_widget_property(void* self, void* widget, const char* name) {
    QDesignerFormWindowCursorInterface_ResetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name));
}

void q_designerformwindowcursorinterface_on_reset_widget_property(void* self, void (*callback)(void*, void*, const char*)) {
    QDesignerFormWindowCursorInterface_OnResetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (intptr_t)callback);
}

void q_designerformwindowcursorinterface_qbase_reset_widget_property(void* self, void* widget, const char* name) {
    QDesignerFormWindowCursorInterface_QBaseResetWidgetProperty((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget, qstring(name));
}

bool q_designerformwindowcursorinterface_is_widget_selected(void* self, void* widget) {
    return QDesignerFormWindowCursorInterface_IsWidgetSelected((QDesignerFormWindowCursorInterface*)self, (QWidget*)widget);
}

void q_designerformwindowcursorinterface_delete(void* self) {
    QDesignerFormWindowCursorInterface_Delete((QDesignerFormWindowCursorInterface*)(self));
}
