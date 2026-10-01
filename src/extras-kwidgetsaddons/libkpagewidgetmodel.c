#include "libkpagemodel.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpagewidgetmodel.hpp"
#include "libkpagewidgetmodel.h"

KPageWidgetItem* k_pagewidgetitem_new(void* widget) {
    return KPageWidgetItem_New((QWidget*)widget);
}

KPageWidgetItem* k_pagewidgetitem_new2(void* widget, const char* name) {
    return KPageWidgetItem_New2((QWidget*)widget, qstring(name));
}

const QMetaObject* k_pagewidgetitem_meta_object(const void* self) {
    return KPageWidgetItem_MetaObject((KPageWidgetItem*)self);
}

void k_pagewidgetitem_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KPageWidgetItem_OnMetaObject((KPageWidgetItem*)self, (intptr_t)callback);
}

const QMetaObject* k_pagewidgetitem_super_meta_object(const void* self) {
    return KPageWidgetItem_SuperMetaObject((KPageWidgetItem*)self);
}

void* k_pagewidgetitem_metacast(void* self, const char* param1) {
    return KPageWidgetItem_Metacast((KPageWidgetItem*)self, param1);
}

void k_pagewidgetitem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPageWidgetItem_OnMetacast((KPageWidgetItem*)self, (intptr_t)callback);
}

void* k_pagewidgetitem_super_metacast(void* self, const char* param1) {
    return KPageWidgetItem_SuperMetacast((KPageWidgetItem*)self, param1);
}

int32_t k_pagewidgetitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidgetItem_Metacall((KPageWidgetItem*)self, param1, param2, param3);
}

void k_pagewidgetitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageWidgetItem_OnMetacall((KPageWidgetItem*)self, (intptr_t)callback);
}

int32_t k_pagewidgetitem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidgetItem_SuperMetacall((KPageWidgetItem*)self, param1, param2, param3);
}

const char* k_pagewidgetitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_pagewidgetitem_widget(const void* self) {
    return KPageWidgetItem_Widget((KPageWidgetItem*)self);
}

void k_pagewidgetitem_set_name(void* self, const char* name) {
    KPageWidgetItem_SetName((KPageWidgetItem*)self, qstring(name));
}

