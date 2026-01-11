#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libdeviceinterface.hpp"
#include "libstorageaccess.hpp"
#include "libstorageaccess.h"

const QMetaObject* k_solid__storageaccess_meta_object(void* self) {
    return Solid__StorageAccess_MetaObject((Solid__StorageAccess*)self);
}

void* k_solid__storageaccess_metacast(void* self, const char* param1) {
    return Solid__StorageAccess_Metacast((Solid__StorageAccess*)self, param1);
}

int32_t k_solid__storageaccess_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Solid__StorageAccess_Metacall((Solid__StorageAccess*)self, param1, param2, param3);
}

const char* k_solid__storageaccess_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__storageaccess_device_interface_type() {
    return Solid__StorageAccess_DeviceInterfaceType();
}

bool k_solid__storageaccess_is_accessible(void* self) {
    return Solid__StorageAccess_IsAccessible((Solid__StorageAccess*)self);
}

const char* k_solid__storageaccess_file_path(void* self) {
    libqt_string _str = Solid__StorageAccess_FilePath((Solid__StorageAccess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__storageaccess_is_ignored(void* self) {
    return Solid__StorageAccess_IsIgnored((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_is_encrypted(void* self) {
    return Solid__StorageAccess_IsEncrypted((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_setup(void* self) {
    return Solid__StorageAccess_Setup((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_teardown(void* self) {
    return Solid__StorageAccess_Teardown((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_can_check(void* self) {
    return Solid__StorageAccess_CanCheck((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_check(void* self) {
    return Solid__StorageAccess_Check((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_can_repair(void* self) {
    return Solid__StorageAccess_CanRepair((Solid__StorageAccess*)self);
}

bool k_solid__storageaccess_repair(void* self) {
    return Solid__StorageAccess_Repair((Solid__StorageAccess*)self);
}

void k_solid__storageaccess_accessibility_changed(void* self, bool accessible, const char* udi) {
    Solid__StorageAccess_AccessibilityChanged((Solid__StorageAccess*)self, accessible, qstring(udi));
}

void k_solid__storageaccess_on_accessibility_changed(void* self, void (*callback)(void*, bool, const char*)) {
    Solid__StorageAccess_Connect_AccessibilityChanged((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_setup_done(void* self, int32_t error, void* errorData, const char* udi) {
    Solid__StorageAccess_SetupDone((Solid__StorageAccess*)self, error, (QVariant*)errorData, qstring(udi));
}

void k_solid__storageaccess_on_setup_done(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    Solid__StorageAccess_Connect_SetupDone((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_teardown_done(void* self, int32_t error, void* errorData, const char* udi) {
    Solid__StorageAccess_TeardownDone((Solid__StorageAccess*)self, error, (QVariant*)errorData, qstring(udi));
}

void k_solid__storageaccess_on_teardown_done(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    Solid__StorageAccess_Connect_TeardownDone((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_setup_requested(void* self, const char* udi) {
    Solid__StorageAccess_SetupRequested((Solid__StorageAccess*)self, qstring(udi));
}

void k_solid__storageaccess_on_setup_requested(void* self, void (*callback)(void*, const char*)) {
    Solid__StorageAccess_Connect_SetupRequested((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_teardown_requested(void* self, const char* udi) {
    Solid__StorageAccess_TeardownRequested((Solid__StorageAccess*)self, qstring(udi));
}

void k_solid__storageaccess_on_teardown_requested(void* self, void (*callback)(void*, const char*)) {
    Solid__StorageAccess_Connect_TeardownRequested((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_check_requested(void* self, const char* udi) {
    Solid__StorageAccess_CheckRequested((Solid__StorageAccess*)self, qstring(udi));
}

void k_solid__storageaccess_on_check_requested(void* self, void (*callback)(void*, const char*)) {
    Solid__StorageAccess_Connect_CheckRequested((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_check_done(void* self, int32_t error, void* errorData, const char* udi) {
    Solid__StorageAccess_CheckDone((Solid__StorageAccess*)self, error, (QVariant*)errorData, qstring(udi));
}

void k_solid__storageaccess_on_check_done(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    Solid__StorageAccess_Connect_CheckDone((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_repair_requested(void* self, const char* udi) {
    Solid__StorageAccess_RepairRequested((Solid__StorageAccess*)self, qstring(udi));
}

void k_solid__storageaccess_on_repair_requested(void* self, void (*callback)(void*, const char*)) {
    Solid__StorageAccess_Connect_RepairRequested((Solid__StorageAccess*)self, (intptr_t)callback);
}

void k_solid__storageaccess_repair_done(void* self, int32_t error, void* errorData, const char* udi) {
    Solid__StorageAccess_RepairDone((Solid__StorageAccess*)self, error, (QVariant*)errorData, qstring(udi));
}

void k_solid__storageaccess_on_repair_done(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    Solid__StorageAccess_Connect_RepairDone((Solid__StorageAccess*)self, (intptr_t)callback);
}

const char* k_solid__storageaccess_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__storageaccess_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__storageaccess_is_valid(void* self) {
    return Solid__DeviceInterface_IsValid((Solid__DeviceInterface*)self);
}

const char* k_solid__storageaccess_type_to_string(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeToString(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__storageaccess_string_to_type(const char* type) {
    return Solid__DeviceInterface_StringToType(qstring(type));
}

const char* k_solid__storageaccess_type_description(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeDescription(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__storageaccess_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_solid__storageaccess_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_solid__storageaccess_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_solid__storageaccess_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_solid__storageaccess_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_solid__storageaccess_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_solid__storageaccess_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_solid__storageaccess_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_solid__storageaccess_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_solid__storageaccess_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_solid__storageaccess_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_solid__storageaccess_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_solid__storageaccess_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_solid__storageaccess_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_solid__storageaccess_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_solid__storageaccess_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_solid__storageaccess_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_solid__storageaccess_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_solid__storageaccess_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_solid__storageaccess_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_solid__storageaccess_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_solid__storageaccess_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_solid__storageaccess_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_solid__storageaccess_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_solid__storageaccess_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_solid__storageaccess_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_solid__storageaccess_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_solid__storageaccess_dynamic_property_names");
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

QBindingStorage* k_solid__storageaccess_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_solid__storageaccess_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_solid__storageaccess_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_solid__storageaccess_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_solid__storageaccess_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_solid__storageaccess_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_solid__storageaccess_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_solid__storageaccess_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_solid__storageaccess_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_solid__storageaccess_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_solid__storageaccess_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_solid__storageaccess_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_solid__storageaccess_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_solid__storageaccess_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_solid__storageaccess_delete(void* self) {
    Solid__StorageAccess_Delete((Solid__StorageAccess*)(self));
}
