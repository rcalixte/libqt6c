#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquick3dobject.hpp"
#include "../libqsize.hpp"
#include "libqquick3dtexturedata.hpp"
#include "libqquick3dtexturedata.h"

QQuick3DTextureData* q_quick3dtexturedata_new() {
    return QQuick3DTextureData_New();
}

QQuick3DTextureData* q_quick3dtexturedata_new2(void* parent) {
    return QQuick3DTextureData_New2((QQuick3DObject*)parent);
}

const QMetaObject* q_quick3dtexturedata_meta_object(const void* self) {
    return QQuick3DTextureData_MetaObject((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QQuick3DTextureData_OnMetaObject((QQuick3DTextureData*)self, (intptr_t)callback);
}

const QMetaObject* q_quick3dtexturedata_super_meta_object(const void* self) {
    return QQuick3DTextureData_SuperMetaObject((QQuick3DTextureData*)self);
}

void* q_quick3dtexturedata_metacast(void* self, const char* param1) {
    return QQuick3DTextureData_Metacast((QQuick3DTextureData*)self, param1);
}

void q_quick3dtexturedata_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuick3DTextureData_OnMetacast((QQuick3DTextureData*)self, (intptr_t)callback);
}

void* q_quick3dtexturedata_super_metacast(void* self, const char* param1) {
    return QQuick3DTextureData_SuperMetacast((QQuick3DTextureData*)self, param1);
}

int32_t q_quick3dtexturedata_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DTextureData_Metacall((QQuick3DTextureData*)self, param1, param2, param3);
}

void q_quick3dtexturedata_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuick3DTextureData_OnMetacall((QQuick3DTextureData*)self, (intptr_t)callback);
}

int32_t q_quick3dtexturedata_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DTextureData_SuperMetacall((QQuick3DTextureData*)self, param1, param2, param3);
}

