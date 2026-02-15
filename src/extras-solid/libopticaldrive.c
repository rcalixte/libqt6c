#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libdeviceinterface.hpp"
#include "libstoragedrive.hpp"
#include "libopticaldrive.hpp"
#include "libopticaldrive.h"

const QMetaObject* k_solid__opticaldrive_meta_object(void* self) {
    return Solid__OpticalDrive_MetaObject((Solid__OpticalDrive*)self);
}

void* k_solid__opticaldrive_metacast(void* self, const char* param1) {
    return Solid__OpticalDrive_Metacast((Solid__OpticalDrive*)self, param1);
}

int32_t k_solid__opticaldrive_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Solid__OpticalDrive_Metacall((Solid__OpticalDrive*)self, param1, param2, param3);
}

const char* k_solid__opticaldrive_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__opticaldrive_device_interface_type() {
    return Solid__OpticalDrive_DeviceInterfaceType();
}

int32_t k_solid__opticaldrive_supported_media(void* self) {
    return Solid__OpticalDrive_SupportedMedia((Solid__OpticalDrive*)self);
}

int32_t k_solid__opticaldrive_read_speed(void* self) {
    return Solid__OpticalDrive_ReadSpeed((Solid__OpticalDrive*)self);
}

int32_t k_solid__opticaldrive_write_speed(void* self) {
    return Solid__OpticalDrive_WriteSpeed((Solid__OpticalDrive*)self);
}

libqt_list /* of int */ k_solid__opticaldrive_write_speeds(void* self) {
    libqt_list _arr = Solid__OpticalDrive_WriteSpeeds((Solid__OpticalDrive*)self);
    return _arr;
}

bool k_solid__opticaldrive_eject(void* self) {
    return Solid__OpticalDrive_Eject((Solid__OpticalDrive*)self);
}

void k_solid__opticaldrive_eject_pressed(void* self, const char* udi) {
    Solid__OpticalDrive_EjectPressed((Solid__OpticalDrive*)self, qstring(udi));
}

void k_solid__opticaldrive_on_eject_pressed(void* self, void (*callback)(void*, const char*)) {
    Solid__OpticalDrive_Connect_EjectPressed((Solid__OpticalDrive*)self, (intptr_t)callback);
}

void k_solid__opticaldrive_eject_done(void* self, int32_t error, void* errorData, const char* udi) {
    Solid__OpticalDrive_EjectDone((Solid__OpticalDrive*)self, error, (QVariant*)errorData, qstring(udi));
}

void k_solid__opticaldrive_on_eject_done(void* self, void (*callback)(void*, int32_t, void*, const char*)) {
    Solid__OpticalDrive_Connect_EjectDone((Solid__OpticalDrive*)self, (intptr_t)callback);
}

void k_solid__opticaldrive_eject_requested(void* self, const char* udi) {
    Solid__OpticalDrive_EjectRequested((Solid__OpticalDrive*)self, qstring(udi));
}

void k_solid__opticaldrive_on_eject_requested(void* self, void (*callback)(void*, const char*)) {
    Solid__OpticalDrive_Connect_EjectRequested((Solid__OpticalDrive*)self, (intptr_t)callback);
}

const char* k_solid__opticaldrive_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__opticaldrive_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__opticaldrive_bus(void* self) {
    return Solid__StorageDrive_Bus((Solid__StorageDrive*)self);
}

int32_t k_solid__opticaldrive_drive_type(void* self) {
    return Solid__StorageDrive_DriveType((Solid__StorageDrive*)self);
}

bool k_solid__opticaldrive_is_removable(void* self) {
    return Solid__StorageDrive_IsRemovable((Solid__StorageDrive*)self);
}

bool k_solid__opticaldrive_is_hotpluggable(void* self) {
    return Solid__StorageDrive_IsHotpluggable((Solid__StorageDrive*)self);
}

uint64_t k_solid__opticaldrive_size(void* self) {
    return Solid__StorageDrive_Size((Solid__StorageDrive*)self);
}

bool k_solid__opticaldrive_is_in_use(void* self) {
    return Solid__StorageDrive_IsInUse((Solid__StorageDrive*)self);
}

QDateTime* k_solid__opticaldrive_time_detected(void* self) {
    return Solid__StorageDrive_TimeDetected((Solid__StorageDrive*)self);
}

QDateTime* k_solid__opticaldrive_time_media_detected(void* self) {
    return Solid__StorageDrive_TimeMediaDetected((Solid__StorageDrive*)self);
}

bool k_solid__opticaldrive_is_valid(void* self) {
    return Solid__DeviceInterface_IsValid((Solid__DeviceInterface*)self);
}

const char* k_solid__opticaldrive_type_to_string(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeToString(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__opticaldrive_string_to_type(const char* type) {
    return Solid__DeviceInterface_StringToType(qstring(type));
}

const char* k_solid__opticaldrive_type_description(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeDescription(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__opticaldrive_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_solid__opticaldrive_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_solid__opticaldrive_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_solid__opticaldrive_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_solid__opticaldrive_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_solid__opticaldrive_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_solid__opticaldrive_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_solid__opticaldrive_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_solid__opticaldrive_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_solid__opticaldrive_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_solid__opticaldrive_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_solid__opticaldrive_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_solid__opticaldrive_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_solid__opticaldrive_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_solid__opticaldrive_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_solid__opticaldrive_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_solid__opticaldrive_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_solid__opticaldrive_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_solid__opticaldrive_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_solid__opticaldrive_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_solid__opticaldrive_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_solid__opticaldrive_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_solid__opticaldrive_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_solid__opticaldrive_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_solid__opticaldrive_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_solid__opticaldrive_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_solid__opticaldrive_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_solid__opticaldrive_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_solid__opticaldrive_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_solid__opticaldrive_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_solid__opticaldrive_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_solid__opticaldrive_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_solid__opticaldrive_dynamic_property_names\n");
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

QBindingStorage* k_solid__opticaldrive_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_solid__opticaldrive_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_solid__opticaldrive_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_solid__opticaldrive_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_solid__opticaldrive_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_solid__opticaldrive_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_solid__opticaldrive_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_solid__opticaldrive_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_solid__opticaldrive_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_solid__opticaldrive_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_solid__opticaldrive_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_solid__opticaldrive_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_solid__opticaldrive_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_solid__opticaldrive_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_solid__opticaldrive_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_solid__opticaldrive_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_solid__opticaldrive_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_solid__opticaldrive_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_solid__opticaldrive_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_solid__opticaldrive_delete(void* self) {
    Solid__OpticalDrive_Delete((Solid__OpticalDrive*)(self));
}
