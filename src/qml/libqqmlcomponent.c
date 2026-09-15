#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlerror.hpp"
#include "libqqmlincubator.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqqmlcomponent.hpp"
#include "libqqmlcomponent.h"

QQmlComponent* q_qmlcomponent_new() {
    return QQmlComponent_New();
}

QQmlComponent* q_qmlcomponent_new2(void* param1) {
    return QQmlComponent_New2((QQmlEngine*)param1);
}

QQmlComponent* q_qmlcomponent_new3(void* param1, const char* fileName) {
    return QQmlComponent_New3((QQmlEngine*)param1, qstring(fileName));
}

QQmlComponent* q_qmlcomponent_new4(void* param1, const char* fileName, int32_t mode) {
    return QQmlComponent_New4((QQmlEngine*)param1, qstring(fileName), mode);
}

QQmlComponent* q_qmlcomponent_new5(void* param1, void* url) {
    return QQmlComponent_New5((QQmlEngine*)param1, (QUrl*)url);
}

QQmlComponent* q_qmlcomponent_new6(void* param1, void* url, int32_t mode) {
    return QQmlComponent_New6((QQmlEngine*)param1, (QUrl*)url, mode);
}

QQmlComponent* q_qmlcomponent_new7(void* engine, const char* uri, const char* typeName) {
    return QQmlComponent_New7((QQmlEngine*)engine, uri, typeName);
}

QQmlComponent* q_qmlcomponent_new8(void* engine, const char* uri, const char* typeName, int32_t mode) {
    return QQmlComponent_New8((QQmlEngine*)engine, uri, typeName, mode);
}

