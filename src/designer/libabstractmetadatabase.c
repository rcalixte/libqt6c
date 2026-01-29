#include "../libqcoreevent.hpp"
#include "libabstractformeditor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractmetadatabase.hpp"
#include "libabstractmetadatabase.h"

QDesignerMetaDataBaseItemInterface* q_designermetadatabaseiteminterface_new() {
    return QDesignerMetaDataBaseItemInterface_new();
}

const char* q_designermetadatabaseiteminterface_name(void* self) {
    libqt_string _str = QDesignerMetaDataBaseItemInterface_Name((QDesignerMetaDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermetadatabaseiteminterface_on_name(void* self, const char* (*callback)()) {
    QDesignerMetaDataBaseItemInterface_OnName((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

const char* q_designermetadatabaseiteminterface_qbase_name(void* self) {
    libqt_string _str = QDesignerMetaDataBaseItemInterface_QBaseName((QDesignerMetaDataBaseItemInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermetadatabaseiteminterface_set_name(void* self, const char* name) {
    QDesignerMetaDataBaseItemInterface_SetName((QDesignerMetaDataBaseItemInterface*)self, qstring(name));
}

void q_designermetadatabaseiteminterface_on_set_name(void* self, void (*callback)(void*, const char*)) {
    QDesignerMetaDataBaseItemInterface_OnSetName((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseiteminterface_qbase_set_name(void* self, const char* name) {
    QDesignerMetaDataBaseItemInterface_QBaseSetName((QDesignerMetaDataBaseItemInterface*)self, qstring(name));
}

libqt_list /* of QWidget* */ q_designermetadatabaseiteminterface_tab_order(void* self) {
    libqt_list _arr = QDesignerMetaDataBaseItemInterface_TabOrder((QDesignerMetaDataBaseItemInterface*)self);
    return _arr;
}

void q_designermetadatabaseiteminterface_on_tab_order(void* self, QWidget** (*callback)()) {
    QDesignerMetaDataBaseItemInterface_OnTabOrder((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

libqt_list /* of QWidget* */ q_designermetadatabaseiteminterface_qbase_tab_order(void* self) {
    libqt_list _arr = QDesignerMetaDataBaseItemInterface_QBaseTabOrder((QDesignerMetaDataBaseItemInterface*)self);
    return _arr;
}

void q_designermetadatabaseiteminterface_set_tab_order(void* self, libqt_list /* of QWidget* */ tabOrder) {
    QDesignerMetaDataBaseItemInterface_SetTabOrder((QDesignerMetaDataBaseItemInterface*)self, tabOrder);
}

void q_designermetadatabaseiteminterface_on_set_tab_order(void* self, void (*callback)(void*, QWidget**)) {
    QDesignerMetaDataBaseItemInterface_OnSetTabOrder((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseiteminterface_qbase_set_tab_order(void* self, libqt_list /* of QWidget* */ tabOrder) {
    QDesignerMetaDataBaseItemInterface_QBaseSetTabOrder((QDesignerMetaDataBaseItemInterface*)self, tabOrder);
}

bool q_designermetadatabaseiteminterface_enabled(void* self) {
    return QDesignerMetaDataBaseItemInterface_Enabled((QDesignerMetaDataBaseItemInterface*)self);
}

void q_designermetadatabaseiteminterface_on_enabled(void* self, bool (*callback)()) {
    QDesignerMetaDataBaseItemInterface_OnEnabled((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

bool q_designermetadatabaseiteminterface_qbase_enabled(void* self) {
    return QDesignerMetaDataBaseItemInterface_QBaseEnabled((QDesignerMetaDataBaseItemInterface*)self);
}

void q_designermetadatabaseiteminterface_set_enabled(void* self, bool b) {
    QDesignerMetaDataBaseItemInterface_SetEnabled((QDesignerMetaDataBaseItemInterface*)self, b);
}

void q_designermetadatabaseiteminterface_on_set_enabled(void* self, void (*callback)(void*, bool)) {
    QDesignerMetaDataBaseItemInterface_OnSetEnabled((QDesignerMetaDataBaseItemInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseiteminterface_qbase_set_enabled(void* self, bool b) {
    QDesignerMetaDataBaseItemInterface_QBaseSetEnabled((QDesignerMetaDataBaseItemInterface*)self, b);
}

void q_designermetadatabaseiteminterface_delete(void* self) {
    QDesignerMetaDataBaseItemInterface_Delete((QDesignerMetaDataBaseItemInterface*)(self));
}

QDesignerMetaDataBaseInterface* q_designermetadatabaseinterface_new() {
    return QDesignerMetaDataBaseInterface_new();
}

QDesignerMetaDataBaseInterface* q_designermetadatabaseinterface_new2(void* parent) {
    return QDesignerMetaDataBaseInterface_new2((QObject*)parent);
}

const QMetaObject* q_designermetadatabaseinterface_meta_object(void* self) {
    return QDesignerMetaDataBaseInterface_MetaObject((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDesignerMetaDataBaseInterface_OnMetaObject((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designermetadatabaseinterface_qbase_meta_object(void* self) {
    return QDesignerMetaDataBaseInterface_QBaseMetaObject((QDesignerMetaDataBaseInterface*)self);
}

void* q_designermetadatabaseinterface_metacast(void* self, const char* param1) {
    return QDesignerMetaDataBaseInterface_Metacast((QDesignerMetaDataBaseInterface*)self, param1);
}

void q_designermetadatabaseinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerMetaDataBaseInterface_OnMetacast((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void* q_designermetadatabaseinterface_qbase_metacast(void* self, const char* param1) {
    return QDesignerMetaDataBaseInterface_QBaseMetacast((QDesignerMetaDataBaseInterface*)self, param1);
}

int32_t q_designermetadatabaseinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerMetaDataBaseInterface_Metacall((QDesignerMetaDataBaseInterface*)self, param1, param2, param3);
}

void q_designermetadatabaseinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerMetaDataBaseInterface_OnMetacall((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designermetadatabaseinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerMetaDataBaseInterface_QBaseMetacall((QDesignerMetaDataBaseInterface*)self, param1, param2, param3);
}

const char* q_designermetadatabaseinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDesignerMetaDataBaseItemInterface* q_designermetadatabaseinterface_item(void* self, void* object) {
    return QDesignerMetaDataBaseInterface_Item((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

void q_designermetadatabaseinterface_on_item(void* self, QDesignerMetaDataBaseItemInterface* (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnItem((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

QDesignerMetaDataBaseItemInterface* q_designermetadatabaseinterface_qbase_item(void* self, void* object) {
    return QDesignerMetaDataBaseInterface_QBaseItem((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

void q_designermetadatabaseinterface_add(void* self, void* object) {
    QDesignerMetaDataBaseInterface_Add((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

void q_designermetadatabaseinterface_on_add(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnAdd((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_qbase_add(void* self, void* object) {
    QDesignerMetaDataBaseInterface_QBaseAdd((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

void q_designermetadatabaseinterface_remove(void* self, void* object) {
    QDesignerMetaDataBaseInterface_Remove((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

void q_designermetadatabaseinterface_on_remove(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnRemove((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_qbase_remove(void* self, void* object) {
    QDesignerMetaDataBaseInterface_QBaseRemove((QDesignerMetaDataBaseInterface*)self, (QObject*)object);
}

libqt_list /* of QObject* */ q_designermetadatabaseinterface_objects(void* self) {
    libqt_list _arr = QDesignerMetaDataBaseInterface_Objects((QDesignerMetaDataBaseInterface*)self);
    return _arr;
}

void q_designermetadatabaseinterface_on_objects(void* self, QObject** (*callback)()) {
    QDesignerMetaDataBaseInterface_OnObjects((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

libqt_list /* of QObject* */ q_designermetadatabaseinterface_qbase_objects(void* self) {
    libqt_list _arr = QDesignerMetaDataBaseInterface_QBaseObjects((QDesignerMetaDataBaseInterface*)self);
    return _arr;
}

QDesignerFormEditorInterface* q_designermetadatabaseinterface_core(void* self) {
    return QDesignerMetaDataBaseInterface_Core((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerMetaDataBaseInterface_OnCore((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designermetadatabaseinterface_qbase_core(void* self) {
    return QDesignerMetaDataBaseInterface_QBaseCore((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_changed(void* self) {
    QDesignerMetaDataBaseInterface_Changed((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_on_changed(void* self, void (*callback)(void*)) {
    QDesignerMetaDataBaseInterface_Connect_Changed((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

const char* q_designermetadatabaseinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designermetadatabaseinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designermetadatabaseinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designermetadatabaseinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designermetadatabaseinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designermetadatabaseinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designermetadatabaseinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designermetadatabaseinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designermetadatabaseinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designermetadatabaseinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designermetadatabaseinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designermetadatabaseinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designermetadatabaseinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designermetadatabaseinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designermetadatabaseinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designermetadatabaseinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designermetadatabaseinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designermetadatabaseinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designermetadatabaseinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designermetadatabaseinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designermetadatabaseinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designermetadatabaseinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designermetadatabaseinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_designermetadatabaseinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designermetadatabaseinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designermetadatabaseinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designermetadatabaseinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designermetadatabaseinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designermetadatabaseinterface_dynamic_property_names\n");
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

QBindingStorage* q_designermetadatabaseinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designermetadatabaseinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designermetadatabaseinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designermetadatabaseinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designermetadatabaseinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designermetadatabaseinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designermetadatabaseinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designermetadatabaseinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designermetadatabaseinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designermetadatabaseinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designermetadatabaseinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_designermetadatabaseinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designermetadatabaseinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designermetadatabaseinterface_event(void* self, void* event) {
    return QDesignerMetaDataBaseInterface_Event((QDesignerMetaDataBaseInterface*)self, (QEvent*)event);
}

bool q_designermetadatabaseinterface_qbase_event(void* self, void* event) {
    return QDesignerMetaDataBaseInterface_QBaseEvent((QDesignerMetaDataBaseInterface*)self, (QEvent*)event);
}

void q_designermetadatabaseinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnEvent((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

bool q_designermetadatabaseinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerMetaDataBaseInterface_EventFilter((QDesignerMetaDataBaseInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designermetadatabaseinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerMetaDataBaseInterface_QBaseEventFilter((QDesignerMetaDataBaseInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designermetadatabaseinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerMetaDataBaseInterface_OnEventFilter((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_timer_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_TimerEvent((QDesignerMetaDataBaseInterface*)self, (QTimerEvent*)event);
}

void q_designermetadatabaseinterface_qbase_timer_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_QBaseTimerEvent((QDesignerMetaDataBaseInterface*)self, (QTimerEvent*)event);
}

void q_designermetadatabaseinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnTimerEvent((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_child_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_ChildEvent((QDesignerMetaDataBaseInterface*)self, (QChildEvent*)event);
}

void q_designermetadatabaseinterface_qbase_child_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_QBaseChildEvent((QDesignerMetaDataBaseInterface*)self, (QChildEvent*)event);
}

void q_designermetadatabaseinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnChildEvent((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_custom_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_CustomEvent((QDesignerMetaDataBaseInterface*)self, (QEvent*)event);
}

void q_designermetadatabaseinterface_qbase_custom_event(void* self, void* event) {
    QDesignerMetaDataBaseInterface_QBaseCustomEvent((QDesignerMetaDataBaseInterface*)self, (QEvent*)event);
}

void q_designermetadatabaseinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnCustomEvent((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_connect_notify(void* self, void* signal) {
    QDesignerMetaDataBaseInterface_ConnectNotify((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designermetadatabaseinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerMetaDataBaseInterface_QBaseConnectNotify((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designermetadatabaseinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnConnectNotify((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_disconnect_notify(void* self, void* signal) {
    QDesignerMetaDataBaseInterface_DisconnectNotify((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designermetadatabaseinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerMetaDataBaseInterface_QBaseDisconnectNotify((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designermetadatabaseinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnDisconnectNotify((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

QObject* q_designermetadatabaseinterface_sender(void* self) {
    return QDesignerMetaDataBaseInterface_Sender((QDesignerMetaDataBaseInterface*)self);
}

QObject* q_designermetadatabaseinterface_qbase_sender(void* self) {
    return QDesignerMetaDataBaseInterface_QBaseSender((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerMetaDataBaseInterface_OnSender((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designermetadatabaseinterface_sender_signal_index(void* self) {
    return QDesignerMetaDataBaseInterface_SenderSignalIndex((QDesignerMetaDataBaseInterface*)self);
}

int32_t q_designermetadatabaseinterface_qbase_sender_signal_index(void* self) {
    return QDesignerMetaDataBaseInterface_QBaseSenderSignalIndex((QDesignerMetaDataBaseInterface*)self);
}

void q_designermetadatabaseinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerMetaDataBaseInterface_OnSenderSignalIndex((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

int32_t q_designermetadatabaseinterface_receivers(void* self, const char* signal) {
    return QDesignerMetaDataBaseInterface_Receivers((QDesignerMetaDataBaseInterface*)self, signal);
}

int32_t q_designermetadatabaseinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerMetaDataBaseInterface_QBaseReceivers((QDesignerMetaDataBaseInterface*)self, signal);
}

void q_designermetadatabaseinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerMetaDataBaseInterface_OnReceivers((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

bool q_designermetadatabaseinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerMetaDataBaseInterface_IsSignalConnected((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

bool q_designermetadatabaseinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerMetaDataBaseInterface_QBaseIsSignalConnected((QDesignerMetaDataBaseInterface*)self, (QMetaMethod*)signal);
}

void q_designermetadatabaseinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerMetaDataBaseInterface_OnIsSignalConnected((QDesignerMetaDataBaseInterface*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designermetadatabaseinterface_delete(void* self) {
    QDesignerMetaDataBaseInterface_Delete((QDesignerMetaDataBaseInterface*)(self));
}
