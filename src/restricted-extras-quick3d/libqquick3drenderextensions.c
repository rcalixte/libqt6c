#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquick3dobject.hpp"
#include "libqquick3drenderextensions.hpp"
#include "libqquick3drenderextensions.h"

QQuick3DRenderExtension* q_quick3drenderextension_new() {
    return QQuick3DRenderExtension_New();
}

QQuick3DRenderExtension* q_quick3drenderextension_new2(void* parent) {
    return QQuick3DRenderExtension_New2((QQuick3DObject*)parent);
}

const QMetaObject* q_quick3drenderextension_meta_object(const void* self) {
    return QQuick3DRenderExtension_MetaObject((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QQuick3DRenderExtension_OnMetaObject((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

const QMetaObject* q_quick3drenderextension_super_meta_object(const void* self) {
    return QQuick3DRenderExtension_SuperMetaObject((QQuick3DRenderExtension*)self);
}

void* q_quick3drenderextension_metacast(void* self, const char* param1) {
    return QQuick3DRenderExtension_Metacast((QQuick3DRenderExtension*)self, param1);
}

void q_quick3drenderextension_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuick3DRenderExtension_OnMetacast((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void* q_quick3drenderextension_super_metacast(void* self, const char* param1) {
    return QQuick3DRenderExtension_SuperMetacast((QQuick3DRenderExtension*)self, param1);
}

int32_t q_quick3drenderextension_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DRenderExtension_Metacall((QQuick3DRenderExtension*)self, param1, param2, param3);
}

void q_quick3drenderextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuick3DRenderExtension_OnMetacall((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

int32_t q_quick3drenderextension_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DRenderExtension_SuperMetacall((QQuick3DRenderExtension*)self, param1, param2, param3);
}

const char* q_quick3drenderextension_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3drenderextension_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3drenderextension_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlParserStatus* q_quick3drenderextension_as_q_qml_parser_status(void* self) {
    return QQuick3DObject_AsQQmlParserStatus((QQuick3DObject*)self);
}

QQuick3DRenderExtension* q_quick3drenderextension_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuick3DRenderExtension*)QQuick3DObject_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

const char* q_quick3drenderextension_state(const void* self) {
    libqt_string _str = QQuick3DObject_State((QQuick3DObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3drenderextension_set_state(void* self, const char* state) {
    QQuick3DObject_SetState((QQuick3DObject*)self, qstring(state));
}

libqt_list /* of QQuick3DObject* */ q_quick3drenderextension_child_items(const void* self) {
    libqt_list _arr = QQuick3DObject_ChildItems((QQuick3DObject*)self);
    return _arr;
}

QQuick3DObject* q_quick3drenderextension_parent_item(const void* self) {
    return QQuick3DObject_ParentItem((QQuick3DObject*)self);
}

void q_quick3drenderextension_update(void* self) {
    QQuick3DObject_Update((QQuick3DObject*)self);
}

void q_quick3drenderextension_set_parent_item(void* self, void* parentItem) {
    QQuick3DObject_SetParentItem((QQuick3DObject*)self, (QQuick3DObject*)parentItem);
}

void q_quick3drenderextension_parent_changed(void* self) {
    QQuick3DObject_ParentChanged((QQuick3DObject*)self);
}

void q_quick3drenderextension_on_parent_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ParentChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3drenderextension_children_changed(void* self) {
    QQuick3DObject_ChildrenChanged((QQuick3DObject*)self);
}

void q_quick3drenderextension_on_children_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ChildrenChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3drenderextension_state_changed(void* self) {
    QQuick3DObject_StateChanged((QQuick3DObject*)self);
}

void q_quick3drenderextension_on_state_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_StateChanged((QQuick3DObject*)self, (intptr_t)callback);
}

const char* q_quick3drenderextension_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3drenderextension_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quick3drenderextension_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quick3drenderextension_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quick3drenderextension_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quick3drenderextension_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quick3drenderextension_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quick3drenderextension_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quick3drenderextension_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quick3drenderextension_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quick3drenderextension_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quick3drenderextension_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quick3drenderextension_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quick3drenderextension_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quick3drenderextension_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quick3drenderextension_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quick3drenderextension_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quick3drenderextension_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quick3drenderextension_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quick3drenderextension_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quick3drenderextension_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quick3drenderextension_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quick3drenderextension_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quick3drenderextension_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quick3drenderextension_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quick3drenderextension_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quick3drenderextension_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quick3drenderextension_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quick3drenderextension_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quick3drenderextension_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quick3drenderextension_dynamic_property_names\n");
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

QBindingStorage* q_quick3drenderextension_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quick3drenderextension_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quick3drenderextension_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quick3drenderextension_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quick3drenderextension_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quick3drenderextension_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quick3drenderextension_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quick3drenderextension_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quick3drenderextension_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quick3drenderextension_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quick3drenderextension_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quick3drenderextension_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quick3drenderextension_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quick3drenderextension_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quick3drenderextension_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quick3drenderextension_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quick3drenderextension_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quick3drenderextension_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_quick3drenderextension_operator_assign(void* self, const void* param1) {
    QQmlParserStatus_OperatorAssign(q_quick3drenderextension_as_q_qml_parser_status(self), (QQmlParserStatus*)param1);
}

void q_quick3drenderextension_mark_all_dirty(void* self) {
    QQuick3DRenderExtension_MarkAllDirty((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_super_mark_all_dirty(void* self) {
    QQuick3DRenderExtension_SuperMarkAllDirty((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_on_mark_all_dirty(void* self, void (*callback)(void*)) {
    QQuick3DRenderExtension_OnMarkAllDirty((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DRenderExtension_ItemChange((QQuick3DRenderExtension*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3drenderextension_super_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DRenderExtension_SuperItemChange((QQuick3DRenderExtension*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3drenderextension_on_item_change(void* self, void (*callback)(void*, int32_t, const void*)) {
    QQuick3DRenderExtension_OnItemChange((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_class_begin(void* self) {
    QQuick3DRenderExtension_ClassBegin((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_super_class_begin(void* self) {
    QQuick3DRenderExtension_SuperClassBegin((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_on_class_begin(void* self, void (*callback)(void*)) {
    QQuick3DRenderExtension_OnClassBegin((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_component_complete(void* self) {
    QQuick3DRenderExtension_ComponentComplete((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_super_component_complete(void* self) {
    QQuick3DRenderExtension_SuperComponentComplete((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_on_component_complete(void* self, void (*callback)(void*)) {
    QQuick3DRenderExtension_OnComponentComplete((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_pre_sync(void* self) {
    QQuick3DRenderExtension_PreSync((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_super_pre_sync(void* self) {
    QQuick3DRenderExtension_SuperPreSync((QQuick3DRenderExtension*)self);
}

void q_quick3drenderextension_on_pre_sync(void* self, void (*callback)(void*)) {
    QQuick3DRenderExtension_OnPreSync((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

bool q_quick3drenderextension_event(void* self, void* event) {
    return QQuick3DRenderExtension_Event((QQuick3DRenderExtension*)self, (QEvent*)event);
}

bool q_quick3drenderextension_super_event(void* self, void* event) {
    return QQuick3DRenderExtension_SuperEvent((QQuick3DRenderExtension*)self, (QEvent*)event);
}

void q_quick3drenderextension_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuick3DRenderExtension_OnEvent((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

bool q_quick3drenderextension_event_filter(void* self, void* watched, void* event) {
    return QQuick3DRenderExtension_EventFilter((QQuick3DRenderExtension*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quick3drenderextension_super_event_filter(void* self, void* watched, void* event) {
    return QQuick3DRenderExtension_SuperEventFilter((QQuick3DRenderExtension*)self, (QObject*)watched, (QEvent*)event);
}

void q_quick3drenderextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuick3DRenderExtension_OnEventFilter((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_timer_event(void* self, void* event) {
    QQuick3DRenderExtension_TimerEvent((QQuick3DRenderExtension*)self, (QTimerEvent*)event);
}

void q_quick3drenderextension_super_timer_event(void* self, void* event) {
    QQuick3DRenderExtension_SuperTimerEvent((QQuick3DRenderExtension*)self, (QTimerEvent*)event);
}

void q_quick3drenderextension_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DRenderExtension_OnTimerEvent((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_child_event(void* self, void* event) {
    QQuick3DRenderExtension_ChildEvent((QQuick3DRenderExtension*)self, (QChildEvent*)event);
}

void q_quick3drenderextension_super_child_event(void* self, void* event) {
    QQuick3DRenderExtension_SuperChildEvent((QQuick3DRenderExtension*)self, (QChildEvent*)event);
}

void q_quick3drenderextension_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DRenderExtension_OnChildEvent((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_custom_event(void* self, void* event) {
    QQuick3DRenderExtension_CustomEvent((QQuick3DRenderExtension*)self, (QEvent*)event);
}

void q_quick3drenderextension_super_custom_event(void* self, void* event) {
    QQuick3DRenderExtension_SuperCustomEvent((QQuick3DRenderExtension*)self, (QEvent*)event);
}

void q_quick3drenderextension_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DRenderExtension_OnCustomEvent((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_connect_notify(void* self, const void* signal) {
    QQuick3DRenderExtension_ConnectNotify((QQuick3DRenderExtension*)self, (QMetaMethod*)signal);
}

void q_quick3drenderextension_super_connect_notify(void* self, const void* signal) {
    QQuick3DRenderExtension_SuperConnectNotify((QQuick3DRenderExtension*)self, (QMetaMethod*)signal);
}

void q_quick3drenderextension_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DRenderExtension_OnConnectNotify((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

void q_quick3drenderextension_disconnect_notify(void* self, const void* signal) {
    QQuick3DRenderExtension_DisconnectNotify((QQuick3DRenderExtension*)self, (QMetaMethod*)signal);
}

void q_quick3drenderextension_super_disconnect_notify(void* self, const void* signal) {
    QQuick3DRenderExtension_SuperDisconnectNotify((QQuick3DRenderExtension*)self, (QMetaMethod*)signal);
}

void q_quick3drenderextension_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DRenderExtension_OnDisconnectNotify((QQuick3DRenderExtension*)self, (intptr_t)callback);
}

bool q_quick3drenderextension_is_component_complete(const void* self) {
    return QQuick3DRenderExtension_IsComponentComplete((QQuick3DRenderExtension*)self);
}

QObject* q_quick3drenderextension_sender(const void* self) {
    return QQuick3DRenderExtension_Sender((QQuick3DRenderExtension*)self);
}

int32_t q_quick3drenderextension_sender_signal_index(const void* self) {
    return QQuick3DRenderExtension_SenderSignalIndex((QQuick3DRenderExtension*)self);
}

int32_t q_quick3drenderextension_receivers(const void* self, const char* signal) {
    return QQuick3DRenderExtension_Receivers((QQuick3DRenderExtension*)self, signal);
}

bool q_quick3drenderextension_is_signal_connected(const void* self, const void* signal) {
    return QQuick3DRenderExtension_IsSignalConnected((QQuick3DRenderExtension*)self, (QMetaMethod*)signal);
}

void q_quick3drenderextension_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quick3drenderextension_delete(void* self) {
    QQuick3DRenderExtension_Delete((QQuick3DRenderExtension*)(self));
}
