#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqwidget.hpp"
#include "libqdatawidgetmapper.hpp"
#include "libqdatawidgetmapper.h"

QDataWidgetMapper* q_datawidgetmapper_new() {
    return QDataWidgetMapper_new();
}

QDataWidgetMapper* q_datawidgetmapper_new2(void* parent) {
    return QDataWidgetMapper_new2((QObject*)parent);
}

const QMetaObject* q_datawidgetmapper_meta_object(void* self) {
    return QDataWidgetMapper_MetaObject((QDataWidgetMapper*)self);
}

void* q_datawidgetmapper_metacast(void* self, const char* param1) {
    return QDataWidgetMapper_Metacast((QDataWidgetMapper*)self, param1);
}

int32_t q_datawidgetmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDataWidgetMapper_Metacall((QDataWidgetMapper*)self, param1, param2, param3);
}

void q_datawidgetmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDataWidgetMapper_OnMetacall((QDataWidgetMapper*)self, (intptr_t)callback);
}

int32_t q_datawidgetmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDataWidgetMapper_QBaseMetacall((QDataWidgetMapper*)self, param1, param2, param3);
}

const char* q_datawidgetmapper_tr(const char* s) {
    libqt_string _str = QDataWidgetMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datawidgetmapper_set_model(void* self, void* model) {
    QDataWidgetMapper_SetModel((QDataWidgetMapper*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_datawidgetmapper_model(void* self) {
    return QDataWidgetMapper_Model((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_set_item_delegate(void* self, void* delegate) {
    QDataWidgetMapper_SetItemDelegate((QDataWidgetMapper*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_datawidgetmapper_item_delegate(void* self) {
    return QDataWidgetMapper_ItemDelegate((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_set_root_index(void* self, void* index) {
    QDataWidgetMapper_SetRootIndex((QDataWidgetMapper*)self, (QModelIndex*)index);
}

QModelIndex* q_datawidgetmapper_root_index(void* self) {
    return QDataWidgetMapper_RootIndex((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_set_orientation(void* self, int32_t aOrientation) {
    QDataWidgetMapper_SetOrientation((QDataWidgetMapper*)self, aOrientation);
}

int32_t q_datawidgetmapper_orientation(void* self) {
    return QDataWidgetMapper_Orientation((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_set_submit_policy(void* self, int32_t policy) {
    QDataWidgetMapper_SetSubmitPolicy((QDataWidgetMapper*)self, policy);
}

int32_t q_datawidgetmapper_submit_policy(void* self) {
    return QDataWidgetMapper_SubmitPolicy((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_add_mapping(void* self, void* widget, int section) {
    QDataWidgetMapper_AddMapping((QDataWidgetMapper*)self, (QWidget*)widget, section);
}

void q_datawidgetmapper_add_mapping2(void* self, void* widget, int section, const char* propertyName) {
    QDataWidgetMapper_AddMapping2((QDataWidgetMapper*)self, (QWidget*)widget, section, qstring(propertyName));
}

void q_datawidgetmapper_remove_mapping(void* self, void* widget) {
    QDataWidgetMapper_RemoveMapping((QDataWidgetMapper*)self, (QWidget*)widget);
}

int32_t q_datawidgetmapper_mapped_section(void* self, void* widget) {
    return QDataWidgetMapper_MappedSection((QDataWidgetMapper*)self, (QWidget*)widget);
}

char* q_datawidgetmapper_mapped_property_name(void* self, void* widget) {
    libqt_string _str = QDataWidgetMapper_MappedPropertyName((QDataWidgetMapper*)self, (QWidget*)widget);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_datawidgetmapper_mapped_widget_at(void* self, int section) {
    return QDataWidgetMapper_MappedWidgetAt((QDataWidgetMapper*)self, section);
}

void q_datawidgetmapper_clear_mapping(void* self) {
    QDataWidgetMapper_ClearMapping((QDataWidgetMapper*)self);
}

int32_t q_datawidgetmapper_current_index(void* self) {
    return QDataWidgetMapper_CurrentIndex((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_revert(void* self) {
    QDataWidgetMapper_Revert((QDataWidgetMapper*)self);
}

bool q_datawidgetmapper_submit(void* self) {
    return QDataWidgetMapper_Submit((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_to_first(void* self) {
    QDataWidgetMapper_ToFirst((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_to_last(void* self) {
    QDataWidgetMapper_ToLast((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_to_next(void* self) {
    QDataWidgetMapper_ToNext((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_to_previous(void* self) {
    QDataWidgetMapper_ToPrevious((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_set_current_index(void* self, int index) {
    QDataWidgetMapper_SetCurrentIndex((QDataWidgetMapper*)self, index);
}

void q_datawidgetmapper_on_set_current_index(void* self, void (*callback)(void*, int)) {
    QDataWidgetMapper_OnSetCurrentIndex((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_qbase_set_current_index(void* self, int index) {
    QDataWidgetMapper_QBaseSetCurrentIndex((QDataWidgetMapper*)self, index);
}

void q_datawidgetmapper_set_current_model_index(void* self, void* index) {
    QDataWidgetMapper_SetCurrentModelIndex((QDataWidgetMapper*)self, (QModelIndex*)index);
}

void q_datawidgetmapper_current_index_changed(void* self, int index) {
    QDataWidgetMapper_CurrentIndexChanged((QDataWidgetMapper*)self, index);
}

void q_datawidgetmapper_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QDataWidgetMapper_Connect_CurrentIndexChanged((QDataWidgetMapper*)self, (intptr_t)callback);
}

const char* q_datawidgetmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QDataWidgetMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datawidgetmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDataWidgetMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datawidgetmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_datawidgetmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_datawidgetmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_datawidgetmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_datawidgetmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_datawidgetmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_datawidgetmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_datawidgetmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_datawidgetmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_datawidgetmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_datawidgetmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_datawidgetmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_datawidgetmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_datawidgetmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_datawidgetmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_datawidgetmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_datawidgetmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_datawidgetmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_datawidgetmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_datawidgetmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_datawidgetmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_datawidgetmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_datawidgetmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_datawidgetmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_datawidgetmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_datawidgetmapper_dynamic_property_names");
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

QBindingStorage* q_datawidgetmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_datawidgetmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_datawidgetmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_datawidgetmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_datawidgetmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_datawidgetmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_datawidgetmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_datawidgetmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_datawidgetmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_datawidgetmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_datawidgetmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_datawidgetmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_datawidgetmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_datawidgetmapper_event(void* self, void* event) {
    return QDataWidgetMapper_Event((QDataWidgetMapper*)self, (QEvent*)event);
}

bool q_datawidgetmapper_qbase_event(void* self, void* event) {
    return QDataWidgetMapper_QBaseEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

void q_datawidgetmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QDataWidgetMapper_OnEvent((QDataWidgetMapper*)self, (intptr_t)callback);
}

bool q_datawidgetmapper_event_filter(void* self, void* watched, void* event) {
    return QDataWidgetMapper_EventFilter((QDataWidgetMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_datawidgetmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QDataWidgetMapper_QBaseEventFilter((QDataWidgetMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_datawidgetmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDataWidgetMapper_OnEventFilter((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_timer_event(void* self, void* event) {
    QDataWidgetMapper_TimerEvent((QDataWidgetMapper*)self, (QTimerEvent*)event);
}

void q_datawidgetmapper_qbase_timer_event(void* self, void* event) {
    QDataWidgetMapper_QBaseTimerEvent((QDataWidgetMapper*)self, (QTimerEvent*)event);
}

void q_datawidgetmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDataWidgetMapper_OnTimerEvent((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_child_event(void* self, void* event) {
    QDataWidgetMapper_ChildEvent((QDataWidgetMapper*)self, (QChildEvent*)event);
}

void q_datawidgetmapper_qbase_child_event(void* self, void* event) {
    QDataWidgetMapper_QBaseChildEvent((QDataWidgetMapper*)self, (QChildEvent*)event);
}

void q_datawidgetmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDataWidgetMapper_OnChildEvent((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_custom_event(void* self, void* event) {
    QDataWidgetMapper_CustomEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

void q_datawidgetmapper_qbase_custom_event(void* self, void* event) {
    QDataWidgetMapper_QBaseCustomEvent((QDataWidgetMapper*)self, (QEvent*)event);
}

void q_datawidgetmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDataWidgetMapper_OnCustomEvent((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_connect_notify(void* self, void* signal) {
    QDataWidgetMapper_ConnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

void q_datawidgetmapper_qbase_connect_notify(void* self, void* signal) {
    QDataWidgetMapper_QBaseConnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

void q_datawidgetmapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDataWidgetMapper_OnConnectNotify((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_disconnect_notify(void* self, void* signal) {
    QDataWidgetMapper_DisconnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

void q_datawidgetmapper_qbase_disconnect_notify(void* self, void* signal) {
    QDataWidgetMapper_QBaseDisconnectNotify((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

void q_datawidgetmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDataWidgetMapper_OnDisconnectNotify((QDataWidgetMapper*)self, (intptr_t)callback);
}

QObject* q_datawidgetmapper_sender(void* self) {
    return QDataWidgetMapper_Sender((QDataWidgetMapper*)self);
}

QObject* q_datawidgetmapper_qbase_sender(void* self) {
    return QDataWidgetMapper_QBaseSender((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_on_sender(void* self, QObject* (*callback)()) {
    QDataWidgetMapper_OnSender((QDataWidgetMapper*)self, (intptr_t)callback);
}

int32_t q_datawidgetmapper_sender_signal_index(void* self) {
    return QDataWidgetMapper_SenderSignalIndex((QDataWidgetMapper*)self);
}

int32_t q_datawidgetmapper_qbase_sender_signal_index(void* self) {
    return QDataWidgetMapper_QBaseSenderSignalIndex((QDataWidgetMapper*)self);
}

void q_datawidgetmapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDataWidgetMapper_OnSenderSignalIndex((QDataWidgetMapper*)self, (intptr_t)callback);
}

int32_t q_datawidgetmapper_receivers(void* self, const char* signal) {
    return QDataWidgetMapper_Receivers((QDataWidgetMapper*)self, signal);
}

int32_t q_datawidgetmapper_qbase_receivers(void* self, const char* signal) {
    return QDataWidgetMapper_QBaseReceivers((QDataWidgetMapper*)self, signal);
}

void q_datawidgetmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDataWidgetMapper_OnReceivers((QDataWidgetMapper*)self, (intptr_t)callback);
}

bool q_datawidgetmapper_is_signal_connected(void* self, void* signal) {
    return QDataWidgetMapper_IsSignalConnected((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

bool q_datawidgetmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QDataWidgetMapper_QBaseIsSignalConnected((QDataWidgetMapper*)self, (QMetaMethod*)signal);
}

void q_datawidgetmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDataWidgetMapper_OnIsSignalConnected((QDataWidgetMapper*)self, (intptr_t)callback);
}

void q_datawidgetmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_datawidgetmapper_delete(void* self) {
    QDataWidgetMapper_Delete((QDataWidgetMapper*)(self));
}
