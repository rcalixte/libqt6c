#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmatrix4x4.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqopenglcontext.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqtransform.hpp"
#include "../libqvectornd.hpp"
#include "libqopenglshaderprogram.hpp"
#include "libqopenglshaderprogram.h"

QOpenGLShader* q_openglshader_new(int32_t type) {
    return QOpenGLShader_new(type);
}

QOpenGLShader* q_openglshader_new2(int32_t type, void* parent) {
    return QOpenGLShader_new2(type, (QObject*)parent);
}

const QMetaObject* q_openglshader_meta_object(void* self) {
    return QOpenGLShader_MetaObject((QOpenGLShader*)self);
}

void* q_openglshader_metacast(void* self, const char* param1) {
    return QOpenGLShader_Metacast((QOpenGLShader*)self, param1);
}

int32_t q_openglshader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLShader_Metacall((QOpenGLShader*)self, param1, param2, param3);
}

void q_openglshader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLShader_OnMetacall((QOpenGLShader*)self, (intptr_t)callback);
}

int32_t q_openglshader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLShader_QBaseMetacall((QOpenGLShader*)self, param1, param2, param3);
}

const char* q_openglshader_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_openglshader_shader_type(void* self) {
    return QOpenGLShader_ShaderType((QOpenGLShader*)self);
}

bool q_openglshader_compile_source_code(void* self, const char* source) {
    return QOpenGLShader_CompileSourceCode((QOpenGLShader*)self, source);
}

bool q_openglshader_compile_source_code2(void* self, const char* source) {
    return QOpenGLShader_CompileSourceCode2((QOpenGLShader*)self, qstring(source));
}

bool q_openglshader_compile_source_code3(void* self, const char* source) {
    return QOpenGLShader_CompileSourceCode3((QOpenGLShader*)self, qstring(source));
}

bool q_openglshader_compile_source_file(void* self, const char* fileName) {
    return QOpenGLShader_CompileSourceFile((QOpenGLShader*)self, qstring(fileName));
}

