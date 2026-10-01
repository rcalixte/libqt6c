#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquick3dobject.hpp"
#include "../libqvectornd.hpp"
#include "libqquick3dgeometry.hpp"
#include "libqquick3dgeometry.h"

QQuick3DGeometry* q_quick3dgeometry_new() {
    return QQuick3DGeometry_New();
}

QQuick3DGeometry* q_quick3dgeometry_new2(void* parent) {
    return QQuick3DGeometry_New2((QQuick3DObject*)parent);
}

const QMetaObject* q_quick3dgeometry_meta_object(const void* self) {
    return QQuick3DGeometry_MetaObject((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QQuick3DGeometry_OnMetaObject((QQuick3DGeometry*)self, (intptr_t)callback);
}

const QMetaObject* q_quick3dgeometry_super_meta_object(const void* self) {
    return QQuick3DGeometry_SuperMetaObject((QQuick3DGeometry*)self);
}

void* q_quick3dgeometry_metacast(void* self, const char* param1) {
    return QQuick3DGeometry_Metacast((QQuick3DGeometry*)self, param1);
}

void q_quick3dgeometry_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuick3DGeometry_OnMetacast((QQuick3DGeometry*)self, (intptr_t)callback);
}

void* q_quick3dgeometry_super_metacast(void* self, const char* param1) {
    return QQuick3DGeometry_SuperMetacast((QQuick3DGeometry*)self, param1);
}

int32_t q_quick3dgeometry_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DGeometry_Metacall((QQuick3DGeometry*)self, param1, param2, param3);
}

void q_quick3dgeometry_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuick3DGeometry_OnMetacall((QQuick3DGeometry*)self, (intptr_t)callback);
}

int32_t q_quick3dgeometry_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuick3DGeometry_SuperMetacall((QQuick3DGeometry*)self, param1, param2, param3);
}

