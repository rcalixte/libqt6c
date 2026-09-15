#include "../libqcoreevent.hpp"
#include "libqjsengine.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqqmlapplicationengine.hpp"
#include "libqqmlapplicationengine.h"

QQmlApplicationEngine* q_qmlapplicationengine_new() {
    return QQmlApplicationEngine_New();
}

QQmlApplicationEngine* q_qmlapplicationengine_new2(void* url) {
    return QQmlApplicationEngine_New2((QUrl*)url);
}

QQmlApplicationEngine* q_qmlapplicationengine_new3(const char* uri, const char* typeName) {
    return QQmlApplicationEngine_New3(uri, typeName);
}

QQmlApplicationEngine* q_qmlapplicationengine_new4(const char* filePath) {
    return QQmlApplicationEngine_New4(qstring(filePath));
}

QQmlApplicationEngine* q_qmlapplicationengine_new5(void* parent) {
    return QQmlApplicationEngine_New5((QObject*)parent);
}

QQmlApplicationEngine* q_qmlapplicationengine_new6(void* url, void* parent) {
    return QQmlApplicationEngine_New6((QUrl*)url, (QObject*)parent);
}

QQmlApplicationEngine* q_qmlapplicationengine_new7(const char* uri, const char* typeName, void* parent) {
    return QQmlApplicationEngine_New7(uri, typeName, (QObject*)parent);
}

QQmlApplicationEngine* q_qmlapplicationengine_new8(const char* filePath, void* parent) {
    return QQmlApplicationEngine_New8(qstring(filePath), (QObject*)parent);
}

const QMetaObject* q_qmlapplicationengine_meta_object(void* self) {
    return QQmlApplicationEngine_MetaObject((QQmlApplicationEngine*)self);
}

