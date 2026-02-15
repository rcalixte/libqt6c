#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "liboffline.hpp"
#include "liboffline.h"

const QMetaObject* q_packagekit__offline_meta_object(void* self) {
    return PackageKit__Offline_MetaObject((PackageKit__Offline*)self);
}

void* q_packagekit__offline_metacast(void* self, const char* param1) {
    return PackageKit__Offline_Metacast((PackageKit__Offline*)self, param1);
}

int32_t q_packagekit__offline_metacall(void* self, int32_t param1, int param2, void* param3) {
    return PackageKit__Offline_Metacall((PackageKit__Offline*)self, param1, param2, param3);
}

const char* q_packagekit__offline_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_packagekit__offline_prepared_upgrade(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = PackageKit__Offline_PreparedUpgrade((PackageKit__Offline*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_packagekit__offline_prepared_upgrade\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_packagekit__offline_prepared_upgrade\n");
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

int32_t q_packagekit__offline_trigger_action(void* self) {
    return PackageKit__Offline_TriggerAction((PackageKit__Offline*)self);
}

bool q_packagekit__offline_update_prepared(void* self) {
    return PackageKit__Offline_UpdatePrepared((PackageKit__Offline*)self);
}

bool q_packagekit__offline_update_triggered(void* self) {
    return PackageKit__Offline_UpdateTriggered((PackageKit__Offline*)self);
}

bool q_packagekit__offline_upgrade_prepared(void* self) {
    return PackageKit__Offline_UpgradePrepared((PackageKit__Offline*)self);
}

bool q_packagekit__offline_upgrade_triggered(void* self) {
    return PackageKit__Offline_UpgradeTriggered((PackageKit__Offline*)self);
}

void q_packagekit__offline_get_prepared(void* self) {
    PackageKit__Offline_GetPrepared((PackageKit__Offline*)self);
}

void q_packagekit__offline_prepared_updates(void* self, const char* updates[static 1]) {
    size_t updates_len = libqt_strv_length(updates);
    libqt_string* updates_qstr = (libqt_string*)malloc(updates_len * sizeof(libqt_string));
    if (updates_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__offline_prepared_updates\n");
        abort();
    }
    for (size_t i = 0; i < updates_len; ++i) {
        updates_qstr[i] = qstring(updates[i]);
    }
    libqt_list updates_list = qlist(updates_qstr, updates_len);
    PackageKit__Offline_PreparedUpdates((PackageKit__Offline*)self, updates_list);
    free(updates_qstr);
}

void q_packagekit__offline_on_prepared_updates(void* self, void (*callback)(void*, const char***)) {
    PackageKit__Offline_Connect_PreparedUpdates((PackageKit__Offline*)self, (intptr_t)callback);
}

void q_packagekit__offline_changed(void* self) {
    PackageKit__Offline_Changed((PackageKit__Offline*)self);
}

void q_packagekit__offline_on_changed(void* self, void (*callback)(void*)) {
    PackageKit__Offline_Connect_Changed((PackageKit__Offline*)self, (intptr_t)callback);
}

const char* q_packagekit__offline_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__offline_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_packagekit__offline_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_packagekit__offline_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_packagekit__offline_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_packagekit__offline_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_packagekit__offline_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_packagekit__offline_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_packagekit__offline_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_packagekit__offline_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_packagekit__offline_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_packagekit__offline_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_packagekit__offline_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_packagekit__offline_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_packagekit__offline_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_packagekit__offline_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_packagekit__offline_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_packagekit__offline_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_packagekit__offline_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_packagekit__offline_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_packagekit__offline_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_packagekit__offline_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_packagekit__offline_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_packagekit__offline_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_packagekit__offline_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_packagekit__offline_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_packagekit__offline_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_packagekit__offline_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_packagekit__offline_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_packagekit__offline_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_packagekit__offline_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_packagekit__offline_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_packagekit__offline_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_packagekit__offline_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__offline_dynamic_property_names\n");
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

QBindingStorage* q_packagekit__offline_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_packagekit__offline_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_packagekit__offline_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_packagekit__offline_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_packagekit__offline_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_packagekit__offline_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_packagekit__offline_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_packagekit__offline_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_packagekit__offline_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_packagekit__offline_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_packagekit__offline_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_packagekit__offline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_packagekit__offline_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_packagekit__offline_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_packagekit__offline_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_packagekit__offline_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_packagekit__offline_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_packagekit__offline_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_packagekit__offline_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_packagekit__offline_delete(void* self) {
    PackageKit__Offline_Delete((PackageKit__Offline*)(self));
}