const char* k_pagewidgetitem_name(const void* self) {
    libqt_string _str = KPageWidgetItem_Name((KPageWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidgetitem_set_header(void* self, const char* header) {
    KPageWidgetItem_SetHeader((KPageWidgetItem*)self, qstring(header));
}

const char* k_pagewidgetitem_header(const void* self) {
    libqt_string _str = KPageWidgetItem_Header((KPageWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidgetitem_set_icon(void* self, const void* icon) {
    KPageWidgetItem_SetIcon((KPageWidgetItem*)self, (QIcon*)icon);
}

QIcon* k_pagewidgetitem_icon(const void* self) {
    return KPageWidgetItem_Icon((KPageWidgetItem*)self);
}

void k_pagewidgetitem_set_checkable(void* self, bool checkable) {
    KPageWidgetItem_SetCheckable((KPageWidgetItem*)self, checkable);
}

bool k_pagewidgetitem_is_checkable(const void* self) {
    return KPageWidgetItem_IsCheckable((KPageWidgetItem*)self);
}

bool k_pagewidgetitem_is_checked(const void* self) {
    return KPageWidgetItem_IsChecked((KPageWidgetItem*)self);
}

bool k_pagewidgetitem_is_enabled(const void* self) {
    return KPageWidgetItem_IsEnabled((KPageWidgetItem*)self);
}

bool k_pagewidgetitem_is_header_visible(const void* self) {
    return KPageWidgetItem_IsHeaderVisible((KPageWidgetItem*)self);
}

void k_pagewidgetitem_set_header_visible(void* self, bool visible) {
    KPageWidgetItem_SetHeaderVisible((KPageWidgetItem*)self, visible);
}

libqt_list /* of QAction* */ k_pagewidgetitem_actions(const void* self) {
    libqt_list _arr = KPageWidgetItem_Actions((KPageWidgetItem*)self);
    return _arr;
}

void k_pagewidgetitem_set_actions(void* self, libqt_list /* of QAction* */ actions) {
    KPageWidgetItem_SetActions((KPageWidgetItem*)self, actions);
}

void k_pagewidgetitem_set_enabled(void* self, bool enabled) {
    KPageWidgetItem_SetEnabled((KPageWidgetItem*)self, enabled);
}

void k_pagewidgetitem_set_checked(void* self, bool checked) {
    KPageWidgetItem_SetChecked((KPageWidgetItem*)self, checked);
}

void k_pagewidgetitem_changed(void* self) {
    KPageWidgetItem_Changed((KPageWidgetItem*)self);
}

void k_pagewidgetitem_on_changed(void* self, void (*callback)(void*)) {
    KPageWidgetItem_Connect_Changed((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_toggled(void* self, bool checked) {
    KPageWidgetItem_Toggled((KPageWidgetItem*)self, checked);
}

void k_pagewidgetitem_on_toggled(void* self, void (*callback)(void*, bool)) {
    KPageWidgetItem_Connect_Toggled((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_actions_changed(void* self) {
    KPageWidgetItem_ActionsChanged((KPageWidgetItem*)self);
}

void k_pagewidgetitem_on_actions_changed(void* self, void (*callback)(void*)) {
    KPageWidgetItem_Connect_ActionsChanged((KPageWidgetItem*)self, (intptr_t)callback);
}

const char* k_pagewidgetitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidgetitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidgetitem_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidgetitem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pagewidgetitem_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pagewidgetitem_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pagewidgetitem_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pagewidgetitem_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pagewidgetitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pagewidgetitem_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pagewidgetitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pagewidgetitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_pagewidgetitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_pagewidgetitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pagewidgetitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pagewidgetitem_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pagewidgetitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_pagewidgetitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pagewidgetitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pagewidgetitem_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_pagewidgetitem_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pagewidgetitem_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pagewidgetitem_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_pagewidgetitem_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pagewidgetitem_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_pagewidgetitem_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_pagewidgetitem_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_pagewidgetitem_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pagewidgetitem_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pagewidgetitem_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pagewidgetitem_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pagewidgetitem_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagewidgetitem_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_pagewidgetitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pagewidgetitem_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pagewidgetitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pagewidgetitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pagewidgetitem_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pagewidgetitem_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pagewidgetitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_pagewidgetitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_pagewidgetitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_pagewidgetitem_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_pagewidgetitem_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pagewidgetitem_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_pagewidgetitem_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_pagewidgetitem_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_pagewidgetitem_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_pagewidgetitem_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_pagewidgetitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pagewidgetitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pagewidgetitem_event(void* self, void* event) {
    return KPageWidgetItem_Event((KPageWidgetItem*)self, (QEvent*)event);
}

bool k_pagewidgetitem_super_event(void* self, void* event) {
    return KPageWidgetItem_SuperEvent((KPageWidgetItem*)self, (QEvent*)event);
}

void k_pagewidgetitem_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageWidgetItem_OnEvent((KPageWidgetItem*)self, (intptr_t)callback);
}

bool k_pagewidgetitem_event_filter(void* self, void* watched, void* event) {
    return KPageWidgetItem_EventFilter((KPageWidgetItem*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pagewidgetitem_super_event_filter(void* self, void* watched, void* event) {
    return KPageWidgetItem_SuperEventFilter((KPageWidgetItem*)self, (QObject*)watched, (QEvent*)event);
}

void k_pagewidgetitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageWidgetItem_OnEventFilter((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_timer_event(void* self, void* event) {
    KPageWidgetItem_TimerEvent((KPageWidgetItem*)self, (QTimerEvent*)event);
}

void k_pagewidgetitem_super_timer_event(void* self, void* event) {
    KPageWidgetItem_SuperTimerEvent((KPageWidgetItem*)self, (QTimerEvent*)event);
}

void k_pagewidgetitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetItem_OnTimerEvent((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_child_event(void* self, void* event) {
    KPageWidgetItem_ChildEvent((KPageWidgetItem*)self, (QChildEvent*)event);
}

void k_pagewidgetitem_super_child_event(void* self, void* event) {
    KPageWidgetItem_SuperChildEvent((KPageWidgetItem*)self, (QChildEvent*)event);
}

void k_pagewidgetitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetItem_OnChildEvent((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_custom_event(void* self, void* event) {
    KPageWidgetItem_CustomEvent((KPageWidgetItem*)self, (QEvent*)event);
}

void k_pagewidgetitem_super_custom_event(void* self, void* event) {
    KPageWidgetItem_SuperCustomEvent((KPageWidgetItem*)self, (QEvent*)event);
}

void k_pagewidgetitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetItem_OnCustomEvent((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_connect_notify(void* self, const void* signal) {
    KPageWidgetItem_ConnectNotify((KPageWidgetItem*)self, (QMetaMethod*)signal);
}

void k_pagewidgetitem_super_connect_notify(void* self, const void* signal) {
    KPageWidgetItem_SuperConnectNotify((KPageWidgetItem*)self, (QMetaMethod*)signal);
}

void k_pagewidgetitem_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KPageWidgetItem_OnConnectNotify((KPageWidgetItem*)self, (intptr_t)callback);
}

void k_pagewidgetitem_disconnect_notify(void* self, const void* signal) {
    KPageWidgetItem_DisconnectNotify((KPageWidgetItem*)self, (QMetaMethod*)signal);
}

void k_pagewidgetitem_super_disconnect_notify(void* self, const void* signal) {
    KPageWidgetItem_SuperDisconnectNotify((KPageWidgetItem*)self, (QMetaMethod*)signal);
}

void k_pagewidgetitem_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KPageWidgetItem_OnDisconnectNotify((KPageWidgetItem*)self, (intptr_t)callback);
}

QObject* k_pagewidgetitem_sender(const void* self) {
    return KPageWidgetItem_Sender((KPageWidgetItem*)self);
}

int32_t k_pagewidgetitem_sender_signal_index(const void* self) {
    return KPageWidgetItem_SenderSignalIndex((KPageWidgetItem*)self);
}

int32_t k_pagewidgetitem_receivers(const void* self, const char* signal) {
    return KPageWidgetItem_Receivers((KPageWidgetItem*)self, signal);
}

bool k_pagewidgetitem_is_signal_connected(const void* self, const void* signal) {
    return KPageWidgetItem_IsSignalConnected((KPageWidgetItem*)self, (QMetaMethod*)signal);
}

void k_pagewidgetitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pagewidgetitem_delete(void* self) {
    KPageWidgetItem_Delete((KPageWidgetItem*)(self));
}

KPageWidgetModel* k_pagewidgetmodel_new() {
    return KPageWidgetModel_New();
}

KPageWidgetModel* k_pagewidgetmodel_new2(void* parent) {
    return KPageWidgetModel_New2((QObject*)parent);
}

const QMetaObject* k_pagewidgetmodel_meta_object(const void* self) {
    return KPageWidgetModel_MetaObject((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KPageWidgetModel_OnMetaObject((KPageWidgetModel*)self, (intptr_t)callback);
}

const QMetaObject* k_pagewidgetmodel_super_meta_object(const void* self) {
    return KPageWidgetModel_SuperMetaObject((KPageWidgetModel*)self);
}

void* k_pagewidgetmodel_metacast(void* self, const char* param1) {
    return KPageWidgetModel_Metacast((KPageWidgetModel*)self, param1);
}

void k_pagewidgetmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPageWidgetModel_OnMetacast((KPageWidgetModel*)self, (intptr_t)callback);
}

void* k_pagewidgetmodel_super_metacast(void* self, const char* param1) {
    return KPageWidgetModel_SuperMetacast((KPageWidgetModel*)self, param1);
}

int32_t k_pagewidgetmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidgetModel_Metacall((KPageWidgetModel*)self, param1, param2, param3);
}

void k_pagewidgetmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageWidgetModel_OnMetacall((KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidgetModel_SuperMetacall((KPageWidgetModel*)self, param1, param2, param3);
}

const char* k_pagewidgetmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPageWidgetItem* k_pagewidgetmodel_add_page(void* self, void* widget, const char* name) {
    return KPageWidgetModel_AddPage((KPageWidgetModel*)self, (QWidget*)widget, qstring(name));
}

void k_pagewidgetmodel_add_page2(void* self, void* item) {
    KPageWidgetModel_AddPage2((KPageWidgetModel*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagewidgetmodel_insert_page(void* self, void* before, void* widget, const char* name) {
    return KPageWidgetModel_InsertPage((KPageWidgetModel*)self, (KPageWidgetItem*)before, (QWidget*)widget, qstring(name));
}

void k_pagewidgetmodel_insert_page2(void* self, void* before, void* item) {
    KPageWidgetModel_InsertPage2((KPageWidgetModel*)self, (KPageWidgetItem*)before, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagewidgetmodel_add_sub_page(void* self, void* parent, void* widget, const char* name) {
    return KPageWidgetModel_AddSubPage((KPageWidgetModel*)self, (KPageWidgetItem*)parent, (QWidget*)widget, qstring(name));
}

void k_pagewidgetmodel_add_sub_page2(void* self, void* parent, void* item) {
    KPageWidgetModel_AddSubPage2((KPageWidgetModel*)self, (KPageWidgetItem*)parent, (KPageWidgetItem*)item);
}

void k_pagewidgetmodel_remove_page(void* self, void* item) {
    KPageWidgetModel_RemovePage((KPageWidgetModel*)self, (KPageWidgetItem*)item);
}

int32_t k_pagewidgetmodel_column_count(const void* self, const void* parent) {
    return KPageWidgetModel_ColumnCount((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnColumnCount((KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_super_column_count(const void* self, const void* parent) {
    return KPageWidgetModel_SuperColumnCount((KPageWidgetModel*)self, (QModelIndex*)parent);
}

QVariant* k_pagewidgetmodel_data(const void* self, const void* index, int role) {
    return KPageWidgetModel_Data((KPageWidgetModel*)self, (QModelIndex*)index, role);
}

void k_pagewidgetmodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KPageWidgetModel_OnData((KPageWidgetModel*)self, (intptr_t)callback);
}

QVariant* k_pagewidgetmodel_super_data(const void* self, const void* index, int role) {
    return KPageWidgetModel_SuperData((KPageWidgetModel*)self, (QModelIndex*)index, role);
}

bool k_pagewidgetmodel_set_data(void* self, const void* index, const void* value, int role) {
    return KPageWidgetModel_SetData((KPageWidgetModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_pagewidgetmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KPageWidgetModel_OnSetData((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KPageWidgetModel_SuperSetData((KPageWidgetModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

int32_t k_pagewidgetmodel_flags(const void* self, const void* index) {
    return KPageWidgetModel_Flags((KPageWidgetModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnFlags((KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_super_flags(const void* self, const void* index) {
    return KPageWidgetModel_SuperFlags((KPageWidgetModel*)self, (QModelIndex*)index);
}

QModelIndex* k_pagewidgetmodel_index(const void* self, int row, int column, const void* parent) {
    return KPageWidgetModel_Index((KPageWidgetModel*)self, row, column, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KPageWidgetModel_OnIndex((KPageWidgetModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagewidgetmodel_super_index(const void* self, int row, int column, const void* parent) {
    return KPageWidgetModel_SuperIndex((KPageWidgetModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_pagewidgetmodel_parent(const void* self, const void* index) {
    return KPageWidgetModel_Parent((KPageWidgetModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnParent((KPageWidgetModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagewidgetmodel_super_parent(const void* self, const void* index) {
    return KPageWidgetModel_SuperParent((KPageWidgetModel*)self, (QModelIndex*)index);
}

int32_t k_pagewidgetmodel_row_count(const void* self, const void* parent) {
    return KPageWidgetModel_RowCount((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnRowCount((KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_super_row_count(const void* self, const void* parent) {
    return KPageWidgetModel_SuperRowCount((KPageWidgetModel*)self, (QModelIndex*)parent);
}

KPageWidgetItem* k_pagewidgetmodel_item(const void* self, const void* index) {
    return KPageWidgetModel_Item((KPageWidgetModel*)self, (QModelIndex*)index);
}

QModelIndex* k_pagewidgetmodel_index2(const void* self, const void* item) {
    return KPageWidgetModel_Index2((KPageWidgetModel*)self, (KPageWidgetItem*)item);
}

void k_pagewidgetmodel_toggled(void* self, void* page, bool checked) {
    KPageWidgetModel_Toggled((KPageWidgetModel*)self, (KPageWidgetItem*)page, checked);
}

void k_pagewidgetmodel_on_toggled(void* self, void (*callback)(void*, void*, bool)) {
    KPageWidgetModel_Connect_Toggled((KPageWidgetModel*)self, (intptr_t)callback);
}

const char* k_pagewidgetmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidgetmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pagewidgetmodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_pagewidgetmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_pagewidgetmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_pagewidgetmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_pagewidgetmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_pagewidgetmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagewidgetmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagewidgetmodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_pagewidgetmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_pagewidgetmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_pagewidgetmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_pagewidgetmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_pagewidgetmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_pagewidgetmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_pagewidgetmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_pagewidgetmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_pagewidgetmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_pagewidgetmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_pagewidgetmodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidgetmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pagewidgetmodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pagewidgetmodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pagewidgetmodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pagewidgetmodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pagewidgetmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pagewidgetmodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pagewidgetmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pagewidgetmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_pagewidgetmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_pagewidgetmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pagewidgetmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pagewidgetmodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pagewidgetmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_pagewidgetmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pagewidgetmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pagewidgetmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_pagewidgetmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pagewidgetmodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pagewidgetmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_pagewidgetmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pagewidgetmodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_pagewidgetmodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_pagewidgetmodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_pagewidgetmodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pagewidgetmodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pagewidgetmodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pagewidgetmodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pagewidgetmodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagewidgetmodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_pagewidgetmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pagewidgetmodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pagewidgetmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pagewidgetmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pagewidgetmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_pagewidgetmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_pagewidgetmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_pagewidgetmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_pagewidgetmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pagewidgetmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_pagewidgetmodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_pagewidgetmodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_pagewidgetmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_pagewidgetmodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_pagewidgetmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pagewidgetmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_pagewidgetmodel_sibling(const void* self, int row, int column, const void* idx) {
    return KPageWidgetModel_Sibling((KPageWidgetModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_pagewidgetmodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KPageWidgetModel_SuperSibling((KPageWidgetModel*)self, row, column, (QModelIndex*)idx);
}

void k_pagewidgetmodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KPageWidgetModel_OnSibling((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_has_children(const void* self, const void* parent) {
    return KPageWidgetModel_HasChildren((KPageWidgetModel*)self, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_has_children(const void* self, const void* parent) {
    return KPageWidgetModel_SuperHasChildren((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_has_children(const void* self, bool (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnHasChildren((const KPageWidgetModel*)self, (intptr_t)callback);
}

QVariant* k_pagewidgetmodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KPageWidgetModel_HeaderData((KPageWidgetModel*)self, section, orientation, role);
}

QVariant* k_pagewidgetmodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KPageWidgetModel_SuperHeaderData((KPageWidgetModel*)self, section, orientation, role);
}

void k_pagewidgetmodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KPageWidgetModel_OnHeaderData((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KPageWidgetModel_SetHeaderData((KPageWidgetModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_pagewidgetmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KPageWidgetModel_SuperSetHeaderData((KPageWidgetModel*)self, section, orientation, (QVariant*)value, role);
}

void k_pagewidgetmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KPageWidgetModel_OnSetHeaderData((KPageWidgetModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_pagewidgetmodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KPageWidgetModel_ItemData((KPageWidgetModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_pagewidgetmodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KPageWidgetModel_SuperItemData((KPageWidgetModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_pagewidgetmodel_on_item_data(const void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnItemData((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_pagewidgetmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_pagewidgetmodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = KPageWidgetModel_SetItemData((KPageWidgetModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_pagewidgetmodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_pagewidgetmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_pagewidgetmodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = KPageWidgetModel_SuperSetItemData((KPageWidgetModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_pagewidgetmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KPageWidgetModel_OnSetItemData((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_clear_item_data(void* self, const void* index) {
    return KPageWidgetModel_ClearItemData((KPageWidgetModel*)self, (QModelIndex*)index);
}

bool k_pagewidgetmodel_super_clear_item_data(void* self, const void* index) {
    return KPageWidgetModel_SuperClearItemData((KPageWidgetModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KPageWidgetModel_OnClearItemData((KPageWidgetModel*)self, (intptr_t)callback);
}

const char** k_pagewidgetmodel_mime_types(const void* self) {
    libqt_list _arr = KPageWidgetModel_MimeTypes((KPageWidgetModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagewidgetmodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_pagewidgetmodel_super_mime_types(const void* self) {
    libqt_list _arr = KPageWidgetModel_SuperMimeTypes((KPageWidgetModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pagewidgetmodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_pagewidgetmodel_on_mime_types(const void* self, const char** (*callback)(const void*)) {
    KPageWidgetModel_OnMimeTypes((const KPageWidgetModel*)self, (intptr_t)callback);
}

QMimeData* k_pagewidgetmodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KPageWidgetModel_MimeData((KPageWidgetModel*)self, indexes);
}

QMimeData* k_pagewidgetmodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KPageWidgetModel_SuperMimeData((KPageWidgetModel*)self, indexes);
}

void k_pagewidgetmodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KPageWidgetModel_OnMimeData((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KPageWidgetModel_CanDropMimeData((KPageWidgetModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KPageWidgetModel_SuperCanDropMimeData((KPageWidgetModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KPageWidgetModel_OnCanDropMimeData((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KPageWidgetModel_DropMimeData((KPageWidgetModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KPageWidgetModel_SuperDropMimeData((KPageWidgetModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KPageWidgetModel_OnDropMimeData((KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_supported_drop_actions(const void* self) {
    return KPageWidgetModel_SupportedDropActions((KPageWidgetModel*)self);
}

int32_t k_pagewidgetmodel_super_supported_drop_actions(const void* self) {
    return KPageWidgetModel_SuperSupportedDropActions((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*)) {
    KPageWidgetModel_OnSupportedDropActions((const KPageWidgetModel*)self, (intptr_t)callback);
}

int32_t k_pagewidgetmodel_supported_drag_actions(const void* self) {
    return KPageWidgetModel_SupportedDragActions((KPageWidgetModel*)self);
}

int32_t k_pagewidgetmodel_super_supported_drag_actions(const void* self) {
    return KPageWidgetModel_SuperSupportedDragActions((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*)) {
    KPageWidgetModel_OnSupportedDragActions((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KPageWidgetModel_InsertRows((KPageWidgetModel*)self, row, count, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KPageWidgetModel_SuperInsertRows((KPageWidgetModel*)self, row, count, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KPageWidgetModel_OnInsertRows((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KPageWidgetModel_InsertColumns((KPageWidgetModel*)self, column, count, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KPageWidgetModel_SuperInsertColumns((KPageWidgetModel*)self, column, count, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KPageWidgetModel_OnInsertColumns((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KPageWidgetModel_RemoveRows((KPageWidgetModel*)self, row, count, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KPageWidgetModel_SuperRemoveRows((KPageWidgetModel*)self, row, count, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KPageWidgetModel_OnRemoveRows((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KPageWidgetModel_RemoveColumns((KPageWidgetModel*)self, column, count, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KPageWidgetModel_SuperRemoveColumns((KPageWidgetModel*)self, column, count, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KPageWidgetModel_OnRemoveColumns((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KPageWidgetModel_MoveRows((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagewidgetmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KPageWidgetModel_SuperMoveRows((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_pagewidgetmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KPageWidgetModel_OnMoveRows((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KPageWidgetModel_MoveColumns((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_pagewidgetmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KPageWidgetModel_SuperMoveColumns((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_pagewidgetmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KPageWidgetModel_OnMoveColumns((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_fetch_more(void* self, const void* parent) {
    KPageWidgetModel_FetchMore((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_super_fetch_more(void* self, const void* parent) {
    KPageWidgetModel_SuperFetchMore((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KPageWidgetModel_OnFetchMore((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_can_fetch_more(const void* self, const void* parent) {
    return KPageWidgetModel_CanFetchMore((KPageWidgetModel*)self, (QModelIndex*)parent);
}

bool k_pagewidgetmodel_super_can_fetch_more(const void* self, const void* parent) {
    return KPageWidgetModel_SuperCanFetchMore((KPageWidgetModel*)self, (QModelIndex*)parent);
}

void k_pagewidgetmodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnCanFetchMore((const KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_sort(void* self, int column, int32_t order) {
    KPageWidgetModel_Sort((KPageWidgetModel*)self, column, order);
}

void k_pagewidgetmodel_super_sort(void* self, int column, int32_t order) {
    KPageWidgetModel_SuperSort((KPageWidgetModel*)self, column, order);
}

void k_pagewidgetmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KPageWidgetModel_OnSort((KPageWidgetModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagewidgetmodel_buddy(const void* self, const void* index) {
    return KPageWidgetModel_Buddy((KPageWidgetModel*)self, (QModelIndex*)index);
}

QModelIndex* k_pagewidgetmodel_super_buddy(const void* self, const void* index) {
    return KPageWidgetModel_SuperBuddy((KPageWidgetModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnBuddy((const KPageWidgetModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_pagewidgetmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KPageWidgetModel_Match((KPageWidgetModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_pagewidgetmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KPageWidgetModel_SuperMatch((KPageWidgetModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_pagewidgetmodel_on_match(const void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KPageWidgetModel_OnMatch((const KPageWidgetModel*)self, (intptr_t)callback);
}

QSize* k_pagewidgetmodel_span(const void* self, const void* index) {
    return KPageWidgetModel_Span((KPageWidgetModel*)self, (QModelIndex*)index);
}

QSize* k_pagewidgetmodel_super_span(const void* self, const void* index) {
    return KPageWidgetModel_SuperSpan((KPageWidgetModel*)self, (QModelIndex*)index);
}

void k_pagewidgetmodel_on_span(const void* self, QSize* (*callback)(const void*, const void*)) {
    KPageWidgetModel_OnSpan((const KPageWidgetModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_pagewidgetmodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KPageWidgetModel_RoleNames((KPageWidgetModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_pagewidgetmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_pagewidgetmodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of int to char* */ k_pagewidgetmodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KPageWidgetModel_SuperRoleNames((KPageWidgetModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_pagewidgetmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_pagewidgetmodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void k_pagewidgetmodel_on_role_names(const void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    KPageWidgetModel_OnRoleNames((const KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KPageWidgetModel_MultiData((KPageWidgetModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_pagewidgetmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KPageWidgetModel_SuperMultiData((KPageWidgetModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_pagewidgetmodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*)) {
    KPageWidgetModel_OnMultiData((const KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_submit(void* self) {
    return KPageWidgetModel_Submit((KPageWidgetModel*)self);
}

bool k_pagewidgetmodel_super_submit(void* self) {
    return KPageWidgetModel_SuperSubmit((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_submit(void* self, bool (*callback)(void*)) {
    KPageWidgetModel_OnSubmit((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_revert(void* self) {
    KPageWidgetModel_Revert((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_super_revert(void* self) {
    KPageWidgetModel_SuperRevert((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_revert(void* self, void (*callback)(void*)) {
    KPageWidgetModel_OnRevert((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_reset_internal_data(void* self) {
    KPageWidgetModel_ResetInternalData((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_super_reset_internal_data(void* self) {
    KPageWidgetModel_SuperResetInternalData((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KPageWidgetModel_OnResetInternalData((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_event(void* self, void* event) {
    return KPageWidgetModel_Event((KPageWidgetModel*)self, (QEvent*)event);
}

bool k_pagewidgetmodel_super_event(void* self, void* event) {
    return KPageWidgetModel_SuperEvent((KPageWidgetModel*)self, (QEvent*)event);
}

void k_pagewidgetmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageWidgetModel_OnEvent((KPageWidgetModel*)self, (intptr_t)callback);
}

bool k_pagewidgetmodel_event_filter(void* self, void* watched, void* event) {
    return KPageWidgetModel_EventFilter((KPageWidgetModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pagewidgetmodel_super_event_filter(void* self, void* watched, void* event) {
    return KPageWidgetModel_SuperEventFilter((KPageWidgetModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_pagewidgetmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageWidgetModel_OnEventFilter((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_timer_event(void* self, void* event) {
    KPageWidgetModel_TimerEvent((KPageWidgetModel*)self, (QTimerEvent*)event);
}

void k_pagewidgetmodel_super_timer_event(void* self, void* event) {
    KPageWidgetModel_SuperTimerEvent((KPageWidgetModel*)self, (QTimerEvent*)event);
}

void k_pagewidgetmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetModel_OnTimerEvent((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_child_event(void* self, void* event) {
    KPageWidgetModel_ChildEvent((KPageWidgetModel*)self, (QChildEvent*)event);
}

void k_pagewidgetmodel_super_child_event(void* self, void* event) {
    KPageWidgetModel_SuperChildEvent((KPageWidgetModel*)self, (QChildEvent*)event);
}

void k_pagewidgetmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetModel_OnChildEvent((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_custom_event(void* self, void* event) {
    KPageWidgetModel_CustomEvent((KPageWidgetModel*)self, (QEvent*)event);
}

void k_pagewidgetmodel_super_custom_event(void* self, void* event) {
    KPageWidgetModel_SuperCustomEvent((KPageWidgetModel*)self, (QEvent*)event);
}

void k_pagewidgetmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageWidgetModel_OnCustomEvent((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_connect_notify(void* self, const void* signal) {
    KPageWidgetModel_ConnectNotify((KPageWidgetModel*)self, (QMetaMethod*)signal);
}

void k_pagewidgetmodel_super_connect_notify(void* self, const void* signal) {
    KPageWidgetModel_SuperConnectNotify((KPageWidgetModel*)self, (QMetaMethod*)signal);
}

void k_pagewidgetmodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KPageWidgetModel_OnConnectNotify((KPageWidgetModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_disconnect_notify(void* self, const void* signal) {
    KPageWidgetModel_DisconnectNotify((KPageWidgetModel*)self, (QMetaMethod*)signal);
}

void k_pagewidgetmodel_super_disconnect_notify(void* self, const void* signal) {
    KPageWidgetModel_SuperDisconnectNotify((KPageWidgetModel*)self, (QMetaMethod*)signal);
}

void k_pagewidgetmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KPageWidgetModel_OnDisconnectNotify((KPageWidgetModel*)self, (intptr_t)callback);
}

QModelIndex* k_pagewidgetmodel_create_index(const void* self, int row, int column) {
    return KPageWidgetModel_CreateIndex((KPageWidgetModel*)self, row, column);
}

void k_pagewidgetmodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KPageWidgetModel_EncodeData((KPageWidgetModel*)self, indexes, (QDataStream*)stream);
}

bool k_pagewidgetmodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KPageWidgetModel_DecodeData((KPageWidgetModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_pagewidgetmodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KPageWidgetModel_BeginInsertRows((KPageWidgetModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagewidgetmodel_end_insert_rows(void* self) {
    KPageWidgetModel_EndInsertRows((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KPageWidgetModel_BeginRemoveRows((KPageWidgetModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagewidgetmodel_end_remove_rows(void* self) {
    KPageWidgetModel_EndRemoveRows((KPageWidgetModel*)self);
}

bool k_pagewidgetmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KPageWidgetModel_BeginMoveRows((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_pagewidgetmodel_end_move_rows(void* self) {
    KPageWidgetModel_EndMoveRows((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KPageWidgetModel_BeginInsertColumns((KPageWidgetModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagewidgetmodel_end_insert_columns(void* self) {
    KPageWidgetModel_EndInsertColumns((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KPageWidgetModel_BeginRemoveColumns((KPageWidgetModel*)self, (QModelIndex*)parent, first, last);
}

void k_pagewidgetmodel_end_remove_columns(void* self) {
    KPageWidgetModel_EndRemoveColumns((KPageWidgetModel*)self);
}

bool k_pagewidgetmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KPageWidgetModel_BeginMoveColumns((KPageWidgetModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_pagewidgetmodel_end_move_columns(void* self) {
    KPageWidgetModel_EndMoveColumns((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_begin_reset_model(void* self) {
    KPageWidgetModel_BeginResetModel((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_end_reset_model(void* self) {
    KPageWidgetModel_EndResetModel((KPageWidgetModel*)self);
}

void k_pagewidgetmodel_change_persistent_index(void* self, const void* from, const void* to) {
    KPageWidgetModel_ChangePersistentIndex((KPageWidgetModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_pagewidgetmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KPageWidgetModel_ChangePersistentIndexList((KPageWidgetModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_pagewidgetmodel_persistent_index_list(const void* self) {
    libqt_list _arr = KPageWidgetModel_PersistentIndexList((KPageWidgetModel*)self);
    return _arr;
}

QObject* k_pagewidgetmodel_sender(const void* self) {
    return KPageWidgetModel_Sender((KPageWidgetModel*)self);
}

int32_t k_pagewidgetmodel_sender_signal_index(const void* self) {
    return KPageWidgetModel_SenderSignalIndex((KPageWidgetModel*)self);
}

int32_t k_pagewidgetmodel_receivers(const void* self, const char* signal) {
    return KPageWidgetModel_Receivers((KPageWidgetModel*)self, signal);
}

bool k_pagewidgetmodel_is_signal_connected(const void* self, const void* signal) {
    return KPageWidgetModel_IsSignalConnected((KPageWidgetModel*)self, (QMetaMethod*)signal);
}

void k_pagewidgetmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pagewidgetmodel_delete(void* self) {
    KPageWidgetModel_Delete((KPageWidgetModel*)(self));
}
