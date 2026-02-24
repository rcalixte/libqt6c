#include "libpart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libpartmanager.hpp"
#include "libpartmanager.h"

KParts__PartManager* k_parts__partmanager_new(void* parent) {
    return KParts__PartManager_new((QWidget*)parent);
}

KParts__PartManager* k_parts__partmanager_new2(void* topLevel, void* parent) {
    return KParts__PartManager_new2((QWidget*)topLevel, (QObject*)parent);
}

const QMetaObject* k_parts__partmanager_meta_object(void* self) {
    return KParts__PartManager_MetaObject((KParts__PartManager*)self);
}

void k_parts__partmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__PartManager_OnMetaObject((KParts__PartManager*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__partmanager_super_meta_object(void* self) {
    return KParts__PartManager_SuperMetaObject((KParts__PartManager*)self);
}

void* k_parts__partmanager_metacast(void* self, const char* param1) {
    return KParts__PartManager_Metacast((KParts__PartManager*)self, param1);
}

void k_parts__partmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__PartManager_OnMetacast((KParts__PartManager*)self, (intptr_t)callback);
}

void* k_parts__partmanager_super_metacast(void* self, const char* param1) {
    return KParts__PartManager_SuperMetacast((KParts__PartManager*)self, param1);
}

int32_t k_parts__partmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__PartManager_Metacall((KParts__PartManager*)self, param1, param2, param3);
}

void k_parts__partmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__PartManager_OnMetacall((KParts__PartManager*)self, (intptr_t)callback);
}

int32_t k_parts__partmanager_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__PartManager_SuperMetacall((KParts__PartManager*)self, param1, param2, param3);
}

const char* k_parts__partmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partmanager_set_selection_policy(void* self, int32_t policy) {
    KParts__PartManager_SetSelectionPolicy((KParts__PartManager*)self, policy);
}

int32_t k_parts__partmanager_selection_policy(void* self) {
    return KParts__PartManager_SelectionPolicy((KParts__PartManager*)self);
}

void k_parts__partmanager_set_allow_nested_parts(void* self, bool allow) {
    KParts__PartManager_SetAllowNestedParts((KParts__PartManager*)self, allow);
}

bool k_parts__partmanager_allow_nested_parts(void* self) {
    return KParts__PartManager_AllowNestedParts((KParts__PartManager*)self);
}

void k_parts__partmanager_set_ignore_scroll_bars(void* self, bool ignore) {
    KParts__PartManager_SetIgnoreScrollBars((KParts__PartManager*)self, ignore);
}

bool k_parts__partmanager_ignore_scroll_bars(void* self) {
    return KParts__PartManager_IgnoreScrollBars((KParts__PartManager*)self);
}

void k_parts__partmanager_set_activation_button_mask(void* self, short buttonMask) {
    KParts__PartManager_SetActivationButtonMask((KParts__PartManager*)self, buttonMask);
}

short k_parts__partmanager_activation_button_mask(void* self) {
    return KParts__PartManager_ActivationButtonMask((KParts__PartManager*)self);
}

bool k_parts__partmanager_event_filter(void* self, void* obj, void* ev) {
    return KParts__PartManager_EventFilter((KParts__PartManager*)self, (QObject*)obj, (QEvent*)ev);
}

void k_parts__partmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__PartManager_OnEventFilter((KParts__PartManager*)self, (intptr_t)callback);
}

bool k_parts__partmanager_super_event_filter(void* self, void* obj, void* ev) {
    return KParts__PartManager_SuperEventFilter((KParts__PartManager*)self, (QObject*)obj, (QEvent*)ev);
}

void k_parts__partmanager_add_part(void* self, void* part, bool setActive) {
    KParts__PartManager_AddPart((KParts__PartManager*)self, (KParts__Part*)part, setActive);
}

