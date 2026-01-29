#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkviewstateserializer.hpp"
#include "libkviewstateserializer.h"

KViewStateSerializer* k_viewstateserializer_new() {
    return KViewStateSerializer_new();
}

KViewStateSerializer* k_viewstateserializer_new2(void* parent) {
    return KViewStateSerializer_new2((QObject*)parent);
}

const QMetaObject* k_viewstateserializer_meta_object(void* self) {
    return KViewStateSerializer_MetaObject((KViewStateSerializer*)self);
}

void k_viewstateserializer_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KViewStateSerializer_OnMetaObject((KViewStateSerializer*)self, (intptr_t)callback);
}

const QMetaObject* k_viewstateserializer_qbase_meta_object(void* self) {
    return KViewStateSerializer_QBaseMetaObject((KViewStateSerializer*)self);
}

void* k_viewstateserializer_metacast(void* self, const char* param1) {
    return KViewStateSerializer_Metacast((KViewStateSerializer*)self, param1);
}

void k_viewstateserializer_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KViewStateSerializer_OnMetacast((KViewStateSerializer*)self, (intptr_t)callback);
}

void* k_viewstateserializer_qbase_metacast(void* self, const char* param1) {
    return KViewStateSerializer_QBaseMetacast((KViewStateSerializer*)self, param1);
}

int32_t k_viewstateserializer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KViewStateSerializer_Metacall((KViewStateSerializer*)self, param1, param2, param3);
}

void k_viewstateserializer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KViewStateSerializer_OnMetacall((KViewStateSerializer*)self, (intptr_t)callback);
}

int32_t k_viewstateserializer_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KViewStateSerializer_QBaseMetacall((KViewStateSerializer*)self, param1, param2, param3);
}

const char* k_viewstateserializer_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemView* k_viewstateserializer_view(void* self) {
    return KViewStateSerializer_View((KViewStateSerializer*)self);
}

void k_viewstateserializer_set_view(void* self, void* view) {
    KViewStateSerializer_SetView((KViewStateSerializer*)self, (QAbstractItemView*)view);
}

QItemSelectionModel* k_viewstateserializer_selection_model(void* self) {
    return KViewStateSerializer_SelectionModel((KViewStateSerializer*)self);
}

void k_viewstateserializer_set_selection_model(void* self, void* selectionModel) {
    KViewStateSerializer_SetSelectionModel((KViewStateSerializer*)self, (QItemSelectionModel*)selectionModel);
}

