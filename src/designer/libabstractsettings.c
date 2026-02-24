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

void q_designersettingsinterface_super_begin_group(void* self, const char* prefix) {
    QDesignerSettingsInterface_SuperBeginGroup((QDesignerSettingsInterface*)self, qstring(prefix));
}

void q_designersettingsinterface_end_group(void* self) {
    QDesignerSettingsInterface_EndGroup((QDesignerSettingsInterface*)self);
}

void q_designersettingsinterface_on_end_group(void* self, void (*callback)()) {
    QDesignerSettingsInterface_OnEndGroup((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_super_end_group(void* self) {
    QDesignerSettingsInterface_SuperEndGroup((QDesignerSettingsInterface*)self);
}

bool q_designersettingsinterface_contains(void* self, const char* key) {
    return QDesignerSettingsInterface_Contains((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_on_contains(void* self, bool (*callback)(void*, const char*)) {
    QDesignerSettingsInterface_OnContains((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

bool q_designersettingsinterface_super_contains(void* self, const char* key) {
    return QDesignerSettingsInterface_SuperContains((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_set_value(void* self, const char* key, void* value) {
    QDesignerSettingsInterface_SetValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)value);
}

void q_designersettingsinterface_on_set_value(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerSettingsInterface_OnSetValue((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_super_set_value(void* self, const char* key, void* value) {
    QDesignerSettingsInterface_SuperSetValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)value);
}

QVariant* q_designersettingsinterface_value(void* self, const char* key, void* defaultValue) {
    return QDesignerSettingsInterface_Value((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)defaultValue);
}

void q_designersettingsinterface_on_value(void* self, QVariant* (*callback)(void*, const char*, void*)) {
    QDesignerSettingsInterface_OnValue((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

QVariant* q_designersettingsinterface_super_value(void* self, const char* key, void* defaultValue) {
    return QDesignerSettingsInterface_SuperValue((QDesignerSettingsInterface*)self, qstring(key), (QVariant*)defaultValue);
}

void q_designersettingsinterface_remove(void* self, const char* key) {
    QDesignerSettingsInterface_Remove((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_on_remove(void* self, void (*callback)(void*, const char*)) {
    QDesignerSettingsInterface_OnRemove((QDesignerSettingsInterface*)self, (intptr_t)callback);
}

void q_designersettingsinterface_super_remove(void* self, const char* key) {
    QDesignerSettingsInterface_SuperRemove((QDesignerSettingsInterface*)self, qstring(key));
}

void q_designersettingsinterface_delete(void* self) {
    QDesignerSettingsInterface_Delete((QDesignerSettingsInterface*)(self));
}
