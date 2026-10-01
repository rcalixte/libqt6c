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
    return QDesignerIntegrationInterface_New((QDesignerFormEditorInterface*)core);
}

QDesignerIntegrationInterface* q_designerintegrationinterface_new2(void* core, void* parent) {
    return QDesignerIntegrationInterface_New2((QDesignerFormEditorInterface*)core, (QObject*)parent);
}

const QMetaObject* q_designerintegrationinterface_meta_object(const void* self) {
    return QDesignerIntegrationInterface_MetaObject((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnMetaObject((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerintegrationinterface_super_meta_object(const void* self) {
    return QDesignerIntegrationInterface_SuperMetaObject((QDesignerIntegrationInterface*)self);
}

void* q_designerintegrationinterface_metacast(void* self, const char* param1) {
    return QDesignerIntegrationInterface_Metacast((QDesignerIntegrationInterface*)self, param1);
}

void q_designerintegrationinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnMetacast((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void* q_designerintegrationinterface_super_metacast(void* self, const char* param1) {
    return QDesignerIntegrationInterface_SuperMetacast((QDesignerIntegrationInterface*)self, param1);
}

int32_t q_designerintegrationinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegrationInterface_Metacall((QDesignerIntegrationInterface*)self, param1, param2, param3);
}

void q_designerintegrationinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerIntegrationInterface_OnMetacall((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegrationInterface_SuperMetacall((QDesignerIntegrationInterface*)self, param1, param2, param3);
}

const char* q_designerintegrationinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerFormEditorInterface* q_designerintegrationinterface_core(const void* self) {
    return QDesignerIntegrationInterface_Core((QDesignerIntegrationInterface*)self);
}

QWidget* q_designerintegrationinterface_container_window(const void* self, void* widget) {
    return QDesignerIntegrationInterface_ContainerWindow((QDesignerIntegrationInterface*)self, (QWidget*)widget);
}

void q_designerintegrationinterface_on_container_window(const void* self, QWidget* (*callback)(const void*, void*)) {
    QDesignerIntegrationInterface_OnContainerWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

QDesignerResourceBrowserInterface* q_designerintegrationinterface_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegrationInterface_CreateResourceBrowser((QDesignerIntegrationInterface*)self, (QWidget*)parent);
}

void q_designerintegrationinterface_on_create_resource_browser(void* self, QDesignerResourceBrowserInterface* (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnCreateResourceBrowser((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const char* q_designerintegrationinterface_header_suffix(const void* self) {
    libqt_string _str = QDesignerIntegrationInterface_HeaderSuffix((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_on_header_suffix(const void* self, const char* (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnHeaderSuffix((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegrationInterface_SetHeaderSuffix((QDesignerIntegrationInterface*)self, qstring(headerSuffix));
}

void q_designerintegrationinterface_on_set_header_suffix(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnSetHeaderSuffix((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_is_header_lowercase(const void* self) {
    return QDesignerIntegrationInterface_IsHeaderLowercase((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_is_header_lowercase(const void* self, bool (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnIsHeaderLowercase((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegrationInterface_SetHeaderLowercase((QDesignerIntegrationInterface*)self, headerLowerCase);
}

void q_designerintegrationinterface_on_set_header_lowercase(void* self, void (*callback)(void*, bool)) {
    QDesignerIntegrationInterface_OnSetHeaderLowercase((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

int32_t q_designerintegrationinterface_features(const void* self) {
    return QDesignerIntegrationInterface_Features((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_features(const void* self, int32_t (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnFeatures((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_has_feature(const void* self, int32_t f) {
    return QDesignerIntegrationInterface_HasFeature((QDesignerIntegrationInterface*)self, f);
}

int32_t q_designerintegrationinterface_resource_file_watcher_behaviour(const void* self) {
    return QDesignerIntegrationInterface_ResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_resource_file_watcher_behaviour(const void* self, int32_t (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, behaviour);
}

void q_designerintegrationinterface_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const char* q_designerintegrationinterface_context_help_id(const void* self) {
    libqt_string _str = QDesignerIntegrationInterface_ContextHelpId((QDesignerIntegrationInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_on_context_help_id(const void* self, const char* (*callback)(const void*)) {
    QDesignerIntegrationInterface_OnContextHelpId((QDesignerIntegrationInterface*)self, (intptr_t)callback);
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
    for (size_t i = 0; i < parameterNames_len; ++i)
        parameterNames_qstr[i] = qstring(parameterNames[i]);
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

void q_designerintegrationinterface_property_changed(void* self, void* formWindow, const char* name, const void* value) {
    QDesignerIntegrationInterface_PropertyChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_on_property_changed(void* self, void (*callback)(void*, void*, const char*, const void*)) {
    QDesignerIntegrationInterface_Connect_PropertyChanged((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_ObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegrationinterface_on_object_name_changed(void* self, void (*callback)(void*, void*, void*, const char*, const char*)) {
    QDesignerIntegrationInterface_Connect_ObjectNameChanged((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_HelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegrationinterface_on_help_requested(void* self, void (*callback)(void*, const char*, const char*)) {
    QDesignerIntegrationInterface_Connect_HelpRequested((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegrationinterface_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i)
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_NavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegrationinterface_on_navigate_to_slot(void* self, void (*callback)(void*, const char*, const char*, const char**)) {
    QDesignerIntegrationInterface_Connect_NavigateToSlot((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_NavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

void q_designerintegrationinterface_on_navigate_to_slot2(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_Connect_NavigateToSlot2((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_set_features(void* self, int32_t f) {
    QDesignerIntegrationInterface_SetFeatures((QDesignerIntegrationInterface*)self, f);
}

void q_designerintegrationinterface_on_set_features(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegrationInterface_OnSetFeatures((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_update_property(void* self, const char* name, const void* value, bool enableSubPropertyHandling) {
    QDesignerIntegrationInterface_UpdateProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegrationinterface_on_update_property(void* self, void (*callback)(void*, const char*, const void*, bool)) {
    QDesignerIntegrationInterface_OnUpdateProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_update_property2(void* self, const char* name, const void* value) {
    QDesignerIntegrationInterface_UpdateProperty2((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_on_update_property2(void* self, void (*callback)(void*, const char*, const void*)) {
    QDesignerIntegrationInterface_OnUpdateProperty2((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_reset_property(void* self, const char* name) {
    QDesignerIntegrationInterface_ResetProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_on_reset_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnResetProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_add_dynamic_property(void* self, const char* name, const void* value) {
    QDesignerIntegrationInterface_AddDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name), (QVariant*)value);
}

void q_designerintegrationinterface_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, const void*)) {
    QDesignerIntegrationInterface_OnAddDynamicProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegrationInterface_RemoveDynamicProperty((QDesignerIntegrationInterface*)self, qstring(name));
}

void q_designerintegrationinterface_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_OnRemoveDynamicProperty((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_UpdateActiveFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_on_update_active_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnUpdateActiveFormWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegrationInterface_SetupFormWindow((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegrationinterface_on_setup_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnSetupFormWindow((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_update_selection(void* self) {
    QDesignerIntegrationInterface_UpdateSelection((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_update_selection(void* self, void (*callback)(void*)) {
    QDesignerIntegrationInterface_OnUpdateSelection((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_update_custom_widget_plugins(void* self) {
    QDesignerIntegrationInterface_UpdateCustomWidgetPlugins((QDesignerIntegrationInterface*)self);
}

void q_designerintegrationinterface_on_update_custom_widget_plugins(void* self, void (*callback)(void*)) {
    QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins((QDesignerIntegrationInterface*)self, (intptr_t)callback);
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

const char* q_designerintegrationinterface_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegrationinterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerintegrationinterface_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerintegrationinterface_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerintegrationinterface_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerintegrationinterface_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerintegrationinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerintegrationinterface_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerintegrationinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerintegrationinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerintegrationinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerintegrationinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerintegrationinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerintegrationinterface_children(const void* self) {
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

QMetaObject__Connection* q_designerintegrationinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerintegrationinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerintegrationinterface_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerintegrationinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerintegrationinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerintegrationinterface_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerintegrationinterface_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerintegrationinterface_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerintegrationinterface_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerintegrationinterface_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerintegrationinterface_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerintegrationinterface_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerintegrationinterface_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegrationinterface_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_designerintegrationinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerintegrationinterface_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerintegrationinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerintegrationinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerintegrationinterface_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerintegrationinterface_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerintegrationinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerintegrationinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerintegrationinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerintegrationinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerintegrationinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerintegrationinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerintegrationinterface_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerintegrationinterface_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerintegrationinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerintegrationinterface_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

bool q_designerintegrationinterface_super_event(void* self, void* event) {
    return QDesignerIntegrationInterface_SuperEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

bool q_designerintegrationinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegrationInterface_EventFilter((QDesignerIntegrationInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerintegrationinterface_super_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegrationInterface_SuperEventFilter((QDesignerIntegrationInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerintegrationinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerIntegrationInterface_OnEventFilter((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_timer_event(void* self, void* event) {
    QDesignerIntegrationInterface_TimerEvent((QDesignerIntegrationInterface*)self, (QTimerEvent*)event);
}

void q_designerintegrationinterface_super_timer_event(void* self, void* event) {
    QDesignerIntegrationInterface_SuperTimerEvent((QDesignerIntegrationInterface*)self, (QTimerEvent*)event);
}

void q_designerintegrationinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnTimerEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_child_event(void* self, void* event) {
    QDesignerIntegrationInterface_ChildEvent((QDesignerIntegrationInterface*)self, (QChildEvent*)event);
}

void q_designerintegrationinterface_super_child_event(void* self, void* event) {
    QDesignerIntegrationInterface_SuperChildEvent((QDesignerIntegrationInterface*)self, (QChildEvent*)event);
}

void q_designerintegrationinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnChildEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_custom_event(void* self, void* event) {
    QDesignerIntegrationInterface_CustomEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_super_custom_event(void* self, void* event) {
    QDesignerIntegrationInterface_SuperCustomEvent((QDesignerIntegrationInterface*)self, (QEvent*)event);
}

void q_designerintegrationinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegrationInterface_OnCustomEvent((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_connect_notify(void* self, const void* signal) {
    QDesignerIntegrationInterface_ConnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_super_connect_notify(void* self, const void* signal) {
    QDesignerIntegrationInterface_SuperConnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerIntegrationInterface_OnConnectNotify((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegrationinterface_disconnect_notify(void* self, const void* signal) {
    QDesignerIntegrationInterface_DisconnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_super_disconnect_notify(void* self, const void* signal) {
    QDesignerIntegrationInterface_SuperDisconnectNotify((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerIntegrationInterface_OnDisconnectNotify((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

QObject* q_designerintegrationinterface_sender(const void* self) {
    return QDesignerIntegrationInterface_Sender((QDesignerIntegrationInterface*)self);
}

int32_t q_designerintegrationinterface_sender_signal_index(const void* self) {
    return QDesignerIntegrationInterface_SenderSignalIndex((QDesignerIntegrationInterface*)self);
}

int32_t q_designerintegrationinterface_receivers(const void* self, const char* signal) {
    return QDesignerIntegrationInterface_Receivers((QDesignerIntegrationInterface*)self, signal);
}

bool q_designerintegrationinterface_is_signal_connected(const void* self, const void* signal) {
    return QDesignerIntegrationInterface_IsSignalConnected((QDesignerIntegrationInterface*)self, (QMetaMethod*)signal);
}

void q_designerintegrationinterface_delete(void* self) {
    QDesignerIntegrationInterface_Delete((QDesignerIntegrationInterface*)(self));
}

QDesignerIntegration* q_designerintegration_new(void* core) {
    return QDesignerIntegration_New((QDesignerFormEditorInterface*)core);
}

QDesignerIntegration* q_designerintegration_new2(void* core, void* parent) {
    return QDesignerIntegration_New2((QDesignerFormEditorInterface*)core, (QObject*)parent);
}

const QMetaObject* q_designerintegration_meta_object(const void* self) {
    return QDesignerIntegration_MetaObject((QDesignerIntegration*)self);
}

void q_designerintegration_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QDesignerIntegration_OnMetaObject((QDesignerIntegration*)self, (intptr_t)callback);
}

const QMetaObject* q_designerintegration_super_meta_object(const void* self) {
    return QDesignerIntegration_SuperMetaObject((QDesignerIntegration*)self);
}

void* q_designerintegration_metacast(void* self, const char* param1) {
    return QDesignerIntegration_Metacast((QDesignerIntegration*)self, param1);
}

void q_designerintegration_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerIntegration_OnMetacast((QDesignerIntegration*)self, (intptr_t)callback);
}

void* q_designerintegration_super_metacast(void* self, const char* param1) {
    return QDesignerIntegration_SuperMetacast((QDesignerIntegration*)self, param1);
}

int32_t q_designerintegration_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegration_Metacall((QDesignerIntegration*)self, param1, param2, param3);
}

void q_designerintegration_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerIntegration_OnMetacall((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerIntegration_SuperMetacall((QDesignerIntegration*)self, param1, param2, param3);
}

const char* q_designerintegration_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerintegration_header_suffix(const void* self) {
    libqt_string _str = QDesignerIntegration_HeaderSuffix((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_on_header_suffix(const void* self, const char* (*callback)(const void*)) {
    QDesignerIntegration_OnHeaderSuffix((QDesignerIntegration*)self, (intptr_t)callback);
}

const char* q_designerintegration_super_header_suffix(const void* self) {
    libqt_string _str = QDesignerIntegration_SuperHeaderSuffix((QDesignerIntegration*)self);
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

void q_designerintegration_super_set_header_suffix(void* self, const char* headerSuffix) {
    QDesignerIntegration_SuperSetHeaderSuffix((QDesignerIntegration*)self, qstring(headerSuffix));
}

bool q_designerintegration_is_header_lowercase(const void* self) {
    return QDesignerIntegration_IsHeaderLowercase((QDesignerIntegration*)self);
}

void q_designerintegration_on_is_header_lowercase(const void* self, bool (*callback)(const void*)) {
    QDesignerIntegration_OnIsHeaderLowercase((QDesignerIntegration*)self, (intptr_t)callback);
}

bool q_designerintegration_super_is_header_lowercase(const void* self) {
    return QDesignerIntegration_SuperIsHeaderLowercase((QDesignerIntegration*)self);
}

void q_designerintegration_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegration_SetHeaderLowercase((QDesignerIntegration*)self, headerLowerCase);
}

void q_designerintegration_on_set_header_lowercase(void* self, void (*callback)(void*, bool)) {
    QDesignerIntegration_OnSetHeaderLowercase((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_set_header_lowercase(void* self, bool headerLowerCase) {
    QDesignerIntegration_SuperSetHeaderLowercase((QDesignerIntegration*)self, headerLowerCase);
}

int32_t q_designerintegration_features(const void* self) {
    return QDesignerIntegration_Features((QDesignerIntegration*)self);
}

void q_designerintegration_on_features(const void* self, int32_t (*callback)(const void*)) {
    QDesignerIntegration_OnFeatures((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_super_features(const void* self) {
    return QDesignerIntegration_SuperFeatures((QDesignerIntegration*)self);
}

void q_designerintegration_set_features(void* self, int32_t f) {
    QDesignerIntegration_SetFeatures((QDesignerIntegration*)self, f);
}

void q_designerintegration_on_set_features(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegration_OnSetFeatures((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_set_features(void* self, int32_t f) {
    QDesignerIntegration_SuperSetFeatures((QDesignerIntegration*)self, f);
}

int32_t q_designerintegration_resource_file_watcher_behaviour(const void* self) {
    return QDesignerIntegration_ResourceFileWatcherBehaviour((QDesignerIntegration*)self);
}

void q_designerintegration_on_resource_file_watcher_behaviour(const void* self, int32_t (*callback)(const void*)) {
    QDesignerIntegration_OnResourceFileWatcherBehaviour((QDesignerIntegration*)self, (intptr_t)callback);
}

int32_t q_designerintegration_super_resource_file_watcher_behaviour(const void* self) {
    return QDesignerIntegration_SuperResourceFileWatcherBehaviour((QDesignerIntegration*)self);
}

void q_designerintegration_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegration_SetResourceFileWatcherBehaviour((QDesignerIntegration*)self, behaviour);
}

void q_designerintegration_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t)) {
    QDesignerIntegration_OnSetResourceFileWatcherBehaviour((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_set_resource_file_watcher_behaviour(void* self, int32_t behaviour) {
    QDesignerIntegration_SuperSetResourceFileWatcherBehaviour((QDesignerIntegration*)self, behaviour);
}

QWidget* q_designerintegration_container_window(const void* self, void* widget) {
    return QDesignerIntegration_ContainerWindow((QDesignerIntegration*)self, (QWidget*)widget);
}

void q_designerintegration_on_container_window(const void* self, QWidget* (*callback)(const void*, void*)) {
    QDesignerIntegration_OnContainerWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

QWidget* q_designerintegration_super_container_window(const void* self, void* widget) {
    return QDesignerIntegration_SuperContainerWindow((QDesignerIntegration*)self, (QWidget*)widget);
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

QDesignerResourceBrowserInterface* q_designerintegration_super_create_resource_browser(void* self, void* parent) {
    return QDesignerIntegration_SuperCreateResourceBrowser((QDesignerIntegration*)self, (QWidget*)parent);
}

const char* q_designerintegration_context_help_id(const void* self) {
    libqt_string _str = QDesignerIntegration_ContextHelpId((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_on_context_help_id(const void* self, const char* (*callback)(const void*)) {
    QDesignerIntegration_OnContextHelpId((QDesignerIntegration*)self, (intptr_t)callback);
}

const char* q_designerintegration_super_context_help_id(const void* self) {
    libqt_string _str = QDesignerIntegration_SuperContextHelpId((QDesignerIntegration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_update_property(void* self, const char* name, const void* value, bool enableSubPropertyHandling) {
    QDesignerIntegration_UpdateProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegration_on_update_property(void* self, void (*callback)(void*, const char*, const void*, bool)) {
    QDesignerIntegration_OnUpdateProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_update_property(void* self, const char* name, const void* value, bool enableSubPropertyHandling) {
    QDesignerIntegration_SuperUpdateProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value, enableSubPropertyHandling);
}

void q_designerintegration_update_property2(void* self, const char* name, const void* value) {
    QDesignerIntegration_UpdateProperty2((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_on_update_property2(void* self, void (*callback)(void*, const char*, const void*)) {
    QDesignerIntegration_OnUpdateProperty2((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_update_property2(void* self, const char* name, const void* value) {
    QDesignerIntegration_SuperUpdateProperty2((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_reset_property(void* self, const char* name) {
    QDesignerIntegration_ResetProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_on_reset_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegration_OnResetProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_reset_property(void* self, const char* name) {
    QDesignerIntegration_SuperResetProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_add_dynamic_property(void* self, const char* name, const void* value) {
    QDesignerIntegration_AddDynamicProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, const void*)) {
    QDesignerIntegration_OnAddDynamicProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_add_dynamic_property(void* self, const char* name, const void* value) {
    QDesignerIntegration_SuperAddDynamicProperty((QDesignerIntegration*)self, qstring(name), (QVariant*)value);
}

void q_designerintegration_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegration_RemoveDynamicProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegration_OnRemoveDynamicProperty((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_remove_dynamic_property(void* self, const char* name) {
    QDesignerIntegration_SuperRemoveDynamicProperty((QDesignerIntegration*)self, qstring(name));
}

void q_designerintegration_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegration_UpdateActiveFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_on_update_active_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnUpdateActiveFormWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_update_active_form_window(void* self, void* formWindow) {
    QDesignerIntegration_SuperUpdateActiveFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegration_SetupFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_on_setup_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnSetupFormWindow((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_setup_form_window(void* self, void* formWindow) {
    QDesignerIntegration_SuperSetupFormWindow((QDesignerIntegration*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerintegration_update_selection(void* self) {
    QDesignerIntegration_UpdateSelection((QDesignerIntegration*)self);
}

void q_designerintegration_on_update_selection(void* self, void (*callback)(void*)) {
    QDesignerIntegration_OnUpdateSelection((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_update_selection(void* self) {
    QDesignerIntegration_SuperUpdateSelection((QDesignerIntegration*)self);
}

void q_designerintegration_update_custom_widget_plugins(void* self) {
    QDesignerIntegration_UpdateCustomWidgetPlugins((QDesignerIntegration*)self);
}

void q_designerintegration_on_update_custom_widget_plugins(void* self, void (*callback)(void*)) {
    QDesignerIntegration_OnUpdateCustomWidgetPlugins((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_super_update_custom_widget_plugins(void* self) {
    QDesignerIntegration_SuperUpdateCustomWidgetPlugins((QDesignerIntegration*)self);
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

QDesignerFormEditorInterface* q_designerintegration_core(const void* self) {
    return QDesignerIntegrationInterface_Core((QDesignerIntegrationInterface*)self);
}

bool q_designerintegration_has_feature(const void* self, int32_t f) {
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
    for (size_t i = 0; i < parameterNames_len; ++i)
        parameterNames_qstr[i] = qstring(parameterNames[i]);
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

void q_designerintegration_property_changed(void* self, void* formWindow, const char* name, const void* value) {
    QDesignerIntegrationInterface_PropertyChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, qstring(name), (QVariant*)value);
}

void q_designerintegration_on_property_changed(void* self, void (*callback)(void*, void*, const char*, const void*)) {
    QDesignerIntegrationInterface_Connect_PropertyChanged((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegration_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName) {
    QDesignerIntegrationInterface_ObjectNameChanged((QDesignerIntegrationInterface*)self, (QDesignerFormWindowInterface*)formWindow, (QObject*)object, qstring(newName), qstring(oldName));
}

void q_designerintegration_on_object_name_changed(void* self, void (*callback)(void*, void*, void*, const char*, const char*)) {
    QDesignerIntegrationInterface_Connect_ObjectNameChanged((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegration_help_requested(void* self, const char* manual, const char* document) {
    QDesignerIntegrationInterface_HelpRequested((QDesignerIntegrationInterface*)self, qstring(manual), qstring(document));
}

void q_designerintegration_on_help_requested(void* self, void (*callback)(void*, const char*, const char*)) {
    QDesignerIntegrationInterface_Connect_HelpRequested((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegration_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]) {
    size_t parameterNames_len = libqt_strv_length(parameterNames);
    libqt_string* parameterNames_qstr = (libqt_string*)malloc(parameterNames_len * sizeof(libqt_string));
    if (parameterNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegration_navigate_to_slot\n");
        abort();
    }
    for (size_t i = 0; i < parameterNames_len; ++i)
        parameterNames_qstr[i] = qstring(parameterNames[i]);
    libqt_list parameterNames_list = qlist(parameterNames_qstr, parameterNames_len);
    QDesignerIntegrationInterface_NavigateToSlot((QDesignerIntegrationInterface*)self, qstring(objectName), qstring(signalSignature), parameterNames_list);
    free(parameterNames_qstr);
}

void q_designerintegration_on_navigate_to_slot(void* self, void (*callback)(void*, const char*, const char*, const char**)) {
    QDesignerIntegrationInterface_Connect_NavigateToSlot((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

void q_designerintegration_navigate_to_slot2(void* self, const char* slotSignature) {
    QDesignerIntegrationInterface_NavigateToSlot2((QDesignerIntegrationInterface*)self, qstring(slotSignature));
}

void q_designerintegration_on_navigate_to_slot2(void* self, void (*callback)(void*, const char*)) {
    QDesignerIntegrationInterface_Connect_NavigateToSlot2((QDesignerIntegrationInterface*)self, (intptr_t)callback);
}

const char* q_designerintegration_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerintegration_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerintegration_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerintegration_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerintegration_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerintegration_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerintegration_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerintegration_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerintegration_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerintegration_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerintegration_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerintegration_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerintegration_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerintegration_children(const void* self) {
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

QMetaObject__Connection* q_designerintegration_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerintegration_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerintegration_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerintegration_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerintegration_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerintegration_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerintegration_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerintegration_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerintegration_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerintegration_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerintegration_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerintegration_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerintegration_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerintegration_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_designerintegration_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerintegration_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerintegration_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerintegration_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerintegration_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerintegration_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerintegration_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerintegration_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerintegration_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerintegration_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerintegration_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerintegration_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerintegration_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerintegration_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerintegration_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerintegration_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

bool q_designerintegration_super_event(void* self, void* event) {
    return QDesignerIntegration_SuperEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerIntegration_OnEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

bool q_designerintegration_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegration_EventFilter((QDesignerIntegration*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerintegration_super_event_filter(void* self, void* watched, void* event) {
    return QDesignerIntegration_SuperEventFilter((QDesignerIntegration*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerintegration_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerIntegration_OnEventFilter((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_timer_event(void* self, void* event) {
    QDesignerIntegration_TimerEvent((QDesignerIntegration*)self, (QTimerEvent*)event);
}

void q_designerintegration_super_timer_event(void* self, void* event) {
    QDesignerIntegration_SuperTimerEvent((QDesignerIntegration*)self, (QTimerEvent*)event);
}

void q_designerintegration_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnTimerEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_child_event(void* self, void* event) {
    QDesignerIntegration_ChildEvent((QDesignerIntegration*)self, (QChildEvent*)event);
}

void q_designerintegration_super_child_event(void* self, void* event) {
    QDesignerIntegration_SuperChildEvent((QDesignerIntegration*)self, (QChildEvent*)event);
}

void q_designerintegration_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnChildEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_custom_event(void* self, void* event) {
    QDesignerIntegration_CustomEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_super_custom_event(void* self, void* event) {
    QDesignerIntegration_SuperCustomEvent((QDesignerIntegration*)self, (QEvent*)event);
}

void q_designerintegration_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerIntegration_OnCustomEvent((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_connect_notify(void* self, const void* signal) {
    QDesignerIntegration_ConnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_super_connect_notify(void* self, const void* signal) {
    QDesignerIntegration_SuperConnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerIntegration_OnConnectNotify((QDesignerIntegration*)self, (intptr_t)callback);
}

void q_designerintegration_disconnect_notify(void* self, const void* signal) {
    QDesignerIntegration_DisconnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_super_disconnect_notify(void* self, const void* signal) {
    QDesignerIntegration_SuperDisconnectNotify((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerIntegration_OnDisconnectNotify((QDesignerIntegration*)self, (intptr_t)callback);
}

QObject* q_designerintegration_sender(const void* self) {
    return QDesignerIntegration_Sender((QDesignerIntegration*)self);
}

int32_t q_designerintegration_sender_signal_index(const void* self) {
    return QDesignerIntegration_SenderSignalIndex((QDesignerIntegration*)self);
}

int32_t q_designerintegration_receivers(const void* self, const char* signal) {
    return QDesignerIntegration_Receivers((QDesignerIntegration*)self, signal);
}

bool q_designerintegration_is_signal_connected(const void* self, const void* signal) {
    return QDesignerIntegration_IsSignalConnected((QDesignerIntegration*)self, (QMetaMethod*)signal);
}

void q_designerintegration_delete(void* self) {
    QDesignerIntegration_Delete((QDesignerIntegration*)(self));
}
