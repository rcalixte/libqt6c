#include "../libqcoreevent.hpp"
#include "libabstractformeditor.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libabstractwidgetdatabase.hpp"
#include "libabstractwidgetdatabase.h"

QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseiteminterface_new() {
    return QDesignerWidgetDataBaseItemInterface_new();
}

const char* q_designerwidgetdatabaseiteminterface_name(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_Name((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_name(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnName((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_name(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseName((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_name(void* self, const char* name) {
    QDesignerWidgetDataBaseItemInterface_SetName((QDesignerWidgetDataBaseItemInterface*)self, qstring(name));
}

void q_designerwidgetdatabaseiteminterface_on_set_name(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetName((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_name(void* self, const char* name) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetName((QDesignerWidgetDataBaseItemInterface*)self, qstring(name));
}

const char* q_designerwidgetdatabaseiteminterface_group(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_Group((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_group(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnGroup((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_group(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseGroup((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_group(void* self, const char* group) {
    QDesignerWidgetDataBaseItemInterface_SetGroup((QDesignerWidgetDataBaseItemInterface*)self, qstring(group));
}

void q_designerwidgetdatabaseiteminterface_on_set_group(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetGroup((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_group(void* self, const char* group) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetGroup((QDesignerWidgetDataBaseItemInterface*)self, qstring(group));
}

const char* q_designerwidgetdatabaseiteminterface_tool_tip(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_ToolTip((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_tool_tip(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnToolTip((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_tool_tip(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseToolTip((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_tool_tip(void* self, const char* toolTip) {
    QDesignerWidgetDataBaseItemInterface_SetToolTip((QDesignerWidgetDataBaseItemInterface*)self, qstring(toolTip));
}

void q_designerwidgetdatabaseiteminterface_on_set_tool_tip(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetToolTip((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_tool_tip(void* self, const char* toolTip) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetToolTip((QDesignerWidgetDataBaseItemInterface*)self, qstring(toolTip));
}

const char* q_designerwidgetdatabaseiteminterface_whats_this(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_WhatsThis((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_whats_this(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnWhatsThis((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_whats_this(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseWhatsThis((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_whats_this(void* self, const char* whatsThis) {
    QDesignerWidgetDataBaseItemInterface_SetWhatsThis((QDesignerWidgetDataBaseItemInterface*)self, qstring(whatsThis));
}

void q_designerwidgetdatabaseiteminterface_on_set_whats_this(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetWhatsThis((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_whats_this(void* self, const char* whatsThis) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetWhatsThis((QDesignerWidgetDataBaseItemInterface*)self, qstring(whatsThis));
}

const char* q_designerwidgetdatabaseiteminterface_include_file(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_IncludeFile((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_include_file(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIncludeFile((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_include_file(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseIncludeFile((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_include_file(void* self, const char* includeFile) {
    QDesignerWidgetDataBaseItemInterface_SetIncludeFile((QDesignerWidgetDataBaseItemInterface*)self, qstring(includeFile));
}

void q_designerwidgetdatabaseiteminterface_on_set_include_file(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetIncludeFile((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_include_file(void* self, const char* includeFile) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetIncludeFile((QDesignerWidgetDataBaseItemInterface*)self, qstring(includeFile));
}

QIcon* q_designerwidgetdatabaseiteminterface_icon(void* self) {
    return QDesignerWidgetDataBaseItemInterface_Icon((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_on_icon(void* self, QIcon* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIcon((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

QIcon* q_designerwidgetdatabaseiteminterface_qbase_icon(void* self) {
    return QDesignerWidgetDataBaseItemInterface_QBaseIcon((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_set_icon(void* self, void* icon) {
    QDesignerWidgetDataBaseItemInterface_SetIcon((QDesignerWidgetDataBaseItemInterface*)self, (QIcon*)icon);
}

void q_designerwidgetdatabaseiteminterface_on_set_icon(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetIcon((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_icon(void* self, void* icon) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetIcon((QDesignerWidgetDataBaseItemInterface*)self, (QIcon*)icon);
}

bool q_designerwidgetdatabaseiteminterface_is_compat(void* self) {
    return QDesignerWidgetDataBaseItemInterface_IsCompat((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_on_is_compat(void* self, bool (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIsCompat((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseiteminterface_qbase_is_compat(void* self) {
    return QDesignerWidgetDataBaseItemInterface_QBaseIsCompat((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_set_compat(void* self, bool compat) {
    QDesignerWidgetDataBaseItemInterface_SetCompat((QDesignerWidgetDataBaseItemInterface*)self, compat);
}

void q_designerwidgetdatabaseiteminterface_on_set_compat(void* self, void (*callback)(void*, bool)) {
    QDesignerWidgetDataBaseItemInterface_OnSetCompat((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_compat(void* self, bool compat) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetCompat((QDesignerWidgetDataBaseItemInterface*)self, compat);
}

bool q_designerwidgetdatabaseiteminterface_is_container(void* self) {
    return QDesignerWidgetDataBaseItemInterface_IsContainer((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_on_is_container(void* self, bool (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIsContainer((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseiteminterface_qbase_is_container(void* self) {
    return QDesignerWidgetDataBaseItemInterface_QBaseIsContainer((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_set_container(void* self, bool container) {
    QDesignerWidgetDataBaseItemInterface_SetContainer((QDesignerWidgetDataBaseItemInterface*)self, container);
}

void q_designerwidgetdatabaseiteminterface_on_set_container(void* self, void (*callback)(void*, bool)) {
    QDesignerWidgetDataBaseItemInterface_OnSetContainer((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_container(void* self, bool container) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetContainer((QDesignerWidgetDataBaseItemInterface*)self, container);
}

bool q_designerwidgetdatabaseiteminterface_is_custom(void* self) {
    return QDesignerWidgetDataBaseItemInterface_IsCustom((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_on_is_custom(void* self, bool (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIsCustom((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseiteminterface_qbase_is_custom(void* self) {
    return QDesignerWidgetDataBaseItemInterface_QBaseIsCustom((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_set_custom(void* self, bool custom) {
    QDesignerWidgetDataBaseItemInterface_SetCustom((QDesignerWidgetDataBaseItemInterface*)self, custom);
}

void q_designerwidgetdatabaseiteminterface_on_set_custom(void* self, void (*callback)(void*, bool)) {
    QDesignerWidgetDataBaseItemInterface_OnSetCustom((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_custom(void* self, bool custom) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetCustom((QDesignerWidgetDataBaseItemInterface*)self, custom);
}

const char* q_designerwidgetdatabaseiteminterface_plugin_path(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_PluginPath((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_plugin_path(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnPluginPath((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_plugin_path(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBasePluginPath((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_plugin_path(void* self, const char* path) {
    QDesignerWidgetDataBaseItemInterface_SetPluginPath((QDesignerWidgetDataBaseItemInterface*)self, qstring(path));
}

void q_designerwidgetdatabaseiteminterface_on_set_plugin_path(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetPluginPath((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_plugin_path(void* self, const char* path) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetPluginPath((QDesignerWidgetDataBaseItemInterface*)self, qstring(path));
}

bool q_designerwidgetdatabaseiteminterface_is_promoted(void* self) {
    return QDesignerWidgetDataBaseItemInterface_IsPromoted((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_on_is_promoted(void* self, bool (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnIsPromoted((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseiteminterface_qbase_is_promoted(void* self) {
    return QDesignerWidgetDataBaseItemInterface_QBaseIsPromoted((QDesignerWidgetDataBaseItemInterface*)self);
}

void q_designerwidgetdatabaseiteminterface_set_promoted(void* self, bool b) {
    QDesignerWidgetDataBaseItemInterface_SetPromoted((QDesignerWidgetDataBaseItemInterface*)self, b);
}

void q_designerwidgetdatabaseiteminterface_on_set_promoted(void* self, void (*callback)(void*, bool)) {
    QDesignerWidgetDataBaseItemInterface_OnSetPromoted((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_promoted(void* self, bool b) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetPromoted((QDesignerWidgetDataBaseItemInterface*)self, b);
}

const char* q_designerwidgetdatabaseiteminterface_extends(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_Extends((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_on_extends(void* self, const char* (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnExtends((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseiteminterface_qbase_extends(void* self) {
    libqt_string _str = QDesignerWidgetDataBaseItemInterface_QBaseExtends((QDesignerWidgetDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseiteminterface_set_extends(void* self, const char* s) {
    QDesignerWidgetDataBaseItemInterface_SetExtends((QDesignerWidgetDataBaseItemInterface*)self, qstring(s));
}

void q_designerwidgetdatabaseiteminterface_on_set_extends(void* self, void (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseItemInterface_OnSetExtends((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_extends(void* self, const char* s) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetExtends((QDesignerWidgetDataBaseItemInterface*)self, qstring(s));
}

void q_designerwidgetdatabaseiteminterface_set_default_property_values(void* self, libqt_list /* of QVariant* */ list) {
    QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self, list);
}

void q_designerwidgetdatabaseiteminterface_on_set_default_property_values(void* self, void (*callback)(void*, QVariant**)) {
    QDesignerWidgetDataBaseItemInterface_OnSetDefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseiteminterface_qbase_set_default_property_values(void* self, libqt_list /* of QVariant* */ list) {
    QDesignerWidgetDataBaseItemInterface_QBaseSetDefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self, list);
}

libqt_list /* of QVariant* */ q_designerwidgetdatabaseiteminterface_default_property_values(void* self) {
    libqt_list _arr = QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self);
    return _arr;
}

void q_designerwidgetdatabaseiteminterface_on_default_property_values(void* self, QVariant** (*callback)()) {
    QDesignerWidgetDataBaseItemInterface_OnDefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self, (intptr_t)callback);
}

libqt_list /* of QVariant* */ q_designerwidgetdatabaseiteminterface_qbase_default_property_values(void* self) {
    libqt_list _arr = QDesignerWidgetDataBaseItemInterface_QBaseDefaultPropertyValues((QDesignerWidgetDataBaseItemInterface*)self);
    return _arr;
}

void q_designerwidgetdatabaseiteminterface_delete(void* self) {
    QDesignerWidgetDataBaseItemInterface_Delete((QDesignerWidgetDataBaseItemInterface*)(self));
}

QDesignerWidgetDataBaseInterface* q_designerwidgetdatabaseinterface_new() {
    return QDesignerWidgetDataBaseInterface_new();
}

QDesignerWidgetDataBaseInterface* q_designerwidgetdatabaseinterface_new2(void* parent) {
    return QDesignerWidgetDataBaseInterface_new2((QObject*)parent);
}

const QMetaObject* q_designerwidgetdatabaseinterface_meta_object(void* self) {
    return QDesignerWidgetDataBaseInterface_MetaObject((QDesignerWidgetDataBaseInterface*)self);
}

void* q_designerwidgetdatabaseinterface_metacast(void* self, const char* param1) {
    return QDesignerWidgetDataBaseInterface_Metacast((QDesignerWidgetDataBaseInterface*)self, param1);
}

int32_t q_designerwidgetdatabaseinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetDataBaseInterface_Metacall((QDesignerWidgetDataBaseInterface*)self, param1, param2, param3);
}

void q_designerwidgetdatabaseinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerWidgetDataBaseInterface_OnMetacall((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerWidgetDataBaseInterface_QBaseMetacall((QDesignerWidgetDataBaseInterface*)self, param1, param2, param3);
}

const char* q_designerwidgetdatabaseinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_designerwidgetdatabaseinterface_count(void* self) {
    return QDesignerWidgetDataBaseInterface_Count((QDesignerWidgetDataBaseInterface*)self);
}

void q_designerwidgetdatabaseinterface_on_count(void* self, int32_t (*callback)()) {
    QDesignerWidgetDataBaseInterface_OnCount((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_qbase_count(void* self) {
    return QDesignerWidgetDataBaseInterface_QBaseCount((QDesignerWidgetDataBaseInterface*)self);
}

QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_item(void* self, int index) {
    return QDesignerWidgetDataBaseInterface_Item((QDesignerWidgetDataBaseInterface*)self, index);
}

void q_designerwidgetdatabaseinterface_on_item(void* self, QDesignerWidgetDataBaseItemInterface* (*callback)(void*, int)) {
    QDesignerWidgetDataBaseInterface_OnItem((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_qbase_item(void* self, int index) {
    return QDesignerWidgetDataBaseInterface_QBaseItem((QDesignerWidgetDataBaseInterface*)self, index);
}

int32_t q_designerwidgetdatabaseinterface_index_of(void* self, void* item) {
    return QDesignerWidgetDataBaseInterface_IndexOf((QDesignerWidgetDataBaseInterface*)self, (QDesignerWidgetDataBaseItemInterface*)item);
}

void q_designerwidgetdatabaseinterface_on_index_of(void* self, int32_t (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnIndexOf((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_qbase_index_of(void* self, void* item) {
    return QDesignerWidgetDataBaseInterface_QBaseIndexOf((QDesignerWidgetDataBaseInterface*)self, (QDesignerWidgetDataBaseItemInterface*)item);
}

void q_designerwidgetdatabaseinterface_insert(void* self, int index, void* item) {
    QDesignerWidgetDataBaseInterface_Insert((QDesignerWidgetDataBaseInterface*)self, index, (QDesignerWidgetDataBaseItemInterface*)item);
}

void q_designerwidgetdatabaseinterface_on_insert(void* self, void (*callback)(void*, int, void*)) {
    QDesignerWidgetDataBaseInterface_OnInsert((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_qbase_insert(void* self, int index, void* item) {
    QDesignerWidgetDataBaseInterface_QBaseInsert((QDesignerWidgetDataBaseInterface*)self, index, (QDesignerWidgetDataBaseItemInterface*)item);
}

void q_designerwidgetdatabaseinterface_append(void* self, void* item) {
    QDesignerWidgetDataBaseInterface_Append((QDesignerWidgetDataBaseInterface*)self, (QDesignerWidgetDataBaseItemInterface*)item);
}

void q_designerwidgetdatabaseinterface_on_append(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnAppend((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_qbase_append(void* self, void* item) {
    QDesignerWidgetDataBaseInterface_QBaseAppend((QDesignerWidgetDataBaseInterface*)self, (QDesignerWidgetDataBaseItemInterface*)item);
}

int32_t q_designerwidgetdatabaseinterface_index_of_object(void* self, void* object, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_IndexOfObject((QDesignerWidgetDataBaseInterface*)self, (QObject*)object, resolveName);
}

void q_designerwidgetdatabaseinterface_on_index_of_object(void* self, int32_t (*callback)(void*, void*, bool)) {
    QDesignerWidgetDataBaseInterface_OnIndexOfObject((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_qbase_index_of_object(void* self, void* object, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_QBaseIndexOfObject((QDesignerWidgetDataBaseInterface*)self, (QObject*)object, resolveName);
}

int32_t q_designerwidgetdatabaseinterface_index_of_class_name(void* self, const char* className, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_IndexOfClassName((QDesignerWidgetDataBaseInterface*)self, qstring(className), resolveName);
}

void q_designerwidgetdatabaseinterface_on_index_of_class_name(void* self, int32_t (*callback)(void*, const char*, bool)) {
    QDesignerWidgetDataBaseInterface_OnIndexOfClassName((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_qbase_index_of_class_name(void* self, const char* className, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_QBaseIndexOfClassName((QDesignerWidgetDataBaseInterface*)self, qstring(className), resolveName);
}

QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_core(void* self) {
    return QDesignerWidgetDataBaseInterface_Core((QDesignerWidgetDataBaseInterface*)self);
}

void q_designerwidgetdatabaseinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerWidgetDataBaseInterface_OnCore((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_qbase_core(void* self) {
    return QDesignerWidgetDataBaseInterface_QBaseCore((QDesignerWidgetDataBaseInterface*)self);
}

bool q_designerwidgetdatabaseinterface_is_container(void* self, void* object) {
    return QDesignerWidgetDataBaseInterface_IsContainer((QDesignerWidgetDataBaseInterface*)self, (QObject*)object);
}

bool q_designerwidgetdatabaseinterface_is_custom(void* self, void* object) {
    return QDesignerWidgetDataBaseInterface_IsCustom((QDesignerWidgetDataBaseInterface*)self, (QObject*)object);
}

void q_designerwidgetdatabaseinterface_changed(void* self) {
    QDesignerWidgetDataBaseInterface_Changed((QDesignerWidgetDataBaseInterface*)self);
}

void q_designerwidgetdatabaseinterface_on_changed(void* self, void (*callback)(void*)) {
    QDesignerWidgetDataBaseInterface_Connect_Changed((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

const char* q_designerwidgetdatabaseinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerwidgetdatabaseinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_designerwidgetdatabaseinterface_is_container2(void* self, void* object, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_IsContainer2((QDesignerWidgetDataBaseInterface*)self, (QObject*)object, resolveName);
}

bool q_designerwidgetdatabaseinterface_is_custom2(void* self, void* object, bool resolveName) {
    return QDesignerWidgetDataBaseInterface_IsCustom2((QDesignerWidgetDataBaseInterface*)self, (QObject*)object, resolveName);
}

const char* q_designerwidgetdatabaseinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerwidgetdatabaseinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerwidgetdatabaseinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerwidgetdatabaseinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerwidgetdatabaseinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerwidgetdatabaseinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerwidgetdatabaseinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerwidgetdatabaseinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerwidgetdatabaseinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerwidgetdatabaseinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerwidgetdatabaseinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerwidgetdatabaseinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerwidgetdatabaseinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerwidgetdatabaseinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designerwidgetdatabaseinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerwidgetdatabaseinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerwidgetdatabaseinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerwidgetdatabaseinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerwidgetdatabaseinterface_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_designerwidgetdatabaseinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerwidgetdatabaseinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerwidgetdatabaseinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerwidgetdatabaseinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerwidgetdatabaseinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerwidgetdatabaseinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_designerwidgetdatabaseinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_designerwidgetdatabaseinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerwidgetdatabaseinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_designerwidgetdatabaseinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerwidgetdatabaseinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseinterface_event(void* self, void* event) {
    return QDesignerWidgetDataBaseInterface_Event((QDesignerWidgetDataBaseInterface*)self, (QEvent*)event);
}

bool q_designerwidgetdatabaseinterface_qbase_event(void* self, void* event) {
    return QDesignerWidgetDataBaseInterface_QBaseEvent((QDesignerWidgetDataBaseInterface*)self, (QEvent*)event);
}

void q_designerwidgetdatabaseinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnEvent((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetDataBaseInterface_EventFilter((QDesignerWidgetDataBaseInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerwidgetdatabaseinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerWidgetDataBaseInterface_QBaseEventFilter((QDesignerWidgetDataBaseInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerwidgetdatabaseinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnEventFilter((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_timer_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_TimerEvent((QDesignerWidgetDataBaseInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetdatabaseinterface_qbase_timer_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_QBaseTimerEvent((QDesignerWidgetDataBaseInterface*)self, (QTimerEvent*)event);
}

void q_designerwidgetdatabaseinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnTimerEvent((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_child_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_ChildEvent((QDesignerWidgetDataBaseInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetdatabaseinterface_qbase_child_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_QBaseChildEvent((QDesignerWidgetDataBaseInterface*)self, (QChildEvent*)event);
}

void q_designerwidgetdatabaseinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnChildEvent((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_custom_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_CustomEvent((QDesignerWidgetDataBaseInterface*)self, (QEvent*)event);
}

void q_designerwidgetdatabaseinterface_qbase_custom_event(void* self, void* event) {
    QDesignerWidgetDataBaseInterface_QBaseCustomEvent((QDesignerWidgetDataBaseInterface*)self, (QEvent*)event);
}

void q_designerwidgetdatabaseinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnCustomEvent((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_connect_notify(void* self, void* signal) {
    QDesignerWidgetDataBaseInterface_ConnectNotify((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetdatabaseinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerWidgetDataBaseInterface_QBaseConnectNotify((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetdatabaseinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnConnectNotify((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetDataBaseInterface_DisconnectNotify((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetdatabaseinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerWidgetDataBaseInterface_QBaseDisconnectNotify((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetdatabaseinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnDisconnectNotify((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

QObject* q_designerwidgetdatabaseinterface_sender(void* self) {
    return QDesignerWidgetDataBaseInterface_Sender((QDesignerWidgetDataBaseInterface*)self);
}

QObject* q_designerwidgetdatabaseinterface_qbase_sender(void* self) {
    return QDesignerWidgetDataBaseInterface_QBaseSender((QDesignerWidgetDataBaseInterface*)self);
}

void q_designerwidgetdatabaseinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerWidgetDataBaseInterface_OnSender((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_sender_signal_index(void* self) {
    return QDesignerWidgetDataBaseInterface_SenderSignalIndex((QDesignerWidgetDataBaseInterface*)self);
}

int32_t q_designerwidgetdatabaseinterface_qbase_sender_signal_index(void* self) {
    return QDesignerWidgetDataBaseInterface_QBaseSenderSignalIndex((QDesignerWidgetDataBaseInterface*)self);
}

void q_designerwidgetdatabaseinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerWidgetDataBaseInterface_OnSenderSignalIndex((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designerwidgetdatabaseinterface_receivers(void* self, const char* signal) {
    return QDesignerWidgetDataBaseInterface_Receivers((QDesignerWidgetDataBaseInterface*)self, signal);
}

int32_t q_designerwidgetdatabaseinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerWidgetDataBaseInterface_QBaseReceivers((QDesignerWidgetDataBaseInterface*)self, signal);
}

void q_designerwidgetdatabaseinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerWidgetDataBaseInterface_OnReceivers((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

bool q_designerwidgetdatabaseinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetDataBaseInterface_IsSignalConnected((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

bool q_designerwidgetdatabaseinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerWidgetDataBaseInterface_QBaseIsSignalConnected((QDesignerWidgetDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designerwidgetdatabaseinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerWidgetDataBaseInterface_OnIsSignalConnected((QDesignerWidgetDataBaseInterface*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerwidgetdatabaseinterface_delete(void* self) {
    QDesignerWidgetDataBaseInterface_Delete((QDesignerWidgetDataBaseInterface*)(self));
}
