#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTINTEGRATION_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTINTEGRATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html)

/// q_designerintegrationinterface_new constructs a new QDesignerIntegrationInterface object.
///
/// @param core QDesignerFormEditorInterface*
///
QDesignerIntegrationInterface* q_designerintegrationinterface_new(void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html)

/// q_designerintegrationinterface_new2 constructs a new QDesignerIntegrationInterface object.
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QObject*
///
QDesignerIntegrationInterface* q_designerintegrationinterface_new2(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerIntegrationInterface*
///
const QMetaObject* q_designerintegrationinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback const QMetaObject* func()
///
void q_designerintegrationinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
const QMetaObject* q_designerintegrationinterface_qbase_meta_object(void* self);

/// @param self QDesignerIntegrationInterface*
/// @param param1 const char*
///
void* q_designerintegrationinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void* func(QDesignerIntegrationInterface* self, const char* param1)
///
void q_designerintegrationinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param param1 const char*
///
void* q_designerintegrationinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerIntegrationInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerintegrationinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback int32_t func(QDesignerIntegrationInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerintegrationinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerintegrationinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerintegrationinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
///
/// @param self QDesignerIntegrationInterface*
///
QDesignerFormEditorInterface* q_designerintegrationinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
///
/// @param self QDesignerIntegrationInterface*
/// @param widget QWidget*
///
QWidget* q_designerintegrationinterface_container_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback QWidget* func(QDesignerIntegrationInterface* self, QWidget* widget)
///
void q_designerintegrationinterface_on_container_window(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param widget QWidget*
///
QWidget* q_designerintegrationinterface_qbase_container_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
///
/// @param self QDesignerIntegrationInterface*
/// @param parent QWidget*
///
QDesignerResourceBrowserInterface* q_designerintegrationinterface_create_resource_browser(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback QDesignerResourceBrowserInterface* func(QDesignerIntegrationInterface* self, QWidget* parent)
///
void q_designerintegrationinterface_on_create_resource_browser(void* self, QDesignerResourceBrowserInterface* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param parent QWidget*
///
QDesignerResourceBrowserInterface* q_designerintegrationinterface_qbase_create_resource_browser(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegrationInterface*
///
const char* q_designerintegrationinterface_header_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback const char* func()
///
void q_designerintegrationinterface_on_header_suffix(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
const char* q_designerintegrationinterface_qbase_header_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
///
/// @param self QDesignerIntegrationInterface*
/// @param headerSuffix const char*
///
void q_designerintegrationinterface_set_header_suffix(void* self, const char* headerSuffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* headerSuffix)
///
void q_designerintegrationinterface_on_set_header_suffix(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param headerSuffix const char*
///
void q_designerintegrationinterface_qbase_set_header_suffix(void* self, const char* headerSuffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_is_header_lowercase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback bool func()
///
void q_designerintegrationinterface_on_is_header_lowercase(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_qbase_is_header_lowercase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
///
/// @param self QDesignerIntegrationInterface*
/// @param headerLowerCase bool
///
void q_designerintegrationinterface_set_header_lowercase(void* self, bool headerLowerCase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, bool headerLowerCase)
///
void q_designerintegrationinterface_on_set_header_lowercase(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param headerLowerCase bool
///
void q_designerintegrationinterface_qbase_set_header_lowercase(void* self, bool headerLowerCase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
///
/// @param self QDesignerIntegrationInterface*
///
/// @return flag of enum QDesignerIntegrationInterface__FeatureFlag
///
int32_t q_designerintegrationinterface_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback int32_t func()
///
void q_designerintegrationinterface_on_features(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
/// @return flag of enum QDesignerIntegrationInterface__FeatureFlag
///
int32_t q_designerintegrationinterface_qbase_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
///
/// @param self QDesignerIntegrationInterface*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
bool q_designerintegrationinterface_has_feature(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
///
/// @param self QDesignerIntegrationInterface*
///
/// @return enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
int32_t q_designerintegrationinterface_resource_file_watcher_behaviour(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback int32_t func()
///
void q_designerintegrationinterface_on_resource_file_watcher_behaviour(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
/// @return enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
int32_t q_designerintegrationinterface_qbase_resource_file_watcher_behaviour(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
///
/// @param self QDesignerIntegrationInterface*
/// @param behaviour enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
void q_designerintegrationinterface_set_resource_file_watcher_behaviour(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour behaviour)
///
void q_designerintegrationinterface_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param behaviour enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
void q_designerintegrationinterface_qbase_set_resource_file_watcher_behaviour(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegrationInterface*
///
const char* q_designerintegrationinterface_context_help_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback const char* func()
///
void q_designerintegrationinterface_on_context_help_id(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
const char* q_designerintegrationinterface_qbase_context_help_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
/// @param object QObject*
/// @param newName const char*
/// @param oldName const char*
///
void q_designerintegrationinterface_emit_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
///
/// @param self QDesignerIntegrationInterface*
/// @param objectName const char*
/// @param signalSignature const char*
/// @param parameterNames const char**
///
void q_designerintegrationinterface_emit_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
///
/// @param self QDesignerIntegrationInterface*
/// @param slotSignature const char*
///
void q_designerintegrationinterface_emit_navigate_to_slot2(void* self, const char* slotSignature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
///
/// @param self QDesignerIntegrationInterface*
/// @param manual const char*
/// @param document const char*
///
void q_designerintegrationinterface_emit_help_requested(void* self, const char* manual, const char* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegrationinterface_property_changed(void* self, void* formWindow, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
/// @param object QObject*
/// @param newName const char*
/// @param oldName const char*
///
void q_designerintegrationinterface_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
///
/// @param self QDesignerIntegrationInterface*
/// @param manual const char*
/// @param document const char*
///
void q_designerintegrationinterface_help_requested(void* self, const char* manual, const char* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
///
/// @param self QDesignerIntegrationInterface*
/// @param objectName const char*
/// @param signalSignature const char*
/// @param parameterNames const char**
///
void q_designerintegrationinterface_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
///
/// @param self QDesignerIntegrationInterface*
/// @param slotSignature const char*
///
void q_designerintegrationinterface_navigate_to_slot2(void* self, const char* slotSignature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
///
/// @param self QDesignerIntegrationInterface*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
void q_designerintegrationinterface_set_features(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, flag of enum QDesignerIntegrationInterface__FeatureFlag f)
///
void q_designerintegrationinterface_on_set_features(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
void q_designerintegrationinterface_qbase_set_features(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
/// @param enableSubPropertyHandling bool
///
void q_designerintegrationinterface_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* name, QVariant* value, bool enableSubPropertyHandling)
///
void q_designerintegrationinterface_on_update_property(void* self, void (*callback)(void*, const char*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
/// @param enableSubPropertyHandling bool
///
void q_designerintegrationinterface_qbase_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegrationinterface_update_property2(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* name, QVariant* value)
///
void q_designerintegrationinterface_on_update_property2(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegrationinterface_qbase_update_property2(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
///
void q_designerintegrationinterface_reset_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* name)
///
void q_designerintegrationinterface_on_reset_property(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
///
void q_designerintegrationinterface_qbase_reset_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegrationinterface_add_dynamic_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* name, QVariant* value)
///
void q_designerintegrationinterface_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegrationinterface_qbase_add_dynamic_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
///
void q_designerintegrationinterface_remove_dynamic_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, const char* name)
///
void q_designerintegrationinterface_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
///
void q_designerintegrationinterface_qbase_remove_dynamic_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegrationinterface_update_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerintegrationinterface_on_update_active_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegrationinterface_qbase_update_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegrationinterface_setup_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerintegrationinterface_on_setup_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegrationinterface_qbase_setup_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_update_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func()
///
void q_designerintegrationinterface_on_update_selection(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_qbase_update_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_update_custom_widget_plugins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func()
///
void q_designerintegrationinterface_on_update_custom_widget_plugins(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
///
/// Base class method implementation
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_qbase_update_custom_widget_plugins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerintegrationinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerintegrationinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegrationInterface*
///
const char* q_designerintegrationinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerIntegrationInterface*
/// @param name char*
///
void q_designerintegrationinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerIntegrationInterface*
/// @param b bool
///
bool q_designerintegrationinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerIntegrationInterface*
///
QThread* q_designerintegrationinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerIntegrationInterface*
/// @param thread QThread*
///
bool q_designerintegrationinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param interval int
///
int32_t q_designerintegrationinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerintegrationinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param id int
///
void q_designerintegrationinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param id enum Qt__TimerId
///
void q_designerintegrationinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerIntegrationInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerintegrationinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerIntegrationInterface*
/// @param parent QObject*
///
void q_designerintegrationinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerIntegrationInterface*
/// @param filterObj QObject*
///
void q_designerintegrationinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerIntegrationInterface*
/// @param obj QObject*
///
void q_designerintegrationinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerintegrationinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerintegrationinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerIntegrationInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerintegrationinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegrationinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerintegrationinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
///
bool q_designerintegrationinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
/// @param receiver QObject*
///
bool q_designerintegrationinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerintegrationinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerintegrationinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerIntegrationInterface*
/// @param name const char*
///
QVariant* q_designerintegrationinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerIntegrationInterface*
///
const char** q_designerintegrationinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerIntegrationInterface*
///
QBindingStorage* q_designerintegrationinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerIntegrationInterface*
///
const QBindingStorage* q_designerintegrationinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self)
///
void q_designerintegrationinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerIntegrationInterface*
///
QObject* q_designerintegrationinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerIntegrationInterface*
/// @param classname const char*
///
bool q_designerintegrationinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerintegrationinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegrationInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerintegrationinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerintegrationinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerintegrationinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerIntegrationInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerintegrationinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
/// @param signal const char*
///
bool q_designerintegrationinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerintegrationinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegrationinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegrationInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegrationinterface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegrationInterface*
/// @param param1 QObject*
///
void q_designerintegrationinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QObject* param1)
///
void q_designerintegrationinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QEvent*
///
bool q_designerintegrationinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QEvent*
///
bool q_designerintegrationinterface_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback bool func(QDesignerIntegrationInterface* self, QEvent* event)
///
void q_designerintegrationinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerintegrationinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerintegrationinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback bool func(QDesignerIntegrationInterface* self, QObject* watched, QEvent* event)
///
void q_designerintegrationinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QTimerEvent*
///
void q_designerintegrationinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QTimerEvent*
///
void q_designerintegrationinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QTimerEvent* event)
///
void q_designerintegrationinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QChildEvent*
///
void q_designerintegrationinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QChildEvent*
///
void q_designerintegrationinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QChildEvent* event)
///
void q_designerintegrationinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QEvent*
///
void q_designerintegrationinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param event QEvent*
///
void q_designerintegrationinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QEvent* event)
///
void q_designerintegrationinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
void q_designerintegrationinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
void q_designerintegrationinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QMetaMethod* signal)
///
void q_designerintegrationinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
void q_designerintegrationinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
void q_designerintegrationinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback void func(QDesignerIntegrationInterface* self, QMetaMethod* signal)
///
void q_designerintegrationinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
///
QObject* q_designerintegrationinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
///
QObject* q_designerintegrationinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback QObject* func()
///
void q_designerintegrationinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
///
int32_t q_designerintegrationinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
///
int32_t q_designerintegrationinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback int32_t func()
///
void q_designerintegrationinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal const char*
///
int32_t q_designerintegrationinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal const char*
///
int32_t q_designerintegrationinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback int32_t func(QDesignerIntegrationInterface* self, const char* signal)
///
void q_designerintegrationinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
bool q_designerintegrationinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param signal QMetaMethod*
///
bool q_designerintegrationinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegrationInterface*
/// @param callback bool func(QDesignerIntegrationInterface* self, QMetaMethod* signal)
///
void q_designerintegrationinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#dtor.QDesignerIntegrationInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerIntegrationInterface*
///
void q_designerintegrationinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html)

/// q_designerintegration_new constructs a new QDesignerIntegration object.
///
/// @param core QDesignerFormEditorInterface*
///
QDesignerIntegration* q_designerintegration_new(void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html)

/// q_designerintegration_new2 constructs a new QDesignerIntegration object.
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QObject*
///
QDesignerIntegration* q_designerintegration_new2(void* core, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerIntegration*
///
const QMetaObject* q_designerintegration_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback const QMetaObject* func()
///
void q_designerintegration_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
const QMetaObject* q_designerintegration_qbase_meta_object(void* self);

/// @param self QDesignerIntegration*
/// @param param1 const char*
///
void* q_designerintegration_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void* func(QDesignerIntegration* self, const char* param1)
///
void q_designerintegration_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param param1 const char*
///
void* q_designerintegration_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerIntegration*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerintegration_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback int32_t func(QDesignerIntegration* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerintegration_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerintegration_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerintegration_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegration*
///
const char* q_designerintegration_header_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback const char* func()
///
void q_designerintegration_on_header_suffix(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
const char* q_designerintegration_qbase_header_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
///
/// @param self QDesignerIntegration*
/// @param headerSuffix const char*
///
void q_designerintegration_set_header_suffix(void* self, const char* headerSuffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* headerSuffix)
///
void q_designerintegration_on_set_header_suffix(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param headerSuffix const char*
///
void q_designerintegration_qbase_set_header_suffix(void* self, const char* headerSuffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_is_header_lowercase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback bool func()
///
void q_designerintegration_on_is_header_lowercase(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_qbase_is_header_lowercase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
///
/// @param self QDesignerIntegration*
/// @param headerLowerCase bool
///
void q_designerintegration_set_header_lowercase(void* self, bool headerLowerCase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, bool headerLowerCase)
///
void q_designerintegration_on_set_header_lowercase(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param headerLowerCase bool
///
void q_designerintegration_qbase_set_header_lowercase(void* self, bool headerLowerCase);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
///
/// @param self QDesignerIntegration*
///
/// @return flag of enum QDesignerIntegrationInterface__FeatureFlag
///
int32_t q_designerintegration_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback int32_t func()
///
void q_designerintegration_on_features(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
/// @return flag of enum QDesignerIntegrationInterface__FeatureFlag
///
int32_t q_designerintegration_qbase_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
///
/// @param self QDesignerIntegration*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
void q_designerintegration_set_features(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, flag of enum QDesignerIntegrationInterface__FeatureFlag f)
///
void q_designerintegration_on_set_features(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
void q_designerintegration_qbase_set_features(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
///
/// @param self QDesignerIntegration*
///
/// @return enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
int32_t q_designerintegration_resource_file_watcher_behaviour(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback int32_t func()
///
void q_designerintegration_on_resource_file_watcher_behaviour(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
/// @return enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
int32_t q_designerintegration_qbase_resource_file_watcher_behaviour(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
///
/// @param self QDesignerIntegration*
/// @param behaviour enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
void q_designerintegration_set_resource_file_watcher_behaviour(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour behaviour)
///
void q_designerintegration_on_set_resource_file_watcher_behaviour(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param behaviour enum QDesignerIntegrationInterface__ResourceFileWatcherBehaviour
///
void q_designerintegration_qbase_set_resource_file_watcher_behaviour(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
///
/// @param self QDesignerIntegration*
/// @param widget QWidget*
///
QWidget* q_designerintegration_container_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback QWidget* func(QDesignerIntegration* self, QWidget* widget)
///
void q_designerintegration_on_container_window(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param widget QWidget*
///
QWidget* q_designerintegration_qbase_container_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#initializePlugins)
///
/// @param formEditor QDesignerFormEditorInterface*
///
void q_designerintegration_initialize_plugins(void* formEditor);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
///
/// @param self QDesignerIntegration*
/// @param parent QWidget*
///
QDesignerResourceBrowserInterface* q_designerintegration_create_resource_browser(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback QDesignerResourceBrowserInterface* func(QDesignerIntegration* self, QWidget* parent)
///
void q_designerintegration_on_create_resource_browser(void* self, QDesignerResourceBrowserInterface* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param parent QWidget*
///
QDesignerResourceBrowserInterface* q_designerintegration_qbase_create_resource_browser(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegration*
///
const char* q_designerintegration_context_help_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback const char* func()
///
void q_designerintegration_on_context_help_id(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
const char* q_designerintegration_qbase_context_help_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
/// @param enableSubPropertyHandling bool
///
void q_designerintegration_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* name, QVariant* value, bool enableSubPropertyHandling)
///
void q_designerintegration_on_update_property(void* self, void (*callback)(void*, const char*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
/// @param enableSubPropertyHandling bool
///
void q_designerintegration_qbase_update_property(void* self, const char* name, void* value, bool enableSubPropertyHandling);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegration_update_property2(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* name, QVariant* value)
///
void q_designerintegration_on_update_property2(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegration_qbase_update_property2(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
///
void q_designerintegration_reset_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* name)
///
void q_designerintegration_on_reset_property(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param name const char*
///
void q_designerintegration_qbase_reset_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegration_add_dynamic_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* name, QVariant* value)
///
void q_designerintegration_on_add_dynamic_property(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegration_qbase_add_dynamic_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
///
void q_designerintegration_remove_dynamic_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, const char* name)
///
void q_designerintegration_on_remove_dynamic_property(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param name const char*
///
void q_designerintegration_qbase_remove_dynamic_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegration_update_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerintegration_on_update_active_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegration_qbase_update_active_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegration_setup_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerintegration_on_setup_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerintegration_qbase_setup_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_update_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func()
///
void q_designerintegration_on_update_selection(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_qbase_update_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_update_custom_widget_plugins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerIntegration*
/// @param callback void func()
///
void q_designerintegration_on_update_custom_widget_plugins(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
///
/// Base class method implementation
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_qbase_update_custom_widget_plugins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerintegration_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerintegration_tr3(const char* s, const char* c, int n);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
///
/// @param self QDesignerIntegration*
///
QDesignerFormEditorInterface* q_designerintegration_core(void* self);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
///
/// @param self QDesignerIntegration*
/// @param f flag of enum QDesignerIntegrationInterface__FeatureFlag
///
bool q_designerintegration_has_feature(void* self, int32_t f);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
/// @param object QObject*
/// @param newName const char*
/// @param oldName const char*
///
void q_designerintegration_emit_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
///
/// @param self QDesignerIntegration*
/// @param objectName const char*
/// @param signalSignature const char*
/// @param parameterNames const char**
///
void q_designerintegration_emit_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
///
/// @param self QDesignerIntegration*
/// @param slotSignature const char*
///
void q_designerintegration_emit_navigate_to_slot2(void* self, const char* slotSignature);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
///
/// @param self QDesignerIntegration*
/// @param manual const char*
/// @param document const char*
///
void q_designerintegration_emit_help_requested(void* self, const char* manual, const char* document);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerintegration_property_changed(void* self, void* formWindow, const char* name, void* value);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
///
/// @param self QDesignerIntegration*
/// @param formWindow QDesignerFormWindowInterface*
/// @param object QObject*
/// @param newName const char*
/// @param oldName const char*
///
void q_designerintegration_object_name_changed(void* self, void* formWindow, void* object, const char* newName, const char* oldName);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
///
/// @param self QDesignerIntegration*
/// @param manual const char*
/// @param document const char*
///
void q_designerintegration_help_requested(void* self, const char* manual, const char* document);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
///
/// @param self QDesignerIntegration*
/// @param objectName const char*
/// @param signalSignature const char*
/// @param parameterNames const char**
///
void q_designerintegration_navigate_to_slot(void* self, const char* objectName, const char* signalSignature, const char* parameterNames[static 1]);

/// Inherited from QDesignerIntegrationInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
///
/// @param self QDesignerIntegration*
/// @param slotSignature const char*
///
void q_designerintegration_navigate_to_slot2(void* self, const char* slotSignature);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerIntegration*
///
const char* q_designerintegration_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerIntegration*
/// @param name char*
///
void q_designerintegration_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerIntegration*
/// @param b bool
///
bool q_designerintegration_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerIntegration*
///
QThread* q_designerintegration_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerIntegration*
/// @param thread QThread*
///
bool q_designerintegration_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegration*
/// @param interval int
///
int32_t q_designerintegration_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegration*
/// @param time int64_t of nanoseconds
///
int32_t q_designerintegration_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerIntegration*
/// @param id int
///
void q_designerintegration_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerIntegration*
/// @param id enum Qt__TimerId
///
void q_designerintegration_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerIntegration*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerintegration_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerIntegration*
/// @param parent QObject*
///
void q_designerintegration_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerIntegration*
/// @param filterObj QObject*
///
void q_designerintegration_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerIntegration*
/// @param obj QObject*
///
void q_designerintegration_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerintegration_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerintegration_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerIntegration*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerintegration_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegration_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerintegration_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
///
bool q_designerintegration_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
/// @param receiver QObject*
///
bool q_designerintegration_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerintegration_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerIntegration*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerintegration_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerIntegration*
/// @param name const char*
///
QVariant* q_designerintegration_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerIntegration*
///
const char** q_designerintegration_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerIntegration*
///
QBindingStorage* q_designerintegration_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerIntegration*
///
const QBindingStorage* q_designerintegration_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self)
///
void q_designerintegration_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerIntegration*
///
QObject* q_designerintegration_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerIntegration*
/// @param classname const char*
///
bool q_designerintegration_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegration*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerintegration_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerIntegration*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerintegration_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerintegration_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerintegration_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerIntegration*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerintegration_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
/// @param signal const char*
///
bool q_designerintegration_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerintegration_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegration_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerIntegration*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerintegration_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegration*
/// @param param1 QObject*
///
void q_designerintegration_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QObject* param1)
///
void q_designerintegration_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QEvent*
///
bool q_designerintegration_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QEvent*
///
bool q_designerintegration_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback bool func(QDesignerIntegration* self, QEvent* event)
///
void q_designerintegration_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerintegration_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerintegration_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback bool func(QDesignerIntegration* self, QObject* watched, QEvent* event)
///
void q_designerintegration_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QTimerEvent*
///
void q_designerintegration_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QTimerEvent*
///
void q_designerintegration_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QTimerEvent* event)
///
void q_designerintegration_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QChildEvent*
///
void q_designerintegration_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QChildEvent*
///
void q_designerintegration_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QChildEvent* event)
///
void q_designerintegration_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QEvent*
///
void q_designerintegration_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param event QEvent*
///
void q_designerintegration_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QEvent* event)
///
void q_designerintegration_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
void q_designerintegration_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
void q_designerintegration_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QMetaMethod* signal)
///
void q_designerintegration_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
void q_designerintegration_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
void q_designerintegration_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback void func(QDesignerIntegration* self, QMetaMethod* signal)
///
void q_designerintegration_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
///
QObject* q_designerintegration_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
///
QObject* q_designerintegration_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback QObject* func()
///
void q_designerintegration_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
///
int32_t q_designerintegration_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
///
int32_t q_designerintegration_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback int32_t func()
///
void q_designerintegration_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal const char*
///
int32_t q_designerintegration_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal const char*
///
int32_t q_designerintegration_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback int32_t func(QDesignerIntegration* self, const char* signal)
///
void q_designerintegration_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
bool q_designerintegration_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param signal QMetaMethod*
///
bool q_designerintegration_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerIntegration*
/// @param callback bool func(QDesignerIntegration* self, QMetaMethod* signal)
///
void q_designerintegration_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#dtor.QDesignerIntegration)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerIntegration*
///
void q_designerintegration_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractintegration.html#public-types)

typedef enum {
    QDESIGNERINTEGRATIONINTERFACE_RESOURCEFILEWATCHERBEHAVIOUR_NORESOURCEFILEWATCHER = 0,
    QDESIGNERINTEGRATIONINTERFACE_RESOURCEFILEWATCHERBEHAVIOUR_RELOADRESOURCEFILESILENTLY = 1,
    QDESIGNERINTEGRATIONINTERFACE_RESOURCEFILEWATCHERBEHAVIOUR_PROMPTTORELOADRESOURCEFILE = 2
} QDesignerIntegrationInterface__ResourceFileWatcherBehaviour;

/// [Upstream resources](https://api.kde.org/abstractintegration.html#public-types)

typedef enum {
    QDESIGNERINTEGRATIONINTERFACE_FEATUREFLAG_RESOURCEEDITORFEATURE = 1,
    QDESIGNERINTEGRATIONINTERFACE_FEATUREFLAG_SLOTNAVIGATIONFEATURE = 2,
    QDESIGNERINTEGRATIONINTERFACE_FEATUREFLAG_DEFAULTWIDGETACTIONFEATURE = 4,
    QDESIGNERINTEGRATIONINTERFACE_FEATUREFLAG_DEFAULTFEATURE = 5
} QDesignerIntegrationInterface__FeatureFlag;

#endif
