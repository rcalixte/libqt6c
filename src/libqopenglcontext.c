#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqopenglextrafunctions.hpp"
#include "libqopenglfunctions.hpp"
#include "libqscreen.hpp"
#include "libqsurface.hpp"
#include "libqsurfaceformat.hpp"
#include "libqopenglcontext.hpp"
#include "libqopenglcontext.h"

const QMetaObject* q_openglcontextgroup_meta_object(void* self) {
    return QOpenGLContextGroup_MetaObject((QOpenGLContextGroup*)self);
}

void* q_openglcontextgroup_metacast(void* self, const char* param1) {
    return QOpenGLContextGroup_Metacast((QOpenGLContextGroup*)self, param1);
}

int32_t q_openglcontextgroup_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLContextGroup_Metacall((QOpenGLContextGroup*)self, param1, param2, param3);
}

const char* q_openglcontextgroup_tr(const char* s) {
    libqt_string _str = QOpenGLContextGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QOpenGLContext* */ q_openglcontextgroup_shares(void* self) {
    libqt_list _arr = QOpenGLContextGroup_Shares((QOpenGLContextGroup*)self);
    return _arr;
}

QOpenGLContextGroup* q_openglcontextgroup_current_context_group() {
    return QOpenGLContextGroup_CurrentContextGroup();
}

const char* q_openglcontextgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QOpenGLContextGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglcontextgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QOpenGLContextGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglcontextgroup_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_openglcontextgroup_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_openglcontextgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglcontextgroup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglcontextgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglcontextgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglcontextgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglcontextgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglcontextgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglcontextgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglcontextgroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglcontextgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_openglcontextgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglcontextgroup_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglcontextgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglcontextgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_openglcontextgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglcontextgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglcontextgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglcontextgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglcontextgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglcontextgroup_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglcontextgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglcontextgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglcontextgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglcontextgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglcontextgroup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_openglcontextgroup_dynamic_property_names");
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

QBindingStorage* q_openglcontextgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglcontextgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglcontextgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglcontextgroup_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglcontextgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglcontextgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglcontextgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglcontextgroup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglcontextgroup_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_openglcontextgroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglcontextgroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglcontextgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglcontextgroup_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_openglcontextgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglcontextgroup_delete(void* self) {
    QOpenGLContextGroup_Delete((QOpenGLContextGroup*)(self));
}

QOpenGLContext* q_openglcontext_new() {
    return QOpenGLContext_new();
}

QOpenGLContext* q_openglcontext_new2(void* parent) {
    return QOpenGLContext_new2((QObject*)parent);
}

const QMetaObject* q_openglcontext_meta_object(void* self) {
    return QOpenGLContext_MetaObject((QOpenGLContext*)self);
}

void* q_openglcontext_metacast(void* self, const char* param1) {
    return QOpenGLContext_Metacast((QOpenGLContext*)self, param1);
}

int32_t q_openglcontext_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLContext_Metacall((QOpenGLContext*)self, param1, param2, param3);
}

void q_openglcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLContext_OnMetacall((QOpenGLContext*)self, (intptr_t)callback);
}

int32_t q_openglcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLContext_QBaseMetacall((QOpenGLContext*)self, param1, param2, param3);
}