const char** k_viewstateserializer_selection_keys(void* self) {
    libqt_list _arr = KViewStateSerializer_SelectionKeys((KViewStateSerializer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstateserializer_selection_keys\n");
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

const char** k_viewstateserializer_expansion_keys(void* self) {
    libqt_list _arr = KViewStateSerializer_ExpansionKeys((KViewStateSerializer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstateserializer_expansion_keys\n");
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

const char* k_viewstateserializer_current_index_key(void* self) {
    libqt_string _str = KViewStateSerializer_CurrentIndexKey((KViewStateSerializer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

pair_int_int /* tuple of int and int */ k_viewstateserializer_scroll_state(void* self) {
    return KViewStateSerializer_ScrollState((KViewStateSerializer*)self);
}

void k_viewstateserializer_restore_selection(void* self, const char* indexStrings[static 1]) {
    size_t indexStrings_len = libqt_strv_length(indexStrings);
    libqt_string* indexStrings_qstr = (libqt_string*)malloc(indexStrings_len * sizeof(libqt_string));
    if (indexStrings_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstateserializer_restore_selection\n");
        abort();
    }
    for (size_t i = 0; i < indexStrings_len; ++i) {
        indexStrings_qstr[i] = qstring(indexStrings[i]);
    }
    libqt_list indexStrings_list = qlist(indexStrings_qstr, indexStrings_len);
    KViewStateSerializer_RestoreSelection((KViewStateSerializer*)self, indexStrings_list);
    free(indexStrings_qstr);
}

void k_viewstateserializer_restore_current_item(void* self, const char* indexString) {
    KViewStateSerializer_RestoreCurrentItem((KViewStateSerializer*)self, qstring(indexString));
}

void k_viewstateserializer_restore_expanded(void* self, const char* indexStrings[static 1]) {
    size_t indexStrings_len = libqt_strv_length(indexStrings);
    libqt_string* indexStrings_qstr = (libqt_string*)malloc(indexStrings_len * sizeof(libqt_string));
    if (indexStrings_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstateserializer_restore_expanded\n");
        abort();
    }
    for (size_t i = 0; i < indexStrings_len; ++i) {
        indexStrings_qstr[i] = qstring(indexStrings[i]);
    }
    libqt_list indexStrings_list = qlist(indexStrings_qstr, indexStrings_len);
    KViewStateSerializer_RestoreExpanded((KViewStateSerializer*)self, indexStrings_list);
    free(indexStrings_qstr);
}

void k_viewstateserializer_restore_scroll_state(void* self, int verticalScoll, int horizontalScroll) {
    KViewStateSerializer_RestoreScrollState((KViewStateSerializer*)self, verticalScoll, horizontalScroll);
}

QModelIndex* k_viewstateserializer_index_from_config_string(void* self, void* model, const char* key) {
    return KViewStateSerializer_IndexFromConfigString((KViewStateSerializer*)self, (QAbstractItemModel*)model, qstring(key));
}

void k_viewstateserializer_on_index_from_config_string(void* self, QModelIndex* (*callback)(void*, void*, const char*)) {
    KViewStateSerializer_OnIndexFromConfigString((KViewStateSerializer*)self, (intptr_t)callback);
}

QModelIndex* k_viewstateserializer_qbase_index_from_config_string(void* self, void* model, const char* key) {
    return KViewStateSerializer_QBaseIndexFromConfigString((KViewStateSerializer*)self, (QAbstractItemModel*)model, qstring(key));
}

const char* k_viewstateserializer_index_to_config_string(void* self, void* index) {
    libqt_string _str = KViewStateSerializer_IndexToConfigString((KViewStateSerializer*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_viewstateserializer_on_index_to_config_string(void* self, const char* (*callback)(void*, void*)) {
    KViewStateSerializer_OnIndexToConfigString((KViewStateSerializer*)self, (intptr_t)callback);
}

const char* k_viewstateserializer_qbase_index_to_config_string(void* self, void* index) {
    libqt_string _str = KViewStateSerializer_QBaseIndexToConfigString((KViewStateSerializer*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_viewstateserializer_restore_state(void* self) {
    KViewStateSerializer_RestoreState((KViewStateSerializer*)self);
}

void k_viewstateserializer_on_restore_state(void* self, void (*callback)()) {
    KViewStateSerializer_OnRestoreState((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_qbase_restore_state(void* self) {
    KViewStateSerializer_QBaseRestoreState((KViewStateSerializer*)self);
}

const char* k_viewstateserializer_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_viewstateserializer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_viewstateserializer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_viewstateserializer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_viewstateserializer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_viewstateserializer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_viewstateserializer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_viewstateserializer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_viewstateserializer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_viewstateserializer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_viewstateserializer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_viewstateserializer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_viewstateserializer_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_viewstateserializer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_viewstateserializer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_viewstateserializer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_viewstateserializer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_viewstateserializer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_viewstateserializer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_viewstateserializer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_viewstateserializer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_viewstateserializer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_viewstateserializer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_viewstateserializer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_viewstateserializer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_viewstateserializer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_viewstateserializer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_viewstateserializer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstateserializer_dynamic_property_names\n");
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

QBindingStorage* k_viewstateserializer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_viewstateserializer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_viewstateserializer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_viewstateserializer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_viewstateserializer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_viewstateserializer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_viewstateserializer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_viewstateserializer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_viewstateserializer_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_viewstateserializer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_viewstateserializer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_viewstateserializer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_viewstateserializer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_viewstateserializer_event(void* self, void* event) {
    return KViewStateSerializer_Event((KViewStateSerializer*)self, (QEvent*)event);
}

bool k_viewstateserializer_qbase_event(void* self, void* event) {
    return KViewStateSerializer_QBaseEvent((KViewStateSerializer*)self, (QEvent*)event);
}

void k_viewstateserializer_on_event(void* self, bool (*callback)(void*, void*)) {
    KViewStateSerializer_OnEvent((KViewStateSerializer*)self, (intptr_t)callback);
}

bool k_viewstateserializer_event_filter(void* self, void* watched, void* event) {
    return KViewStateSerializer_EventFilter((KViewStateSerializer*)self, (QObject*)watched, (QEvent*)event);
}

bool k_viewstateserializer_qbase_event_filter(void* self, void* watched, void* event) {
    return KViewStateSerializer_QBaseEventFilter((KViewStateSerializer*)self, (QObject*)watched, (QEvent*)event);
}

void k_viewstateserializer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KViewStateSerializer_OnEventFilter((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_timer_event(void* self, void* event) {
    KViewStateSerializer_TimerEvent((KViewStateSerializer*)self, (QTimerEvent*)event);
}

void k_viewstateserializer_qbase_timer_event(void* self, void* event) {
    KViewStateSerializer_QBaseTimerEvent((KViewStateSerializer*)self, (QTimerEvent*)event);
}

void k_viewstateserializer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KViewStateSerializer_OnTimerEvent((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_child_event(void* self, void* event) {
    KViewStateSerializer_ChildEvent((KViewStateSerializer*)self, (QChildEvent*)event);
}

void k_viewstateserializer_qbase_child_event(void* self, void* event) {
    KViewStateSerializer_QBaseChildEvent((KViewStateSerializer*)self, (QChildEvent*)event);
}

void k_viewstateserializer_on_child_event(void* self, void (*callback)(void*, void*)) {
    KViewStateSerializer_OnChildEvent((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_custom_event(void* self, void* event) {
    KViewStateSerializer_CustomEvent((KViewStateSerializer*)self, (QEvent*)event);
}

void k_viewstateserializer_qbase_custom_event(void* self, void* event) {
    KViewStateSerializer_QBaseCustomEvent((KViewStateSerializer*)self, (QEvent*)event);
}

void k_viewstateserializer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KViewStateSerializer_OnCustomEvent((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_connect_notify(void* self, void* signal) {
    KViewStateSerializer_ConnectNotify((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

void k_viewstateserializer_qbase_connect_notify(void* self, void* signal) {
    KViewStateSerializer_QBaseConnectNotify((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

void k_viewstateserializer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KViewStateSerializer_OnConnectNotify((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_disconnect_notify(void* self, void* signal) {
    KViewStateSerializer_DisconnectNotify((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

void k_viewstateserializer_qbase_disconnect_notify(void* self, void* signal) {
    KViewStateSerializer_QBaseDisconnectNotify((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

void k_viewstateserializer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KViewStateSerializer_OnDisconnectNotify((KViewStateSerializer*)self, (intptr_t)callback);
}

QObject* k_viewstateserializer_sender(void* self) {
    return KViewStateSerializer_Sender((KViewStateSerializer*)self);
}

QObject* k_viewstateserializer_qbase_sender(void* self) {
    return KViewStateSerializer_QBaseSender((KViewStateSerializer*)self);
}

void k_viewstateserializer_on_sender(void* self, QObject* (*callback)()) {
    KViewStateSerializer_OnSender((KViewStateSerializer*)self, (intptr_t)callback);
}

int32_t k_viewstateserializer_sender_signal_index(void* self) {
    return KViewStateSerializer_SenderSignalIndex((KViewStateSerializer*)self);
}

int32_t k_viewstateserializer_qbase_sender_signal_index(void* self) {
    return KViewStateSerializer_QBaseSenderSignalIndex((KViewStateSerializer*)self);
}

void k_viewstateserializer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KViewStateSerializer_OnSenderSignalIndex((KViewStateSerializer*)self, (intptr_t)callback);
}

int32_t k_viewstateserializer_receivers(void* self, const char* signal) {
    return KViewStateSerializer_Receivers((KViewStateSerializer*)self, signal);
}

int32_t k_viewstateserializer_qbase_receivers(void* self, const char* signal) {
    return KViewStateSerializer_QBaseReceivers((KViewStateSerializer*)self, signal);
}

void k_viewstateserializer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KViewStateSerializer_OnReceivers((KViewStateSerializer*)self, (intptr_t)callback);
}

bool k_viewstateserializer_is_signal_connected(void* self, void* signal) {
    return KViewStateSerializer_IsSignalConnected((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

bool k_viewstateserializer_qbase_is_signal_connected(void* self, void* signal) {
    return KViewStateSerializer_QBaseIsSignalConnected((KViewStateSerializer*)self, (QMetaMethod*)signal);
}

void k_viewstateserializer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KViewStateSerializer_OnIsSignalConnected((KViewStateSerializer*)self, (intptr_t)callback);
}

void k_viewstateserializer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_viewstateserializer_delete(void* self) {
    KViewStateSerializer_Delete((KViewStateSerializer*)(self));
}
