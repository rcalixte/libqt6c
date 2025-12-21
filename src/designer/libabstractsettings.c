#include "../libqvariant.hpp"
#include "libabstractsettings.hpp"
#include "libabstractsettings.h"

QDesignerSettingsInterface* q_designersettingsinterface_new() {
    return QDesignerSettingsInterface_new();
}

void q_designersettingsinterface_begin_group(void* self, const char* prefix) {
    QDesignerSettingsInterface_BeginGroup((QDesignerSettingsInterface*)self, qstring(prefix));
}

void q_designersettingsinterface_on_begin_group(void* self, void (*callback)(void*, const char*)) {
    QDesignerSettingsInterface_OnBeginGroup((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_qbase_begin_group(void* self, const char* prefix) {
    QDesignerSettingsInterface_QBaseBeginGroup((QDesignerSettingsInterface*)self, qstring(prefix));
}

void q_designersettingsinterface_end_group(void* self) {
    QDesignerSettingsInterface_EndGroup((QDesignerSettingsInterface*)self);
}

void q_designersettingsinterface_on_end_group(void* self, void (*callback)()) {
    QDesignerSettingsInterface_OnEndGroup((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_qbase_end_group(void* self) {
    QDesignerSettingsInterface_QBaseEndGroup((QDesignerSettingsInterface*)self);
}

bool q_designersettingsinterface_contains(void* self, const char* key) {
    return QDesignerSettingsInterface_Contains((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_on_contains(void* self, bool (*callback)(void*, const char*)) {
    QDesignerSettingsInterface_OnContains((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

bool q_designersettingsinterface_qbase_contains(void* self, const char* key) {
    return QDesignerSettingsInterface_QBaseContains((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_set_value(void* self, const char* key, void* value) {
    QDesignerSettingsInterface_SetValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)value);
}

void q_designersettingsinterface_on_set_value(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerSettingsInterface_OnSetValue((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_qbase_set_value(void* self, const char* key, void* value) {
    QDesignerSettingsInterface_QBaseSetValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)value);
}

QVariant* q_designersettingsinterface_value(void* self, const char* key, void* defaultValue) {
    return QDesignerSettingsInterface_Value((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)defaultValue);
}

void q_designersettingsinterface_on_value(void* self, QVariant* (*callback)(void*, const char*, void*)) {
    QDesignerSettingsInterface_OnValue((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

QVariant* q_designersettingsinterface_qbase_value(void* self, const char* key, void* defaultValue) {
    return QDesignerSettingsInterface_QBaseValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)defaultValue);
}

void q_designersettingsinterface_remove(void* self, const char* key) {
    QDesignerSettingsInterface_Remove((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_on_remove(void* self, void (*callback)(void*, const char*)) {
    QDesignerSettingsInterface_OnRemove((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_qbase_remove(void* self, const char* key) {
    QDesignerSettingsInterface_QBaseRemove((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_delete(void* self) {
    QDesignerSettingsInterface_Delete((QDesignerSettingsInterface*)(self));
}
