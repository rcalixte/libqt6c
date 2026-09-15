#include "../libqcoreevent.hpp"
#include "libqjsengine.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkaccessmanager.hpp"
#include "../libqobject.hpp"
#include "libqqmlabstracturlinterceptor.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlerror.hpp"
#include "libqqmlincubator.hpp"
#include "libqqmlnetworkaccessmanagerfactory.hpp"
#include "../libqurl.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlengine.h"

const QMetaObject* q_qmlimageproviderbase_meta_object(void* self) {
    return QQmlImageProviderBase_MetaObject((QQmlImageProviderBase*)self);
}

void* q_qmlimageproviderbase_metacast(void* self, const char* param1) {
    return QQmlImageProviderBase_Metacast((QQmlImageProviderBase*)self, param1);
}

int32_t q_qmlimageproviderbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlImageProviderBase_Metacall((QQmlImageProviderBase*)self, param1, param2, param3);
}

const char* q_qmlimageproviderbase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_qmlimageproviderbase_image_type(void* self) {
    return QQmlImageProviderBase_ImageType((QQmlImageProviderBase*)self);
}

int32_t q_qmlimageproviderbase_flags(void* self) {
    return QQmlImageProviderBase_Flags((QQmlImageProviderBase*)self);
}

const char* q_qmlimageproviderbase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlimageproviderbase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_qmlimageproviderbase_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_qmlimageproviderbase_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_qmlimageproviderbase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlimageproviderbase_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlimageproviderbase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlimageproviderbase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlimageproviderbase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlimageproviderbase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlimageproviderbase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlimageproviderbase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlimageproviderbase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlimageproviderbase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlimageproviderbase_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlimageproviderbase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlimageproviderbase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlimageproviderbase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlimageproviderbase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlimageproviderbase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlimageproviderbase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlimageproviderbase_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlimageproviderbase_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlimageproviderbase_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlimageproviderbase_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlimageproviderbase_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlimageproviderbase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlimageproviderbase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlimageproviderbase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlimageproviderbase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlimageproviderbase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlimageproviderbase_dynamic_property_names\n");
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

QBindingStorage* q_qmlimageproviderbase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlimageproviderbase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlimageproviderbase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlimageproviderbase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlimageproviderbase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlimageproviderbase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlimageproviderbase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlimageproviderbase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlimageproviderbase_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlimageproviderbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlimageproviderbase_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlimageproviderbase_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlimageproviderbase_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlimageproviderbase_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlimageproviderbase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlimageproviderbase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_qmlimageproviderbase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlimageproviderbase_delete(void* self) {
    QQmlImageProviderBase_Delete((QQmlImageProviderBase*)(self));
}

QQmlEngine* q_qmlengine_new() {
    return QQmlEngine_New();
}

QQmlEngine* q_qmlengine_new2(void* p) {
    return QQmlEngine_New2((QObject*)p);
}

const QMetaObject* q_qmlengine_meta_object(void* self) {
    return QQmlEngine_MetaObject((QQmlEngine*)self);
}

void q_qmlengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlEngine_OnMetaObject((QQmlEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlengine_super_meta_object(void* self) {
    return QQmlEngine_SuperMetaObject((QQmlEngine*)self);
}

void* q_qmlengine_metacast(void* self, const char* param1) {
    return QQmlEngine_Metacast((QQmlEngine*)self, param1);
}

void q_qmlengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlEngine_OnMetacast((QQmlEngine*)self, (intptr_t)callback);
}

void* q_qmlengine_super_metacast(void* self, const char* param1) {
    return QQmlEngine_SuperMetacast((QQmlEngine*)self, param1);
}

int32_t q_qmlengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlEngine_Metacall((QQmlEngine*)self, param1, param2, param3);
}

void q_qmlengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlEngine_OnMetacall((QQmlEngine*)self, (intptr_t)callback);
}

int32_t q_qmlengine_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlEngine_SuperMetacall((QQmlEngine*)self, param1, param2, param3);
}

const char* q_qmlengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlContext* q_qmlengine_root_context(void* self) {
    return QQmlEngine_RootContext((QQmlEngine*)self);
}

void q_qmlengine_clear_component_cache(void* self) {
    QQmlEngine_ClearComponentCache((QQmlEngine*)self);
}

void q_qmlengine_trim_component_cache(void* self) {
    QQmlEngine_TrimComponentCache((QQmlEngine*)self);
}

void q_qmlengine_clear_singletons(void* self) {
    QQmlEngine_ClearSingletons((QQmlEngine*)self);
}

