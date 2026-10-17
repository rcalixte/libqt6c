#include "libqabstract3dseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqscatterdataproxy.hpp"
#include "libqscatter3dseries.hpp"
#include "libqscatter3dseries.h"

QScatter3DSeries* q_scatter3dseries_new() {
    return QScatter3DSeries_New();
}

QScatter3DSeries* q_scatter3dseries_new2(void* dataProxy) {
    return QScatter3DSeries_New2((QScatterDataProxy*)dataProxy);
}

QScatter3DSeries* q_scatter3dseries_new3(void* parent) {
    return QScatter3DSeries_New3((QObject*)parent);
}

QScatter3DSeries* q_scatter3dseries_new4(void* dataProxy, void* parent) {
    return QScatter3DSeries_New4((QScatterDataProxy*)dataProxy, (QObject*)parent);
}

const QMetaObject* q_scatter3dseries_meta_object(const void* self) {
    return QScatter3DSeries_MetaObject((QScatter3DSeries*)self);
}

void q_scatter3dseries_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QScatter3DSeries_OnMetaObject((QScatter3DSeries*)self, (intptr_t)callback);
}

const QMetaObject* q_scatter3dseries_super_meta_object(const void* self) {
    return QScatter3DSeries_SuperMetaObject((QScatter3DSeries*)self);
}

void* q_scatter3dseries_metacast(void* self, const char* param1) {
    return QScatter3DSeries_Metacast((QScatter3DSeries*)self, param1);
}

void q_scatter3dseries_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QScatter3DSeries_OnMetacast((QScatter3DSeries*)self, (intptr_t)callback);
}

void* q_scatter3dseries_super_metacast(void* self, const char* param1) {
    return QScatter3DSeries_SuperMetacast((QScatter3DSeries*)self, param1);
}

int32_t q_scatter3dseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatter3DSeries_Metacall((QScatter3DSeries*)self, param1, param2, param3);
}

void q_scatter3dseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QScatter3DSeries_OnMetacall((QScatter3DSeries*)self, (intptr_t)callback);
}

int32_t q_scatter3dseries_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatter3DSeries_SuperMetacall((QScatter3DSeries*)self, param1, param2, param3);
}

const char* q_scatter3dseries_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatter3dseries_set_data_proxy(void* self, void* proxy) {
    QScatter3DSeries_SetDataProxy((QScatter3DSeries*)self, (QScatterDataProxy*)proxy);
}

QScatterDataProxy* q_scatter3dseries_data_proxy(const void* self) {
    return QScatter3DSeries_DataProxy((QScatter3DSeries*)self);
}

void q_scatter3dseries_set_selected_item(void* self, int index) {
    QScatter3DSeries_SetSelectedItem((QScatter3DSeries*)self, index);
}

int32_t q_scatter3dseries_selected_item(const void* self) {
    return QScatter3DSeries_SelectedItem((QScatter3DSeries*)self);
}

int32_t q_scatter3dseries_invalid_selection_index() {
    return QScatter3DSeries_InvalidSelectionIndex();
}

void q_scatter3dseries_set_item_size(void* self, float size) {
    QScatter3DSeries_SetItemSize((QScatter3DSeries*)self, size);
}

float q_scatter3dseries_item_size(const void* self) {
    return QScatter3DSeries_ItemSize((QScatter3DSeries*)self);
}

void q_scatter3dseries_data_proxy_changed(void* self, void* proxy) {
    QScatter3DSeries_DataProxyChanged((QScatter3DSeries*)self, (QScatterDataProxy*)proxy);
}

