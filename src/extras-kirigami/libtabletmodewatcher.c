#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtabletmodewatcher.hpp"
#include "libtabletmodewatcher.h"

Kirigami__Platform__TabletModeChangedEvent* k_irigami__platform__tabletmodechangedevent_new(bool tablet) {
    return Kirigami__Platform__TabletModeChangedEvent_New(tablet);
}

Kirigami__Platform__TabletModeChangedEvent* k_irigami__platform__tabletmodechangedevent_new2(void* param1) {
    return Kirigami__Platform__TabletModeChangedEvent_New2((Kirigami__Platform__TabletModeChangedEvent*)param1);
}

bool k_irigami__platform__tabletmodechangedevent_tablet_mode(void* self) {
    return Kirigami__Platform__TabletModeChangedEvent_TabletMode((Kirigami__Platform__TabletModeChangedEvent*)self);
}

void k_irigami__platform__tabletmodechangedevent_set_tablet_mode(void* self, bool tabletMode) {
    Kirigami__Platform__TabletModeChangedEvent_SetTabletMode((Kirigami__Platform__TabletModeChangedEvent*)self, tabletMode);
}

void k_irigami__platform__tabletmodechangedevent_operator_assign(void* self, void* param1) {
    Kirigami__Platform__TabletModeChangedEvent_OperatorAssign((Kirigami__Platform__TabletModeChangedEvent*)self, (Kirigami__Platform__TabletModeChangedEvent*)param1);
}

int32_t k_irigami__platform__tabletmodechangedevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool k_irigami__platform__tabletmodechangedevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool k_irigami__platform__tabletmodechangedevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void k_irigami__platform__tabletmodechangedevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void k_irigami__platform__tabletmodechangedevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool k_irigami__platform__tabletmodechangedevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool k_irigami__platform__tabletmodechangedevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool k_irigami__platform__tabletmodechangedevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t k_irigami__platform__tabletmodechangedevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t k_irigami__platform__tabletmodechangedevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void k_irigami__platform__tabletmodechangedevent_set_accepted(void* self, bool accepted) {
    Kirigami__Platform__TabletModeChangedEvent_SetAccepted((Kirigami__Platform__TabletModeChangedEvent*)self, accepted);
}

void k_irigami__platform__tabletmodechangedevent_super_set_accepted(void* self, bool accepted) {
    Kirigami__Platform__TabletModeChangedEvent_SuperSetAccepted((Kirigami__Platform__TabletModeChangedEvent*)self, accepted);
}

void k_irigami__platform__tabletmodechangedevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__TabletModeChangedEvent_OnSetAccepted((Kirigami__Platform__TabletModeChangedEvent*)self, (intptr_t)callback);
}

QEvent* k_irigami__platform__tabletmodechangedevent_clone(void* self) {
    return Kirigami__Platform__TabletModeChangedEvent_Clone((Kirigami__Platform__TabletModeChangedEvent*)self);
}

QEvent* k_irigami__platform__tabletmodechangedevent_super_clone(void* self) {
    return Kirigami__Platform__TabletModeChangedEvent_SuperClone((Kirigami__Platform__TabletModeChangedEvent*)self);
}

void k_irigami__platform__tabletmodechangedevent_on_clone(void* self, QEvent* (*callback)()) {
    Kirigami__Platform__TabletModeChangedEvent_OnClone((Kirigami__Platform__TabletModeChangedEvent*)self, (intptr_t)callback);
}

void k_irigami__platform__tabletmodechangedevent_delete(void* self) {
    Kirigami__Platform__TabletModeChangedEvent_Delete((Kirigami__Platform__TabletModeChangedEvent*)(self));
}

const QMetaObject* k_irigami__platform__tabletmodewatcher_meta_object(void* self) {
    return Kirigami__Platform__TabletModeWatcher_MetaObject((Kirigami__Platform__TabletModeWatcher*)self);
}

