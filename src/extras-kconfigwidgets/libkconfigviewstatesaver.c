#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../extras-kwidgetsaddons/libkviewstateserializer.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkconfigviewstatesaver.hpp"
#include "libkconfigviewstatesaver.h"

KConfigViewStateSaver* k_configviewstatesaver_new() {
    return KConfigViewStateSaver_new();
}

KConfigViewStateSaver* k_configviewstatesaver_new2(void* parent) {
    return KConfigViewStateSaver_new2((QObject*)parent);
}

const QMetaObject* k_configviewstatesaver_meta_object(void* self) {
    return KConfigViewStateSaver_MetaObject((KConfigViewStateSaver*)self);
}

void* k_configviewstatesaver_metacast(void* self, const char* param1) {
    return KConfigViewStateSaver_Metacast((KConfigViewStateSaver*)self, param1);
}

int32_t k_configviewstatesaver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigViewStateSaver_Metacall((KConfigViewStateSaver*)self, param1, param2, param3);
}

void k_configviewstatesaver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigViewStateSaver_OnMetacall((KConfigViewStateSaver*)self, (intptr_t)callback);
}

int32_t k_configviewstatesaver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigViewStateSaver_QBaseMetacall((KConfigViewStateSaver*)self, param1, param2, param3);
}

const char* k_configviewstatesaver_tr(const char* s) {
    libqt_string _str = KConfigViewStateSaver_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configviewstatesaver_save_state(void* self, void* configGroup) {
    KConfigViewStateSaver_SaveState((KConfigViewStateSaver*)self, (KConfigGroup*)configGroup);
}

void k_configviewstatesaver_restore_state(void* self, void* configGroup) {
    KConfigViewStateSaver_RestoreState((KConfigViewStateSaver*)self, (KConfigGroup*)configGroup);
}

const char* k_configviewstatesaver_tr2(const char* s, const char* c) {
    libqt_string _str = KConfigViewStateSaver_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configviewstatesaver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KConfigViewStateSaver_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemView* k_configviewstatesaver_view(void* self) {
    return KViewStateSerializer_View((KViewStateSerializer*)self);
}

void k_configviewstatesaver_set_view(void* self, void* view) {
    KViewStateSerializer_SetView((KViewStateSerializer*)self, (QAbstractItemView*)view);
}

QItemSelectionModel* k_configviewstatesaver_selection_model(void* self) {
    return KViewStateSerializer_SelectionModel((KViewStateSerializer*)self);
}

void k_configviewstatesaver_set_selection_model(void* self, void* selectionModel) {
    KViewStateSerializer_SetSelectionModel((KViewStateSerializer*)self, (QItemSelectionModel*)selectionModel);
}

const char** k_configviewstatesaver_selection_keys(void* self) {
    libqt_list _arr = KViewStateSerializer_SelectionKeys((KViewStateSerializer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configviewstatesaver_selection_keys");
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

const char** k_configviewstatesaver_expansion_keys(void* self) {
    libqt_list _arr = KViewStateSerializer_ExpansionKeys((KViewStateSerializer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configviewstatesaver_expansion_keys");
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

const char* k_configviewstatesaver_current_index_key(void* self) {
    libqt_string _str = KViewStateSerializer_CurrentIndexKey((KViewStateSerializer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_pair /* tuple of int and int */ k_configviewstatesaver_scroll_state(void* self) {
    return KViewStateSerializer_ScrollState((KViewStateSerializer*)self);
}

void k_configviewstatesaver_restore_selection(void* self, const char* indexStrings[]) {
    size_t indexStrings_len = libqt_strv_length(indexStrings);
    libqt_string* indexStrings_qstr = (libqt_string*)malloc(indexStrings_len * sizeof(libqt_string));
    if (indexStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configviewstatesaver_restore_selection");
        abort();
    }
    for (size_t i = 0; i < indexStrings_len; ++i) {
        indexStrings_qstr[i] = qstring(indexStrings[i]);
    }
    libqt_list indexStrings_list = qlist(indexStrings_qstr, indexStrings_len);
    KViewStateSerializer_RestoreSelection((KViewStateSerializer*)self, indexStrings_list);
    free(indexStrings_qstr);
}

void k_configviewstatesaver_restore_current_item(void* self, const char* indexString) {
    KViewStateSerializer_RestoreCurrentItem((KViewStateSerializer*)self, qstring(indexString));
}

void k_configviewstatesaver_restore_expanded(void* self, const char* indexStrings[]) {
    size_t indexStrings_len = libqt_strv_length(indexStrings);
    libqt_string* indexStrings_qstr = (libqt_string*)malloc(indexStrings_len * sizeof(libqt_string));
    if (indexStrings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configviewstatesaver_restore_expanded");
        abort();
    }
    for (size_t i = 0; i < indexStrings_len; ++i) {
        indexStrings_qstr[i] = qstring(indexStrings[i]);
    }
    libqt_list indexStrings_list = qlist(indexStrings_qstr, indexStrings_len);
    KViewStateSerializer_RestoreExpanded((KViewStateSerializer*)self, indexStrings_list);
    free(indexStrings_qstr);
}

void k_configviewstatesaver_restore_scroll_state(void* self, int verticalScoll, int horizontalScroll) {
    KViewStateSerializer_RestoreScrollState((KViewStateSerializer*)self, verticalScoll, horizontalScroll);
}

const char* k_configviewstatesaver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configviewstatesaver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configviewstatesaver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configviewstatesaver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configviewstatesaver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configviewstatesaver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configviewstatesaver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configviewstatesaver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configviewstatesaver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configviewstatesaver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_configviewstatesaver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configviewstatesaver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configviewstatesaver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configviewstatesaver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configviewstatesaver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configviewstatesaver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configviewstatesaver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configviewstatesaver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configviewstatesaver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configviewstatesaver_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_configviewstatesaver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configviewstatesaver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configviewstatesaver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_configviewstatesaver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_configviewstatesaver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configviewstatesaver_dynamic_property_names");
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

QBindingStorage* k_configviewstatesaver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configviewstatesaver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configviewstatesaver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configviewstatesaver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configviewstatesaver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configviewstatesaver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configviewstatesaver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_configviewstatesaver_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_configviewstatesaver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_configviewstatesaver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configviewstatesaver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_configviewstatesaver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configviewstatesaver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_configviewstatesaver_index_from_config_string(void* self, void* model, const char* key) {
    return KConfigViewStateSaver_IndexFromConfigString((KConfigViewStateSaver*)self, (QAbstractItemModel*)model, qstring(key));
}

QModelIndex* k_configviewstatesaver_qbase_index_from_config_string(void* self, void* model, const char* key) {
    return KConfigViewStateSaver_QBaseIndexFromConfigString((KConfigViewStateSaver*)self, (QAbstractItemModel*)model, qstring(key));
}

void k_configviewstatesaver_on_index_from_config_string(void* self, QModelIndex* (*callback)(void*, void*, const char*)) {
    KConfigViewStateSaver_OnIndexFromConfigString((KConfigViewStateSaver*)self, (intptr_t)callback);
}

const char* k_configviewstatesaver_index_to_config_string(void* self, void* index) {
    libqt_string _str = KConfigViewStateSaver_IndexToConfigString((KConfigViewStateSaver*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configviewstatesaver_qbase_index_to_config_string(void* self, void* index) {
    libqt_string _str = KConfigViewStateSaver_QBaseIndexToConfigString((KConfigViewStateSaver*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configviewstatesaver_on_index_to_config_string(void* self, const char* (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnIndexToConfigString((KConfigViewStateSaver*)self, (intptr_t)callback);
}

bool k_configviewstatesaver_event(void* self, void* event) {
    return KConfigViewStateSaver_Event((KConfigViewStateSaver*)self, (QEvent*)event);
}

bool k_configviewstatesaver_qbase_event(void* self, void* event) {
    return KConfigViewStateSaver_QBaseEvent((KConfigViewStateSaver*)self, (QEvent*)event);
}

void k_configviewstatesaver_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnEvent((KConfigViewStateSaver*)self, (intptr_t)callback);
}

bool k_configviewstatesaver_event_filter(void* self, void* watched, void* event) {
    return KConfigViewStateSaver_EventFilter((KConfigViewStateSaver*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configviewstatesaver_qbase_event_filter(void* self, void* watched, void* event) {
    return KConfigViewStateSaver_QBaseEventFilter((KConfigViewStateSaver*)self, (QObject*)watched, (QEvent*)event);
}

void k_configviewstatesaver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigViewStateSaver_OnEventFilter((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_timer_event(void* self, void* event) {
    KConfigViewStateSaver_TimerEvent((KConfigViewStateSaver*)self, (QTimerEvent*)event);
}

void k_configviewstatesaver_qbase_timer_event(void* self, void* event) {
    KConfigViewStateSaver_QBaseTimerEvent((KConfigViewStateSaver*)self, (QTimerEvent*)event);
}

void k_configviewstatesaver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnTimerEvent((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_child_event(void* self, void* event) {
    KConfigViewStateSaver_ChildEvent((KConfigViewStateSaver*)self, (QChildEvent*)event);
}

void k_configviewstatesaver_qbase_child_event(void* self, void* event) {
    KConfigViewStateSaver_QBaseChildEvent((KConfigViewStateSaver*)self, (QChildEvent*)event);
}

void k_configviewstatesaver_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnChildEvent((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_custom_event(void* self, void* event) {
    KConfigViewStateSaver_CustomEvent((KConfigViewStateSaver*)self, (QEvent*)event);
}

void k_configviewstatesaver_qbase_custom_event(void* self, void* event) {
    KConfigViewStateSaver_QBaseCustomEvent((KConfigViewStateSaver*)self, (QEvent*)event);
}

void k_configviewstatesaver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnCustomEvent((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_connect_notify(void* self, void* signal) {
    KConfigViewStateSaver_ConnectNotify((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

void k_configviewstatesaver_qbase_connect_notify(void* self, void* signal) {
    KConfigViewStateSaver_QBaseConnectNotify((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

void k_configviewstatesaver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnConnectNotify((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_disconnect_notify(void* self, void* signal) {
    KConfigViewStateSaver_DisconnectNotify((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

void k_configviewstatesaver_qbase_disconnect_notify(void* self, void* signal) {
    KConfigViewStateSaver_QBaseDisconnectNotify((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

void k_configviewstatesaver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnDisconnectNotify((KConfigViewStateSaver*)self, (intptr_t)callback);
}

QObject* k_configviewstatesaver_sender(void* self) {
    return KConfigViewStateSaver_Sender((KConfigViewStateSaver*)self);
}

QObject* k_configviewstatesaver_qbase_sender(void* self) {
    return KConfigViewStateSaver_QBaseSender((KConfigViewStateSaver*)self);
}

void k_configviewstatesaver_on_sender(void* self, QObject* (*callback)()) {
    KConfigViewStateSaver_OnSender((KConfigViewStateSaver*)self, (intptr_t)callback);
}

int32_t k_configviewstatesaver_sender_signal_index(void* self) {
    return KConfigViewStateSaver_SenderSignalIndex((KConfigViewStateSaver*)self);
}

int32_t k_configviewstatesaver_qbase_sender_signal_index(void* self) {
    return KConfigViewStateSaver_QBaseSenderSignalIndex((KConfigViewStateSaver*)self);
}

void k_configviewstatesaver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigViewStateSaver_OnSenderSignalIndex((KConfigViewStateSaver*)self, (intptr_t)callback);
}

int32_t k_configviewstatesaver_receivers(void* self, const char* signal) {
    return KConfigViewStateSaver_Receivers((KConfigViewStateSaver*)self, signal);
}

int32_t k_configviewstatesaver_qbase_receivers(void* self, const char* signal) {
    return KConfigViewStateSaver_QBaseReceivers((KConfigViewStateSaver*)self, signal);
}

void k_configviewstatesaver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigViewStateSaver_OnReceivers((KConfigViewStateSaver*)self, (intptr_t)callback);
}

bool k_configviewstatesaver_is_signal_connected(void* self, void* signal) {
    return KConfigViewStateSaver_IsSignalConnected((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

bool k_configviewstatesaver_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigViewStateSaver_QBaseIsSignalConnected((KConfigViewStateSaver*)self, (QMetaMethod*)signal);
}

void k_configviewstatesaver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigViewStateSaver_OnIsSignalConnected((KConfigViewStateSaver*)self, (intptr_t)callback);
}

void k_configviewstatesaver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configviewstatesaver_delete(void* self) {
    KConfigViewStateSaver_Delete((KConfigViewStateSaver*)(self));
}