void q_scatter3dseries_on_data_proxy_changed(void* self, void (*callback)(void*, void*)) {
    QScatter3DSeries_Connect_DataProxyChanged((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_selected_item_changed(void* self, int index) {
    QScatter3DSeries_SelectedItemChanged((QScatter3DSeries*)self, index);
}

void q_scatter3dseries_on_selected_item_changed(void* self, void (*callback)(void*, int)) {
    QScatter3DSeries_Connect_SelectedItemChanged((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_item_size_changed(void* self, float size) {
    QScatter3DSeries_ItemSizeChanged((QScatter3DSeries*)self, size);
}

void q_scatter3dseries_on_item_size_changed(void* self, void (*callback)(void*, float)) {
    QScatter3DSeries_Connect_ItemSizeChanged((QScatter3DSeries*)self, (intptr_t)callback);
}

const char* q_scatter3dseries_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scatter3dseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_scatter3dseries_type(const void* self) {
    return QAbstract3DSeries_Type((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_item_label_format(void* self, const char* format) {
    QAbstract3DSeries_SetItemLabelFormat((QAbstract3DSeries*)self, qstring(format));
}

const char* q_scatter3dseries_item_label_format(const void* self) {
    libqt_string _str = QAbstract3DSeries_ItemLabelFormat((QAbstract3DSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatter3dseries_set_visible(void* self, bool visible) {
    QAbstract3DSeries_SetVisible((QAbstract3DSeries*)self, visible);
}

bool q_scatter3dseries_is_visible(const void* self) {
    return QAbstract3DSeries_IsVisible((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_mesh(void* self, int32_t mesh) {
    QAbstract3DSeries_SetMesh((QAbstract3DSeries*)self, mesh);
}

int32_t q_scatter3dseries_mesh(const void* self) {
    return QAbstract3DSeries_Mesh((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_mesh_smooth(void* self, bool enable) {
    QAbstract3DSeries_SetMeshSmooth((QAbstract3DSeries*)self, enable);
}

bool q_scatter3dseries_is_mesh_smooth(const void* self) {
    return QAbstract3DSeries_IsMeshSmooth((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_mesh_rotation(void* self, const void* rotation) {
    QAbstract3DSeries_SetMeshRotation((QAbstract3DSeries*)self, (QQuaternion*)rotation);
}

QQuaternion* q_scatter3dseries_mesh_rotation(const void* self) {
    return QAbstract3DSeries_MeshRotation((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_mesh_axis_and_angle(void* self, const void* axis, float angle) {
    QAbstract3DSeries_SetMeshAxisAndAngle((QAbstract3DSeries*)self, (QVector3D*)axis, angle);
}

void q_scatter3dseries_set_user_defined_mesh(void* self, const char* fileName) {
    QAbstract3DSeries_SetUserDefinedMesh((QAbstract3DSeries*)self, qstring(fileName));
}

const char* q_scatter3dseries_user_defined_mesh(const void* self) {
    libqt_string _str = QAbstract3DSeries_UserDefinedMesh((QAbstract3DSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatter3dseries_set_color_style(void* self, int32_t style) {
    QAbstract3DSeries_SetColorStyle((QAbstract3DSeries*)self, style);
}

int32_t q_scatter3dseries_color_style(const void* self) {
    return QAbstract3DSeries_ColorStyle((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_base_color(void* self, const void* color) {
    QAbstract3DSeries_SetBaseColor((QAbstract3DSeries*)self, (QColor*)color);
}

QColor* q_scatter3dseries_base_color(const void* self) {
    return QAbstract3DSeries_BaseColor((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_base_gradient(void* self, const void* gradient) {
    QAbstract3DSeries_SetBaseGradient((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

QLinearGradient* q_scatter3dseries_base_gradient(const void* self) {
    return QAbstract3DSeries_BaseGradient((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_single_highlight_color(void* self, const void* color) {
    QAbstract3DSeries_SetSingleHighlightColor((QAbstract3DSeries*)self, (QColor*)color);
}

QColor* q_scatter3dseries_single_highlight_color(const void* self) {
    return QAbstract3DSeries_SingleHighlightColor((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_single_highlight_gradient(void* self, const void* gradient) {
    QAbstract3DSeries_SetSingleHighlightGradient((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

QLinearGradient* q_scatter3dseries_single_highlight_gradient(const void* self) {
    return QAbstract3DSeries_SingleHighlightGradient((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_multi_highlight_color(void* self, const void* color) {
    QAbstract3DSeries_SetMultiHighlightColor((QAbstract3DSeries*)self, (QColor*)color);
}

QColor* q_scatter3dseries_multi_highlight_color(const void* self) {
    return QAbstract3DSeries_MultiHighlightColor((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_multi_highlight_gradient(void* self, const void* gradient) {
    QAbstract3DSeries_SetMultiHighlightGradient((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

QLinearGradient* q_scatter3dseries_multi_highlight_gradient(const void* self) {
    return QAbstract3DSeries_MultiHighlightGradient((QAbstract3DSeries*)self);
}

void q_scatter3dseries_set_name(void* self, const char* name) {
    QAbstract3DSeries_SetName((QAbstract3DSeries*)self, qstring(name));
}

const char* q_scatter3dseries_name(const void* self) {
    libqt_string _str = QAbstract3DSeries_Name((QAbstract3DSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scatter3dseries_item_label(const void* self) {
    libqt_string _str = QAbstract3DSeries_ItemLabel((QAbstract3DSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatter3dseries_set_item_label_visible(void* self, bool visible) {
    QAbstract3DSeries_SetItemLabelVisible((QAbstract3DSeries*)self, visible);
}

bool q_scatter3dseries_is_item_label_visible(const void* self) {
    return QAbstract3DSeries_IsItemLabelVisible((QAbstract3DSeries*)self);
}

void q_scatter3dseries_item_label_format_changed(void* self, const char* format) {
    QAbstract3DSeries_ItemLabelFormatChanged((QAbstract3DSeries*)self, qstring(format));
}

void q_scatter3dseries_on_item_label_format_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DSeries_Connect_ItemLabelFormatChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_visibility_changed(void* self, bool visible) {
    QAbstract3DSeries_VisibilityChanged((QAbstract3DSeries*)self, visible);
}

void q_scatter3dseries_on_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DSeries_Connect_VisibilityChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_mesh_changed(void* self, int32_t mesh) {
    QAbstract3DSeries_MeshChanged((QAbstract3DSeries*)self, mesh);
}

void q_scatter3dseries_on_mesh_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DSeries_Connect_MeshChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_mesh_smooth_changed(void* self, bool enabled) {
    QAbstract3DSeries_MeshSmoothChanged((QAbstract3DSeries*)self, enabled);
}

void q_scatter3dseries_on_mesh_smooth_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DSeries_Connect_MeshSmoothChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_mesh_rotation_changed(void* self, const void* rotation) {
    QAbstract3DSeries_MeshRotationChanged((QAbstract3DSeries*)self, (QQuaternion*)rotation);
}

void q_scatter3dseries_on_mesh_rotation_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_MeshRotationChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_user_defined_mesh_changed(void* self, const char* fileName) {
    QAbstract3DSeries_UserDefinedMeshChanged((QAbstract3DSeries*)self, qstring(fileName));
}

void q_scatter3dseries_on_user_defined_mesh_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DSeries_Connect_UserDefinedMeshChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_color_style_changed(void* self, int32_t style) {
    QAbstract3DSeries_ColorStyleChanged((QAbstract3DSeries*)self, style);
}

void q_scatter3dseries_on_color_style_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DSeries_Connect_ColorStyleChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_base_color_changed(void* self, const void* color) {
    QAbstract3DSeries_BaseColorChanged((QAbstract3DSeries*)self, (QColor*)color);
}

void q_scatter3dseries_on_base_color_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_BaseColorChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_base_gradient_changed(void* self, const void* gradient) {
    QAbstract3DSeries_BaseGradientChanged((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

void q_scatter3dseries_on_base_gradient_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_BaseGradientChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_single_highlight_color_changed(void* self, const void* color) {
    QAbstract3DSeries_SingleHighlightColorChanged((QAbstract3DSeries*)self, (QColor*)color);
}

void q_scatter3dseries_on_single_highlight_color_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_SingleHighlightColorChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_single_highlight_gradient_changed(void* self, const void* gradient) {
    QAbstract3DSeries_SingleHighlightGradientChanged((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

void q_scatter3dseries_on_single_highlight_gradient_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_SingleHighlightGradientChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_multi_highlight_color_changed(void* self, const void* color) {
    QAbstract3DSeries_MultiHighlightColorChanged((QAbstract3DSeries*)self, (QColor*)color);
}

void q_scatter3dseries_on_multi_highlight_color_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_MultiHighlightColorChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_multi_highlight_gradient_changed(void* self, const void* gradient) {
    QAbstract3DSeries_MultiHighlightGradientChanged((QAbstract3DSeries*)self, (QLinearGradient*)gradient);
}

void q_scatter3dseries_on_multi_highlight_gradient_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DSeries_Connect_MultiHighlightGradientChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_name_changed(void* self, const char* name) {
    QAbstract3DSeries_NameChanged((QAbstract3DSeries*)self, qstring(name));
}

void q_scatter3dseries_on_name_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DSeries_Connect_NameChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_item_label_changed(void* self, const char* label) {
    QAbstract3DSeries_ItemLabelChanged((QAbstract3DSeries*)self, qstring(label));
}

void q_scatter3dseries_on_item_label_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DSeries_Connect_ItemLabelChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_item_label_visibility_changed(void* self, bool visible) {
    QAbstract3DSeries_ItemLabelVisibilityChanged((QAbstract3DSeries*)self, visible);
}

void q_scatter3dseries_on_item_label_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DSeries_Connect_ItemLabelVisibilityChanged((QAbstract3DSeries*)self, (intptr_t)callback);
}

const char* q_scatter3dseries_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatter3dseries_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scatter3dseries_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scatter3dseries_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scatter3dseries_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scatter3dseries_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scatter3dseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scatter3dseries_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scatter3dseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scatter3dseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scatter3dseries_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scatter3dseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scatter3dseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scatter3dseries_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scatter3dseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scatter3dseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scatter3dseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scatter3dseries_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scatter3dseries_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scatter3dseries_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scatter3dseries_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scatter3dseries_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scatter3dseries_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scatter3dseries_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scatter3dseries_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scatter3dseries_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scatter3dseries_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scatter3dseries_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scatter3dseries_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scatter3dseries_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scatter3dseries_dynamic_property_names\n");
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

QBindingStorage* q_scatter3dseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scatter3dseries_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scatter3dseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scatter3dseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scatter3dseries_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scatter3dseries_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scatter3dseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scatter3dseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scatter3dseries_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scatter3dseries_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scatter3dseries_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scatter3dseries_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scatter3dseries_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scatter3dseries_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scatter3dseries_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scatter3dseries_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scatter3dseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scatter3dseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_scatter3dseries_event(void* self, void* event) {
    return QScatter3DSeries_Event((QScatter3DSeries*)self, (QEvent*)event);
}

bool q_scatter3dseries_super_event(void* self, void* event) {
    return QScatter3DSeries_SuperEvent((QScatter3DSeries*)self, (QEvent*)event);
}

void q_scatter3dseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QScatter3DSeries_OnEvent((QScatter3DSeries*)self, (intptr_t)callback);
}

bool q_scatter3dseries_event_filter(void* self, void* watched, void* event) {
    return QScatter3DSeries_EventFilter((QScatter3DSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scatter3dseries_super_event_filter(void* self, void* watched, void* event) {
    return QScatter3DSeries_SuperEventFilter((QScatter3DSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_scatter3dseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QScatter3DSeries_OnEventFilter((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_timer_event(void* self, void* event) {
    QScatter3DSeries_TimerEvent((QScatter3DSeries*)self, (QTimerEvent*)event);
}

void q_scatter3dseries_super_timer_event(void* self, void* event) {
    QScatter3DSeries_SuperTimerEvent((QScatter3DSeries*)self, (QTimerEvent*)event);
}

void q_scatter3dseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QScatter3DSeries_OnTimerEvent((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_child_event(void* self, void* event) {
    QScatter3DSeries_ChildEvent((QScatter3DSeries*)self, (QChildEvent*)event);
}

void q_scatter3dseries_super_child_event(void* self, void* event) {
    QScatter3DSeries_SuperChildEvent((QScatter3DSeries*)self, (QChildEvent*)event);
}

void q_scatter3dseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QScatter3DSeries_OnChildEvent((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_custom_event(void* self, void* event) {
    QScatter3DSeries_CustomEvent((QScatter3DSeries*)self, (QEvent*)event);
}

void q_scatter3dseries_super_custom_event(void* self, void* event) {
    QScatter3DSeries_SuperCustomEvent((QScatter3DSeries*)self, (QEvent*)event);
}

void q_scatter3dseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QScatter3DSeries_OnCustomEvent((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_connect_notify(void* self, const void* signal) {
    QScatter3DSeries_ConnectNotify((QScatter3DSeries*)self, (QMetaMethod*)signal);
}

void q_scatter3dseries_super_connect_notify(void* self, const void* signal) {
    QScatter3DSeries_SuperConnectNotify((QScatter3DSeries*)self, (QMetaMethod*)signal);
}

void q_scatter3dseries_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QScatter3DSeries_OnConnectNotify((QScatter3DSeries*)self, (intptr_t)callback);
}

void q_scatter3dseries_disconnect_notify(void* self, const void* signal) {
    QScatter3DSeries_DisconnectNotify((QScatter3DSeries*)self, (QMetaMethod*)signal);
}

void q_scatter3dseries_super_disconnect_notify(void* self, const void* signal) {
    QScatter3DSeries_SuperDisconnectNotify((QScatter3DSeries*)self, (QMetaMethod*)signal);
}

void q_scatter3dseries_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QScatter3DSeries_OnDisconnectNotify((QScatter3DSeries*)self, (intptr_t)callback);
}

QObject* q_scatter3dseries_sender(const void* self) {
    return QScatter3DSeries_Sender((QScatter3DSeries*)self);
}

int32_t q_scatter3dseries_sender_signal_index(const void* self) {
    return QScatter3DSeries_SenderSignalIndex((QScatter3DSeries*)self);
}

int32_t q_scatter3dseries_receivers(const void* self, const char* signal) {
    return QScatter3DSeries_Receivers((QScatter3DSeries*)self, signal);
}

bool q_scatter3dseries_is_signal_connected(const void* self, const void* signal) {
    return QScatter3DSeries_IsSignalConnected((QScatter3DSeries*)self, (QMetaMethod*)signal);
}

void q_scatter3dseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scatter3dseries_delete(void* self) {
    QScatter3DSeries_Delete((QScatter3DSeries*)(self));
}