const char* q_openglcontext_tr(const char* s) {
    libqt_string _str = QOpenGLContext_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglcontext_set_format(void* self, void* format) {
    QOpenGLContext_SetFormat((QOpenGLContext*)self, (QSurfaceFormat*)format);
}

void q_openglcontext_set_share_context(void* self, void* shareContext) {
    QOpenGLContext_SetShareContext((QOpenGLContext*)self, (QOpenGLContext*)shareContext);
}

void q_openglcontext_set_screen(void* self, void* screen) {
    QOpenGLContext_SetScreen((QOpenGLContext*)self, (QScreen*)screen);
}

bool q_openglcontext_create(void* self) {
    return QOpenGLContext_Create((QOpenGLContext*)self);
}

bool q_openglcontext_is_valid(void* self) {
    return QOpenGLContext_IsValid((QOpenGLContext*)self);
}

QSurfaceFormat* q_openglcontext_format(void* self) {
    return QOpenGLContext_Format((QOpenGLContext*)self);
}

QOpenGLContext* q_openglcontext_share_context(void* self) {
    return QOpenGLContext_ShareContext((QOpenGLContext*)self);
}

QOpenGLContextGroup* q_openglcontext_share_group(void* self) {
    return QOpenGLContext_ShareGroup((QOpenGLContext*)self);
}

QScreen* q_openglcontext_screen(void* self) {
    return QOpenGLContext_Screen((QOpenGLContext*)self);
}

uint32_t q_openglcontext_default_framebuffer_object(void* self) {
    return QOpenGLContext_DefaultFramebufferObject((QOpenGLContext*)self);
}

bool q_openglcontext_make_current(void* self, void* surface) {
    return QOpenGLContext_MakeCurrent((QOpenGLContext*)self, (QSurface*)surface);
}

void q_openglcontext_done_current(void* self) {
    QOpenGLContext_DoneCurrent((QOpenGLContext*)self);
}

void q_openglcontext_swap_buffers(void* self, void* surface) {
    QOpenGLContext_SwapBuffers((QOpenGLContext*)self, (QSurface*)surface);
}

QSurface* q_openglcontext_surface(void* self) {
    return QOpenGLContext_Surface((QOpenGLContext*)self);
}

QOpenGLContext* q_openglcontext_current_context() {
    return QOpenGLContext_CurrentContext();
}

bool q_openglcontext_are_sharing(void* first, void* second) {
    return QOpenGLContext_AreSharing((QOpenGLContext*)first, (QOpenGLContext*)second);
}

QOpenGLFunctions* q_openglcontext_functions(void* self) {
    return QOpenGLContext_Functions((QOpenGLContext*)self);
}

QOpenGLExtraFunctions* q_openglcontext_extra_functions(void* self) {
    return QOpenGLContext_ExtraFunctions((QOpenGLContext*)self);
}

libqt_list /* of char* */ q_openglcontext_extensions(void* self) {
    return QOpenGLContext_Extensions((QOpenGLContext*)self);
}

bool q_openglcontext_has_extension(void* self, const char* extension) {
    return QOpenGLContext_HasExtension((QOpenGLContext*)self, qstring(extension));
}

int32_t q_openglcontext_open_g_l_module_type() {
    return QOpenGLContext_OpenGLModuleType();
}

bool q_openglcontext_is_open_g_l_e_s(void* self) {
    return QOpenGLContext_IsOpenGLES((QOpenGLContext*)self);
}

bool q_openglcontext_supports_threaded_open_g_l() {
    return QOpenGLContext_SupportsThreadedOpenGL();
}

QOpenGLContext* q_openglcontext_global_share_context() {
    return QOpenGLContext_GlobalShareContext();
}

void* q_openglcontext_resolve_interface(void* self, const char* name, int revision) {
    return QOpenGLContext_ResolveInterface((QOpenGLContext*)self, name, revision);
}

void q_openglcontext_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QOpenGLContext_OnResolveInterface((QOpenGLContext*)self, (intptr_t)callback);
}

void* q_openglcontext_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QOpenGLContext_QBaseResolveInterface((QOpenGLContext*)self, name, revision);
}

void q_openglcontext_about_to_be_destroyed(void* self) {
    QOpenGLContext_AboutToBeDestroyed((QOpenGLContext*)self);
}

void q_openglcontext_on_about_to_be_destroyed(void* self, void (*callback)(void*)) {
    QOpenGLContext_Connect_AboutToBeDestroyed((QOpenGLContext*)self, (intptr_t)callback);
}

const char* q_openglcontext_tr2(const char* s, const char* c) {
    libqt_string _str = QOpenGLContext_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglcontext_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QOpenGLContext_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglcontext_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglcontext_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglcontext_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglcontext_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglcontext_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglcontext_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglcontext_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglcontext_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglcontext_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglcontext_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_openglcontext_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglcontext_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglcontext_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglcontext_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_openglcontext_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglcontext_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglcontext_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglcontext_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglcontext_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglcontext_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglcontext_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglcontext_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglcontext_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglcontext_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglcontext_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_openglcontext_dynamic_property_names");
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

QBindingStorage* q_openglcontext_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglcontext_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglcontext_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglcontext_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglcontext_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglcontext_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglcontext_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglcontext_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglcontext_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_openglcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglcontext_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglcontext_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_openglcontext_event(void* self, void* event) {
    return QOpenGLContext_Event((QOpenGLContext*)self, (QEvent*)event);
}

bool q_openglcontext_qbase_event(void* self, void* event) {
    return QOpenGLContext_QBaseEvent((QOpenGLContext*)self, (QEvent*)event);
}

void q_openglcontext_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLContext_OnEvent((QOpenGLContext*)self, (intptr_t)callback);
}

