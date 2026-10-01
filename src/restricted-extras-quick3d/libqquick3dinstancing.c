#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "../libqquaternion.hpp"
#include "libqquick3dobject.hpp"
#include "../libqvectornd.hpp"
#include "libqquick3dinstancing.hpp"
#include "libqquick3dinstancing.h"

QQuick3DInstancing* q_quick3dinstancing_new() {
    return QQuick3DInstancing_New();
}

QQuick3DInstancing* q_quick3dinstancing_new2(void* parent) {
    return QQuick3DInstancing_New2((QQuick3DObject*)parent);
}

const QMetaObject* q_quick3dinstancing_meta_object(const void* self) {
    return QQuick3DInstancing_MetaObject((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QQuick3DInstancing_OnMetaObject((QQuick3DInstancing*)self, (intptr_t)callback);
}

const QMetaObject* q_quick3dinstancing_super_meta_object(const void* self) {
    return QQuick3DInstancing_SuperMetaObject((QQuick3DInstancing*)self);
}

void* q_quick3dinstancing_metacast(void* self, const char* param1) {
    return QQuick3DInstancing_Metacast((QQuick3DInstancing*)self, param1);
}

void q_quick3dinstancing_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuick3DInstancing_OnMetacast((QQuick3DInstancing*)self, (intptr_t)callback);
}

void* q_quick3dinstancing_super_metacast(void* self, const char* param1) {
    return QQuick3DInstancing_SuperMetacast((QQuick3DInstancing*)self, param1);
}

int32_t q_quick3dinstancing_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DInstancing_Metacall((QQuick3DInstancing*)self, param1, param2, param3);
}

void q_quick3dinstancing_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuick3DInstancing_OnMetacall((QQuick3DInstancing*)self, (intptr_t)callback);
}

int32_t q_quick3dinstancing_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DInstancing_SuperMetacall((QQuick3DInstancing*)self, param1, param2, param3);
}

