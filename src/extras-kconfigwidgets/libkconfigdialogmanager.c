#include "../extras-kconfig/libkcoreconfigskeleton.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkconfigdialogmanager.hpp"
#include "libkconfigdialogmanager.h"

KConfigDialogManager* k_configdialogmanager_new(void* parent, void* conf) {
    return KConfigDialogManager_new((QWidget*)parent, (KCoreConfigSkeleton*)conf);
}

const QMetaObject* k_configdialogmanager_meta_object(void* self) {
    return KConfigDialogManager_MetaObject((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KConfigDialogManager_OnMetaObject((KConfigDialogManager*)self, (intptr_t)callback);
}

const QMetaObject* k_configdialogmanager_qbase_meta_object(void* self) {
    return KConfigDialogManager_QBaseMetaObject((KConfigDialogManager*)self);
}

void* k_configdialogmanager_metacast(void* self, const char* param1) {
    return KConfigDialogManager_Metacast((KConfigDialogManager*)self, param1);
}

void k_configdialogmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KConfigDialogManager_OnMetacast((KConfigDialogManager*)self, (intptr_t)callback);
}

void* k_configdialogmanager_qbase_metacast(void* self, const char* param1) {
    return KConfigDialogManager_QBaseMetacast((KConfigDialogManager*)self, param1);
}

int32_t k_configdialogmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigDialogManager_Metacall((KConfigDialogManager*)self, param1, param2, param3);
}

void k_configdialogmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigDialogManager_OnMetacall((KConfigDialogManager*)self, (intptr_t)callback);
}

int32_t k_configdialogmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigDialogManager_QBaseMetacall((KConfigDialogManager*)self, param1, param2, param3);
}

