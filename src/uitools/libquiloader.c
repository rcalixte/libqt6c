#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdir.hpp"
#include "../libqiodevice.hpp"
#include "../libqlayout.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libquiloader.hpp"
#include "libquiloader.h"

QUiLoader* q_uiloader_new() {
    return QUiLoader_new();
}

QUiLoader* q_uiloader_new2(void* parent) {
    return QUiLoader_new2((QObject*)parent);
}

const QMetaObject* q_uiloader_meta_object(void* self) {
    return QUiLoader_MetaObject((QUiLoader*)self);
}

void q_uiloader_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QUiLoader_OnMetaObject((QUiLoader*)self, (intptr_t)callback);
}

const QMetaObject* q_uiloader_qbase_meta_object(void* self) {
    return QUiLoader_QBaseMetaObject((QUiLoader*)self);
}

void* q_uiloader_metacast(void* self, const char* param1) {
    return QUiLoader_Metacast((QUiLoader*)self, param1);
}

void q_uiloader_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QUiLoader_OnMetacast((QUiLoader*)self, (intptr_t)callback);
}

void* q_uiloader_qbase_metacast(void* self, const char* param1) {
    return QUiLoader_QBaseMetacast((QUiLoader*)self, param1);
}

int32_t q_uiloader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUiLoader_Metacall((QUiLoader*)self, param1, param2, param3);
}

void q_uiloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QUiLoader_OnMetacall((QUiLoader*)self, (intptr_t)callback);
}

int32_t q_uiloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUiLoader_QBaseMetacall((QUiLoader*)self, param1, param2, param3);
}