bool q_openglcontext_event_filter(void* self, void* watched, void* event) {
    return QOpenGLContext_EventFilter((QOpenGLContext*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglcontext_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLContext_QBaseEventFilter((QOpenGLContext*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLContext_OnEventFilter((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_timer_event(void* self, void* event) {
    QOpenGLContext_TimerEvent((QOpenGLContext*)self, (QTimerEvent*)event);
}

void q_openglcontext_qbase_timer_event(void* self, void* event) {
    QOpenGLContext_QBaseTimerEvent((QOpenGLContext*)self, (QTimerEvent*)event);
}

void q_openglcontext_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLContext_OnTimerEvent((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_child_event(void* self, void* event) {
    QOpenGLContext_ChildEvent((QOpenGLContext*)self, (QChildEvent*)event);
}

void q_openglcontext_qbase_child_event(void* self, void* event) {
    QOpenGLContext_QBaseChildEvent((QOpenGLContext*)self, (QChildEvent*)event);
}

void q_openglcontext_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLContext_OnChildEvent((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_custom_event(void* self, void* event) {
    QOpenGLContext_CustomEvent((QOpenGLContext*)self, (QEvent*)event);
}

void q_openglcontext_qbase_custom_event(void* self, void* event) {
    QOpenGLContext_QBaseCustomEvent((QOpenGLContext*)self, (QEvent*)event);
}

void q_openglcontext_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLContext_OnCustomEvent((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_connect_notify(void* self, void* signal) {
    QOpenGLContext_ConnectNotify((QOpenGLContext*)self, (QMetaMethod*)signal);
}

void q_openglcontext_qbase_connect_notify(void* self, void* signal) {
    QOpenGLContext_QBaseConnectNotify((QOpenGLContext*)self, (QMetaMethod*)signal);
}

void q_openglcontext_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLContext_OnConnectNotify((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_disconnect_notify(void* self, void* signal) {
    QOpenGLContext_DisconnectNotify((QOpenGLContext*)self, (QMetaMethod*)signal);
}

void q_openglcontext_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLContext_QBaseDisconnectNotify((QOpenGLContext*)self, (QMetaMethod*)signal);
}

void q_openglcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLContext_OnDisconnectNotify((QOpenGLContext*)self, (intptr_t)callback);
}

QObject* q_openglcontext_sender(void* self) {
    return QOpenGLContext_Sender((QOpenGLContext*)self);
}

QObject* q_openglcontext_qbase_sender(void* self) {
    return QOpenGLContext_QBaseSender((QOpenGLContext*)self);
}

void q_openglcontext_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLContext_OnSender((QOpenGLContext*)self, (intptr_t)callback);
}

int32_t q_openglcontext_sender_signal_index(void* self) {
    return QOpenGLContext_SenderSignalIndex((QOpenGLContext*)self);
}

int32_t q_openglcontext_qbase_sender_signal_index(void* self) {
    return QOpenGLContext_QBaseSenderSignalIndex((QOpenGLContext*)self);
}

void q_openglcontext_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLContext_OnSenderSignalIndex((QOpenGLContext*)self, (intptr_t)callback);
}

int32_t q_openglcontext_receivers(void* self, const char* signal) {
    return QOpenGLContext_Receivers((QOpenGLContext*)self, signal);
}

int32_t q_openglcontext_qbase_receivers(void* self, const char* signal) {
    return QOpenGLContext_QBaseReceivers((QOpenGLContext*)self, signal);
}

void q_openglcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLContext_OnReceivers((QOpenGLContext*)self, (intptr_t)callback);
}

bool q_openglcontext_is_signal_connected(void* self, void* signal) {
    return QOpenGLContext_IsSignalConnected((QOpenGLContext*)self, (QMetaMethod*)signal);
}

bool q_openglcontext_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLContext_QBaseIsSignalConnected((QOpenGLContext*)self, (QMetaMethod*)signal);
}

void q_openglcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLContext_OnIsSignalConnected((QOpenGLContext*)self, (intptr_t)callback);
}

void q_openglcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglcontext_delete(void* self) {
    QOpenGLContext_Delete((QOpenGLContext*)(self));
}
