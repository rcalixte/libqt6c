#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libdeviceinterface.hpp"
#include "libgenericinterface.hpp"
#include "libgenericinterface.h"

const QMetaObject* k_solid__genericinterface_meta_object(void* self) {
    return Solid__GenericInterface_MetaObject((Solid__GenericInterface*)self);
}

void* k_solid__genericinterface_metacast(void* self, const char* param1) {
    return Solid__GenericInterface_Metacast((Solid__GenericInterface*)self, param1);
}

int32_t k_solid__genericinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Solid__GenericInterface_Metacall((Solid__GenericInterface*)self, param1, param2, param3);
}

const char* k_solid__genericinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__genericinterface_device_interface_type() {
    return Solid__GenericInterface_DeviceInterfaceType();
}

QVariant* k_solid__genericinterface_property(void* self, const char* key) {
    return Solid__GenericInterface_Property((Solid__GenericInterface*)self, qstring(key));
}

libqt_map /* of const char* to QVariant* */ k_solid__genericinterface_all_properties(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = Solid__GenericInterface_AllProperties((Solid__GenericInterface*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_solid__genericinterface_all_properties\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_solid__genericinterface_all_properties\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

bool k_solid__genericinterface_property_exists(void* self, const char* key) {
    return Solid__GenericInterface_PropertyExists((Solid__GenericInterface*)self, qstring(key));
}

void k_solid__genericinterface_property_changed(void* self, libqt_map /* of const char* to int */ changes) {
    // Convert libqt_map to QMap<QString,int>
    libqt_map changes_ret;
    changes_ret.len = changes.len;
    changes_ret.keys = (libqt_string*)malloc(changes_ret.len * sizeof(libqt_string));
    if (changes_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_solid__genericinterface_property_changed\n");
        abort();
    }
    changes_ret.values = (int*)malloc(changes_ret.len * sizeof(int));
    if (changes_ret.values == NULL) {
        free(changes_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_solid__genericinterface_property_changed\n");
        abort();
    }
    const char** changes_karr = (const char**)changes.keys;
    libqt_string* changes_kdest = (libqt_string*)changes_ret.keys;
    int* changes_varr = (int*)changes.values;
    int* changes_vdest = (int*)changes_ret.values;
    for (size_t i = 0; i < changes_ret.len; ++i) {
        changes_kdest[i] = qstring(changes_karr[i]);
        changes_vdest[i] = changes_varr[i];
    }
    Solid__GenericInterface_PropertyChanged((Solid__GenericInterface*)self, changes_ret);
    free(changes_ret.keys);
    free(changes_ret.values);
}

void k_solid__genericinterface_on_property_changed(void* self, void (*callback)(void*, libqt_map /* of const char* to int */)) {
    Solid__GenericInterface_Connect_PropertyChanged((Solid__GenericInterface*)self, (intptr_t)callback);
}

void k_solid__genericinterface_condition_raised(void* self, const char* condition, const char* reason) {
    Solid__GenericInterface_ConditionRaised((Solid__GenericInterface*)self, qstring(condition), qstring(reason));
}

void k_solid__genericinterface_on_condition_raised(void* self, void (*callback)(void*, const char*, const char*)) {
    Solid__GenericInterface_Connect_ConditionRaised((Solid__GenericInterface*)self, (intptr_t)callback);
}

const char* k_solid__genericinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__genericinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__genericinterface_is_valid(void* self) {
    return Solid__DeviceInterface_IsValid((Solid__DeviceInterface*)self);
}

const char* k_solid__genericinterface_type_to_string(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeToString(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_solid__genericinterface_string_to_type(const char* type) {
    return Solid__DeviceInterface_StringToType(qstring(type));
}

const char* k_solid__genericinterface_type_description(int32_t type) {
    libqt_string _str = Solid__DeviceInterface_TypeDescription(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__genericinterface_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_solid__genericinterface_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_solid__genericinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_solid__genericinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_solid__genericinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_solid__genericinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_solid__genericinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_solid__genericinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_solid__genericinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_solid__genericinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_solid__genericinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_solid__genericinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_solid__genericinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_solid__genericinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_solid__genericinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_solid__genericinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_solid__genericinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_solid__genericinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_solid__genericinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_solid__genericinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_solid__genericinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_solid__genericinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_solid__genericinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_solid__genericinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_solid__genericinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

const char** k_solid__genericinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_solid__genericinterface_dynamic_property_names\n");
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

QBindingStorage* k_solid__genericinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_solid__genericinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_solid__genericinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_solid__genericinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_solid__genericinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_solid__genericinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_solid__genericinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_solid__genericinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_solid__genericinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_solid__genericinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_solid__genericinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_solid__genericinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_solid__genericinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_solid__genericinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_solid__genericinterface_delete(void* self) {
    Solid__GenericInterface_Delete((Solid__GenericInterface*)(self));
}
