#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMEDITOR_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html)

/// q_designerformeditorinterface_new constructs a new QDesignerFormEditorInterface object.
///
QDesignerFormEditorInterface* q_designerformeditorinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html)

/// q_designerformeditorinterface_new2 constructs a new QDesignerFormEditorInterface object.
///
/// @param parent QObject*
///
QDesignerFormEditorInterface* q_designerformeditorinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerFormEditorInterface*
///
const QMetaObject* q_designerformeditorinterface_meta_object(void* self);

/// @param self QDesignerFormEditorInterface*
/// @param param1 const char*
///
void* q_designerformeditorinterface_metacast(void* self, const char* param1);

/// @param self QDesignerFormEditorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformeditorinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback int32_t func(QDesignerFormEditorInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerformeditorinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformeditorinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerformeditorinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#extensionManager)
///
/// @param self QDesignerFormEditorInterface*
///
QExtensionManager* q_designerformeditorinterface_extension_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#topLevel)
///
/// @param self QDesignerFormEditorInterface*
///
QWidget* q_designerformeditorinterface_top_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetBox)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerWidgetBoxInterface* q_designerformeditorinterface_widget_box(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#propertyEditor)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerPropertyEditorInterface* q_designerformeditorinterface_property_editor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#objectInspector)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerObjectInspectorInterface* q_designerformeditorinterface_object_inspector(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#formWindowManager)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerFormWindowManagerInterface* q_designerformeditorinterface_form_window_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetDataBase)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerWidgetDataBaseInterface* q_designerformeditorinterface_widget_data_base(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#metaDataBase)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerMetaDataBaseInterface* q_designerformeditorinterface_meta_data_base(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#promotion)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerPromotionInterface* q_designerformeditorinterface_promotion(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#widgetFactory)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerWidgetFactoryInterface* q_designerformeditorinterface_widget_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#actionEditor)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerActionEditorInterface* q_designerformeditorinterface_action_editor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#integration)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerIntegrationInterface* q_designerformeditorinterface_integration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#settingsManager)
///
/// @param self QDesignerFormEditorInterface*
///
QDesignerSettingsInterface* q_designerformeditorinterface_settings_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#resourceLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormEditorInterface*
///
const char* q_designerformeditorinterface_resource_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#optionsPages)
///
/// @param self QDesignerFormEditorInterface*
///
/// @return libqt_list of QDesignerOptionsPageInterface*
///
libqt_list q_designerformeditorinterface_options_pages(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setTopLevel)
///
/// @param self QDesignerFormEditorInterface*
/// @param topLevel QWidget*
///
void q_designerformeditorinterface_set_top_level(void* self, void* topLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetBox)
///
/// @param self QDesignerFormEditorInterface*
/// @param widgetBox QDesignerWidgetBoxInterface*
///
void q_designerformeditorinterface_set_widget_box(void* self, void* widgetBox);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPropertyEditor)
///
/// @param self QDesignerFormEditorInterface*
/// @param propertyEditor QDesignerPropertyEditorInterface*
///
void q_designerformeditorinterface_set_property_editor(void* self, void* propertyEditor);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setObjectInspector)
///
/// @param self QDesignerFormEditorInterface*
/// @param objectInspector QDesignerObjectInspectorInterface*
///
void q_designerformeditorinterface_set_object_inspector(void* self, void* objectInspector);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setActionEditor)
///
/// @param self QDesignerFormEditorInterface*
/// @param actionEditor QDesignerActionEditorInterface*
///
void q_designerformeditorinterface_set_action_editor(void* self, void* actionEditor);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setIntegration)
///
/// @param self QDesignerFormEditorInterface*
/// @param integration QDesignerIntegrationInterface*
///
void q_designerformeditorinterface_set_integration(void* self, void* integration);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setSettingsManager)
///
/// @param self QDesignerFormEditorInterface*
/// @param settingsManager QDesignerSettingsInterface*
///
void q_designerformeditorinterface_set_settings_manager(void* self, void* settingsManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setOptionsPages)
///
/// @param self QDesignerFormEditorInterface*
/// @param optionsPages libqt_list of QDesignerOptionsPageInterface*
///
void q_designerformeditorinterface_set_options_pages(void* self, libqt_list /* of QDesignerOptionsPageInterface* */ optionsPages);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#pluginInstances)
///
/// @param self QDesignerFormEditorInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformeditorinterface_plugin_instances(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#createIcon)
///
/// @param name const char*
///
QIcon* q_designerformeditorinterface_create_icon(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
///
/// @param self QDesignerFormEditorInterface*
/// @param formWindowManager QDesignerFormWindowManagerInterface*
///
void q_designerformeditorinterface_set_form_manager(void* self, void* formWindowManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager)
///
void q_designerformeditorinterface_on_set_form_manager(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setFormManager)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param formWindowManager QDesignerFormWindowManagerInterface*
///
void q_designerformeditorinterface_qbase_set_form_manager(void* self, void* formWindowManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
///
/// @param self QDesignerFormEditorInterface*
/// @param metaDataBase QDesignerMetaDataBaseInterface*
///
void q_designerformeditorinterface_set_meta_data_base(void* self, void* metaDataBase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase)
///
void q_designerformeditorinterface_on_set_meta_data_base(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setMetaDataBase)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param metaDataBase QDesignerMetaDataBaseInterface*
///
void q_designerformeditorinterface_qbase_set_meta_data_base(void* self, void* metaDataBase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
///
/// @param self QDesignerFormEditorInterface*
/// @param widgetDataBase QDesignerWidgetDataBaseInterface*
///
void q_designerformeditorinterface_set_widget_data_base(void* self, void* widgetDataBase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase)
///
void q_designerformeditorinterface_on_set_widget_data_base(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetDataBase)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param widgetDataBase QDesignerWidgetDataBaseInterface*
///
void q_designerformeditorinterface_qbase_set_widget_data_base(void* self, void* widgetDataBase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
///
/// @param self QDesignerFormEditorInterface*
/// @param promotion QDesignerPromotionInterface*
///
void q_designerformeditorinterface_set_promotion(void* self, void* promotion);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion)
///
void q_designerformeditorinterface_on_set_promotion(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setPromotion)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param promotion QDesignerPromotionInterface*
///
void q_designerformeditorinterface_qbase_set_promotion(void* self, void* promotion);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
///
/// @param self QDesignerFormEditorInterface*
/// @param widgetFactory QDesignerWidgetFactoryInterface*
///
void q_designerformeditorinterface_set_widget_factory(void* self, void* widgetFactory);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory)
///
void q_designerformeditorinterface_on_set_widget_factory(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setWidgetFactory)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param widgetFactory QDesignerWidgetFactoryInterface*
///
void q_designerformeditorinterface_qbase_set_widget_factory(void* self, void* widgetFactory);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
///
/// @param self QDesignerFormEditorInterface*
/// @param extensionManager QExtensionManager*
///
void q_designerformeditorinterface_set_extension_manager(void* self, void* extensionManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager)
///
void q_designerformeditorinterface_on_set_extension_manager(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#setExtensionManager)
///
/// Base class method implementation
///
/// @param self QDesignerFormEditorInterface*
/// @param extensionManager QExtensionManager*
///
void q_designerformeditorinterface_qbase_set_extension_manager(void* self, void* extensionManager);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerformeditorinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerformeditorinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormEditorInterface*
///
const char* q_designerformeditorinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerFormEditorInterface*
/// @param name char*
///
void q_designerformeditorinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerFormEditorInterface*
///
bool q_designerformeditorinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerFormEditorInterface*
///
bool q_designerformeditorinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerFormEditorInterface*
///
bool q_designerformeditorinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerFormEditorInterface*
///
bool q_designerformeditorinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerFormEditorInterface*
/// @param b bool
///
bool q_designerformeditorinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerFormEditorInterface*
///
QThread* q_designerformeditorinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormEditorInterface*
/// @param thread QThread*
///
bool q_designerformeditorinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param interval int
///
int32_t q_designerformeditorinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerformeditorinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param id int
///
void q_designerformeditorinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param id enum Qt__TimerId
///
void q_designerformeditorinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerFormEditorInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformeditorinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerFormEditorInterface*
/// @param parent QObject*
///
void q_designerformeditorinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerFormEditorInterface*
/// @param filterObj QObject*
///
void q_designerformeditorinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerFormEditorInterface*
/// @param obj QObject*
///
void q_designerformeditorinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerformeditorinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormEditorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerformeditorinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerformeditorinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerformeditorinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerFormEditorInterface*
///
void q_designerformeditorinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerFormEditorInterface*
///
void q_designerformeditorinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerFormEditorInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerformeditorinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerFormEditorInterface*
/// @param name const char*
///
QVariant* q_designerformeditorinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormEditorInterface*
///
const char** q_designerformeditorinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormEditorInterface*
///
QBindingStorage* q_designerformeditorinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormEditorInterface*
///
const QBindingStorage* q_designerformeditorinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormEditorInterface*
///
void q_designerformeditorinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self)
///
void q_designerformeditorinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerFormEditorInterface*
///
QObject* q_designerformeditorinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerFormEditorInterface*
/// @param classname const char*
///
bool q_designerformeditorinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerFormEditorInterface*
///
void q_designerformeditorinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormEditorInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerformeditorinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformeditorinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormEditorInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformeditorinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformeditorinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormEditorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformeditorinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormEditorInterface*
/// @param param1 QObject*
///
void q_designerformeditorinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QObject* param1)
///
void q_designerformeditorinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QEvent*
///
bool q_designerformeditorinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QEvent*
///
bool q_designerformeditorinterface_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback bool func(QDesignerFormEditorInterface* self, QEvent* event)
///
void q_designerformeditorinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformeditorinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformeditorinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback bool func(QDesignerFormEditorInterface* self, QObject* watched, QEvent* event)
///
void q_designerformeditorinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QTimerEvent*
///
void q_designerformeditorinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QTimerEvent*
///
void q_designerformeditorinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QTimerEvent* event)
///
void q_designerformeditorinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QChildEvent*
///
void q_designerformeditorinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QChildEvent*
///
void q_designerformeditorinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QChildEvent* event)
///
void q_designerformeditorinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QEvent*
///
void q_designerformeditorinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param event QEvent*
///
void q_designerformeditorinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QEvent* event)
///
void q_designerformeditorinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerformeditorinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerformeditorinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QMetaMethod* signal)
///
void q_designerformeditorinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerformeditorinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerformeditorinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, QMetaMethod* signal)
///
void q_designerformeditorinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
///
QObject* q_designerformeditorinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
///
QObject* q_designerformeditorinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback QObject* func()
///
void q_designerformeditorinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
///
int32_t q_designerformeditorinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
///
int32_t q_designerformeditorinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback int32_t func()
///
void q_designerformeditorinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal const char*
///
int32_t q_designerformeditorinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal const char*
///
int32_t q_designerformeditorinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback int32_t func(QDesignerFormEditorInterface* self, const char* signal)
///
void q_designerformeditorinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
bool q_designerformeditorinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param signal QMetaMethod*
///
bool q_designerformeditorinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerFormEditorInterface*
/// @param callback bool func(QDesignerFormEditorInterface* self, QMetaMethod* signal)
///
void q_designerformeditorinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerFormEditorInterface*
/// @param callback void func(QDesignerFormEditorInterface* self, const char* objectName)
///
void q_designerformeditorinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformeditorinterface.html#dtor.QDesignerFormEditorInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormEditorInterface*
///
void q_designerformeditorinterface_delete(void* self);

#endif