const char* k_configdialogmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_settings_changed(void* self) {
    KConfigDialogManager_SettingsChanged((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_settings_changed(void* self, void (*callback)(void*)) {
    KConfigDialogManager_Connect_SettingsChanged((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_widget_modified(void* self) {
    KConfigDialogManager_WidgetModified((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_widget_modified(void* self, void (*callback)(void*)) {
    KConfigDialogManager_Connect_WidgetModified((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_add_widget(void* self, void* widget) {
    KConfigDialogManager_AddWidget((KConfigDialogManager*)self, (QWidget*)widget);
}

bool k_configdialogmanager_has_changed(void* self) {
    return KConfigDialogManager_HasChanged((KConfigDialogManager*)self);
}

bool k_configdialogmanager_is_default(void* self) {
    return KConfigDialogManager_IsDefault((KConfigDialogManager*)self);
}

libqt_map* /* of const char* to char* */ k_configdialogmanager_property_map() {
    // Convert QHash<QString,QByteArray> to libqt_map
    libqt_map* _out = KConfigDialogManager_PropertyMap();
    libqt_map* _ret = (libqt_map*)malloc(sizeof(libqt_map));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for return map in k_configdialogmanager_property_map\n");
        abort();
    }
    _ret->len = _out->len;
    libqt_string* _out_keys = (libqt_string*)_out->keys;
    char** _ret_keys = (char**)malloc(_ret->len * sizeof(char*));
    if (_ret_keys == NULL) {
        free(_ret);
        fprintf(stderr, "Failed to allocate memory for map string keys in k_configdialogmanager_property_map\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out->values;
    char** _ret_values = (char**)malloc(_ret->len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_configdialogmanager_property_map\n");
        free(_out->keys);
        free(_ret);
        abort();
    }
    for (size_t i = 0; i < _ret->len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            free(_ret);
            fprintf(stderr, "Failed to allocate memory for map keys in k_configdialogmanager_property_map\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            free(_ret);
            fprintf(stderr, "Failed to allocate memory for map string values in k_configdialogmanager_property_map\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret->keys = (void*)_ret_keys;
    _ret->values = (void*)_ret_values;
    for (size_t i = 0; i < _out->len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out->keys);
    free(_out->values);
    return _ret;
}

void k_configdialogmanager_update_settings(void* self) {
    KConfigDialogManager_UpdateSettings((KConfigDialogManager*)self);
}

void k_configdialogmanager_update_widgets(void* self) {
    KConfigDialogManager_UpdateWidgets((KConfigDialogManager*)self);
}

void k_configdialogmanager_update_widgets_default(void* self) {
    KConfigDialogManager_UpdateWidgetsDefault((KConfigDialogManager*)self);
}

void k_configdialogmanager_set_defaults_indicators_visible(void* self, bool enabled) {
    KConfigDialogManager_SetDefaultsIndicatorsVisible((KConfigDialogManager*)self, enabled);
}

void k_configdialogmanager_init(void* self, bool trackChanges) {
    KConfigDialogManager_Init((KConfigDialogManager*)self, trackChanges);
}

void k_configdialogmanager_on_init(void* self, void (*callback)(void*, bool)) {
    KConfigDialogManager_OnInit((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_qbase_init(void* self, bool trackChanges) {
    KConfigDialogManager_QBaseInit((KConfigDialogManager*)self, trackChanges);
}

bool k_configdialogmanager_parse_children(void* self, void* widget, bool trackChanges) {
    return KConfigDialogManager_ParseChildren((KConfigDialogManager*)self, (QWidget*)widget, trackChanges);
}

void k_configdialogmanager_on_parse_children(void* self, bool (*callback)(void*, void*, bool)) {
    KConfigDialogManager_OnParseChildren((KConfigDialogManager*)self, (intptr_t)callback);
}

bool k_configdialogmanager_qbase_parse_children(void* self, void* widget, bool trackChanges) {
    return KConfigDialogManager_QBaseParseChildren((KConfigDialogManager*)self, (QWidget*)widget, trackChanges);
}

char* k_configdialogmanager_get_user_property(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_GetUserProperty((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_on_get_user_property(void* self, libqt_string (*callback)(void*, void*)) {
    KConfigDialogManager_OnGetUserProperty((KConfigDialogManager*)self, (intptr_t)callback);
}

char* k_configdialogmanager_qbase_get_user_property(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_QBaseGetUserProperty((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_configdialogmanager_get_custom_property(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_GetCustomProperty((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_on_get_custom_property(void* self, libqt_string (*callback)(void*, void*)) {
    KConfigDialogManager_OnGetCustomProperty((KConfigDialogManager*)self, (intptr_t)callback);
}

char* k_configdialogmanager_qbase_get_custom_property(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_QBaseGetCustomProperty((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_configdialogmanager_get_user_property_changed_signal(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_GetUserPropertyChangedSignal((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_on_get_user_property_changed_signal(void* self, libqt_string (*callback)(void*, void*)) {
    KConfigDialogManager_OnGetUserPropertyChangedSignal((KConfigDialogManager*)self, (intptr_t)callback);
}

char* k_configdialogmanager_qbase_get_user_property_changed_signal(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_QBaseGetUserPropertyChangedSignal((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_configdialogmanager_get_custom_property_changed_signal(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_GetCustomPropertyChangedSignal((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_on_get_custom_property_changed_signal(void* self, libqt_string (*callback)(void*, void*)) {
    KConfigDialogManager_OnGetCustomPropertyChangedSignal((KConfigDialogManager*)self, (intptr_t)callback);
}

char* k_configdialogmanager_qbase_get_custom_property_changed_signal(void* self, void* widget) {
    libqt_string _str = KConfigDialogManager_QBaseGetCustomPropertyChangedSignal((KConfigDialogManager*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_set_property(void* self, void* w, void* v) {
    KConfigDialogManager_SetProperty((KConfigDialogManager*)self, (QWidget*)w, (QVariant*)v);
}

void k_configdialogmanager_on_set_property(void* self, void (*callback)(void*, void*, void*)) {
    KConfigDialogManager_OnSetProperty((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_qbase_set_property(void* self, void* w, void* v) {
    KConfigDialogManager_QBaseSetProperty((KConfigDialogManager*)self, (QWidget*)w, (QVariant*)v);
}

QVariant* k_configdialogmanager_property(void* self, void* w) {
    return KConfigDialogManager_Property((KConfigDialogManager*)self, (QWidget*)w);
}

void k_configdialogmanager_on_property(void* self, QVariant* (*callback)(void*, void*)) {
    KConfigDialogManager_OnProperty((KConfigDialogManager*)self, (intptr_t)callback);
}

QVariant* k_configdialogmanager_qbase_property(void* self, void* w) {
    return KConfigDialogManager_QBaseProperty((KConfigDialogManager*)self, (QWidget*)w);
}

void k_configdialogmanager_setup_widget(void* self, void* widget, void* item) {
    KConfigDialogManager_SetupWidget((KConfigDialogManager*)self, (QWidget*)widget, (KConfigSkeletonItem*)item);
}

void k_configdialogmanager_on_setup_widget(void* self, void (*callback)(void*, void*, void*)) {
    KConfigDialogManager_OnSetupWidget((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_qbase_setup_widget(void* self, void* widget, void* item) {
    KConfigDialogManager_QBaseSetupWidget((KConfigDialogManager*)self, (QWidget*)widget, (KConfigSkeletonItem*)item);
}

void k_configdialogmanager_init_maps(void* self) {
    KConfigDialogManager_InitMaps((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_init_maps(void* self, void (*callback)()) {
    KConfigDialogManager_OnInitMaps((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_qbase_init_maps(void* self) {
    KConfigDialogManager_QBaseInitMaps((KConfigDialogManager*)self);
}

const char* k_configdialogmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configdialogmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configdialogmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configdialogmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configdialogmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configdialogmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configdialogmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configdialogmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configdialogmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configdialogmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configdialogmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configdialogmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_configdialogmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_configdialogmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configdialogmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configdialogmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configdialogmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configdialogmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configdialogmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configdialogmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_configdialogmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configdialogmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configdialogmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_configdialogmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configdialogmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_configdialogmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_configdialogmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_configdialogmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configdialogmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

const char** k_configdialogmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configdialogmanager_dynamic_property_names\n");
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

QBindingStorage* k_configdialogmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configdialogmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configdialogmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configdialogmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configdialogmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configdialogmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configdialogmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_configdialogmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_configdialogmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_configdialogmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_configdialogmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configdialogmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_configdialogmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_configdialogmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_configdialogmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_configdialogmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_configdialogmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configdialogmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_configdialogmanager_event(void* self, void* event) {
    return KConfigDialogManager_Event((KConfigDialogManager*)self, (QEvent*)event);
}

bool k_configdialogmanager_qbase_event(void* self, void* event) {
    return KConfigDialogManager_QBaseEvent((KConfigDialogManager*)self, (QEvent*)event);
}

void k_configdialogmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigDialogManager_OnEvent((KConfigDialogManager*)self, (intptr_t)callback);
}

bool k_configdialogmanager_event_filter(void* self, void* watched, void* event) {
    return KConfigDialogManager_EventFilter((KConfigDialogManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configdialogmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return KConfigDialogManager_QBaseEventFilter((KConfigDialogManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_configdialogmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigDialogManager_OnEventFilter((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_timer_event(void* self, void* event) {
    KConfigDialogManager_TimerEvent((KConfigDialogManager*)self, (QTimerEvent*)event);
}

void k_configdialogmanager_qbase_timer_event(void* self, void* event) {
    KConfigDialogManager_QBaseTimerEvent((KConfigDialogManager*)self, (QTimerEvent*)event);
}

void k_configdialogmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialogManager_OnTimerEvent((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_child_event(void* self, void* event) {
    KConfigDialogManager_ChildEvent((KConfigDialogManager*)self, (QChildEvent*)event);
}

void k_configdialogmanager_qbase_child_event(void* self, void* event) {
    KConfigDialogManager_QBaseChildEvent((KConfigDialogManager*)self, (QChildEvent*)event);
}

void k_configdialogmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialogManager_OnChildEvent((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_custom_event(void* self, void* event) {
    KConfigDialogManager_CustomEvent((KConfigDialogManager*)self, (QEvent*)event);
}

void k_configdialogmanager_qbase_custom_event(void* self, void* event) {
    KConfigDialogManager_QBaseCustomEvent((KConfigDialogManager*)self, (QEvent*)event);
}

void k_configdialogmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigDialogManager_OnCustomEvent((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_connect_notify(void* self, void* signal) {
    KConfigDialogManager_ConnectNotify((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

void k_configdialogmanager_qbase_connect_notify(void* self, void* signal) {
    KConfigDialogManager_QBaseConnectNotify((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

void k_configdialogmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigDialogManager_OnConnectNotify((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_disconnect_notify(void* self, void* signal) {
    KConfigDialogManager_DisconnectNotify((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

void k_configdialogmanager_qbase_disconnect_notify(void* self, void* signal) {
    KConfigDialogManager_QBaseDisconnectNotify((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

void k_configdialogmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigDialogManager_OnDisconnectNotify((KConfigDialogManager*)self, (intptr_t)callback);
}

QObject* k_configdialogmanager_sender(void* self) {
    return KConfigDialogManager_Sender((KConfigDialogManager*)self);
}

QObject* k_configdialogmanager_qbase_sender(void* self) {
    return KConfigDialogManager_QBaseSender((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_sender(void* self, QObject* (*callback)()) {
    KConfigDialogManager_OnSender((KConfigDialogManager*)self, (intptr_t)callback);
}

int32_t k_configdialogmanager_sender_signal_index(void* self) {
    return KConfigDialogManager_SenderSignalIndex((KConfigDialogManager*)self);
}

int32_t k_configdialogmanager_qbase_sender_signal_index(void* self) {
    return KConfigDialogManager_QBaseSenderSignalIndex((KConfigDialogManager*)self);
}

void k_configdialogmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigDialogManager_OnSenderSignalIndex((KConfigDialogManager*)self, (intptr_t)callback);
}

int32_t k_configdialogmanager_receivers(void* self, const char* signal) {
    return KConfigDialogManager_Receivers((KConfigDialogManager*)self, signal);
}

int32_t k_configdialogmanager_qbase_receivers(void* self, const char* signal) {
    return KConfigDialogManager_QBaseReceivers((KConfigDialogManager*)self, signal);
}

void k_configdialogmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigDialogManager_OnReceivers((KConfigDialogManager*)self, (intptr_t)callback);
}

bool k_configdialogmanager_is_signal_connected(void* self, void* signal) {
    return KConfigDialogManager_IsSignalConnected((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

bool k_configdialogmanager_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigDialogManager_QBaseIsSignalConnected((KConfigDialogManager*)self, (QMetaMethod*)signal);
}

void k_configdialogmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigDialogManager_OnIsSignalConnected((KConfigDialogManager*)self, (intptr_t)callback);
}

void k_configdialogmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configdialogmanager_delete(void* self) {
    KConfigDialogManager_Delete((KConfigDialogManager*)(self));
}