const char* q_quick3dtexturedata_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3dtexturedata_texture_data(const void* self) {
    libqt_string _str = QQuick3DTextureData_TextureData((QQuick3DTextureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dtexturedata_set_texture_data(void* self, const char* data) {
    QQuick3DTextureData_SetTextureData((QQuick3DTextureData*)self, qstring(data));
}

QSize* q_quick3dtexturedata_size(const void* self) {
    return QQuick3DTextureData_Size((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_set_size(void* self, const void* size) {
    QQuick3DTextureData_SetSize((QQuick3DTextureData*)self, (QSize*)size);
}

int32_t q_quick3dtexturedata_depth(const void* self) {
    return QQuick3DTextureData_Depth((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_set_depth(void* self, int depth) {
    QQuick3DTextureData_SetDepth((QQuick3DTextureData*)self, depth);
}

int32_t q_quick3dtexturedata_format(const void* self) {
    return QQuick3DTextureData_Format((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_set_format(void* self, int32_t format) {
    QQuick3DTextureData_SetFormat((QQuick3DTextureData*)self, format);
}

bool q_quick3dtexturedata_has_transparency(const void* self) {
    return QQuick3DTextureData_HasTransparency((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_set_has_transparency(void* self, bool hasTransparency) {
    QQuick3DTextureData_SetHasTransparency((QQuick3DTextureData*)self, hasTransparency);
}

void q_quick3dtexturedata_texture_data_node_dirty(void* self) {
    QQuick3DTextureData_TextureDataNodeDirty((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_texture_data_node_dirty(void* self, void (*callback)(void*)) {
    QQuick3DTextureData_Connect_TextureDataNodeDirty((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_mark_all_dirty(void* self) {
    QQuick3DTextureData_MarkAllDirty((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_mark_all_dirty(void* self, void (*callback)(void*)) {
    QQuick3DTextureData_OnMarkAllDirty((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_super_mark_all_dirty(void* self) {
    QQuick3DTextureData_SuperMarkAllDirty((QQuick3DTextureData*)self);
}

const char* q_quick3dtexturedata_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3dtexturedata_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlParserStatus* q_quick3dtexturedata_as_q_qml_parser_status(const void* self) {
    return QQuick3DObject_AsQQmlParserStatus((QQuick3DObject*)self);
}

QQuick3DTextureData* q_quick3dtexturedata_from_q_qml_parser_status(const void* _qqmlparserstatus) {
    return (QQuick3DTextureData*)QQuick3DObject_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

const char* q_quick3dtexturedata_state(const void* self) {
    libqt_string _str = QQuick3DObject_State((QQuick3DObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dtexturedata_set_state(void* self, const char* state) {
    QQuick3DObject_SetState((QQuick3DObject*)self, qstring(state));
}

libqt_list /* of QQuick3DObject* */ q_quick3dtexturedata_child_items(const void* self) {
    libqt_list _arr = QQuick3DObject_ChildItems((QQuick3DObject*)self);
    return _arr;
}

QQuick3DObject* q_quick3dtexturedata_parent_item(const void* self) {
    return QQuick3DObject_ParentItem((QQuick3DObject*)self);
}

void q_quick3dtexturedata_update(void* self) {
    QQuick3DObject_Update((QQuick3DObject*)self);
}

void q_quick3dtexturedata_set_parent_item(void* self, void* parentItem) {
    QQuick3DObject_SetParentItem((QQuick3DObject*)self, (QQuick3DObject*)parentItem);
}

void q_quick3dtexturedata_parent_changed(void* self) {
    QQuick3DObject_ParentChanged((QQuick3DObject*)self);
}

void q_quick3dtexturedata_on_parent_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ParentChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_children_changed(void* self) {
    QQuick3DObject_ChildrenChanged((QQuick3DObject*)self);
}

void q_quick3dtexturedata_on_children_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ChildrenChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_state_changed(void* self) {
    QQuick3DObject_StateChanged((QQuick3DObject*)self);
}

void q_quick3dtexturedata_on_state_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_StateChanged((QQuick3DObject*)self, (intptr_t)callback);
}

const char* q_quick3dtexturedata_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dtexturedata_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quick3dtexturedata_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quick3dtexturedata_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quick3dtexturedata_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quick3dtexturedata_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quick3dtexturedata_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quick3dtexturedata_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quick3dtexturedata_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quick3dtexturedata_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quick3dtexturedata_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quick3dtexturedata_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quick3dtexturedata_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quick3dtexturedata_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quick3dtexturedata_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quick3dtexturedata_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quick3dtexturedata_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quick3dtexturedata_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quick3dtexturedata_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quick3dtexturedata_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quick3dtexturedata_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quick3dtexturedata_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quick3dtexturedata_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quick3dtexturedata_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quick3dtexturedata_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quick3dtexturedata_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quick3dtexturedata_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quick3dtexturedata_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quick3dtexturedata_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quick3dtexturedata_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quick3dtexturedata_dynamic_property_names\n");
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

QBindingStorage* q_quick3dtexturedata_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quick3dtexturedata_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quick3dtexturedata_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quick3dtexturedata_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quick3dtexturedata_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quick3dtexturedata_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quick3dtexturedata_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quick3dtexturedata_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quick3dtexturedata_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quick3dtexturedata_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quick3dtexturedata_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quick3dtexturedata_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quick3dtexturedata_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quick3dtexturedata_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quick3dtexturedata_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quick3dtexturedata_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quick3dtexturedata_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quick3dtexturedata_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DTextureData_ItemChange((QQuick3DTextureData*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dtexturedata_super_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DTextureData_SuperItemChange((QQuick3DTextureData*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dtexturedata_on_item_change(void* self, void (*callback)(void*, int32_t, const void*)) {
    QQuick3DTextureData_OnItemChange((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_class_begin(void* self) {
    QQuick3DTextureData_ClassBegin((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_super_class_begin(void* self) {
    QQuick3DTextureData_SuperClassBegin((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_class_begin(void* self, void (*callback)(void*)) {
    QQuick3DTextureData_OnClassBegin((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_component_complete(void* self) {
    QQuick3DTextureData_ComponentComplete((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_super_component_complete(void* self) {
    QQuick3DTextureData_SuperComponentComplete((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_component_complete(void* self, void (*callback)(void*)) {
    QQuick3DTextureData_OnComponentComplete((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_pre_sync(void* self) {
    QQuick3DTextureData_PreSync((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_super_pre_sync(void* self) {
    QQuick3DTextureData_SuperPreSync((QQuick3DTextureData*)self);
}

void q_quick3dtexturedata_on_pre_sync(void* self, void (*callback)(void*)) {
    QQuick3DTextureData_OnPreSync((QQuick3DTextureData*)self, (intptr_t)callback);
}

bool q_quick3dtexturedata_event(void* self, void* event) {
    return QQuick3DTextureData_Event((QQuick3DTextureData*)self, (QEvent*)event);
}

bool q_quick3dtexturedata_super_event(void* self, void* event) {
    return QQuick3DTextureData_SuperEvent((QQuick3DTextureData*)self, (QEvent*)event);
}

void q_quick3dtexturedata_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuick3DTextureData_OnEvent((QQuick3DTextureData*)self, (intptr_t)callback);
}

bool q_quick3dtexturedata_event_filter(void* self, void* watched, void* event) {
    return QQuick3DTextureData_EventFilter((QQuick3DTextureData*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quick3dtexturedata_super_event_filter(void* self, void* watched, void* event) {
    return QQuick3DTextureData_SuperEventFilter((QQuick3DTextureData*)self, (QObject*)watched, (QEvent*)event);
}

void q_quick3dtexturedata_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuick3DTextureData_OnEventFilter((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_timer_event(void* self, void* event) {
    QQuick3DTextureData_TimerEvent((QQuick3DTextureData*)self, (QTimerEvent*)event);
}

void q_quick3dtexturedata_super_timer_event(void* self, void* event) {
    QQuick3DTextureData_SuperTimerEvent((QQuick3DTextureData*)self, (QTimerEvent*)event);
}

void q_quick3dtexturedata_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DTextureData_OnTimerEvent((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_child_event(void* self, void* event) {
    QQuick3DTextureData_ChildEvent((QQuick3DTextureData*)self, (QChildEvent*)event);
}

void q_quick3dtexturedata_super_child_event(void* self, void* event) {
    QQuick3DTextureData_SuperChildEvent((QQuick3DTextureData*)self, (QChildEvent*)event);
}

void q_quick3dtexturedata_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DTextureData_OnChildEvent((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_custom_event(void* self, void* event) {
    QQuick3DTextureData_CustomEvent((QQuick3DTextureData*)self, (QEvent*)event);
}

void q_quick3dtexturedata_super_custom_event(void* self, void* event) {
    QQuick3DTextureData_SuperCustomEvent((QQuick3DTextureData*)self, (QEvent*)event);
}

void q_quick3dtexturedata_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DTextureData_OnCustomEvent((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_connect_notify(void* self, const void* signal) {
    QQuick3DTextureData_ConnectNotify((QQuick3DTextureData*)self, (QMetaMethod*)signal);
}

void q_quick3dtexturedata_super_connect_notify(void* self, const void* signal) {
    QQuick3DTextureData_SuperConnectNotify((QQuick3DTextureData*)self, (QMetaMethod*)signal);
}

void q_quick3dtexturedata_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DTextureData_OnConnectNotify((QQuick3DTextureData*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_disconnect_notify(void* self, const void* signal) {
    QQuick3DTextureData_DisconnectNotify((QQuick3DTextureData*)self, (QMetaMethod*)signal);
}

void q_quick3dtexturedata_super_disconnect_notify(void* self, const void* signal) {
    QQuick3DTextureData_SuperDisconnectNotify((QQuick3DTextureData*)self, (QMetaMethod*)signal);
}

void q_quick3dtexturedata_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DTextureData_OnDisconnectNotify((QQuick3DTextureData*)self, (intptr_t)callback);
}

bool q_quick3dtexturedata_is_component_complete(const void* self) {
    return QQuick3DTextureData_IsComponentComplete((QQuick3DTextureData*)self);
}

QObject* q_quick3dtexturedata_sender(const void* self) {
    return QQuick3DTextureData_Sender((QQuick3DTextureData*)self);
}

int32_t q_quick3dtexturedata_sender_signal_index(const void* self) {
    return QQuick3DTextureData_SenderSignalIndex((QQuick3DTextureData*)self);
}

int32_t q_quick3dtexturedata_receivers(const void* self, const char* signal) {
    return QQuick3DTextureData_Receivers((QQuick3DTextureData*)self, signal);
}

bool q_quick3dtexturedata_is_signal_connected(const void* self, const void* signal) {
    return QQuick3DTextureData_IsSignalConnected((QQuick3DTextureData*)self, (QMetaMethod*)signal);
}

void q_quick3dtexturedata_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quick3dtexturedata_delete(void* self) {
    QQuick3DTextureData_Delete((QQuick3DTextureData*)(self));
}
