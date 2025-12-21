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
    return QDesignerFormEditorInterface_new();
}

QDesignerFormEditorInterface* q_designerformeditorinterface_new2(void* parent) {
    return QDesignerFormEditorInterface_new2((QObject*)parent);
}

const QMetaObject* q_designerformeditorinterface_meta_object(void* self) {
    return QDesignerFormEditorInterface_MetaObject((QDesignerFormEditorInterface*)self);
}

void* q_designerformeditorinterface_metacast(void* self, const char* param1) {
    return QDesignerFormEditorInterface_Metacast((QDesignerFormEditorInterface*)self, param1);
}

int32_t q_designerformeditorinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormEditorInterface_Metacall((QDesignerFormEditorInterface*)self, param1, param2, param3);
}

void q_designerformeditorinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerFormEditorInterface_OnMetacall((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformeditorinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormEditorInterface_QBaseMetacall((QDesignerFormEditorInterface*)self, param1, param2, param3);
}

const char* q_designerformeditorinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QExtensionManager* q_designerformeditorinterface_extension_manager(void* self) {
    return QDesignerFormEditorInterface_ExtensionManager((QDesignerFormEditorInterface*)self);
}

QWidget* q_designerformeditorinterface_top_level(void* self) {
    return QDesignerFormEditorInterface_TopLevel((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetBoxInterface* q_designerformeditorinterface_widget_box(void* self) {
    return QDesignerFormEditorInterface_WidgetBox((QDesignerFormEditorInterface*)self);
}

QDesignerPropertyEditorInterface* q_designerformeditorinterface_property_editor(void* self) {
    return QDesignerFormEditorInterface_PropertyEditor((QDesignerFormEditorInterface*)self);
}

QDesignerObjectInspectorInterface* q_designerformeditorinterface_object_inspector(void* self) {
    return QDesignerFormEditorInterface_ObjectInspector((QDesignerFormEditorInterface*)self);
}

QDesignerFormWindowManagerInterface* q_designerformeditorinterface_form_window_manager(void* self) {
    return QDesignerFormEditorInterface_FormWindowManager((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetDataBaseInterface* q_designerformeditorinterface_widget_data_base(void* self) {
    return QDesignerFormEditorInterface_WidgetDataBase((QDesignerFormEditorInterface*)self);
}

QDesignerMetaDataBaseInterface* q_designerformeditorinterface_meta_data_base(void* self) {
    return QDesignerFormEditorInterface_MetaDataBase((QDesignerFormEditorInterface*)self);
}

QDesignerPromotionInterface* q_designerformeditorinterface_promotion(void* self) {
    return QDesignerFormEditorInterface_Promotion((QDesignerFormEditorInterface*)self);
}

QDesignerWidgetFactoryInterface* q_designerformeditorinterface_widget_factory(void* self) {
    return QDesignerFormEditorInterface_WidgetFactory((QDesignerFormEditorInterface*)self);
}

QDesignerActionEditorInterface* q_designerformeditorinterface_action_editor(void* self) {
    return QDesignerFormEditorInterface_ActionEditor((QDesignerFormEditorInterface*)self);
}

QDesignerIntegrationInterface* q_designerformeditorinterface_integration(void* self) {
    return QDesignerFormEditorInterface_Integration((QDesignerFormEditorInterface*)self);
}

QDesignerSettingsInterface* q_designerformeditorinterface_settings_manager(void* self) {
    return QDesignerFormEditorInterface_SettingsManager((QDesignerFormEditorInterface*)self);
}

const char* q_designerformeditorinterface_resource_location(void* self) {
    libqt_string _str = QDesignerFormEditorInterface_ResourceLocation((QDesignerFormEditorInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QDesignerOptionsPageInterface* */ q_designerformeditorinterface_options_pages(void* self) {
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

void q_designerformeditorinterface_set_options_pages(void* self, libqt_list optionsPages) {
    QDesignerFormEditorInterface_SetOptionsPages((QDesignerFormEditorInterface*)self, optionsPages);
}

libqt_list /* of QObject* */ q_designerformeditorinterface_plugin_instances(void* self) {
    libqt_list _arr = QDesignerFormEditorInterface_PluginInstances((QDesignerFormEditorInterface*)self);
    return _arr;
}

QIcon* q_designerformeditorinterface_create_icon(const char* name) {
    return QDesignerFormEditorInterface_CreateIcon(qstring(name));
}

void q_designerformeditorinterface_set_form_manager(void* self, void* formWindowManager) {
    QDesignerFormEditorInterface_SetFormManager((QDesignerFormEditorInterface*)self, (QDesignerFormWindowManagerInterface*)formWindowManager);
}

void q_designerformeditorinterface_on_set_form_manager(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetFormManager((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_form_manager(void* self, void* formWindowManager) {
    QDesignerFormEditorInterface_QBaseSetFormManager((QDesignerFormEditorInterface*)self, (QDesignerFormWindowManagerInterface*)formWindowManager);
}

void q_designerformeditorinterface_set_meta_data_base(void* self, void* metaDataBase) {
    QDesignerFormEditorInterface_SetMetaDataBase((QDesignerFormEditorInterface*)self, (QDesignerMetaDataBaseInterface*)metaDataBase);
}

void q_designerformeditorinterface_on_set_meta_data_base(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetMetaDataBase((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_meta_data_base(void* self, void* metaDataBase) {
    QDesignerFormEditorInterface_QBaseSetMetaDataBase((QDesignerFormEditorInterface*)self, (QDesignerMetaDataBaseInterface*)metaDataBase);
}

void q_designerformeditorinterface_set_widget_data_base(void* self, void* widgetDataBase) {
    QDesignerFormEditorInterface_SetWidgetDataBase((QDesignerFormEditorInterface*)self, (QDesignerWidgetDataBaseInterface*)widgetDataBase);
}

void q_designerformeditorinterface_on_set_widget_data_base(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetWidgetDataBase((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_widget_data_base(void* self, void* widgetDataBase) {
    QDesignerFormEditorInterface_QBaseSetWidgetDataBase((QDesignerFormEditorInterface*)self, (QDesignerWidgetDataBaseInterface*)widgetDataBase);
}

void q_designerformeditorinterface_set_promotion(void* self, void* promotion) {
    QDesignerFormEditorInterface_SetPromotion((QDesignerFormEditorInterface*)self, (QDesignerPromotionInterface*)promotion);
}

void q_designerformeditorinterface_on_set_promotion(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetPromotion((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_promotion(void* self, void* promotion) {
    QDesignerFormEditorInterface_QBaseSetPromotion((QDesignerFormEditorInterface*)self, (QDesignerPromotionInterface*)promotion);
}

void q_designerformeditorinterface_set_widget_factory(void* self, void* widgetFactory) {
    QDesignerFormEditorInterface_SetWidgetFactory((QDesignerFormEditorInterface*)self, (QDesignerWidgetFactoryInterface*)widgetFactory);
}

void q_designerformeditorinterface_on_set_widget_factory(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetWidgetFactory((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_widget_factory(void* self, void* widgetFactory) {
    QDesignerFormEditorInterface_QBaseSetWidgetFactory((QDesignerFormEditorInterface*)self, (QDesignerWidgetFactoryInterface*)widgetFactory);
}

void q_designerformeditorinterface_set_extension_manager(void* self, void* extensionManager) {
    QDesignerFormEditorInterface_SetExtensionManager((QDesignerFormEditorInterface*)self, (QExtensionManager*)extensionManager);
}

void q_designerformeditorinterface_on_set_extension_manager(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnSetExtensionManager((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_qbase_set_extension_manager(void* self, void* extensionManager) {
    QDesignerFormEditorInterface_QBaseSetExtensionManager((QDesignerFormEditorInterface*)self, (QExtensionManager*)extensionManager);
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

const char* q_designerformeditorinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerformeditorinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerformeditorinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerformeditorinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerformeditorinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerformeditorinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerformeditorinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerformeditorinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerformeditorinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerformeditorinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_designerformeditorinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerformeditorinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerformeditorinterface_children(void* self) {
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

QMetaObject__Connection* q_designerformeditorinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerformeditorinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerformeditorinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerformeditorinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designerformeditorinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerformeditorinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerformeditorinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerformeditorinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerformeditorinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_designerformeditorinterface_dynamic_property_names");
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

QBindingStorage* q_designerformeditorinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerformeditorinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerformeditorinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerformeditorinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerformeditorinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerformeditorinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerformeditorinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_designerformeditorinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_designerformeditorinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_designerformeditorinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerformeditorinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
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

bool q_designerformeditorinterface_qbase_event(void* self, void* event) {
    return QDesignerFormEditorInterface_QBaseEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

bool q_designerformeditorinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormEditorInterface_EventFilter((QDesignerFormEditorInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerformeditorinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormEditorInterface_QBaseEventFilter((QDesignerFormEditorInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerformeditorinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerFormEditorInterface_OnEventFilter((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_timer_event(void* self, void* event) {
    QDesignerFormEditorInterface_TimerEvent((QDesignerFormEditorInterface*)self, (QTimerEvent*)event);
}

void q_designerformeditorinterface_qbase_timer_event(void* self, void* event) {
    QDesignerFormEditorInterface_QBaseTimerEvent((QDesignerFormEditorInterface*)self, (QTimerEvent*)event);
}

void q_designerformeditorinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnTimerEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_child_event(void* self, void* event) {
    QDesignerFormEditorInterface_ChildEvent((QDesignerFormEditorInterface*)self, (QChildEvent*)event);
}

void q_designerformeditorinterface_qbase_child_event(void* self, void* event) {
    QDesignerFormEditorInterface_QBaseChildEvent((QDesignerFormEditorInterface*)self, (QChildEvent*)event);
}

void q_designerformeditorinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnChildEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_custom_event(void* self, void* event) {
    QDesignerFormEditorInterface_CustomEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_qbase_custom_event(void* self, void* event) {
    QDesignerFormEditorInterface_QBaseCustomEvent((QDesignerFormEditorInterface*)self, (QEvent*)event);
}

void q_designerformeditorinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnCustomEvent((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_connect_notify(void* self, void* signal) {
    QDesignerFormEditorInterface_ConnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerFormEditorInterface_QBaseConnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnConnectNotify((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_disconnect_notify(void* self, void* signal) {
    QDesignerFormEditorInterface_DisconnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerFormEditorInterface_QBaseDisconnectNotify((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnDisconnectNotify((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

QObject* q_designerformeditorinterface_sender(void* self) {
    return QDesignerFormEditorInterface_Sender((QDesignerFormEditorInterface*)self);
}

QObject* q_designerformeditorinterface_qbase_sender(void* self) {
    return QDesignerFormEditorInterface_QBaseSender((QDesignerFormEditorInterface*)self);
}

void q_designerformeditorinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerFormEditorInterface_OnSender((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformeditorinterface_sender_signal_index(void* self) {
    return QDesignerFormEditorInterface_SenderSignalIndex((QDesignerFormEditorInterface*)self);
}

int32_t q_designerformeditorinterface_qbase_sender_signal_index(void* self) {
    return QDesignerFormEditorInterface_QBaseSenderSignalIndex((QDesignerFormEditorInterface*)self);
}

void q_designerformeditorinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerFormEditorInterface_OnSenderSignalIndex((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

int32_t q_designerformeditorinterface_receivers(void* self, const char* signal) {
    return QDesignerFormEditorInterface_Receivers((QDesignerFormEditorInterface*)self, signal);
}

int32_t q_designerformeditorinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerFormEditorInterface_QBaseReceivers((QDesignerFormEditorInterface*)self, signal);
}

void q_designerformeditorinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerFormEditorInterface_OnReceivers((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

bool q_designerformeditorinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerFormEditorInterface_IsSignalConnected((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

bool q_designerformeditorinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerFormEditorInterface_QBaseIsSignalConnected((QDesignerFormEditorInterface*)self, (QMetaMethod*)signal);
}

void q_designerformeditorinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormEditorInterface_OnIsSignalConnected((QDesignerFormEditorInterface*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerformeditorinterface_delete(void* self) {
    QDesignerFormEditorInterface_Delete((QDesignerFormEditorInterface*)(self));
}
