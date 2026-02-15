#include "libentry.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libquestion.hpp"
#include "libquestion.h"

KNSCore__Question* k_nscore__question_new() {
    return KNSCore__Question_new();
}

KNSCore__Question* k_nscore__question_new2(int32_t param1) {
    return KNSCore__Question_new2(param1);
}

KNSCore__Question* k_nscore__question_new3(int32_t param1, void* parent) {
    return KNSCore__Question_new3(param1, (QObject*)parent);
}

const QMetaObject* k_nscore__question_meta_object(void* self) {
    return KNSCore__Question_MetaObject((KNSCore__Question*)self);
}

void k_nscore__question_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KNSCore__Question_OnMetaObject((KNSCore__Question*)self, (intptr_t)callback);
}

const QMetaObject* k_nscore__question_qbase_meta_object(void* self) {
    return KNSCore__Question_QBaseMetaObject((KNSCore__Question*)self);
}

void* k_nscore__question_metacast(void* self, const char* param1) {
    return KNSCore__Question_Metacast((KNSCore__Question*)self, param1);
}

void k_nscore__question_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KNSCore__Question_OnMetacast((KNSCore__Question*)self, (intptr_t)callback);
}

void* k_nscore__question_qbase_metacast(void* self, const char* param1) {
    return KNSCore__Question_QBaseMetacast((KNSCore__Question*)self, param1);
}

int32_t k_nscore__question_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__Question_Metacall((KNSCore__Question*)self, param1, param2, param3);
}

void k_nscore__question_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNSCore__Question_OnMetacall((KNSCore__Question*)self, (intptr_t)callback);
}

int32_t k_nscore__question_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__Question_QBaseMetacall((KNSCore__Question*)self, param1, param2, param3);
}

const char* k_nscore__question_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_nscore__question_ask(void* self) {
    return KNSCore__Question_Ask((KNSCore__Question*)self);
}

void k_nscore__question_set_question_type(void* self) {
    KNSCore__Question_SetQuestionType((KNSCore__Question*)self);
}

int32_t k_nscore__question_question_type(void* self) {
    return KNSCore__Question_QuestionType((KNSCore__Question*)self);
}

void k_nscore__question_set_question(void* self, const char* newQuestion) {
    KNSCore__Question_SetQuestion((KNSCore__Question*)self, qstring(newQuestion));
}

