#pragma once
#ifndef QML_LIBQQMLAPPLICATIONENGINE_H
#define QML_LIBQQMLAPPLICATIONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new constructs a new QQmlApplicationEngine object.
///
QQmlApplicationEngine* q_qmlapplicationengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new2 constructs a new QQmlApplicationEngine object.
///
/// @param url QUrl*
///
QQmlApplicationEngine* q_qmlapplicationengine_new2(void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new3 constructs a new QQmlApplicationEngine object.
///
/// @param uri const char*
/// @param typeName const char*
///
QQmlApplicationEngine* q_qmlapplicationengine_new3(const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new4 constructs a new QQmlApplicationEngine object.
///
/// @param filePath const char*
///
QQmlApplicationEngine* q_qmlapplicationengine_new4(const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new5 constructs a new QQmlApplicationEngine object.
///
/// @param parent QObject*
///
QQmlApplicationEngine* q_qmlapplicationengine_new5(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new6 constructs a new QQmlApplicationEngine object.
///
/// @param url QUrl*
/// @param parent QObject*
///
QQmlApplicationEngine* q_qmlapplicationengine_new6(void* url, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new7 constructs a new QQmlApplicationEngine object.
///
/// @param uri const char*
/// @param typeName const char*
/// @param parent QObject*
///
QQmlApplicationEngine* q_qmlapplicationengine_new7(const char* uri, const char* typeName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html)

/// q_qmlapplicationengine_new8 constructs a new QQmlApplicationEngine object.
///
/// @param filePath const char*
/// @param parent QObject*
///
QQmlApplicationEngine* q_qmlapplicationengine_new8(const char* filePath, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlApplicationEngine*
///
const QMetaObject* q_qmlapplicationengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlApplicationEngine*
/// @param callback const QMetaObject* func()
///
void q_qmlapplicationengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlApplicationEngine*
///
const QMetaObject* q_qmlapplicationengine_super_meta_object(void* self);

/// @param self QQmlApplicationEngine*
/// @param param1 const char*
///
void* q_qmlapplicationengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlApplicationEngine*
/// @param callback void* func(QQmlApplicationEngine* self, const char* param1)
///
void q_qmlapplicationengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlApplicationEngine*
/// @param param1 const char*
///
void* q_qmlapplicationengine_super_metacast(void* self, const char* param1);

/// @param self QQmlApplicationEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlapplicationengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlApplicationEngine*
/// @param callback int32_t func(QQmlApplicationEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlapplicationengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlApplicationEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlapplicationengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlapplicationengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#rootObjects)
///
/// @param self QQmlApplicationEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlapplicationengine_root_objects(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#load)
///
/// @param self QQmlApplicationEngine*
/// @param url QUrl*
///
void q_qmlapplicationengine_load(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#load)
///
/// @param self QQmlApplicationEngine*
/// @param filePath const char*
///
void q_qmlapplicationengine_load2(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#loadFromModule)
///
/// @param self QQmlApplicationEngine*
/// @param uri const char*
/// @param typeName const char*
///
void q_qmlapplicationengine_load_from_module(void* self, const char* uri, const char* typeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#setInitialProperties)
///
/// @param self QQmlApplicationEngine*
/// @param initialProperties libqt_map of const char* to QVariant*
///
void q_qmlapplicationengine_set_initial_properties(void* self, libqt_map initialProperties);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#setExtraFileSelectors)
///
/// @param self QQmlApplicationEngine*
/// @param extraFileSelectors const char**
///
void q_qmlapplicationengine_set_extra_file_selectors(void* self, const char* extraFileSelectors[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#loadData)
///
/// @param self QQmlApplicationEngine*
/// @param data char*
///
void q_qmlapplicationengine_load_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#objectCreated)
///
/// @param self QQmlApplicationEngine*
/// @param object QObject*
/// @param url QUrl*
///
void q_qmlapplicationengine_object_created(void* self, void* object, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#objectCreated)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QObject* object, QUrl* url)
///
void q_qmlapplicationengine_on_object_created(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#objectCreationFailed)
///
/// @param self QQmlApplicationEngine*
/// @param url QUrl*
///
void q_qmlapplicationengine_object_creation_failed(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#objectCreationFailed)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QUrl* url)
///
void q_qmlapplicationengine_on_object_creation_failed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlapplicationengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlapplicationengine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#loadData)
///
/// @param self QQmlApplicationEngine*
/// @param data char*
/// @param url QUrl*
///
void q_qmlapplicationengine_load_data2(void* self, char* data, void* url);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#rootContext)
///
/// @param self QQmlApplicationEngine*
///
QQmlContext* q_qmlapplicationengine_root_context(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearComponentCache)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_clear_component_cache(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#trimComponentCache)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_trim_component_cache(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearSingletons)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_clear_singletons(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPathList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlApplicationEngine*
///
const char** q_qmlapplicationengine_import_path_list(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setImportPathList)
///
/// @param self QQmlApplicationEngine*
/// @param paths const char**
///
void q_qmlapplicationengine_set_import_path_list(void* self, const char* paths[static 1]);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImportPath)
///
/// @param self QQmlApplicationEngine*
/// @param dir const char*
///
void q_qmlapplicationengine_add_import_path(void* self, const char* dir);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#pluginPathList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlApplicationEngine*
///
const char** q_qmlapplicationengine_plugin_path_list(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setPluginPathList)
///
/// @param self QQmlApplicationEngine*
/// @param paths const char**
///
void q_qmlapplicationengine_set_plugin_path_list(void* self, const char* paths[static 1]);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addPluginPath)
///
/// @param self QQmlApplicationEngine*
/// @param dir const char*
///
void q_qmlapplicationengine_add_plugin_path(void* self, const char* dir);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addNamedBundle)
///
/// @param self QQmlApplicationEngine*
/// @param param1 const char*
/// @param param2 const char*
///
bool q_qmlapplicationengine_add_named_bundle(void* self, const char* param1, const char* param2);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPlugin)
///
/// @param self QQmlApplicationEngine*
/// @param filePath const char*
/// @param uri const char*
/// @param errors libqt_list of QQmlError*
///
bool q_qmlapplicationengine_import_plugin(void* self, const char* filePath, const char* uri, libqt_list errors);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setNetworkAccessManagerFactory)
///
/// @param self QQmlApplicationEngine*
/// @param networkAccessManagerFactory QQmlNetworkAccessManagerFactory*
///
void q_qmlapplicationengine_set_network_access_manager_factory(void* self, void* networkAccessManagerFactory);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManagerFactory)
///
/// @param self QQmlApplicationEngine*
///
QQmlNetworkAccessManagerFactory* q_qmlapplicationengine_network_access_manager_factory(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManager)
///
/// @param self QQmlApplicationEngine*
///
QNetworkAccessManager* q_qmlapplicationengine_network_access_manager(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setUrlInterceptor)
///
/// @param self QQmlApplicationEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlapplicationengine_set_url_interceptor(void* self, void* urlInterceptor);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptor)
///
/// @param self QQmlApplicationEngine*
///
QQmlAbstractUrlInterceptor* q_qmlapplicationengine_url_interceptor(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addUrlInterceptor)
///
/// @param self QQmlApplicationEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlapplicationengine_add_url_interceptor(void* self, void* urlInterceptor);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeUrlInterceptor)
///
/// @param self QQmlApplicationEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlapplicationengine_remove_url_interceptor(void* self, void* urlInterceptor);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptors)
///
/// @param self QQmlApplicationEngine*
///
/// @return libqt_list of QQmlAbstractUrlInterceptor*
///
libqt_list q_qmlapplicationengine_url_interceptors(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#interceptUrl)
///
/// @param self QQmlApplicationEngine*
/// @param url QUrl*
/// @param type enum QQmlAbstractUrlInterceptor__DataType
///
QUrl* q_qmlapplicationengine_intercept_url(void* self, void* url, int32_t type);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImageProvider)
///
/// @param self QQmlApplicationEngine*
/// @param id const char*
/// @param param2 QQmlImageProviderBase*
///
void q_qmlapplicationengine_add_image_provider(void* self, const char* id, void* param2);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#imageProvider)
///
/// @param self QQmlApplicationEngine*
/// @param id const char*
///
QQmlImageProviderBase* q_qmlapplicationengine_image_provider(void* self, const char* id);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeImageProvider)
///
/// @param self QQmlApplicationEngine*
/// @param id const char*
///
void q_qmlapplicationengine_remove_image_provider(void* self, const char* id);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setIncubationController)
///
/// @param self QQmlApplicationEngine*
/// @param incubationController QQmlIncubationController*
///
void q_qmlapplicationengine_set_incubation_controller(void* self, void* incubationController);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#incubationController)
///
/// @param self QQmlApplicationEngine*
///
QQmlIncubationController* q_qmlapplicationengine_incubation_controller(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOfflineStoragePath)
///
/// @param self QQmlApplicationEngine*
/// @param dir const char*
///
void q_qmlapplicationengine_set_offline_storage_path(void* self, const char* dir);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlApplicationEngine*
///
const char* q_qmlapplicationengine_offline_storage_path(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStorageDatabaseFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlApplicationEngine*
/// @param databaseName const char*
///
const char* q_qmlapplicationengine_offline_storage_database_file_path(void* self, const char* databaseName);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#baseUrl)
///
/// @param self QQmlApplicationEngine*
///
QUrl* q_qmlapplicationengine_base_url(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setBaseUrl)
///
/// @param self QQmlApplicationEngine*
/// @param baseUrl QUrl*
///
void q_qmlapplicationengine_set_base_url(void* self, void* baseUrl);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#outputWarningsToStandardError)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_output_warnings_to_standard_error(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOutputWarningsToStandardError)
///
/// @param self QQmlApplicationEngine*
/// @param outputWarningsToStandardError bool
///
void q_qmlapplicationengine_set_output_warnings_to_standard_error(void* self, bool outputWarningsToStandardError);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#markCurrentFunctionAsTranslationBinding)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_mark_current_function_as_translation_binding(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#captureProperty)
///
/// @param self QQmlApplicationEngine*
/// @param object QObject*
/// @param property QMetaProperty*
///
void q_qmlapplicationengine_capture_property(void* self, void* object, void* property);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#retranslate)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_retranslate(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_offline_storage_path_changed(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self)
///
void q_qmlapplicationengine_on_offline_storage_path_changed(void* self, void (*callback)(void*));

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#contextForObject)
///
/// @param param1 QObject*
///
QQmlContext* q_qmlapplicationengine_context_for_object(void* param1);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setContextForObject)
///
/// @param param1 QObject*
/// @param param2 QQmlContext*
///
void q_qmlapplicationengine_set_context_for_object(void* param1, void* param2);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_quit(void* self);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self)
///
void q_qmlapplicationengine_on_quit(void* self, void (*callback)(void*));

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
///
/// @param self QQmlApplicationEngine*
/// @param retCode int
///
void q_qmlapplicationengine_exit(void* self, int retCode);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, int retCode)
///
void q_qmlapplicationengine_on_exit(void* self, void (*callback)(void*, int));

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
///
/// @param self QQmlApplicationEngine*
/// @param warnings libqt_list of QQmlError*
///
void q_qmlapplicationengine_warnings(void* self, libqt_list warnings);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, libqt_list of QQmlError* warnings)
///
void q_qmlapplicationengine_on_warnings(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#globalObject)
///
/// @param self QQmlApplicationEngine*
///
QJSValue* q_qmlapplicationengine_global_object(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlApplicationEngine*
/// @param program const char*
///
QJSValue* q_qmlapplicationengine_evaluate(void* self, const char* program);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#importModule)
///
/// @param self QQmlApplicationEngine*
/// @param fileName const char*
///
QJSValue* q_qmlapplicationengine_import_module(void* self, const char* fileName);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#registerModule)
///
/// @param self QQmlApplicationEngine*
/// @param moduleName const char*
/// @param value QJSValue*
///
bool q_qmlapplicationengine_register_module(void* self, const char* moduleName, void* value);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newObject)
///
/// @param self QQmlApplicationEngine*
///
QJSValue* q_qmlapplicationengine_new_object(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newSymbol)
///
/// @param self QQmlApplicationEngine*
/// @param name const char*
///
QJSValue* q_qmlapplicationengine_new_symbol(void* self, const char* name);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QQmlApplicationEngine*
///
QJSValue* q_qmlapplicationengine_new_array(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQObject)
///
/// @param self QQmlApplicationEngine*
/// @param object QObject*
///
QJSValue* q_qmlapplicationengine_new_q_object(void* self, void* object);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQMetaObject)
///
/// @param self QQmlApplicationEngine*
/// @param metaObject QMetaObject*
///
QJSValue* q_qmlapplicationengine_new_q_meta_object(void* self, void* metaObject);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QQmlApplicationEngine*
/// @param errorType enum QJSValue__ErrorType
///
QJSValue* q_qmlapplicationengine_new_error_object(void* self, int32_t errorType);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#collectGarbage)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_collect_garbage(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setObjectOwnership)
///
/// @param param1 QObject*
/// @param param2 enum QJSEngine__ObjectOwnership
///
void q_qmlapplicationengine_set_object_ownership(void* param1, int32_t param2);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#objectOwnership)
///
/// @param param1 QObject*
///
/// @return enum QJSEngine__ObjectOwnership
///
int32_t q_qmlapplicationengine_object_ownership(void* param1);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QQmlApplicationEngine*
/// @param extensions flag of enum QJSEngine__Extension
///
void q_qmlapplicationengine_install_extensions(void* self, int32_t extensions);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setInterrupted)
///
/// @param self QQmlApplicationEngine*
/// @param interrupted bool
///
void q_qmlapplicationengine_set_interrupted(void* self, bool interrupted);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#isInterrupted)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_is_interrupted(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlApplicationEngine*
/// @param message const char*
///
void q_qmlapplicationengine_throw_error(void* self, const char* message);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlApplicationEngine*
/// @param errorType enum QJSValue__ErrorType
///
void q_qmlapplicationengine_throw_error2(void* self, int32_t errorType);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlApplicationEngine*
/// @param error QJSValue*
///
void q_qmlapplicationengine_throw_error3(void* self, void* error);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#hasError)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_has_error(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#catchError)
///
/// @param self QQmlApplicationEngine*
///
QJSValue* q_qmlapplicationengine_catch_error(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlApplicationEngine*
///
const char* q_qmlapplicationengine_ui_language(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setUiLanguage)
///
/// @param self QQmlApplicationEngine*
/// @param language const char*
///
void q_qmlapplicationengine_set_ui_language(void* self, const char* language);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_ui_language_changed(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self)
///
void q_qmlapplicationengine_on_ui_language_changed(void* self, void (*callback)(void*));

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlApplicationEngine*
/// @param program const char*
/// @param fileName const char*
///
QJSValue* q_qmlapplicationengine_evaluate2(void* self, const char* program, const char* fileName);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlApplicationEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
///
QJSValue* q_qmlapplicationengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlApplicationEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
/// @param exceptionStackTrace const char**
///
QJSValue* q_qmlapplicationengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QQmlApplicationEngine*
/// @param length uint32_t
///
QJSValue* q_qmlapplicationengine_new_array1(void* self, uint32_t length);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QQmlApplicationEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
QJSValue* q_qmlapplicationengine_new_error_object2(void* self, int32_t errorType, const char* message);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QQmlApplicationEngine*
/// @param extensions flag of enum QJSEngine__Extension
/// @param object QJSValue*
///
void q_qmlapplicationengine_install_extensions2(void* self, int32_t extensions, void* object);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlApplicationEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
void q_qmlapplicationengine_throw_error22(void* self, int32_t errorType, const char* message);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlApplicationEngine*
///
const char* q_qmlapplicationengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlApplicationEngine*
/// @param name const char*
///
void q_qmlapplicationengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlApplicationEngine*
/// @param b bool
///
bool q_qmlapplicationengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlApplicationEngine*
///
QThread* q_qmlapplicationengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlApplicationEngine*
/// @param thread QThread*
///
bool q_qmlapplicationengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlApplicationEngine*
/// @param interval int
///
int32_t q_qmlapplicationengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlApplicationEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlapplicationengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlApplicationEngine*
/// @param id int
///
void q_qmlapplicationengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlApplicationEngine*
/// @param id enum Qt__TimerId
///
void q_qmlapplicationengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlApplicationEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlapplicationengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlApplicationEngine*
/// @param parent QObject*
///
void q_qmlapplicationengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlApplicationEngine*
/// @param filterObj QObject*
///
void q_qmlapplicationengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlApplicationEngine*
/// @param obj QObject*
///
void q_qmlapplicationengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlapplicationengine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlapplicationengine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlApplicationEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlapplicationengine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlapplicationengine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlapplicationengine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
///
bool q_qmlapplicationengine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
/// @param receiver QObject*
///
bool q_qmlapplicationengine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlapplicationengine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlApplicationEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlapplicationengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlApplicationEngine*
/// @param name const char*
///
QVariant* q_qmlapplicationengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlApplicationEngine*
///
const char** q_qmlapplicationengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlApplicationEngine*
///
QBindingStorage* q_qmlapplicationengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlApplicationEngine*
///
const QBindingStorage* q_qmlapplicationengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self)
///
void q_qmlapplicationengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlApplicationEngine*
///
QObject* q_qmlapplicationengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlApplicationEngine*
/// @param classname const char*
///
bool q_qmlapplicationengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlApplicationEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlapplicationengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlApplicationEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlapplicationengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlapplicationengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlapplicationengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlApplicationEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlapplicationengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
/// @param signal const char*
///
bool q_qmlapplicationengine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlapplicationengine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlapplicationengine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlApplicationEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlapplicationengine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlApplicationEngine*
/// @param param1 QObject*
///
void q_qmlapplicationengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QObject* param1)
///
void q_qmlapplicationengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param param1 QEvent*
///
bool q_qmlapplicationengine_event(void* self, void* param1);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param param1 QEvent*
///
bool q_qmlapplicationengine_super_event(void* self, void* param1);

/// Inherited from QQmlEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback bool func(QQmlApplicationEngine* self, QEvent* param1)
///
void q_qmlapplicationengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlapplicationengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlapplicationengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback bool func(QQmlApplicationEngine* self, QObject* watched, QEvent* event)
///
void q_qmlapplicationengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QTimerEvent*
///
void q_qmlapplicationengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QTimerEvent*
///
void q_qmlapplicationengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QTimerEvent* event)
///
void q_qmlapplicationengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QChildEvent*
///
void q_qmlapplicationengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QChildEvent*
///
void q_qmlapplicationengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QChildEvent* event)
///
void q_qmlapplicationengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QEvent*
///
void q_qmlapplicationengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param event QEvent*
///
void q_qmlapplicationengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QEvent* event)
///
void q_qmlapplicationengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
void q_qmlapplicationengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
void q_qmlapplicationengine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QMetaMethod* signal)
///
void q_qmlapplicationengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
void q_qmlapplicationengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
void q_qmlapplicationengine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, QMetaMethod* signal)
///
void q_qmlapplicationengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
///
QObject* q_qmlapplicationengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
///
QObject* q_qmlapplicationengine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback QObject* func()
///
void q_qmlapplicationengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
///
int32_t q_qmlapplicationengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
///
int32_t q_qmlapplicationengine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback int32_t func()
///
void q_qmlapplicationengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal const char*
///
int32_t q_qmlapplicationengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal const char*
///
int32_t q_qmlapplicationengine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback int32_t func(QQmlApplicationEngine* self, const char* signal)
///
void q_qmlapplicationengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
bool q_qmlapplicationengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param signal QMetaMethod*
///
bool q_qmlapplicationengine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlApplicationEngine*
/// @param callback bool func(QQmlApplicationEngine* self, QMetaMethod* signal)
///
void q_qmlapplicationengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlApplicationEngine*
/// @param callback void func(QQmlApplicationEngine* self, const char* objectName)
///
void q_qmlapplicationengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlapplicationengine.html#dtor.QQmlApplicationEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlApplicationEngine*
///
void q_qmlapplicationengine_delete(void* self);

#endif