char* q_openglshader_source_code(void* self) {
    libqt_string _str = QOpenGLShader_SourceCode((QOpenGLShader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglshader_is_compiled(void* self) {
    return QOpenGLShader_IsCompiled((QOpenGLShader*)self);
}

const char* q_openglshader_log(void* self) {
    libqt_string _str = QOpenGLShader_Log((QOpenGLShader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_openglshader_shader_id(void* self) {
    return QOpenGLShader_ShaderId((QOpenGLShader*)self);
}

bool q_openglshader_has_open_g_l_shaders(int32_t type) {
    return QOpenGLShader_HasOpenGLShaders(type);
}

const char* q_openglshader_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglshader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglshader_has_open_g_l_shaders2(int32_t type, void* context) {
    return QOpenGLShader_HasOpenGLShaders2(type, (QOpenGLContext*)context);
}

const char* q_openglshader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglshader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglshader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglshader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglshader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglshader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglshader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglshader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglshader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglshader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_openglshader_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_openglshader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglshader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglshader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglshader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_openglshader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglshader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglshader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglshader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglshader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglshader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglshader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglshader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglshader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglshader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglshader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_openglshader_dynamic_property_names\n");
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

QBindingStorage* q_openglshader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglshader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglshader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglshader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglshader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglshader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglshader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglshader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglshader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_openglshader_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_openglshader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglshader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglshader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglshader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_openglshader_event(void* self, void* event) {
    return QOpenGLShader_Event((QOpenGLShader*)self, (QEvent*)event);
}

bool q_openglshader_qbase_event(void* self, void* event) {
    return QOpenGLShader_QBaseEvent((QOpenGLShader*)self, (QEvent*)event);
}

void q_openglshader_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLShader_OnEvent((QOpenGLShader*)self, (intptr_t)callback);
}

bool q_openglshader_event_filter(void* self, void* watched, void* event) {
    return QOpenGLShader_EventFilter((QOpenGLShader*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglshader_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLShader_QBaseEventFilter((QOpenGLShader*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglshader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLShader_OnEventFilter((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_timer_event(void* self, void* event) {
    QOpenGLShader_TimerEvent((QOpenGLShader*)self, (QTimerEvent*)event);
}

void q_openglshader_qbase_timer_event(void* self, void* event) {
    QOpenGLShader_QBaseTimerEvent((QOpenGLShader*)self, (QTimerEvent*)event);
}

void q_openglshader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShader_OnTimerEvent((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_child_event(void* self, void* event) {
    QOpenGLShader_ChildEvent((QOpenGLShader*)self, (QChildEvent*)event);
}

void q_openglshader_qbase_child_event(void* self, void* event) {
    QOpenGLShader_QBaseChildEvent((QOpenGLShader*)self, (QChildEvent*)event);
}

void q_openglshader_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShader_OnChildEvent((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_custom_event(void* self, void* event) {
    QOpenGLShader_CustomEvent((QOpenGLShader*)self, (QEvent*)event);
}

void q_openglshader_qbase_custom_event(void* self, void* event) {
    QOpenGLShader_QBaseCustomEvent((QOpenGLShader*)self, (QEvent*)event);
}

void q_openglshader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShader_OnCustomEvent((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_connect_notify(void* self, void* signal) {
    QOpenGLShader_ConnectNotify((QOpenGLShader*)self, (QMetaMethod*)signal);
}

void q_openglshader_qbase_connect_notify(void* self, void* signal) {
    QOpenGLShader_QBaseConnectNotify((QOpenGLShader*)self, (QMetaMethod*)signal);
}

void q_openglshader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLShader_OnConnectNotify((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_disconnect_notify(void* self, void* signal) {
    QOpenGLShader_DisconnectNotify((QOpenGLShader*)self, (QMetaMethod*)signal);
}

void q_openglshader_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLShader_QBaseDisconnectNotify((QOpenGLShader*)self, (QMetaMethod*)signal);
}

void q_openglshader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLShader_OnDisconnectNotify((QOpenGLShader*)self, (intptr_t)callback);
}

QObject* q_openglshader_sender(void* self) {
    return QOpenGLShader_Sender((QOpenGLShader*)self);
}

QObject* q_openglshader_qbase_sender(void* self) {
    return QOpenGLShader_QBaseSender((QOpenGLShader*)self);
}

void q_openglshader_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLShader_OnSender((QOpenGLShader*)self, (intptr_t)callback);
}

int32_t q_openglshader_sender_signal_index(void* self) {
    return QOpenGLShader_SenderSignalIndex((QOpenGLShader*)self);
}

int32_t q_openglshader_qbase_sender_signal_index(void* self) {
    return QOpenGLShader_QBaseSenderSignalIndex((QOpenGLShader*)self);
}

void q_openglshader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLShader_OnSenderSignalIndex((QOpenGLShader*)self, (intptr_t)callback);
}

int32_t q_openglshader_receivers(void* self, const char* signal) {
    return QOpenGLShader_Receivers((QOpenGLShader*)self, signal);
}

int32_t q_openglshader_qbase_receivers(void* self, const char* signal) {
    return QOpenGLShader_QBaseReceivers((QOpenGLShader*)self, signal);
}

void q_openglshader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLShader_OnReceivers((QOpenGLShader*)self, (intptr_t)callback);
}

bool q_openglshader_is_signal_connected(void* self, void* signal) {
    return QOpenGLShader_IsSignalConnected((QOpenGLShader*)self, (QMetaMethod*)signal);
}

bool q_openglshader_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLShader_QBaseIsSignalConnected((QOpenGLShader*)self, (QMetaMethod*)signal);
}

void q_openglshader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLShader_OnIsSignalConnected((QOpenGLShader*)self, (intptr_t)callback);
}

void q_openglshader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglshader_delete(void* self) {
    QOpenGLShader_Delete((QOpenGLShader*)(self));
}

QOpenGLShaderProgram* q_openglshaderprogram_new() {
    return QOpenGLShaderProgram_new();
}

QOpenGLShaderProgram* q_openglshaderprogram_new2(void* parent) {
    return QOpenGLShaderProgram_new2((QObject*)parent);
}

const QMetaObject* q_openglshaderprogram_meta_object(void* self) {
    return QOpenGLShaderProgram_MetaObject((QOpenGLShaderProgram*)self);
}

void* q_openglshaderprogram_metacast(void* self, const char* param1) {
    return QOpenGLShaderProgram_Metacast((QOpenGLShaderProgram*)self, param1);
}

int32_t q_openglshaderprogram_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLShaderProgram_Metacall((QOpenGLShaderProgram*)self, param1, param2, param3);
}

void q_openglshaderprogram_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLShaderProgram_OnMetacall((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

int32_t q_openglshaderprogram_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLShaderProgram_QBaseMetacall((QOpenGLShaderProgram*)self, param1, param2, param3);
}

const char* q_openglshaderprogram_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglshaderprogram_add_shader(void* self, void* shader) {
    return QOpenGLShaderProgram_AddShader((QOpenGLShaderProgram*)self, (QOpenGLShader*)shader);
}

void q_openglshaderprogram_remove_shader(void* self, void* shader) {
    QOpenGLShaderProgram_RemoveShader((QOpenGLShaderProgram*)self, (QOpenGLShader*)shader);
}

libqt_list /* of QOpenGLShader* */ q_openglshaderprogram_shaders(void* self) {
    libqt_list _arr = QOpenGLShaderProgram_Shaders((QOpenGLShaderProgram*)self);
    return _arr;
}

bool q_openglshaderprogram_add_shader_from_source_code(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddShaderFromSourceCode((QOpenGLShaderProgram*)self, type, source);
}

bool q_openglshaderprogram_add_shader_from_source_code2(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddShaderFromSourceCode2((QOpenGLShaderProgram*)self, type, qstring(source));
}

bool q_openglshaderprogram_add_shader_from_source_code3(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddShaderFromSourceCode3((QOpenGLShaderProgram*)self, type, qstring(source));
}

bool q_openglshaderprogram_add_shader_from_source_file(void* self, int32_t type, const char* fileName) {
    return QOpenGLShaderProgram_AddShaderFromSourceFile((QOpenGLShaderProgram*)self, type, qstring(fileName));
}

bool q_openglshaderprogram_add_cacheable_shader_from_source_code(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddCacheableShaderFromSourceCode((QOpenGLShaderProgram*)self, type, source);
}

bool q_openglshaderprogram_add_cacheable_shader_from_source_code2(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2((QOpenGLShaderProgram*)self, type, qstring(source));
}

bool q_openglshaderprogram_add_cacheable_shader_from_source_code3(void* self, int32_t type, const char* source) {
    return QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3((QOpenGLShaderProgram*)self, type, qstring(source));
}

bool q_openglshaderprogram_add_cacheable_shader_from_source_file(void* self, int32_t type, const char* fileName) {
    return QOpenGLShaderProgram_AddCacheableShaderFromSourceFile((QOpenGLShaderProgram*)self, type, qstring(fileName));
}

void q_openglshaderprogram_remove_all_shaders(void* self) {
    QOpenGLShaderProgram_RemoveAllShaders((QOpenGLShaderProgram*)self);
}

bool q_openglshaderprogram_link(void* self) {
    return QOpenGLShaderProgram_Link((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_on_link(void* self, bool (*callback)()) {
    QOpenGLShaderProgram_OnLink((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

bool q_openglshaderprogram_qbase_link(void* self) {
    return QOpenGLShaderProgram_QBaseLink((QOpenGLShaderProgram*)self);
}

bool q_openglshaderprogram_is_linked(void* self) {
    return QOpenGLShaderProgram_IsLinked((QOpenGLShaderProgram*)self);
}

const char* q_openglshaderprogram_log(void* self) {
    libqt_string _str = QOpenGLShaderProgram_Log((QOpenGLShaderProgram*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglshaderprogram_bind(void* self) {
    return QOpenGLShaderProgram_Bind((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_release(void* self) {
    QOpenGLShaderProgram_Release((QOpenGLShaderProgram*)self);
}

bool q_openglshaderprogram_create(void* self) {
    return QOpenGLShaderProgram_Create((QOpenGLShaderProgram*)self);
}

uint32_t q_openglshaderprogram_program_id(void* self) {
    return QOpenGLShaderProgram_ProgramId((QOpenGLShaderProgram*)self);
}

int32_t q_openglshaderprogram_max_geometry_output_vertices(void* self) {
    return QOpenGLShaderProgram_MaxGeometryOutputVertices((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_set_patch_vertex_count(void* self, int count) {
    QOpenGLShaderProgram_SetPatchVertexCount((QOpenGLShaderProgram*)self, count);
}

int32_t q_openglshaderprogram_patch_vertex_count(void* self) {
    return QOpenGLShaderProgram_PatchVertexCount((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_set_default_outer_tessellation_levels(void* self, libqt_list /* of float */ levels) {
    QOpenGLShaderProgram_SetDefaultOuterTessellationLevels((QOpenGLShaderProgram*)self, levels);
}

libqt_list /* of float */ q_openglshaderprogram_default_outer_tessellation_levels(void* self) {
    libqt_list _arr = QOpenGLShaderProgram_DefaultOuterTessellationLevels((QOpenGLShaderProgram*)self);
    return _arr;
}

void q_openglshaderprogram_set_default_inner_tessellation_levels(void* self, libqt_list /* of float */ levels) {
    QOpenGLShaderProgram_SetDefaultInnerTessellationLevels((QOpenGLShaderProgram*)self, levels);
}

libqt_list /* of float */ q_openglshaderprogram_default_inner_tessellation_levels(void* self) {
    libqt_list _arr = QOpenGLShaderProgram_DefaultInnerTessellationLevels((QOpenGLShaderProgram*)self);
    return _arr;
}

void q_openglshaderprogram_bind_attribute_location(void* self, const char* name, int location) {
    QOpenGLShaderProgram_BindAttributeLocation((QOpenGLShaderProgram*)self, name, location);
}

void q_openglshaderprogram_bind_attribute_location2(void* self, const char* name, int location) {
    QOpenGLShaderProgram_BindAttributeLocation2((QOpenGLShaderProgram*)self, qstring(name), location);
}

void q_openglshaderprogram_bind_attribute_location3(void* self, const char* name, int location) {
    QOpenGLShaderProgram_BindAttributeLocation3((QOpenGLShaderProgram*)self, qstring(name), location);
}

int32_t q_openglshaderprogram_attribute_location(void* self, const char* name) {
    return QOpenGLShaderProgram_AttributeLocation((QOpenGLShaderProgram*)self, name);
}

int32_t q_openglshaderprogram_attribute_location2(void* self, const char* name) {
    return QOpenGLShaderProgram_AttributeLocation2((QOpenGLShaderProgram*)self, qstring(name));
}

int32_t q_openglshaderprogram_attribute_location3(void* self, const char* name) {
    return QOpenGLShaderProgram_AttributeLocation3((QOpenGLShaderProgram*)self, qstring(name));
}

void q_openglshaderprogram_set_attribute_value(void* self, int location, float value) {
    QOpenGLShaderProgram_SetAttributeValue((QOpenGLShaderProgram*)self, location, value);
}

void q_openglshaderprogram_set_attribute_value2(void* self, int location, float x, float y) {
    QOpenGLShaderProgram_SetAttributeValue2((QOpenGLShaderProgram*)self, location, x, y);
}

void q_openglshaderprogram_set_attribute_value3(void* self, int location, float x, float y, float z) {
    QOpenGLShaderProgram_SetAttributeValue3((QOpenGLShaderProgram*)self, location, x, y, z);
}

void q_openglshaderprogram_set_attribute_value4(void* self, int location, float x, float y, float z, float w) {
    QOpenGLShaderProgram_SetAttributeValue4((QOpenGLShaderProgram*)self, location, x, y, z, w);
}

void q_openglshaderprogram_set_attribute_value5(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetAttributeValue5((QOpenGLShaderProgram*)self, location, (QVector2D*)value);
}

void q_openglshaderprogram_set_attribute_value6(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetAttributeValue6((QOpenGLShaderProgram*)self, location, (QVector3D*)value);
}

void q_openglshaderprogram_set_attribute_value7(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetAttributeValue7((QOpenGLShaderProgram*)self, location, (QVector4D*)value);
}

void q_openglshaderprogram_set_attribute_value8(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetAttributeValue8((QOpenGLShaderProgram*)self, location, (QColor*)value);
}

void q_openglshaderprogram_set_attribute_value9(void* self, int location, float* values, int columns, int rows) {
    QOpenGLShaderProgram_SetAttributeValue9((QOpenGLShaderProgram*)self, location, values, columns, rows);
}

void q_openglshaderprogram_set_attribute_value10(void* self, const char* name, float value) {
    QOpenGLShaderProgram_SetAttributeValue10((QOpenGLShaderProgram*)self, name, value);
}

void q_openglshaderprogram_set_attribute_value11(void* self, const char* name, float x, float y) {
    QOpenGLShaderProgram_SetAttributeValue11((QOpenGLShaderProgram*)self, name, x, y);
}

void q_openglshaderprogram_set_attribute_value12(void* self, const char* name, float x, float y, float z) {
    QOpenGLShaderProgram_SetAttributeValue12((QOpenGLShaderProgram*)self, name, x, y, z);
}

void q_openglshaderprogram_set_attribute_value13(void* self, const char* name, float x, float y, float z, float w) {
    QOpenGLShaderProgram_SetAttributeValue13((QOpenGLShaderProgram*)self, name, x, y, z, w);
}

void q_openglshaderprogram_set_attribute_value14(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetAttributeValue14((QOpenGLShaderProgram*)self, name, (QVector2D*)value);
}

void q_openglshaderprogram_set_attribute_value15(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetAttributeValue15((QOpenGLShaderProgram*)self, name, (QVector3D*)value);
}

void q_openglshaderprogram_set_attribute_value16(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetAttributeValue16((QOpenGLShaderProgram*)self, name, (QVector4D*)value);
}

void q_openglshaderprogram_set_attribute_value17(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetAttributeValue17((QOpenGLShaderProgram*)self, name, (QColor*)value);
}

void q_openglshaderprogram_set_attribute_value18(void* self, const char* name, float* values, int columns, int rows) {
    QOpenGLShaderProgram_SetAttributeValue18((QOpenGLShaderProgram*)self, name, values, columns, rows);
}

void q_openglshaderprogram_set_attribute_array(void* self, int location, float* values, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeArray((QOpenGLShaderProgram*)self, location, values, tupleSize);
}

void q_openglshaderprogram_set_attribute_array2(void* self, int location, void* values) {
    QOpenGLShaderProgram_SetAttributeArray2((QOpenGLShaderProgram*)self, location, (QVector2D*)values);
}

void q_openglshaderprogram_set_attribute_array3(void* self, int location, void* values) {
    QOpenGLShaderProgram_SetAttributeArray3((QOpenGLShaderProgram*)self, location, (QVector3D*)values);
}

void q_openglshaderprogram_set_attribute_array4(void* self, int location, void* values) {
    QOpenGLShaderProgram_SetAttributeArray4((QOpenGLShaderProgram*)self, location, (QVector4D*)values);
}

void q_openglshaderprogram_set_attribute_array5(void* self, int location, uint32_t type, void* values, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeArray5((QOpenGLShaderProgram*)self, location, type, values, tupleSize);
}

void q_openglshaderprogram_set_attribute_array6(void* self, const char* name, float* values, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeArray6((QOpenGLShaderProgram*)self, name, values, tupleSize);
}

void q_openglshaderprogram_set_attribute_array7(void* self, const char* name, void* values) {
    QOpenGLShaderProgram_SetAttributeArray7((QOpenGLShaderProgram*)self, name, (QVector2D*)values);
}

void q_openglshaderprogram_set_attribute_array8(void* self, const char* name, void* values) {
    QOpenGLShaderProgram_SetAttributeArray8((QOpenGLShaderProgram*)self, name, (QVector3D*)values);
}

void q_openglshaderprogram_set_attribute_array9(void* self, const char* name, void* values) {
    QOpenGLShaderProgram_SetAttributeArray9((QOpenGLShaderProgram*)self, name, (QVector4D*)values);
}

void q_openglshaderprogram_set_attribute_array10(void* self, const char* name, uint32_t type, void* values, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeArray10((QOpenGLShaderProgram*)self, name, type, values, tupleSize);
}

void q_openglshaderprogram_set_attribute_buffer(void* self, int location, uint32_t type, int offset, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeBuffer((QOpenGLShaderProgram*)self, location, type, offset, tupleSize);
}

void q_openglshaderprogram_set_attribute_buffer2(void* self, const char* name, uint32_t type, int offset, int tupleSize) {
    QOpenGLShaderProgram_SetAttributeBuffer2((QOpenGLShaderProgram*)self, name, type, offset, tupleSize);
}

void q_openglshaderprogram_enable_attribute_array(void* self, int location) {
    QOpenGLShaderProgram_EnableAttributeArray((QOpenGLShaderProgram*)self, location);
}

void q_openglshaderprogram_enable_attribute_array2(void* self, const char* name) {
    QOpenGLShaderProgram_EnableAttributeArray2((QOpenGLShaderProgram*)self, name);
}

void q_openglshaderprogram_disable_attribute_array(void* self, int location) {
    QOpenGLShaderProgram_DisableAttributeArray((QOpenGLShaderProgram*)self, location);
}

void q_openglshaderprogram_disable_attribute_array2(void* self, const char* name) {
    QOpenGLShaderProgram_DisableAttributeArray2((QOpenGLShaderProgram*)self, name);
}

int32_t q_openglshaderprogram_uniform_location(void* self, const char* name) {
    return QOpenGLShaderProgram_UniformLocation((QOpenGLShaderProgram*)self, name);
}

int32_t q_openglshaderprogram_uniform_location2(void* self, const char* name) {
    return QOpenGLShaderProgram_UniformLocation2((QOpenGLShaderProgram*)self, qstring(name));
}

int32_t q_openglshaderprogram_uniform_location3(void* self, const char* name) {
    return QOpenGLShaderProgram_UniformLocation3((QOpenGLShaderProgram*)self, qstring(name));
}

void q_openglshaderprogram_set_uniform_value(void* self, int location, float value) {
    QOpenGLShaderProgram_SetUniformValue((QOpenGLShaderProgram*)self, location, value);
}

void q_openglshaderprogram_set_uniform_value2(void* self, int location, int32_t value) {
    QOpenGLShaderProgram_SetUniformValue2((QOpenGLShaderProgram*)self, location, value);
}

void q_openglshaderprogram_set_uniform_value3(void* self, int location, uint32_t value) {
    QOpenGLShaderProgram_SetUniformValue3((QOpenGLShaderProgram*)self, location, value);
}

void q_openglshaderprogram_set_uniform_value4(void* self, int location, float x, float y) {
    QOpenGLShaderProgram_SetUniformValue4((QOpenGLShaderProgram*)self, location, x, y);
}

void q_openglshaderprogram_set_uniform_value5(void* self, int location, float x, float y, float z) {
    QOpenGLShaderProgram_SetUniformValue5((QOpenGLShaderProgram*)self, location, x, y, z);
}

void q_openglshaderprogram_set_uniform_value6(void* self, int location, float x, float y, float z, float w) {
    QOpenGLShaderProgram_SetUniformValue6((QOpenGLShaderProgram*)self, location, x, y, z, w);
}

void q_openglshaderprogram_set_uniform_value7(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetUniformValue7((QOpenGLShaderProgram*)self, location, (QVector2D*)value);
}

void q_openglshaderprogram_set_uniform_value8(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetUniformValue8((QOpenGLShaderProgram*)self, location, (QVector3D*)value);
}

void q_openglshaderprogram_set_uniform_value9(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetUniformValue9((QOpenGLShaderProgram*)self, location, (QVector4D*)value);
}

void q_openglshaderprogram_set_uniform_value10(void* self, int location, void* color) {
    QOpenGLShaderProgram_SetUniformValue10((QOpenGLShaderProgram*)self, location, (QColor*)color);
}

void q_openglshaderprogram_set_uniform_value11(void* self, int location, void* point) {
    QOpenGLShaderProgram_SetUniformValue11((QOpenGLShaderProgram*)self, location, (QPoint*)point);
}

void q_openglshaderprogram_set_uniform_value12(void* self, int location, void* point) {
    QOpenGLShaderProgram_SetUniformValue12((QOpenGLShaderProgram*)self, location, (QPointF*)point);
}

void q_openglshaderprogram_set_uniform_value13(void* self, int location, void* size) {
    QOpenGLShaderProgram_SetUniformValue13((QOpenGLShaderProgram*)self, location, (QSize*)size);
}

void q_openglshaderprogram_set_uniform_value14(void* self, int location, void* size) {
    QOpenGLShaderProgram_SetUniformValue14((QOpenGLShaderProgram*)self, location, (QSizeF*)size);
}

void q_openglshaderprogram_set_uniform_value23(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetUniformValue23((QOpenGLShaderProgram*)self, location, (QMatrix4x4*)value);
}

void q_openglshaderprogram_set_uniform_value27(void* self, int location, void* value) {
    QOpenGLShaderProgram_SetUniformValue27((QOpenGLShaderProgram*)self, location, (QTransform*)value);
}

void q_openglshaderprogram_set_uniform_value28(void* self, const char* name, float value) {
    QOpenGLShaderProgram_SetUniformValue28((QOpenGLShaderProgram*)self, name, value);
}

void q_openglshaderprogram_set_uniform_value29(void* self, const char* name, int32_t value) {
    QOpenGLShaderProgram_SetUniformValue29((QOpenGLShaderProgram*)self, name, value);
}

void q_openglshaderprogram_set_uniform_value30(void* self, const char* name, uint32_t value) {
    QOpenGLShaderProgram_SetUniformValue30((QOpenGLShaderProgram*)self, name, value);
}

void q_openglshaderprogram_set_uniform_value31(void* self, const char* name, float x, float y) {
    QOpenGLShaderProgram_SetUniformValue31((QOpenGLShaderProgram*)self, name, x, y);
}

void q_openglshaderprogram_set_uniform_value32(void* self, const char* name, float x, float y, float z) {
    QOpenGLShaderProgram_SetUniformValue32((QOpenGLShaderProgram*)self, name, x, y, z);
}

void q_openglshaderprogram_set_uniform_value33(void* self, const char* name, float x, float y, float z, float w) {
    QOpenGLShaderProgram_SetUniformValue33((QOpenGLShaderProgram*)self, name, x, y, z, w);
}

void q_openglshaderprogram_set_uniform_value34(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetUniformValue34((QOpenGLShaderProgram*)self, name, (QVector2D*)value);
}

void q_openglshaderprogram_set_uniform_value35(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetUniformValue35((QOpenGLShaderProgram*)self, name, (QVector3D*)value);
}

void q_openglshaderprogram_set_uniform_value36(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetUniformValue36((QOpenGLShaderProgram*)self, name, (QVector4D*)value);
}

void q_openglshaderprogram_set_uniform_value37(void* self, const char* name, void* color) {
    QOpenGLShaderProgram_SetUniformValue37((QOpenGLShaderProgram*)self, name, (QColor*)color);
}

void q_openglshaderprogram_set_uniform_value38(void* self, const char* name, void* point) {
    QOpenGLShaderProgram_SetUniformValue38((QOpenGLShaderProgram*)self, name, (QPoint*)point);
}

void q_openglshaderprogram_set_uniform_value39(void* self, const char* name, void* point) {
    QOpenGLShaderProgram_SetUniformValue39((QOpenGLShaderProgram*)self, name, (QPointF*)point);
}

void q_openglshaderprogram_set_uniform_value40(void* self, const char* name, void* size) {
    QOpenGLShaderProgram_SetUniformValue40((QOpenGLShaderProgram*)self, name, (QSize*)size);
}

void q_openglshaderprogram_set_uniform_value41(void* self, const char* name, void* size) {
    QOpenGLShaderProgram_SetUniformValue41((QOpenGLShaderProgram*)self, name, (QSizeF*)size);
}

void q_openglshaderprogram_set_uniform_value50(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetUniformValue50((QOpenGLShaderProgram*)self, name, (QMatrix4x4*)value);
}

void q_openglshaderprogram_set_uniform_value54(void* self, const char* name, void* value) {
    QOpenGLShaderProgram_SetUniformValue54((QOpenGLShaderProgram*)self, name, (QTransform*)value);
}

void q_openglshaderprogram_set_uniform_value_array(void* self, int location, float* values, int count, int tupleSize) {
    QOpenGLShaderProgram_SetUniformValueArray((QOpenGLShaderProgram*)self, location, values, count, tupleSize);
}

void q_openglshaderprogram_set_uniform_value_array2(void* self, int location, int32_t* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray2((QOpenGLShaderProgram*)self, location, values, count);
}

void q_openglshaderprogram_set_uniform_value_array3(void* self, int location, uint32_t* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray3((QOpenGLShaderProgram*)self, location, values, count);
}

void q_openglshaderprogram_set_uniform_value_array4(void* self, int location, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray4((QOpenGLShaderProgram*)self, location, (QVector2D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array5(void* self, int location, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray5((QOpenGLShaderProgram*)self, location, (QVector3D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array6(void* self, int location, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray6((QOpenGLShaderProgram*)self, location, (QVector4D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array15(void* self, int location, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray15((QOpenGLShaderProgram*)self, location, (QMatrix4x4*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array16(void* self, const char* name, float* values, int count, int tupleSize) {
    QOpenGLShaderProgram_SetUniformValueArray16((QOpenGLShaderProgram*)self, name, values, count, tupleSize);
}

void q_openglshaderprogram_set_uniform_value_array17(void* self, const char* name, int32_t* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray17((QOpenGLShaderProgram*)self, name, values, count);
}

void q_openglshaderprogram_set_uniform_value_array18(void* self, const char* name, uint32_t* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray18((QOpenGLShaderProgram*)self, name, values, count);
}

void q_openglshaderprogram_set_uniform_value_array19(void* self, const char* name, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray19((QOpenGLShaderProgram*)self, name, (QVector2D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array20(void* self, const char* name, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray20((QOpenGLShaderProgram*)self, name, (QVector3D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array21(void* self, const char* name, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray21((QOpenGLShaderProgram*)self, name, (QVector4D*)values, count);
}

void q_openglshaderprogram_set_uniform_value_array30(void* self, const char* name, void* values, int count) {
    QOpenGLShaderProgram_SetUniformValueArray30((QOpenGLShaderProgram*)self, name, (QMatrix4x4*)values, count);
}

bool q_openglshaderprogram_has_open_g_l_shader_programs() {
    return QOpenGLShaderProgram_HasOpenGLShaderPrograms();
}

const char* q_openglshaderprogram_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglshaderprogram_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglshaderprogram_set_attribute_array42(void* self, int location, float* values, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeArray42((QOpenGLShaderProgram*)self, location, values, tupleSize, stride);
}

void q_openglshaderprogram_set_attribute_array32(void* self, int location, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray32((QOpenGLShaderProgram*)self, location, (QVector2D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array33(void* self, int location, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray33((QOpenGLShaderProgram*)self, location, (QVector3D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array34(void* self, int location, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray34((QOpenGLShaderProgram*)self, location, (QVector4D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array52(void* self, int location, uint32_t type, void* values, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeArray52((QOpenGLShaderProgram*)self, location, type, values, tupleSize, stride);
}

void q_openglshaderprogram_set_attribute_array43(void* self, const char* name, float* values, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeArray43((QOpenGLShaderProgram*)self, name, values, tupleSize, stride);
}

void q_openglshaderprogram_set_attribute_array35(void* self, const char* name, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray35((QOpenGLShaderProgram*)self, name, (QVector2D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array36(void* self, const char* name, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray36((QOpenGLShaderProgram*)self, name, (QVector3D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array37(void* self, const char* name, void* values, int stride) {
    QOpenGLShaderProgram_SetAttributeArray37((QOpenGLShaderProgram*)self, name, (QVector4D*)values, stride);
}

void q_openglshaderprogram_set_attribute_array53(void* self, const char* name, uint32_t type, void* values, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeArray53((QOpenGLShaderProgram*)self, name, type, values, tupleSize, stride);
}

void q_openglshaderprogram_set_attribute_buffer5(void* self, int location, uint32_t type, int offset, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeBuffer5((QOpenGLShaderProgram*)self, location, type, offset, tupleSize, stride);
}

void q_openglshaderprogram_set_attribute_buffer52(void* self, const char* name, uint32_t type, int offset, int tupleSize, int stride) {
    QOpenGLShaderProgram_SetAttributeBuffer52((QOpenGLShaderProgram*)self, name, type, offset, tupleSize, stride);
}

bool q_openglshaderprogram_has_open_g_l_shader_programs1(void* context) {
    return QOpenGLShaderProgram_HasOpenGLShaderPrograms1((QOpenGLContext*)context);
}

const char* q_openglshaderprogram_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglshaderprogram_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglshaderprogram_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglshaderprogram_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglshaderprogram_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglshaderprogram_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglshaderprogram_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglshaderprogram_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglshaderprogram_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglshaderprogram_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_openglshaderprogram_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_openglshaderprogram_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglshaderprogram_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglshaderprogram_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglshaderprogram_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_openglshaderprogram_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglshaderprogram_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglshaderprogram_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglshaderprogram_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglshaderprogram_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglshaderprogram_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglshaderprogram_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglshaderprogram_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglshaderprogram_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglshaderprogram_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglshaderprogram_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_openglshaderprogram_dynamic_property_names\n");
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

QBindingStorage* q_openglshaderprogram_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglshaderprogram_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglshaderprogram_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglshaderprogram_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglshaderprogram_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglshaderprogram_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglshaderprogram_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglshaderprogram_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglshaderprogram_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_openglshaderprogram_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_openglshaderprogram_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglshaderprogram_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglshaderprogram_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglshaderprogram_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_openglshaderprogram_event(void* self, void* event) {
    return QOpenGLShaderProgram_Event((QOpenGLShaderProgram*)self, (QEvent*)event);
}

bool q_openglshaderprogram_qbase_event(void* self, void* event) {
    return QOpenGLShaderProgram_QBaseEvent((QOpenGLShaderProgram*)self, (QEvent*)event);
}

void q_openglshaderprogram_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnEvent((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

bool q_openglshaderprogram_event_filter(void* self, void* watched, void* event) {
    return QOpenGLShaderProgram_EventFilter((QOpenGLShaderProgram*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglshaderprogram_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLShaderProgram_QBaseEventFilter((QOpenGLShaderProgram*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglshaderprogram_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLShaderProgram_OnEventFilter((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_timer_event(void* self, void* event) {
    QOpenGLShaderProgram_TimerEvent((QOpenGLShaderProgram*)self, (QTimerEvent*)event);
}

void q_openglshaderprogram_qbase_timer_event(void* self, void* event) {
    QOpenGLShaderProgram_QBaseTimerEvent((QOpenGLShaderProgram*)self, (QTimerEvent*)event);
}

void q_openglshaderprogram_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnTimerEvent((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_child_event(void* self, void* event) {
    QOpenGLShaderProgram_ChildEvent((QOpenGLShaderProgram*)self, (QChildEvent*)event);
}

void q_openglshaderprogram_qbase_child_event(void* self, void* event) {
    QOpenGLShaderProgram_QBaseChildEvent((QOpenGLShaderProgram*)self, (QChildEvent*)event);
}

void q_openglshaderprogram_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnChildEvent((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_custom_event(void* self, void* event) {
    QOpenGLShaderProgram_CustomEvent((QOpenGLShaderProgram*)self, (QEvent*)event);
}

void q_openglshaderprogram_qbase_custom_event(void* self, void* event) {
    QOpenGLShaderProgram_QBaseCustomEvent((QOpenGLShaderProgram*)self, (QEvent*)event);
}

void q_openglshaderprogram_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnCustomEvent((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_connect_notify(void* self, void* signal) {
    QOpenGLShaderProgram_ConnectNotify((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

void q_openglshaderprogram_qbase_connect_notify(void* self, void* signal) {
    QOpenGLShaderProgram_QBaseConnectNotify((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

void q_openglshaderprogram_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnConnectNotify((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_disconnect_notify(void* self, void* signal) {
    QOpenGLShaderProgram_DisconnectNotify((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

void q_openglshaderprogram_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLShaderProgram_QBaseDisconnectNotify((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

void q_openglshaderprogram_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnDisconnectNotify((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

QObject* q_openglshaderprogram_sender(void* self) {
    return QOpenGLShaderProgram_Sender((QOpenGLShaderProgram*)self);
}

QObject* q_openglshaderprogram_qbase_sender(void* self) {
    return QOpenGLShaderProgram_QBaseSender((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLShaderProgram_OnSender((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

int32_t q_openglshaderprogram_sender_signal_index(void* self) {
    return QOpenGLShaderProgram_SenderSignalIndex((QOpenGLShaderProgram*)self);
}

int32_t q_openglshaderprogram_qbase_sender_signal_index(void* self) {
    return QOpenGLShaderProgram_QBaseSenderSignalIndex((QOpenGLShaderProgram*)self);
}

void q_openglshaderprogram_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLShaderProgram_OnSenderSignalIndex((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

int32_t q_openglshaderprogram_receivers(void* self, const char* signal) {
    return QOpenGLShaderProgram_Receivers((QOpenGLShaderProgram*)self, signal);
}

int32_t q_openglshaderprogram_qbase_receivers(void* self, const char* signal) {
    return QOpenGLShaderProgram_QBaseReceivers((QOpenGLShaderProgram*)self, signal);
}

void q_openglshaderprogram_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLShaderProgram_OnReceivers((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

bool q_openglshaderprogram_is_signal_connected(void* self, void* signal) {
    return QOpenGLShaderProgram_IsSignalConnected((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

bool q_openglshaderprogram_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLShaderProgram_QBaseIsSignalConnected((QOpenGLShaderProgram*)self, (QMetaMethod*)signal);
}

void q_openglshaderprogram_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLShaderProgram_OnIsSignalConnected((QOpenGLShaderProgram*)self, (intptr_t)callback);
}

void q_openglshaderprogram_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglshaderprogram_delete(void* self) {
    QOpenGLShaderProgram_Delete((QOpenGLShaderProgram*)(self));
}