void* k_irigami__platform__tabletmodewatcher_metacast(void* self, const char* param1) {
    return Kirigami__Platform__TabletModeWatcher_Metacast((Kirigami__Platform__TabletModeWatcher*)self, param1);
}

int32_t k_irigami__platform__tabletmodewatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__TabletModeWatcher_Metacall((Kirigami__Platform__TabletModeWatcher*)self, param1, param2, param3);
}

const char* k_irigami__platform__tabletmodewatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Kirigami__Platform__TabletModeWatcher* k_irigami__platform__tabletmodewatcher_self() {
    return Kirigami__Platform__TabletModeWatcher_Self();
}

bool k_irigami__platform__tabletmodewatcher_is_tablet_mode_available(void* self) {
    return Kirigami__Platform__TabletModeWatcher_IsTabletModeAvailable((Kirigami__Platform__TabletModeWatcher*)self);
}

bool k_irigami__platform__tabletmodewatcher_is_tablet_mode(void* self) {
    return Kirigami__Platform__TabletModeWatcher_IsTabletMode((Kirigami__Platform__TabletModeWatcher*)self);
}

void k_irigami__platform__tabletmodewatcher_add_watcher(void* self, void* watcher) {
    Kirigami__Platform__TabletModeWatcher_AddWatcher((Kirigami__Platform__TabletModeWatcher*)self, (QObject*)watcher);
}

void k_irigami__platform__tabletmodewatcher_remove_watcher(void* self, void* watcher) {
    Kirigami__Platform__TabletModeWatcher_RemoveWatcher((Kirigami__Platform__TabletModeWatcher*)self, (QObject*)watcher);
}

void k_irigami__platform__tabletmodewatcher_tablet_mode_available_changed(void* self, bool tabletModeAvailable) {
    Kirigami__Platform__TabletModeWatcher_TabletModeAvailableChanged((Kirigami__Platform__TabletModeWatcher*)self, tabletModeAvailable);
}

void k_irigami__platform__tabletmodewatcher_on_tablet_mode_available_changed(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__TabletModeWatcher_Connect_TabletModeAvailableChanged((Kirigami__Platform__TabletModeWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__tabletmodewatcher_tablet_mode_changed(void* self, bool tabletMode) {
    Kirigami__Platform__TabletModeWatcher_TabletModeChanged((Kirigami__Platform__TabletModeWatcher*)self, tabletMode);
}

void k_irigami__platform__tabletmodewatcher_on_tablet_mode_changed(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__TabletModeWatcher_Connect_TabletModeChanged((Kirigami__Platform__TabletModeWatcher*)self, (intptr_t)callback);
}

const char* k_irigami__platform__tabletmodewatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__tabletmodewatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_irigami__platform__tabletmodewatcher_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_irigami__platform__tabletmodewatcher_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_irigami__platform__tabletmodewatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__tabletmodewatcher_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__tabletmodewatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__tabletmodewatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__tabletmodewatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__tabletmodewatcher_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__tabletmodewatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__tabletmodewatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__tabletmodewatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__tabletmodewatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__tabletmodewatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__tabletmodewatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__tabletmodewatcher_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__tabletmodewatcher_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__tabletmodewatcher_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__tabletmodewatcher_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__tabletmodewatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__tabletmodewatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__tabletmodewatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__tabletmodewatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__tabletmodewatcher_dynamic_property_names\n");
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

QBindingStorage* k_irigami__platform__tabletmodewatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__tabletmodewatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__tabletmodewatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__tabletmodewatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__tabletmodewatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__tabletmodewatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__tabletmodewatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__tabletmodewatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__tabletmodewatcher_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__tabletmodewatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__tabletmodewatcher_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__tabletmodewatcher_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__tabletmodewatcher_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__tabletmodewatcher_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__tabletmodewatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__tabletmodewatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__tabletmodewatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__tabletmodewatcher_delete(void* self) {
    Kirigami__Platform__TabletModeWatcher_Delete((Kirigami__Platform__TabletModeWatcher*)(self));
}