void q_qmlapplicationengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlApplicationEngine_OnMetaObject((QQmlApplicationEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlapplicationengine_super_meta_object(void* self) {
    return QQmlApplicationEngine_SuperMetaObject((QQmlApplicationEngine*)self);
}

void* q_qmlapplicationengine_metacast(void* self, const char* param1) {
    return QQmlApplicationEngine_Metacast((QQmlApplicationEngine*)self, param1);
}

void q_qmlapplicationengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlApplicationEngine_OnMetacast((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void* q_qmlapplicationengine_super_metacast(void* self, const char* param1) {
    return QQmlApplicationEngine_SuperMetacast((QQmlApplicationEngine*)self, param1);
}

int32_t q_qmlapplicationengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlApplicationEngine_Metacall((QQmlApplicationEngine*)self, param1, param2, param3);
}

void q_qmlapplicationengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlApplicationEngine_OnMetacall((QQmlApplicationEngine*)self, (intptr_t)callback);
}

int32_t q_qmlapplicationengine_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlApplicationEngine_SuperMetacall((QQmlApplicationEngine*)self, param1, param2, param3);
}

const char* q_qmlapplicationengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QObject* */ q_qmlapplicationengine_root_objects(void* self) {
    libqt_list _arr = QQmlApplicationEngine_RootObjects((QQmlApplicationEngine*)self);
    return _arr;
}

void q_qmlapplicationengine_load(void* self, void* url) {
    QQmlApplicationEngine_Load((QQmlApplicationEngine*)self, (QUrl*)url);
}

void q_qmlapplicationengine_load2(void* self, const char* filePath) {
    QQmlApplicationEngine_Load2((QQmlApplicationEngine*)self, qstring(filePath));
}

void q_qmlapplicationengine_load_from_module(void* self, const char* uri, const char* typeName) {
    QQmlApplicationEngine_LoadFromModule((QQmlApplicationEngine*)self, uri, typeName);
}

void q_qmlapplicationengine_set_initial_properties(void* self, libqt_map /* of const char* to QVariant* */ initialProperties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map initialProperties_ret;
    initialProperties_ret.len = initialProperties.len;
    initialProperties_ret.keys = (libqt_string*)malloc(initialProperties_ret.len * sizeof(libqt_string));
    if (initialProperties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlapplicationengine_set_initial_properties\n");
        abort();
    }
    initialProperties_ret.values = (QVariant**)malloc(initialProperties_ret.len * sizeof(QVariant*));
    if (initialProperties_ret.values == NULL) {
        free(initialProperties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlapplicationengine_set_initial_properties\n");
        abort();
    }
    const char** initialProperties_karr = (const char**)initialProperties.keys;
    libqt_string* initialProperties_kdest = (libqt_string*)initialProperties_ret.keys;
    QVariant** initialProperties_varr = (QVariant**)initialProperties.values;
    QVariant** initialProperties_vdest = (QVariant**)initialProperties_ret.values;
    for (size_t i = 0; i < initialProperties_ret.len; ++i) {
        initialProperties_kdest[i] = qstring(initialProperties_karr[i]);
        initialProperties_vdest[i] = initialProperties_varr[i];
    }
    QQmlApplicationEngine_SetInitialProperties((QQmlApplicationEngine*)self, initialProperties_ret);
    free(initialProperties_ret.keys);
    free(initialProperties_ret.values);
}

void q_qmlapplicationengine_set_extra_file_selectors(void* self, const char* extraFileSelectors[static 1]) {
    size_t extraFileSelectors_len = libqt_strv_length(extraFileSelectors);
    libqt_string* extraFileSelectors_qstr = (libqt_string*)malloc(extraFileSelectors_len * sizeof(libqt_string));
    if (extraFileSelectors_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_set_extra_file_selectors\n");
        abort();
    }
    for (size_t i = 0; i < extraFileSelectors_len; ++i)
        extraFileSelectors_qstr[i] = qstring(extraFileSelectors[i]);
    libqt_list extraFileSelectors_list = qlist(extraFileSelectors_qstr, extraFileSelectors_len);
    QQmlApplicationEngine_SetExtraFileSelectors((QQmlApplicationEngine*)self, extraFileSelectors_list);
    free(extraFileSelectors_qstr);
}

void q_qmlapplicationengine_load_data(void* self, char* data) {
    QQmlApplicationEngine_LoadData((QQmlApplicationEngine*)self, qstring(data));
}

void q_qmlapplicationengine_object_created(void* self, void* object, void* url) {
    QQmlApplicationEngine_ObjectCreated((QQmlApplicationEngine*)self, (QObject*)object, (QUrl*)url);
}

void q_qmlapplicationengine_on_object_created(void* self, void (*callback)(void*, void*, void*)) {
    QQmlApplicationEngine_Connect_ObjectCreated((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_object_creation_failed(void* self, void* url) {
    QQmlApplicationEngine_ObjectCreationFailed((QQmlApplicationEngine*)self, (QUrl*)url);
}

void q_qmlapplicationengine_on_object_creation_failed(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_Connect_ObjectCreationFailed((QQmlApplicationEngine*)self, (intptr_t)callback);
}

const char* q_qmlapplicationengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlapplicationengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlapplicationengine_load_data2(void* self, char* data, void* url) {
    QQmlApplicationEngine_LoadData2((QQmlApplicationEngine*)self, qstring(data), (QUrl*)url);
}

QQmlContext* q_qmlapplicationengine_root_context(void* self) {
    return QQmlEngine_RootContext((QQmlEngine*)self);
}

void q_qmlapplicationengine_clear_component_cache(void* self) {
    QQmlEngine_ClearComponentCache((QQmlEngine*)self);
}

void q_qmlapplicationengine_trim_component_cache(void* self) {
    QQmlEngine_TrimComponentCache((QQmlEngine*)self);
}

void q_qmlapplicationengine_clear_singletons(void* self) {
    QQmlEngine_ClearSingletons((QQmlEngine*)self);
}

const char** q_qmlapplicationengine_import_path_list(void* self) {
    libqt_list _arr = QQmlEngine_ImportPathList((QQmlEngine*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_import_path_list\n");
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

void q_qmlapplicationengine_set_import_path_list(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_set_import_path_list\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i)
        paths_qstr[i] = qstring(paths[i]);
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QQmlEngine_SetImportPathList((QQmlEngine*)self, paths_list);
    free(paths_qstr);
}

void q_qmlapplicationengine_add_import_path(void* self, const char* dir) {
    QQmlEngine_AddImportPath((QQmlEngine*)self, qstring(dir));
}

const char** q_qmlapplicationengine_plugin_path_list(void* self) {
    libqt_list _arr = QQmlEngine_PluginPathList((QQmlEngine*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_plugin_path_list\n");
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

void q_qmlapplicationengine_set_plugin_path_list(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_set_plugin_path_list\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i)
        paths_qstr[i] = qstring(paths[i]);
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QQmlEngine_SetPluginPathList((QQmlEngine*)self, paths_list);
    free(paths_qstr);
}

void q_qmlapplicationengine_add_plugin_path(void* self, const char* dir) {
    QQmlEngine_AddPluginPath((QQmlEngine*)self, qstring(dir));
}

bool q_qmlapplicationengine_add_named_bundle(void* self, const char* param1, const char* param2) {
    return QQmlEngine_AddNamedBundle((QQmlEngine*)self, qstring(param1), qstring(param2));
}

bool q_qmlapplicationengine_import_plugin(void* self, const char* filePath, const char* uri, libqt_list /* of QQmlError* */ errors) {
    return QQmlEngine_ImportPlugin((QQmlEngine*)self, qstring(filePath), qstring(uri), errors);
}

void q_qmlapplicationengine_set_network_access_manager_factory(void* self, void* networkAccessManagerFactory) {
    QQmlEngine_SetNetworkAccessManagerFactory((QQmlEngine*)self, (QQmlNetworkAccessManagerFactory*)networkAccessManagerFactory);
}

QQmlNetworkAccessManagerFactory* q_qmlapplicationengine_network_access_manager_factory(void* self) {
    return QQmlEngine_NetworkAccessManagerFactory((QQmlEngine*)self);
}

QNetworkAccessManager* q_qmlapplicationengine_network_access_manager(void* self) {
    return QQmlEngine_NetworkAccessManager((QQmlEngine*)self);
}

void q_qmlapplicationengine_set_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_SetUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

QQmlAbstractUrlInterceptor* q_qmlapplicationengine_url_interceptor(void* self) {
    return QQmlEngine_UrlInterceptor((QQmlEngine*)self);
}

void q_qmlapplicationengine_add_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_AddUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

void q_qmlapplicationengine_remove_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_RemoveUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

libqt_list /* of QQmlAbstractUrlInterceptor* */ q_qmlapplicationengine_url_interceptors(void* self) {
    libqt_list _arr = QQmlEngine_UrlInterceptors((QQmlEngine*)self);
    return _arr;
}

QUrl* q_qmlapplicationengine_intercept_url(void* self, void* url, int32_t type) {
    return QQmlEngine_InterceptUrl((QQmlEngine*)self, (QUrl*)url, type);
}

void q_qmlapplicationengine_add_image_provider(void* self, const char* id, void* param2) {
    QQmlEngine_AddImageProvider((QQmlEngine*)self, qstring(id), (QQmlImageProviderBase*)param2);
}

QQmlImageProviderBase* q_qmlapplicationengine_image_provider(void* self, const char* id) {
    return QQmlEngine_ImageProvider((QQmlEngine*)self, qstring(id));
}

void q_qmlapplicationengine_remove_image_provider(void* self, const char* id) {
    QQmlEngine_RemoveImageProvider((QQmlEngine*)self, qstring(id));
}

void q_qmlapplicationengine_set_incubation_controller(void* self, void* incubationController) {
    QQmlEngine_SetIncubationController((QQmlEngine*)self, (QQmlIncubationController*)incubationController);
}

QQmlIncubationController* q_qmlapplicationengine_incubation_controller(void* self) {
    return QQmlEngine_IncubationController((QQmlEngine*)self);
}

void q_qmlapplicationengine_set_offline_storage_path(void* self, const char* dir) {
    QQmlEngine_SetOfflineStoragePath((QQmlEngine*)self, qstring(dir));
}

const char* q_qmlapplicationengine_offline_storage_path(void* self) {
    libqt_string _str = QQmlEngine_OfflineStoragePath((QQmlEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlapplicationengine_offline_storage_database_file_path(void* self, const char* databaseName) {
    libqt_string _str = QQmlEngine_OfflineStorageDatabaseFilePath((QQmlEngine*)self, qstring(databaseName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_qmlapplicationengine_base_url(void* self) {
    return QQmlEngine_BaseUrl((QQmlEngine*)self);
}

void q_qmlapplicationengine_set_base_url(void* self, void* baseUrl) {
    QQmlEngine_SetBaseUrl((QQmlEngine*)self, (QUrl*)baseUrl);
}

bool q_qmlapplicationengine_output_warnings_to_standard_error(void* self) {
    return QQmlEngine_OutputWarningsToStandardError((QQmlEngine*)self);
}

void q_qmlapplicationengine_set_output_warnings_to_standard_error(void* self, bool outputWarningsToStandardError) {
    QQmlEngine_SetOutputWarningsToStandardError((QQmlEngine*)self, outputWarningsToStandardError);
}

void q_qmlapplicationengine_mark_current_function_as_translation_binding(void* self) {
    QQmlEngine_MarkCurrentFunctionAsTranslationBinding((QQmlEngine*)self);
}

void q_qmlapplicationengine_capture_property(void* self, void* object, void* property) {
    QQmlEngine_CaptureProperty((QQmlEngine*)self, (QObject*)object, (QMetaProperty*)property);
}

void q_qmlapplicationengine_retranslate(void* self) {
    QQmlEngine_Retranslate((QQmlEngine*)self);
}

void q_qmlapplicationengine_offline_storage_path_changed(void* self) {
    QQmlEngine_OfflineStoragePathChanged((QQmlEngine*)self);
}

void q_qmlapplicationengine_on_offline_storage_path_changed(void* self, void (*callback)(void*)) {
    QQmlEngine_Connect_OfflineStoragePathChanged((QQmlEngine*)self, (intptr_t)callback);
}

QQmlContext* q_qmlapplicationengine_context_for_object(void* param1) {
    return QQmlEngine_ContextForObject((QObject*)param1);
}

void q_qmlapplicationengine_set_context_for_object(void* param1, void* param2) {
    QQmlEngine_SetContextForObject((QObject*)param1, (QQmlContext*)param2);
}

void q_qmlapplicationengine_quit(void* self) {
    QQmlEngine_Quit((QQmlEngine*)self);
}

void q_qmlapplicationengine_on_quit(void* self, void (*callback)(void*)) {
    QQmlEngine_Connect_Quit((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_exit(void* self, int retCode) {
    QQmlEngine_Exit((QQmlEngine*)self, retCode);
}

void q_qmlapplicationengine_on_exit(void* self, void (*callback)(void*, int)) {
    QQmlEngine_Connect_Exit((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_warnings(void* self, libqt_list /* of QQmlError* */ warnings) {
    QQmlEngine_Warnings((QQmlEngine*)self, warnings);
}

void q_qmlapplicationengine_on_warnings(void* self, void (*callback)(void*, libqt_list /* of QQmlError* */)) {
    QQmlEngine_Connect_Warnings((QQmlEngine*)self, (intptr_t)callback);
}

QJSValue* q_qmlapplicationengine_global_object(void* self) {
    return QJSEngine_GlobalObject((QJSEngine*)self);
}

QJSValue* q_qmlapplicationengine_evaluate(void* self, const char* program) {
    return QJSEngine_Evaluate((QJSEngine*)self, qstring(program));
}

QJSValue* q_qmlapplicationengine_import_module(void* self, const char* fileName) {
    return QJSEngine_ImportModule((QJSEngine*)self, qstring(fileName));
}

bool q_qmlapplicationengine_register_module(void* self, const char* moduleName, void* value) {
    return QJSEngine_RegisterModule((QJSEngine*)self, qstring(moduleName), (QJSValue*)value);
}

QJSValue* q_qmlapplicationengine_new_object(void* self) {
    return QJSEngine_NewObject((QJSEngine*)self);
}

QJSValue* q_qmlapplicationengine_new_symbol(void* self, const char* name) {
    return QJSEngine_NewSymbol((QJSEngine*)self, qstring(name));
}

QJSValue* q_qmlapplicationengine_new_array(void* self) {
    return QJSEngine_NewArray((QJSEngine*)self);
}

QJSValue* q_qmlapplicationengine_new_q_object(void* self, void* object) {
    return QJSEngine_NewQObject((QJSEngine*)self, (QObject*)object);
}

QJSValue* q_qmlapplicationengine_new_q_meta_object(void* self, void* metaObject) {
    return QJSEngine_NewQMetaObject((QJSEngine*)self, (QMetaObject*)metaObject);
}

QJSValue* q_qmlapplicationengine_new_error_object(void* self, int32_t errorType) {
    return QJSEngine_NewErrorObject((QJSEngine*)self, errorType);
}

void q_qmlapplicationengine_collect_garbage(void* self) {
    QJSEngine_CollectGarbage((QJSEngine*)self);
}

void q_qmlapplicationengine_set_object_ownership(void* param1, int32_t param2) {
    QJSEngine_SetObjectOwnership((QObject*)param1, param2);
}

int32_t q_qmlapplicationengine_object_ownership(void* param1) {
    return QJSEngine_ObjectOwnership((QObject*)param1);
}

void q_qmlapplicationengine_install_extensions(void* self, int32_t extensions) {
    QJSEngine_InstallExtensions((QJSEngine*)self, extensions);
}

void q_qmlapplicationengine_set_interrupted(void* self, bool interrupted) {
    QJSEngine_SetInterrupted((QJSEngine*)self, interrupted);
}

bool q_qmlapplicationengine_is_interrupted(void* self) {
    return QJSEngine_IsInterrupted((QJSEngine*)self);
}

void q_qmlapplicationengine_throw_error(void* self, const char* message) {
    QJSEngine_ThrowError((QJSEngine*)self, qstring(message));
}

void q_qmlapplicationengine_throw_error2(void* self, int32_t errorType) {
    QJSEngine_ThrowError2((QJSEngine*)self, errorType);
}

void q_qmlapplicationengine_throw_error3(void* self, void* error) {
    QJSEngine_ThrowError3((QJSEngine*)self, (QJSValue*)error);
}

bool q_qmlapplicationengine_has_error(void* self) {
    return QJSEngine_HasError((QJSEngine*)self);
}

QJSValue* q_qmlapplicationengine_catch_error(void* self) {
    return QJSEngine_CatchError((QJSEngine*)self);
}

const char* q_qmlapplicationengine_ui_language(void* self) {
    libqt_string _str = QJSEngine_UiLanguage((QJSEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlapplicationengine_set_ui_language(void* self, const char* language) {
    QJSEngine_SetUiLanguage((QJSEngine*)self, qstring(language));
}

void q_qmlapplicationengine_ui_language_changed(void* self) {
    QJSEngine_UiLanguageChanged((QJSEngine*)self);
}

void q_qmlapplicationengine_on_ui_language_changed(void* self, void (*callback)(void*)) {
    QJSEngine_Connect_UiLanguageChanged((QJSEngine*)self, (intptr_t)callback);
}

QJSValue* q_qmlapplicationengine_evaluate2(void* self, const char* program, const char* fileName) {
    return QJSEngine_Evaluate2((QJSEngine*)self, qstring(program), qstring(fileName));
}

QJSValue* q_qmlapplicationengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber) {
    return QJSEngine_Evaluate3((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber);
}

QJSValue* q_qmlapplicationengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]) {
    size_t exceptionStackTrace_len = libqt_strv_length(exceptionStackTrace);
    libqt_string* exceptionStackTrace_qstr = (libqt_string*)malloc(exceptionStackTrace_len * sizeof(libqt_string));
    if (exceptionStackTrace_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_evaluate4\n");
        abort();
    }
    for (size_t i = 0; i < exceptionStackTrace_len; ++i)
        exceptionStackTrace_qstr[i] = qstring(exceptionStackTrace[i]);
    libqt_list exceptionStackTrace_list = qlist(exceptionStackTrace_qstr, exceptionStackTrace_len);
    QJSValue* _out = QJSEngine_Evaluate4((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber, exceptionStackTrace_list);
    free(exceptionStackTrace_qstr);
    return _out;
}

QJSValue* q_qmlapplicationengine_new_array1(void* self, uint32_t length) {
    return QJSEngine_NewArray1((QJSEngine*)self, length);
}

QJSValue* q_qmlapplicationengine_new_error_object2(void* self, int32_t errorType, const char* message) {
    return QJSEngine_NewErrorObject2((QJSEngine*)self, errorType, qstring(message));
}

void q_qmlapplicationengine_install_extensions2(void* self, int32_t extensions, void* object) {
    QJSEngine_InstallExtensions2((QJSEngine*)self, extensions, (QJSValue*)object);
}

void q_qmlapplicationengine_throw_error22(void* self, int32_t errorType, const char* message) {
    QJSEngine_ThrowError22((QJSEngine*)self, errorType, qstring(message));
}

const char* q_qmlapplicationengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlapplicationengine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlapplicationengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlapplicationengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlapplicationengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlapplicationengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlapplicationengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlapplicationengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlapplicationengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlapplicationengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlapplicationengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlapplicationengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlapplicationengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlapplicationengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlapplicationengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlapplicationengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlapplicationengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlapplicationengine_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlapplicationengine_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlapplicationengine_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlapplicationengine_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlapplicationengine_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlapplicationengine_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlapplicationengine_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlapplicationengine_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlapplicationengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlapplicationengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlapplicationengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlapplicationengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlapplicationengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlapplicationengine_dynamic_property_names\n");
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

QBindingStorage* q_qmlapplicationengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlapplicationengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlapplicationengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlapplicationengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlapplicationengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlapplicationengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlapplicationengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlapplicationengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlapplicationengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlapplicationengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlapplicationengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlapplicationengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlapplicationengine_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlapplicationengine_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlapplicationengine_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlapplicationengine_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlapplicationengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlapplicationengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlapplicationengine_event(void* self, void* param1) {
    return QQmlApplicationEngine_Event((QQmlApplicationEngine*)self, (QEvent*)param1);
}

bool q_qmlapplicationengine_super_event(void* self, void* param1) {
    return QQmlApplicationEngine_SuperEvent((QQmlApplicationEngine*)self, (QEvent*)param1);
}

void q_qmlapplicationengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnEvent((QQmlApplicationEngine*)self, (intptr_t)callback);
}

bool q_qmlapplicationengine_event_filter(void* self, void* watched, void* event) {
    return QQmlApplicationEngine_EventFilter((QQmlApplicationEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlapplicationengine_super_event_filter(void* self, void* watched, void* event) {
    return QQmlApplicationEngine_SuperEventFilter((QQmlApplicationEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlapplicationengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlApplicationEngine_OnEventFilter((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_timer_event(void* self, void* event) {
    QQmlApplicationEngine_TimerEvent((QQmlApplicationEngine*)self, (QTimerEvent*)event);
}

void q_qmlapplicationengine_super_timer_event(void* self, void* event) {
    QQmlApplicationEngine_SuperTimerEvent((QQmlApplicationEngine*)self, (QTimerEvent*)event);
}

void q_qmlapplicationengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnTimerEvent((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_child_event(void* self, void* event) {
    QQmlApplicationEngine_ChildEvent((QQmlApplicationEngine*)self, (QChildEvent*)event);
}

void q_qmlapplicationengine_super_child_event(void* self, void* event) {
    QQmlApplicationEngine_SuperChildEvent((QQmlApplicationEngine*)self, (QChildEvent*)event);
}

void q_qmlapplicationengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnChildEvent((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_custom_event(void* self, void* event) {
    QQmlApplicationEngine_CustomEvent((QQmlApplicationEngine*)self, (QEvent*)event);
}

void q_qmlapplicationengine_super_custom_event(void* self, void* event) {
    QQmlApplicationEngine_SuperCustomEvent((QQmlApplicationEngine*)self, (QEvent*)event);
}

void q_qmlapplicationengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnCustomEvent((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_connect_notify(void* self, void* signal) {
    QQmlApplicationEngine_ConnectNotify((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

void q_qmlapplicationengine_super_connect_notify(void* self, void* signal) {
    QQmlApplicationEngine_SuperConnectNotify((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

void q_qmlapplicationengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnConnectNotify((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_disconnect_notify(void* self, void* signal) {
    QQmlApplicationEngine_DisconnectNotify((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

void q_qmlapplicationengine_super_disconnect_notify(void* self, void* signal) {
    QQmlApplicationEngine_SuperDisconnectNotify((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

void q_qmlapplicationengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnDisconnectNotify((QQmlApplicationEngine*)self, (intptr_t)callback);
}

QObject* q_qmlapplicationengine_sender(void* self) {
    return QQmlApplicationEngine_Sender((QQmlApplicationEngine*)self);
}

QObject* q_qmlapplicationengine_super_sender(void* self) {
    return QQmlApplicationEngine_SuperSender((QQmlApplicationEngine*)self);
}

void q_qmlapplicationengine_on_sender(void* self, QObject* (*callback)()) {
    QQmlApplicationEngine_OnSender((QQmlApplicationEngine*)self, (intptr_t)callback);
}

int32_t q_qmlapplicationengine_sender_signal_index(void* self) {
    return QQmlApplicationEngine_SenderSignalIndex((QQmlApplicationEngine*)self);
}

int32_t q_qmlapplicationengine_super_sender_signal_index(void* self) {
    return QQmlApplicationEngine_SuperSenderSignalIndex((QQmlApplicationEngine*)self);
}

void q_qmlapplicationengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlApplicationEngine_OnSenderSignalIndex((QQmlApplicationEngine*)self, (intptr_t)callback);
}

int32_t q_qmlapplicationengine_receivers(void* self, const char* signal) {
    return QQmlApplicationEngine_Receivers((QQmlApplicationEngine*)self, signal);
}

int32_t q_qmlapplicationengine_super_receivers(void* self, const char* signal) {
    return QQmlApplicationEngine_SuperReceivers((QQmlApplicationEngine*)self, signal);
}

void q_qmlapplicationengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlApplicationEngine_OnReceivers((QQmlApplicationEngine*)self, (intptr_t)callback);
}

bool q_qmlapplicationengine_is_signal_connected(void* self, void* signal) {
    return QQmlApplicationEngine_IsSignalConnected((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

bool q_qmlapplicationengine_super_is_signal_connected(void* self, void* signal) {
    return QQmlApplicationEngine_SuperIsSignalConnected((QQmlApplicationEngine*)self, (QMetaMethod*)signal);
}

void q_qmlapplicationengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlApplicationEngine_OnIsSignalConnected((QQmlApplicationEngine*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlapplicationengine_delete(void* self) {
    QQmlApplicationEngine_Delete((QQmlApplicationEngine*)(self));
}