const char* q_quick3dinstancing_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_quick3dinstancing_instance_buffer(void* self, int* instanceCount) {
    libqt_string _str = QQuick3DInstancing_InstanceBuffer((QQuick3DInstancing*)self, instanceCount);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_quick3dinstancing_instance_count_override(const void* self) {
    return QQuick3DInstancing_InstanceCountOverride((QQuick3DInstancing*)self);
}

bool q_quick3dinstancing_has_transparency(const void* self) {
    return QQuick3DInstancing_HasTransparency((QQuick3DInstancing*)self);
}

bool q_quick3dinstancing_depth_sorting_enabled(const void* self) {
    return QQuick3DInstancing_DepthSortingEnabled((QQuick3DInstancing*)self);
}

QVector3D* q_quick3dinstancing_instance_position(void* self, int index) {
    return QQuick3DInstancing_InstancePosition((QQuick3DInstancing*)self, index);
}

QVector3D* q_quick3dinstancing_instance_scale(void* self, int index) {
    return QQuick3DInstancing_InstanceScale((QQuick3DInstancing*)self, index);
}

QQuaternion* q_quick3dinstancing_instance_rotation(void* self, int index) {
    return QQuick3DInstancing_InstanceRotation((QQuick3DInstancing*)self, index);
}

QColor* q_quick3dinstancing_instance_color(void* self, int index) {
    return QQuick3DInstancing_InstanceColor((QQuick3DInstancing*)self, index);
}

QVector4D* q_quick3dinstancing_instance_custom_data(void* self, int index) {
    return QQuick3DInstancing_InstanceCustomData((QQuick3DInstancing*)self, index);
}

void q_quick3dinstancing_set_instance_count_override(void* self, int instanceCountOverride) {
    QQuick3DInstancing_SetInstanceCountOverride((QQuick3DInstancing*)self, instanceCountOverride);
}

void q_quick3dinstancing_set_has_transparency(void* self, bool hasTransparency) {
    QQuick3DInstancing_SetHasTransparency((QQuick3DInstancing*)self, hasTransparency);
}

void q_quick3dinstancing_set_depth_sorting_enabled(void* self, bool enabled) {
    QQuick3DInstancing_SetDepthSortingEnabled((QQuick3DInstancing*)self, enabled);
}

void q_quick3dinstancing_instance_table_changed(void* self) {
    QQuick3DInstancing_InstanceTableChanged((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_instance_table_changed(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_Connect_InstanceTableChanged((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_instance_node_dirty(void* self) {
    QQuick3DInstancing_InstanceNodeDirty((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_instance_node_dirty(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_Connect_InstanceNodeDirty((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_instance_count_override_changed(void* self) {
    QQuick3DInstancing_InstanceCountOverrideChanged((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_instance_count_override_changed(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_Connect_InstanceCountOverrideChanged((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_has_transparency_changed(void* self) {
    QQuick3DInstancing_HasTransparencyChanged((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_has_transparency_changed(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_Connect_HasTransparencyChanged((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_depth_sorting_enabled_changed(void* self) {
    QQuick3DInstancing_DepthSortingEnabledChanged((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_depth_sorting_enabled_changed(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_Connect_DepthSortingEnabledChanged((QQuick3DInstancing*)self, (intptr_t)callback);
}

char* q_quick3dinstancing_get_instance_buffer(void* self, int* instanceCount) {
    libqt_string _str = QQuick3DInstancing_GetInstanceBuffer((QQuick3DInstancing*)self, instanceCount);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dinstancing_on_get_instance_buffer(void* self, libqt_string (*callback)(void*, int*)) {
    QQuick3DInstancing_OnGetInstanceBuffer((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_mark_dirty(void* self) {
    QQuick3DInstancing_MarkDirty((QQuick3DInstancing*)self);
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry(void* self, const void* position, const void* scale, const void* eulerRotation, const void* color) {
    return QQuick3DInstancing_CalculateTableEntry((QQuick3DInstancing*)self, (QVector3D*)position, (QVector3D*)scale, (QVector3D*)eulerRotation, (QColor*)color);
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry_from_quaternion(void* self, const void* position, const void* scale, const void* rotation, const void* color) {
    return QQuick3DInstancing_CalculateTableEntryFromQuaternion((QQuick3DInstancing*)self, (QVector3D*)position, (QVector3D*)scale, (QQuaternion*)rotation, (QColor*)color);
}

const char* q_quick3dinstancing_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3dinstancing_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry5(void* self, const void* position, const void* scale, const void* eulerRotation, const void* color, const void* customData) {
    return QQuick3DInstancing_CalculateTableEntry5((QQuick3DInstancing*)self, (QVector3D*)position, (QVector3D*)scale, (QVector3D*)eulerRotation, (QColor*)color, (QVector4D*)customData);
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing_calculate_table_entry_from_quaternion5(void* self, const void* position, const void* scale, const void* rotation, const void* color, const void* customData) {
    return QQuick3DInstancing_CalculateTableEntryFromQuaternion5((QQuick3DInstancing*)self, (QVector3D*)position, (QVector3D*)scale, (QQuaternion*)rotation, (QColor*)color, (QVector4D*)customData);
}

QQmlParserStatus* q_quick3dinstancing_as_q_qml_parser_status(const void* self) {
    return QQuick3DObject_AsQQmlParserStatus((QQuick3DObject*)self);
}

QQuick3DInstancing* q_quick3dinstancing_from_q_qml_parser_status(const void* _qqmlparserstatus) {
    return (QQuick3DInstancing*)QQuick3DObject_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

const char* q_quick3dinstancing_state(const void* self) {
    libqt_string _str = QQuick3DObject_State((QQuick3DObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dinstancing_set_state(void* self, const char* state) {
    QQuick3DObject_SetState((QQuick3DObject*)self, qstring(state));
}

libqt_list /* of QQuick3DObject* */ q_quick3dinstancing_child_items(const void* self) {
    libqt_list _arr = QQuick3DObject_ChildItems((QQuick3DObject*)self);
    return _arr;
}

QQuick3DObject* q_quick3dinstancing_parent_item(const void* self) {
    return QQuick3DObject_ParentItem((QQuick3DObject*)self);
}

void q_quick3dinstancing_update(void* self) {
    QQuick3DObject_Update((QQuick3DObject*)self);
}

void q_quick3dinstancing_set_parent_item(void* self, void* parentItem) {
    QQuick3DObject_SetParentItem((QQuick3DObject*)self, (QQuick3DObject*)parentItem);
}

void q_quick3dinstancing_parent_changed(void* self) {
    QQuick3DObject_ParentChanged((QQuick3DObject*)self);
}

void q_quick3dinstancing_on_parent_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ParentChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dinstancing_children_changed(void* self) {
    QQuick3DObject_ChildrenChanged((QQuick3DObject*)self);
}

void q_quick3dinstancing_on_children_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ChildrenChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dinstancing_state_changed(void* self) {
    QQuick3DObject_StateChanged((QQuick3DObject*)self);
}

void q_quick3dinstancing_on_state_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_StateChanged((QQuick3DObject*)self, (intptr_t)callback);
}

const char* q_quick3dinstancing_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dinstancing_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quick3dinstancing_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quick3dinstancing_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quick3dinstancing_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quick3dinstancing_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quick3dinstancing_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quick3dinstancing_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quick3dinstancing_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quick3dinstancing_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quick3dinstancing_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quick3dinstancing_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quick3dinstancing_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quick3dinstancing_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quick3dinstancing_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quick3dinstancing_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quick3dinstancing_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quick3dinstancing_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quick3dinstancing_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quick3dinstancing_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quick3dinstancing_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quick3dinstancing_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quick3dinstancing_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quick3dinstancing_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quick3dinstancing_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quick3dinstancing_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quick3dinstancing_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quick3dinstancing_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quick3dinstancing_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quick3dinstancing_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quick3dinstancing_dynamic_property_names\n");
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

QBindingStorage* q_quick3dinstancing_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quick3dinstancing_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quick3dinstancing_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quick3dinstancing_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quick3dinstancing_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quick3dinstancing_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quick3dinstancing_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quick3dinstancing_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quick3dinstancing_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quick3dinstancing_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quick3dinstancing_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quick3dinstancing_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quick3dinstancing_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quick3dinstancing_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quick3dinstancing_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quick3dinstancing_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quick3dinstancing_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quick3dinstancing_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_quick3dinstancing_operator_assign(void* self, const void* param1) {
    QQmlParserStatus_OperatorAssign(q_quick3dinstancing_as_q_qml_parser_status(self), (QQmlParserStatus*)param1);
}

void q_quick3dinstancing_mark_all_dirty(void* self) {
    QQuick3DInstancing_MarkAllDirty((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_super_mark_all_dirty(void* self) {
    QQuick3DInstancing_SuperMarkAllDirty((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_mark_all_dirty(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_OnMarkAllDirty((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DInstancing_ItemChange((QQuick3DInstancing*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dinstancing_super_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DInstancing_SuperItemChange((QQuick3DInstancing*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dinstancing_on_item_change(void* self, void (*callback)(void*, int32_t, const void*)) {
    QQuick3DInstancing_OnItemChange((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_class_begin(void* self) {
    QQuick3DInstancing_ClassBegin((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_super_class_begin(void* self) {
    QQuick3DInstancing_SuperClassBegin((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_class_begin(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_OnClassBegin((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_component_complete(void* self) {
    QQuick3DInstancing_ComponentComplete((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_super_component_complete(void* self) {
    QQuick3DInstancing_SuperComponentComplete((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_component_complete(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_OnComponentComplete((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_pre_sync(void* self) {
    QQuick3DInstancing_PreSync((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_super_pre_sync(void* self) {
    QQuick3DInstancing_SuperPreSync((QQuick3DInstancing*)self);
}

void q_quick3dinstancing_on_pre_sync(void* self, void (*callback)(void*)) {
    QQuick3DInstancing_OnPreSync((QQuick3DInstancing*)self, (intptr_t)callback);
}

bool q_quick3dinstancing_event(void* self, void* event) {
    return QQuick3DInstancing_Event((QQuick3DInstancing*)self, (QEvent*)event);
}

bool q_quick3dinstancing_super_event(void* self, void* event) {
    return QQuick3DInstancing_SuperEvent((QQuick3DInstancing*)self, (QEvent*)event);
}

void q_quick3dinstancing_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuick3DInstancing_OnEvent((QQuick3DInstancing*)self, (intptr_t)callback);
}

bool q_quick3dinstancing_event_filter(void* self, void* watched, void* event) {
    return QQuick3DInstancing_EventFilter((QQuick3DInstancing*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quick3dinstancing_super_event_filter(void* self, void* watched, void* event) {
    return QQuick3DInstancing_SuperEventFilter((QQuick3DInstancing*)self, (QObject*)watched, (QEvent*)event);
}

void q_quick3dinstancing_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuick3DInstancing_OnEventFilter((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_timer_event(void* self, void* event) {
    QQuick3DInstancing_TimerEvent((QQuick3DInstancing*)self, (QTimerEvent*)event);
}

void q_quick3dinstancing_super_timer_event(void* self, void* event) {
    QQuick3DInstancing_SuperTimerEvent((QQuick3DInstancing*)self, (QTimerEvent*)event);
}

void q_quick3dinstancing_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DInstancing_OnTimerEvent((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_child_event(void* self, void* event) {
    QQuick3DInstancing_ChildEvent((QQuick3DInstancing*)self, (QChildEvent*)event);
}

void q_quick3dinstancing_super_child_event(void* self, void* event) {
    QQuick3DInstancing_SuperChildEvent((QQuick3DInstancing*)self, (QChildEvent*)event);
}

void q_quick3dinstancing_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DInstancing_OnChildEvent((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_custom_event(void* self, void* event) {
    QQuick3DInstancing_CustomEvent((QQuick3DInstancing*)self, (QEvent*)event);
}

void q_quick3dinstancing_super_custom_event(void* self, void* event) {
    QQuick3DInstancing_SuperCustomEvent((QQuick3DInstancing*)self, (QEvent*)event);
}

void q_quick3dinstancing_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DInstancing_OnCustomEvent((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_connect_notify(void* self, const void* signal) {
    QQuick3DInstancing_ConnectNotify((QQuick3DInstancing*)self, (QMetaMethod*)signal);
}

void q_quick3dinstancing_super_connect_notify(void* self, const void* signal) {
    QQuick3DInstancing_SuperConnectNotify((QQuick3DInstancing*)self, (QMetaMethod*)signal);
}

void q_quick3dinstancing_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DInstancing_OnConnectNotify((QQuick3DInstancing*)self, (intptr_t)callback);
}

void q_quick3dinstancing_disconnect_notify(void* self, const void* signal) {
    QQuick3DInstancing_DisconnectNotify((QQuick3DInstancing*)self, (QMetaMethod*)signal);
}

void q_quick3dinstancing_super_disconnect_notify(void* self, const void* signal) {
    QQuick3DInstancing_SuperDisconnectNotify((QQuick3DInstancing*)self, (QMetaMethod*)signal);
}

void q_quick3dinstancing_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DInstancing_OnDisconnectNotify((QQuick3DInstancing*)self, (intptr_t)callback);
}

bool q_quick3dinstancing_is_component_complete(const void* self) {
    return QQuick3DInstancing_IsComponentComplete((QQuick3DInstancing*)self);
}

QObject* q_quick3dinstancing_sender(const void* self) {
    return QQuick3DInstancing_Sender((QQuick3DInstancing*)self);
}

int32_t q_quick3dinstancing_sender_signal_index(const void* self) {
    return QQuick3DInstancing_SenderSignalIndex((QQuick3DInstancing*)self);
}

int32_t q_quick3dinstancing_receivers(const void* self, const char* signal) {
    return QQuick3DInstancing_Receivers((QQuick3DInstancing*)self, signal);
}

bool q_quick3dinstancing_is_signal_connected(const void* self, const void* signal) {
    return QQuick3DInstancing_IsSignalConnected((QQuick3DInstancing*)self, (QMetaMethod*)signal);
}

void q_quick3dinstancing_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quick3dinstancing_delete(void* self) {
    QQuick3DInstancing_Delete((QQuick3DInstancing*)(self));
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new() {
    return QQuick3DInstancing__InstanceTableEntry_New();
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new2(const void* other) {
    return QQuick3DInstancing__InstanceTableEntry_New2((QQuick3DInstancing__InstanceTableEntry*)other);
}

QQuick3DInstancing__InstanceTableEntry* q_quick3dinstancing__instancetableentry_new3(void* other) {
    return QQuick3DInstancing__InstanceTableEntry_New3((QQuick3DInstancing__InstanceTableEntry*)other);
}

void q_quick3dinstancing__instancetableentry_copy_assign(void* self, void* other) {
    QQuick3DInstancing__InstanceTableEntry_CopyAssign((QQuick3DInstancing__InstanceTableEntry*)self, (QQuick3DInstancing__InstanceTableEntry*)other);
}

void q_quick3dinstancing__instancetableentry_move_assign(void* self, void* other) {
    QQuick3DInstancing__InstanceTableEntry_MoveAssign((QQuick3DInstancing__InstanceTableEntry*)self, (QQuick3DInstancing__InstanceTableEntry*)other);
}

QVector4D* q_quick3dinstancing__instancetableentry_row0(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_Row0((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_set_row0(void* self, void* row0) {
    QQuick3DInstancing__InstanceTableEntry_SetRow0((QQuick3DInstancing__InstanceTableEntry*)self, (QVector4D*)row0);
}

QVector4D* q_quick3dinstancing__instancetableentry_row1(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_Row1((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_set_row1(void* self, void* row1) {
    QQuick3DInstancing__InstanceTableEntry_SetRow1((QQuick3DInstancing__InstanceTableEntry*)self, (QVector4D*)row1);
}

QVector4D* q_quick3dinstancing__instancetableentry_row2(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_Row2((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_set_row2(void* self, void* row2) {
    QQuick3DInstancing__InstanceTableEntry_SetRow2((QQuick3DInstancing__InstanceTableEntry*)self, (QVector4D*)row2);
}

QVector4D* q_quick3dinstancing__instancetableentry_color(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_Color((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_set_color(void* self, void* color) {
    QQuick3DInstancing__InstanceTableEntry_SetColor((QQuick3DInstancing__InstanceTableEntry*)self, (QVector4D*)color);
}

QVector4D* q_quick3dinstancing__instancetableentry_instance_data(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_InstanceData((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_set_instance_data(void* self, void* instanceData) {
    QQuick3DInstancing__InstanceTableEntry_SetInstanceData((QQuick3DInstancing__InstanceTableEntry*)self, (QVector4D*)instanceData);
}

QVector3D* q_quick3dinstancing__instancetableentry_get_position(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_GetPosition((QQuick3DInstancing__InstanceTableEntry*)self);
}

QVector3D* q_quick3dinstancing__instancetableentry_get_scale(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_GetScale((QQuick3DInstancing__InstanceTableEntry*)self);
}

QQuaternion* q_quick3dinstancing__instancetableentry_get_rotation(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_GetRotation((QQuick3DInstancing__InstanceTableEntry*)self);
}

QColor* q_quick3dinstancing__instancetableentry_get_color(const void* self) {
    return QQuick3DInstancing__InstanceTableEntry_GetColor((QQuick3DInstancing__InstanceTableEntry*)self);
}

void q_quick3dinstancing__instancetableentry_delete(void* self) {
    QQuick3DInstancing__InstanceTableEntry_Delete((QQuick3DInstancing__InstanceTableEntry*)(self));
}