const char** q_qmlengine_import_path_list(void* self) {
    libqt_list _arr = QQmlEngine_ImportPathList((QQmlEngine*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_import_path_list\n");
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

void q_qmlengine_set_import_path_list(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_set_import_path_list\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i)
        paths_qstr[i] = qstring(paths[i]);
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QQmlEngine_SetImportPathList((QQmlEngine*)self, paths_list);
    free(paths_qstr);
}

void q_qmlengine_add_import_path(void* self, const char* dir) {
    QQmlEngine_AddImportPath((QQmlEngine*)self, qstring(dir));
}

const char** q_qmlengine_plugin_path_list(void* self) {
    libqt_list _arr = QQmlEngine_PluginPathList((QQmlEngine*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_plugin_path_list\n");
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

void q_qmlengine_set_plugin_path_list(void* self, const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_set_plugin_path_list\n");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i)
        paths_qstr[i] = qstring(paths[i]);
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QQmlEngine_SetPluginPathList((QQmlEngine*)self, paths_list);
    free(paths_qstr);
}

void q_qmlengine_add_plugin_path(void* self, const char* dir) {
    QQmlEngine_AddPluginPath((QQmlEngine*)self, qstring(dir));
}

bool q_qmlengine_add_named_bundle(void* self, const char* param1, const char* param2) {
    return QQmlEngine_AddNamedBundle((QQmlEngine*)self, qstring(param1), qstring(param2));
}

bool q_qmlengine_import_plugin(void* self, const char* filePath, const char* uri, libqt_list /* of QQmlError* */ errors) {
    return QQmlEngine_ImportPlugin((QQmlEngine*)self, qstring(filePath), qstring(uri), errors);
}

void q_qmlengine_set_network_access_manager_factory(void* self, void* networkAccessManagerFactory) {
    QQmlEngine_SetNetworkAccessManagerFactory((QQmlEngine*)self, (QQmlNetworkAccessManagerFactory*)networkAccessManagerFactory);
}

QQmlNetworkAccessManagerFactory* q_qmlengine_network_access_manager_factory(void* self) {
    return QQmlEngine_NetworkAccessManagerFactory((QQmlEngine*)self);
}

QNetworkAccessManager* q_qmlengine_network_access_manager(void* self) {
    return QQmlEngine_NetworkAccessManager((QQmlEngine*)self);
}

void q_qmlengine_set_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_SetUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

QQmlAbstractUrlInterceptor* q_qmlengine_url_interceptor(void* self) {
    return QQmlEngine_UrlInterceptor((QQmlEngine*)self);
}

void q_qmlengine_add_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_AddUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

void q_qmlengine_remove_url_interceptor(void* self, void* urlInterceptor) {
    QQmlEngine_RemoveUrlInterceptor((QQmlEngine*)self, (QQmlAbstractUrlInterceptor*)urlInterceptor);
}

libqt_list /* of QQmlAbstractUrlInterceptor* */ q_qmlengine_url_interceptors(void* self) {
    libqt_list _arr = QQmlEngine_UrlInterceptors((QQmlEngine*)self);
    return _arr;
}

QUrl* q_qmlengine_intercept_url(void* self, void* url, int32_t type) {
    return QQmlEngine_InterceptUrl((QQmlEngine*)self, (QUrl*)url, type);
}

void q_qmlengine_add_image_provider(void* self, const char* id, void* param2) {
    QQmlEngine_AddImageProvider((QQmlEngine*)self, qstring(id), (QQmlImageProviderBase*)param2);
}

QQmlImageProviderBase* q_qmlengine_image_provider(void* self, const char* id) {
    return QQmlEngine_ImageProvider((QQmlEngine*)self, qstring(id));
}

void q_qmlengine_remove_image_provider(void* self, const char* id) {
    QQmlEngine_RemoveImageProvider((QQmlEngine*)self, qstring(id));
}

void q_qmlengine_set_incubation_controller(void* self, void* incubationController) {
    QQmlEngine_SetIncubationController((QQmlEngine*)self, (QQmlIncubationController*)incubationController);
}

QQmlIncubationController* q_qmlengine_incubation_controller(void* self) {
    return QQmlEngine_IncubationController((QQmlEngine*)self);
}

void q_qmlengine_set_offline_storage_path(void* self, const char* dir) {
    QQmlEngine_SetOfflineStoragePath((QQmlEngine*)self, qstring(dir));
}

const char* q_qmlengine_offline_storage_path(void* self) {
    libqt_string _str = QQmlEngine_OfflineStoragePath((QQmlEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlengine_offline_storage_database_file_path(void* self, const char* databaseName) {
    libqt_string _str = QQmlEngine_OfflineStorageDatabaseFilePath((QQmlEngine*)self, qstring(databaseName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_qmlengine_base_url(void* self) {
    return QQmlEngine_BaseUrl((QQmlEngine*)self);
}

void q_qmlengine_set_base_url(void* self, void* baseUrl) {
    QQmlEngine_SetBaseUrl((QQmlEngine*)self, (QUrl*)baseUrl);
}

bool q_qmlengine_output_warnings_to_standard_error(void* self) {
    return QQmlEngine_OutputWarningsToStandardError((QQmlEngine*)self);
}

void q_qmlengine_set_output_warnings_to_standard_error(void* self, bool outputWarningsToStandardError) {
    QQmlEngine_SetOutputWarningsToStandardError((QQmlEngine*)self, outputWarningsToStandardError);
}

void q_qmlengine_mark_current_function_as_translation_binding(void* self) {
    QQmlEngine_MarkCurrentFunctionAsTranslationBinding((QQmlEngine*)self);
}

void q_qmlengine_capture_property(void* self, void* object, void* property) {
    QQmlEngine_CaptureProperty((QQmlEngine*)self, (QObject*)object, (QMetaProperty*)property);
}

void q_qmlengine_retranslate(void* self) {
    QQmlEngine_Retranslate((QQmlEngine*)self);
}

void q_qmlengine_offline_storage_path_changed(void* self) {
    QQmlEngine_OfflineStoragePathChanged((QQmlEngine*)self);
}

void q_qmlengine_on_offline_storage_path_changed(void* self, void (*callback)(void*)) {
    QQmlEngine_Connect_OfflineStoragePathChanged((QQmlEngine*)self, (intptr_t)callback);
}

QQmlContext* q_qmlengine_context_for_object(void* param1) {
    return QQmlEngine_ContextForObject((QObject*)param1);
}

void q_qmlengine_set_context_for_object(void* param1, void* param2) {
    QQmlEngine_SetContextForObject((QObject*)param1, (QQmlContext*)param2);
}

bool q_qmlengine_event(void* self, void* param1) {
    return QQmlEngine_Event((QQmlEngine*)self, (QEvent*)param1);
}

void q_qmlengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlEngine_OnEvent((QQmlEngine*)self, (intptr_t)callback);
}

bool q_qmlengine_super_event(void* self, void* param1) {
    return QQmlEngine_SuperEvent((QQmlEngine*)self, (QEvent*)param1);
}

void q_qmlengine_quit(void* self) {
    QQmlEngine_Quit((QQmlEngine*)self);
}

void q_qmlengine_on_quit(void* self, void (*callback)(void*)) {
    QQmlEngine_Connect_Quit((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_exit(void* self, int retCode) {
    QQmlEngine_Exit((QQmlEngine*)self, retCode);
}

void q_qmlengine_on_exit(void* self, void (*callback)(void*, int)) {
    QQmlEngine_Connect_Exit((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_warnings(void* self, libqt_list /* of QQmlError* */ warnings) {
    QQmlEngine_Warnings((QQmlEngine*)self, warnings);
}

void q_qmlengine_on_warnings(void* self, void (*callback)(void*, libqt_list /* of QQmlError* */)) {
    QQmlEngine_Connect_Warnings((QQmlEngine*)self, (intptr_t)callback);
}

const char* q_qmlengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJSValue* q_qmlengine_global_object(void* self) {
    return QJSEngine_GlobalObject((QJSEngine*)self);
}

QJSValue* q_qmlengine_evaluate(void* self, const char* program) {
    return QJSEngine_Evaluate((QJSEngine*)self, qstring(program));
}

QJSValue* q_qmlengine_import_module(void* self, const char* fileName) {
    return QJSEngine_ImportModule((QJSEngine*)self, qstring(fileName));
}

bool q_qmlengine_register_module(void* self, const char* moduleName, void* value) {
    return QJSEngine_RegisterModule((QJSEngine*)self, qstring(moduleName), (QJSValue*)value);
}

QJSValue* q_qmlengine_new_object(void* self) {
    return QJSEngine_NewObject((QJSEngine*)self);
}

QJSValue* q_qmlengine_new_symbol(void* self, const char* name) {
    return QJSEngine_NewSymbol((QJSEngine*)self, qstring(name));
}

QJSValue* q_qmlengine_new_array(void* self) {
    return QJSEngine_NewArray((QJSEngine*)self);
}

QJSValue* q_qmlengine_new_q_object(void* self, void* object) {
    return QJSEngine_NewQObject((QJSEngine*)self, (QObject*)object);
}

QJSValue* q_qmlengine_new_q_meta_object(void* self, void* metaObject) {
    return QJSEngine_NewQMetaObject((QJSEngine*)self, (QMetaObject*)metaObject);
}

QJSValue* q_qmlengine_new_error_object(void* self, int32_t errorType) {
    return QJSEngine_NewErrorObject((QJSEngine*)self, errorType);
}

void q_qmlengine_collect_garbage(void* self) {
    QJSEngine_CollectGarbage((QJSEngine*)self);
}

void q_qmlengine_set_object_ownership(void* param1, int32_t param2) {
    QJSEngine_SetObjectOwnership((QObject*)param1, param2);
}

int32_t q_qmlengine_object_ownership(void* param1) {
    return QJSEngine_ObjectOwnership((QObject*)param1);
}

void q_qmlengine_install_extensions(void* self, int32_t extensions) {
    QJSEngine_InstallExtensions((QJSEngine*)self, extensions);
}

void q_qmlengine_set_interrupted(void* self, bool interrupted) {
    QJSEngine_SetInterrupted((QJSEngine*)self, interrupted);
}

bool q_qmlengine_is_interrupted(void* self) {
    return QJSEngine_IsInterrupted((QJSEngine*)self);
}

void q_qmlengine_throw_error(void* self, const char* message) {
    QJSEngine_ThrowError((QJSEngine*)self, qstring(message));
}

void q_qmlengine_throw_error2(void* self, int32_t errorType) {
    QJSEngine_ThrowError2((QJSEngine*)self, errorType);
}

void q_qmlengine_throw_error3(void* self, void* error) {
    QJSEngine_ThrowError3((QJSEngine*)self, (QJSValue*)error);
}

bool q_qmlengine_has_error(void* self) {
    return QJSEngine_HasError((QJSEngine*)self);
}

QJSValue* q_qmlengine_catch_error(void* self) {
    return QJSEngine_CatchError((QJSEngine*)self);
}

const char* q_qmlengine_ui_language(void* self) {
    libqt_string _str = QJSEngine_UiLanguage((QJSEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlengine_set_ui_language(void* self, const char* language) {
    QJSEngine_SetUiLanguage((QJSEngine*)self, qstring(language));
}

void q_qmlengine_ui_language_changed(void* self) {
    QJSEngine_UiLanguageChanged((QJSEngine*)self);
}

void q_qmlengine_on_ui_language_changed(void* self, void (*callback)(void*)) {
    QJSEngine_Connect_UiLanguageChanged((QJSEngine*)self, (intptr_t)callback);
}

QJSValue* q_qmlengine_evaluate2(void* self, const char* program, const char* fileName) {
    return QJSEngine_Evaluate2((QJSEngine*)self, qstring(program), qstring(fileName));
}

QJSValue* q_qmlengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber) {
    return QJSEngine_Evaluate3((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber);
}

QJSValue* q_qmlengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]) {
    size_t exceptionStackTrace_len = libqt_strv_length(exceptionStackTrace);
    libqt_string* exceptionStackTrace_qstr = (libqt_string*)malloc(exceptionStackTrace_len * sizeof(libqt_string));
    if (exceptionStackTrace_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_evaluate4\n");
        abort();
    }
    for (size_t i = 0; i < exceptionStackTrace_len; ++i)
        exceptionStackTrace_qstr[i] = qstring(exceptionStackTrace[i]);
    libqt_list exceptionStackTrace_list = qlist(exceptionStackTrace_qstr, exceptionStackTrace_len);
    QJSValue* _out = QJSEngine_Evaluate4((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber, exceptionStackTrace_list);
    free(exceptionStackTrace_qstr);
    return _out;
}

QJSValue* q_qmlengine_new_array1(void* self, uint32_t length) {
    return QJSEngine_NewArray1((QJSEngine*)self, length);
}

QJSValue* q_qmlengine_new_error_object2(void* self, int32_t errorType, const char* message) {
    return QJSEngine_NewErrorObject2((QJSEngine*)self, errorType, qstring(message));
}

void q_qmlengine_install_extensions2(void* self, int32_t extensions, void* object) {
    QJSEngine_InstallExtensions2((QJSEngine*)self, extensions, (QJSValue*)object);
}

void q_qmlengine_throw_error22(void* self, int32_t errorType, const char* message) {
    QJSEngine_ThrowError22((QJSEngine*)self, errorType, qstring(message));
}

const char* q_qmlengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlengine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlengine_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlengine_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlengine_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlengine_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlengine_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlengine_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlengine_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlengine_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengine_dynamic_property_names\n");
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

QBindingStorage* q_qmlengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlengine_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlengine_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlengine_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlengine_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlengine_event_filter(void* self, void* watched, void* event) {
    return QQmlEngine_EventFilter((QQmlEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlengine_super_event_filter(void* self, void* watched, void* event) {
    return QQmlEngine_SuperEventFilter((QQmlEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlEngine_OnEventFilter((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_timer_event(void* self, void* event) {
    QQmlEngine_TimerEvent((QQmlEngine*)self, (QTimerEvent*)event);
}

void q_qmlengine_super_timer_event(void* self, void* event) {
    QQmlEngine_SuperTimerEvent((QQmlEngine*)self, (QTimerEvent*)event);
}

void q_qmlengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngine_OnTimerEvent((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_child_event(void* self, void* event) {
    QQmlEngine_ChildEvent((QQmlEngine*)self, (QChildEvent*)event);
}

void q_qmlengine_super_child_event(void* self, void* event) {
    QQmlEngine_SuperChildEvent((QQmlEngine*)self, (QChildEvent*)event);
}

void q_qmlengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngine_OnChildEvent((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_custom_event(void* self, void* event) {
    QQmlEngine_CustomEvent((QQmlEngine*)self, (QEvent*)event);
}

void q_qmlengine_super_custom_event(void* self, void* event) {
    QQmlEngine_SuperCustomEvent((QQmlEngine*)self, (QEvent*)event);
}

void q_qmlengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngine_OnCustomEvent((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_connect_notify(void* self, void* signal) {
    QQmlEngine_ConnectNotify((QQmlEngine*)self, (QMetaMethod*)signal);
}

void q_qmlengine_super_connect_notify(void* self, void* signal) {
    QQmlEngine_SuperConnectNotify((QQmlEngine*)self, (QMetaMethod*)signal);
}

void q_qmlengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlEngine_OnConnectNotify((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_disconnect_notify(void* self, void* signal) {
    QQmlEngine_DisconnectNotify((QQmlEngine*)self, (QMetaMethod*)signal);
}

void q_qmlengine_super_disconnect_notify(void* self, void* signal) {
    QQmlEngine_SuperDisconnectNotify((QQmlEngine*)self, (QMetaMethod*)signal);
}

void q_qmlengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlEngine_OnDisconnectNotify((QQmlEngine*)self, (intptr_t)callback);
}

QObject* q_qmlengine_sender(void* self) {
    return QQmlEngine_Sender((QQmlEngine*)self);
}

QObject* q_qmlengine_super_sender(void* self) {
    return QQmlEngine_SuperSender((QQmlEngine*)self);
}

void q_qmlengine_on_sender(void* self, QObject* (*callback)()) {
    QQmlEngine_OnSender((QQmlEngine*)self, (intptr_t)callback);
}

int32_t q_qmlengine_sender_signal_index(void* self) {
    return QQmlEngine_SenderSignalIndex((QQmlEngine*)self);
}

int32_t q_qmlengine_super_sender_signal_index(void* self) {
    return QQmlEngine_SuperSenderSignalIndex((QQmlEngine*)self);
}

void q_qmlengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlEngine_OnSenderSignalIndex((QQmlEngine*)self, (intptr_t)callback);
}

int32_t q_qmlengine_receivers(void* self, const char* signal) {
    return QQmlEngine_Receivers((QQmlEngine*)self, signal);
}

int32_t q_qmlengine_super_receivers(void* self, const char* signal) {
    return QQmlEngine_SuperReceivers((QQmlEngine*)self, signal);
}

void q_qmlengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlEngine_OnReceivers((QQmlEngine*)self, (intptr_t)callback);
}

bool q_qmlengine_is_signal_connected(void* self, void* signal) {
    return QQmlEngine_IsSignalConnected((QQmlEngine*)self, (QMetaMethod*)signal);
}

bool q_qmlengine_super_is_signal_connected(void* self, void* signal) {
    return QQmlEngine_SuperIsSignalConnected((QQmlEngine*)self, (QMetaMethod*)signal);
}

void q_qmlengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlEngine_OnIsSignalConnected((QQmlEngine*)self, (intptr_t)callback);
}

void q_qmlengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlengine_delete(void* self) {
    QQmlEngine_Delete((QQmlEngine*)(self));
}