const char* q_quick3dgeometry_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_quick3dgeometry_vertex_data(const void* self) {
    libqt_string _str = QQuick3DGeometry_VertexData((QQuick3DGeometry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_quick3dgeometry_index_data(const void* self) {
    libqt_string _str = QQuick3DGeometry_IndexData((QQuick3DGeometry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_quick3dgeometry_attribute_count(const void* self) {
    return QQuick3DGeometry_AttributeCount((QQuick3DGeometry*)self);
}

QQuick3DGeometry__Attribute* q_quick3dgeometry_attribute(const void* self, int index) {
    return QQuick3DGeometry_Attribute((QQuick3DGeometry*)self, index);
}

int32_t q_quick3dgeometry_primitive_type(const void* self) {
    return QQuick3DGeometry_PrimitiveType((QQuick3DGeometry*)self);
}

QVector3D* q_quick3dgeometry_bounds_min(const void* self) {
    return QQuick3DGeometry_BoundsMin((QQuick3DGeometry*)self);
}

QVector3D* q_quick3dgeometry_bounds_max(const void* self) {
    return QQuick3DGeometry_BoundsMax((QQuick3DGeometry*)self);
}

int32_t q_quick3dgeometry_stride(const void* self) {
    return QQuick3DGeometry_Stride((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_set_vertex_data(void* self, char* data) {
    QQuick3DGeometry_SetVertexData((QQuick3DGeometry*)self, qstring(data));
}

void q_quick3dgeometry_set_vertex_data2(void* self, int offset, char* data) {
    QQuick3DGeometry_SetVertexData2((QQuick3DGeometry*)self, offset, qstring(data));
}

void q_quick3dgeometry_set_index_data(void* self, char* data) {
    QQuick3DGeometry_SetIndexData((QQuick3DGeometry*)self, qstring(data));
}

void q_quick3dgeometry_set_index_data2(void* self, int offset, char* data) {
    QQuick3DGeometry_SetIndexData2((QQuick3DGeometry*)self, offset, qstring(data));
}

void q_quick3dgeometry_set_stride(void* self, int stride) {
    QQuick3DGeometry_SetStride((QQuick3DGeometry*)self, stride);
}

void q_quick3dgeometry_set_bounds(void* self, const void* min, const void* max) {
    QQuick3DGeometry_SetBounds((QQuick3DGeometry*)self, (QVector3D*)min, (QVector3D*)max);
}

void q_quick3dgeometry_set_primitive_type(void* self, int32_t type) {
    QQuick3DGeometry_SetPrimitiveType((QQuick3DGeometry*)self, type);
}

void q_quick3dgeometry_add_attribute(void* self, int32_t semantic, int offset, int32_t componentType) {
    QQuick3DGeometry_AddAttribute((QQuick3DGeometry*)self, semantic, offset, componentType);
}

void q_quick3dgeometry_add_attribute2(void* self, const void* att) {
    QQuick3DGeometry_AddAttribute2((QQuick3DGeometry*)self, (QQuick3DGeometry__Attribute*)att);
}

int32_t q_quick3dgeometry_subset_count(const void* self) {
    return QQuick3DGeometry_SubsetCount((QQuick3DGeometry*)self);
}

QVector3D* q_quick3dgeometry_subset_bounds_min(const void* self, int subset) {
    return QQuick3DGeometry_SubsetBoundsMin((QQuick3DGeometry*)self, subset);
}

QVector3D* q_quick3dgeometry_subset_bounds_max(const void* self, int subset) {
    return QQuick3DGeometry_SubsetBoundsMax((QQuick3DGeometry*)self, subset);
}

int32_t q_quick3dgeometry_subset_offset(const void* self, int subset) {
    return QQuick3DGeometry_SubsetOffset((QQuick3DGeometry*)self, subset);
}

int32_t q_quick3dgeometry_subset_count2(const void* self, int subset) {
    return QQuick3DGeometry_SubsetCount2((QQuick3DGeometry*)self, subset);
}

const char* q_quick3dgeometry_subset_name(const void* self, int subset) {
    libqt_string _str = QQuick3DGeometry_SubsetName((QQuick3DGeometry*)self, subset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dgeometry_add_subset(void* self, int offset, int count, const void* boundsMin, const void* boundsMax) {
    QQuick3DGeometry_AddSubset((QQuick3DGeometry*)self, offset, count, (QVector3D*)boundsMin, (QVector3D*)boundsMax);
}

char* q_quick3dgeometry_target_data(const void* self) {
    libqt_string _str = QQuick3DGeometry_TargetData((QQuick3DGeometry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dgeometry_set_target_data(void* self, char* data) {
    QQuick3DGeometry_SetTargetData((QQuick3DGeometry*)self, qstring(data));
}

void q_quick3dgeometry_set_target_data2(void* self, int offset, char* data) {
    QQuick3DGeometry_SetTargetData2((QQuick3DGeometry*)self, offset, qstring(data));
}

QQuick3DGeometry__TargetAttribute* q_quick3dgeometry_target_attribute(const void* self, int index) {
    return QQuick3DGeometry_TargetAttribute((QQuick3DGeometry*)self, index);
}

int32_t q_quick3dgeometry_target_attribute_count(const void* self) {
    return QQuick3DGeometry_TargetAttributeCount((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_add_target_attribute(void* self, uint32_t targetId, int32_t semantic, int offset) {
    QQuick3DGeometry_AddTargetAttribute((QQuick3DGeometry*)self, targetId, semantic, offset);
}

void q_quick3dgeometry_add_target_attribute2(void* self, const void* att) {
    QQuick3DGeometry_AddTargetAttribute2((QQuick3DGeometry*)self, (QQuick3DGeometry__TargetAttribute*)att);
}

void q_quick3dgeometry_clear(void* self) {
    QQuick3DGeometry_Clear((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_geometry_node_dirty(void* self) {
    QQuick3DGeometry_GeometryNodeDirty((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_geometry_node_dirty(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_Connect_GeometryNodeDirty((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_geometry_changed(void* self) {
    QQuick3DGeometry_GeometryChanged((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_geometry_changed(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_Connect_GeometryChanged((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_mark_all_dirty(void* self) {
    QQuick3DGeometry_MarkAllDirty((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_mark_all_dirty(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_OnMarkAllDirty((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_super_mark_all_dirty(void* self) {
    QQuick3DGeometry_SuperMarkAllDirty((QQuick3DGeometry*)self);
}

const char* q_quick3dgeometry_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quick3dgeometry_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dgeometry_add_subset5(void* self, int offset, int count, const void* boundsMin, const void* boundsMax, const char* name) {
    QQuick3DGeometry_AddSubset5((QQuick3DGeometry*)self, offset, count, (QVector3D*)boundsMin, (QVector3D*)boundsMax, qstring(name));
}

void q_quick3dgeometry_add_target_attribute4(void* self, uint32_t targetId, int32_t semantic, int offset, int stride) {
    QQuick3DGeometry_AddTargetAttribute4((QQuick3DGeometry*)self, targetId, semantic, offset, stride);
}

QQmlParserStatus* q_quick3dgeometry_as_q_qml_parser_status(void* self) {
    return QQuick3DObject_AsQQmlParserStatus((QQuick3DObject*)self);
}

QQuick3DGeometry* q_quick3dgeometry_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuick3DGeometry*)QQuick3DObject_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

const char* q_quick3dgeometry_state(const void* self) {
    libqt_string _str = QQuick3DObject_State((QQuick3DObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dgeometry_set_state(void* self, const char* state) {
    QQuick3DObject_SetState((QQuick3DObject*)self, qstring(state));
}

libqt_list /* of QQuick3DObject* */ q_quick3dgeometry_child_items(const void* self) {
    libqt_list _arr = QQuick3DObject_ChildItems((QQuick3DObject*)self);
    return _arr;
}

QQuick3DObject* q_quick3dgeometry_parent_item(const void* self) {
    return QQuick3DObject_ParentItem((QQuick3DObject*)self);
}

void q_quick3dgeometry_update(void* self) {
    QQuick3DObject_Update((QQuick3DObject*)self);
}

void q_quick3dgeometry_set_parent_item(void* self, void* parentItem) {
    QQuick3DObject_SetParentItem((QQuick3DObject*)self, (QQuick3DObject*)parentItem);
}

void q_quick3dgeometry_parent_changed(void* self) {
    QQuick3DObject_ParentChanged((QQuick3DObject*)self);
}

void q_quick3dgeometry_on_parent_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ParentChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dgeometry_children_changed(void* self) {
    QQuick3DObject_ChildrenChanged((QQuick3DObject*)self);
}

void q_quick3dgeometry_on_children_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_ChildrenChanged((QQuick3DObject*)self, (intptr_t)callback);
}

void q_quick3dgeometry_state_changed(void* self) {
    QQuick3DObject_StateChanged((QQuick3DObject*)self);
}

void q_quick3dgeometry_on_state_changed(void* self, void (*callback)(void*)) {
    QQuick3DObject_Connect_StateChanged((QQuick3DObject*)self, (intptr_t)callback);
}

const char* q_quick3dgeometry_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quick3dgeometry_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quick3dgeometry_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quick3dgeometry_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quick3dgeometry_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quick3dgeometry_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quick3dgeometry_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quick3dgeometry_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quick3dgeometry_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quick3dgeometry_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quick3dgeometry_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quick3dgeometry_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quick3dgeometry_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quick3dgeometry_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quick3dgeometry_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quick3dgeometry_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quick3dgeometry_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quick3dgeometry_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quick3dgeometry_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quick3dgeometry_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quick3dgeometry_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quick3dgeometry_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quick3dgeometry_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quick3dgeometry_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quick3dgeometry_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quick3dgeometry_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quick3dgeometry_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quick3dgeometry_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quick3dgeometry_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quick3dgeometry_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quick3dgeometry_dynamic_property_names\n");
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

QBindingStorage* q_quick3dgeometry_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quick3dgeometry_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quick3dgeometry_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quick3dgeometry_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quick3dgeometry_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quick3dgeometry_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quick3dgeometry_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quick3dgeometry_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quick3dgeometry_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quick3dgeometry_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quick3dgeometry_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quick3dgeometry_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quick3dgeometry_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quick3dgeometry_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quick3dgeometry_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quick3dgeometry_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quick3dgeometry_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quick3dgeometry_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_quick3dgeometry_operator_assign(void* self, const void* param1) {
    QQmlParserStatus_OperatorAssign(q_quick3dgeometry_as_q_qml_parser_status(self), (QQmlParserStatus*)param1);
}

void q_quick3dgeometry_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DGeometry_ItemChange((QQuick3DGeometry*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dgeometry_super_item_change(void* self, int32_t param1, const void* param2) {
    QQuick3DGeometry_SuperItemChange((QQuick3DGeometry*)self, param1, (QQuick3DObject__ItemChangeData*)param2);
}

void q_quick3dgeometry_on_item_change(void* self, void (*callback)(void*, int32_t, const void*)) {
    QQuick3DGeometry_OnItemChange((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_class_begin(void* self) {
    QQuick3DGeometry_ClassBegin((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_super_class_begin(void* self) {
    QQuick3DGeometry_SuperClassBegin((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_class_begin(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_OnClassBegin((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_component_complete(void* self) {
    QQuick3DGeometry_ComponentComplete((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_super_component_complete(void* self) {
    QQuick3DGeometry_SuperComponentComplete((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_component_complete(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_OnComponentComplete((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_pre_sync(void* self) {
    QQuick3DGeometry_PreSync((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_super_pre_sync(void* self) {
    QQuick3DGeometry_SuperPreSync((QQuick3DGeometry*)self);
}

void q_quick3dgeometry_on_pre_sync(void* self, void (*callback)(void*)) {
    QQuick3DGeometry_OnPreSync((QQuick3DGeometry*)self, (intptr_t)callback);
}

bool q_quick3dgeometry_event(void* self, void* event) {
    return QQuick3DGeometry_Event((QQuick3DGeometry*)self, (QEvent*)event);
}

bool q_quick3dgeometry_super_event(void* self, void* event) {
    return QQuick3DGeometry_SuperEvent((QQuick3DGeometry*)self, (QEvent*)event);
}

void q_quick3dgeometry_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuick3DGeometry_OnEvent((QQuick3DGeometry*)self, (intptr_t)callback);
}

bool q_quick3dgeometry_event_filter(void* self, void* watched, void* event) {
    return QQuick3DGeometry_EventFilter((QQuick3DGeometry*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quick3dgeometry_super_event_filter(void* self, void* watched, void* event) {
    return QQuick3DGeometry_SuperEventFilter((QQuick3DGeometry*)self, (QObject*)watched, (QEvent*)event);
}

void q_quick3dgeometry_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuick3DGeometry_OnEventFilter((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_timer_event(void* self, void* event) {
    QQuick3DGeometry_TimerEvent((QQuick3DGeometry*)self, (QTimerEvent*)event);
}

void q_quick3dgeometry_super_timer_event(void* self, void* event) {
    QQuick3DGeometry_SuperTimerEvent((QQuick3DGeometry*)self, (QTimerEvent*)event);
}

void q_quick3dgeometry_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DGeometry_OnTimerEvent((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_child_event(void* self, void* event) {
    QQuick3DGeometry_ChildEvent((QQuick3DGeometry*)self, (QChildEvent*)event);
}

void q_quick3dgeometry_super_child_event(void* self, void* event) {
    QQuick3DGeometry_SuperChildEvent((QQuick3DGeometry*)self, (QChildEvent*)event);
}

void q_quick3dgeometry_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DGeometry_OnChildEvent((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_custom_event(void* self, void* event) {
    QQuick3DGeometry_CustomEvent((QQuick3DGeometry*)self, (QEvent*)event);
}

void q_quick3dgeometry_super_custom_event(void* self, void* event) {
    QQuick3DGeometry_SuperCustomEvent((QQuick3DGeometry*)self, (QEvent*)event);
}

void q_quick3dgeometry_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuick3DGeometry_OnCustomEvent((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_connect_notify(void* self, const void* signal) {
    QQuick3DGeometry_ConnectNotify((QQuick3DGeometry*)self, (QMetaMethod*)signal);
}

void q_quick3dgeometry_super_connect_notify(void* self, const void* signal) {
    QQuick3DGeometry_SuperConnectNotify((QQuick3DGeometry*)self, (QMetaMethod*)signal);
}

void q_quick3dgeometry_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DGeometry_OnConnectNotify((QQuick3DGeometry*)self, (intptr_t)callback);
}

void q_quick3dgeometry_disconnect_notify(void* self, const void* signal) {
    QQuick3DGeometry_DisconnectNotify((QQuick3DGeometry*)self, (QMetaMethod*)signal);
}

void q_quick3dgeometry_super_disconnect_notify(void* self, const void* signal) {
    QQuick3DGeometry_SuperDisconnectNotify((QQuick3DGeometry*)self, (QMetaMethod*)signal);
}

void q_quick3dgeometry_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QQuick3DGeometry_OnDisconnectNotify((QQuick3DGeometry*)self, (intptr_t)callback);
}

bool q_quick3dgeometry_is_component_complete(const void* self) {
    return QQuick3DGeometry_IsComponentComplete((QQuick3DGeometry*)self);
}

QObject* q_quick3dgeometry_sender(const void* self) {
    return QQuick3DGeometry_Sender((QQuick3DGeometry*)self);
}

int32_t q_quick3dgeometry_sender_signal_index(const void* self) {
    return QQuick3DGeometry_SenderSignalIndex((QQuick3DGeometry*)self);
}

int32_t q_quick3dgeometry_receivers(const void* self, const char* signal) {
    return QQuick3DGeometry_Receivers((QQuick3DGeometry*)self, signal);
}

bool q_quick3dgeometry_is_signal_connected(const void* self, const void* signal) {
    return QQuick3DGeometry_IsSignalConnected((QQuick3DGeometry*)self, (QMetaMethod*)signal);
}

void q_quick3dgeometry_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quick3dgeometry_delete(void* self) {
    QQuick3DGeometry_Delete((QQuick3DGeometry*)(self));
}

QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new() {
    return QQuick3DGeometry__Attribute_New();
}

QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new2(const void* other) {
    return QQuick3DGeometry__Attribute_New2((QQuick3DGeometry__Attribute*)other);
}

QQuick3DGeometry__Attribute* q_quick3dgeometry__attribute_new3(void* other) {
    return QQuick3DGeometry__Attribute_New3((QQuick3DGeometry__Attribute*)other);
}

void q_quick3dgeometry__attribute_copy_assign(void* self, void* other) {
    QQuick3DGeometry__Attribute_CopyAssign((QQuick3DGeometry__Attribute*)self, (QQuick3DGeometry__Attribute*)other);
}

void q_quick3dgeometry__attribute_move_assign(void* self, void* other) {
    QQuick3DGeometry__Attribute_MoveAssign((QQuick3DGeometry__Attribute*)self, (QQuick3DGeometry__Attribute*)other);
}

int32_t q_quick3dgeometry__attribute_semantic(const void* self) {
    return QQuick3DGeometry__Attribute_Semantic((QQuick3DGeometry__Attribute*)self);
}

void q_quick3dgeometry__attribute_set_semantic(void* self, int32_t semantic) {
    QQuick3DGeometry__Attribute_SetSemantic((QQuick3DGeometry__Attribute*)self, semantic);
}

int32_t q_quick3dgeometry__attribute_offset(const void* self) {
    return QQuick3DGeometry__Attribute_Offset((QQuick3DGeometry__Attribute*)self);
}

void q_quick3dgeometry__attribute_set_offset(void* self, int offset) {
    QQuick3DGeometry__Attribute_SetOffset((QQuick3DGeometry__Attribute*)self, offset);
}

int32_t q_quick3dgeometry__attribute_component_type(const void* self) {
    return QQuick3DGeometry__Attribute_ComponentType((QQuick3DGeometry__Attribute*)self);
}

void q_quick3dgeometry__attribute_set_component_type(void* self, int32_t componentType) {
    QQuick3DGeometry__Attribute_SetComponentType((QQuick3DGeometry__Attribute*)self, componentType);
}

void q_quick3dgeometry__attribute_delete(void* self) {
    QQuick3DGeometry__Attribute_Delete((QQuick3DGeometry__Attribute*)(self));
}

QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new() {
    return QQuick3DGeometry__TargetAttribute_New();
}

QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new2(const void* other) {
    return QQuick3DGeometry__TargetAttribute_New2((QQuick3DGeometry__TargetAttribute*)other);
}

QQuick3DGeometry__TargetAttribute* q_quick3dgeometry__targetattribute_new3(void* other) {
    return QQuick3DGeometry__TargetAttribute_New3((QQuick3DGeometry__TargetAttribute*)other);
}

void q_quick3dgeometry__targetattribute_copy_assign(void* self, void* other) {
    QQuick3DGeometry__TargetAttribute_CopyAssign((QQuick3DGeometry__TargetAttribute*)self, (QQuick3DGeometry__TargetAttribute*)other);
}

void q_quick3dgeometry__targetattribute_move_assign(void* self, void* other) {
    QQuick3DGeometry__TargetAttribute_MoveAssign((QQuick3DGeometry__TargetAttribute*)self, (QQuick3DGeometry__TargetAttribute*)other);
}

uint32_t q_quick3dgeometry__targetattribute_target_id(const void* self) {
    return QQuick3DGeometry__TargetAttribute_TargetId((QQuick3DGeometry__TargetAttribute*)self);
}

void q_quick3dgeometry__targetattribute_set_target_id(void* self, uint32_t targetId) {
    QQuick3DGeometry__TargetAttribute_SetTargetId((QQuick3DGeometry__TargetAttribute*)self, targetId);
}

QQuick3DGeometry__Attribute* q_quick3dgeometry__targetattribute_attr(const void* self) {
    return QQuick3DGeometry__TargetAttribute_Attr((QQuick3DGeometry__TargetAttribute*)self);
}

void q_quick3dgeometry__targetattribute_set_attr(void* self, void* attr) {
    QQuick3DGeometry__TargetAttribute_SetAttr((QQuick3DGeometry__TargetAttribute*)self, (QQuick3DGeometry__Attribute*)attr);
}

int32_t q_quick3dgeometry__targetattribute_stride(const void* self) {
    return QQuick3DGeometry__TargetAttribute_Stride((QQuick3DGeometry__TargetAttribute*)self);
}

void q_quick3dgeometry__targetattribute_set_stride(void* self, int stride) {
    QQuick3DGeometry__TargetAttribute_SetStride((QQuick3DGeometry__TargetAttribute*)self, stride);
}

void q_quick3dgeometry__targetattribute_delete(void* self) {
    QQuick3DGeometry__TargetAttribute_Delete((QQuick3DGeometry__TargetAttribute*)(self));
}
