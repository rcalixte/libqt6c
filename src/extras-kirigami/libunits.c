#include "../libqcoreevent.hpp"
#include "../qml/libqjsengine.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlengine.hpp"
#include "libunits.hpp"
#include "libunits.h"

Kirigami__Platform__IconSizes* k_irigami__platform__iconsizes_new(void* units) {
    return Kirigami__Platform__IconSizes_New((Kirigami__Platform__Units*)units);
}

const QMetaObject* k_irigami__platform__iconsizes_meta_object(void* self) {
    return Kirigami__Platform__IconSizes_MetaObject((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Kirigami__Platform__IconSizes_OnMetaObject((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

const QMetaObject* k_irigami__platform__iconsizes_super_meta_object(void* self) {
    return Kirigami__Platform__IconSizes_SuperMetaObject((Kirigami__Platform__IconSizes*)self);
}

void* k_irigami__platform__iconsizes_metacast(void* self, const char* param1) {
    return Kirigami__Platform__IconSizes_Metacast((Kirigami__Platform__IconSizes*)self, param1);
}

void k_irigami__platform__iconsizes_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Kirigami__Platform__IconSizes_OnMetacast((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void* k_irigami__platform__iconsizes_super_metacast(void* self, const char* param1) {
    return Kirigami__Platform__IconSizes_SuperMetacast((Kirigami__Platform__IconSizes*)self, param1);
}

int32_t k_irigami__platform__iconsizes_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__IconSizes_Metacall((Kirigami__Platform__IconSizes*)self, param1, param2, param3);
}

void k_irigami__platform__iconsizes_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Kirigami__Platform__IconSizes_OnMetacall((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__iconsizes_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__IconSizes_SuperMetacall((Kirigami__Platform__IconSizes*)self, param1, param2, param3);
}

const char* k_irigami__platform__iconsizes_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_irigami__platform__iconsizes_size_for_labels(void* self) {
    return Kirigami__Platform__IconSizes_SizeForLabels((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_small(void* self) {
    return Kirigami__Platform__IconSizes_Small((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_small_medium(void* self) {
    return Kirigami__Platform__IconSizes_SmallMedium((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_medium(void* self) {
    return Kirigami__Platform__IconSizes_Medium((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_large(void* self) {
    return Kirigami__Platform__IconSizes_Large((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_huge(void* self) {
    return Kirigami__Platform__IconSizes_Huge((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_enormous(void* self) {
    return Kirigami__Platform__IconSizes_Enormous((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_rounded_icon_size(void* self, int size) {
    return Kirigami__Platform__IconSizes_RoundedIconSize((Kirigami__Platform__IconSizes*)self, size);
}

void k_irigami__platform__iconsizes_size_for_labels_changed(void* self) {
    Kirigami__Platform__IconSizes_SizeForLabelsChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_size_for_labels_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_SizeForLabelsChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_small_changed(void* self) {
    Kirigami__Platform__IconSizes_SmallChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_small_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_SmallChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_small_medium_changed(void* self) {
    Kirigami__Platform__IconSizes_SmallMediumChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_small_medium_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_SmallMediumChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_medium_changed(void* self) {
    Kirigami__Platform__IconSizes_MediumChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_medium_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_MediumChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_large_changed(void* self) {
    Kirigami__Platform__IconSizes_LargeChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_large_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_LargeChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_huge_changed(void* self) {
    Kirigami__Platform__IconSizes_HugeChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_huge_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_HugeChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_enormous_changed(void* self) {
    Kirigami__Platform__IconSizes_EnormousChanged((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_enormous_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__IconSizes_Connect_EnormousChanged((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

const char* k_irigami__platform__iconsizes_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__iconsizes_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__iconsizes_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__iconsizes_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__iconsizes_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__iconsizes_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__iconsizes_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__iconsizes_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__iconsizes_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__iconsizes_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__iconsizes_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__iconsizes_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__iconsizes_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__iconsizes_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__iconsizes_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__iconsizes_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__iconsizes_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__iconsizes_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__iconsizes_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__iconsizes_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__iconsizes_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__iconsizes_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__iconsizes_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__iconsizes_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__iconsizes_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__iconsizes_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__iconsizes_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__iconsizes_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__iconsizes_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__iconsizes_dynamic_property_names\n");
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

QBindingStorage* k_irigami__platform__iconsizes_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__iconsizes_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__iconsizes_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__iconsizes_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__iconsizes_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__iconsizes_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__iconsizes_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__iconsizes_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__iconsizes_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__iconsizes_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__iconsizes_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__iconsizes_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__iconsizes_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__iconsizes_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__iconsizes_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__iconsizes_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_irigami__platform__iconsizes_event(void* self, void* event) {
    return Kirigami__Platform__IconSizes_Event((Kirigami__Platform__IconSizes*)self, (QEvent*)event);
}

bool k_irigami__platform__iconsizes_super_event(void* self, void* event) {
    return Kirigami__Platform__IconSizes_SuperEvent((Kirigami__Platform__IconSizes*)self, (QEvent*)event);
}

void k_irigami__platform__iconsizes_on_event(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnEvent((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

bool k_irigami__platform__iconsizes_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__IconSizes_EventFilter((Kirigami__Platform__IconSizes*)self, (QObject*)watched, (QEvent*)event);
}

bool k_irigami__platform__iconsizes_super_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__IconSizes_SuperEventFilter((Kirigami__Platform__IconSizes*)self, (QObject*)watched, (QEvent*)event);
}

void k_irigami__platform__iconsizes_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Kirigami__Platform__IconSizes_OnEventFilter((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_timer_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_TimerEvent((Kirigami__Platform__IconSizes*)self, (QTimerEvent*)event);
}

void k_irigami__platform__iconsizes_super_timer_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_SuperTimerEvent((Kirigami__Platform__IconSizes*)self, (QTimerEvent*)event);
}

void k_irigami__platform__iconsizes_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnTimerEvent((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_child_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_ChildEvent((Kirigami__Platform__IconSizes*)self, (QChildEvent*)event);
}

void k_irigami__platform__iconsizes_super_child_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_SuperChildEvent((Kirigami__Platform__IconSizes*)self, (QChildEvent*)event);
}

void k_irigami__platform__iconsizes_on_child_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnChildEvent((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_custom_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_CustomEvent((Kirigami__Platform__IconSizes*)self, (QEvent*)event);
}

void k_irigami__platform__iconsizes_super_custom_event(void* self, void* event) {
    Kirigami__Platform__IconSizes_SuperCustomEvent((Kirigami__Platform__IconSizes*)self, (QEvent*)event);
}

void k_irigami__platform__iconsizes_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnCustomEvent((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_connect_notify(void* self, void* signal) {
    Kirigami__Platform__IconSizes_ConnectNotify((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__iconsizes_super_connect_notify(void* self, void* signal) {
    Kirigami__Platform__IconSizes_SuperConnectNotify((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__iconsizes_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnConnectNotify((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__IconSizes_DisconnectNotify((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__iconsizes_super_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__IconSizes_SuperDisconnectNotify((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__iconsizes_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnDisconnectNotify((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__iconsizes_sender(void* self) {
    return Kirigami__Platform__IconSizes_Sender((Kirigami__Platform__IconSizes*)self);
}

QObject* k_irigami__platform__iconsizes_super_sender(void* self) {
    return Kirigami__Platform__IconSizes_SuperSender((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_sender(void* self, QObject* (*callback)()) {
    Kirigami__Platform__IconSizes_OnSender((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__iconsizes_sender_signal_index(void* self) {
    return Kirigami__Platform__IconSizes_SenderSignalIndex((Kirigami__Platform__IconSizes*)self);
}

int32_t k_irigami__platform__iconsizes_super_sender_signal_index(void* self) {
    return Kirigami__Platform__IconSizes_SuperSenderSignalIndex((Kirigami__Platform__IconSizes*)self);
}

void k_irigami__platform__iconsizes_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Kirigami__Platform__IconSizes_OnSenderSignalIndex((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__iconsizes_receivers(void* self, const char* signal) {
    return Kirigami__Platform__IconSizes_Receivers((Kirigami__Platform__IconSizes*)self, signal);
}

int32_t k_irigami__platform__iconsizes_super_receivers(void* self, const char* signal) {
    return Kirigami__Platform__IconSizes_SuperReceivers((Kirigami__Platform__IconSizes*)self, signal);
}

void k_irigami__platform__iconsizes_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Kirigami__Platform__IconSizes_OnReceivers((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

bool k_irigami__platform__iconsizes_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__IconSizes_IsSignalConnected((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

bool k_irigami__platform__iconsizes_super_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__IconSizes_SuperIsSignalConnected((Kirigami__Platform__IconSizes*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__iconsizes_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__IconSizes_OnIsSignalConnected((Kirigami__Platform__IconSizes*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__iconsizes_delete(void* self) {
    Kirigami__Platform__IconSizes_Delete((Kirigami__Platform__IconSizes*)(self));
}

const QMetaObject* k_irigami__platform__units_meta_object(void* self) {
    return Kirigami__Platform__Units_MetaObject((Kirigami__Platform__Units*)self);
}

void* k_irigami__platform__units_metacast(void* self, const char* param1) {
    return Kirigami__Platform__Units_Metacast((Kirigami__Platform__Units*)self, param1);
}

int32_t k_irigami__platform__units_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__Units_Metacall((Kirigami__Platform__Units*)self, param1, param2, param3);
}

const char* k_irigami__platform__units_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_irigami__platform__units_grid_unit(void* self) {
    return Kirigami__Platform__Units_GridUnit((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_grid_unit(void* self, int size) {
    Kirigami__Platform__Units_SetGridUnit((Kirigami__Platform__Units*)self, size);
}

int32_t k_irigami__platform__units_small_spacing(void* self) {
    return Kirigami__Platform__Units_SmallSpacing((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_small_spacing(void* self, int size) {
    Kirigami__Platform__Units_SetSmallSpacing((Kirigami__Platform__Units*)self, size);
}

int32_t k_irigami__platform__units_medium_spacing(void* self) {
    return Kirigami__Platform__Units_MediumSpacing((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_medium_spacing(void* self, int size) {
    Kirigami__Platform__Units_SetMediumSpacing((Kirigami__Platform__Units*)self, size);
}

int32_t k_irigami__platform__units_large_spacing(void* self) {
    return Kirigami__Platform__Units_LargeSpacing((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_large_spacing(void* self, int size) {
    Kirigami__Platform__Units_SetLargeSpacing((Kirigami__Platform__Units*)self, size);
}

int32_t k_irigami__platform__units_very_long_duration(void* self) {
    return Kirigami__Platform__Units_VeryLongDuration((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_very_long_duration(void* self, int duration) {
    Kirigami__Platform__Units_SetVeryLongDuration((Kirigami__Platform__Units*)self, duration);
}

int32_t k_irigami__platform__units_long_duration(void* self) {
    return Kirigami__Platform__Units_LongDuration((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_long_duration(void* self, int duration) {
    Kirigami__Platform__Units_SetLongDuration((Kirigami__Platform__Units*)self, duration);
}

int32_t k_irigami__platform__units_short_duration(void* self) {
    return Kirigami__Platform__Units_ShortDuration((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_short_duration(void* self, int duration) {
    Kirigami__Platform__Units_SetShortDuration((Kirigami__Platform__Units*)self, duration);
}

int32_t k_irigami__platform__units_very_short_duration(void* self) {
    return Kirigami__Platform__Units_VeryShortDuration((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_very_short_duration(void* self, int duration) {
    Kirigami__Platform__Units_SetVeryShortDuration((Kirigami__Platform__Units*)self, duration);
}

int32_t k_irigami__platform__units_human_moment(void* self) {
    return Kirigami__Platform__Units_HumanMoment((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_human_moment(void* self, int duration) {
    Kirigami__Platform__Units_SetHumanMoment((Kirigami__Platform__Units*)self, duration);
}

int32_t k_irigami__platform__units_tool_tip_delay(void* self) {
    return Kirigami__Platform__Units_ToolTipDelay((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_set_tool_tip_delay(void* self, int delay) {
    Kirigami__Platform__Units_SetToolTipDelay((Kirigami__Platform__Units*)self, delay);
}

double k_irigami__platform__units_corner_radius(void* self) {
    return Kirigami__Platform__Units_CornerRadius((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_setcorner_radius(void* self, double cornerRadius) {
    Kirigami__Platform__Units_SetcornerRadius((Kirigami__Platform__Units*)self, cornerRadius);
}

Kirigami__Platform__IconSizes* k_irigami__platform__units_icon_sizes(void* self) {
    return Kirigami__Platform__Units_IconSizes((Kirigami__Platform__Units*)self);
}

Kirigami__Platform__Units* k_irigami__platform__units_create(void* qmlEngine, void* jsEngine) {
    return Kirigami__Platform__Units_Create((QQmlEngine*)qmlEngine, (QJSEngine*)jsEngine);
}

void k_irigami__platform__units_grid_unit_changed(void* self) {
    Kirigami__Platform__Units_GridUnitChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_grid_unit_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_GridUnitChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_small_spacing_changed(void* self) {
    Kirigami__Platform__Units_SmallSpacingChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_small_spacing_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_SmallSpacingChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_medium_spacing_changed(void* self) {
    Kirigami__Platform__Units_MediumSpacingChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_medium_spacing_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_MediumSpacingChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_large_spacing_changed(void* self) {
    Kirigami__Platform__Units_LargeSpacingChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_large_spacing_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_LargeSpacingChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_very_long_duration_changed(void* self) {
    Kirigami__Platform__Units_VeryLongDurationChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_very_long_duration_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_VeryLongDurationChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_long_duration_changed(void* self) {
    Kirigami__Platform__Units_LongDurationChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_long_duration_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_LongDurationChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_short_duration_changed(void* self) {
    Kirigami__Platform__Units_ShortDurationChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_short_duration_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_ShortDurationChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_very_short_duration_changed(void* self) {
    Kirigami__Platform__Units_VeryShortDurationChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_very_short_duration_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_VeryShortDurationChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_human_moment_changed(void* self) {
    Kirigami__Platform__Units_HumanMomentChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_human_moment_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_HumanMomentChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_tool_tip_delay_changed(void* self) {
    Kirigami__Platform__Units_ToolTipDelayChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_tool_tip_delay_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_ToolTipDelayChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_wheel_scroll_lines_changed(void* self) {
    Kirigami__Platform__Units_WheelScrollLinesChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_wheel_scroll_lines_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_WheelScrollLinesChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

void k_irigami__platform__units_corner_radius_changed(void* self) {
    Kirigami__Platform__Units_CornerRadiusChanged((Kirigami__Platform__Units*)self);
}

void k_irigami__platform__units_on_corner_radius_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__Units_Connect_CornerRadiusChanged((Kirigami__Platform__Units*)self, (intptr_t)callback);
}

const char* k_irigami__platform__units_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__units_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_irigami__platform__units_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

const char* k_irigami__platform__units_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__units_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__units_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__units_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__units_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__units_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__units_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__units_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__units_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__units_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__units_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__units_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__units_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__units_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__units_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__units_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__units_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__units_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__units_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__units_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__units_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__units_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__units_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__units_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__units_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__units_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__units_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__units_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__units_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__units_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__units_dynamic_property_names\n");
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

QBindingStorage* k_irigami__platform__units_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__units_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__units_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__units_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__units_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__units_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__units_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__units_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__units_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__units_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__units_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__units_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__units_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__units_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__units_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__units_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__units_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__units_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__units_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__units_delete(void* self) {
    Kirigami__Platform__Units_Delete((Kirigami__Platform__Units*)(self));
}
