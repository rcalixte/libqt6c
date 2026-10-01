#include "../libqcoreevent.hpp"
#include "libabstractactioneditor.hpp"
#include "libabstractformwindowmanager.hpp"
#include "libabstractintegration.hpp"
#include "libabstractmetadatabase.hpp"
#include "libabstractobjectinspector.hpp"
#include "libabstractoptionspage.hpp"
#include "libabstractpromotioninterface.hpp"
#include "libabstractpropertyeditor.hpp"
#include "libabstractsettings.hpp"
#include "libabstractwidgetbox.hpp"
#include "libabstractwidgetdatabase.hpp"
#include "libabstractwidgetfactory.hpp"
#include "libqextensionmanager.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformeditor.h"

QDesignerFormEditorInterface* q_designerformeditorinterface_new() {
    return QDesignerFormEditorInterface_New();
}

QDesignerFormEditorInterface* q_designerformeditorinterface_new2(void* parent) {
    return QDesignerFormEditorInterface_New2((QObject*)parent);
}

const QMetaObject* q_designerformeditorinterface_meta_object(const void* self) {
    return QDesignerFormEditorInterface_MetaObject((QDesignerFormEditorInterface*)self);
}

void q_designerformeditorinterface_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QDesignerFormEditorInterface_OnMetaObject((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerformeditorinterface_super_meta_object(const void* self) {
    return QDesignerFormEditorInterface_SuperMetaObject((QDesignerFormEditorInterface*)self);
}

void* q_designerformeditorinterface_metacast(void* self, const char* param1) {
    return QDesignerFormEditorInterface_Metacast((QDesignerFormEditorInterface*)self, param1);
}

void q_designerformeditorinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerFormEditorInterface_OnMetacast((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void* q_designerformeditorinterface_super_metacast(void* self, const char* param1) {
    return QDesignerFormEditorInterface_SuperMetacast((QDesignerFormEditorInterface*)self, param1);
}

int32_t q_designerformeditorinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormEditorInterface_Metacall((QDesignerFormEditorInterface*)self, param1, param2, param3);
}

void q_designerformeditorinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerFormEditorInterface_OnMetacall((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformeditorinterface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormEditorInterface_SuperMetacall((QDesignerFormEditorInterface*)self, param1, param2, param3);
}

const char* q_designerformeditorinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QExtensionManager* q_designerformeditorinterface_extension_manager(const void* self) {
    return QDesignerFormEditorInterface_ExtensionManager((QDesignerFormEditorInterface*)self);
}

QWidget* q_designerformeditorinterface_top_level(const void* self) {
    return QDesignerFormEditorInterface_TopLevel((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetBoxInterface* q_designerformeditorinterface_widget_box(const void* self) {
    return QDesignerFormEditorInterface_WidgetBox((QDesignerFormEditorInterface*)self);
}

QDesignerPropertyEditorInterface* q_designerformeditorinterface_property_editor(const void* self) {
    return QDesignerFormEditorInterface_PropertyEditor((QDesignerFormEditorInterface*)self);
}

QDesignerObjectInspectorInterface* q_designerformeditorinterface_object_inspector(const void* self) {
    return QDesignerFormEditorInterface_ObjectInspector((QDesignerFormEditorInterface*)self);
}

QDesignerFormWindowManagerInterface* q_designerformeditorinterface_form_window_manager(const void* self) {
    return QDesignerFormEditorInterface_FormWindowManager((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetDataBaseInterface* q_designerformeditorinterface_widget_data_base(const void* self) {
    return QDesignerFormEditorInterface_WidgetDataBase((QDesignerFormEditorInterface*)self);
}

QDesignerMetaDataBaseInterface* q_designerformeditorinterface_meta_data_base(const void* self) {
    return QDesignerFormEditorInterface_MetaDataBase((QDesignerFormEditorInterface*)self);
}

QDesignerPromotionInterface* q_designerformeditorinterface_promotion(const void* self) {
    return QDesignerFormEditorInterface_Promotion((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetFactoryInterface* q_designerformeditorinterface_widget_factory(const void* self) {
    return QDesignerFormEditorInterface_WidgetFactory((QDesignerFormEditorInterface*)self);
}

QDesignerActionEditorInterface* q_designerformeditorinterface_action_editor(const void* self) {
    return QDesignerFormEditorInterface_ActionEditor((QDesignerFormEditorInterface*)self);
}

QDesignerIntegrationInterface* q_designerformeditorinterface_integration(const void* self) {
    return QDesignerFormEditorInterface_Integration((QDesignerFormEditorInterface*)self);
}

QDesignerSettingsInterface* q_designerformeditorinterface_settings_manager(const void* self) {
    return QDesignerFormEditorInterface_SettingsManager((QDesignerFormEditorInterface*)self);
}

const char* q_designerformeditorinterface_resource_location(const void* self) {
    libqt_string _str = QDesignerFormEditorInterface_ResourceLocation((QDesignerFormEditorInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QDesignerOptionsPageInterface* */ q_designerformeditorinterface_options_pages(const void* self) {
    libqt_list _arr = QDesignerFormEditorInterface_OptionsPages((QDesignerFormEditorInterface*)self);
    return _arr;
}

void q_designerformeditorinterface_set_top_level(void* self, void* topLevel) {
    QDesignerFormEditorInterface_SetTopLevel((QDesignerFormEditorInterface*)self, (QWidget*)topLevel);
}

void q_designerformeditorinterface_set_widget_box(void* self, void* widgetBox) {
    QDesignerFormEditorInterface_SetWidgetBox((QDesignerFormEditorInterface*)self, (QDesignerWidgetBoxInterface*)widgetBox);
}

void q_designerformeditorinterface_set_property_editor(void* self, void* propertyEditor) {
    QDesignerFormEditorInterface_SetPropertyEditor((QDesignerFormEditorInterface*)self, (QDesignerPropertyEditorInterface*)propertyEditor);
}

void q_designerformeditorinterface_set_object_inspector(void* self, void* objectInspector) {
    QDesignerFormEditorInterface_SetObjectInspector((QDesignerFormEditorInterface*)self, (QDesignerObjectInspectorInterface*)objectInspector);
}

void q_designerformeditorinterface_set_action_editor(void* self, void* actionEditor) {
    QDesignerFormEditorInterface_SetActionEditor((QDesignerFormEditorInterface*)self, (QDesignerActionEditorInterface*)actionEditor);
}

void q_designerformeditorinterface_set_integration(void* self, void* integration) {
    QDesignerFormEditorInterface_SetIntegration((QDesignerFormEditorInterface*)self, (QDesignerIntegrationInterface*)integration);
}

void q_designerformeditorinterface_set_settings_manager(void* self, void* settingsManager) {
    QDesignerFormEditorInterface_SetSettingsManager((QDesignerFormEditorInterface*)self, (QDesignerSettingsInterface*)settingsManager);
}

void q_designerformeditorinterface_set_options_pages(void* self, libqt_list /* of QDesignerOptionsPageInterface* */ optionsPages) {
    QDesignerFormEditorInterface_SetOptionsPages((QDesignerFormEditorInterface*)self, optionsPages);
}

libqt_list /* of QObject* */ q_designerformeditorinterface_plugin_instances(const void* self) {
    libqt_list _arr = QDesignerFormEditorInterface_PluginInstances((QDesignerFormEditorInterface*)self);
    return _arr;
}

QIcon* q_designerformeditorinterface_create_icon(const char* name) {
    return QDesignerFormEditorInterface_CreateIcon(qstring(name));
}

void q_designerformeditorinterface_set_form_manager(void* self, void* formWindowManager) {
    QDesignerFormEditorInterface_SetFormManager((QDesignerFormEditorInterface*)self, (QDesignerFormWindowManagerInterface*)formWindowManager);
}

void q_designerformeditorinterface_set_meta_data_base(void* self, void* metaDataBase) {
    QDesignerFormEditorInterface_SetMetaDataBase((QDesignerFormEditorInterface*)self, (QDesignerMetaDataBaseInterface*)metaDataBase);
}

void q_designerformeditorinterface_set_widget_data_base(void* self, void* widgetDataBase) {
    QDesignerFormEditorInterface_SetWidgetDataBase((QDesignerFormEditorInterface*)self, (QDesignerWidgetDataBaseInterface*)widgetDataBase);
}

void q_designerformeditorinterface_set_promotion(void* self, void* promotion) {
    QDesignerFormEditorInterface_SetPromotion((QDesignerFormEditorInterface*)self, (QDesignerPromotionInterface*)promotion);
}

void q_designerformeditorinterface_set_widget_factory(void* self, void* widgetFactory) {
    QDesignerFormEditorInterface_SetWidgetFactory((QDesignerFormEditorInterface*)self, (QDesignerWidgetFactoryInterface*)widgetFactory);
}

void q_designerformeditorinterface_set_extension_manager(void* self, void* extensionManager) {
    QDesignerFormEditorInterface_SetExtensionManager((QDesignerFormEditorInterface*)self, (QExtensionManager*)extensionManager);
}

const char* q_designerformeditorinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformeditorinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformeditorinterface_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerformeditorinterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerformeditorinterface_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerformeditorinterface_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerformeditorinterface_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerformeditorinterface_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerformeditorinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerformeditorinterface_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerformeditorinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerformeditorinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerformeditorinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerformeditorinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerformeditorinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerformeditorinterface_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerformeditorinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerformeditorinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerformeditorinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerformeditorinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerformeditorinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerformeditorinterface_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerformeditorinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerformeditorinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerformeditorinterface_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerformeditorinterface_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerformeditorinterface_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerformeditorinterface_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerformeditorinterface_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerformeditorinterface_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerformeditorinterface_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerformeditorinterface_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerformeditorinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerformeditorinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerformeditorinterface_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerformeditorinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerformeditorinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerformeditorinterface_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerformeditorinterface_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerformeditorinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerformeditorinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerformeditorinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerformeditorinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerformeditorinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerformeditorinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerformeditorinterface_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerformeditorinterface_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerformeditorinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerformeditorinterface_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_designerformeditorinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerformeditorinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerformeditorinterface_event(void* self, void* event) {
    return QDesignerFormEditorInterface_Event((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

bool q_designerformeditorinterface_super_event(void* self, void* event) {
    return QDesignerFormEditorInterface_SuperEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

bool q_designerformeditorinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormEditorInterface_EventFilter((QDesignerFormEditorInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerformeditorinterface_super_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormEditorInterface_SuperEventFilter((QDesignerFormEditorInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerformeditorinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerFormEditorInterface_OnEventFilter((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_timer_event(void* self, void* event) {
    QDesignerFormEditorInterface_TimerEvent((QDesignerFormEditorInterface*)self, (QTimerEvent*)event);
}

void q_designerformeditorinterface_super_timer_event(void* self, void* event) {
    QDesignerFormEditorInterface_SuperTimerEvent((QDesignerFormEditorInterface*)self, (QTimerEvent*)event);
}

void q_designerformeditorinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnTimerEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_child_event(void* self, void* event) {
    QDesignerFormEditorInterface_ChildEvent((QDesignerFormEditorInterface*)self, (QChildEvent*)event);
}

void q_designerformeditorinterface_super_child_event(void* self, void* event) {
    QDesignerFormEditorInterface_SuperChildEvent((QDesignerFormEditorInterface*)self, (QChildEvent*)event);
}

void q_designerformeditorinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnChildEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_custom_event(void* self, void* event) {
    QDesignerFormEditorInterface_CustomEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_super_custom_event(void* self, void* event) {
    QDesignerFormEditorInterface_SuperCustomEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnCustomEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_connect_notify(void* self, const void* signal) {
    QDesignerFormEditorInterface_ConnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_super_connect_notify(void* self, const void* signal) {
    QDesignerFormEditorInterface_SuperConnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerFormEditorInterface_OnConnectNotify((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_disconnect_notify(void* self, const void* signal) {
    QDesignerFormEditorInterface_DisconnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_super_disconnect_notify(void* self, const void* signal) {
    QDesignerFormEditorInterface_SuperDisconnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QDesignerFormEditorInterface_OnDisconnectNotify((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

QObject* q_designerformeditorinterface_sender(const void* self) {
    return QDesignerFormEditorInterface_Sender((QDesignerFormEditorInterface*)self);
}

int32_t q_designerformeditorinterface_sender_signal_index(const void* self) {
    return QDesignerFormEditorInterface_SenderSignalIndex((QDesignerFormEditorInterface*)self);
}

int32_t q_designerformeditorinterface_receivers(const void* self, const char* signal) {
    return QDesignerFormEditorInterface_Receivers((QDesignerFormEditorInterface*)self, signal);
}

bool q_designerformeditorinterface_is_signal_connected(const void* self, const void* signal) {
    return QDesignerFormEditorInterface_IsSignalConnected((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_delete(void* self) {
    QDesignerFormEditorInterface_Delete((QDesignerFormEditorInterface*)(self));
}
