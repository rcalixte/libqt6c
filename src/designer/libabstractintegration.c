#include "../libqcoreevent.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformwindow.hpp"
#include "libabstractresourcebrowser.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libabstractintegration.hpp"
#include "libabstractintegration.h"

QDesignerIntegrationInterface* q_designerintegrationinterface_new(void* core) {
    return QDesignerIntegrationInterface_new((QDesignerFormEditorInterface*)core);
}

QDesignerIntegrationInterface* q_designerintegrationinterface_new2(void* core, void* parent) {
    return QDesignerIntegrationInterface_new2((QDesignerFormEditorInterface*)core, (QObject*)parent);
}

const QMetaObject* q_designerintegrationinterface_meta_object(void* self) {
    return QDesignerIntegrationInterface_MetaObject((QDesignerIntegrationInterface*)self);
}

void* q_designerintegrationinterface_metacast(void* self, const char* param1) {
    return QDesignerIntegrationInterface_Metacast((QDesignerIntegrationInterface*)self, param1);
}

int32_t q_designerintegrationinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegrationInterface_Metacall((QDesignerIntegrationInterface*)self, param1, param2, param3);
}

void q_designerintegrationinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerIntegrationInterface_OnMetacall((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegrationInterface_QBaseMetacall((QDesignerIntegrationInterface*)self, param1, param2, param3);
}

const char* q_designerintegrationinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerFormEditorInterface* q_designerintegrationinterface_core(void* self) {
    return QDesignerIntegrationInterface_Core((QDesignerIntegrationInterface*)self);
}

QWidget* q_designerintegrationinterface_container_window(void* self, void* widget) {
    return QDesignerIntegrationInterface_ContainerWindow((QDesignerIntegrationInterface*)self, (QWidget*)widget);
}

void q_designerintegrationinterface_on_container_window(void* self, QWidget* (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnContainerWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

QWidget* q_designerintegrationinterface_qbase_container_window(void* self, void* widget) {
    return QDesignerIntegrationInterface_QBaseContainerWindow((QDesignerIntegrationInterface*)self, (QWidget*)widget);
}

QDesignerResourceBrowserInterface* q_designerintegrationinterface_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegrationInterface_CreateResourceBrowser((QDesignerIntegrationInterface*)self, (QWidget*)parent);
}

void q_designerintegrationinterface_on_create_resource_browser(void* self, QDesignerResourceBrowserInterface* (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnCreateResourceBrowser((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

QDesignerResourceBrowserInterface* q_designerintegrationinterface_qbase_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegrationInterface_QBaseCreateResourceBrowser((QDesignerIntegrationInterface*)self, (QWidget*)parent);
}

const char* q_designerintegrationinterface_header_suffix(void* self) {
    libqt_string _str = QDesignerIntegrationInterface_HeaderSuffix((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_on_header_suffix(void* self, const char* (*callback)()) {
    QDesignerIntegrationInterface_OnHeaderSuffix((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const char* q_designerintegrationinterface_qbase_header_suffix(void* self) {
    libqt_string _str = QDesignerIntegrationInterface_QBaseHeaderSuffix((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegrationInterface_SetHeaderSuffix((QDesignerIntegrationInterface*)self, qstring(headerSuffix));
}

void q_designerintegrationinterface_on_set_header_suffix(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnSetHeaderSuffix((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegrationInterface_QBaseSetHeaderSuffix((QDesignerIntegrationInterface*)self, qstring(headerSuffix));
}

bool q_designerintegrationinterface_is_header_lowercase(void* self) {
    return QDesignerIntegrationInterface_IsHeaderLowercase((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_is_header_lowercase(void* self, bool (*callback)()) {
    QDesignerIntegrationInterface_OnIsHeaderLowercase((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_qbase_is_header_lowercase(void* self) {
    return QDesignerIntegrationInterface_QBaseIsHeaderLowercase((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegrationInterface_SetHeaderLowercase((QDesignerIntegrationInterface*)self, headerLowerCase);
}

void q_designerintegrationinterface_on_set_header_lowercase(void* self, void (*callback)(void*, bool)) {
    QDesignerIntegrationInterface_OnSetHeaderLowercase((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegrationInterface_QBaseSetHeaderLowercase((QDesignerIntegrationInterface*)self, headerLowerCase);
}

int32_t q_designerintegrationinterface_features(void* self) {
    return QDesignerIntegrationInterface_Features((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_features(void* self, int32_t (*callback)()) {
    QDesignerIntegrationInterface_OnFeatures((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_qbase_features(void* self) {
    return QDesignerIntegrationInterface_QBaseFeatures((QDesignerIntegrationInterface*)self);
}

bool q_designerintegrationinterface_has_feature(void* self, int32_t f) {
    return QDesignerIntegrationInterface_HasFeature((QDesignerIntegrationInterface*)self, f);
}

int32_t q_designerintegrationinterface_resource_file_watcher_behaviour(void* self) {
    return QDesignerIntegrationInterface_ResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_resource_file_watcher_behaviour(void* self, int32_t (*callback)()) {
    QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_qbase_resource_file_watcher_behaviour(void* self) {
    return QDesignerIntegrationInterface_QBaseResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, behaviour);
}

void q_designerintegrationinterface_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegrationInterface_QBaseSetResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, behaviour);
}

const char* q_designerintegrationinterface_context_help_id(void* self) {
    libqt_string _str = QDesignerIntegrationInterface_ContextHelpId((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_on_context_help_id(void* self, const char* (*callback)()) {
    QDesignerIntegrationInterface_OnContextHelpId((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const char* q_designerintegrationinterface_qbase_context_help_id(void* self) {
    libqt_string _str = QDesignerIntegrationInterface_QBaseContextHelpId((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_emit_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_EmitObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegrationinterface_emit_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegrationinterface_emit_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i) {
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    }
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_EmitNavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegrationinterface_emit_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_EmitNavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

void q_designerintegrationinterface_emit_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_EmitHelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegrationinterface_property_changed(void* self, void* formWindow, const char* name, void* value) {
    QDesignerIntegrationInterface_PropertyChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_ObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegrationinterface_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_HelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegrationinterface_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegrationinterface_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i) {
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    }
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_NavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegrationinterface_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_NavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

void q_designerintegrationinterface_set_features(void* self, int32_t f) {
    QDesignerIntegrationInterface_SetFeatures((QDesignerIntegrationInterface*)self, f);
}

void q_designerintegrationinterface_on_set_features(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegrationInterface_OnSetFeatures((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_set_features(void* self, int32_t f) {
    QDesignerIntegrationInterface_QBaseSetFeatures((QDesignerIntegrationInterface*)self, f);
}

void q_designerintegrationinterface_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling) {
    QDesignerIntegrationInterface_UpdateProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegrationinterface_on_update_property(void* self, void (*callback)(void*, const char*, void*, bool)) {
    QDesignerIntegrationInterface_OnUpdateProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling) {
    QDesignerIntegrationInterface_QBaseUpdateProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegrationinterface_update_property2(void* self, const char* name, void* value) {
    QDesignerIntegrationInterface_UpdateProperty2((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_on_update_property2(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerIntegrationInterface_OnUpdateProperty2((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_update_property2(void* self, const char* name, void* value) {
    QDesignerIntegrationInterface_QBaseUpdateProperty2((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_reset_property(void* self, const char* name) {
    QDesignerIntegrationInterface_ResetProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_on_reset_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnResetProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_reset_property(void* self, const char* name) {
    QDesignerIntegrationInterface_QBaseResetProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_add_dynamic_property(void* self, const char* name, void* value) {
    QDesignerIntegrationInterface_AddDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerIntegrationInterface_OnAddDynamicProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_add_dynamic_property(void* self, const char* name, void* value) {
    QDesignerIntegrationInterface_QBaseAddDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegrationInterface_RemoveDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnRemoveDynamicProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegrationInterface_QBaseRemoveDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_UpdateActiveFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_on_update_active_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnUpdateActiveFormWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_QBaseUpdateActiveFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_SetupFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_on_setup_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnSetupFormWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_QBaseSetupFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_update_selection(void* self) {
    QDesignerIntegrationInterface_UpdateSelection((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_update_selection(void* self, void (*callback)()) {
    QDesignerIntegrationInterface_OnUpdateSelection((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_update_selection(void* self) {
    QDesignerIntegrationInterface_QBaseUpdateSelection((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_update_custom_widget_plugins(void* self) {
    QDesignerIntegrationInterface_UpdateCustomWidgetPlugins((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_update_custom_widget_plugins(void* self, void (*callback)()) {
    QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_qbase_update_custom_widget_plugins(void* self) {
    QDesignerIntegrationInterface_QBaseUpdateCustomWidgetPlugins((QDesignerIntegrationInterface*)self);
}

const char* q_designerintegrationinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerintegrationinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerintegrationinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerintegrationinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerintegrationinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerintegrationinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerintegrationinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerintegrationinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerintegrationinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerintegrationinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerintegrationinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_designerintegrationinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerintegrationinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerintegrationinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerintegrationinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerintegrationinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerintegrationinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerintegrationinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerintegrationinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerintegrationinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerintegrationinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designerintegrationinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerintegrationinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerintegrationinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerintegrationinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerintegrationinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegrationinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerintegrationinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerintegrationinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerintegrationinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerintegrationinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerintegrationinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerintegrationinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerintegrationinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_designerintegrationinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_designerintegrationinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_designerintegrationinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerintegrationinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_designerintegrationinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerintegrationinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_event(void* self, void* event) {
    return QDesignerIntegrationInterface_Event((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

bool q_designerintegrationinterface_qbase_event(void* self, void* event) {
    return QDesignerIntegrationInterface_QBaseEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegrationInterface_EventFilter((QDesignerIntegrationInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerintegrationinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegrationInterface_QBaseEventFilter((QDesignerIntegrationInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerintegrationinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerIntegrationInterface_OnEventFilter((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_timer_event(void* self, void* event) {
    QDesignerIntegrationInterface_TimerEvent((QDesignerIntegrationInterface*)self, (QTimerEvent*)event);
}

void q_designerintegrationinterface_qbase_timer_event(void* self, void* event) {
    QDesignerIntegrationInterface_QBaseTimerEvent((QDesignerIntegrationInterface*)self, (QTimerEvent*)event);
}

void q_designerintegrationinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnTimerEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_child_event(void* self, void* event) {
    QDesignerIntegrationInterface_ChildEvent((QDesignerIntegrationInterface*)self, (QChildEvent*)event);
}

void q_designerintegrationinterface_qbase_child_event(void* self, void* event) {
    QDesignerIntegrationInterface_QBaseChildEvent((QDesignerIntegrationInterface*)self, (QChildEvent*)event);
}

void q_designerintegrationinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnChildEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_custom_event(void* self, void* event) {
    QDesignerIntegrationInterface_CustomEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_qbase_custom_event(void* self, void* event) {
    QDesignerIntegrationInterface_QBaseCustomEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnCustomEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_connect_notify(void* self, void* signal) {
    QDesignerIntegrationInterface_ConnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerIntegrationInterface_QBaseConnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnConnectNotify((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_disconnect_notify(void* self, void* signal) {
    QDesignerIntegrationInterface_DisconnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerIntegrationInterface_QBaseDisconnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnDisconnectNotify((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

QObject* q_designerintegrationinterface_sender(void* self) {
    return QDesignerIntegrationInterface_Sender((QDesignerIntegrationInterface*)self);
}

QObject* q_designerintegrationinterface_qbase_sender(void* self) {
    return QDesignerIntegrationInterface_QBaseSender((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerIntegrationInterface_OnSender((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_sender_signal_index(void* self) {
    return QDesignerIntegrationInterface_SenderSignalIndex((QDesignerIntegrationInterface*)self);
}

int32_t q_designerintegrationinterface_qbase_sender_signal_index(void* self) {
    return QDesignerIntegrationInterface_QBaseSenderSignalIndex((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerIntegrationInterface_OnSenderSignalIndex((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_receivers(void* self, const char* signal) {
    return QDesignerIntegrationInterface_Receivers((QDesignerIntegrationInterface*)self, signal);
}

int32_t q_designerintegrationinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerIntegrationInterface_QBaseReceivers((QDesignerIntegrationInterface*)self, signal);
}

void q_designerintegrationinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnReceivers((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerIntegrationInterface_IsSignalConnected((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

bool q_designerintegrationinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerIntegrationInterface_QBaseIsSignalConnected((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnIsSignalConnected((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_delete(void* self) {
    QDesignerIntegrationInterface_Delete((QDesignerIntegrationInterface*)(self));
}

QDesignerIntegration* q_designerintegration_new(void* core) {
    return QDesignerIntegration_new((QDesignerFormEditorInterface*)core);
}

QDesignerIntegration* q_designerintegration_new2(void* core, void* parent) {
    return QDesignerIntegration_new2((QDesignerFormEditorInterface*)core, (QObject*)parent);
}

const QMetaObject* q_designerintegration_meta_object(void* self) {
    return QDesignerIntegration_MetaObject((QDesignerIntegration*)self);
}

void* q_designerintegration_metacast(void* self, const char* param1) {
    return QDesignerIntegration_Metacast((QDesignerIntegration*)self, param1);
}

int32_t q_designerintegration_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegration_Metacall((QDesignerIntegration*)self, param1, param2, param3);
}

void q_designerintegration_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerIntegration_OnMetacall((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegration_QBaseMetacall((QDesignerIntegration*)self, param1, param2, param3);
}

const char* q_designerintegration_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerintegration_header_suffix(void* self) {
    libqt_string _str = QDesignerIntegration_HeaderSuffix((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_on_header_suffix(void* self, const char* (*callback)()) {
    QDesignerIntegration_OnHeaderSuffix((QDesignerIntegration*)self, (intptr_t)callback);
}

const char* q_designerintegration_qbase_header_suffix(void* self) {
    libqt_string _str = QDesignerIntegration_QBaseHeaderSuffix((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegration_SetHeaderSuffix((QDesignerIntegration*)self, qstring(headerSuffix));
}

void q_designerintegration_on_set_header_suffix(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegration_OnSetHeaderSuffix((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegration_QBaseSetHeaderSuffix((QDesignerIntegration*)self, qstring(headerSuffix));
}

bool q_designerintegration_is_header_lowercase(void* self) {
    return QDesignerIntegration_IsHeaderLowercase((QDesignerIntegration*)self);
}

void q_designerintegration_on_is_header_lowercase(void* self, bool (*callback)()) {
    QDesignerIntegration_OnIsHeaderLowercase((QDesignerIntegration*)self, (intptr_t)callback);
}

bool q_designerintegration_qbase_is_header_lowercase(void* self) {
    return QDesignerIntegration_QBaseIsHeaderLowercase((QDesignerIntegration*)self);
}

void q_designerintegration_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegration_SetHeaderLowercase((QDesignerIntegration*)self, headerLowerCase);
}

void q_designerintegration_on_set_header_lowercase(void* self, void (*callback)(void*, bool)) {
    QDesignerIntegration_OnSetHeaderLowercase((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegration_QBaseSetHeaderLowercase((QDesignerIntegration*)self, headerLowerCase);
}

int32_t q_designerintegration_features(void* self) {
    return QDesignerIntegration_Features((QDesignerIntegration*)self);
}

void q_designerintegration_on_features(void* self, int32_t (*callback)()) {
    QDesignerIntegration_OnFeatures((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_qbase_features(void* self) {
    return QDesignerIntegration_QBaseFeatures((QDesignerIntegration*)self);
}

void q_designerintegration_set_features(void* self, int32_t f) {
    QDesignerIntegration_SetFeatures((QDesignerIntegration*)self, f);
}

void q_designerintegration_on_set_features(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegration_OnSetFeatures((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_set_features(void* self, int32_t f) {
    QDesignerIntegration_QBaseSetFeatures((QDesignerIntegration*)self, f);
}

int32_t q_designerintegration_resource_file_watcher_behaviour(void* self) {
    return QDesignerIntegration_ResourceFileWatcherBehaviour((QDesignerIntegration*)self);
}

void q_designerintegration_on_resource_file_watcher_behaviour(void* self, int32_t (*callback)()) {
    QDesignerIntegration_OnResourceFileWatcherBehaviour((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_qbase_resource_file_watcher_behaviour(void* self) {
    return QDesignerIntegration_QBaseResourceFileWatcherBehaviour((QDesignerIntegration*)self);
}

void q_designerintegration_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegration_SetResourceFileWatcherBehaviour((QDesignerIntegration*)self, behaviour);
}

void q_designerintegration_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegration_OnSetResourceFileWatcherBehaviour((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegration_QBaseSetResourceFileWatcherBehaviour((QDesignerIntegration*)self, behaviour);
}

QWidget* q_designerintegration_container_window(void* self, void* widget) {
    return QDesignerIntegration_ContainerWindow((QDesignerIntegration*)self, (QWidget*)widget);
}

void q_designerintegration_on_container_window(void* self, QWidget* (*callback)(void*, void*)) {
    QDesignerIntegration_OnContainerWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

QWidget* q_designerintegration_qbase_container_window(void* self, void* widget) {
    return QDesignerIntegration_QBaseContainerWindow((QDesignerIntegration*)self, (QWidget*)widget);
}

void q_designerintegration_initialize_plugins(void* formEditor) {
    QDesignerIntegration_InitializePlugins((QDesignerFormEditorInterface*)formEditor);
}

QDesignerResourceBrowserInterface* q_designerintegration_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegration_CreateResourceBrowser((QDesignerIntegration*)self, (QWidget*)parent);
}

void q_designerintegration_on_create_resource_browser(void* self, QDesignerResourceBrowserInterface* (*callback)(void*, void*)) {
    QDesignerIntegration_OnCreateResourceBrowser((QDesignerIntegration*)self, (intptr_t)callback);
}

QDesignerResourceBrowserInterface* q_designerintegration_qbase_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegration_QBaseCreateResourceBrowser((QDesignerIntegration*)self, (QWidget*)parent);
}

const char* q_designerintegration_context_help_id(void* self) {
    libqt_string _str = QDesignerIntegration_ContextHelpId((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_on_context_help_id(void* self, const char* (*callback)()) {
    QDesignerIntegration_OnContextHelpId((QDesignerIntegration*)self, (intptr_t)callback);
}

const char* q_designerintegration_qbase_context_help_id(void* self) {
    libqt_string _str = QDesignerIntegration_QBaseContextHelpId((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling) {
    QDesignerIntegration_UpdateProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegration_on_update_property(void* self, void (*callback)(void*, const char*, void*, bool)) {
    QDesignerIntegration_OnUpdateProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling) {
    QDesignerIntegration_QBaseUpdateProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegration_update_property2(void* self, const char* name, void* value) {
    QDesignerIntegration_UpdateProperty2((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_on_update_property2(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerIntegration_OnUpdateProperty2((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_update_property2(void* self, const char* name, void* value) {
    QDesignerIntegration_QBaseUpdateProperty2((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_reset_property(void* self, const char* name) {
    QDesignerIntegration_ResetProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_on_reset_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegration_OnResetProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_reset_property(void* self, const char* name) {
    QDesignerIntegration_QBaseResetProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_add_dynamic_property(void* self, const char* name, void* value) {
    QDesignerIntegration_AddDynamicProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, void*)) {
    QDesignerIntegration_OnAddDynamicProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_add_dynamic_property(void* self, const char* name, void* value) {
    QDesignerIntegration_QBaseAddDynamicProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegration_RemoveDynamicProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegration_OnRemoveDynamicProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegration_QBaseRemoveDynamicProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegration_UpdateActiveFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_on_update_active_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnUpdateActiveFormWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegration_QBaseUpdateActiveFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegration_SetupFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_on_setup_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnSetupFormWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegration_QBaseSetupFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_update_selection(void* self) {
    QDesignerIntegration_UpdateSelection((QDesignerIntegration*)self);
}

void q_designerintegration_on_update_selection(void* self, void (*callback)()) {
    QDesignerIntegration_OnUpdateSelection((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_update_selection(void* self) {
    QDesignerIntegration_QBaseUpdateSelection((QDesignerIntegration*)self);
}

void q_designerintegration_update_custom_widget_plugins(void* self) {
    QDesignerIntegration_UpdateCustomWidgetPlugins((QDesignerIntegration*)self);
}

void q_designerintegration_on_update_custom_widget_plugins(void* self, void (*callback)()) {
    QDesignerIntegration_OnUpdateCustomWidgetPlugins((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_qbase_update_custom_widget_plugins(void* self) {
    QDesignerIntegration_QBaseUpdateCustomWidgetPlugins((QDesignerIntegration*)self);
}

const char* q_designerintegration_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerintegration_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerFormEditorInterface* q_designerintegration_core(void* self) {
    return QDesignerIntegrationInterface_Core((QDesignerIntegrationInterface*)self);
}

bool q_designerintegration_has_feature(void* self, int32_t f) {
    return QDesignerIntegrationInterface_HasFeature((QDesignerIntegrationInterface*)self, f);
}

void q_designerintegration_emit_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_EmitObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegration_emit_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegration_emit_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i) {
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    }
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_EmitNavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegration_emit_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_EmitNavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

void q_designerintegration_emit_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_EmitHelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegration_property_changed(void* self, void* formWindow, const char* name, void* value) {
    QDesignerIntegrationInterface_PropertyChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, qstring(name), (QVariant*)value);
}

void q_designerintegration_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_ObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegration_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_HelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegration_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegration_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i) {
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    }
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_NavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegration_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_NavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

const char* q_designerintegration_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerintegration_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerintegration_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerintegration_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerintegration_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerintegration_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerintegration_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerintegration_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerintegration_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_designerintegration_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerintegration_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerintegration_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerintegration_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerintegration_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerintegration_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerintegration_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerintegration_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerintegration_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerintegration_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designerintegration_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerintegration_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerintegration_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerintegration_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerintegration_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegration_dynamic_property_names\n");
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

QBindingStorage* q_designerintegration_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerintegration_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerintegration_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerintegration_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerintegration_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerintegration_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerintegration_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_designerintegration_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_designerintegration_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_designerintegration_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerintegration_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_designerintegration_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerintegration_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerintegration_event(void* self, void* event) {
    return QDesignerIntegration_Event((QDesignerIntegration*)self, (QEvent*)event);
}

bool q_designerintegration_qbase_event(void* self, void* event) {
    return QDesignerIntegration_QBaseEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegration_OnEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

bool q_designerintegration_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegration_EventFilter((QDesignerIntegration*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerintegration_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegration_QBaseEventFilter((QDesignerIntegration*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerintegration_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerIntegration_OnEventFilter((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_timer_event(void* self, void* event) {
    QDesignerIntegration_TimerEvent((QDesignerIntegration*)self, (QTimerEvent*)event);
}

void q_designerintegration_qbase_timer_event(void* self, void* event) {
    QDesignerIntegration_QBaseTimerEvent((QDesignerIntegration*)self, (QTimerEvent*)event);
}

void q_designerintegration_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnTimerEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_child_event(void* self, void* event) {
    QDesignerIntegration_ChildEvent((QDesignerIntegration*)self, (QChildEvent*)event);
}

void q_designerintegration_qbase_child_event(void* self, void* event) {
    QDesignerIntegration_QBaseChildEvent((QDesignerIntegration*)self, (QChildEvent*)event);
}

void q_designerintegration_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnChildEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_custom_event(void* self, void* event) {
    QDesignerIntegration_CustomEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_qbase_custom_event(void* self, void* event) {
    QDesignerIntegration_QBaseCustomEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnCustomEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_connect_notify(void* self, void* signal) {
    QDesignerIntegration_ConnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_qbase_connect_notify(void* self, void* signal) {
    QDesignerIntegration_QBaseConnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnConnectNotify((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_disconnect_notify(void* self, void* signal) {
    QDesignerIntegration_DisconnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerIntegration_QBaseDisconnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnDisconnectNotify((QDesignerIntegration*)self, (intptr_t)callback);
}

QObject* q_designerintegration_sender(void* self) {
    return QDesignerIntegration_Sender((QDesignerIntegration*)self);
}

QObject* q_designerintegration_qbase_sender(void* self) {
    return QDesignerIntegration_QBaseSender((QDesignerIntegration*)self);
}

void q_designerintegration_on_sender(void* self, QObject* (*callback)()) {
    QDesignerIntegration_OnSender((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_sender_signal_index(void* self) {
    return QDesignerIntegration_SenderSignalIndex((QDesignerIntegration*)self);
}

int32_t q_designerintegration_qbase_sender_signal_index(void* self) {
    return QDesignerIntegration_QBaseSenderSignalIndex((QDesignerIntegration*)self);
}

void q_designerintegration_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerIntegration_OnSenderSignalIndex((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_receivers(void* self, const char* signal) {
    return QDesignerIntegration_Receivers((QDesignerIntegration*)self, signal);
}

int32_t q_designerintegration_qbase_receivers(void* self, const char* signal) {
    return QDesignerIntegration_QBaseReceivers((QDesignerIntegration*)self, signal);
}

void q_designerintegration_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerIntegration_OnReceivers((QDesignerIntegration*)self, (intptr_t)callback);
}

bool q_designerintegration_is_signal_connected(void* self, void* signal) {
    return QDesignerIntegration_IsSignalConnected((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

bool q_designerintegration_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerIntegration_QBaseIsSignalConnected((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegration_OnIsSignalConnected((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_delete(void* self) {
    QDesignerIntegration_Delete((QDesignerIntegration*)(self));
}