const char* q_uiloader_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_uiloader_plugin_paths(void* self) {
    libqt_list _arr = QUiLoader_PluginPaths((QUiLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_uiloader_plugin_paths\n");
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

void q_uiloader_clear_plugin_paths(void* self) {
    QUiLoader_ClearPluginPaths((QUiLoader*)self);
}

void q_uiloader_add_plugin_path(void* self, const char* path) {
    QUiLoader_AddPluginPath((QUiLoader*)self, qstring(path));
}

QWidget* q_uiloader_load(void* self, void* device) {
    return QUiLoader_Load((QUiLoader*)self, (QIODevice*)device);
}

const char** q_uiloader_available_widgets(void* self) {
    libqt_list _arr = QUiLoader_AvailableWidgets((QUiLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_uiloader_available_widgets\n");
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

const char** q_uiloader_available_layouts(void* self) {
    libqt_list _arr = QUiLoader_AvailableLayouts((QUiLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_uiloader_available_layouts\n");
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

QWidget* q_uiloader_create_widget(void* self, const char* className, void* parent, const char* name) {
    return QUiLoader_CreateWidget((QUiLoader*)self, qstring(className), (QWidget*)parent, qstring(name));
}

void q_uiloader_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*)) {
    QUiLoader_OnCreateWidget((QUiLoader*)self, (intptr_t)callback);
}

QWidget* q_uiloader_qbase_create_widget(void* self, const char* className, void* parent, const char* name) {
    return QUiLoader_QBaseCreateWidget((QUiLoader*)self, qstring(className), (QWidget*)parent, qstring(name));
}

QLayout* q_uiloader_create_layout(void* self, const char* className, void* parent, const char* name) {
    return QUiLoader_CreateLayout((QUiLoader*)self, qstring(className), (QObject*)parent, qstring(name));
}

void q_uiloader_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*)) {
    QUiLoader_OnCreateLayout((QUiLoader*)self, (intptr_t)callback);
}

QLayout* q_uiloader_qbase_create_layout(void* self, const char* className, void* parent, const char* name) {
    return QUiLoader_QBaseCreateLayout((QUiLoader*)self, qstring(className), (QObject*)parent, qstring(name));
}

QActionGroup* q_uiloader_create_action_group(void* self, void* parent, const char* name) {
    return QUiLoader_CreateActionGroup((QUiLoader*)self, (QObject*)parent, qstring(name));
}

void q_uiloader_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*)) {
    QUiLoader_OnCreateActionGroup((QUiLoader*)self, (intptr_t)callback);
}

QActionGroup* q_uiloader_qbase_create_action_group(void* self, void* parent, const char* name) {
    return QUiLoader_QBaseCreateActionGroup((QUiLoader*)self, (QObject*)parent, qstring(name));
}

QAction* q_uiloader_create_action(void* self, void* parent, const char* name) {
    return QUiLoader_CreateAction((QUiLoader*)self, (QObject*)parent, qstring(name));
}

void q_uiloader_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*)) {
    QUiLoader_OnCreateAction((QUiLoader*)self, (intptr_t)callback);
}

QAction* q_uiloader_qbase_create_action(void* self, void* parent, const char* name) {
    return QUiLoader_QBaseCreateAction((QUiLoader*)self, (QObject*)parent, qstring(name));
}

void q_uiloader_set_working_directory(void* self, void* dir) {
    QUiLoader_SetWorkingDirectory((QUiLoader*)self, (QDir*)dir);
}

QDir* q_uiloader_working_directory(void* self) {
    return QUiLoader_WorkingDirectory((QUiLoader*)self);
}

void q_uiloader_set_language_change_enabled(void* self, bool enabled) {
    QUiLoader_SetLanguageChangeEnabled((QUiLoader*)self, enabled);
}

bool q_uiloader_is_language_change_enabled(void* self) {
    return QUiLoader_IsLanguageChangeEnabled((QUiLoader*)self);
}

void q_uiloader_set_translation_enabled(void* self, bool enabled) {
    QUiLoader_SetTranslationEnabled((QUiLoader*)self, enabled);
}

bool q_uiloader_is_translation_enabled(void* self) {
    return QUiLoader_IsTranslationEnabled((QUiLoader*)self);
}

const char* q_uiloader_error_string(void* self) {
    libqt_string _str = QUiLoader_ErrorString((QUiLoader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_uiloader_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_uiloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_uiloader_load2(void* self, void* device, void* parentWidget) {
    return QUiLoader_Load2((QUiLoader*)self, (QIODevice*)device, (QWidget*)parentWidget);
}

const char* q_uiloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_uiloader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_uiloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_uiloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_uiloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_uiloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_uiloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_uiloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_uiloader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_uiloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_uiloader_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_uiloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_uiloader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_uiloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_uiloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_uiloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_uiloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_uiloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_uiloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_uiloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_uiloader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_uiloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_uiloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_uiloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_uiloader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_uiloader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_uiloader_dynamic_property_names\n");
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

QBindingStorage* q_uiloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_uiloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_uiloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_uiloader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_uiloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_uiloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_uiloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_uiloader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_uiloader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_uiloader_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_uiloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_uiloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_uiloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_uiloader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_uiloader_event(void* self, void* event) {
    return QUiLoader_Event((QUiLoader*)self, (QEvent*)event);
}

bool q_uiloader_qbase_event(void* self, void* event) {
    return QUiLoader_QBaseEvent((QUiLoader*)self, (QEvent*)event);
}

void q_uiloader_on_event(void* self, bool (*callback)(void*, void*)) {
    QUiLoader_OnEvent((QUiLoader*)self, (intptr_t)callback);
}

bool q_uiloader_event_filter(void* self, void* watched, void* event) {
    return QUiLoader_EventFilter((QUiLoader*)self, (QObject*)watched, (QEvent*)event);
}

bool q_uiloader_qbase_event_filter(void* self, void* watched, void* event) {
    return QUiLoader_QBaseEventFilter((QUiLoader*)self, (QObject*)watched, (QEvent*)event);
}

void q_uiloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QUiLoader_OnEventFilter((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_timer_event(void* self, void* event) {
    QUiLoader_TimerEvent((QUiLoader*)self, (QTimerEvent*)event);
}

void q_uiloader_qbase_timer_event(void* self, void* event) {
    QUiLoader_QBaseTimerEvent((QUiLoader*)self, (QTimerEvent*)event);
}

void q_uiloader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QUiLoader_OnTimerEvent((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_child_event(void* self, void* event) {
    QUiLoader_ChildEvent((QUiLoader*)self, (QChildEvent*)event);
}

void q_uiloader_qbase_child_event(void* self, void* event) {
    QUiLoader_QBaseChildEvent((QUiLoader*)self, (QChildEvent*)event);
}

void q_uiloader_on_child_event(void* self, void (*callback)(void*, void*)) {
    QUiLoader_OnChildEvent((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_custom_event(void* self, void* event) {
    QUiLoader_CustomEvent((QUiLoader*)self, (QEvent*)event);
}

void q_uiloader_qbase_custom_event(void* self, void* event) {
    QUiLoader_QBaseCustomEvent((QUiLoader*)self, (QEvent*)event);
}

void q_uiloader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QUiLoader_OnCustomEvent((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_connect_notify(void* self, void* signal) {
    QUiLoader_ConnectNotify((QUiLoader*)self, (QMetaMethod*)signal);
}

void q_uiloader_qbase_connect_notify(void* self, void* signal) {
    QUiLoader_QBaseConnectNotify((QUiLoader*)self, (QMetaMethod*)signal);
}

void q_uiloader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QUiLoader_OnConnectNotify((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_disconnect_notify(void* self, void* signal) {
    QUiLoader_DisconnectNotify((QUiLoader*)self, (QMetaMethod*)signal);
}

void q_uiloader_qbase_disconnect_notify(void* self, void* signal) {
    QUiLoader_QBaseDisconnectNotify((QUiLoader*)self, (QMetaMethod*)signal);
}

void q_uiloader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QUiLoader_OnDisconnectNotify((QUiLoader*)self, (intptr_t)callback);
}

QObject* q_uiloader_sender(void* self) {
    return QUiLoader_Sender((QUiLoader*)self);
}

QObject* q_uiloader_qbase_sender(void* self) {
    return QUiLoader_QBaseSender((QUiLoader*)self);
}

void q_uiloader_on_sender(void* self, QObject* (*callback)()) {
    QUiLoader_OnSender((QUiLoader*)self, (intptr_t)callback);
}

int32_t q_uiloader_sender_signal_index(void* self) {
    return QUiLoader_SenderSignalIndex((QUiLoader*)self);
}

int32_t q_uiloader_qbase_sender_signal_index(void* self) {
    return QUiLoader_QBaseSenderSignalIndex((QUiLoader*)self);
}

void q_uiloader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QUiLoader_OnSenderSignalIndex((QUiLoader*)self, (intptr_t)callback);
}

int32_t q_uiloader_receivers(void* self, const char* signal) {
    return QUiLoader_Receivers((QUiLoader*)self, signal);
}

int32_t q_uiloader_qbase_receivers(void* self, const char* signal) {
    return QUiLoader_QBaseReceivers((QUiLoader*)self, signal);
}

void q_uiloader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QUiLoader_OnReceivers((QUiLoader*)self, (intptr_t)callback);
}

bool q_uiloader_is_signal_connected(void* self, void* signal) {
    return QUiLoader_IsSignalConnected((QUiLoader*)self, (QMetaMethod*)signal);
}

bool q_uiloader_qbase_is_signal_connected(void* self, void* signal) {
    return QUiLoader_QBaseIsSignalConnected((QUiLoader*)self, (QMetaMethod*)signal);
}

void q_uiloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QUiLoader_OnIsSignalConnected((QUiLoader*)self, (intptr_t)callback);
}

void q_uiloader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_uiloader_delete(void* self) {
    QUiLoader_Delete((QUiLoader*)(self));
}