QQmlComponent* q_qmlcomponent_new9(void* parent) {
    return QQmlComponent_New9((QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new10(void* param1, void* parent) {
    return QQmlComponent_New10((QQmlEngine*)param1, (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new11(void* param1, const char* fileName, void* parent) {
    return QQmlComponent_New11((QQmlEngine*)param1, qstring(fileName), (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new12(void* param1, const char* fileName, int32_t mode, void* parent) {
    return QQmlComponent_New12((QQmlEngine*)param1, qstring(fileName), mode, (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new13(void* param1, void* url, void* parent) {
    return QQmlComponent_New13((QQmlEngine*)param1, (QUrl*)url, (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new14(void* param1, void* url, int32_t mode, void* parent) {
    return QQmlComponent_New14((QQmlEngine*)param1, (QUrl*)url, mode, (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new15(void* engine, const char* uri, const char* typeName, void* parent) {
    return QQmlComponent_New15((QQmlEngine*)engine, uri, typeName, (QObject*)parent);
}

QQmlComponent* q_qmlcomponent_new16(void* engine, const char* uri, const char* typeName, int32_t mode, void* parent) {
    return QQmlComponent_New16((QQmlEngine*)engine, uri, typeName, mode, (QObject*)parent);
}

const QMetaObject* q_qmlcomponent_meta_object(void* self) {
    return QQmlComponent_MetaObject((QQmlComponent*)self);
}

void q_qmlcomponent_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlComponent_OnMetaObject((QQmlComponent*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlcomponent_super_meta_object(void* self) {
    return QQmlComponent_SuperMetaObject((QQmlComponent*)self);
}

void* q_qmlcomponent_metacast(void* self, const char* param1) {
    return QQmlComponent_Metacast((QQmlComponent*)self, param1);
}

void q_qmlcomponent_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlComponent_OnMetacast((QQmlComponent*)self, (intptr_t)callback);
}

void* q_qmlcomponent_super_metacast(void* self, const char* param1) {
    return QQmlComponent_SuperMetacast((QQmlComponent*)self, param1);
}

int32_t q_qmlcomponent_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlComponent_Metacall((QQmlComponent*)self, param1, param2, param3);
}

void q_qmlcomponent_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlComponent_OnMetacall((QQmlComponent*)self, (intptr_t)callback);
}

int32_t q_qmlcomponent_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlComponent_SuperMetacall((QQmlComponent*)self, param1, param2, param3);
}

const char* q_qmlcomponent_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_qmlcomponent_status(void* self) {
    return QQmlComponent_Status((QQmlComponent*)self);
}

bool q_qmlcomponent_is_null(void* self) {
    return QQmlComponent_IsNull((QQmlComponent*)self);
}

bool q_qmlcomponent_is_ready(void* self) {
    return QQmlComponent_IsReady((QQmlComponent*)self);
}

bool q_qmlcomponent_is_error(void* self) {
    return QQmlComponent_IsError((QQmlComponent*)self);
}

bool q_qmlcomponent_is_loading(void* self) {
    return QQmlComponent_IsLoading((QQmlComponent*)self);
}

bool q_qmlcomponent_is_bound(void* self) {
    return QQmlComponent_IsBound((QQmlComponent*)self);
}

libqt_list /* of QQmlError* */ q_qmlcomponent_errors(void* self) {
    libqt_list _arr = QQmlComponent_Errors((QQmlComponent*)self);
    return _arr;
}

const char* q_qmlcomponent_error_string(void* self) {
    libqt_string _str = QQmlComponent_ErrorString((QQmlComponent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_qmlcomponent_progress(void* self) {
    return QQmlComponent_Progress((QQmlComponent*)self);
}

QUrl* q_qmlcomponent_url(void* self) {
    return QQmlComponent_Url((QQmlComponent*)self);
}

QObject* q_qmlcomponent_create(void* self, void* context) {
    return QQmlComponent_Create((QQmlComponent*)self, (QQmlContext*)context);
}

void q_qmlcomponent_on_create(void* self, QObject* (*callback)(void*, void*)) {
    QQmlComponent_OnCreate((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_super_create(void* self, void* context) {
    return QQmlComponent_SuperCreate((QQmlComponent*)self, (QQmlContext*)context);
}

QObject* q_qmlcomponent_create_with_initial_properties(void* self, libqt_map /* of const char* to QVariant* */ initialProperties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map initialProperties_ret;
    initialProperties_ret.len = initialProperties.len;
    initialProperties_ret.keys = (libqt_string*)malloc(initialProperties_ret.len * sizeof(libqt_string));
    if (initialProperties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlcomponent_create_with_initial_properties\n");
        abort();
    }
    initialProperties_ret.values = (QVariant**)malloc(initialProperties_ret.len * sizeof(QVariant*));
    if (initialProperties_ret.values == NULL) {
        free(initialProperties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlcomponent_create_with_initial_properties\n");
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
    QObject* _out = QQmlComponent_CreateWithInitialProperties((QQmlComponent*)self, initialProperties_ret);
    free(initialProperties_ret.keys);
    free(initialProperties_ret.values);
    return _out;
}

void q_qmlcomponent_set_initial_properties(void* self, void* component, libqt_map /* of const char* to QVariant* */ properties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map properties_ret;
    properties_ret.len = properties.len;
    properties_ret.keys = (libqt_string*)malloc(properties_ret.len * sizeof(libqt_string));
    if (properties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlcomponent_set_initial_properties\n");
        abort();
    }
    properties_ret.values = (QVariant**)malloc(properties_ret.len * sizeof(QVariant*));
    if (properties_ret.values == NULL) {
        free(properties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlcomponent_set_initial_properties\n");
        abort();
    }
    const char** properties_karr = (const char**)properties.keys;
    libqt_string* properties_kdest = (libqt_string*)properties_ret.keys;
    QVariant** properties_varr = (QVariant**)properties.values;
    QVariant** properties_vdest = (QVariant**)properties_ret.values;
    for (size_t i = 0; i < properties_ret.len; ++i) {
        properties_kdest[i] = qstring(properties_karr[i]);
        properties_vdest[i] = properties_varr[i];
    }
    QQmlComponent_SetInitialProperties((QQmlComponent*)self, (QObject*)component, properties_ret);
    free(properties_ret.keys);
    free(properties_ret.values);
}

QObject* q_qmlcomponent_begin_create(void* self, void* param1) {
    return QQmlComponent_BeginCreate((QQmlComponent*)self, (QQmlContext*)param1);
}

void q_qmlcomponent_on_begin_create(void* self, QObject* (*callback)(void*, void*)) {
    QQmlComponent_OnBeginCreate((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_super_begin_create(void* self, void* param1) {
    return QQmlComponent_SuperBeginCreate((QQmlComponent*)self, (QQmlContext*)param1);
}

void q_qmlcomponent_complete_create(void* self) {
    QQmlComponent_CompleteCreate((QQmlComponent*)self);
}

void q_qmlcomponent_on_complete_create(void* self, void (*callback)()) {
    QQmlComponent_OnCompleteCreate((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_super_complete_create(void* self) {
    QQmlComponent_SuperCompleteCreate((QQmlComponent*)self);
}

void q_qmlcomponent_create2(void* self, void* param1) {
    QQmlComponent_Create2((QQmlComponent*)self, (QQmlIncubator*)param1);
}

QQmlContext* q_qmlcomponent_creation_context(void* self) {
    return QQmlComponent_CreationContext((QQmlComponent*)self);
}

QQmlEngine* q_qmlcomponent_engine(void* self) {
    return QQmlComponent_Engine((QQmlComponent*)self);
}

void q_qmlcomponent_load_url(void* self, void* url) {
    QQmlComponent_LoadUrl((QQmlComponent*)self, (QUrl*)url);
}

void q_qmlcomponent_load_url2(void* self, void* url, int32_t mode) {
    QQmlComponent_LoadUrl2((QQmlComponent*)self, (QUrl*)url, mode);
}

void q_qmlcomponent_load_from_module(void* self, const char* uri, const char* typeName) {
    QQmlComponent_LoadFromModule((QQmlComponent*)self, uri, typeName);
}

void q_qmlcomponent_set_data(void* self, char* param1, void* baseUrl) {
    QQmlComponent_SetData((QQmlComponent*)self, qstring(param1), (QUrl*)baseUrl);
}

void q_qmlcomponent_status_changed(void* self, int32_t param1) {
    QQmlComponent_StatusChanged((QQmlComponent*)self, param1);
}

void q_qmlcomponent_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    QQmlComponent_Connect_StatusChanged((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_progress_changed(void* self, double param1) {
    QQmlComponent_ProgressChanged((QQmlComponent*)self, param1);
}

void q_qmlcomponent_on_progress_changed(void* self, void (*callback)(void*, double)) {
    QQmlComponent_Connect_ProgressChanged((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_create_object2(void* self) {
    return QQmlComponent_CreateObject2((QQmlComponent*)self);
}

void q_qmlcomponent_on_create_object2(void* self, QObject* (*callback)()) {
    QQmlComponent_OnCreateObject2((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_super_create_object2(void* self) {
    return QQmlComponent_SuperCreateObject2((QQmlComponent*)self);
}

const char* q_qmlcomponent_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlcomponent_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_qmlcomponent_create_with_initial_properties2(void* self, libqt_map /* of const char* to QVariant* */ initialProperties, void* context) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map initialProperties_ret;
    initialProperties_ret.len = initialProperties.len;
    initialProperties_ret.keys = (libqt_string*)malloc(initialProperties_ret.len * sizeof(libqt_string));
    if (initialProperties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlcomponent_create_with_initial_properties2\n");
        abort();
    }
    initialProperties_ret.values = (QVariant**)malloc(initialProperties_ret.len * sizeof(QVariant*));
    if (initialProperties_ret.values == NULL) {
        free(initialProperties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlcomponent_create_with_initial_properties2\n");
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
    QObject* _out = QQmlComponent_CreateWithInitialProperties2((QQmlComponent*)self, initialProperties_ret, (QQmlContext*)context);
    free(initialProperties_ret.keys);
    free(initialProperties_ret.values);
    return _out;
}

void q_qmlcomponent_create22(void* self, void* param1, void* context) {
    QQmlComponent_Create22((QQmlComponent*)self, (QQmlIncubator*)param1, (QQmlContext*)context);
}

void q_qmlcomponent_create3(void* self, void* param1, void* context, void* forContext) {
    QQmlComponent_Create3((QQmlComponent*)self, (QQmlIncubator*)param1, (QQmlContext*)context, (QQmlContext*)forContext);
}

void q_qmlcomponent_load_from_module3(void* self, const char* uri, const char* typeName, int32_t mode) {
    QQmlComponent_LoadFromModule3((QQmlComponent*)self, uri, typeName, mode);
}

QObject* q_qmlcomponent_create_object1(void* self, void* parent) {
    return QQmlComponent_CreateObject1((QQmlComponent*)self, (QObject*)parent);
}

void q_qmlcomponent_on_create_object1(void* self, QObject* (*callback)(void*, void*)) {
    QQmlComponent_OnCreateObject1((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_super_create_object1(void* self, void* parent) {
    return QQmlComponent_SuperCreateObject1((QQmlComponent*)self, (QObject*)parent);
}

QObject* q_qmlcomponent_create_object22(void* self, void* parent, libqt_map /* of const char* to QVariant* */ properties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map properties_ret;
    properties_ret.len = properties.len;
    properties_ret.keys = (libqt_string*)malloc(properties_ret.len * sizeof(libqt_string));
    if (properties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlcomponent_create_object22\n");
        abort();
    }
    properties_ret.values = (QVariant**)malloc(properties_ret.len * sizeof(QVariant*));
    if (properties_ret.values == NULL) {
        free(properties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlcomponent_create_object22\n");
        abort();
    }
    const char** properties_karr = (const char**)properties.keys;
    libqt_string* properties_kdest = (libqt_string*)properties_ret.keys;
    QVariant** properties_varr = (QVariant**)properties.values;
    QVariant** properties_vdest = (QVariant**)properties_ret.values;
    for (size_t i = 0; i < properties_ret.len; ++i) {
        properties_kdest[i] = qstring(properties_karr[i]);
        properties_vdest[i] = properties_varr[i];
    }
    QObject* _out = QQmlComponent_CreateObject22((QQmlComponent*)self, (QObject*)parent, properties_ret);
    free(properties_ret.keys);
    free(properties_ret.values);
    return _out;
}

void q_qmlcomponent_on_create_object22(void* self, QObject* (*callback)(void*, void*, libqt_map /* of const char* to QVariant* */)) {
    QQmlComponent_OnCreateObject22((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_super_create_object22(void* self, void* parent, libqt_map /* of const char* to QVariant* */ properties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map properties_ret;
    properties_ret.len = properties.len;
    properties_ret.keys = (libqt_string*)malloc(properties_ret.len * sizeof(libqt_string));
    if (properties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlcomponent_create_object22\n");
        abort();
    }
    properties_ret.values = (QVariant**)malloc(properties_ret.len * sizeof(QVariant*));
    if (properties_ret.values == NULL) {
        free(properties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlcomponent_create_object22\n");
        abort();
    }
    const char** properties_karr = (const char**)properties.keys;
    libqt_string* properties_kdest = (libqt_string*)properties_ret.keys;
    QVariant** properties_varr = (QVariant**)properties.values;
    QVariant** properties_vdest = (QVariant**)properties_ret.values;
    for (size_t i = 0; i < properties_ret.len; ++i) {
        properties_kdest[i] = qstring(properties_karr[i]);
        properties_vdest[i] = properties_varr[i];
    }
    return QQmlComponent_SuperCreateObject22((QQmlComponent*)self, (QObject*)parent, properties_ret);
}

const char* q_qmlcomponent_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlcomponent_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlcomponent_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlcomponent_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlcomponent_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlcomponent_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlcomponent_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlcomponent_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlcomponent_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlcomponent_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlcomponent_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlcomponent_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlcomponent_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlcomponent_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlcomponent_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlcomponent_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlcomponent_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlcomponent_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlcomponent_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlcomponent_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlcomponent_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlcomponent_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlcomponent_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlcomponent_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlcomponent_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlcomponent_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlcomponent_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlcomponent_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlcomponent_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlcomponent_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlcomponent_dynamic_property_names\n");
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

QBindingStorage* q_qmlcomponent_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlcomponent_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlcomponent_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlcomponent_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlcomponent_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlcomponent_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlcomponent_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlcomponent_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlcomponent_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlcomponent_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlcomponent_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlcomponent_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlcomponent_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlcomponent_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlcomponent_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlcomponent_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlcomponent_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlcomponent_event(void* self, void* event) {
    return QQmlComponent_Event((QQmlComponent*)self, (QEvent*)event);
}

bool q_qmlcomponent_super_event(void* self, void* event) {
    return QQmlComponent_SuperEvent((QQmlComponent*)self, (QEvent*)event);
}

void q_qmlcomponent_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlComponent_OnEvent((QQmlComponent*)self, (intptr_t)callback);
}

bool q_qmlcomponent_event_filter(void* self, void* watched, void* event) {
    return QQmlComponent_EventFilter((QQmlComponent*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlcomponent_super_event_filter(void* self, void* watched, void* event) {
    return QQmlComponent_SuperEventFilter((QQmlComponent*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlcomponent_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlComponent_OnEventFilter((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_timer_event(void* self, void* event) {
    QQmlComponent_TimerEvent((QQmlComponent*)self, (QTimerEvent*)event);
}

void q_qmlcomponent_super_timer_event(void* self, void* event) {
    QQmlComponent_SuperTimerEvent((QQmlComponent*)self, (QTimerEvent*)event);
}

void q_qmlcomponent_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlComponent_OnTimerEvent((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_child_event(void* self, void* event) {
    QQmlComponent_ChildEvent((QQmlComponent*)self, (QChildEvent*)event);
}

void q_qmlcomponent_super_child_event(void* self, void* event) {
    QQmlComponent_SuperChildEvent((QQmlComponent*)self, (QChildEvent*)event);
}

void q_qmlcomponent_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlComponent_OnChildEvent((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_custom_event(void* self, void* event) {
    QQmlComponent_CustomEvent((QQmlComponent*)self, (QEvent*)event);
}

void q_qmlcomponent_super_custom_event(void* self, void* event) {
    QQmlComponent_SuperCustomEvent((QQmlComponent*)self, (QEvent*)event);
}

void q_qmlcomponent_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlComponent_OnCustomEvent((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_connect_notify(void* self, void* signal) {
    QQmlComponent_ConnectNotify((QQmlComponent*)self, (QMetaMethod*)signal);
}

void q_qmlcomponent_super_connect_notify(void* self, void* signal) {
    QQmlComponent_SuperConnectNotify((QQmlComponent*)self, (QMetaMethod*)signal);
}

void q_qmlcomponent_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlComponent_OnConnectNotify((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_disconnect_notify(void* self, void* signal) {
    QQmlComponent_DisconnectNotify((QQmlComponent*)self, (QMetaMethod*)signal);
}

void q_qmlcomponent_super_disconnect_notify(void* self, void* signal) {
    QQmlComponent_SuperDisconnectNotify((QQmlComponent*)self, (QMetaMethod*)signal);
}

void q_qmlcomponent_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlComponent_OnDisconnectNotify((QQmlComponent*)self, (intptr_t)callback);
}

QObject* q_qmlcomponent_sender(void* self) {
    return QQmlComponent_Sender((QQmlComponent*)self);
}

QObject* q_qmlcomponent_super_sender(void* self) {
    return QQmlComponent_SuperSender((QQmlComponent*)self);
}

void q_qmlcomponent_on_sender(void* self, QObject* (*callback)()) {
    QQmlComponent_OnSender((QQmlComponent*)self, (intptr_t)callback);
}

int32_t q_qmlcomponent_sender_signal_index(void* self) {
    return QQmlComponent_SenderSignalIndex((QQmlComponent*)self);
}

int32_t q_qmlcomponent_super_sender_signal_index(void* self) {
    return QQmlComponent_SuperSenderSignalIndex((QQmlComponent*)self);
}

void q_qmlcomponent_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlComponent_OnSenderSignalIndex((QQmlComponent*)self, (intptr_t)callback);
}

int32_t q_qmlcomponent_receivers(void* self, const char* signal) {
    return QQmlComponent_Receivers((QQmlComponent*)self, signal);
}

int32_t q_qmlcomponent_super_receivers(void* self, const char* signal) {
    return QQmlComponent_SuperReceivers((QQmlComponent*)self, signal);
}

void q_qmlcomponent_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlComponent_OnReceivers((QQmlComponent*)self, (intptr_t)callback);
}

bool q_qmlcomponent_is_signal_connected(void* self, void* signal) {
    return QQmlComponent_IsSignalConnected((QQmlComponent*)self, (QMetaMethod*)signal);
}

bool q_qmlcomponent_super_is_signal_connected(void* self, void* signal) {
    return QQmlComponent_SuperIsSignalConnected((QQmlComponent*)self, (QMetaMethod*)signal);
}

void q_qmlcomponent_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlComponent_OnIsSignalConnected((QQmlComponent*)self, (intptr_t)callback);
}

void q_qmlcomponent_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlcomponent_delete(void* self) {
    QQmlComponent_Delete((QQmlComponent*)(self));
}