void k_parts__partmanager_on_add_part(void* self, void (*callback)(void*, void*, bool)) {
    KParts__PartManager_OnAddPart((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_add_part(void* self, void* part, bool setActive) {
    KParts__PartManager_SuperAddPart((KParts__PartManager*)self, (KParts__Part*)part, setActive);
}

void k_parts__partmanager_remove_part(void* self, void* part) {
    KParts__PartManager_RemovePart((KParts__PartManager*)self, (KParts__Part*)part);
}

void k_parts__partmanager_on_remove_part(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnRemovePart((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_remove_part(void* self, void* part) {
    KParts__PartManager_SuperRemovePart((KParts__PartManager*)self, (KParts__Part*)part);
}

void k_parts__partmanager_replace_part(void* self, void* oldPart, void* newPart, bool setActive) {
    KParts__PartManager_ReplacePart((KParts__PartManager*)self, (KParts__Part*)oldPart, (KParts__Part*)newPart, setActive);
}

void k_parts__partmanager_on_replace_part(void* self, void (*callback)(void*, void*, void*, bool)) {
    KParts__PartManager_OnReplacePart((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_replace_part(void* self, void* oldPart, void* newPart, bool setActive) {
    KParts__PartManager_SuperReplacePart((KParts__PartManager*)self, (KParts__Part*)oldPart, (KParts__Part*)newPart, setActive);
}

void k_parts__partmanager_set_active_part(void* self, void* part, void* widget) {
    KParts__PartManager_SetActivePart((KParts__PartManager*)self, (KParts__Part*)part, (QWidget*)widget);
}

void k_parts__partmanager_on_set_active_part(void* self, void (*callback)(void*, void*, void*)) {
    KParts__PartManager_OnSetActivePart((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_set_active_part(void* self, void* part, void* widget) {
    KParts__PartManager_SuperSetActivePart((KParts__PartManager*)self, (KParts__Part*)part, (QWidget*)widget);
}

KParts__Part* k_parts__partmanager_active_part(void* self) {
    return KParts__PartManager_ActivePart((KParts__PartManager*)self);
}

void k_parts__partmanager_on_active_part(void* self, KParts__Part* (*callback)()) {
    KParts__PartManager_OnActivePart((KParts__PartManager*)self, (intptr_t)callback);
}

KParts__Part* k_parts__partmanager_super_active_part(void* self) {
    return KParts__PartManager_SuperActivePart((KParts__PartManager*)self);
}

QWidget* k_parts__partmanager_active_widget(void* self) {
    return KParts__PartManager_ActiveWidget((KParts__PartManager*)self);
}

void k_parts__partmanager_on_active_widget(void* self, QWidget* (*callback)()) {
    KParts__PartManager_OnActiveWidget((KParts__PartManager*)self, (intptr_t)callback);
}

QWidget* k_parts__partmanager_super_active_widget(void* self) {
    return KParts__PartManager_SuperActiveWidget((KParts__PartManager*)self);
}

libqt_list /* of KParts__Part* */ k_parts__partmanager_parts(void* self) {
    libqt_list _arr = KParts__PartManager_Parts((KParts__PartManager*)self);
    return _arr;
}

void k_parts__partmanager_add_managed_top_level_widget(void* self, void* topLevel) {
    KParts__PartManager_AddManagedTopLevelWidget((KParts__PartManager*)self, (QWidget*)topLevel);
}

void k_parts__partmanager_remove_managed_top_level_widget(void* self, void* topLevel) {
    KParts__PartManager_RemoveManagedTopLevelWidget((KParts__PartManager*)self, (QWidget*)topLevel);
}

int32_t k_parts__partmanager_reason(void* self) {
    return KParts__PartManager_Reason((KParts__PartManager*)self);
}

void k_parts__partmanager_part_added(void* self, void* part) {
    KParts__PartManager_PartAdded((KParts__PartManager*)self, (KParts__Part*)part);
}

void k_parts__partmanager_on_part_added(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_Connect_PartAdded((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_part_removed(void* self, void* part) {
    KParts__PartManager_PartRemoved((KParts__PartManager*)self, (KParts__Part*)part);
}

void k_parts__partmanager_on_part_removed(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_Connect_PartRemoved((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_active_part_changed(void* self, void* newPart) {
    KParts__PartManager_ActivePartChanged((KParts__PartManager*)self, (KParts__Part*)newPart);
}

void k_parts__partmanager_on_active_part_changed(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_Connect_ActivePartChanged((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_set_ignore_explict_focus_requests(void* self, bool ignoreExplictFocusRequests) {
    KParts__PartManager_SetIgnoreExplictFocusRequests((KParts__PartManager*)self, ignoreExplictFocusRequests);
}

void k_parts__partmanager_on_set_ignore_explict_focus_requests(void* self, void (*callback)(void*, bool)) {
    KParts__PartManager_OnSetIgnoreExplictFocusRequests((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_set_ignore_explict_focus_requests(void* self, bool ignoreExplictFocusRequests) {
    KParts__PartManager_SuperSetIgnoreExplictFocusRequests((KParts__PartManager*)self, ignoreExplictFocusRequests);
}

void k_parts__partmanager_slot_object_destroyed(void* self) {
    KParts__PartManager_SlotObjectDestroyed((KParts__PartManager*)self);
}

void k_parts__partmanager_on_slot_object_destroyed(void* self, void (*callback)()) {
    KParts__PartManager_OnSlotObjectDestroyed((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_slot_object_destroyed(void* self) {
    KParts__PartManager_SuperSlotObjectDestroyed((KParts__PartManager*)self);
}

void k_parts__partmanager_slot_widget_destroyed(void* self) {
    KParts__PartManager_SlotWidgetDestroyed((KParts__PartManager*)self);
}

void k_parts__partmanager_on_slot_widget_destroyed(void* self, void (*callback)()) {
    KParts__PartManager_OnSlotWidgetDestroyed((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_slot_widget_destroyed(void* self) {
    KParts__PartManager_SuperSlotWidgetDestroyed((KParts__PartManager*)self);
}

void k_parts__partmanager_slot_managed_top_level_widget_destroyed(void* self) {
    KParts__PartManager_SlotManagedTopLevelWidgetDestroyed((KParts__PartManager*)self);
}

void k_parts__partmanager_on_slot_managed_top_level_widget_destroyed(void* self, void (*callback)()) {
    KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_super_slot_managed_top_level_widget_destroyed(void* self) {
    KParts__PartManager_SuperSlotManagedTopLevelWidgetDestroyed((KParts__PartManager*)self);
}

const char* k_parts__partmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__partmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__partmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__partmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__partmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__partmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__partmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__partmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__partmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__partmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__partmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__partmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__partmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__partmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__partmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__partmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__partmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_parts__partmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__partmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__partmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_parts__partmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__partmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_parts__partmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_parts__partmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_parts__partmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__partmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__partmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__partmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__partmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__partmanager_dynamic_property_names\n");
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

QBindingStorage* k_parts__partmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__partmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__partmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__partmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__partmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__partmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__partmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__partmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__partmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__partmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_parts__partmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__partmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_parts__partmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_parts__partmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_parts__partmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_parts__partmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_parts__partmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__partmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__partmanager_event(void* self, void* event) {
    return KParts__PartManager_Event((KParts__PartManager*)self, (QEvent*)event);
}

bool k_parts__partmanager_super_event(void* self, void* event) {
    return KParts__PartManager_SuperEvent((KParts__PartManager*)self, (QEvent*)event);
}

void k_parts__partmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__PartManager_OnEvent((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_timer_event(void* self, void* event) {
    KParts__PartManager_TimerEvent((KParts__PartManager*)self, (QTimerEvent*)event);
}

void k_parts__partmanager_super_timer_event(void* self, void* event) {
    KParts__PartManager_SuperTimerEvent((KParts__PartManager*)self, (QTimerEvent*)event);
}

void k_parts__partmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnTimerEvent((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_child_event(void* self, void* event) {
    KParts__PartManager_ChildEvent((KParts__PartManager*)self, (QChildEvent*)event);
}

void k_parts__partmanager_super_child_event(void* self, void* event) {
    KParts__PartManager_SuperChildEvent((KParts__PartManager*)self, (QChildEvent*)event);
}

void k_parts__partmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnChildEvent((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_custom_event(void* self, void* event) {
    KParts__PartManager_CustomEvent((KParts__PartManager*)self, (QEvent*)event);
}

void k_parts__partmanager_super_custom_event(void* self, void* event) {
    KParts__PartManager_SuperCustomEvent((KParts__PartManager*)self, (QEvent*)event);
}

void k_parts__partmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnCustomEvent((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_connect_notify(void* self, void* signal) {
    KParts__PartManager_ConnectNotify((KParts__PartManager*)self, (QMetaMethod*)signal);
}

void k_parts__partmanager_super_connect_notify(void* self, void* signal) {
    KParts__PartManager_SuperConnectNotify((KParts__PartManager*)self, (QMetaMethod*)signal);
}

void k_parts__partmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnConnectNotify((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_disconnect_notify(void* self, void* signal) {
    KParts__PartManager_DisconnectNotify((KParts__PartManager*)self, (QMetaMethod*)signal);
}

void k_parts__partmanager_super_disconnect_notify(void* self, void* signal) {
    KParts__PartManager_SuperDisconnectNotify((KParts__PartManager*)self, (QMetaMethod*)signal);
}

void k_parts__partmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__PartManager_OnDisconnectNotify((KParts__PartManager*)self, (intptr_t)callback);
}

QObject* k_parts__partmanager_sender(void* self) {
    return KParts__PartManager_Sender((KParts__PartManager*)self);
}

QObject* k_parts__partmanager_super_sender(void* self) {
    return KParts__PartManager_SuperSender((KParts__PartManager*)self);
}

void k_parts__partmanager_on_sender(void* self, QObject* (*callback)()) {
    KParts__PartManager_OnSender((KParts__PartManager*)self, (intptr_t)callback);
}

int32_t k_parts__partmanager_sender_signal_index(void* self) {
    return KParts__PartManager_SenderSignalIndex((KParts__PartManager*)self);
}

int32_t k_parts__partmanager_super_sender_signal_index(void* self) {
    return KParts__PartManager_SuperSenderSignalIndex((KParts__PartManager*)self);
}

void k_parts__partmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__PartManager_OnSenderSignalIndex((KParts__PartManager*)self, (intptr_t)callback);
}

int32_t k_parts__partmanager_receivers(void* self, const char* signal) {
    return KParts__PartManager_Receivers((KParts__PartManager*)self, signal);
}

int32_t k_parts__partmanager_super_receivers(void* self, const char* signal) {
    return KParts__PartManager_SuperReceivers((KParts__PartManager*)self, signal);
}

void k_parts__partmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__PartManager_OnReceivers((KParts__PartManager*)self, (intptr_t)callback);
}

bool k_parts__partmanager_is_signal_connected(void* self, void* signal) {
    return KParts__PartManager_IsSignalConnected((KParts__PartManager*)self, (QMetaMethod*)signal);
}

bool k_parts__partmanager_super_is_signal_connected(void* self, void* signal) {
    return KParts__PartManager_SuperIsSignalConnected((KParts__PartManager*)self, (QMetaMethod*)signal);
}

void k_parts__partmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__PartManager_OnIsSignalConnected((KParts__PartManager*)self, (intptr_t)callback);
}

void k_parts__partmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__partmanager_delete(void* self) {
    KParts__PartManager_Delete((KParts__PartManager*)(self));
}
