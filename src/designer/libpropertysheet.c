#include "../libqvariant.hpp"
#include "libpropertysheet.hpp"
#include "libpropertysheet.h"

QDesignerPropertySheetExtension* q_designerpropertysheetextension_new() {
    return QDesignerPropertySheetExtension_new();
}

int32_t q_designerpropertysheetextension_count(void* self) {
    return QDesignerPropertySheetExtension_Count((QDesignerPropertySheetExtension*)self);
}

void q_designerpropertysheetextension_on_count(void* self, int32_t (*callback)()) {
    QDesignerPropertySheetExtension_OnCount((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

int32_t q_designerpropertysheetextension_qbase_count(void* self) {
    return QDesignerPropertySheetExtension_QBaseCount((QDesignerPropertySheetExtension*)self);
}

int32_t q_designerpropertysheetextension_index_of(void* self, const char* name) {
    return QDesignerPropertySheetExtension_IndexOf((QDesignerPropertySheetExtension*)self, qstring(name));
}

void q_designerpropertysheetextension_on_index_of(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerPropertySheetExtension_OnIndexOf((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

int32_t q_designerpropertysheetextension_qbase_index_of(void* self, const char* name) {
    return QDesignerPropertySheetExtension_QBaseIndexOf((QDesignerPropertySheetExtension*)self, qstring(name));
}

const char* q_designerpropertysheetextension_property_name(void* self, int index) {
    libqt_string _str = QDesignerPropertySheetExtension_PropertyName((QDesignerPropertySheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerpropertysheetextension_on_property_name(void* self, const char* (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnPropertyName((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

const char* q_designerpropertysheetextension_qbase_property_name(void* self, int index) {
    libqt_string _str = QDesignerPropertySheetExtension_QBasePropertyName((QDesignerPropertySheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerpropertysheetextension_property_group(void* self, int index) {
    libqt_string _str = QDesignerPropertySheetExtension_PropertyGroup((QDesignerPropertySheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerpropertysheetextension_on_property_group(void* self, const char* (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnPropertyGroup((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

const char* q_designerpropertysheetextension_qbase_property_group(void* self, int index) {
    libqt_string _str = QDesignerPropertySheetExtension_QBasePropertyGroup((QDesignerPropertySheetExtension*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerpropertysheetextension_set_property_group(void* self, int index, const char* group) {
    QDesignerPropertySheetExtension_SetPropertyGroup((QDesignerPropertySheetExtension*)self, index, qstring(group));
}

void q_designerpropertysheetextension_on_set_property_group(void* self, void (*callback)(void*, int, const char*)) {
    QDesignerPropertySheetExtension_OnSetPropertyGroup((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

void q_designerpropertysheetextension_qbase_set_property_group(void* self, int index, const char* group) {
    QDesignerPropertySheetExtension_QBaseSetPropertyGroup((QDesignerPropertySheetExtension*)self, index, qstring(group));
}

bool q_designerpropertysheetextension_has_reset(void* self, int index) {
    return QDesignerPropertySheetExtension_HasReset((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_has_reset(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnHasReset((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_has_reset(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseHasReset((QDesignerPropertySheetExtension*)self, index);
}

bool q_designerpropertysheetextension_reset(void* self, int index) {
    return QDesignerPropertySheetExtension_Reset((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_reset(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnReset((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_reset(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseReset((QDesignerPropertySheetExtension*)self, index);
}

bool q_designerpropertysheetextension_is_visible(void* self, int index) {
    return QDesignerPropertySheetExtension_IsVisible((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_is_visible(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnIsVisible((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_is_visible(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseIsVisible((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_set_visible(void* self, int index, bool b) {
    QDesignerPropertySheetExtension_SetVisible((QDesignerPropertySheetExtension*)self, index, b);
}

void q_designerpropertysheetextension_on_set_visible(void* self, void (*callback)(void*, int, bool)) {
    QDesignerPropertySheetExtension_OnSetVisible((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

void q_designerpropertysheetextension_qbase_set_visible(void* self, int index, bool b) {
    QDesignerPropertySheetExtension_QBaseSetVisible((QDesignerPropertySheetExtension*)self, index, b);
}

bool q_designerpropertysheetextension_is_attribute(void* self, int index) {
    return QDesignerPropertySheetExtension_IsAttribute((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_is_attribute(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnIsAttribute((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_is_attribute(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseIsAttribute((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_set_attribute(void* self, int index, bool b) {
    QDesignerPropertySheetExtension_SetAttribute((QDesignerPropertySheetExtension*)self, index, b);
}

void q_designerpropertysheetextension_on_set_attribute(void* self, void (*callback)(void*, int, bool)) {
    QDesignerPropertySheetExtension_OnSetAttribute((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

void q_designerpropertysheetextension_qbase_set_attribute(void* self, int index, bool b) {
    QDesignerPropertySheetExtension_QBaseSetAttribute((QDesignerPropertySheetExtension*)self, index, b);
}

QVariant* q_designerpropertysheetextension_property(void* self, int index) {
    return QDesignerPropertySheetExtension_Property((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_property(void* self, QVariant* (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnProperty((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

QVariant* q_designerpropertysheetextension_qbase_property(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseProperty((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_set_property(void* self, int index, void* value) {
    QDesignerPropertySheetExtension_SetProperty((QDesignerPropertySheetExtension*)self, index, (QVariant*)value);
}

void q_designerpropertysheetextension_on_set_property(void* self, void (*callback)(void*, int, void*)) {
    QDesignerPropertySheetExtension_OnSetProperty((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

void q_designerpropertysheetextension_qbase_set_property(void* self, int index, void* value) {
    QDesignerPropertySheetExtension_QBaseSetProperty((QDesignerPropertySheetExtension*)self, index, (QVariant*)value);
}

bool q_designerpropertysheetextension_is_changed(void* self, int index) {
    return QDesignerPropertySheetExtension_IsChanged((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_is_changed(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnIsChanged((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_is_changed(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseIsChanged((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_set_changed(void* self, int index, bool changed) {
    QDesignerPropertySheetExtension_SetChanged((QDesignerPropertySheetExtension*)self, index, changed);
}

void q_designerpropertysheetextension_on_set_changed(void* self, void (*callback)(void*, int, bool)) {
    QDesignerPropertySheetExtension_OnSetChanged((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

void q_designerpropertysheetextension_qbase_set_changed(void* self, int index, bool changed) {
    QDesignerPropertySheetExtension_QBaseSetChanged((QDesignerPropertySheetExtension*)self, index, changed);
}

bool q_designerpropertysheetextension_is_enabled(void* self, int index) {
    return QDesignerPropertySheetExtension_IsEnabled((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_on_is_enabled(void* self, bool (*callback)(void*, int)) {
    QDesignerPropertySheetExtension_OnIsEnabled((QDesignerPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerpropertysheetextension_qbase_is_enabled(void* self, int index) {
    return QDesignerPropertySheetExtension_QBaseIsEnabled((QDesignerPropertySheetExtension*)self, index);
}

void q_designerpropertysheetextension_delete(void* self) {
    QDesignerPropertySheetExtension_Delete((QDesignerPropertySheetExtension*)(self));
}
