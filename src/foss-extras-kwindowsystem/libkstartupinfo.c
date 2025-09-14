#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libkstartupinfo.hpp"
#include "libkstartupinfo.h"

KStartupInfo* k_startupinfo_new(int flags) {
    return KStartupInfo_new(flags);
}

KStartupInfo* k_startupinfo_new2(int flags, void* parent) {
    return KStartupInfo_new2(flags, (QObject*)parent);
}

const QMetaObject* k_startupinfo_meta_object(void* self) {
    return KStartupInfo_MetaObject((KStartupInfo*)self);
}

void* k_startupinfo_metacast(void* self, const char* param1) {
    return KStartupInfo_Metacast((KStartupInfo*)self, param1);
}

int32_t k_startupinfo_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStartupInfo_Metacall((KStartupInfo*)self, param1, param2, param3);
}

void k_startupinfo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KStartupInfo_OnMetacall((KStartupInfo*)self, (intptr_t)callback);
}

int32_t k_startupinfo_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStartupInfo_QBaseMetacall((KStartupInfo*)self, param1, param2, param3);
}

const char* k_startupinfo_tr(const char* s) {
    libqt_string _str = KStartupInfo_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfo_app_started() {
    KStartupInfo_AppStarted();
}

void k_startupinfo_app_started2(const char* startup_id) {
    KStartupInfo_AppStarted2(qstring(startup_id));
}

void k_startupinfo_set_startup_id(const char* startup_id) {
    KStartupInfo_SetStartupId(qstring(startup_id));
}

void k_startupinfo_set_new_startup_id(void* window, const char* startup_id) {
    KStartupInfo_SetNewStartupId((QWindow*)window, qstring(startup_id));
}

char* k_startupinfo_create_new_startup_id() {
    libqt_string _str = KStartupInfo_CreateNewStartupId();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_startupinfo_create_new_startup_id_for_timestamp(uint32_t timestamp) {
    libqt_string _str = KStartupInfo_CreateNewStartupIdForTimestamp(timestamp);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_startupinfo_send_startup(void* id, void* data) {
    return KStartupInfo_SendStartup((KStartupInfoId*)id, (KStartupInfoData*)data);
}

bool k_startupinfo_send_startup_xcb(xcb_connection_t* conn, int screen, void* id, void* data) {
    return KStartupInfo_SendStartupXcb(conn, screen, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

bool k_startupinfo_send_change(void* id, void* data) {
    return KStartupInfo_SendChange((KStartupInfoId*)id, (KStartupInfoData*)data);
}

bool k_startupinfo_send_change_xcb(xcb_connection_t* conn, int screen, void* id, void* data) {
    return KStartupInfo_SendChangeXcb(conn, screen, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

bool k_startupinfo_send_finish(void* id) {
    return KStartupInfo_SendFinish((KStartupInfoId*)id);
}

bool k_startupinfo_send_finish_xcb(xcb_connection_t* conn, int screen, void* id) {
    return KStartupInfo_SendFinishXcb(conn, screen, (KStartupInfoId*)id);
}

bool k_startupinfo_send_finish2(void* id, void* data) {
    return KStartupInfo_SendFinish2((KStartupInfoId*)id, (KStartupInfoData*)data);
}

bool k_startupinfo_send_finish_xcb2(xcb_connection_t* conn, int screen, void* id, void* data) {
    return KStartupInfo_SendFinishXcb2(conn, screen, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

void k_startupinfo_reset_startup_env() {
    KStartupInfo_ResetStartupEnv();
}

int32_t k_startupinfo_check_startup(void* self, uintptr_t w) {
    return KStartupInfo_CheckStartup((KStartupInfo*)self, w);
}

int32_t k_startupinfo_check_startup2(void* self, uintptr_t w, void* id) {
    return KStartupInfo_CheckStartup2((KStartupInfo*)self, w, (KStartupInfoId*)id);
}

int32_t k_startupinfo_check_startup3(void* self, uintptr_t w, void* data) {
    return KStartupInfo_CheckStartup3((KStartupInfo*)self, w, (KStartupInfoData*)data);
}

int32_t k_startupinfo_check_startup4(void* self, uintptr_t w, void* id, void* data) {
    return KStartupInfo_CheckStartup4((KStartupInfo*)self, w, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

void k_startupinfo_set_timeout(void* self, uint32_t secs) {
    KStartupInfo_SetTimeout((KStartupInfo*)self, secs);
}

char* k_startupinfo_window_startup_id(uintptr_t w) {
    libqt_string _str = KStartupInfo_WindowStartupId(w);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfo_got_new_startup(void* self, void* id, void* data) {
    KStartupInfo_GotNewStartup((KStartupInfo*)self, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

void k_startupinfo_on_got_new_startup(void* self, void (*callback)(void*, void*, void*)) {
    KStartupInfo_Connect_GotNewStartup((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_got_startup_change(void* self, void* id, void* data) {
    KStartupInfo_GotStartupChange((KStartupInfo*)self, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

void k_startupinfo_on_got_startup_change(void* self, void (*callback)(void*, void*, void*)) {
    KStartupInfo_Connect_GotStartupChange((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_got_remove_startup(void* self, void* id, void* data) {
    KStartupInfo_GotRemoveStartup((KStartupInfo*)self, (KStartupInfoId*)id, (KStartupInfoData*)data);
}

void k_startupinfo_on_got_remove_startup(void* self, void (*callback)(void*, void*, void*)) {
    KStartupInfo_Connect_GotRemoveStartup((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_custom_event(void* self, void* e_P) {
    KStartupInfo_CustomEvent((KStartupInfo*)self, (QEvent*)e_P);
}

void k_startupinfo_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KStartupInfo_OnCustomEvent((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_qbase_custom_event(void* self, void* e_P) {
    KStartupInfo_QBaseCustomEvent((KStartupInfo*)self, (QEvent*)e_P);
}

const char* k_startupinfo_tr2(const char* s, const char* c) {
    libqt_string _str = KStartupInfo_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_startupinfo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KStartupInfo_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_startupinfo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfo_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_startupinfo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_startupinfo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_startupinfo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_startupinfo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_startupinfo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_startupinfo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_startupinfo_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_startupinfo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_startupinfo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_startupinfo_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_startupinfo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_startupinfo_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_startupinfo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_startupinfo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_startupinfo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_startupinfo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_startupinfo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_startupinfo_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_startupinfo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_startupinfo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_startupinfo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_startupinfo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_startupinfo_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_startupinfo_dynamic_property_names");
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

QBindingStorage* k_startupinfo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_startupinfo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_startupinfo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_startupinfo_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_startupinfo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_startupinfo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_startupinfo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_startupinfo_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_startupinfo_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_startupinfo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_startupinfo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_startupinfo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_startupinfo_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_startupinfo_event(void* self, void* event) {
    return KStartupInfo_Event((KStartupInfo*)self, (QEvent*)event);
}

bool k_startupinfo_qbase_event(void* self, void* event) {
    return KStartupInfo_QBaseEvent((KStartupInfo*)self, (QEvent*)event);
}

void k_startupinfo_on_event(void* self, bool (*callback)(void*, void*)) {
    KStartupInfo_OnEvent((KStartupInfo*)self, (intptr_t)callback);
}

bool k_startupinfo_event_filter(void* self, void* watched, void* event) {
    return KStartupInfo_EventFilter((KStartupInfo*)self, (QObject*)watched, (QEvent*)event);
}

bool k_startupinfo_qbase_event_filter(void* self, void* watched, void* event) {
    return KStartupInfo_QBaseEventFilter((KStartupInfo*)self, (QObject*)watched, (QEvent*)event);
}

void k_startupinfo_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KStartupInfo_OnEventFilter((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_timer_event(void* self, void* event) {
    KStartupInfo_TimerEvent((KStartupInfo*)self, (QTimerEvent*)event);
}

void k_startupinfo_qbase_timer_event(void* self, void* event) {
    KStartupInfo_QBaseTimerEvent((KStartupInfo*)self, (QTimerEvent*)event);
}

void k_startupinfo_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KStartupInfo_OnTimerEvent((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_child_event(void* self, void* event) {
    KStartupInfo_ChildEvent((KStartupInfo*)self, (QChildEvent*)event);
}

void k_startupinfo_qbase_child_event(void* self, void* event) {
    KStartupInfo_QBaseChildEvent((KStartupInfo*)self, (QChildEvent*)event);
}

void k_startupinfo_on_child_event(void* self, void (*callback)(void*, void*)) {
    KStartupInfo_OnChildEvent((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_connect_notify(void* self, void* signal) {
    KStartupInfo_ConnectNotify((KStartupInfo*)self, (QMetaMethod*)signal);
}

void k_startupinfo_qbase_connect_notify(void* self, void* signal) {
    KStartupInfo_QBaseConnectNotify((KStartupInfo*)self, (QMetaMethod*)signal);
}

void k_startupinfo_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KStartupInfo_OnConnectNotify((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_disconnect_notify(void* self, void* signal) {
    KStartupInfo_DisconnectNotify((KStartupInfo*)self, (QMetaMethod*)signal);
}

void k_startupinfo_qbase_disconnect_notify(void* self, void* signal) {
    KStartupInfo_QBaseDisconnectNotify((KStartupInfo*)self, (QMetaMethod*)signal);
}

void k_startupinfo_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KStartupInfo_OnDisconnectNotify((KStartupInfo*)self, (intptr_t)callback);
}

QObject* k_startupinfo_sender(void* self) {
    return KStartupInfo_Sender((KStartupInfo*)self);
}

QObject* k_startupinfo_qbase_sender(void* self) {
    return KStartupInfo_QBaseSender((KStartupInfo*)self);
}

void k_startupinfo_on_sender(void* self, QObject* (*callback)()) {
    KStartupInfo_OnSender((KStartupInfo*)self, (intptr_t)callback);
}

int32_t k_startupinfo_sender_signal_index(void* self) {
    return KStartupInfo_SenderSignalIndex((KStartupInfo*)self);
}

int32_t k_startupinfo_qbase_sender_signal_index(void* self) {
    return KStartupInfo_QBaseSenderSignalIndex((KStartupInfo*)self);
}

void k_startupinfo_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KStartupInfo_OnSenderSignalIndex((KStartupInfo*)self, (intptr_t)callback);
}

int32_t k_startupinfo_receivers(void* self, const char* signal) {
    return KStartupInfo_Receivers((KStartupInfo*)self, signal);
}

int32_t k_startupinfo_qbase_receivers(void* self, const char* signal) {
    return KStartupInfo_QBaseReceivers((KStartupInfo*)self, signal);
}

void k_startupinfo_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KStartupInfo_OnReceivers((KStartupInfo*)self, (intptr_t)callback);
}

bool k_startupinfo_is_signal_connected(void* self, void* signal) {
    return KStartupInfo_IsSignalConnected((KStartupInfo*)self, (QMetaMethod*)signal);
}

bool k_startupinfo_qbase_is_signal_connected(void* self, void* signal) {
    return KStartupInfo_QBaseIsSignalConnected((KStartupInfo*)self, (QMetaMethod*)signal);
}

void k_startupinfo_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KStartupInfo_OnIsSignalConnected((KStartupInfo*)self, (intptr_t)callback);
}

void k_startupinfo_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_startupinfo_delete(void* self) {
    KStartupInfo_Delete((KStartupInfo*)(self));
}

KStartupInfoId* k_startupinfoid_new() {
    return KStartupInfoId_new();
}

KStartupInfoId* k_startupinfoid_new2(void* data) {
    return KStartupInfoId_new2((KStartupInfoId*)data);
}

bool k_startupinfoid_operator_equal(void* self, void* id) {
    return KStartupInfoId_OperatorEqual((KStartupInfoId*)self, (KStartupInfoId*)id);
}

bool k_startupinfoid_operator_not_equal(void* self, void* id) {
    return KStartupInfoId_OperatorNotEqual((KStartupInfoId*)self, (KStartupInfoId*)id);
}

bool k_startupinfoid_is_null(void* self) {
    return KStartupInfoId_IsNull((KStartupInfoId*)self);
}

void k_startupinfoid_init_id(void* self) {
    KStartupInfoId_InitId((KStartupInfoId*)self);
}

const char* k_startupinfoid_id(void* self) {
    libqt_string _str = KStartupInfoId_Id((KStartupInfoId*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_startupinfoid_timestamp(void* self) {
    return KStartupInfoId_Timestamp((KStartupInfoId*)self);
}

bool k_startupinfoid_setup_startup_env(void* self) {
    return KStartupInfoId_SetupStartupEnv((KStartupInfoId*)self);
}

void k_startupinfoid_operator_assign(void* self, void* data) {
    KStartupInfoId_OperatorAssign((KStartupInfoId*)self, (KStartupInfoId*)data);
}

bool k_startupinfoid_operator_lesser(void* self, void* id) {
    return KStartupInfoId_OperatorLesser((KStartupInfoId*)self, (KStartupInfoId*)id);
}

void k_startupinfoid_init_id1(void* self, const char* id) {
    KStartupInfoId_InitId1((KStartupInfoId*)self, qstring(id));
}

void k_startupinfoid_delete(void* self) {
    KStartupInfoId_Delete((KStartupInfoId*)(self));
}

KStartupInfoData* k_startupinfodata_new() {
    return KStartupInfoData_new();
}

KStartupInfoData* k_startupinfodata_new2(void* data) {
    return KStartupInfoData_new2((KStartupInfoData*)data);
}

void k_startupinfodata_set_bin(void* self, const char* bin) {
    KStartupInfoData_SetBin((KStartupInfoData*)self, qstring(bin));
}

const char* k_startupinfodata_bin(void* self) {
    libqt_string _str = KStartupInfoData_Bin((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_name(void* self, const char* name) {
    KStartupInfoData_SetName((KStartupInfoData*)self, qstring(name));
}

const char* k_startupinfodata_find_name(void* self) {
    libqt_string _str = KStartupInfoData_FindName((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_startupinfodata_name(void* self) {
    libqt_string _str = KStartupInfoData_Name((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_description(void* self, const char* descr) {
    KStartupInfoData_SetDescription((KStartupInfoData*)self, qstring(descr));
}

const char* k_startupinfodata_find_description(void* self) {
    libqt_string _str = KStartupInfoData_FindDescription((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_startupinfodata_description(void* self) {
    libqt_string _str = KStartupInfoData_Description((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_icon(void* self, const char* icon) {
    KStartupInfoData_SetIcon((KStartupInfoData*)self, qstring(icon));
}

const char* k_startupinfodata_find_icon(void* self) {
    libqt_string _str = KStartupInfoData_FindIcon((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_startupinfodata_icon(void* self) {
    libqt_string _str = KStartupInfoData_Icon((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_desktop(void* self, int desktop) {
    KStartupInfoData_SetDesktop((KStartupInfoData*)self, desktop);
}

int32_t k_startupinfodata_desktop(void* self) {
    return KStartupInfoData_Desktop((KStartupInfoData*)self);
}

void k_startupinfodata_set_w_m_class(void* self, const char* wmclass) {
    KStartupInfoData_SetWMClass((KStartupInfoData*)self, qstring(wmclass));
}

const char* k_startupinfodata_find_w_m_class(void* self) {
    libqt_string _str = KStartupInfoData_FindWMClass((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_startupinfodata_w_m_class(void* self) {
    libqt_string _str = KStartupInfoData_WMClass((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_add_pid(void* self, pid_t pid) {
    KStartupInfoData_AddPid((KStartupInfoData*)self, pid);
}

libqt_list /* of pid_t */ k_startupinfodata_pids(void* self) {
    libqt_list _arr = KStartupInfoData_Pids((KStartupInfoData*)self);
    return _arr;
}

bool k_startupinfodata_is_pid(void* self, pid_t pid) {
    return KStartupInfoData_IsPid((KStartupInfoData*)self, pid);
}

void k_startupinfodata_set_hostname(void* self) {
    KStartupInfoData_SetHostname((KStartupInfoData*)self);
}

char* k_startupinfodata_hostname(void* self) {
    libqt_string _str = KStartupInfoData_Hostname((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_silent(void* self, int32_t state) {
    KStartupInfoData_SetSilent((KStartupInfoData*)self, state);
}

int32_t k_startupinfodata_silent(void* self) {
    return KStartupInfoData_Silent((KStartupInfoData*)self);
}

int32_t k_startupinfodata_screen(void* self) {
    return KStartupInfoData_Screen((KStartupInfoData*)self);
}

void k_startupinfodata_set_screen(void* self, int screen) {
    KStartupInfoData_SetScreen((KStartupInfoData*)self, screen);
}

int32_t k_startupinfodata_xinerama(void* self) {
    return KStartupInfoData_Xinerama((KStartupInfoData*)self);
}

void k_startupinfodata_set_xinerama(void* self, int xinerama) {
    KStartupInfoData_SetXinerama((KStartupInfoData*)self, xinerama);
}

const char* k_startupinfodata_application_id(void* self) {
    libqt_string _str = KStartupInfoData_ApplicationId((KStartupInfoData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_startupinfodata_set_application_id(void* self, const char* desktop) {
    KStartupInfoData_SetApplicationId((KStartupInfoData*)self, qstring(desktop));
}

void k_startupinfodata_update(void* self, void* data) {
    KStartupInfoData_Update((KStartupInfoData*)self, (KStartupInfoData*)data);
}

void k_startupinfodata_operator_assign(void* self, void* data) {
    KStartupInfoData_OperatorAssign((KStartupInfoData*)self, (KStartupInfoData*)data);
}

void k_startupinfodata_set_hostname1(void* self, const char* hostname) {
    KStartupInfoData_SetHostname1((KStartupInfoData*)self, qstring(hostname));
}

void k_startupinfodata_delete(void* self) {
    KStartupInfoData_Delete((KStartupInfoData*)(self));
}