const char* k_nscore__question_question(void* self) {
    libqt_string _str = KNSCore__Question_Question((KNSCore__Question*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__question_set_title(void* self, const char* newTitle) {
    KNSCore__Question_SetTitle((KNSCore__Question*)self, qstring(newTitle));
}

const char* k_nscore__question_title(void* self) {
    libqt_string _str = KNSCore__Question_Title((KNSCore__Question*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__question_set_list(void* self, const char* newList[static 1]) {
    size_t newList_len = libqt_strv_length(newList);
    libqt_string* newList_qstr = (libqt_string*)malloc(newList_len * sizeof(libqt_string));
    if (newList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__question_set_list\n");
        abort();
    }
    for (size_t i = 0; i < newList_len; ++i) {
        newList_qstr[i] = qstring(newList[i]);
    }
    libqt_list newList_list = qlist(newList_qstr, newList_len);
    KNSCore__Question_SetList((KNSCore__Question*)self, newList_list);
    free(newList_qstr);
}

const char** k_nscore__question_list(void* self) {
    libqt_list _arr = KNSCore__Question_List((KNSCore__Question*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__question_list\n");
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

void k_nscore__question_set_entry(void* self, void* entry) {
    KNSCore__Question_SetEntry((KNSCore__Question*)self, (KNSCore__Entry*)entry);
}

KNSCore__Entry* k_nscore__question_entry(void* self) {
    return KNSCore__Question_Entry((KNSCore__Question*)self);
}

void k_nscore__question_set_response(void* self, int32_t response) {
    KNSCore__Question_SetResponse((KNSCore__Question*)self, response);
}

void k_nscore__question_set_response2(void* self, const char* response) {
    KNSCore__Question_SetResponse2((KNSCore__Question*)self, qstring(response));
}

const char* k_nscore__question_response(void* self) {
    libqt_string _str = KNSCore__Question_Response((KNSCore__Question*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__question_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__question_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__question_set_question_type1(void* self, int32_t newType) {
    KNSCore__Question_SetQuestionType1((KNSCore__Question*)self, newType);
}

const char* k_nscore__question_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__question_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__question_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__question_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__question_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__question_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__question_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__question_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__question_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__question_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_nscore__question_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_nscore__question_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__question_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__question_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__question_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__question_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__question_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__question_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_nscore__question_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__question_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__question_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_nscore__question_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__question_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_nscore__question_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_nscore__question_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_nscore__question_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__question_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__question_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__question_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__question_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__question_dynamic_property_names\n");
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

QBindingStorage* k_nscore__question_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__question_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__question_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__question_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_nscore__question_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_nscore__question_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__question_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_nscore__question_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_nscore__question_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_nscore__question_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_nscore__question_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__question_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_nscore__question_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_nscore__question_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_nscore__question_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_nscore__question_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_nscore__question_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__question_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_nscore__question_event(void* self, void* event) {
    return KNSCore__Question_Event((KNSCore__Question*)self, (QEvent*)event);
}

bool k_nscore__question_qbase_event(void* self, void* event) {
    return KNSCore__Question_QBaseEvent((KNSCore__Question*)self, (QEvent*)event);
}

void k_nscore__question_on_event(void* self, bool (*callback)(void*, void*)) {
    KNSCore__Question_OnEvent((KNSCore__Question*)self, (intptr_t)callback);
}

bool k_nscore__question_event_filter(void* self, void* watched, void* event) {
    return KNSCore__Question_EventFilter((KNSCore__Question*)self, (QObject*)watched, (QEvent*)event);
}

bool k_nscore__question_qbase_event_filter(void* self, void* watched, void* event) {
    return KNSCore__Question_QBaseEventFilter((KNSCore__Question*)self, (QObject*)watched, (QEvent*)event);
}

void k_nscore__question_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNSCore__Question_OnEventFilter((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_timer_event(void* self, void* event) {
    KNSCore__Question_TimerEvent((KNSCore__Question*)self, (QTimerEvent*)event);
}

void k_nscore__question_qbase_timer_event(void* self, void* event) {
    KNSCore__Question_QBaseTimerEvent((KNSCore__Question*)self, (QTimerEvent*)event);
}

void k_nscore__question_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Question_OnTimerEvent((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_child_event(void* self, void* event) {
    KNSCore__Question_ChildEvent((KNSCore__Question*)self, (QChildEvent*)event);
}

void k_nscore__question_qbase_child_event(void* self, void* event) {
    KNSCore__Question_QBaseChildEvent((KNSCore__Question*)self, (QChildEvent*)event);
}

void k_nscore__question_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Question_OnChildEvent((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_custom_event(void* self, void* event) {
    KNSCore__Question_CustomEvent((KNSCore__Question*)self, (QEvent*)event);
}

void k_nscore__question_qbase_custom_event(void* self, void* event) {
    KNSCore__Question_QBaseCustomEvent((KNSCore__Question*)self, (QEvent*)event);
}

void k_nscore__question_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNSCore__Question_OnCustomEvent((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_connect_notify(void* self, void* signal) {
    KNSCore__Question_ConnectNotify((KNSCore__Question*)self, (QMetaMethod*)signal);
}

void k_nscore__question_qbase_connect_notify(void* self, void* signal) {
    KNSCore__Question_QBaseConnectNotify((KNSCore__Question*)self, (QMetaMethod*)signal);
}

void k_nscore__question_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__Question_OnConnectNotify((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_disconnect_notify(void* self, void* signal) {
    KNSCore__Question_DisconnectNotify((KNSCore__Question*)self, (QMetaMethod*)signal);
}

void k_nscore__question_qbase_disconnect_notify(void* self, void* signal) {
    KNSCore__Question_QBaseDisconnectNotify((KNSCore__Question*)self, (QMetaMethod*)signal);
}

void k_nscore__question_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNSCore__Question_OnDisconnectNotify((KNSCore__Question*)self, (intptr_t)callback);
}

QObject* k_nscore__question_sender(void* self) {
    return KNSCore__Question_Sender((KNSCore__Question*)self);
}

QObject* k_nscore__question_qbase_sender(void* self) {
    return KNSCore__Question_QBaseSender((KNSCore__Question*)self);
}

void k_nscore__question_on_sender(void* self, QObject* (*callback)()) {
    KNSCore__Question_OnSender((KNSCore__Question*)self, (intptr_t)callback);
}

int32_t k_nscore__question_sender_signal_index(void* self) {
    return KNSCore__Question_SenderSignalIndex((KNSCore__Question*)self);
}

int32_t k_nscore__question_qbase_sender_signal_index(void* self) {
    return KNSCore__Question_QBaseSenderSignalIndex((KNSCore__Question*)self);
}

void k_nscore__question_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNSCore__Question_OnSenderSignalIndex((KNSCore__Question*)self, (intptr_t)callback);
}

int32_t k_nscore__question_receivers(void* self, const char* signal) {
    return KNSCore__Question_Receivers((KNSCore__Question*)self, signal);
}

int32_t k_nscore__question_qbase_receivers(void* self, const char* signal) {
    return KNSCore__Question_QBaseReceivers((KNSCore__Question*)self, signal);
}

void k_nscore__question_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNSCore__Question_OnReceivers((KNSCore__Question*)self, (intptr_t)callback);
}

bool k_nscore__question_is_signal_connected(void* self, void* signal) {
    return KNSCore__Question_IsSignalConnected((KNSCore__Question*)self, (QMetaMethod*)signal);
}

bool k_nscore__question_qbase_is_signal_connected(void* self, void* signal) {
    return KNSCore__Question_QBaseIsSignalConnected((KNSCore__Question*)self, (QMetaMethod*)signal);
}

void k_nscore__question_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNSCore__Question_OnIsSignalConnected((KNSCore__Question*)self, (intptr_t)callback);
}

void k_nscore__question_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__question_delete(void* self) {
    KNSCore__Question_Delete((KNSCore__Question*)(self));
}
